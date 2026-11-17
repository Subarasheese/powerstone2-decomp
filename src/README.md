# src/: the C, by subsystem

Nothing of the original source paths survives in the executable, so this tree is built from the code's own evidence, in two
steps.

**1. The original source files (cells).** `tools/srcmap.py` splits the link order into cells: runs of functions that
must come from one source file, because one reads a literal-pool word placed in another (SHC shares a pool among a
file's functions), calls it with `bsr` (which only reaches its own file) or branches into it. A cell is at most one
original file: two cells next to each other may still be one. The game code (`0C010000`-`0C1769D0`) has 1,342 cells.
They are listed, with their folder and the evidence for it, in `docs/sourcetree.tsv`.

**2. The subsystem of each cell.** Most cells were given a folder by the Power Stone 1 decomp
([pwrstn-decomp](https://github.com/Subarasheese/pwrstn-decomp)), whose tree is laid out by subsystem:
- a function with the same code (and name) in Power Stone 1, or a near-identical one (`tools/4-boosts/fuzzy_pairs.py`,
  similarity 0.75 or more), votes for the folder of its Power Stone 1 file;
- a few cells are placed by the strings they print (the network lobby, debug screens, the sound test, the boot screens);
- a cell with no vote of its own takes the folder of its neighbours when the nearest voted cells on both sides agree
  (the original was linked subsystem by subsystem: `0C068ACC`-`0C0BB090` is fighter code, `0C0BB994`-`0C0C1D6C` AI,
  `0C122714`-`0C1535B0` effects, ...).

A cell with no evidence goes to `game/unsorted`; it is not guessed. That is about 45% of the game's functions: code with
no Power Stone 1 counterpart close enough to match, and code whose neighbours disagree. A folder found later by reading the code goes into `docs/sourcetree.tsv`;
`python3 tools/srctree.py --apply` then moves the files.

| folder | what (from the Power Stone 1 functions and strings that placed it) |
|---|---|
| `game/system` | file loading, system init and shutdown, small helpers |
| `game/save` | VMU save data and its state machines |
| `game/network` | the online lobby: connection, plaza and room messages (new in Power Stone 2) |
| `game/flow` | game mode machine, rounds |
| `game/demo` | boot screens, attract demo, endings, staff roll |
| `game/menu`, `menu/select`, `menu/option` | menus and test mode; character and stage select; options |
| `game/ui` | HUD |
| `game/draw`, `game/math` | drawing helpers; vector and matrix math |
| `game/resource` | resource loading |
| `game/object` | the object pool and scene objects |
| `game/effect` | effect objects |
| `game/ai` | the CPU fighter's script interpreter and its ops |
| `game/item` | items |
| `game/hit` | hit boxes, hit reactions, damage |
| `game/player` | the fighters: shared code, states and the characters (not split by character: the roster differs from Power Stone 1's and the code does not say which character is which yet) |
| `game/stage` | stages and their gimmicks |
| `game/camera`, `game/sound`, `game/debug` | camera; sound and BGM; debug displays and menus |
| `game/unsorted` | game code not placed yet |
| `lib/naomi`, `lib/libc`, `lib/katana`, `lib/cri` | library code ported from Power Stone 1: the NAOMI-style library, the C runtime, the Katana SDK, CRI middleware |

## The files

- `gen_<folder>_<address>.c`: generated C (`tools/5-generated/gen_equiv`), one per cell, named by the cell's first
  address. When two functions of a cell were generated with different prototypes for the same callee they cannot share a
  file (the checker compares each call on the prototype the file declares), so the cell has more files: `..._2.c`,
  `..._3.c`. The `gen_` prefix is what the tools go by (`consistency.py`, `--regen`, `--retest` treat it as generated).
- `hand_<n>.c`: written by hand. `ps1_<name>.c`: ported from Power Stone 1 and proven here. Each is filed whole, by the
  folder of most of its functions.

A file is known by its **stem** (its name without folder), unique across the tree: its cases are in `tests/<stem>/`, and
the tools find it with `tools/srcfiles.py`. A tool that writes a new file puts it at the top of `src/`;
`python3 tools/srctree.py --apply` files it.
