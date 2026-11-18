/* Straight-line functions with calls and guards (batch gen_dd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cb448(int, int);
int FUN_0c1224ec(int, int);
int FUN_0c1238f8(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c08ac24(int a4, int a5, int a6);
int FUN_0c08d872(int a4, int a5, int a6);

int FUN_0c08ac24(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t2;
    register int t10;
    register int t11;
    register int t21;
    register int t22;
    register int t32;
    register int t44;
    register int t55;
    register int t56;
    register int t65;
    register int t90;
    register int t91;
    register int t45;
    register int t46;

    t0 = *(signed char *)((a4 + 0x17));
    switch (t0) {
    case 0:
        t65 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t65 != 0) {
            *(int *)((int)stk + 8) = 0xE6;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE6, 0xFFFFFFFF, 0x3, 0xE6);
            *(unsigned short *)((a4 + 0x1C)) = 0x5A;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        }
        if (18.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
        } else {
            if ((*(short *)((a4 + 0x1C))) == 0) {
                FUN_0c0cb448(a4, 0x6);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            }
        }
        if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
            t90 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t90 != 0) {
                t91 = FUN_0c085f66(a4);
                if (t91 == 0) {
                    FUN_0c081dfc(a4);
                } else {
                    FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                }
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
        }
        break;
    case 1:
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        t32 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t32 != 0) {
            (((struct o20_ushort *)(a4))->v) = 0x0;
        }
        if (((((struct o20_short *)(a4))->v)) == 12) {
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xB);
        }
        if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x280) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
        t44 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t44 - 1);
        if (((int)(short)(t44 - 1) > 0) && ((t45 = (((struct o20_short *)(a4))->v), t45 != 12) || (t46 = *(short *)((a4 + 0x1E)), t46 == 0))) {
        } else {
            *(int *)((int)stk + 8) = 0xE7;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE7, 0xFFFFFFFF, 0x3, 0xE7);
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        }
        if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
            t55 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t55 != 0) {
                t56 = FUN_0c085f66(a4);
                if (t56 == 0) {
                    FUN_0c081dfc(a4);
                } else {
                    FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                }
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
        }
        break;
    case 2:
        t1 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t1 != 0) {
            t2 = FUN_0c085f66(a4);
            if (t2 == 0) {
                FUN_0c081dfc(a4);
            } else {
                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            }
            return FUN_0c085d0c(a4);
        }
        if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
            t10 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t10 != 0) {
                t11 = FUN_0c085f66(a4);
                if (t11 == 0) {
                    FUN_0c081dfc(a4);
                } else {
                    FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                }
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
        }
        break;
    default:
        if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
            t21 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t21 != 0) {
                t22 = FUN_0c085f66(a4);
                if (t22 == 0) {
                    FUN_0c081dfc(a4);
                } else {
                    FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                }
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
        }
        break;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c08d872(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t7;
    register int t8;
    register int t10;
    register int t22;
    register int t32;
    register int t59;
    register int t76;
    register int t77;
    register int t82;
    register int t104;
    register int t105;
    register int t106;
    register int t107;
    register int t152;
    register int t96;
    register int t97;
    register int t98;
    register int t101;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    if (((((struct o20_short *)(a4))->v)) != 0) {
        t7 = *(int *)((a4 + 0x38));
        t8 = (((struct o3850_short *)(a4))->v);
        t10 = (unsigned short)(t8 - t7);
        if ((0x8000 & (unsigned short)(t8 - t7)) != 0) {
            t10 = ((unsigned short)(t8 - t7) | 0xFFFF0000);
        }
        if ((int)((((struct o20_short *)(a4))->v)) > 0) {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)t10 / (int)((((struct o20_short *)(a4))->v)))));
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    } else {
        t22 = FUN_0c07ebd0(a4);
        if (t22 != 0) {
            (((struct o3850_uint *)(a4))->v) = (unsigned short)(((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4))) - (*(int *)((a4 + 0x38))));
            if ((((((struct o3850_int *)(a4))->v)) & 0x8000) != 0) {
                (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) | 0xFFFF0000);
            }
            t32 = (((struct o3850_int *)(a4))->v);
            if (((int)t32 > (int)0x16C) || ((int)t32 < (int)0xFFFFFE94)) {
                if ((int)((((struct o3850_int *)(a4))->v)) > 0) {
                    (((struct o3850_uint *)(a4))->v) = 0x16C;
                } else {
                    (((struct o3850_uint *)(a4))->v) = 0xFFFFFE94;
                }
                *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((((struct o3850_short *)(a4))->v)));
            }
        }
    }
    t59 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t59 - 1);
    if ((short)(t59 - 1) == 0) {
        FUN_0c1238f8(a4, 0x3);
        if ((*(short *)((a4 + 0x1E))) == 0) {
            FUN_0c059e60(a4, 0x9);
        }
        FUN_0c1224ec(a4, ((((*(signed char *)((a4 + 0x375A))) == 3)) ? 1 : 0));
        if ((*(short *)((a4 + 0x1E))) != 0) {
            FUN_0c07d030(a4, 0x0);
        }
        t76 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t76 + 0x1);
        t152 = (t76 + 0x1);
    } else {
        t77 = *(short *)((a4 + 0x1C));
        t152 = t77;
        if ((int)t77 < 0) {
            t82 = *(short *)((a4 + 0x1E));
            t152 = t82;
            if ((int)t82 < (int)0x3) {
                t152 = 0x37B8;
                if (((((struct o37B8_float *)(a4))->v)) > 0.0f) {
                    t152 = 0x430;
                    if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
                        if ((*(signed char *)((a4 + 0x375A))) != 3) {
                            *(int *)((int)stk + 8) = 0xE;
                            *(int *)((int)stk + 4) = 0x1;
                            t98 = *(signed char *)((a4 + 0x1));
                            *(unsigned int *)(((int)stk + 12)) = t98;
                            t97 = t98;
                            *(int *)((int)stk + 0) = t97;
                            t96 = 0xE;
                            t101 = 0xE;
                        } else {
                            *(int *)((int)stk + 8) = 0xF;
                            *(int *)((int)stk + 4) = 0x1;
                            t98 = *(signed char *)((a4 + 0x1));
                            *(unsigned int *)(((int)stk + 12)) = t98;
                            t97 = t98;
                            *(int *)((int)stk + 0) = t97;
                            t96 = 0xF;
                            t101 = 0xF;
                        }
                        FUN_0c07e79c(a4, t98, 0x1, t101, t97, 0x1, t96);
                        t104 = *(int *)(((0x118 + a4) + 0x4));
                        t105 = (((struct o118_int *)(a4))->v);
                        (((struct oA0_float *)(t104))->v) = 1.0f;
                        (((struct o9C_float *)(t104))->v) = 1.0f;
                        (((struct oA0_float *)(t105))->v) = 1.0f;
                        (((struct o9C_float *)(t105))->v) = 1.0f;
                        t106 = *(int *)(((0x118 + a4) + 0x4));
                        t107 = (((struct o118_int *)(a4))->v);
                        (((struct o98_float *)(t106))->v) = 1.0f;
                        (((struct o98_float *)(t107))->v) = 1.0f;
                        (((struct o94_float *)(t106))->v) = 1.0f;
                        (((struct o94_float *)(t107))->v) = 1.0f;
                        *(unsigned short *)((a4 + 0x1C)) = 0x12;
                        t152 = 0x12;
                    }
                }
            }
        }
    }
    return t152;
}
