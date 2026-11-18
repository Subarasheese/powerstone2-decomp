/* Straight-line functions with calls and guards (batch gen_hi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int, Stk3);
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0c2d56(int, int, int, int, float);
int FUN_0c0ced88(int, int, int, int);
int FUN_0c0d2124(void);
int FUN_0c0d21ac(int, int, int);
int FUN_0c0d2480(int, int);
int FUN_0c0d24d0(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int FUN_0c0d263c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c13954c(int a4, int a5, int a6, int a7);

int FUN_0c0d263c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];

    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    *(unsigned int *)(((int)stk + 4)) = (0x41C + v0_3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC1C7E14); }
    v0_3 = (v0_3);
    if (((*(signed char *)0xC54223C) == 0)) goto L_C0D267C;
    if (((*(int *)((v0_3 + 0x10))) == 0)) goto L_C0D2672;
    FUN_0c0c2d56((*(int *)((v0_3 + 0x10))), 0xB, 0x0, v0_2, f4);
    L_C0D2672:;
    v0_5 = ((FUN_0c03f346(v0_3, v0_0, v0_1, v0_2)));
    L_C0D27AE:;
    return v0_5;
    L_C0D267C:;
    v0_7 = *(signed char *)((v0_3 + 0x14));
    v0_5 = (v0_7);
    v0_6 = (0x1);
    v0_4 = (0x0);
    if ((v0_7 == 0)) goto L_C0D2690;
    if ((v0_5 == 1)) goto L_C0D26D2;
    goto L_C0D27AE;
    L_C0D26D2:;
    v0_7 = *(signed char *)((v0_3 + 0x15));
    v0_5 = (v0_7);
    if ((v0_7 == 0)) goto L_C0D26E6;
    if ((v0_5 == 1)) goto L_C0D26FA;
    if (!((v0_5 == 2))) goto L_C0D27AA;
    FUN_0c0d21ac(v0_3, v0_0, v0_1);
    goto L_C0D27AA;
    L_C0D27AA:;
    v0_5 = ((FUN_0c0d24d0(v0_3, v0_0, v0_1)));
    goto L_C0D27AE;
    L_C0D26FA:;
    v0_5 = *(short *)((v0_3 + 0x1C));
    *(unsigned short *)((v0_3 + 0x1C)) = (v0_5 - 1);
    if (((int)(short)(v0_5 - 1) > 0)) goto L_C0D27AA;
    FUN_0c0d2480(v0_3, 0x1);
    (((struct oA8_uchar *)(v0_3))->v) = v0_6;
    (((struct o15_uchar *)(v0_3))->v) = 0x2;
    v0_6 = nlRand();
    v0_5 = (v0_6);
    v0_7 = (0x19);
    if (((int)v0_6 < 0)) goto L_C0D274C;
    v0_5 = ((v0_5 & 0x3));
    L_C0D2756:;
    *(unsigned char *)(((v0_7 + v0_3) + 0x0)) = v0_5;
    (((struct o1A_uchar *)(v0_3))->v) = v0_4;
    (((struct o22_ushort *)(v0_3))->v) = v0_4;
    *(unsigned int *)((v0_3 + 0x10)) = v0_4;
    v0_5 = FUN_0c0d2124();
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    v0_5 = FUN_0c0c2944(v0_5, 0x0, 0x3, (((int)stk + 0) + 0x8), 0xFFFFFFFF);
    *(unsigned int *)((v0_3 + 0x10)) = v0_5;
    if ((v0_5 == 0)) goto L_C0D2798;
    (((struct oA4_uint *)((*(int *)((v0_3 + 0x10)))))->v) = (((((struct oC4_int *)(v0_3))->v)) + 0x28);
    *(unsigned short *)(((*(int *)(((int)stk + 4))) + 0xC)) = ((((struct o24_short *)((*(int *)((v0_3 + 0x10)))))->v));
    L_C0D2798:;
    FUN_0c0ced88(v0_3, 0x0, v0_1, v0_2);
    (((struct o1B_uchar *)(v0_3))->v) = v0_4;
    goto L_C0D27AA;
    L_C0D274C:;
    v0_5 = (((~(((~v0_5) + 0x1) & 0x3)) + 0x1));
    goto L_C0D2756;
    L_C0D26E6:;
    (((struct oA8_uchar *)(v0_3))->v) = v0_4;
    v0_7 = FUN_0c042fe0();
    v0_5 = (v0_7);
    if ((v0_7 == 0)) goto L_C0D27AE;
    (((struct o15_uchar *)(v0_3))->v) = v0_6;
    *(unsigned short *)((v0_3 + 0x1C)) = 0x78;
    goto L_C0D26FA;
    L_C0D2690:;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_3))->v) = v0_4;
    (((struct o16_uchar *)(v0_3))->v) = v0_4;
    (((struct oA8_uchar *)(v0_3))->v) = v0_6;
    *(unsigned short *)((v0_3 + 0x1C)) = 0x78;
    *(unsigned short *)((v0_3 + 0x1E)) = v0_4;
    (((struct oAA_uchar *)(v0_3))->v) = v0_6;
    (((struct oAB_uchar *)(v0_3))->v) = 0x2;
    (((struct o1A_uchar *)(v0_3))->v) = v0_4;
    (((struct o22_ushort *)(v0_3))->v) = v0_4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x28)) = *(struct mv3 *)(0xC1C7B74); }
    (((struct o1B_uchar *)(v0_3))->v) = v0_4;
    goto L_C0D26D2;
}

int FUN_0c13954c(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t14;
    register int t25;
    register int t26;
    register int t28;
    register int t29;
    register float u34;
    register float u35;
    register float u36;
    register float u40;
    register float u41;
    register float u42;
    register int t44;
    register int t45;
    register int t59;
    register int t64;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t64 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)); }
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x17, (*(int *)0xC4B40CC), *(Stk3 *)(((int)stk + 4)));
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x2F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((int)stk + 4)); }
            t14 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t14 + 0x1);
            t64 = (short)(t14 + 0x1);
            if ((int)(short)(t14 + 0x1) >= (int)0x8) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t64 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t25 = nlRand();
        t26 = ((~(((~t25) + 0x1) & 0x3)) + 0x1);
        if ((int)t25 >= 0) {
            t26 = (t25 & 0x3);
        }
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t26;
        t28 = nlRand();
        t29 = ((~(((~t28) + 0x1) & 0xF)) + 0x1);
        if ((int)t28 >= 0) {
            t29 = (t28 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = t29;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        u34 = (((struct o28_float *)(a4))->v);
        u35 = ((float)(*(int *)(((((int)stk + 4) + 0xC) + 0x0))) * (math_cos_angle16(((((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) << 8) << 2) << 2))));
        u36 = u34;
        u36 = u36 + 30.0f * u35;
        (((struct o28_float *)(a4))->v) = u36;
        *(int *)((int)stk + 0) = (a4 + 0x2C);
        u40 = (((struct o2C_float *)(a4))->v);
        u41 = ((float)(*(int *)(((((int)stk + 4) + 0xC) + 0x0))) * (math_sin_angle16(((((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) << 8) << 2) << 2))));
        u42 = u40;
        u42 = u42 + 30.0f * u41;
        (((struct o2C_float *)(a4))->v) = u42;
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 80.0f);
        t44 = nlRand();
        t45 = ((~(((~t44) + 0x1) & 0x3)) + 0x1);
        if ((int)t44 >= 0) {
            t45 = (t44 & 0x3);
        }
        *(unsigned short *)((a4 + 0x1E)) = t45;
        if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)); }
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x17, (*(int *)0xC4B40CC), *(Stk3 *)(((int)stk + 4)));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x2F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((int)stk + 4)); }
        t59 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t59 + 0x1);
        t64 = (short)(t59 + 0x1);
        if ((int)(short)(t59 + 0x1) >= (int)0x8) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t64 = 0x14;
        }
    }
    return t64;
}
