/* game/unsorted: functions 0C11EAE8-0C11EC9E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c11eae8(int a4, int a5, int a6, int a7);

int FUN_0c11eae8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t0 = 0x0;
    if (a4 != 0xAD) {
        t1 = 0x1;
        if (a4 != 0xAE) {
            t2 = 0x2;
            if (a4 != 0xAF) {
                t3 = 0x3;
                if (a4 != 0xB0) {
                    t4 = 0x4;
                    if (a4 != 0xB1) {
                        t5 = 0x5;
                        if (a4 != 0xB2) {
                            t6 = 0x6;
                            if (a4 != 0xB3) {
                                t7 = 0x7;
                                if (a4 != 0xB4) {
                                    t8 = 0x8;
                                    if (a4 != 0xB5) {
                                        t8 = 0xFFFFFFFF;
                                    }
                                    t7 = t8;
                                }
                                t6 = t7;
                            }
                            t5 = t6;
                        }
                        t4 = t5;
                    }
                    t3 = t4;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    t1 = t0;
    if (t0 == -1) {
    } else {
        if (((int)t0 >= 0) && ((int)t0 <= (int)0x4)) {
            t2 = 0x1894;
            t3 = 0xC2738EC;
            t4 = 0xC473D04;
            for (;;) {
                t5 = *(signed char *)((t3 + 0x3));
                if (t5 == (t0 + 0x1)) {
                    t2 = (*(int *)((t4 + 0x0)));
                    t2 = (t2 | 0x4000);
                    *(unsigned int *)((t4 + 0x0)) = t2;
                }
                t3 = (t3 + 0x34);
                t4 = (t4 + 0x4);
                if ((unsigned int)t3 > (unsigned int)0xC27514C) {
                    break;
                }
            }
            t2 = t5;
        } else {
            if (t0 == 5) {
                t3 = 0xC473D04;
                t4 = 0xC473D04;
                t5 = 0xC2738EC;
                t6 = 0x0;
                for (;;) {
                    if ((*(signed char *)(((((t6 + 0x1) * 0x34) + 0xC2738B8) + 0x3))) == 6) {
                        t8 = (*(int *)((t3 + 0x0)));
                        t8 = (t8 | 0x4000);
                        *(unsigned int *)((t3 + 0x0)) = t8;
                    }
                    t7 = *(signed char *)((t5 + 0x3));
                    t6 = (t6 + 0x1);
                    if (t7 == 7) {
                        t8 = (*(int *)((t4 + 0x0)));
                        t8 = (t8 | 0x4000);
                        *(unsigned int *)((t4 + 0x0)) = t8;
                    }
                    t5 = (t5 + 0x34);
                    t4 = (t4 + 0x4);
                    t3 = (t3 + 0x4);
                    if ((int)t6 > (int)0x78) {
                        break;
                    }
                }
                t3 = t7;
            } else {
                if (t0 == 6) {
                    t4 = 0x0;
                    for (;;) {
                        t5 = *(int *)((0xC2A090C + (t4 << 2)));
                        if (t5 != -1) {
                            if ((*(int *)((0xC2A090C + (t4 << 2)))) == 4) {
                                t6 = (*(int *)((0xC473D04 + (t4 << 2))));
                                t6 = (t6 | 0x4000);
                                *(unsigned int *)((0xC473D04 + (t4 << 2))) = t6;
                            }
                            t4 = (t4 + 0x1);
                            continue;
                        }
                        break;
                    }
                    t4 = t5;
                } else {
                    if (t0 == 7) {
                        t5 = 0x0;
                        for (;;) {
                            t6 = *(int *)((0xC2A090C + (t5 << 2)));
                            if (t6 != -1) {
                                if ((*(int *)((0xC2A090C + (t5 << 2)))) == 2) {
                                    t7 = (*(int *)((0xC473D04 + (t5 << 2))));
                                    t7 = (t7 | 0x4000);
                                    *(unsigned int *)((0xC473D04 + (t5 << 2))) = t7;
                                }
                                t5 = (t5 + 0x1);
                                continue;
                            }
                            break;
                        }
                        t5 = t6;
                    } else {
                        t6 = t0;
                        if (t0 == 8) {
                            t0 = 0x0;
                            for (;;) {
                                t7 = *(int *)((0xC2A090C + (t0 << 2)));
                                if (t7 != -1) {
                                    t8 = *(int *)((0xC2A090C + (t0 << 2)));
                                    t9 = (t0 << 2);
                                    t0 = (t0 + 0x1);
                                    if (t8 == 16) {
                                        t8 = (*(int *)((0xC473D04 + t9)));
                                        t8 = (t8 | 0x4000);
                                        *(unsigned int *)((0xC473D04 + t9)) = t8;
                                    }
                                    continue;
                                }
                                break;
                            }
                            t6 = t7;
                        }
                        t5 = t6;
                    }
                    t4 = t5;
                }
                t3 = t4;
            }
            t2 = t3;
        }
        t1 = t2;
    }
    return t1;
}
