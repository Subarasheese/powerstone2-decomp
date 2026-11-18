/* Straight-line functions with calls and guards (batch gen_en): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c132d28(int);
int FUN_0c15a5aa(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int memset(int, int, int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
void FUN_0c131954(int a4, int a5, int a6, int a7);
int FUN_0c110b88(int a4);
int FUN_0c15f6ec(int a4, int a5, int a6, int a7);
int FUN_0c132d70(int a4, int a5, int a6, int a7, float f4);
int FUN_0c15a8bc(int a4, int a5, int a6, int a7);
int FUN_0c153710(int a4, int a5, int a6, int a7);

void FUN_0c131954(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u9;
    register float u11;
    register float t13;
    register float u14;
    register int t16;
    register float u18;
    register float u19;
    register int t20;
    register float t23;
    register float u24;
    register int t26;
    register float u28;
    register float u29;
    register int t30;
    register float t33;
    register float u34;
    register int t37;
    register int t42;
    register float t45;
    register int t47;
    register int t56;
    register int t57;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 5.0f);
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 5.69620275f);
                (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.493670881f);
                t5 = 0xC;
                t6 = 0x4;
                for (;;) {
                    t7 = *(int *)((((0xC4 + a4) + t6) + 0x0));
                    *(int *)((int)stk + 0) = (0x78 + t7);
                    *(unsigned int *)(((int)stk + 4)) = (0xC2A156C + t5);
                    t8 = *(short *)((a4 + 0x1C));
                    u9 = *(float *)(((0xC2A15B4 + t5) + 0x0));
                    u11 = *(float *)(((0xC2A156C + t5) + 0x0));
                    t13 = math_sin_angle16(((int)(((((float)(((t8 << 1) + t8) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    u14 = ((u11 - u9) * t13);
                    (((struct o78_uint *)(t7))->v) = ((int)((((u14 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t16 = *(int *)((((0xC4 + a4) + t6) + 0x0));
                    *(int *)((int)stk + 0) = (0x7C + t16);
                    u18 = (((struct o4_float *)((0xC2A15B4 + t5)))->v);
                    u19 = (((struct o4_float *)((*(int *)(((int)stk + 4)))))->v);
                    t20 = *(short *)((a4 + 0x1C));
                    t23 = math_sin_angle16(((int)(((((float)(((t20 << 1) + t20) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    u24 = ((u19 - u18) * t23);
                    (((struct o7C_uint *)(t16))->v) = ((int)((((u24 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t26 = *(int *)((((0xC4 + a4) + t6) + 0x0));
                    *(int *)((int)stk + 0) = (0x80 + t26);
                    u28 = (((struct o8_float *)((0xC2A15B4 + t5)))->v);
                    u29 = (((struct o8_float *)((*(int *)(((int)stk + 4)))))->v);
                    t30 = *(short *)((a4 + 0x1C));
                    t33 = math_sin_angle16(((int)(((((float)(((t30 << 1) + t30) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    t6 = (t6 + 0x4);
                    u34 = ((u29 - u28) * t33);
                    (((struct o80_uint *)(t26))->v) = ((int)((((u34 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t5 = (t5 + 0xC);
                    if ((unsigned int)t6 >= (unsigned int)0x18) {
                        break;
                    }
                }
                t37 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t37 + 0x1);
                if ((int)(short)(t37 + 0x1) >= (int)0x78) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                return;
            }
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
        t42 = *(short *)((a4 + 0x1C));
        t45 = math_sin_angle16(((int)(((((float)((int)((int)(((t42 << 2) + t42) << 2) % (int)0x168)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        (((struct o78_uint *)(t0))->v) = ((int)((((_builtin_fabsf(t45) * 3932160.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t47 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t47 + 0x1);
        if ((int)(short)(t47 + 0x1) < (int)0x29) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o78_uint *)(t0))->v) = 0x0;
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o6C_float *)(t0))->v) = -35.0f;
    (((struct o70_float *)(t0))->v) = 10.0f;
    (((struct o74_float *)(t0))->v) = 57.0f;
    (((struct o7C_uint *)(t0))->v) = 0x31C7;
    t56 = 0x4;
    t57 = 0xC;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + a4) + t56) + 0x0))) + 0x6C)) = *(struct mv3 *)((t57 + 0xC2A14DC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + a4) + t56) + 0x0))) + 0x78)) = *(struct mv3 *)((t57 + 0xC2A1524)); }
        t56 = (t56 + 0x4);
        t57 = (t57 + 0xC);
        if ((unsigned int)t56 >= (unsigned int)0x18) {
            break;
        }
    }
}

int FUN_0c110b88(int a4)
{
    int stk[4];
    register int t1;
    register int t7;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t18;
    register int t38;
    register int t39;
    register int t41;
    register int t42;
    register int t43;
    register int t20;
    register int t24;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t52;
    register int t73;
    register int t74;
    register int t78;
    register int t56;
    register int t59;
    register float u82;
    register int t83;
    register int t84;
    register int t85;
    register int t92;
    register int t117;
    register int t118;
    register int t148;
    register int t149;
    register int t6;
    register float u86;
    register float u87;

    t12 = *(int *)0xC4739A4;
    t1 = *(int *)((t12 + 0x38));
    t7 = t1;
    if (((int)t1 >= 0) && (t6 = *(signed char *)((a4 + 0x14)), t6 != 0)) {
        t7 = *(int *)((a4 + 0x10));
        t12 = *(signed char *)((t7 + 0x14));
        (((struct o14_uchar *)(a4))->v) = t12;
    }
    t9 = *(signed char *)((a4 + 0x14));
    if (t9 != 0) {
        if (t9 == 1) {
            return t9;
        }
        if (t9 == 2) {
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            *(unsigned int *)(((int)stk + 12)) = 0xC29107C;
            t10 = t6;
            t11 = t7;
            t13 = a4;
            t14 = 0xC29107C;
            t15 = 0x0;
            for (;;) {
                t18 = *(int *)((t15 + (((*(int *)(((*(int *)0xC4739A4) + 0x34))) * 0x2C) + 0xC2911EC)));
                t38 = t18;
                t39 = t10;
                t41 = t12;
                t42 = t13;
                t43 = t14;
                if (t18 == 1) {
                    t20 = *(int *)(((*(int *)0xC4739A4) + 0x30));
                    t12 = (*(int *)((t15 + ((t20 * 0x2C) + 0xC2911EC))));
                    t38 = ((t20 * 0x2C) + 0xC2911EC);
                    if (t12 == 0) {
                        *(int *)((int)stk + 4) = 0x0;
                        t12 = (*(int *)0xC4739A4);
                        t13 = 0xC4;
                        t11 = (*(int *)((t12 + 0x3C)));
                        t13 = (t13 + a4);
                        t14 = 0xC29106C;
                        t24 = t11;
                        *(int *)((int)stk + 0) = t24;
                        t12 = (*(int *)(((int)stk + 8)));
                        t13 = (t13 + t12);
                        t12 = 0xC058A6E;
                        t13 = (*(int *)((t13 + 0x0)));
                        t13 = (t13 + 0x14);
                        t38 = (FUN_0c058a6e(t13, t14, (*(int *)(((int)stk + 12))), (*(int *)(((*(int *)0xC4739A4) + 0x38))), t24, 0x0));
                    } else {
                        t39 = t10;
                        t41 = t12;
                        t42 = t13;
                        t43 = t14;
                    }
                }
                t10 = t39;
                t11 = (*(int *)(((int)stk + 8)));
                t12 = t41;
                t13 = t42;
                t14 = t43;
                t15 = (t15 + 0x4);
                t11 = (t11 + 0x4);
                *(unsigned int *)(((int)stk + 8)) = t11;
                if ((unsigned int)t15 >= (unsigned int)0x28) {
                    break;
                }
            }
            return t38;
        }
        if (t9 == 3) {
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            *(unsigned int *)(((int)stk + 12)) = 0xC29107C;
            t47 = t6;
            t48 = t7;
            t49 = 0xC29107C;
            t50 = 0x0;
            for (;;) {
                t52 = *(int *)(((*(int *)0xC4739A4) + 0x34));
                t73 = ((t52 * 0x2C) + 0xC2911EC);
                t74 = t47;
                t78 = t49;
                if ((*(int *)((t50 + ((t52 * 0x2C) + 0xC2911EC)))) == 0) {
                    t56 = *(int *)((t50 + (((*(int *)(((*(int *)0xC4739A4) + 0x30))) * 0x2C) + 0xC2911EC)));
                    t73 = t56;
                    if (t56 == 1) {
                        *(int *)((int)stk + 4) = 0x0;
                        t48 = (*(int *)0xC4739A4);
                        t49 = 0xC29106C;
                        t59 = (*(int *)((t48 + 0x3C)));
                        *(int *)((int)stk + 0) = t59;
                        t73 = (FUN_0c058a6e(((*(int *)((((0xC4 + a4) + (*(int *)(((int)stk + 8)))) + 0x0))) + 0x14), t49, (*(int *)(((int)stk + 12))), (*(int *)(((*(int *)0xC4739A4) + 0x38))), t59, 0x0));
                    } else {
                        t74 = t47;
                        t78 = t49;
                    }
                }
                t47 = t74;
                t48 = (*(int *)(((int)stk + 8)));
                t49 = t78;
                t50 = (t50 + 0x4);
                t48 = (t48 + 0x4);
                *(unsigned int *)(((int)stk + 8)) = t48;
                if ((unsigned int)t50 >= (unsigned int)0x28) {
                    break;
                }
            }
            return t73;
        }
        if (t9 == 4) {
            u82 = *(float *)0xC110EE4;
            t83 = t6;
            t84 = 0x0;
            t85 = 0x0;
            for (;;) {
                if (((((struct o14_float *)((*(int *)((((0xC4 + a4) + t84) + 0x0)))))->v)) > u82) {
                    u87 = ((((struct o0_float *)0xC29106C)->v));
                    t92 = *(int *)((((0xC4 + a4) + t85) + 0x0));
                    u87 = (u87 - ((((struct o10_float *)0xC29106C)->v)));
                    u86 = ((((struct o14_float *)(t92))->v));
                    t83 = (*(int *)(((*(int *)0xC4739A4) + 0x3C)));
                    u87 = (u87 / (float)t83);
                    u86 = (u86 - u87);
                    (((struct o14_float *)(t92))->v) = u86;
                }
                t84 = (t84 + 0x4);
                t85 = (t85 + 0x4);
                if ((unsigned int)t84 >= (unsigned int)0x28) {
                    break;
                }
            }
            if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                return FUN_0c03f346(a4, 0xC29106C, t85, 0xC29106C);
            }
            return 0x14;
        }
        return t9;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0x4, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x2, 0x4, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x3, 0x4, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x4, 0x4, (*(int *)0xC4B410C));
    t117 = *(signed char *)((a4 + 0x2));
    t118 = *(int *)0xC4B410C;
    if (t117 != 0) {
        if (t117 != 1) {
            
        } else {
            FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x5, 0x4, t118);
            FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x6, 0x4, (*(int *)0xC4B410C));
        }
    } else {
        FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x5, 0x4, t118);
        FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x6, 0x4, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x7, 0x4, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0x8, 0x4, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0x9, 0x4, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oE8_int *)(a4))->v)), 0xA, 0x4, (*(int *)0xC4B410C));
    }
    t148 = 0x0;
    for (;;) {
        t149 = *(int *)((((0xC4 + a4) + t148) + 0x0));
        *(unsigned short *)((t149 + 0x6)) = ((*(short *)((t149 + 0x6))) | 0x600);
        { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)((((0xC4 + a4) + t148) + 0x0))) + 0x14)) = *(struct mv4 *)(0xC29107C); }
        t148 = (t148 + 0x4);
        if ((unsigned int)t148 >= (unsigned int)0x28) {
            break;
        }
    }
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    return 0x14;
}

int FUN_0c15f6ec(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 == 1) {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A2C10)->v))) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2C44, 0xC2A2C38, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A2C10)->v))), 0x0);
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A2C5C, 0xC2A2C50, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A2C10)->v))), 0x0);
            }
            t2 = *(short *)((a4 + 0x1C));
            if (((int)t2 >= (int)((((struct o4_int *)0xC2A2C10)->v))) && (t0 = (((struct o0_int *)0xC2A2C10)->v), (int)t2 <= (int)t0)) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A2C28, 0xC2A2C18, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A2C10)->v))), (((((struct o4_int *)0xC2A2C10)->v))));
                FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A2C28, 0xC2A2C18, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A2C10)->v))), (((((struct o4_int *)0xC2A2C10)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t2 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A2C10)->v))) {
                (((struct o14_uchar *)(a4))->v) = 0x3;
                t2 = 0x14;
            }
            return t2;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x2));
    t2 = *(int *)0xC4B40CC;
    switch (t0) {
    case 0:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x50, t2);
        break;
    case 1:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0x50, t2);
        break;
    case 2:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x50, t2);
        break;
    case 3:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x3, 0x50, t2);
        break;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
    t0 = (((struct oC4_int *)(a4))->v);
    t2 = nlRand();
    t3 = ((~(((~t2) + 0x1) & 0x7)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x7);
    }
    u0 = (((float)t3 * 10.0f) / 8.0f);
    (((struct o78_uint *)(t0))->v) = ((int)(((((u0 + -5.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct oC4_int *)(a4))->v);
    t2 = nlRand();
    t3 = ((~(((~t2) + 0x1) & 0x7)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x7);
    }
    u0 = (((float)t3 * 10.0f) / 8.0f);
    (((struct o7C_uint *)(t0))->v) = (((int)(((((u0 + -5.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) + 0x8000);
    t0 = (((struct oC4_int *)(a4))->v);
    t2 = nlRand();
    t3 = ((~(((~t2) + 0x1) & 0x7)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x7);
    }
    u0 = (((float)t3 * 180.0f) / 8.0f);
    (((struct o80_uint *)(t0))->v) = ((int)(((((u0 + -90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A2C18); }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A2C10)->v))) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2C44, 0xC2A2C38, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A2C10)->v))), 0x0);
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A2C5C, 0xC2A2C50, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A2C10)->v))), 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o4_int *)0xC2A2C10)->v))) && (t1 = (((struct o0_int *)0xC2A2C10)->v), (int)t0 <= (int)t1)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A2C28, 0xC2A2C18, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A2C10)->v))), (((((struct o4_int *)0xC2A2C10)->v))));
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A2C28, 0xC2A2C18, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A2C10)->v))), (((((struct o4_int *)0xC2A2C10)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A2C10)->v))) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c132d70(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t0 = *(signed char *)((a4 + 0x15));
        switch (t0) {
        case 0:
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.100000001f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.100000001f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.100000001f);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.00999999978f);
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.00999999978f);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
            if (((((struct o40_float *)(a4))->v)) > 1.0f) {
                (((struct o40_float *)(a4))->v) = 1.0f;
            }
            if (((((struct o44_float *)(a4))->v)) > 1.0f) {
                (((struct o44_float *)(a4))->v) = 1.0f;
            }
            if (((((struct o48_float *)(a4))->v)) > 1.0f) {
                (((struct o48_float *)(a4))->v) = 1.0f;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x1E) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
            }
            break;
        case 1:
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.100000001f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.100000001f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.100000001f);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.00999999978f);
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.00999999978f);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
            if (((((struct o40_float *)(a4))->v)) > 1.0f) {
                (((struct o40_float *)(a4))->v) = 1.0f;
            }
            if (((((struct o44_float *)(a4))->v)) > 1.0f) {
                (((struct o44_float *)(a4))->v) = 1.0f;
            }
            if (((((struct o48_float *)(a4))->v)) > 1.0f) {
                (((struct o48_float *)(a4))->v) = 1.0f;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x1E) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
            }
            break;
        case 2:
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.100000001f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.100000001f);
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0xA) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
            }
            break;
        }
        if (((((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v)) > 1.0f) {
            (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        }
        if (((((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v)) > 1.0f) {
            (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        }
        if (((((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v)) > 1.0f) {
            (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        }
        if (0.0f > ((((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
            (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        }
        if (0.0f > ((((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
            (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        }
        if (0.0f > ((((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
            (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        return FUN_0c132d28(a4);
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x28;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 40.0f);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 40.0f);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) / -40.0f);
        (((struct o5C_float *)(a4))->v) = 0.100000001f;
        (((struct o60_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) / -40.0f);
        (((struct o48_float *)(a4))->v) = 0.00999999978f;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o12A_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
        t1 = 0x12A;
    }
    return t1;
}

int FUN_0c15a8bc(int a4, int a5, int a6, int a7)
{
    int stk[16];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t10;
    register int t11;
    register float u13;
    register int t16;
    register int t17;
    register float u22;
    register float u23;
    register float u28;
    register float u29;
    register float t32;
    register float u39;
    register float u40;
    register float u41;
    register int t54;
    register int t71;
    register int t72;
    register int t74;
    register int t75;
    register int t77;
    register int t78;
    register float u80;
    register int t83;
    register int t84;
    register float u89;
    register float u90;
    register float u95;
    register float u96;
    register float t99;
    register float u106;
    register float u107;
    register float u108;
    register int t111;
    register int t113;
    register int t114;
    register int t116;
    register int t117;
    register int t119;
    register int t120;
    register float u122;
    register int t125;
    register int t126;
    register float u131;
    register float u132;
    register float u137;
    register float u138;
    register float t141;
    register float u148;
    register float u149;
    register float u150;
    register int t163;
    register int t168;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = (((struct o4_int *)0xC2A2ACC)->v);
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t2)) != (t2 - 1)) {
            } else {
                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x10);
                t4 = nlRand();
                t5 = ((~(((~t4) + 0x1) & 0xF)) + 0x1);
                if ((int)t4 >= 0) {
                    t5 = (t4 & 0xF);
                }
                *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (((t5 << 8) << 2) << 2);
                *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x10) + 0x4);
                t7 = nlRand();
                t8 = ((~(((~t7) + 0x1) & 0xF)) + 0x1);
                if ((int)t7 >= 0) {
                    t8 = (t7 & 0xF);
                }
                *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x4) + 0x0)) = (((t8 << 8) << 2) << 2);
                *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x10) + 0x8);
                t10 = nlRand();
                t11 = ((~(((~t10) + 0x1) & 0xF)) + 0x1);
                if ((int)t10 >= 0) {
                    t11 = (t10 & 0xF);
                }
                *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x8) + 0x0)) = (((t11 << 8) << 2) << 2);
                *(unsigned int *)(((int)stk + 12)) = 0xC2A2AF8;
                u13 = (((struct o2C_float *)0xC2A2ACC)->v);
                t16 = (int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2ACC)->v)));
                t17 = (((struct o8_int *)0xC2A2ACC)->v);
                u22 = ((u13 * (float)t16) / (float)t17);
                u23 = ((((struct o28_float *)(a4))->v));
                u23 = u23 + u22 * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                *(float *)(((int)stk + 52)) = u23;
                u28 = ((u13 * (float)t16) / (float)t17);
                u29 = ((((struct o2C_float *)(a4))->v));
                u29 = u29 + u28 * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
                *(float *)(((int)stk + 56)) = u29;
                t32 = math_sin_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
                u39 = (((struct o30_float *)(a4))->v);
                u40 = (((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) * (float)((int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2ACC)->v))))) / (float)((((struct o8_int *)0xC2A2ACC)->v)));
                u41 = u39;
                u41 = u41 + u40 * t32;
                *(float *)(((int)stk + 60)) = u41;
                *(float *)(((int)stk + 40)) = 0.0f;
                *(float *)(((int)stk + 44)) = 0.0f;
                *(float *)(((int)stk + 48)) = 0.0f;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)((((int)stk + 0) + 0x28)); }
                FUN_0c15a5aa((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x28), (((int)stk + 0) + 0x1C));
            }
            t54 = *(short *)((a4 + 0x1C));
            if (t54 == ((((struct o0_int *)0xC2A2ACC)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t168 = 0x14;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = (t54 + 0x1);
                t168 = (t54 + 0x1);
            }
        } else {
            t168 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x10);
        t71 = nlRand();
        t72 = ((~(((~t71) + 0x1) & 0xF)) + 0x1);
        if ((int)t71 >= 0) {
            t72 = (t71 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (((t72 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x10) + 0x4);
        t74 = nlRand();
        t75 = ((~(((~t74) + 0x1) & 0xF)) + 0x1);
        if ((int)t74 >= 0) {
            t75 = (t74 & 0xF);
        }
        *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x4) + 0x0)) = (((t75 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x10) + 0x8);
        t77 = nlRand();
        t78 = ((~(((~t77) + 0x1) & 0xF)) + 0x1);
        if ((int)t77 >= 0) {
            t78 = (t77 & 0xF);
        }
        *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x8) + 0x0)) = (((t78 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 8)) = 0xC2A2AF8;
        u80 = (((struct o2C_float *)0xC2A2ACC)->v);
        t83 = (int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2ACC)->v)));
        t84 = (((struct o8_int *)0xC2A2ACC)->v);
        u89 = ((u80 * (float)t83) / (float)t84);
        u90 = ((((struct o28_float *)(a4))->v));
        u90 = u90 + u89 * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))));
        *(float *)(((int)stk + 52)) = u90;
        u95 = ((u80 * (float)t83) / (float)t84);
        u96 = ((((struct o2C_float *)(a4))->v));
        u96 = u96 + u95 * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))));
        *(float *)(((int)stk + 56)) = u96;
        t99 = math_sin_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
        u106 = (((struct o30_float *)(a4))->v);
        u107 = (((*(float *)(((*(int *)(((int)stk + 8))) + 0x0))) * (float)((int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2ACC)->v))))) / (float)((((struct o8_int *)0xC2A2ACC)->v)));
        u108 = u106;
        u108 = u108 + u107 * t99;
        *(float *)(((int)stk + 60)) = u108;
        *(float *)(((int)stk + 40)) = 0.0f;
        *(float *)(((int)stk + 44)) = 0.0f;
        *(float *)(((int)stk + 48)) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)((((int)stk + 0) + 0x28)); }
        FUN_0c15a5aa((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x28), (((int)stk + 0) + 0x1C));
        t111 = (((struct o4_int *)0xC2A2ACC)->v);
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t111)) != (t111 - 1)) {
        } else {
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x10);
            t113 = nlRand();
            t114 = ((~(((~t113) + 0x1) & 0xF)) + 0x1);
            if ((int)t113 >= 0) {
                t114 = (t113 & 0xF);
            }
            *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (((t114 << 8) << 2) << 2);
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x10) + 0x4);
            t116 = nlRand();
            t117 = ((~(((~t116) + 0x1) & 0xF)) + 0x1);
            if ((int)t116 >= 0) {
                t117 = (t116 & 0xF);
            }
            *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x4) + 0x0)) = (((t117 << 8) << 2) << 2);
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x10) + 0x8);
            t119 = nlRand();
            t120 = ((~(((~t119) + 0x1) & 0xF)) + 0x1);
            if ((int)t119 >= 0) {
                t120 = (t119 & 0xF);
            }
            *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x8) + 0x0)) = (((t120 << 8) << 2) << 2);
            *(unsigned int *)(((int)stk + 12)) = 0xC2A2AF8;
            u122 = (((struct o2C_float *)0xC2A2ACC)->v);
            t125 = (int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2ACC)->v)));
            t126 = (((struct o8_int *)0xC2A2ACC)->v);
            u131 = ((u122 * (float)t125) / (float)t126);
            u132 = ((((struct o28_float *)(a4))->v));
            u132 = u132 + u131 * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))));
            *(float *)(((int)stk + 52)) = u132;
            u137 = ((u122 * (float)t125) / (float)t126);
            u138 = ((((struct o2C_float *)(a4))->v));
            u138 = u138 + u137 * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
            *(float *)(((int)stk + 56)) = u138;
            t141 = math_sin_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
            u148 = (((struct o30_float *)(a4))->v);
            u149 = (((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) * (float)((int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2ACC)->v))))) / (float)((((struct o8_int *)0xC2A2ACC)->v)));
            u150 = u148;
            u150 = u150 + u149 * t141;
            *(float *)(((int)stk + 60)) = u150;
            *(float *)(((int)stk + 40)) = 0.0f;
            *(float *)(((int)stk + 44)) = 0.0f;
            *(float *)(((int)stk + 48)) = 0.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)((((int)stk + 0) + 0x28)); }
            FUN_0c15a5aa((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x28), (((int)stk + 0) + 0x1C));
        }
        t163 = *(short *)((a4 + 0x1C));
        if (t163 == ((((struct o0_int *)0xC2A2ACC)->v))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t168 = 0x14;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = (t163 + 0x1);
            t168 = (t163 + 0x1);
        }
    }
    return t168;
}

int FUN_0c153710(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            if (t2 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t2;
        }
        t2 = (((struct oC4_int *)(a4))->v);
        t3 = 0x0;
        if ((*(signed char *)((t2 + 0x0))) != 0) {
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532568))) + 0x28), (t2 + 0x6C));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x78)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x34)); }
            (((struct o78_uint *)(t2))->v) = (((((struct o78_int *)(t2))->v)) - 10922);
            (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) + 0.125f);
            (((struct o84_float *)(t2))->v) = (((((struct o84_float *)(t2))->v)) - 0.100000001f);
            (((struct o88_float *)(t2))->v) = (((((struct o88_float *)(t2))->v)) - 0.100000001f);
            t4 = *(signed char *)(((0x41C + a4) + 0x1));
            *(unsigned char *)(((0x41C + a4) + 0x1)) = (t4 - 1);
            if ((signed char)(t4 - 1) == 0) {
                *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x4;
                (((struct o41C_uchar *)(a4))->v) = ((*(signed char *)(((0x41C + a4) + 0x0))) ^ 0x1);
                FUN_0c037498(t2, (*(signed char *)(((0x41C + a4) + 0x0))), 0x15, (*(int *)0xC4B40CC));
            }
            u0 = (((struct o84_float *)(t2))->v);
            if (!(u0 > 0.0f)) {
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                *(unsigned char *)(((0x41C + a4) + 0x5)) = 0x1;
            }
            t3 = 0x1;
            u1 = u0;
            u0 = 0.0f;
        }
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
        u2 = u1;
        u3 = u0;
        if (((short)(t2 - 1) == 0) && (t0 = *(short *)((a4 + 0x1E)), t0 != 0)) {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            t0 = *(int *)(((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) + (0xC4 + a4)) + 0x4));
            if ((*(signed char *)((t0 + 0x0))) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x4;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                FUN_0c037498(t0, ((*(signed char *)(((0x41C + a4) + 0x2))) << 1), 0x14, (*(int *)0xC4B40CC));
                (((struct o8C_float *)(t0))->v) = 0.125f;
                (((struct o88_float *)(t0))->v) = 0.125f;
                (((struct o84_float *)(t0))->v) = 0.125f;
                (((struct o20_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = 1.0f;
                (((struct o18_float *)(t0))->v) = 1.0f;
                thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (t0 + 0x6C));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x78)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x34)); }
                (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 10922);
                *(unsigned char *)(((0x41C + a4) + 0x2)) = ((int)((int)((*(signed char *)(((0x41C + a4) + 0x2))) + 0x1) % (int)0x3));
            } else {
                u4 = u1;
                u1 = u0;
            }
            u2 = u4;
            u3 = u1;
        }
        t0 = 0xC153918;
        t2 = 0x4;
        t4 = t3;
        u0 = u2;
        u1 = u3;
        for (;;) {
            t3 = *(int *)((((0xC4 + a4) + t2) + 0x0));
            if ((*(signed char *)((t3 + 0x0))) != 0) {
                t0 = 0x84;
                u1 = (*(float *)((t3 + t0)));
                u1 = (u1 + 0.0500000007f);
                *(float *)((t3 + t0)) = u1;
                t0 = (t0 + 0x4);
                u0 = (*(float *)((t3 + t0)));
                u0 = (u0 + 0.0500000007f);
                *(float *)((t3 + t0)) = u0;
                t0 = (t0 + 0x4);
                u1 = (*(float *)((t3 + t0)));
                u1 = (u1 + 0.0500000007f);
                *(float *)((t3 + t0)) = u1;
                t0 = 0x18;
                u0 = (*(float *)((t3 + t0)));
                u0 = (u0 - 0.100000001f);
                *(float *)((t3 + t0)) = u0;
                t0 = 0x1C;
                u1 = (*(float *)((t3 + t0)));
                u1 = (u1 - 0.100000001f);
                *(float *)((t3 + t0)) = u1;
                t0 = 0x20;
                u0 = (*(float *)((t3 + t0)));
                u1 = 0.0f;
                u0 = (u0 - 0.100000001f);
                *(float *)((t3 + t0)) = u0;
                t0 = 0x18;
                u0 = (*(float *)((t3 + t0)));
                t4 = (t4 + 0x1);
                if (!(u0 > u1)) {
                    *(unsigned char *)((t3 + 0x0)) = 0x0;
                }
            }
            t2 = (t2 + 0x4);
            if ((unsigned int)t2 >= (unsigned int)0x10) {
                break;
            }
        }
        t2 = t0;
        if (t4 == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    memset((0x41C + a4), 0x0, 0x14);
    (((struct o41C_uchar *)(a4))->v) = 0x0;
    *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x4;
    *(unsigned short *)((a4 + 0x1C)) = 0x4;
    *(unsigned short *)((a4 + 0x1E)) = 0x3;
    t0 = (((struct oC4_int *)(a4))->v);
    t2 = 0x0;
    if ((*(signed char *)((t0 + 0x0))) != 0) {
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532568))) + 0x28), (t0 + 0x6C));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x78)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x34)); }
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 10922);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.125f);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) - 0.100000001f);
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.100000001f);
        t3 = *(signed char *)(((0x41C + a4) + 0x1));
        *(unsigned char *)(((0x41C + a4) + 0x1)) = (t3 - 1);
        if ((signed char)(t3 - 1) == 0) {
            *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x4;
            (((struct o41C_uchar *)(a4))->v) = ((*(signed char *)(((0x41C + a4) + 0x0))) ^ 0x1);
            FUN_0c037498(t0, (*(signed char *)(((0x41C + a4) + 0x0))), 0x15, (*(int *)0xC4B40CC));
        }
        u0 = (((struct o84_float *)(t0))->v);
        if (!(u0 > 0.0f)) {
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned char *)(((0x41C + a4) + 0x5)) = 0x1;
        }
        t2 = 0x1;
        u1 = u0;
        u0 = 0.0f;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    u2 = u1;
    u3 = u0;
    if (((short)(t0 - 1) == 0) && (t1 = *(short *)((a4 + 0x1E)), t1 != 0)) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        t0 = *(int *)(((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) + (0xC4 + a4)) + 0x4));
        if ((*(signed char *)((t0 + 0x0))) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x4;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            FUN_0c037498(t0, ((*(signed char *)(((0x41C + a4) + 0x2))) << 1), 0x14, (*(int *)0xC4B40CC));
            (((struct o8C_float *)(t0))->v) = 0.125f;
            (((struct o88_float *)(t0))->v) = 0.125f;
            (((struct o84_float *)(t0))->v) = 0.125f;
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (t0 + 0x6C));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x78)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x34)); }
            (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 10922);
            *(unsigned char *)(((0x41C + a4) + 0x2)) = ((int)((int)((*(signed char *)(((0x41C + a4) + 0x2))) + 0x1) % (int)0x3));
        } else {
            u4 = u1;
            u1 = u0;
        }
        u2 = u4;
        u3 = u1;
    }
    t0 = 0xC153918;
    t1 = 0x4;
    t3 = t2;
    u0 = u2;
    u1 = u3;
    for (;;) {
        t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
        if ((*(signed char *)((t2 + 0x0))) != 0) {
            t0 = 0x84;
            u1 = (*(float *)((t2 + t0)));
            u1 = (u1 + 0.0500000007f);
            *(float *)((t2 + t0)) = u1;
            t0 = (t0 + 0x4);
            u0 = (*(float *)((t2 + t0)));
            u0 = (u0 + 0.0500000007f);
            *(float *)((t2 + t0)) = u0;
            t0 = (t0 + 0x4);
            u1 = (*(float *)((t2 + t0)));
            u1 = (u1 + 0.0500000007f);
            *(float *)((t2 + t0)) = u1;
            t0 = 0x18;
            u0 = (*(float *)((t2 + t0)));
            u0 = (u0 - 0.100000001f);
            *(float *)((t2 + t0)) = u0;
            t0 = 0x1C;
            u1 = (*(float *)((t2 + t0)));
            u1 = (u1 - 0.100000001f);
            *(float *)((t2 + t0)) = u1;
            t0 = 0x20;
            u0 = (*(float *)((t2 + t0)));
            u1 = 0.0f;
            u0 = (u0 - 0.100000001f);
            *(float *)((t2 + t0)) = u0;
            t0 = 0x18;
            u0 = (*(float *)((t2 + t0)));
            t3 = (t3 + 0x1);
            if (!(u0 > u1)) {
                *(unsigned char *)((t2 + 0x0)) = 0x0;
            }
        }
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x10) {
            break;
        }
    }
    t1 = t0;
    if (t3 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
