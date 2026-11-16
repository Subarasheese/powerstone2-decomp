#!/usr/bin/env python3
"""fuzzy_pairs.py: pair this repo's functions with their nearest proven function in a sibling decomp. Stdlib only.

    python3 tools/4-boosts/fuzzy_pairs.py <sibling repo> [--from HEX --to HEX] [--min 0.5] [--all] > pairs.tsv

port_equiv.py ports C only for near-identical code (masked equality or a 0.9 ratio). A sequel recompiles and edits
most functions: the registers move, a field is added, a branch is new. This tool finds the counterpart anyway, as a
starting point for C written by hand (the sibling's C, read and adapted, then proven here by tools/equiv.py on this
repo's own cases). It never writes C and never names anything: it prints one line per function of this repo:

    <addr> <name> <size> <score> <shape> <calls> <sibling name> <sibling C file> <sibling size>

Similarity is on instruction shapes: each SH-4 word reduced to its opcode (high and low nibble; register fields
dropped; immediates of mov #imm / add #imm kept as a class), so a register reallocation does not hide a match.
Candidates come from shared 4-grams of shapes; the best is ranked by difflib's ratio on the whole shape sequence
(`shape`) plus the share of named callees both pools name (`calls`); score = 0.75 shape + 0.25 calls (calls absent on
either side: shape alone). Only functions of this repo with no C yet are listed, unless --all.
Sibling functions are those in its tests/equivalent.txt that have C (a tests/<stem>/<function>.json).
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import srcfiles  # noqa: E402
import collections
import os
import struct
import sys
from difflib import SequenceMatcher


def load(path):
    r = {'path': path}
    r['base'] = int(open(os.path.join(path, 'BASE')).read().strip(), 16) & 0x1FFFFFFF | 0x0C000000
    exe = open(os.path.join(path, '1ST_READ.BIN'), 'rb').read()
    r['exe'] = exe + b'\0' * (-len(exe) % 4)
    r['funcs'] = []
    r['name_at'] = {}
    for line in open(os.path.join(path, 'functions.txt')):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F':
            a, sz, n = int(p[1], 16), int(p[2]), p[3]
            r['funcs'].append((a, sz, n))
            r['name_at'].setdefault(a, n)
    eq = os.path.join(path, 'tests', 'equivalent.txt')
    r['equiv'] = set(l.split()[0] for l in open(eq) if l.strip()) if os.path.exists(eq) else set()
    r['stem'] = {}
    tdir = os.path.join(path, 'tests')
    if os.path.isdir(tdir):
        for stem in os.listdir(tdir):
            d = os.path.join(tdir, stem)
            if os.path.isdir(d):
                for f in os.listdir(d):
                    if f.endswith('.json'):
                        r['stem'].setdefault(f[:-5], stem)
    return r


def words(r, a, sz):
    off = a - r['base']
    n = max(0, min(sz, len(r['exe']) - off)) // 2
    return struct.unpack_from('<%dH' % n, r['exe'], off) if n else ()


def shapes(ws):
    """Opcode shapes, with the literal-pool words a load reaches left out (they are data, not instructions)."""
    pool = set()
    for i, w in enumerate(ws):
        hi = w >> 12
        if hi == 0xD:
            t = ((2 * i + 4) & ~3) // 2 + 2 * (w & 0xFF)
            pool.update((t, t + 1))
        elif hi == 0x9:
            pool.add(i + 2 + (w & 0xFF))
    out = []
    for i, w in enumerate(ws):
        if i in pool:
            continue
        hi = w >> 12
        if hi in (0x7, 0xE):                       # add #imm / mov #imm: the sign and size class of the immediate
            v = w & 0xFF
            v = v - 256 if v > 127 else v
            out.append((hi << 8) | (0 if v == 0 else 1 if 0 < v < 16 else 2 if v > 0 else 3))
        elif hi in (0x8, 0xC):                         # 8x / Cx families: the sub-op is in bits 8-11
            out.append((hi << 8) | ((w >> 8) & 0xF))
        elif hi in (0x9, 0xA, 0xB, 0xD):
            out.append(hi << 8)
        else:
            out.append((hi << 8) | (w & 0xF) | (0x10 * ((w & 0xF0) >> 4) if hi in (0x0, 0x4) else 0))
    return out


def callees(r, a, sz):
    """Names of the named functions this function's literal pool points at (FUN_ names do not count)."""
    out = set()
    ws = words(r, a, sz)
    off = a - r['base']
    for i, w in enumerate(ws):
        if w >> 12 == 0xD:
            t = off + ((2 * i + 4) & ~3) + 4 * (w & 0xFF)
            if t + 4 <= len(r['exe']):
                v = struct.unpack_from('<I', r['exe'], t)[0] & 0x1FFFFFFF | 0x0C000000
                n = r['name_at'].get(v)
                if n and not n.startswith('FUN_') and not n.startswith('thunk_'):
                    out.add(n)
    return out


def grams(s, k=4):
    return set(tuple(s[i:i + k]) for i in range(len(s) - k + 1)) or ({tuple(s)} if s else set())


def main(argv):
    args = [a for a in argv[1:]]
    if not args or args[0].startswith('-'):
        sys.exit(__doc__)
    opt = lambda k, d: args[args.index(k) + 1] if k in args else d
    lo, hi = int(opt('--from', '0'), 16), int(opt('--to', 'ffffffff'), 16)
    mn = float(opt('--min', '0.5'))
    sib, me = load(args[0]), load('.')
    # the sibling's proven functions with C
    S = []
    for a, sz, n in sib['funcs']:
        if n in sib['equiv'] and n in sib['stem'] and sz >= 8:
            sh = shapes(words(sib, a, sz))
            if sh:
                S.append((n, sz, sh, callees(sib, a, sz), sib['stem'][n]))
    index = collections.defaultdict(list)
    df = collections.Counter()
    for j, s in enumerate(S):
        for g in grams(s[2]):
            index[g].append(j)
            df[g] += 1
    rare = len(S) // 20 or 1                     # grams in more than 5% of the functions say nothing
    print('# addr\tname\tsize\tscore\tshape\tcalls\tsibling\tsibling_file\tsibling_size')
    done = me['equiv'] if '--all' not in args else set()
    for a, sz, n in me['funcs']:
        if not lo <= a < hi or n in done or sz < 8:
            continue
        sh = shapes(words(me, a, sz))
        if len(sh) < 3:
            continue
        hits = collections.Counter()
        for g in grams(sh):
            if df[g] <= rare:
                for j in index.get(g, ()):
                    hits[j] += 1
        cand = [j for j, _ in hits.most_common(25)]
        cs = callees(me, a, sz)
        best = None
        for j in cand:
            s = S[j]
            if not 0.5 <= len(s[2]) / len(sh) <= 2.0:
                continue
            ratio = SequenceMatcher(None, sh, s[2], autojunk=False).ratio()
            calls = len(cs & s[3]) / len(cs | s[3]) if cs and s[3] else None
            score = ratio if calls is None else 0.75 * ratio + 0.25 * calls
            if best is None or score > best[0]:
                best = (score, ratio, calls, s)
        if best and best[0] >= mn:
            score, ratio, calls, s = best
            path = srcfiles.path(s[4], sib['path']) if s[4] else ''
            path = os.path.relpath(path, sib['path']) if path else '?'
            print('%08x\t%s\t%d\t%.3f\t%.3f\t%s\t%s\t%s\t%d' % (a, n, sz, score, ratio,
                  '-' if calls is None else '%.2f' % calls, s[0], path, s[1]))
        sys.stdout.flush()


if __name__ == '__main__':
    main(sys.argv)
