#!/usr/bin/env python3
"""srctree.py: files every C file of src/ into its folder (src/ is a tree; tools/srcfiles.py finds a file by its stem).

    python3 tools/srctree.py            the plan: files that would move, and the count per folder
    python3 tools/srctree.py --apply    move them (git mv when tracked); a new file a tool wrote at the top of src/ goes the same way

No path of the original sources survives in the executable, so the tree follows the code's own evidence:
- game code (below GAME_END): src/<folder>/ from docs/sourcetree.tsv, the original source files (cells: tools/srcmap.py)
  with the folder each was given (src/README.md says how); a file goes where most of its functions' cells are.
- library code: src/lib/<library>/ by the names of its functions and where they sit (lib_of).
"""
import bisect
import collections
import os
import re
import subprocess
import sys

import toolpath  # noqa: F401
import srcfiles

GAME_END = 0x0C1769D0          # the game's own code ends here; the NAOMI-style library and the C runtime follow
KATANA = 0x0C2AE000            # the Katana SDK libraries and CRI middleware
_CELLS = []


def _cells():
    if not _CELLS and os.path.exists('docs/sourcetree.tsv'):
        for line in open('docs/sourcetree.tsv'):
            if line.startswith('#') or not line.strip():
                continue
            p = line.rstrip('\n').split('\t')
            _CELLS.append((int(p[0], 16), int(p[1], 16), p[3]))
        _CELLS.sort()
    return _CELLS


def game_folder(addr):
    """The folder of the game code at addr (docs/sourcetree.tsv), or game/unsorted."""
    rows = _cells()
    i = bisect.bisect_right([r[0] for r in rows], addr) - 1
    if i >= 0 and addr < rows[i][1]:
        return rows[i][2]
    return 'game/unsorted'


def lib_of(addr, name=''):
    """The library folder of code at addr (name: its function name, which decides between the libraries of one range)."""
    if name.startswith(('ADX', 'adx', 'CRI', 'cri', 'mwSfd', 'SFD', 'sfd', 'ahx', 'AHX')):
        return 'cri'
    if addr < KATANA:
        if name.startswith('_') or re.match(r'(mem|str|sprintf|printf|vsprintf|ato|abs|rand|srand|sqrt|sin|cos|floor|ceil|fmod)', name):
            return 'libc'
        return 'naomi'
    return 'katana'


def functions():
    fa = {}
    for line in open('functions.txt'):
        p = line.split()
        if len(p) == 4 and p[0] == 'F':
            fa[p[3]] = int(p[1], 16)
    return fa


DEF = re.compile(r'^[A-Za-z_][\w \*]*?\b(\w+)\s*\([^;]*\)\s*\{?\s*$', re.M)


def addresses(path, fa):
    """The original addresses of the functions a file defines (its @unit start first), in order."""
    t = open(path, errors='replace').read()
    m = re.match(r'/\* @unit ([0-9a-fA-F]+)-', t)
    plain = re.sub(r'/\*.*?\*/', '', t, flags=re.S)
    own = re.sub(r'^(gen|fy|fx|m|hand|hx)_', '', srcfiles.stem(path))         # fy_<function>.c, hand_<function>.c: named after it
    names = [n for n in [own] + re.findall(r'inline_asm\((\w+)\)', t) + [m_.group(1) for m_ in DEF.finditer(plain)] if n in fa]
    out = sorted(set(fa[n] for n in names))
    if m:
        out = [int(m.group(1), 16)] + out
    if not out:
        h = re.search(r'0(c0[0-9a-f]{5})(?![0-9a-f])', srcfiles.stem(path) + ' ' + t, re.I)      # the address in its name or header
        out = [int(h.group(1), 16)] if h else []
    return out


def plan():
    fa = functions()
    byaddr = {a: n for n, a in fa.items()}
    dest = {}
    for p in srcfiles.files():
        a = addresses(p, fa)
        if not a:
            dest[p] = None
            continue
        game = collections.Counter(game_folder(x) for x in a if x < GAME_END)
        if game:
            dest[p] = game.most_common(1)[0][0]
        else:
            dest[p] = 'lib/' + collections.Counter(lib_of(x, byaddr.get(x, '')) for x in a).most_common(1)[0][0]
    return dest


def main(argv):
    apply = '--apply' in argv
    dest = plan()
    moves, unplaced, per = [], [], {}
    for p, d in sorted(dest.items()):
        if d is None:
            unplaced.append(p)
            continue
        per[d] = per.get(d, 0) + 1
        target = 'src/%s/%s' % (d, os.path.basename(p))
        if p != target:
            moves.append((p, target))
    for d in sorted(per):
        print('%-28s %4d' % ('src/' + d, per[d]))
    print('%d files to move%s' % (len(moves), '' if apply else ' (--apply moves them)'))
    if unplaced:
        print('no address found, left where they are: ' + ', '.join(unplaced))
    if not apply:
        return
    tracked = set(subprocess.run(['git', 'ls-files', 'src'], capture_output=True, text=True).stdout.split())
    for src, dst in moves:
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        if src in tracked:
            subprocess.run(['git', 'mv', src, dst], check=True)
        else:
            os.rename(src, dst)
    for root, dirs, files in os.walk('src', topdown=False):        # folders a move emptied
        if root != 'src' and not os.listdir(root):
            os.rmdir(root)


if __name__ == '__main__':
    main(sys.argv)
