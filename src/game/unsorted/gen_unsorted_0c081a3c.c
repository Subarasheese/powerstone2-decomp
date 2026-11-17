/* game/unsorted: functions 0C081A3C-0C082922, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o3732_uchar { char p[0x3732]; unsigned char v; };
struct o3734_uchar { char p[0x3734]; unsigned char v; };
struct o3735_uchar { char p[0x3735]; unsigned char v; };
struct o3736_uchar { char p[0x3736]; unsigned char v; };
struct o3737_uchar { char p[0x3737]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3758_uchar { char p[0x3758]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3764_int { char p[0x3764]; int v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3848_uint { char p[0x3848]; unsigned int v; };
struct o384C_uint { char p[0x384C]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c059df2(int a4, int a5);
int FUN_0c059e60(int, int);
int FUN_0c05aaf6(int);
int FUN_0c067734(int);
int FUN_0c071b00(int);
int FUN_0c071e40(int);
int FUN_0c0730ca(int);
int FUN_0c07c4b0(int, int);
int FUN_0c07ce58(int, int);
int FUN_0c07d15c(int);
int math_angle_between_points_xz(int, int);
int FUN_0c07d6cc(int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c07ebd0(int);
int FUN_0c081ee8(int, int);
int FUN_0c085d0c(int);
int FUN_0c0bb6ac(int);
int FUN_0c0c2d56(int, int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c0c3258(int, int);
int FUN_0c11f9c8(int, int, int);
int FUN_0c158ca0(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c081a3c(int a4, int a5);
int FUN_0c081a94(int a4, int a5);
int FUN_0c081d1e(int a4, int a5, int a6, int a7);
int FUN_0c081dfc(int a4, int a5, int a6, int a7);
int FUN_0c081ec2(int a4);
int FUN_0c082032(int a4, int a5, int a6, int a7);

int FUN_0c081a3c(int a4, int a5)
{
    register int t0;

    if ((signed char)a5 != 12) {
        if ((signed char)a5 != 13) {
            if ((signed char)a5 != 7) {
                if ((signed char)a5 != 8) {
                    if ((signed char)a5 != 14) {
                        return (signed char)a5;
                    }
                    (((struct o382E_ushort *)(a4))->v) = 0x0;
                    t0 = *(signed char *)((a4 + 0x2));
                    (((struct o374A_uchar *)(a4))->v) = (*(signed char *)(((0x8 + (0xC25BC80 + (((t0 << 2) + t0) << 1))) + 0x0)));
                    return 0x374A;
                }
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t0 = *(signed char *)((a4 + 0x2));
                (((struct o374A_uchar *)(a4))->v) = (*(signed char *)(((0x6 + (0xC25BC80 + (((t0 << 2) + t0) << 1))) + 0x0)));
                return 0x374A;
            }
            (((struct o382E_ushort *)(a4))->v) = 0x0;
            t0 = *(signed char *)((a4 + 0x2));
            (((struct o374A_uchar *)(a4))->v) = (*(signed char *)(((0x4 + (0xC25BC80 + (((t0 << 2) + t0) << 1))) + 0x0)));
            return 0x374A;
        }
        (((struct o382E_ushort *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0x2));
        (((struct o374A_uchar *)(a4))->v) = (*(signed char *)(((0x0 + (0xC25BC80 + (((t0 << 2) + t0) << 1))) + 0x0)));
        return 0x374A;
    }
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0x2));
    (((struct o374A_uchar *)(a4))->v) = (*(signed char *)(((0x2 + (0xC25BC80 + (((t0 << 2) + t0) << 1))) + 0x0)));
    return 0x374A;
}

int FUN_0c081a94(int a4, int a5)
{
    int stk[4];

    register int R1;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    v0_2 = a4;
    v0_1 = a5;
    (((struct o3715_uchar *)(v0_2))->v) = 0x7;
    (((struct o3732_uchar *)(v0_2))->v) = v0_1;
    FUN_0c067734(v0_2);
    v0_4 = *(signed char *)((v0_2 + 0x3732));
    v0_3 = (v0_4);
    v0_0 = (v0_2);
    if ((v0_4 == 10)) goto L_C081AC2;
    if ((v0_3 == 11)) goto L_C081AC2;
    if ((v0_3 == 15)) goto L_C081AC2;
    FUN_0c081dfc(v0_0, v0_1, R6, R7);
    L_C081AC2:;
    (((struct o3848_uint *)(v0_0))->v) = 0x0;
    (((struct o3736_uchar *)(v0_0))->v) = 0x6;
    (((struct o3735_uchar *)(v0_0))->v) = 0x1;
    (((struct o3734_uchar *)(v0_0))->v) = 0x0;
    (((struct o3747_uchar *)(v0_0))->v) = 0x4;
    (((struct o3758_uchar *)(v0_0))->v) = 0x0;
    v0_1 = *(int *)((0xC259414 + ((*(signed char *)((v0_0 + 0x2))) << 2)));
    v0_4 = *(signed char *)((v0_0 + 0x3733));
    (((struct o3737_uchar *)(v0_0))->v) = (*(signed char *)(((v0_1 + ((v0_4 << 2) << 2)) + 0xC)));
    v0_3 = *(signed char *)((v0_0 + 0x3732));
    v0_2 = (((v0_4 << 2) << 2));
    v0_4 = ((v0_1 + ((v0_4 << 2) << 2)));
    v0_2 = (v0_3);
    v0_1 = (0xC259414);
    if ((v0_3 == 0)) goto L_C081B0C;
    if ((v0_2 != 1)) goto L_C081B5E;
    L_C081B0C:;
    v0_4 = *(int *)((v0_1 + ((*(signed char *)((v0_0 + 0x2))) << 2)));
    v0_5 = *(signed char *)((v0_0 + 0x3733));
    v0_3 = *(signed char *)(((v0_4 + ((v0_5 << 2) << 2)) + 0x0));
    v0_2 = (v0_3);
    v0_4 = ((v0_4 + ((v0_5 << 2) << 2)));
    if ((v0_3 != 0)) goto L_C081B5E;
    v0_3 = *(int *)((v0_0 + 0x38));
    v0_4 = FUN_0c07d6cc(v0_0);
    v0_2 = ((unsigned short)(v0_3 - v0_4));
    v0_5 = ((v0_3 - v0_4));
    if (((0x8000 & (unsigned short)(v0_3 - v0_4)) == 0)) goto L_C081B38;
    v0_2 = ((v0_2 | 0xFFFF0000));
    L_C081B38:;
    v0_3 = *(signed char *)((v0_0 + 0x371C));
    v0_4 = (v0_3);
    if ((v0_3 != 0)) goto L_C081B5E;
    v0_4 = (0x6000);
    if (((int)v0_2 >= (int)0x6000)) goto L_C081B4C;
    if (((int)v0_2 > (int)0xFFFFA000)) goto L_C081B5E;
    L_C081B4C:;
    w0_0 = (((struct o3780_float *)(v0_0))->v);
    w0_1 = (w0_0);
    w0_1 = (300.0f);
    if ((!(300.0f > w0_0))) goto L_C081B5E;
    (((struct o3732_uchar *)(v0_0))->v) = 0x3;
    v0_2 = (0x3);
    L_C081B5E:;
    v0_2 = *(signed char *)((v0_0 + 0x3732));
    v0_3 = (v0_2);
    if (((unsigned int)v0_2 >= (unsigned int)0x10)) goto L_C081BE8;
    switch (((v0_3 << 1))) { case 0: goto L_C081BE8; case 2: goto L_C081BE8; case 4: goto L_C081BE8; case 6: goto L_C081C7E; case 8: goto L_C081BD6; case 10: goto L_C081BE4; case 12: goto L_C081BE8; case 14: goto L_C081BCA; case 16: goto L_C081BCA; case 18: goto L_C081C88; case 20: goto L_C081C9C; case 22: goto L_C081CAA; case 24: goto L_C081BC0; case 26: goto L_C081BC0; case 28: goto L_C081BCA; case 30: goto L_C081CFC; }
    L_C081CFC:;
    return FUN_0c0730ca(v0_0);
    L_C081CAA:;
    return FUN_0c071e40(v0_0);
    L_C081C9C:;
    return FUN_0c071b00(v0_0);
    L_C081C88:;
    FUN_0c158ca0(0x0, (v0_0 + 0x28), (((((struct o3760_int *)(v0_0))->v)) + 0x28));
    L_C081D0A:;
    v0_2 = *(int *)((0xC2594B4 + ((*(signed char *)((v0_0 + 0x2))) << 2)));
    return ((int (*)(int, int, int, int))(v0_2))(v0_0, v0_1, R6, R7);
    L_C081C7E:;
    v0_3 = ((FUN_0c07d6cc(v0_0)));
    L_C081C84:;
    *(unsigned int *)((v0_0 + 0x38)) = v0_3;
    goto L_C081D0A;
    L_C081BE8:;
    v0_2 = (FUN_0c07ebd0(v0_0)) == 0;
    if (v0_2) goto L_C081C12;
    if (((*(signed char *)((v0_0 + 0x3733))) != 0)) goto L_C081C36;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(v0_0, v0_1, R6)));
    goto L_C081D0A;
    L_C081C36:;
    v0_2 = FUN_0c07d15c(v0_0);
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    if ((v0_2 == 0)) goto L_C081C5C;
    v0_3 = ((math_angle_between_points_xz((v0_0 + 0x28), ((((*(int *)(((int)stk + 0))) - 1) * 0x3938) + 0xC5324C0))));
    goto L_C081C84;
    L_C081C5C:;
    v0_2 = (FUN_0c07ce58(v0_0, ((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x78) + 0xC25B194) + 0x60))) == 0;
    if (v0_2) goto L_C081D0A;
    L_C081C74:;
    *(unsigned int *)((v0_0 + 0x38)) = (FUN_0c07d774(v0_0));
    goto L_C081D0A;
    L_C081C12:;
    if (((*(signed char *)((v0_0 + 0x3733))) != 0)) goto L_C081C36;
    v0_2 = (FUN_0c07ce58(v0_0, ((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x78) + 0xC25B194) + 0x60))) != 0;
    if (v0_2) goto L_C081C74;
    goto L_C081D0A;
    L_C081BE4:;
    goto L_C081D0A;
    L_C081BD6:;
    FUN_0c07c4b0((*(signed char *)((v0_0 + 0x1))), 0x1);
    goto L_C081D0A;
    L_C081BCA:;
    FUN_0c081a3c(v0_0, (*(signed char *)((v0_0 + 0x3732))));
    goto L_C081D0A;
    L_C081BC0:;
    FUN_0c07c4b0((*(signed char *)((v0_0 + 0x1))), 0x3);
    goto L_C081BCA;
}

int FUN_0c081d1e(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t17;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x9;
    FUN_0c081dfc(a4, a5, a6, a7);
    *(int *)((int)stk + 8) = 0x22;
    *(int *)((int)stk + 4) = 0x5;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x22, 0xFFFFFFFF, 0x5, 0x22);
    t2 = *(int *)(((0x118 + a4) + 0x4));
    t3 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    t4 = *(int *)(((0x118 + a4) + 0x4));
    t5 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t4))->v) = 1.0f;
    (((struct o98_float *)(t5))->v) = 1.0f;
    (((struct o94_float *)(t4))->v) = 1.0f;
    (((struct o94_float *)(t5))->v) = 1.0f;
    t6 = *(signed char *)(((int)stk + 12));
    if (t6 != 0) {
        if (t6 != 1) {
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o384C_uint *)(a4))->v) = (math_angle_between_points_xz((a4 + 0x28), (((short)(*(signed char *)((a4 + 0x372A))) * (short)0x3938) + 0xC5324C0)));
            t17 = 0x0;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o384C_uint *)(a4))->v) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3764_int *)(a4))->v)) + 0x28)));
            t17 = 0x1;
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o384C_uint *)(a4))->v) = (math_angle_between_points_xz((a4 + 0x28), (((short)(*(signed char *)((a4 + 0x372A))) * (short)0x3938) + 0xC5324C0)));
        t17 = 0x0;
    }
    (((struct o15_uchar *)(a4))->v) = t17;
    return 0x15;
}

int FUN_0c081dfc(int a4, int a5, int a6, int a7)
{
    register int t4;
    register int t9;

    if ((*(signed char *)((a4 + 0x371D))) == 1) {
        (((struct o371D_uchar *)(a4))->v) = 0x0;
        (((struct o372E_uchar *)(a4))->v) = 0x1;
    }
    t4 = *(signed char *)((a4 + 0x3721));
    t9 = (unsigned char)t4;
    if (((unsigned char)t4 != 0xC0) && (((unsigned char)t4 != 0xC4) && (((unsigned char)t4 != 0xC7) && ((unsigned char)t4 != 0xCC)))) {
        if (((unsigned char)t4 == 70) || (((unsigned char)t4 == 72) || ((unsigned char)t4 == 71))) {
            (((struct o371D_uchar *)(a4))->v) = 0x0;
        }
        FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x6, (*(signed char *)((a4 + 0x1))), a7);
        (((struct o3721_uchar *)(a4))->v) = 0x0;
        (((struct o376C_uint *)(a4))->v) = 0x0;
        t9 = 0x376C;
    }
    return t9;
}

int FUN_0c081ec2(int a4)
{
    return FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x51);
}

int FUN_0c082032(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t1;
    register int t5;
    register int t10;
    register int t12;
    register int t45;
    register int t53;
    register int t55;
    register int t56;
    register int t65;
    register int t70;
    register int t71;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0xA;
    FUN_0c081dfc(a4, a5, a6, a7);
    t1 = *(signed char *)(((int)stk + 12));
    if (t1 != 0) {
        if (t1 == 1) {
            if (((((struct o3768_int *)(a4))->v)) != 0) {
                t5 = FUN_0c0c3258(a4, ((((struct o3768_int *)(a4))->v)));
                if (t5 != 0) {
                    FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
                    t10 = 0x31;
                    if ((*(signed char *)((0xC2738BD + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34)))) == 11) {
                        t10 = 0x17;
                    }
                    t12 = t10;
                    *(int *)((int)stk + 8) = t12;
                    *(int *)((int)stk + 4) = 0x2;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, t10, 0xFFFFFFFF, 0x2, t12);
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
                    FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x5);
                    FUN_0c0bb6ac(a4);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    return 0x15;
                }
                return FUN_0c085d0c(a4);
            }
            return FUN_0c085d0c(a4);
        }
        if (t1 == 2) {
            *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v)) - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * 130.0f)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v)) - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * 130.0f)));
            *(int *)((int)stk + 8) = 0x2C;
            *(int *)((int)stk + 4) = 0x2;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x2C, 0xFFFFFFFF, 0x2, 0x2C);
            (((struct o15_uchar *)(a4))->v) = 0x4;
            return 0x15;
        }
        return FUN_0c085d0c(a4);
    }
    if (((((struct o3768_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
    if ((*(signed char *)((0xC535BB8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) == 0) {
        FUN_0c05aaf6((0x9B + (*(signed char *)((a4 + 0x1)))));
    }
    t45 = *(signed char *)((((((struct o3768_int *)(a4))->v)) + 0x41C));
    if (((unsigned char)t45 != 0xC3) && ((unsigned char)t45 != 0xC5)) {
        FUN_0c059e60(a4, 0xE);
    }
    t53 = *(signed char *)((0x41C + ((((struct o3768_int *)(a4))->v))));
    if ((unsigned char)t53 != 71) {
        if ((unsigned char)t53 != 0xC9) {
            t55 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x0, a4);
            if (t55 == 0) {
                return FUN_0c085d0c(a4);
            }
            t56 = (((struct o3768_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 12)) = t56;
            FUN_0c11f9c8((*(signed char *)((a4 + 0x1))), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 12))) + 0x41C))), ((((struct o24_short *)(t56))->v)));
            FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
            return FUN_0c07e868(a4, 0xA);
        }
        t65 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x0, a4);
        if (t65 == 0) {
            return FUN_0c085d0c(a4);
        }
        FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
        *(int *)((int)stk + 8) = 0xE;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE, 0xFFFFFFFF, 0x3, 0xE);
        (((struct o15_uchar *)(a4))->v) = 0x2;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        return 0x16;
    }
    t70 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x0, a4);
    if (t70 == 0) {
        return FUN_0c085d0c(a4);
    }
    t71 = (((struct o3768_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 12)) = t71;
    FUN_0c11f9c8((*(signed char *)((a4 + 0x1))), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 12))) + 0x41C))), ((((struct o24_short *)(t71))->v)));
    FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
    *(int *)((int)stk + 8) = 0xB0;
    *(int *)((int)stk + 4) = 0x3;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xB0, 0xFFFFFFFF, 0x3, 0xB0));
}
