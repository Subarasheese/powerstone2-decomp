/* Straight-line functions with calls and guards (batch gen_aj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c187a88(int a4, int a5, int a6, int a7);

int FUN_0c187a88(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((a4 != a5) && ((unsigned int)a6 > (unsigned int)0x0)) {
        if ((unsigned int)a4 < (unsigned int)a5) {
            if ((0x1 & ((a4 | a5) | a6)) == 0) {
                if ((((a4 | a5) | a6) & 0x3) == 0) {
                    t0 = a5;
                    t1 = ((unsigned int)a6 >> 2);
                    t2 = a4;
                    for (;;) {
                        t3 = *(int *)((t0 + 0x0));
                        t0 = (t0 + 0x4);
                        t1 = (t1 - 1);
                        *(unsigned int *)((t2 + 0x0)) = t3;
                        t2 = (t2 + 0x4);
                        if (t1 == 0) {
                            break;
                        }
                    }
                } else {
                    t0 = a5;
                    t1 = ((unsigned int)a6 >> 1);
                    t2 = a4;
                    for (;;) {
                        t3 = *(short *)((t0 + 0x0));
                        t0 = (t0 + 0x2);
                        t1 = (t1 - 1);
                        *(unsigned short *)((t2 + 0x0)) = t3;
                        t2 = (t2 + 0x2);
                        if (t1 == 0) {
                            break;
                        }
                    }
                }
            } else {
                t0 = a5;
                t1 = a6;
                t2 = a4;
                for (;;) {
                    t3 = *(signed char *)((t0 + 0x0));
                    t0 = (t0 + 0x1);
                    t1 = (t1 - 1);
                    *(unsigned char *)((t2 + 0x0)) = t3;
                    t2 = (t2 + 0x1);
                    if (t1 == 0) {
                        break;
                    }
                }
            }
        } else {
            if ((0x1 & ((a4 | a5) | a6)) == 0) {
                if ((((a4 | a5) | a6) & 0x3) == 0) {
                    t0 = (a4 + a6);
                    t1 = ((unsigned int)a6 >> 2);
                    t2 = (a5 + a6);
                    for (;;) {
                        t2 = (t2 - 4);
                        t1 = (t1 - 0x1);
                        *(unsigned int *)(((t0 - 0x4) + 0x0)) = (*(int *)((t2 + 0x0)));
                        t0 = (t0 - 0x4);
                        if (t1 == 0) {
                            break;
                        }
                    }
                } else {
                    t0 = (a5 + a6);
                    t1 = ((unsigned int)a6 >> 1);
                    t2 = (a4 + a6);
                    for (;;) {
                        t0 = (t0 - 2);
                        t1 = (t1 - 0x1);
                        *(unsigned short *)(((t2 - 0x2) + 0x0)) = (*(short *)((t0 + 0x0)));
                        t2 = (t2 - 0x2);
                        if (t1 == 0) {
                            break;
                        }
                    }
                }
            } else {
                t0 = (a4 + a6);
                t1 = a6;
                t2 = (a5 + a6);
                for (;;) {
                    t2 = (t2 - 1);
                    t1 = (t1 - 0x1);
                    *(unsigned char *)(((t0 - 0x1) + 0x0)) = (*(signed char *)((t2 + 0x0)));
                    t0 = (t0 - 0x1);
                    if (t1 == 0) {
                        break;
                    }
                }
            }
        }
    }
    return a4;
}
