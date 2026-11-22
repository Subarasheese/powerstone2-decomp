/* game/unsorted: functions 0C02AFC8-0C02BAC2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o1004_int { char p[0x1004]; int v; };
struct o101C_float { char p[0x101C]; float v; };
struct o1D10_int { char p[0x1D10]; int v; };
struct o1D14_int { char p[0x1D14]; int v; };
struct o1D14_uint { char p[0x1D14]; unsigned int v; };
struct o1D18_int { char p[0x1D18]; int v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
int FUN_0c02b342(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c02b51c(float, float);
int FUN_0c02b536(int);
int FUN_0c02b570(void);
int FUN_0c02b5da(void);
int FUN_0c02b624(void);
int FUN_0c187d60(int, int);
extern int strcpy();
int FUN_0c187d88(int);
int FUN_0c02b692(int a4, int a5, int a6);
int FUN_0c02b7fc(void);


int FUN_0c02b7fc(void)
{
    int stk[35];
    register int t1;
    register int t2;
    register float u3;
    register float u5;
    register int t10;
    register int t17;
    register int t24;
    register int t25;
    register int t32;
    register int t36;
    register int t37;
    register int t38;
    register int t41;
    register int t66;
    register int t67;
    register int t68;
    register int t74;
    register int t77;
    register int t78;
    register int t99;
    register int t101;
    register int t102;
    register float u152;
    register float u124;
    register float u115;
    register int t130;
    register float u137;
    register float u143;
    register float u159;
    register float u162;
    register float u173;
    register int t100;
    register int t149;
    register int t122;

    FUN_0c02b51c(0.75f, 0.75f);
    t1 = *(int *)0xC30B70C;
    t2 = (((struct o1004_int *)(t1))->v);
    u3 = (((struct o101C_float *)(t1))->v);
    *(float *)(((int)stk + 0)) = ((float)t2 * u3);
    u5 = ((float)t2 * u3);
    *(float *)(((int)stk + 0)) = ((((float)t2 * u3)) - 0.200000003f);
    if (((((struct o0_short *)0xC30B6FE)->v)) != 0) {
        t10 = FUN_0c02b5da();
        if ((short)t10 != 0) {
            t17 = *(int *)0xC30B70C;
            if (((((struct o1D18_int *)(t17))->v)) != ((((struct o1D14_int *)(t17))->v))) {
                t24 = (((struct o1D14_int *)((*(int *)0xC30B70C)))->v);
                t25 = *(int *)0xC30B70C;
                t99 = (t24 - 1);
                if ((int)(t24 - 1) < 0) {
                    t99 = ((t24 - 1) + 0x32);
                }
                (((struct o1D14_uint *)(t25))->v) = t99;
            }
        } else {
            t32 = FUN_0c02b624();
            if ((short)t32 != 0) {
                t36 = *(int *)0xC30B70C;
                t37 = (((struct o1D14_int *)(t36))->v);
                t38 = (((struct o1D10_int *)(t36))->v);
                t99 = (t38 - t37);
                if ((int)(t38 - t37) < 0) {
                    t99 = ((t38 - t37) + 0x32);
                }
                if ((int)t99 > (int)0xA) {
                    t41 = *(int *)0xC30B70C;
                    (((struct o1D14_uint *)(t41))->v) = (((((struct o1D14_int *)(t41))->v)) + 0x1);
                    if (((((struct o1D14_int *)((*(int *)0xC30B70C)))->v)) == 50) {
                        (((struct o1D14_uint *)((*(int *)0xC30B70C)))->v) = 0x0;
                    }
                }
            }
        }
    } else {
        t66 = *(int *)0xC30B70C;
        t67 = (((struct o1D18_int *)(t66))->v);
        t68 = (((struct o1D10_int *)(t66))->v);
        t99 = (t68 - t67);
        if ((int)(t68 - t67) < 0) {
            t99 = ((t68 - t67) + 0x32);
        }
        if ((int)t99 < (int)0xA) {
            t74 = *(int *)0xC30B70C;
            (((struct o1D14_uint *)(t74))->v) = ((((struct o1D18_int *)(t74))->v));
        } else {
            t77 = (((struct o1D10_int *)((*(int *)0xC30B70C)))->v);
            t78 = *(int *)0xC30B70C;
            t99 = (t77 - 10);
            if ((int)(t77 - 10) < 0) {
                t99 = ((t77 - 10) + 0x32);
            }
            (((struct o1D14_uint *)(t78))->v) = t99;
        }
    }
    t102 = (((struct o1D14_int *)((*(int *)0xC30B70C)))->v);
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 0))) * 6.0f);
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 0))) / (1.0f + 1.0f));
    if ((int)0x0 >= (int)0xA) {
    } else {
        t101 = 0x0;
        for (;;) {
            u152 = 40.0f;
            if ((*(signed char *)((((((t102 << 2) << 2) + t102) + ((*(int *)0xC30B70C) + 0x11BC)) + 0x0))) != 0) {
                t100 = t102;
                t100 = (t100 << 2);
                t100 = (t100 << 1);
                u124 = 40.0f;
                if ((*(signed char *)((((0x102C + (*(int *)0xC30B70C)) + t100) + 0x0))) != 0) {
                    t99 = 0x3;
                    FUN_0c02b502(t99);
                    t99 = (*(int *)0xC30B70C);
                    t99 = (t99 + 0x102C);
                    t99 = (t99 + t100);
                    FUN_0c02b342(t99, (((int)stk + 0) + 0xC));
                    t99 = ((int)stk + 0);
                    t99 = (t99 + 0xC);
                    u115 = 87.0f;
                    u115 = u115 + ((u5 + 0.200000003f)) * (float)t101;
                    FUN_0c02b3ba(t99, 40.0f, u115, 638.0f);
                    u124 = (40.0f + (*(float *)(((int)stk + 4))));
                } else {
                    t122 = t99;
                }
                t99 = t122;
                t99 = (*(int *)0xC30B70C);
                t100 = 0xC187D60;
                t99 = (t99 + 0x11BC);
                t99 = (t99 + (((t102 << 2) << 2) + t102));
                t130 = FUN_0c187d60(t99, 0xC3099A6);
                if (t130 == 0) {
                    t99 = 0x8;
                    FUN_0c02b502(t99);
                } else {
                    t99 = 0x2;
                    FUN_0c02b502(t99);
                }
                t99 = (*(int *)0xC30B70C);
                t99 = (t99 + 0x11BC);
                t99 = (t99 + (((t102 << 2) << 2) + t102));
                u137 = 87.0f;
                u137 = u137 + ((u5 + 0.200000003f)) * (float)t101;
                FUN_0c02b3ba(t99, u124, u137, 638.0f);
                t99 = (*(int *)0xC30B70C);
                t100 = 0xC187D88;
                t99 = (t99 + 0x11BC);
                t99 = (t99 + (((t102 << 2) << 2) + t102));
                u143 = u124;
                u143 = u143 + (*(float *)(((int)stk + 0))) * (((float)(FUN_0c187d88(t99)) / (1.0f + 1.0f)));
                t149 = 0xC187D88;
                u152 = u143;
            } else {
                t149 = t100;
            }
            t99 = 0x7;
            t100 = t149;
            FUN_0c02b502(t99);
            t99 = 0xC1A8CD8;
            u159 = 87.0f;
            u159 = u159 + ((u5 + 0.200000003f)) * (float)t101;
            FUN_0c02b3ba(t99, u152, u159, 638.0f);
            t99 = 0x29;
            u162 = *(float *)(((int)stk + 8));
            t100 = (t102 * t99);
            (((struct o28_uchar *)(((0x150E + (*(int *)0xC30B70C)) + t100)))->v) = 0x0;
            if (((((struct o0_short *)0xC30B6FE)->v)) == 0) {
                t99 = 0x7;
                FUN_0c02b502(t99);
            } else {
                t99 = 0x6;
                FUN_0c02b502(t99);
            }
            t99 = (*(int *)0xC30B70C);
            t99 = (t99 + 0x150E);
            t99 = (t99 + t100);
            u173 = 87.0f;
            u173 = u173 + ((u5 + 0.200000003f)) * (float)t101;
            FUN_0c02b3ba(t99, (u152 + u162), u173, 638.0f);
            t99 = 0x32;
            t102 = (t102 + 0x1);
            t101 = (t101 + 0x1);
            if ((int)t102 >= (int)t99) {
                t102 = 0x0;
            }
            if ((int)t101 < (int)0xA) continue;
            break;
        }
    }
    return (FUN_0c02b51c(1.0f, 1.0f));
}
