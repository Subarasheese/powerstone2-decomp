/* game/unsorted: functions 0C0C412C-0C0C43A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o386C_uchar { char p[0x386C]; unsigned char v; };
int FUN_0c0c418c(int, int, int, int, float);
int FUN_0c0ca33c(int, int, int, int, float);
int FUN_0c0c412c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0c41c4(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0c412c(int a4, int a5, int a6, int a7, float f4)
{
    if ((*(signed char *)((0xC2738B8 + ((short)(*(signed char *)((((a5 << 2) << 1) + (0x386C + a4)))) * (short)0x34)))) == 2) {
        return FUN_0c0ca33c((*(signed char *)((((0x386C + a4) + ((a5 << 2) << 1)) + 0x0))), a6, a6, a7, f4);
    }
    *(unsigned char *)((((0x386C + a4) + ((a5 << 2) << 1)) + 0x0)) = 0x0;
    *(unsigned int *)((((0x386C + a4) + ((a5 << 2) << 1)) + 0x4)) = 0x0;
    return ((0x386C + a4) + ((a5 << 2) << 1));
}

int FUN_0c0c41c4(int a4, int a5, int a6, int a7, float f4)
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

    if ((*(signed char *)0xC5429CB) != 0) {
        t0 = 0xC5429CB;
        t1 = 0xC532498;
        for (;;) {
            (((struct o18_uchar *)((0x386C + t1)))->v) = 0x0;
            (((struct o10_uchar *)((0x386C + t1)))->v) = 0x0;
            *(unsigned char *)(((0x386C + t1) + 0x8)) = 0x0;
            (((struct o386C_uchar *)(t1))->v) = 0x0;
            t2 = 0x3714;
            if ((*(signed char *)((t1 + 0x3714))) != 0) {
                t3 = 0x3720;
                if ((*(signed char *)((t1 + 0x3720))) == 0) {
                    t4 = (0x386C + t1);
                    t5 = 0x0;
                    t6 = a6;
                    t7 = a7;
                    for (;;) {
                        t0 = (*(signed char *)((t5 + (((*(signed char *)((t1 + 0x1))) << 2) + 0xC542367))));
                        if (t0 != 0) {
                            t8 = 0xC2738B8;
                            if ((*(signed char *)((t8 + ((short)(*(signed char *)((t5 + (((*(signed char *)((t1 + 0x1))) << 2) + 0xC542367)))) * (short)0x34)))) == 2) {
                                t0 = 0x16F;
                                t6 = 0x0;
                                t0 = (t0 + 0xC5421F8);
                                t8 = (*(signed char *)((t5 + (((*(signed char *)((t1 + 0x1))) << 2) + t0))));
                                for (;;) {
                                    t7 = 0x0;
                                    t4 = 0xC27B588;
                                    t4 = (t4 + ((t6 << 2) << 1));
                                    for (;;) {
                                        t0 = (unsigned char)t8;
                                        t7 = (t7 + 0x1);
                                        if ((unsigned char)(*(signed char *)((t4 + 0x0))) == t0) {
                                            t0 = 0x386C;
                                            t0 = (t0 + t1);
                                            t0 = (t0 + ((t6 << 2) << 1));
                                            *(unsigned char *)((t0 + 0x0)) = t8;
                                        }
                                        t4 = (t4 + 0x1);
                                        if ((int)t7 >= (int)0x8) {
                                            break;
                                        }
                                    }
                                    t6 = (t6 + 0x1);
                                    if ((int)t6 >= (int)0x4) {
                                        break;
                                    }
                                }
                            }
                        }
                        t5 = (t5 + 0x1);
                        if ((int)t5 >= (int)0x4) {
                            break;
                        }
                    }
                    t3 = (FUN_0c0c418c((*(signed char *)((t1 + 0x1))), t5, t6, t7, f4));
                }
                t2 = t3;
            }
            t0 = 0x3938;
            t1 = (t1 + t0);
            if ((unsigned int)t1 >= (unsigned int)0xC540978) {
                break;
            }
        }
        t0 = t2;
    }
    return t0;
}
