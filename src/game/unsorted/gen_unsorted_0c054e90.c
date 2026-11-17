/* game/unsorted: functions 0C054E90-0C055078, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c054e90(int a4, int a5, int a6, int a7, int a8, int a9);

int FUN_0c054e90(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((0xF & a4) != 1) {
        if ((0xF & a4) != 2) {
            if ((0xF & a4) != 3) {
                if ((0xF & a4) == 4) {
                    if ((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) > (int)0x8000) {
                        *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) - 0x10000);
                    }
                    if ((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) < (int)0xFFFF8000) {
                        *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) + 0x10000);
                    }
                    t0 = *(int *)((a5 + 0x0));
                    t1 = *(int *)((a6 + 0x0));
                    t2 = (t0 - t1);
                    if ((int)(t0 - t1) < 0) {
                        t2 = (t1 - t0);
                    }
                    t1 = (int)((int)(t0 - (*(int *)((a7 + 0x0)))) / (int)((*(int *)((a8 + 0x0))) + 0x1));
                    t0 = t1;
                    if ((int)t1 < 0) {
                        t0 = (-t1);
                    }
                    if ((int)t2 <= (int)t0) {
                        t0 = (*(int *)((a5 + 0x0)));
                    } else {
                        t0 = ((*(int *)((a6 + 0x0))) + ((int)((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) / (int)((*(int *)((a8 + 0x0))) + 0x1))));
                    }
                    *(unsigned int *)((a6 + 0x0)) = t0;
                } else {
                    if ((0xF & a4) == 5) {
                        t0 = (int)((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) / (int)a9);
                        t1 = t0;
                        if ((int)t0 < 0) {
                            t1 = (-t0);
                        }
                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + t1);
                    } else {
                        if ((0xF & a4) == 6) {
                            *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + (*(int *)((a5 + 0x0))));
                        }
                    }
                }
            } else {
                if ((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) > (int)0x8000) {
                    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) - 0x10000);
                }
                if ((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) < (int)0xFFFF8000) {
                    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) + 0x10000);
                }
                t0 = *(int *)((a5 + 0x0));
                t1 = *(int *)((a6 + 0x0));
                t2 = (t0 - t1);
                if ((int)(t0 - t1) < 0) {
                    t2 = (t1 - t0);
                }
                t1 = (int)((int)(t0 - (*(int *)((a7 + 0x0)))) / (int)a9);
                t0 = t1;
                if ((int)t1 < 0) {
                    t0 = (-t1);
                }
                if ((int)t2 > (int)t0) {
                    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + ((int)((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) / (int)a9)));
                } else {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x0)));
                }
            }
        } else {
            if ((int)((*(int *)((a5 + 0x0))) - (*(int *)((a6 + 0x0)))) > (int)0x8000) {
                *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) - 0x10000);
            }
            if ((int)((*(int *)((a5 + 0x0))) - (*(int *)((a6 + 0x0)))) < (int)0xFFFF8000) {
                *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) + 0x10000);
            }
            t0 = *(int *)((a5 + 0x0));
            t1 = *(int *)((a6 + 0x0));
            t2 = (t0 - t1);
            if ((int)(t0 - t1) < 0) {
                t2 = (t1 - t0);
            }
            t3 = (int)((int)(t0 - t1) / (int)((*(int *)((a8 + 0x0))) + 0x1));
            t0 = t3;
            if ((int)t3 < 0) {
                t0 = (-t3);
            }
            if ((int)t2 > (int)t0) {
                *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + ((int)((int)((*(int *)((a5 + 0x0))) - (*(int *)((a6 + 0x0)))) / (int)((*(int *)((a8 + 0x0))) + 0x1))));
            } else {
                *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x0)));
            }
        }
    } else {
        *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x0)));
    }
    t0 = *(int *)((a6 + 0x0));
    *(unsigned int *)((a6 + 0x0)) = (unsigned short)t0;
    return (unsigned short)t0;
}
