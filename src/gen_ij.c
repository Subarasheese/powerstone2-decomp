/* Straight-line functions with calls and guards (batch gen_ij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o42C_short { char p[0x42C]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c035c44(int, int);
int FUN_0c035d74(int, int, int);
int FUN_0c0360dc(int, int, int, int);
int FUN_0c0377b2(int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03859e(int);
int FUN_0c05ab12(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0e4f8c(int, int, int);
int FUN_0c14f824(int, int);
int FUN_0c15aed8(int);
int FUN_0c179ac0(void);
extern int FUN_0c187798();
int FUN_0c187a88(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0a46d4(int a4, int a5, int a6, int a7);
int FUN_0c0e5372(int a4, int a5, int a6);
int FUN_0c036168(int a4, int a5, int a6);

int FUN_0c0a46d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    float u0;
    register float u1;

    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00) != 0) {
        (((struct o3850_uint *)(a4))->v) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4, a5, a6)));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(((((struct o3850_int *)(a4))->v)))) * (*(float *)0xC25D344));
        u1 = (math_cos_angle16(((((struct o3850_int *)(a4))->v))));
    } else {
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (*(float *)0xC25D344));
        u1 = (math_cos_angle16((*(int *)((a4 + 0x38)))));
    }
    (((struct o54_float *)(a4))->v) = (u1 * (*(float *)0xC25D344));
    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(12.0f > u1) && !(u1 > 30.0f)) {
        t1 = *(short *)((a4 + 0x1C));
        t2 = ((~(((~t1) + 0x1) & 0x7)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x7);
        }
        if (t2 == 0) {
            FUN_0c07e2f4(a4, 0x5);
        }
    }
    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 30) {
        FUN_0c07e2f4(a4, 0x6);
    }
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        FUN_0c187798(0xC25D238);
        FUN_0c187798(t0);
        return FUN_0c085d0c(a4);
    }
    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(((((struct o0_float *)0xC0A4938)->v)) > u1) && (u0 = (((struct o4_float *)0xC0A4938)->v), !(u1 > u0))) {
        u0 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t0 = ((~(((~(int)u0) + 0x1) & 0x7)) + 0x1);
        if ((int)(int)u0 >= 0) {
            t0 = ((int)u0 & 0x7);
        }
        if (t0 == 0) {
            FUN_0c14f824((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
        }
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    return FUN_0c038362(a4);
}

int FUN_0c0e5372(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register float u8;
    register int t9;
    register int t10;
    register float u14;
    register int t15;
    register int t16;
    register float u20;
    int t30;
    register int t34;
    register int t45;
    register int t46;
    register int t54;
    register int t55;
    register int t56;
    register float u60;
    register int t61;
    register int t62;
    register float u66;
    register int t67;
    register int t68;
    register float u72;
    int t84;
    register int t91;
    register int t101;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t101 = t0;
        if (t0 != 1) {
        } else {
            if (((*(short *)((a4 + 0x1C))) & 7) == 0) {
                t2 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
                t3 = FUN_0c179ac0();
                t4 = ((~(((~t3) + 0x1) & 0x1F)) + 0x1);
                if ((int)t3 >= 0) {
                    t4 = (t3 & 0x1F);
                }
                u8 = (*(float *)(((int)stk + 0)));
                u8 = u8 + 4.0f * ((float)(t4 - 16));
                *(float *)(((int)stk + 0)) = u8;
                t9 = FUN_0c179ac0();
                t10 = ((~(((~t9) + 0x1) & 0x1F)) + 0x1);
                if ((int)t9 >= 0) {
                    t10 = (t9 & 0x1F);
                }
                u14 = (*(float *)(((int)stk + 8)));
                u14 = u14 + 4.0f * ((float)(t10 - 16));
                *(float *)(((int)stk + 8)) = u14;
                t15 = FUN_0c179ac0();
                t16 = ((~(((~t15) + 0x1) & 0x1F)) + 0x1);
                if ((int)t15 >= 0) {
                    t16 = (t15 & 0x1F);
                }
                u20 = (*(float *)0xC0E553C);
                u20 = u20 + 1.0f * ((float)(t16 - 16));
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u20);
                FUN_0c15aed8(((int)stk + 0));
            }
            if ((*(short *)((a4 + 0x1C))) == 10) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
            t30 = *(short *)((a4 + 0x1C));
            if ((t30 != 10) && ((t30 != 20) && ((t30 != 50) && (t30 != 60)))) {
            } else {
                FUN_0c05ab12(0xD0, (a4 + 0x28));
            }
            t34 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t34 - 1);
            t101 = (short)(t34 - 1);
            if ((int)(short)(t34 - 1) <= 0) {
                FUN_0c15aed8((a4 + 0x28));
                t101 = (FUN_0c0e4f8c(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
            }
        }
    } else {
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        t45 = FUN_0c179ac0();
        t46 = ((~(((~t45) + 0x1) & 0xF)) + 0x1);
        if ((int)t45 >= 0) {
            t46 = (t45 & 0xF);
        }
        *(unsigned short *)((a4 + 0x1E)) = 0x14;
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((((t46 << 8) << 2) << 2))) * 5.0f);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((((t46 << 8) << 2) << 2))) * 5.0f);
        (((struct o50_float *)(a4))->v) = (float)(*(short *)((a4 + 0x1E)));
        *(unsigned short *)((a4 + 0x1E)) = (int)((float)(*(short *)((a4 + 0x1E))) * 0.75f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        if (((*(short *)((a4 + 0x1C))) & 7) == 0) {
            t54 = ((int (*)(void))(FUN_0c187798))();
            t55 = FUN_0c179ac0();
            t56 = ((~(((~t55) + 0x1) & 0x1F)) + 0x1);
            if ((int)t55 >= 0) {
                t56 = (t55 & 0x1F);
            }
            u60 = (*(float *)(((int)stk + 0)));
            u60 = u60 + 4.0f * ((float)(t56 - 16));
            *(float *)(((int)stk + 0)) = u60;
            t61 = FUN_0c179ac0();
            t62 = ((~(((~t61) + 0x1) & 0x1F)) + 0x1);
            if ((int)t61 >= 0) {
                t62 = (t61 & 0x1F);
            }
            u66 = (*(float *)(((int)stk + 8)));
            u66 = u66 + 4.0f * ((float)(t62 - 16));
            *(float *)(((int)stk + 8)) = u66;
            t67 = FUN_0c179ac0();
            t68 = ((~(((~t67) + 0x1) & 0x1F)) + 0x1);
            if ((int)t67 >= 0) {
                t68 = (t67 & 0x1F);
            }
            u72 = (*(float *)0xC0E553C);
            u72 = u72 + 1.0f * ((float)(t68 - 16));
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u72);
            FUN_0c15aed8(((int)stk + 0));
        }
        if ((*(short *)((a4 + 0x1C))) == 10) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        t84 = *(short *)((a4 + 0x1C));
        if ((t84 != 10) && ((t84 != 20) && ((t84 != 50) && (t84 != 60)))) {
        } else {
            FUN_0c05ab12(0xD0, (a4 + 0x28));
        }
        t91 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t91 - 1);
        t101 = (short)(t91 - 1);
        if ((int)(short)(t91 - 1) <= 0) {
            FUN_0c15aed8((a4 + 0x28));
            t101 = (FUN_0c0e4f8c(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
        }
    }
    return t101;
}

int FUN_0c036168(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t11;
    register int t38;
    register int t42;
    register int t44;
    register int t53;
    register int t9;
    register int t10;
    register int t35;
    register int t36;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 16)) = (t0 << 1);
    *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 12))) << 2) << 1);
    t4 = 0x0;
    t5 = a5;
    t6 = a6;
    t7 = (((t0 << 1) << 2) + 0xC4B4124);
    t8 = 0x0;
    t11 = 0x0;
    for (;;) {
        if ((*(int *)((0xC4B4124 + (((*(int *)(((int)stk + 16))) + (*(int *)(((int)stk + 0)))) << 2)))) == 0) {
            t6 = t8;
            t6 = (t6 << 1);
            t6 = (t6 << 2);
            t6 = (t6 + a6);
            t9 = t8;
            t10 = (*(int *)((t11 + ((*(int *)(((int)stk + 8))) + 0xC4B40DC))));
            *(unsigned int *)(((int)stk + 4)) = t6;
            t5 = (*(int *)(((int)stk + 4)));
            t6 = (*(int *)((t6 + 0x4)));
            t5 = (*(int *)((t5 + 0x0)));
            t5 = (t5 + a6);
            t4 = t10;
            FUN_0c187a88(t4, t5, t6);
            t4 = t10;
            FUN_0c0377b2(t4);
            t9 = (t9 + 0x1);
            t5 = t9;
            t5 = (t5 << 1);
            t5 = (t5 << 2);
            t5 = (t5 + a6);
            *(unsigned int *)(((int)stk + 4)) = t5;
            t4 = (*(int *)(((int)stk + 4)));
            t5 = (*(int *)((t5 + 0x4)));
            t4 = (*(int *)((t4 + 0x0)));
            t4 = (t4 + a6);
            FUN_0c035c44(t4, t5);
            t5 = (*(int *)((t11 + ((*(int *)(((int)stk + 8))) + 0xC1AA618))));
            t6 = (*(int *)0xC3BD45C);
            t4 = t10;
            t4 = (FUN_0c035d74(t4, t5, t6));
            *(unsigned int *)((t7 + 0x0)) = 0x1;
        } else {
            t35 = t5;
            t36 = t6;
        }
        t38 = *(int *)(((int)stk + 0));
        t5 = t35;
        t6 = t36;
        t11 = (t11 + 0x4);
        *(unsigned int *)(((int)stk + 0)) = (t38 + 0x1);
        t7 = (t7 + 0x4);
        t8 = (t8 + 0x2);
        if ((int)(t38 + 0x1) >= (int)0x2) {
            break;
        }
    }
    t42 = *(int *)(((int)stk + 12));
    t44 = 0x40000;
    if ((unsigned int)(*(int *)((a6 + 0x24))) <= (unsigned int)0x40000) {
        t44 = (*(int *)(((a6 + 0x20) + 0x4)));
    }
    FUN_0c187a88((*(int *)((0xC4B4528 + (t42 << 2)))), ((*(int *)(((a6 + 0x20) + 0x0))) + a6), t44);
    FUN_0c03859e((*(int *)((0xC4B4528 + (t42 << 2)))));
    if ((*(int *)((((t42 << 2) + 0xC4B4124) + 0x20))) == 0) {
        t53 = *(int *)(((t42 << 2) + 0xC4B40FC));
        *(unsigned int *)(((int)stk + 0)) = (0x28 + a6);
        FUN_0c187a88(t53, ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + a6), (*(int *)(((0x28 + a6) + 0x4))));
        FUN_0c0377b2(t53);
        *(unsigned int *)(((int)stk + 0)) = (0x30 + a6);
        FUN_0c035c44(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + a6), (*(int *)(((0x30 + a6) + 0x4))));
        FUN_0c035d74(t53, (*(int *)(((t42 << 2) + 0xC1AA638))), (*(int *)0xC3BD45C));
        *(unsigned int *)(((0xC4B4124 + (t42 << 2)) + 0x20)) = 0x1;
    }
    return FUN_0c0360dc((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 20))), a6, 0x7);
}
