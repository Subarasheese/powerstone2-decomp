/* game/sound: functions 0C05A43C-0C05B26C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05a4ba(void);
int FUN_0c05a5d4(void);
int FUN_0c05a68a(void);
int FUN_0c05ad20(int, int, int, int);
int FUN_0c05afec(int, int);
int FUN_0c05b018(int, int, int, int, int);
int nlSelectMatrixStack(int);
int nlUnitMatrix(void);
int nlFastScreenPoint(int, int);
int nlMakeFastModelProjectMatrixVM(void);
int FUN_0c180b3c(int, int, int, int, int);
int FUN_0c180bec(int, int, int, int, int, int, int);
int FUN_0c180d72(int);
int FUN_0c05a812(void);
int FUN_0c05a820(int a4, int a5, int a6, int a7);
int FUN_0c05ae28(int a4);
int FUN_0c05ae6c(int a4, int a5, int a6, int a7);
int FUN_0c05b026(int a4, int a5, int a6, int a7);
int FUN_0c05b0be(int a4, int a5);

int FUN_0c05a812(void)
{
    FUN_0c05a5d4();
    FUN_0c05a68a();
    return FUN_0c05a4ba();
}

int FUN_0c05a820(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t1;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t14;
    register int t25;
    register int t99;
    register float u54;
    register float u57;
    register int t59;
    register int t110;
    register int t112;
    register int t113;
    register int t117;
    register int t118;
    register int t121;
    register int t122;
    register int t123;
    register int t126;
    register int t127;
    register int t153;
    register int t158;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t1 = *(int *)(((int)stk + 8));
    if ((unsigned char)(*(signed char *)(((((a5 << 2) << 1) + t1) + 0x0))) == 0xFF) {
    } else {
        *(unsigned int *)(((int)stk + 0)) = (unsigned char)(*(signed char *)(((((a5 << 2) << 1) + t1) + 0x4)));
        t4 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x5));
        t5 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x6));
        if ((unsigned char)(*(signed char *)(((((a5 << 2) << 1) + t1) + 0x1))) == 0x80) {
            t7 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x4));
            t8 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x6));
            t9 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x2));
            t10 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = (((unsigned char)t9 << 8) + (unsigned char)t10);
            FUN_0c180bec((unsigned char)t7, 0xA5, (((unsigned char)t9 << 8) + (unsigned char)t10), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
            FUN_0c180bec((unsigned char)t7, 0xA6, (unsigned char)t8, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
            FUN_0c05afec((unsigned char)t7, 0x7F);
            *(unsigned int *)((((((unsigned char)t7 << 2) + (unsigned char)t7) << 2) + 0xC46DEA4)) = (unsigned char)t8;
        } else {
            t14 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((int)stk + 16)) = (((((unsigned char)(*(signed char *)(((((a5 << 2) << 1) + t1) + 0x3))) << 16) + (((unsigned char)(*(signed char *)(((((a5 << 2) << 1) + t1) + 0x2))) + (*(int *)((((((t14 << 1) + t14) << 2) + 0xC257728) + 0x8)))) << 8)) + (unsigned char)(*(signed char *)(((((a5 << 2) << 1) + t1) + 0x1)))) + (*(int *)((((((t14 << 1) + t14) << 2) + 0xC257728) + 0x4))));
            *(unsigned int *)(((int)stk + 4)) = ((unsigned char)(*(signed char *)(((((a5 << 2) << 1) + t1) + 0x0))) + (*(int *)((((((t14 << 1) + t14) << 2) + 0xC257728) + 0x0))));
            if ((unsigned char)t4 != 0xFF) {
                t25 = ((unsigned char)t4 & 0x7F);
                if ((0x80 & (unsigned char)t4) != 0) {
                    t25 = (*(int *)(((((unsigned char)t4 & 0x1F) << 2) + 0xC250AC4)));
                }
                FUN_0c180b3c((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))), 0x27B0, t25, *(int *)((int)stk + 0));
            }
            t99 = 0x0;
            if ((unsigned char)t5 != 0xFF) {
                if ((unsigned char)t5 != 0xFE) {
                    t99 = (((unsigned char)t5 & 0x7F) - 64);
                    if ((0x80 & (unsigned char)t5) != 0) {
                        t99 = (*(int *)(((((unsigned char)t5 & 0xF) << 2) + 0xC250B44)));
                    }
                } else {
                    t99 = 0x0;
                    if (a7 != 0) {
                        nlSelectMatrixStack(0x1);
                        nlUnitMatrix();
                        nlMakeFastModelProjectMatrixVM();
                        nlFastScreenPoint(a7, (((int)stk + 0) + 0x14));
                        if (0.0f > (*(float *)(((int)stk + 20)))) {
                            *(float *)(((int)stk + 20)) = 0.0f;
                        }
                        u54 = *(float *)(((int)stk + 20));
                        u57 = (u54 / 40.0f);
                        if ((u54 / 40.0f) > 2.14748365e+09f) {
                            u57 = ((u54 / 40.0f) + -4.2949673e+09f);
                        }
                        t59 = (int)u57;
                        if ((unsigned int)(int)u57 > (unsigned int)0xF) {
                            t59 = 0xF;
                        }
                        t99 = (*(int *)(((t59 << 2) + 0xC250B44)));
                    }
                }
            }
            FUN_0c180b3c((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))), 0x2AB0, t99, *(int *)((int)stk + 0));
            FUN_0c180d72((*(int *)(((int)stk + 16))));
            t110 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x0));
            if ((unsigned char)t110 != 16) {
                t112 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x4));
                t113 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x5));
                *(unsigned int *)(((int)stk + 0)) = (unsigned char)t113;
                FUN_0c180b3c((unsigned char)(*(signed char *)(((((a5 << 2) << 1) + t1) + 0x0))), (unsigned char)t112, 0x7B0, (unsigned char)t113, *(int *)((int)stk + 0));
            } else {
                if ((unsigned char)t110 != 17) {
                    t117 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x4));
                    t118 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x5));
                    *(unsigned int *)(((int)stk + 0)) = (unsigned char)t118;
                    FUN_0c180b3c((unsigned char)(*(signed char *)(((((a5 << 2) << 1) + t1) + 0x0))), (unsigned char)t117, 0x27B0, (unsigned char)t118, *(int *)((int)stk + 0));
                } else {
                    t121 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x0));
                    if ((unsigned char)t121 != 18) {
                        t122 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x4));
                        t123 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x6));
                        *(unsigned int *)(((int)stk + 0)) = (unsigned char)t123;
                        FUN_0c180b3c((unsigned char)(*(signed char *)(((((a5 << 2) << 1) + t1) + 0x0))), (unsigned char)t122, 0xAB0, (unsigned char)t123, *(int *)((int)stk + 0));
                    } else {
                        if ((unsigned char)t121 != 19) {
                            t126 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x4));
                            t127 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x6));
                            *(unsigned int *)(((int)stk + 0)) = (unsigned char)t127;
                            FUN_0c180b3c((unsigned char)(*(signed char *)(((((a5 << 2) << 1) + t1) + 0x0))), (unsigned char)t126, 0x2AB0, (unsigned char)t127, *(int *)((int)stk + 0));
                        }
                    }
                }
            }
        }
    }
    t153 = *(signed char *)(((((a5 << 2) << 1) + t1) + 0x7));
    t158 = (unsigned char)t153;
    if ((unsigned char)t153 != 0xFF) {
        t158 = (((int (*)(int, int, int, int))(FUN_0c05a820))((*(int *)(((int)stk + 8))), (unsigned char)(*(signed char *)(((((a5 << 2) << 1) + t1) + 0x7))), (*(int *)(((int)stk + 12))), a7));
    }
    return t158;
}

int FUN_0c05ae28(int a4)
{
    register int t2;

    if ((*(signed char *)0xC541F66) == 0) {
        t2 = *(signed char *)0xC541F3D;
        if ((unsigned char)t2 != 1) {
            if ((unsigned int)a4 < (unsigned int)0x2D) {
                if ((int)(*(int *)(((((a4 << 2) << 1) + 0xC1C32B4) + 0x0))) >= 0) {
                    return FUN_0c05ad20(0x1, (*(int *)(((((a4 << 2) << 1) + 0xC1C32B4) + 0x0))), (*(int *)(((((a4 << 2) << 1) + 0xC1C32B4) + 0x4))), 0x0);
                }
                return (unsigned char)t2;
            }
            return (unsigned char)t2;
        }
        return (unsigned char)t2;
    }
    if ((unsigned int)a4 < (unsigned int)0x2D) {
        if ((int)(*(int *)(((((a4 << 2) << 1) + 0xC1C32B4) + 0x0))) >= 0) {
            return FUN_0c05ad20(0x1, (*(int *)(((((a4 << 2) << 1) + 0xC1C32B4) + 0x0))), (*(int *)(((((a4 << 2) << 1) + 0xC1C32B4) + 0x4))), 0x0);
        }
        return 0x2A;
    }
    return 0x2A;
}

int FUN_0c05ae6c(int a4, int a5, int a6, int a7)
{
    register int t2;

    if ((*(signed char *)0xC541F66) == 0) {
        t2 = *(signed char *)0xC541F3D;
        if ((unsigned char)t2 != 1) {
            if (a4 != 0) {
                return FUN_0c05ad20(a5, a4, a6, a7);
            }
            return (unsigned char)t2;
        }
        return (unsigned char)t2;
    }
    if (a4 != 0) {
        return FUN_0c05ad20(a5, a4, a6, a7);
    }
    return 0x2A;
}

int FUN_0c05b026(int a4, int a5, int a6, int a7)
{
    return (FUN_0c05b018(0xC46DFEC, a4, a5, a6, a7));
}

int FUN_0c05b0be(int a4, int a5)
{
    return (FUN_0c05b018(0xC46DFEC, a4, a5, 0x7F, 0x0));
}
