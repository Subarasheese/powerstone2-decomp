/* manual: FUN_0c0cd8b4(fighter, kind, ctx) fills a CPU fighter's plan with AI ops and returns their total cost.
   The plan shape is the row of the table at 0C25C2A4 (16 bytes per kind): [0] mode, [1] how many ops end the plan,
   [2..8] a fixed count of each op, [9..15] a limit per op for the mode's own part. The seven ops go in the order
   2, 1, 0, 3, 4, 5, 6 and cost 100, 500, 1000, 2000, 3000, 5000, 8000. Mode 0: up to FUN_0c0cd888(fighter) ops, at most the
   limit of each; mode 2: nlRand() % (limit + 1) of each; mode 3: as mode 2, and the first op past the first whose limit is 0
   fills what is left of the plan; any other mode: the fixed part only. The original (3,394 bytes, built without
   optimisation) wrote the op loop out 34 times; this is one loop.
   Proven Equivalent on 293 cases (148 dev, 145 holdout; 52 of them written by hand, one per loop and exit of modes 0, 2
   and 3, which the game's own table never uses for modes 0 and 3), 1554 of 1560 instructions. The 6 not run are the
   `bra` of mode 2's "plan full?" tests before ops 1, 0, 3, 4, 5, 6: dead, a loop that fills the plan returns at once. */

int FUN_0c0cd5c0(int, int, int, int);
int FUN_0c0cd888(int);
int nlRand(void);

/* manual: written by hand, 2026-11-23/24 (build/manual/notes_FUN_0c0cd8b4.txt) */
int FUN_0c0cd8b4(int a4, int a5, int a6)
{
    signed char *t = (signed char *)(0xC25C2A4 + a5 * 16);
    int total = 0, left = t[1], mode = -1, n = 0, j, i, lim, c, fill, op, cost;

    for (;;) {
        for (j = 0; j < 7; j++) {
            fill = 0;
            if (mode < 0)
                lim = t[2 + j];
            else {
                c = t[9 + j];
                if (mode == 0) {
                    lim = n;
                    if (lim > c) lim = c;
                } else {
                    if (left == 0) return total;
                    if (c != 0)
                        lim = nlRand() % (t[9 + j] + 1);
                    else if (mode == 3 && j != 0) {
                        lim = left;
                        fill = 1;
                    } else
                        continue;
                }
            }
            op = j < 3 ? 2 - j : j;
            cost = j < 3 ? (j == 0 ? 100 : j * 500) : j < 5 ? j * 1000 - 1000 : j * 3000 - 10000;
            for (i = 0; i < lim; i++) {
                FUN_0c0cd5c0(op, 0, a6, *(signed char *)(a4 + 1));
                total += cost;
                if (fill) continue;
                left--;
                if (mode >= 0) {
                    if (left == 0) return total;
                    if (mode == 0 && --n == 0) return total;
                }
            }
            if (fill) return total;
        }
        if (mode >= 0) return total;
        mode = t[0];
        if (mode == 0) n = FUN_0c0cd888(a4);
        else if (mode != 2 && mode != 3) return total;
    }
}
