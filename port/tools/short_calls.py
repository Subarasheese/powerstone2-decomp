#!/usr/bin/env python3
"""short_calls.py ALL.DIS: generated calls that pass fewer arguments than the original call sets up.

A generated call that drops arguments still passes tools/equiv.py when the dropped register happens to hold the right
value in the test cases; on the host the callee reads whatever is left in the register. For each call the original
makes to a named function (jsr through a pool word, bsr, or a tail jmp), the argument registers the caller writes in the
straight-line code before it (r4-r7, fr4-fr11, delay slot included) and the words it pushes on the stack are the
arguments it passes. The C of the same caller is then searched for its calls to that callee; when every one of them
passes fewer arguments than the original sets, the pair is listed. Registers passed on untouched (the caller's own
arguments) are not counted, so a dropped pass-through argument is missed: this lists what is certain.

ALL.DIS is tools/shdis.py's listing of the code (python3 tools/shdis.py 0c010000 0c2fa000 > ALL.DIS).

    python3 port/tools/short_calls.py ALL.DIS [--summary]
"""
import os
import re
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
INSN = re.compile(r'^([0-9a-f]{8}) ([0-9a-f]{4})  (\S+)\s*(.*?)(?:\s*;\s*(.*))?$')
LABEL = re.compile(r'^([A-Za-z_]\w*):$')
BREAKS = ('bt', 'bf', 'bt/s', 'bf/s', 'bra', 'braf', 'rts', 'jmp', 'jsr', 'bsr', 'bsrf', 'rte')


def dest(op, args):
    """the register an instruction writes (r4..r7 as 'r4'.., fr4..fr11 as 'fr4'..), or None"""
    if not args or op.startswith(('cmp', 'tst', 'fcmp', 'pref', 'lds', 'ldc', 'ocb', 'movca')):
        return None
    parts = [a.strip() for a in re.split(r',(?![^()]*\))', args)]
    d = parts[-1]
    if d.startswith('@'):
        return None
    if op in ('fmov', 'fmov.s') and len(parts) == 2 and d.startswith(('dr', 'xd')):
        return None
    if re.fullmatch(r'r\d+|fr\d+', d):
        return d
    if op in ('ftrv',):
        return None
    return None


def original_calls(path):
    """(caller, callee) -> max ints, max floats, max stack words the original sets up at a call"""
    out = {}
    func = None
    window = []                       # instructions since the last break, oldest first
    pending = None                    # a call waiting for its delay slot
    post = None                       # a call waiting to see whether the caller pops stack arguments after it
    pool_names = {}
    lines = open(path, errors='replace').read().split('\n')
    for line in lines:
        m = LABEL.match(line)
        if m:
            func = m.group(1)
            window = []
            continue
        m = INSN.match(line)
        if not m:
            continue
        addr, _, op, args, comment = m.groups()
        if op.startswith('.'):
            window = []
            continue
        if post is not None:          # the instruction after a call: add #N,r15 pops N/4 words of stack arguments
            key, ints, floats, pushes = post
            stack = 0
            mm = re.fullmatch(r'#(\d+),r15', args or '')
            if op == 'add' and mm and pushes:
                stack = min(pushes, int(mm.group(1)) // 4)
            pi, pf, ps = out.get(key, (0, 0, 0))
            out[key] = (max(pi, ints), max(pf, floats), max(ps, stack))
            post = None
        if pending is not None:
            window.append((op, args, comment))          # the delay slot
            callee, regs = pending
            ints = floats = pushes = 0
            for o, a, _c in window:
                d = dest(o, a)
                if d and re.fullmatch(r'r[4-7]', d):
                    ints = max(ints, int(d[1:]) - 3)
                elif d and re.fullmatch(r'fr([4-9]|1[01])', d):
                    floats = max(floats, int(d[2:]) - 3)
                if o == 'mov.l' and a.endswith('@-r15'):
                    pushes += 1
            post = ((func, callee), ints, floats, pushes)
            pending = None
            window = []
            continue
        if op in ('jsr', 'jmp'):
            reg = args.strip('@')
            callee = None
            for o, a, c in reversed(window):
                if o == 'mov.l' and a.endswith(',' + reg) and c and '=' in c:
                    p = c.split()
                    callee = p[1] if len(p) > 1 else None
                    break
            if callee:
                pending = (callee, reg)
                continue
            window = []
            continue
        if op == 'bsr' and comment:
            pending = (comment.split()[0], None)
            continue
        if op in BREAKS:
            window = []
            continue
        window.append((op, args, comment))
    return out


def args_of(text, i):
    depth, start, out = 0, i + 1, []
    for j in range(i, len(text)):
        c = text[j]
        if c == '(':
            depth += 1
        elif c == ')':
            depth -= 1
            if depth == 0:
                a = text[start:j].strip()
                if a:
                    out.append(a)
                return out
        elif c == ',' and depth == 1:
            out.append(text[start:j].strip())
            start = j + 1
    return None


FUNC_DEF = re.compile(r'^(?:[A-Za-z_][\w \t\*]*?)\b(\w+)\s*\(([^;{)]*)\)\s*\n\{', re.M)


def c_calls():
    """(caller, callee) -> [(file, line, number of arguments)]"""
    out = {}
    for d, _, fs in os.walk(os.path.join(ROOT, 'src')):
        for f in fs:
            if not f.endswith('.c'):
                continue
            p = os.path.join(d, f)
            t = open(p, errors='replace').read()
            defs = [(m.start(), m.group(1)) for m in FUNC_DEF.finditer(t)]
            for k, (start, caller) in enumerate(defs):
                end = defs[k + 1][0] if k + 1 < len(defs) else len(t)
                body = t[start:end]
                body_from = body.index('{')
                for m in re.finditer(r'\b(\w+)\s*\(|\((\w+)\)\)\s*\(', body[body_from:]):
                    callee = m.group(1) or m.group(2)
                    pos = body_from + m.end() - 1
                    a = args_of(body, pos)
                    if a is None:
                        continue
                    line = t.count('\n', 0, start + pos) + 1
                    out.setdefault((caller, callee), []).append((os.path.relpath(p, ROOT), line, len(a)))
    return out


def main():
    if len(sys.argv) < 2:
        sys.exit(__doc__)
    orig = original_calls(sys.argv[1])
    cc = c_calls()
    short = []
    for key, (ints, floats, stack) in sorted((k, v) for k, v in orig.items() if k[0] and k[1]):
        need = ints + floats + stack
        if need == 0 or key not in cc:
            continue
        sites = cc[key]
        best = max(n for _, _, n in sites)
        if best < need:
            short.append((key[0], key[1], best, ints, floats, stack, sites[0][0], sites[0][1]))
    if '--summary' in sys.argv:
        print('%d caller/callee pairs whose C passes fewer arguments than the original sets up' % len(short))
        return
    for s in short:
        print('%s -> %s: C passes %d, original sets %d int + %d float + %d stack  (%s:%d)' % s)


if __name__ == '__main__':
    main()
