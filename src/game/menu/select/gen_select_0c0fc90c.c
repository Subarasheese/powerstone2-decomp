/* game/menu/select: functions 0C0FC90C-0C0FD0CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a396(int);
int FUN_0c05ab24(int, int, int);
int FUN_0c05aeac(void);
int FUN_0c05f22c(int);
int FUN_0c05f254(int);
int FUN_0c104f7c(int, int);
int FUN_0c1171f0(int);
int FUN_0c179ac0(void);
int FUN_0c187798(int);
int FUN_0c0fc90c(int a4);
int FUN_0c0fc924(int a4, int a5, int a6);
int FUN_0c0fc990(int a4, int a5);
int FUN_0c0fc9b8(int a4, int a5, int a6);
int FUN_0c0fcb42(int a4);
int FUN_0c0fcbba(int a4);
int FUN_0c0fcbee(int a4);
int FUN_0c0fcce4(int a4);
int FUN_0c0fcd34(int a4);
int FUN_0c0fcd90(int a4, int a5, int a6, int a7);

int FUN_0c0fc90c(int a4)
{
    register int t0;
    register int t1;

    if ((int)a4 > 0) {
        t0 = 0x0;
        for (;;) {
            t1 = t0;
            t0 = (t0 + 0x1);
            *(unsigned char *)((0xC472AE4 + t1)) = t1;
            if ((int)t0 >= (int)a4) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c0fc924(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    *(unsigned char *)((0xC472AE4 + a5)) = 0x0;
    *(unsigned char *)0xC472AE4 = a5;
    t0 = a5;
    t1 = 0x0;
    t2 = a4;
    t3 = a5;
    t4 = a6;
    t5 = 0xA;
    for (;;) {
        t6 = t1;
        if ((int)0x1 < (int)a4) {
            t7 = 0x1;
            for (;;) {
                t0 = (FUN_0c179ac0());
                t8 = t0;
                t0 = a4;
                t1 = 0xC18760C;
                t0 = ((int)((int)t8 % (int)t0));
                t2 = t0;
                if ((t2 != 0) && (t2 != t7)) {
                    t4 = t7;
                    t3 = t2;
                    t4 = (t4 + 0xC472AE4);
                    t3 = (t3 + 0xC472AE4);
                    t8 = (*(signed char *)((t4 + 0x0)));
                    t2 = (*(signed char *)((t3 + 0x0)));
                    *(unsigned char *)((t3 + 0x0)) = t8;
                    *(unsigned char *)((t4 + 0x0)) = t2;
                    t9 = t8;
                    t10 = t3;
                    t11 = t4;
                }
                t7 = (t7 + 0x1);
                t8 = t9;
                t3 = t10;
                t4 = t11;
                if ((int)t7 >= (int)a4) {
                    break;
                }
            }
            t6 = 0xC18760C;
        }
        t5 = (t5 - 0x1);
        t1 = t6;
        if (t5 == 0) {
            break;
        }
    }
    return t0;
}

int FUN_0c0fc990(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)(a4 - 1) > 0) {
        t0 = 0x0;
        t1 = 0xC472AE4;
        t2 = 0xC472AE5;
        for (;;) {
            if ((*(signed char *)((t1 + 0x0))) == a5) {
                break;
            }
            t0 = (t0 + 0x1);
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x1);
            if ((int)t0 >= (int)(a4 - 1)) {
                t0 = 0xFFFFFFFF;
                return t0;
            }
        }
        return (*(signed char *)((t2 + 0x0)));
    }
    return 0xFFFFFFFF;
}


int FUN_0c0fcb42(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
    }
    if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c0fc9b8(a4, (*(signed char *)(((t1 + 0x41C) + 0x2))), 0x0);
    return FUN_0c0fc9b8(a4, ((*(signed char *)(((t1 + 0x41C) + 0x0))) + 0x1), 0x1);
}

int FUN_0c0fcbba(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x4);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FCB42;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c0fcbee(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        t2 = t0;
        if (t0 != 1) {
        } else {
            if ((*(int *)((0xC1FB62C + ((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2)))) != -1) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2) + 0xC1FB62C))), (*(int *)0xC4B410C));
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            if ((*(int *)((0xC1FB66C + ((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2)))) != -1) {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, (*(int *)((((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2) + 0xC1FB66C))), (*(int *)0xC4B410C));
            } else {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
            t2 = 0xA8;
        }
        t0 = t2;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        FUN_0c1171f0(a4);
        if ((*(int *)((0xC1FB62C + ((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2)))) != -1) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2) + 0xC1FB62C))), (*(int *)0xC4B410C));
        } else {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        if ((*(int *)((0xC1FB66C + ((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2)))) != -1) {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, (*(int *)((((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2) + 0xC1FB66C))), (*(int *)0xC4B410C));
        } else {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        t0 = 0xA8;
    }
    return t0;
}

int FUN_0c0fcce4(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FCBEE;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fcd34(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(int *)((((*(signed char *)(((a4 + 0x41C) + 0x5))) << 2) + 0xC1FB5EC));
    *(unsigned char *)(((a4 + 0x41C) + 0x2)) = 0x0;
    t2 = 0x0;
    for (;;) {
        if (((*(int *)(((((t2 << 2) << 1) + (((((((t1 << 1) + t1) << 2) << 2) << 2) << 1) + 0xC28EE10)) + 0x0))) == -1) && (t0 = *(int *)(((((t2 << 2) << 1) + (((((((t1 << 1) + t1) << 2) << 2) << 2) << 1) + 0xC28EE10)) + 0x4)), t0 == -1)) {
            break;
        }
        *(unsigned char *)(((a4 + 0x41C) + 0x2)) = ((*(signed char *)(((a4 + 0x41C) + 0x2))) + 0x1);
        t2 = (t2 + 0x1);
    }
    t0 = *(signed char *)(((a4 + 0x41C) + 0x2));
    t1 = t0;
    if ((int)(*(signed char *)(((a4 + 0x41C) + 0x0))) >= (int)t0) {
        t0 = *(signed char *)(((a4 + 0x41C) + 0x2));
        (((struct o41C_uchar *)(a4))->v) = (t0 - 1);
        t1 = (t0 - 1);
    }
    return t1;
}

int FUN_0c0fcd90(int a4, int a5, int a6, int a7)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_1 = a4;
    v0_5 = a5;
    v0_6 = a6;
    v0_7 = a7;
    v0_5 = *(signed char *)((v0_1 + 0x14));
    v0_4 = (v0_5);
    v0_3 = (0xC4B410C);
    v0_0 = (0xC03744A);
    v0_0 = ((0x41C + v0_1));
    v0_1 = (v0_1);
    v0_2 = (0xC05F22C);
    v0_2 = (0x0);
    if ((v0_5 == 0)) goto L_C0FCDC0;
    if ((v0_4 == 1)) goto L_C0FCE22;
    L_C0FD0B6:;
    return v0_4;
    L_C0FCE22:;
    if (((*(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C))) == 1)) goto L_C0FCE2E;
    (((struct oA8_uchar *)(v0_1))->v) = v0_2;
    v0_4 = (0xA8);
    goto L_C0FD0B6;
    L_C0FCE2E:;
    v0_4 = *(signed char *)0xC5429B2;
    v0_5 = (FUN_0c05f22c(0x200)) == 0;
    v0_4 = ((v0_4 + 0xD));
    if (v0_5) goto L_C0FCE78;
    *(unsigned char *)((v0_0 + 0x5)) = ((*(signed char *)((v0_0 + 0x5))) - 1);
    if (((int)(*(signed char *)((v0_0 + 0x5))) >= 0)) goto L_C0FCE94;
    *(unsigned char *)((v0_0 + 0x5)) = v0_4;
    L_C0FCE94:;
    FUN_0c0fcd34(v0_1);
    L_C0FCE98:;
    v0_4 = *(int *)((((*(signed char *)((v0_0 + 0x5))) << 2) + 0xC1FB5EC));
    v0_5 = (FUN_0c05f22c(0xC00)) == 0;
    v0_4 = (v0_4);
    if (v0_5) goto L_C0FCEBA;
    *(unsigned char *)((v0_0 + 0x0)) = (FUN_0c104f7c((*(signed char *)((v0_0 + 0x0))), ((*(signed char *)((v0_0 + 0x2))) - 1)));
    L_C0FCF12:;
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    v0_6 = (FUN_0c05f254(0x800)) == 0;
    v0_5 = (0x0);
    if (v0_6) goto L_C0FCF2A;
    v0_6 = (0x1C);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    L_C0FCF2E:;
    FUN_0c03744a(((((struct oD8_int *)(v0_1))->v)), v0_5, v0_6, v0_7);
    v0_6 = (FUN_0c05f254(0x100)) == 0;
    v0_5 = (0x0);
    if (v0_6) goto L_C0FCF48;
    v0_6 = (0x1D);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    L_C0FCF4C:;
    FUN_0c03744a(((((struct oDC_int *)(v0_1))->v)), v0_5, v0_6, v0_7);
    v0_6 = (FUN_0c05f254(0x40)) == 0;
    v0_5 = (0x0);
    if (v0_6) goto L_C0FCF90;
    v0_6 = (0x1E);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    L_C0FCF94:;
    FUN_0c03744a(((((struct oE0_int *)(v0_1))->v)), v0_5, v0_6, v0_7);
    v0_6 = (FUN_0c05f254(0x400)) == 0;
    v0_5 = (0x0);
    if (v0_6) goto L_C0FCFAE;
    v0_6 = (0x1F);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    L_C0FCFB2:;
    FUN_0c03744a(((((struct oE4_int *)(v0_1))->v)), v0_5, v0_6, v0_7);
    *(unsigned int *)(((int)stk + 8)) = (((((((v0_4 << 1) + v0_4) << 2) << 2) << 2) << 1) + 0xC28EE10);
    if (((*(int *)((((((*(signed char *)((v0_0 + 0x0))) << 2) << 1) + (((((((v0_4 << 1) + v0_4) << 2) << 2) << 2) << 1) + 0xC28EE10)) + 0x4))) == -1)) goto L_C0FD08C;
    FUN_0c03744a(((((struct oF4_int *)(v0_1))->v)), 0x0, (*(int *)((((((*(signed char *)((v0_0 + 0x0))) << 2) << 1) + (*(int *)(((int)stk + 8)))) + 0x4))), (*(int *)((v0_3 + 0x0))));
    *(unsigned char *)((((((struct oF4_int *)(v0_1))->v)) + 0x0)) = 0x1;
    v0_5 = (((struct oF4_int *)(v0_1))->v);
    *(unsigned short *)((v0_5 + 0x6)) = ((*(short *)((v0_5 + 0x6))) | 0x400);
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0xA;
    FUN_0c058a6e((((((struct oF4_int *)(v0_1))->v)) + 0x14), 0xC28EB38, 0xC28EB28, ((((struct o20_short *)(v0_1))->v)), 0xA, 0x0);
    if ((((((struct o20_short *)(v0_1))->v)) != 0)) goto L_C0FD092;
    *(unsigned int *)(((int)stk + 8)) = (((((((v0_4 << 1) + v0_4) << 2) << 2) << 2) << 1) + 0xC28EE10);
    if (((*(int *)((((((*(signed char *)((v0_0 + 0x1))) << 2) << 1) + (((((((v0_4 << 1) + v0_4) << 2) << 2) << 2) << 1) + 0xC28EE10)) + 0x4))) == -1)) goto L_C0FD064;
    FUN_0c03744a(((((struct oF4_int *)(v0_1))->v)), 0x0, (*(int *)((((((*(signed char *)((v0_0 + 0x1))) << 2) << 1) + (*(int *)(((int)stk + 8)))) + 0x4))), (*(int *)((v0_3 + 0x0))));
    L_C0FD064:;
    v0_3 = (((struct oF4_int *)(v0_1))->v);
    *(unsigned short *)((v0_3 + 0x6)) = ((*(short *)((v0_3 + 0x6))) | 0x400);
    v0_3 = v0_2;
    *(int *)((int)stk + 4) = v0_3;
    *(int *)((int)stk + 0) = 0xA;
    FUN_0c058a6e((((((struct oF4_int *)(v0_1))->v)) + 0x14), 0xC28EB28, 0xC28EB38, ((((struct o20_short *)(v0_1))->v)), 0xA, v0_3);
    L_C0FD092:;
    v0_3 = *(signed char *)((v0_0 + 0x1));
    v0_4 = (v0_3);
    if ((v0_3 == (*(signed char *)((v0_0 + 0x0))))) goto L_C0FD0B6;
    v0_3 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_3 + 0x1);
    v0_4 = (0x20);
    if (((int)(short)(v0_3 + 0x1) <= (int)0xA)) goto L_C0FD0B6;
    *(unsigned short *)((v0_1 + v0_4)) = v0_2;
    v0_1 = *(signed char *)((v0_0 + 0x0));
    *(unsigned char *)((v0_0 + 0x1)) = v0_1;
    v0_4 = (v0_1);
    goto L_C0FD0B6;
    L_C0FD08C:;
    *(unsigned char *)((((((struct oF4_int *)(v0_1))->v)) + 0x0)) = v0_2;
    goto L_C0FD092;
    L_C0FCFAE:;
    v0_6 = (0x23);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    goto L_C0FCFB2;
    L_C0FCF90:;
    v0_6 = (0x22);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    goto L_C0FCF94;
    L_C0FCF48:;
    v0_6 = (0x21);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    goto L_C0FCF4C;
    L_C0FCF2A:;
    v0_6 = (0x20);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    goto L_C0FCF2E;
    L_C0FCEBA:;
    v0_5 = (FUN_0c05f22c(0x100)) == 0;
    if (v0_5) goto L_C0FCF04;
    if (((*(signed char *)((v0_0 + 0x6))) == (*(signed char *)((v0_0 + 0x5))))) goto L_C0FCED8;
    *(unsigned char *)((v0_0 + 0x6)) = (*(signed char *)((v0_0 + 0x5)));
    FUN_0c05a396(v0_4);
    L_C0FCED8:;
    FUN_0c05ab24((*(int *)((((((((((v0_4 << 1) + v0_4) << 2) << 2) << 2) << 1) + 0xC28EE10) + (((*(signed char *)((v0_0 + 0x0))) << 2) << 1)) + 0x0))), 0x0, v0_4);
    goto L_C0FCF12;
    L_C0FCF04:;
    v0_5 = (FUN_0c05f22c(0x40)) == 0;
    if (v0_5) goto L_C0FCF12;
    FUN_0c05aeac();
    goto L_C0FCF12;
    L_C0FCE78:;
    v0_5 = (FUN_0c05f22c(0x80)) == 0;
    if (v0_5) goto L_C0FCE98;
    *(unsigned char *)((v0_0 + 0x5)) = ((*(signed char *)((v0_0 + 0x5))) + 0x1);
    if (((int)(*(signed char *)((v0_0 + 0x5))) <= (int)v0_4)) goto L_C0FCE94;
    *(unsigned char *)((v0_0 + 0x5)) = v0_2;
    goto L_C0FCE94;
    L_C0FCDC0:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    (((struct oAC_ushort *)(v0_1))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    (((struct o30_float *)(v0_1))->v) = (1.0f + 1.0f);
    FUN_0c1171f0(v0_1);
    *(unsigned char *)((v0_0 + 0x5)) = v0_2;
    *(unsigned char *)((v0_0 + 0x6)) = 0x63;
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x0, 0x2, (*(int *)((v0_3 + 0x0))));
    FUN_0c03744a(((((struct oEC_int *)(v0_1))->v)), 0x0, 0x15, (*(int *)((v0_3 + 0x0))));
    FUN_0c03744a(((((struct oF0_int *)(v0_1))->v)), 0x0, 0x16, (*(int *)((v0_3 + 0x0))));
    FUN_0c0fcce4(v0_1);
    FUN_0c0fcbba(v0_1);
    FUN_0c0fcd34(v0_1);
    goto L_C0FCE22;
}
