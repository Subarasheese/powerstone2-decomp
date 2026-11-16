# Power Stone 2 decomp

![decomp progress](badges/progress.svg?p=66.4&b=75.4&m=0.0&a=37&s=0)

A decompilation of the Dreamcast game **Power Stone 2** (USA), in progress. It rebuilds the game's executable
`1ST_READ.BIN` byte for byte, and holds C for the game's own code that behaves like the original.
A function is **done** when its C is *Equivalent*: `tools/equiv.py` runs the original bytes and the compiled C in an
SH-4 interpreter on test cases and they agree on calls, memory writes and result. It does not have to be byte-identical.

**This repository contains no game code or data.** You supply your own disc; the build scripts generate everything
game-derived on your machine, and `.gitignore` keeps it out of git.

It is built on the tooling of [dc-decomp-kickoff](https://github.com/consolesplayingconsoles/dc-decomp-kickoff) (v2.0),
using the newer tool versions of the sibling Power Stone decomp
([pwrstn-decomp](https://github.com/Subarasheese/pwrstn-decomp)), whose proven C and names were carried over where the
code is the same.

## Scope and state

The work targets the **game's own code**. The Dreamcast library code in the executable (Katana/Shinobi, ADX, modem and
network stacks, the NAOMI-style drawing library) and the two Dream Passport browser overlays on the disc were left
alone, except where they matched Power Stone 1.

| | |
|---|---|
| Game code (`0C010000`-`0C1769D0`) | **5,594 of 5,617 functions Equivalent (99.6%)**, 1.25 MB of 1.28 MB |
| Whole executable | 66.4% of functions, 75.4% of code bytes (the libraries count as not done) |
| Test evidence | the cases run about half of the proven game code's instructions: a function is only as proven as its cases |
| Byte-matching C | none; the executable is rebuilt from assembly (`bash build.sh` prints `MATCH`) |
| Builds from C (`make c`) | not attempted yet (`status.txt`) |

Where the C of the 5,594 came from: 5,450 written by the generator (`tools/5-generated/gen_equiv`, checked on
generated cases), 128 written by hand (`src/hand_*.c`), and 15 ported from Power Stone 1 and re-proven here (one more
is defined in a file I could not attribute). The generated C is plain and mechanical.

**Left (23 functions, 28.6 KB):** 20 large functions of 380 to 3,700 bytes (state machines, parsers, boot code) and 3
fragments with no C form (a cache-line loop and two bare branches into other routines). `FUN_0c0100a2` (the file
loader) has C but its cases reach only 49 of 137 instructions, because its wait loop needs an interrupt, so it is not
counted as done.

### Things worth knowing

- **Struct copies and the compiler's helpers.** SHC turns a structure copy into a call to `_quick_evn_mvn` /
  `_quick_odd_mvn` (`0C18778C`, `0C187798`; `r0` = length, `r1` = destination, `r2` = source). A file whose C copies
  structures starts with `/* @runtime _quick_odd_mvn=0C187798 */`: `tools/equiv.py` then runs the helper for real on
  both sides. The address is deliberately not named in `symbols.txt`: naming it makes the checker run it for real in
  every file that calls it as an ordinary function, and about 3% of those proofs stop agreeing. The generated files
  (`src/gen_*.c`) still call `FUN_0c187798` as a plain function; that proves what they call and with what, not what
  the copy moves.
- **A signature bug was fixed along the way.** The generator's argument scan counted a call as overwriting `r4`-`r7`
  before the call's delay slot ran, so a function that saves `r4` in the slot of its first `bsr` was given no integer
  argument. 83 functions had the wrong arity and 338 proven functions were written again.
- **Names.** 8,546 of 8,990 functions are still `FUN_...`. Names come from signature matching against the sibling
  decomp's functions (exact masked code only), not from the SDK libraries, which this repo does not have.
- Total test coverage is the weak spot. `gen_equiv --direct` (cases aimed at branches no case has taken) was run once
  on the functions under 60% coverage and raised it from 45.5% to 49.4% (it also exposed the signature bug above).
  `gen_equiv --retest` has not been run.

## Build

You need: your own copy of the disc as a `.gdi` with its track files, Python 3, Docker, and a Katana SDK whose
`shc.exe`, `asmsh.exe` and `lnk.exe` are SHC 5.0 Release 32 (what the sibling decomp's matching units use).

```
echo 'SDK_PATH="/path/to/katana-sdk"' > .env      # where your SDK is (not committed)
# put your disc's 1ST_READ.BIN here, then split it and build:
python3 tools/1-2-baseline/split_asm.py 1ST_READ.BIN "$(cat BASE)" functions.txt .
bash build.sh                                     # should end with MATCH
python3 tools/equiv.py src/hand_6.c               # check C against the original
python3 tools/progress.py                         # the numbers above
```

`setup.sh`, `disc.sh`, `textures.sh` and the `Makefile` come from the template and the sibling repo and have not been
run end to end on this game. `build.sh` and the split were.

## Supported version

| | |
|---|---|
| Release | USA, T-1211N, V1.000, 2000-04-28, region U |
| `1ST_READ.BIN` | 3,097,497 bytes, SHA-1 `5279581723942c1548c343cc78a7b8e4258ebbca` |
| Linked at | `0x0C010000` |
| SDK era | Shinobi 1.62, syStart 1.15, ADXT 5.66 (CRI), builds Aug-Nov 1999 |

Other releases are different builds.

## What is here

| path | what |
|---|---|
| [functions.txt](functions.txt) | every function: address, size, name (`FUN_<addr>` = not named yet). The source of truth for boundaries |
| [symbols.txt](symbols.txt), [globals.txt](globals.txt), [sdk.txt](sdk.txt) | addresses the C uses, and the library range |
| [src/](src/) | the C: `gen_*.c` (generated), `hand_*.c` (hand-written), `ps1_*.c` (ported from Power Stone 1). None of it is built into the executable yet |
| `tests/<file>/<function>.json` | the test cases of each function; `tests/equivalent.txt` lists the Equivalent ones |
| [docs/equivalent.md](docs/equivalent.md) | the evidence for each Equivalent function |
| [tools/](tools/README.md) | the SH-4 simulator and disassembler, the Equivalent check, the generator, the cross-match tools (`tools/4-boosts/`, including `fuzzy_pairs.py`) |
| [AGENTS.md](AGENTS.md) | the decompilation loop and the steps, from the template |

Local only (git-ignored): `1ST_READ.BIN`, `asm/`, `objects.txt`, `build/`, `state/`, `.env`.

## Acknowledgements

[dc-decomp-kickoff](https://github.com/consolesplayingconsoles/dc-decomp-kickoff) (the tools),
[pwrstn-decomp](https://github.com/Subarasheese/pwrstn-decomp) (the Power Stone decomp this one builds on),
and the [decomp.me compiler archive](https://github.com/decompme/compilers) (SHC releases).

POWER STONE 2 and its publisher's trademarks belong to their owners. This project is not affiliated with or endorsed by
them.
