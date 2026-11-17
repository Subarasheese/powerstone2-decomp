/* game/unsorted: functions 0C137F74-0C138C30, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c1382ba(int);
int FUN_0c138a00(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c138a94(int a4, int a5, int a6, int a7);

int FUN_0c138a94(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t7;
    register float u15;
    register float u16;
    register int t20;
    register int t22;
    register int t23;
    register float u26;
    register float u28;
    register float u29;
    register float u34;
    register float u35;
    register float u36;
    register int t50;
    register int t67;
    register int t113;
    register int t55;
    register int t18;
    register int t19;

    t0 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 26) {
        t113 = (FUN_0c03f346(a4, a5, a6, a7));
    } else {
        t7 = *(signed char *)((a4 + 0x14));
        if (t7 != 0) {
            if (t7 != 1) {
                if (t7 != 2) {
                    t55 = (FUN_0c03f346(a4, a5, a6, a7));
                } else {
                    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 0) {
                        u15 = (((struct o0_float *)0xC138C64)->v);
                        u16 = (((struct o4_float *)0xC138C64)->v);
                        t20 = (*(short *)((a4 + 0x1E)));
                        for (;;) {
                            if ((int)t20 >= (int)((*(short *)((a4 + 0x1E))) + 0x1)) {
                                break;
                            }
                            t22 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
                            t23 = ((int (*)(void))(FUN_0c187798))();
                            t18 = 0xC2A1B00;
                            t19 = t20;
                            t19 = (t19 << 2);
                            u26 = *(float *)(((int)stk + 0));
                            t18 = (t18 + t19);
                            u28 = ((math_sin_angle16((*(int *)(((int)stk + 16))))) * (*(float *)((t18 + 0x0))));
                            u29 = u26;
                            u29 = u29 + u16 * u28;
                            *(float *)(((int)stk + 0)) = u29;
                            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u15);
                            u34 = *(float *)(((int)stk + 8));
                            u35 = ((math_cos_angle16((*(int *)(((int)stk + 16))))) * (*(float *)((t18 + 0x0))));
                            u36 = u34;
                            u36 = u36 + u16 * u35;
                            *(float *)(((int)stk + 8)) = u36;
                            FUN_0c138a00((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1))), ((int)stk + 0), (((int)stk + 0) + 0xC), (*(int *)((0xC2A1B80 + t19))));
                            t20 = (t20 + 0x1);
                        }
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    t50 = *(short *)((a4 + 0x1E));
                    t55 = t50;
                    if (t50 == 12) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t55 = 0x14;
                    }
                }
                t113 = t55;
            } else {
                t67 = *(short *)((a4 + 0x1C));
                t113 = (t67 + 0x1);
                if (t67 == 20) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t113 = 0x0;
                }
                *(unsigned short *)((a4 + 0x1C)) = t113;
            }
        } else {
            t113 = 0x8C;
            if (20.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))))->v))) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                FUN_0c1382ba((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1))));
                t113 = (FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0xB));
            }
        }
    }
    return t113;
}
