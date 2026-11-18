/* Straight-line functions with calls and guards (batch gen_gr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1B4_int { char p[0x1B4]; int v; };
struct o1B8_int { char p[0x1B8]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o38AE_short { char p[0x38AE]; short v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o41C_short { char p[0x41C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
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
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c039846(int, float);
int FUN_0c0398f0(int, int, int);
int FUN_0c03999c(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c052c4a(int, int, int, int, int);
int FUN_0c052c86(int, int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c05f22c(int);
int FUN_0c060074(int, int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c118810(int, int);
int FUN_0c11a4c0(int, int);
int FUN_0c17b1a0(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
float nlScalor(int);
int nlStoreMatrix(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int nlVoidUnitVector(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c052cf8(int a4, int a5, int a6);
int FUN_0c0fb9aa(int a4);
int FUN_0c16906c(int a4, int a5, int a6, int a7);
int FUN_0c130e70(int a4, int a5, int a6);
float FUN_0c039a12(int a4);
int FUN_0c161da4(int a4, int a5, int a6, int a7);
int FUN_0c061c54(int a4, int a5, int a6, int a7);
int FUN_0c061686(int a4, int a5, int a6, int a7);
void FUN_0c11ab30(int a4, int a5, int a6, int a7);

int FUN_0c052cf8(int a4, int a5, int a6)
{
    int stk[395];
    register int t18;
    register int t13;
    register int t14;
    register int t25;
    register int t28;
    register int t32;
    register int t33;
    register float u48;
    register int t63;
    register int t49;
    register int t50;
    register float u51;
    register int t72;
    register int t73;
    register int t74;
    register int t75;
    register int t82;
    register int t83;
    register float u99;
    register int t116;
    register int t101;
    register int t102;
    register int t103;
    register float u104;
    register int t132;
    register int t133;
    register int t134;
    register float u136;
    register float u145;
    register int t154;
    register int t146;
    register int t147;
    register float u148;
    register int t158;
    register int t159;
    register int t172;
    register int t22;
    register int t23;
    register int t24;
    register int t26;
    register int t27;
    register int t40;
    register int t43;
    register int t69;
    register int t70;
    register int t71;
    register int t90;
    register int t93;
    register int t168;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY(((((struct o1B8_int *)((*(int *)(((int)stk + 24)))))->v)));
    nlRotateAX(((-((((struct o1B4_int *)((*(int *)(((int)stk + 24)))))->v))) + 0x10000));
    nlStoreMatrix((0x84 + ((int)stk + 4)));
    nlStoreMatrix((((int)stk + 4) + 0x44));
    nlInvertMatrix((((int)stk + 4) + 0x44));
    nlUnitMatrix();
    FUN_0c17b1a0((((int)stk + 4) + 0x44));
    t18 = 0x0;
    if ((int)a5 > 0) {
        t13 = 0x0;
        t14 = 0x0;
        for (;;) {
            nlCalcPoint(((*(int *)(((int)stk + 4))) + t14), (t14 + (0xE8 + ((int)stk + 4))));
            t13 = (t13 + 0x1);
            t14 = (t14 + 0xC);
            if ((int)t13 >= (int)a5) {
                break;
            }
        }
        t18 = t13;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x61C + ((int)stk + 4))) = *(struct mv3 *)(0xC1B9020); }
    nlVoidUnitVector((0x61C + ((int)stk + 4)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x610 + ((int)stk + 4))) = *(struct mv3 *)(0xC1B902C); }
    nlVoidUnitVector((0x610 + ((int)stk + 4)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t25 = t24;
    t28 = t18;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)a5) {
            break;
        }
        t25 = (*(int *)(((int)stk + 12)));
        t28 = 0x0;
        t32 = t25;
        t25 = (t25 << 1);
        t25 = (t25 + t32);
        t33 = *(int *)(((int)stk + 4));
        t25 = (t25 << 2);
        t23 = t33;
        t25 = (t25 + (0x160 + ((int)stk + 4)));
        t27 = t25;
        t26 = t25;
        *(unsigned int *)(((int)stk + 8)) = ((((t33 << 1) + t23) << 2) + (0xE8 + ((int)stk + 4)));
        if ((int)a5 > 0) {
            for (;;) {
                if ((*(int *)(((int)stk + 4))) == t28) {
                    t22 = t26;
                    t23 = (*(int *)(((int)stk + 8)));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t22) = *(struct mv3 *)(t23); }
                    t40 = t22;
                    t43 = t25;
                } else {
                    *(int *)((int)stk + 0) = (0x610 + ((int)stk + 4));
                    t25 = t27;
                    FUN_0c052c4a(t25, (*(int *)(((int)stk + 8))), (0x620 + ((int)stk + 0)), ((((t28 << 1) + t28) << 2) + (0xE8 + ((int)stk + 4))), (0x610 + ((int)stk + 4)));
                }
                t22 = t40;
                t23 = (*(int *)(((int)stk + 12)));
                t25 = t43;
                t28 = (t28 + 0x1);
                t27 = (t27 + 0xC);
                t23 = (t23 + 0x1);
                *(unsigned int *)(((int)stk + 12)) = t23;
                t26 = (t26 + 0xC);
                if ((int)t28 >= (int)a5) {
                    break;
                }
            }
        }
        t23 = (*(int *)(((int)stk + 4)));
        t23 = (t23 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t23;
    }
    *(unsigned int *)(((int)stk + 28)) = (0x160 + ((int)stk + 4));
    u48 = (((struct o8_float *)((0x160 + ((int)stk + 4))))->v);
    *(unsigned int *)(((int)stk + 16)) = (a5 * a5);
    t63 = 0x0;
    if ((int)0x1 < (int)(a5 * a5)) {
        t49 = 0x1;
        t50 = 0x0;
        u51 = u48;
        for (;;) {
            if (((((struct o8_float *)(((((t49 << 1) + t49) << 2) + (0x160 + ((int)stk + 4)))))->v)) > u51) {
                t50 = t49;
                u51 = ((((struct o8_float *)(((((t49 << 1) + t49) << 2) + (0x160 + ((int)stk + 4)))))->v));
            }
            t49 = (t49 + 0x1);
            if ((int)t49 >= (int)(*(int *)(((int)stk + 16)))) {
                break;
            }
        }
        t63 = t50;
    }
    *(unsigned int *)(((int)stk + 12)) = (0xD0 + ((int)stk + 4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xD0 + ((int)stk + 4))) = *(struct mv3 *)(((((t63 << 1) + t63) << 2) + (0x160 + ((int)stk + 4)))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x61C + ((int)stk + 4))) = *(struct mv3 *)(0xC1B9038); }
    nlVoidUnitVector((0x61C + ((int)stk + 4)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x610 + ((int)stk + 4))) = *(struct mv3 *)(0xC1B9044); }
    nlVoidUnitVector((0x610 + ((int)stk + 4)));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t72 = t71;
    t73 = t26;
    t74 = t27;
    t75 = t28;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)a5) {
            break;
        }
        t72 = (*(int *)(((int)stk + 20)));
        t75 = 0x0;
        t82 = t72;
        t72 = (t72 << 1);
        t72 = (t72 + t82);
        t83 = *(int *)(((int)stk + 4));
        t72 = (t72 << 2);
        t70 = t83;
        t72 = (t72 + (0x160 + ((int)stk + 4)));
        t74 = t72;
        t73 = t72;
        *(unsigned int *)(((int)stk + 8)) = ((((t83 << 1) + t70) << 2) + (0xE8 + ((int)stk + 4)));
        if ((int)a5 > 0) {
            for (;;) {
                if ((*(int *)(((int)stk + 4))) == t75) {
                    t69 = t73;
                    t70 = (*(int *)(((int)stk + 8)));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t69) = *(struct mv3 *)(t70); }
                    t90 = t69;
                    t93 = t72;
                } else {
                    *(int *)((int)stk + 0) = (0x610 + ((int)stk + 4));
                    t72 = t74;
                    FUN_0c052c86(t72, (*(int *)(((int)stk + 8))), (0x620 + ((int)stk + 0)), ((((t75 << 1) + t75) << 2) + (0xE8 + ((int)stk + 4))), (0x610 + ((int)stk + 4)));
                }
                t69 = t90;
                t70 = (*(int *)(((int)stk + 20)));
                t72 = t93;
                t75 = (t75 + 0x1);
                t74 = (t74 + 0xC);
                t70 = (t70 + 0x1);
                *(unsigned int *)(((int)stk + 20)) = t70;
                t73 = (t73 + 0xC);
                if ((int)t75 >= (int)a5) {
                    break;
                }
            }
        }
        t70 = (*(int *)(((int)stk + 4)));
        t70 = (t70 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t70;
    }
    u99 = (((struct o8_float *)((*(int *)(((int)stk + 28)))))->v);
    t116 = 0x0;
    if ((int)0x1 < (int)(*(int *)(((int)stk + 16)))) {
        t101 = t70;
        t102 = 0x1;
        t103 = 0x0;
        u104 = u99;
        for (;;) {
            if (((((struct o8_float *)(((((t102 << 1) + t102) << 2) + (0x160 + ((int)stk + 4)))))->v)) > u104) {
                t101 = t102;
                t101 = (t101 << 1);
                t101 = (t101 + t102);
                t101 = (t101 << 2);
                t103 = t102;
                t101 = (t101 + (0x160 + ((int)stk + 4)));
                u104 = ((((struct o8_float *)(t101))->v));
            }
            t102 = (t102 + 0x1);
            if ((int)t102 >= (int)(*(int *)(((int)stk + 16)))) {
                break;
            }
        }
        t116 = t103;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xDC + ((int)stk + 4))) = *(struct mv3 *)(((((t116 << 1) + t116) << 2) + (0x160 + ((int)stk + 4)))); }
    nlUnitMatrix();
    FUN_0c17b1a0((0x84 + ((int)stk + 4)));
    (((struct o4_float *)((*(int *)(((int)stk + 12)))))->v) = ((((struct o4_float *)((0xDC + ((int)stk + 4))))->v));
    if (((((struct o8_float *)((0xDC + ((int)stk + 4))))->v)) > ((((struct o8_float *)((*(int *)(((int)stk + 12)))))->v))) {
        (((struct o8_float *)((*(int *)(((int)stk + 12)))))->v) = ((((struct o8_float *)((0xDC + ((int)stk + 4))))->v));
    }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x1C);
    if ((int)a5 > 0) {
        t132 = (0xE8 + ((int)stk + 4));
        t133 = (((int)stk + 4) + 0x1C);
        t134 = 0x0;
        for (;;) {
            u136 = (((struct o8_float *)(t132))->v);
            t134 = (t134 + 0x1);
            t132 = (t132 + 0xC);
            *(float *)((t133 + 0x0)) = (((((struct o8_float *)((*(int *)(((int)stk + 12)))))->v)) - u136);
            t133 = (t133 + 0x4);
            if ((int)t134 >= (int)a5) {
                break;
            }
        }
    }
    u145 = *(float *)(((*(int *)(((int)stk + 4))) + 0x0));
    t154 = 0x0;
    if ((int)a5 > 0) {
        t146 = 0x0;
        t147 = 0x0;
        u148 = u145;
        for (;;) {
            if (u148 > (*(float *)(((((int)stk + 4) + 0x1C) + (t146 << 2))))) {
                t147 = t146;
                u148 = (*(float *)(((((int)stk + 4) + 0x1C) + (t146 << 2))));
            }
            t146 = (t146 + 0x1);
            if ((int)t146 >= (int)a5) {
                break;
            }
        }
        t154 = t147;
    }
    t158 = *(signed char *)0xC542237;
    t159 = *(signed char *)0xC54223C;
    if ((*(signed char *)0xC542377) != 0) {
        t168 = (*(int *)((((((((t158 << 1) + t158) << 2) << 1) + 0xC1BF424) + ((t159 << 2) << 1)) + 0x4)));
    } else {
        t168 = (*(int *)((((((((t158 << 1) + t158) << 2) << 1) + 0xC1BF424) + ((t159 << 2) << 1)) + 0x0)));
    }
    if ((float)t168 > (*(float *)((((t154 << 2) + (((int)stk + 4) + 0x1C)) + 0x0)))) {
        t172 = *(int *)(((int)stk + 12));
        (((struct o8_float *)(t172))->v) = (((((struct o8_float *)(t172))->v)) + ((float)t168 - (*(float *)((((t154 << 2) + (((int)stk + 4) + 0x1C)) + 0x0)))));
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC4 + ((int)stk + 4))) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
    *(float *)(((int)stk + 208)) = ((*(float *)(((int)stk + 208))) - 100.0f);
    nlCalcPoint((*(int *)(((int)stk + 12))), ((*(int *)(((int)stk + 24))) + 0xBC));
    nlCalcPoint((0xC4 + ((int)stk + 4)), ((*(int *)(((int)stk + 24))) + 0xEC));
    return (nlPopMatrix(0x1));
}

int FUN_0c0fb9aa(int a4)
{
    int stk[10];

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
    register int v0_8;
    register int v0_9;
    v0_7 = a4;
    v0_8 = *(signed char *)((v0_7 + 0x14));
    v0_6 = (v0_8);
    v0_5 = (0xC541F3C);
    v0_0 = (0xC058A6E);
    v0_3 = (0xC28EAAC);
    v0_0 = (0x0);
    v0_1 = (v0_7);
    v0_2 = (0x5);
    v0_4 = (0xC28E8C0);
    if ((v0_8 == 0)) goto L_C0FB9DA;
    if ((v0_6 == 1)) goto L_C0FBA4A;
    L_C0FBD90:;
    return v0_6;
    L_C0FBA4A:;
    if (((*(signed char *)((0x14 + (*(int *)((v0_1 + 0x10)))))) != 1)) goto L_C0FBA84;
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    L_C0FBA88:;
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x0, (*(int *)((((*(short *)((v0_5 + 0x14))) << 2) + 0xC28EADC))), (*(int *)0xC4B4118));
    FUN_0c03744a(((((struct oC8_int *)(v0_1))->v)), 0x0, ((*(int *)((((*(short *)((v0_5 + 0x14))) << 2) + 0xC28EADC))) + 0x3), (*(int *)0xC4B4118));
    v0_6 = *(short *)((v0_5 + 0x14));
    nlAddVector3op((((((struct oC4_int *)(v0_1))->v)) + 0x6C), 0xC28E898, (0xC28E8D0 + (((v0_6 << 1) + v0_6) << 2)));
    v0_6 = *(short *)((v0_5 + 0x14));
    nlAddVector3op((((((struct oC8_int *)(v0_1))->v)) + 0x6C), 0xC28E898, (0xC28E8D0 + (((v0_6 << 1) + v0_6) << 2)));
    v0_6 = *(int *)((0xC28E9B4 + ((*(short *)((v0_5 + 0x14))) << 2)));
    v0_7 = (((struct oC4_int *)(v0_1))->v);
    *(unsigned char *)(((*(int *)(((0xC4 + v0_1) + 0x4))) + 0x0)) = v0_6;
    *(unsigned char *)((v0_7 + 0x0)) = v0_6;
    v0_6 = (int)(*(short *)((v0_5 + 0x14))) < (int)0x7;
    v0_5 = (0x19);
    if (v0_6) goto L_C0FBB18;
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = v0_0;
    *(unsigned char *)((((((struct oC8_int *)(v0_1))->v)) + 0x0)) = v0_0;
    L_C0FBB18:;
    if (((int)(*(short *)((v0_1 + 0x1C))) <= (int)v0_5)) goto L_C0FBB6C;
    v0_6 = v0_5;
    *(int *)((int)stk + 12) = v0_6;
    *(int *)((int)stk + 8) = 0x32;
    v0_7 = *(short *)((v0_1 + 0x1C));
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    *(unsigned int *)(((int)stk + 20)) = (v0_3 + 0x10);
    FUN_0c058a6e((((((struct oC4_int *)(v0_1))->v)) + 0x14), (v0_3 + 0x10), v0_3, v0_7, 0x32, v0_6);
    v0_5 = v0_5;
    *(int *)((int)stk + 4) = v0_5;
    *(int *)((int)stk + 0) = 0x32;
    v0_6 = *(short *)((v0_1 + 0x1C));
    v0_7 = *(int *)(((int)stk + 16));
    v0_8 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = 0x32;
    v0_5 = (v0_8);
    v0_7 = (v0_7);
    v0_6 = (v0_6);
    L_C0FBB92:;
    FUN_0c058a6e((((((struct oC8_int *)(v0_1))->v)) + 0x14), v0_5, v0_7, v0_6, *(int *)((int)stk + 0), *(int *)((int)stk + 4));
    v0_5 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) <= (int)0x32)) goto L_C0FBBB0;
    *(unsigned short *)((v0_1 + 0x1C)) = v0_0;
    L_C0FBBB0:;
    v0_5 = (FUN_0c05f22c(0x400)) == 0;
    if (v0_5) goto L_C0FBBE0;
    v0_6 = (0x16);
    if (((*(signed char *)((v0_1 + 0x16))) != 0)) goto L_C0FBBE0;
    *(unsigned char *)((v0_1 + v0_6)) = ((*(signed char *)((v0_1 + v0_6))) + 0x1);
    { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)(((0xC4 + v0_1) + 0x8))) + 0x14)) = *(struct mv4 *)((((((struct oC4_int *)(v0_1))->v)) + 0x14)); }
    (((struct o20_ushort *)(v0_1))->v) = v0_0;
    L_C0FBBE0:;
    v0_5 = *(signed char *)((v0_1 + 0x16));
    v0_6 = (v0_5);
    if ((v0_5 == 0)) goto L_C0FBCA0;
    if ((v0_6 == 1)) goto L_C0FBBF8;
    if ((v0_6 == 2)) goto L_C0FBC1C;
    if (!((v0_6 == 3))) goto L_C0FBCA0;
    *(int *)((int)stk + 12) = 0x0;
    *(int *)((int)stk + 8) = 0x19;
    FUN_0c058a6e((((int)stk + 8) + 0x10), v0_3, (v0_3 + 0x10), (*(short *)((v0_1 + 0x1C))), 0x19, 0x0);
    *(int *)((int)stk + 4) = 0x0;
    v0_5 = v0_2;
    *(int *)((int)stk + 0) = v0_5;
    FUN_0c058a6e((((((struct oC4_int *)(v0_1))->v)) + 0x14), (((int)stk + 0) + 0x18), 0xC28E8C0, ((((struct o20_short *)(v0_1))->v)), v0_5, 0x0);
    v0_5 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) <= (int)v0_2)) goto L_C0FBCA0;
    (((struct o16_uchar *)(v0_1))->v) = v0_0;
    goto L_C0FBC9C;
    L_C0FBCA0:;
    v0_5 = (FUN_0c05f22c(0x800)) == 0;
    if (v0_5) goto L_C0FBCD0;
    v0_6 = (0x17);
    if (((*(signed char *)((v0_1 + 0x17))) != 0)) goto L_C0FBCD0;
    *(unsigned char *)((v0_1 + v0_6)) = ((*(signed char *)((v0_1 + v0_6))) + 0x1);
    { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)(((0xC4 + v0_1) + 0xC))) + 0x14)) = *(struct mv4 *)(((*(int *)(((0xC4 + v0_1) + 0x4))) + 0x14)); }
    (((struct o22_ushort *)(v0_1))->v) = v0_0;
    L_C0FBCD0:;
    v0_5 = *(signed char *)((v0_1 + 0x17));
    v0_6 = (v0_5);
    if ((v0_5 == 0)) goto L_C0FBD90;
    if ((v0_6 == 1)) goto L_C0FBCE8;
    if ((v0_6 == 2)) goto L_C0FBD0C;
    if ((v0_6 == 3)) goto L_C0FBD48;
    goto L_C0FBD90;
    L_C0FBD48:;
    *(int *)((int)stk + 12) = 0x0;
    *(int *)((int)stk + 8) = 0x19;
    FUN_0c058a6e((((int)stk + 8) + 0x10), v0_3, (v0_3 + 0x10), (*(short *)((v0_1 + 0x1C))), 0x19, 0x0);
    *(int *)((int)stk + 4) = 0x0;
    v0_3 = v0_2;
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c058a6e((((((struct oC8_int *)(v0_1))->v)) + 0x14), (((int)stk + 0) + 0x18), 0xC28E8C0, ((((struct o20_short *)(v0_1))->v)), v0_3, 0x0);
    v0_3 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_3 + 0x1);
    v0_6 = (0x22);
    if (((int)(short)(v0_3 + 0x1) <= (int)v0_2)) goto L_C0FBD90;
    (((struct o17_uchar *)(v0_1))->v) = v0_0;
    L_C0FBD8C:;
    (((struct o22_ushort *)(v0_1))->v) = v0_0;
    v0_6 = (0x22);
    goto L_C0FBD90;
    L_C0FBD0C:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(v0_1))->v)) + 0x14)) = *(struct mv4 *)(v0_4); }
    v0_2 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_2 + 0x1);
    v0_6 = (0x22);
    if (((int)(short)(v0_2 + 0x1) <= (int)0x4)) goto L_C0FBD90;
    (((struct o17_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x17))) + 0x1);
    goto L_C0FBD8C;
    L_C0FBCE8:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(v0_1))->v)) + 0x14)) = *(struct mv4 *)(v0_4); }
    v0_2 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_2 + 0x1);
    v0_6 = (0x22);
    if (((int)(short)(v0_2 + 0x1) <= (int)0x8)) goto L_C0FBD90;
    (((struct o17_uchar *)(v0_1))->v) = v0_0;
    v0_6 = (0x17);
    goto L_C0FBD90;
    L_C0FBC9C:;
    (((struct o20_ushort *)(v0_1))->v) = v0_0;
    goto L_C0FBCA0;
    L_C0FBC1C:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(v0_1))->v)) + 0x14)) = *(struct mv4 *)(v0_4); }
    v0_5 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) <= (int)0x4)) goto L_C0FBCA0;
    (((struct o16_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x16))) + 0x1);
    goto L_C0FBC9C;
    L_C0FBBF8:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(v0_1))->v)) + 0x14)) = *(struct mv4 *)(v0_4); }
    v0_5 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) <= (int)0x8)) goto L_C0FBCA0;
    (((struct o16_uchar *)(v0_1))->v) = v0_0;
    goto L_C0FBCA0;
    L_C0FBB6C:;
    v0_6 = v0_0;
    *(int *)((int)stk + 12) = v0_6;
    v0_7 = v0_5;
    *(int *)((int)stk + 8) = v0_7;
    v0_8 = *(short *)((v0_1 + 0x1C));
    *(unsigned int *)(((int)stk + 20)) = (v0_3 + 0x10);
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    FUN_0c058a6e((((((struct oC4_int *)(v0_1))->v)) + 0x14), v0_3, (v0_3 + 0x10), v0_8, v0_7, v0_6);
    v0_7 = v0_0;
    *(int *)((int)stk + 4) = v0_7;
    v0_5 = v0_5;
    *(int *)((int)stk + 0) = v0_5;
    v0_6 = *(short *)((v0_1 + 0x1C));
    v0_8 = *(int *)(((int)stk + 20));
    v0_9 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 4)) = v0_7;
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    v0_5 = (v0_9);
    v0_7 = (v0_8);
    v0_6 = (v0_6);
    goto L_C0FBB92;
    L_C0FBA84:;
    (((struct oA8_uchar *)(v0_1))->v) = v0_0;
    goto L_C0FBA88;
    L_C0FB9DA:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    (((struct oAC_ushort *)(v0_1))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    (((struct o30_float *)(v0_1))->v) = (1.0f + 1.0f);
    FUN_0c1171f0(v0_1);
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x0, (*(int *)((((*(short *)((v0_5 + 0x14))) << 2) + 0xC28EADC))), (*(int *)0xC4B4118));
    FUN_0c03744a(((((struct oC8_int *)(v0_1))->v)), 0x0, ((*(int *)((((*(short *)((v0_5 + 0x14))) << 2) + 0xC28EADC))) + 0x3), (*(int *)0xC4B4118));
    v0_6 = (((struct oC4_int *)(v0_1))->v);
    *(unsigned short *)((v0_6 + 0x6)) = ((*(short *)((v0_6 + 0x6))) | 0x600);
    v0_6 = (((struct oC8_int *)(v0_1))->v);
    *(unsigned short *)((v0_6 + 0x6)) = ((*(short *)((v0_6 + 0x6))) | 0x600);
    v0_7 = (0x600);
    goto L_C0FBA4A;
}

int FUN_0c16906c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            t2 = *(signed char *)((a4 + 0x2));
            t3 = (t2 << 2);
            if ((int)(short)(t1 + 0x1) <= (int)(*(int *)((0xC2A3830 + (t2 << 2))))) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                t3 = 0xA8;
            }
            return t3;
        }
        if (t0 == 2) {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A38F8)->v))) {
                t0 = *(signed char *)((a4 + 0x2));
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), ((0xC2A3840 + (((t0 << 1) + t0) << 2)) + 0xC), 0xC2A3840, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A38F8)->v))), 0x0);
                t0 = *(signed char *)((a4 + 0x2));
                FUN_0c0588bc((a4 + 0x40), ((0xC2A387C + (((t0 << 1) + t0) << 2)) + 0xC), 0xC2A387C, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A38F8)->v))), 0x0);
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * ((((struct o0_float *)0xC2A38B8)->v)));
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * ((((struct o4_float *)0xC2A38B8)->v)));
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * ((((struct o8_float *)0xC2A38B8)->v)));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) * ((((struct o0_float *)0xC2A38B8)->v)));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) * ((((struct o4_float *)0xC2A38B8)->v)));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) * ((((struct o8_float *)0xC2A38B8)->v)));
            }
            if ((int)(*(short *)((a4 + 0x1C))) >= (int)((((struct o0_int *)0xC2A38F8)->v))) {
                t0 = (((struct oC4_int *)(a4))->v);
                t1 = *(signed char *)((a4 + 0x2));
                u0 = ((((struct oC_float *)(((((t1 << 1) + t1) << 2) + 0xC2A3840)))->v));
                u0 = u0 + (math_sin_angle16((unsigned short)((((*(short *)((a4 + 0x1C))) << 8) << 2) << 2))) * ((((struct o8_float *)0xC2A38F8)->v));
                (((struct o84_float *)(t0))->v) = u0;
                t0 = (((struct oC4_int *)(a4))->v);
                t1 = *(signed char *)((a4 + 0x2));
                u0 = ((((struct o10_float *)(((((t1 << 1) + t1) << 2) + 0xC2A3840)))->v));
                u0 = u0 + (math_sin_angle16((unsigned short)((((*(short *)((a4 + 0x1C))) << 8) << 2) << 2))) * ((((struct o8_float *)0xC2A38F8)->v));
                (((struct o88_float *)(t0))->v) = u0;
                t0 = (((struct oC4_int *)(a4))->v);
                t1 = *(signed char *)((a4 + 0x2));
                u0 = ((((struct o14_float *)((0xC2A3840 + (((t1 << 1) + t1) << 2))))->v));
                u0 = u0 + (math_sin_angle16((unsigned short)((((*(short *)((a4 + 0x1C))) << 8) << 2) << 2))) * ((((struct o8_float *)0xC2A38F8)->v));
                (((struct o8C_float *)(t0))->v) = u0;
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) * ((((struct o0_float *)0xC2A38B8)->v)));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) * ((((struct o4_float *)0xC2A38B8)->v)));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) * ((((struct o8_float *)0xC2A38B8)->v)));
            }
            t0 = (a4 + 0x28);
            t1 = (a4 + 0x4C);
            if ((int)(*(short *)((a4 + 0x1C))) < (int)((((struct o4_int *)0xC2A38F8)->v))) {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                t0 = (a4 + 0x4C);
                t1 = (a4 + 0x58);
            }
            math_vec3_accumulate(t0, t1);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o3C_int *)0xC2A38B8)->v))) {
                (((struct o14_uchar *)(a4))->v) = 0x3;
                t1 = 0x14;
            }
            return t1;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A387C); }
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * ((((struct o0_float *)0xC2A38B8)->v)));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * ((((struct o4_float *)0xC2A38B8)->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * ((((struct o8_float *)0xC2A38B8)->v)));
    (((struct o4C_float *)(a4))->v) = (((((struct oC_float *)0xC2A38F8)->v)) * (math_sin_angle16((*(int *)((a4 + 0x38))))));
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = (((((struct oC_float *)0xC2A38F8)->v)) * (math_cos_angle16((*(int *)((a4 + 0x38))))));
    (((struct o58_float *)(a4))->v) = (((((((struct o10_float *)0xC2A38F8)->v)) - ((((struct oC_float *)0xC2A38F8)->v))) / (float)((((struct o4_int *)0xC2A38F8)->v))) * (math_sin_angle16((*(int *)((a4 + 0x38))))));
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = (((((((struct o10_float *)0xC2A38F8)->v)) - ((((struct oC_float *)0xC2A38F8)->v))) / (float)((((struct o4_int *)0xC2A38F8)->v))) * (math_cos_angle16((*(int *)((a4 + 0x38))))));
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(int *)((((*(signed char *)((a4 + 0x2))) << 2) + 0xC2A3820))), 0x42, (*(int *)0xC4B40D8));
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x3F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A3840); }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) * ((((struct o0_float *)0xC2A38B8)->v)));
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) * ((((struct o4_float *)0xC2A38B8)->v)));
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) * ((((struct o8_float *)0xC2A38B8)->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = *(signed char *)((a4 + 0x2));
    t2 = (t1 << 2);
    if ((int)(short)(t0 + 0x1) <= (int)(*(int *)((0xC2A3830 + (t1 << 2))))) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t2 = 0xA8;
    }
    return t2;
}

int FUN_0c130e70(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    if (a6 != 0) {
        if (a6 != 1) {
            if (a6 == 2) {
                t0 = FUN_0c037320(0x7, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                t1 = FUN_0c03f444(0x5, 0x0, t0);
                t2 = t1;
                if (t1 != 0) {
                    FUN_0c03733c(t1, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                    if ((int)t0 > 0) {
                        t3 = 0x0;
                        t4 = 0x0;
                        for (;;) {
                            t5 = *(int *)((((0xC4 + t1) + t3) + 0x0));
                            *(unsigned char *)((t5 + 0x0)) = 0x1;
                            *(unsigned short *)((t5 + 0x6)) = 0xF;
                            t4 = (t4 + 0x1);
                            (((struct o8C_float *)(t5))->v) = 1.0f;
                            (((struct o88_float *)(t5))->v) = 1.0f;
                            (((struct o84_float *)(t5))->v) = 1.0f;
                            t3 = (t3 + 0x4);
                            if ((int)t4 >= (int)t0) {
                                break;
                            }
                        }
                    }
                    *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned char *)((t1 + 0x2)) = a6;
                    *(unsigned int *)((t1 + 0x4)) = 0xC130C02;
                    (((struct oA8_uchar *)(t1))->v) = 0x1;
                    (((struct oAC_ushort *)(t1))->v) = 0xF;
                    (((struct oA9_uchar *)(t1))->v) = 0x21;
                    (((struct o48_float *)(t1))->v) = 0.0f;
                    (((struct o44_float *)(t1))->v) = 0.0f;
                    (((struct o40_float *)(t1))->v) = 0.0f;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a5); }
                    (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 100.0f);
                    *(unsigned int *)((t1 + 0x10)) = a4;
                    *(unsigned short *)((t1 + 0x1C)) = 0x12C;
                    t2 = 0x12C;
                }
                t0 = t2;
            } else {
                if (a6 == 3) {
                    t1 = FUN_0c037320(0x9, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                    t2 = FUN_0c03f444(0x5, 0x0, t1);
                    t3 = t2;
                    if (t2 != 0) {
                        FUN_0c03733c(t2, 0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                        if ((int)t1 > 0) {
                            t4 = 0x0;
                            t5 = 0x0;
                            for (;;) {
                                t6 = *(int *)((((0xC4 + t2) + t4) + 0x0));
                                *(unsigned char *)((t6 + 0x0)) = 0x1;
                                *(unsigned short *)((t6 + 0x6)) = 0xF;
                                t5 = (t5 + 0x1);
                                (((struct o8C_float *)(t6))->v) = 1.0f;
                                (((struct o88_float *)(t6))->v) = 1.0f;
                                (((struct o84_float *)(t6))->v) = 1.0f;
                                t4 = (t4 + 0x4);
                                if ((int)t5 >= (int)t1) {
                                    break;
                                }
                            }
                        }
                        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t2 + 0x2)) = a6;
                        *(unsigned int *)((t2 + 0x4)) = 0xC130CF6;
                        (((struct oA8_uchar *)(t2))->v) = 0x1;
                        (((struct oAC_ushort *)(t2))->v) = 0x1F;
                        (((struct oA9_uchar *)(t2))->v) = 0x21;
                        (((struct o48_float *)(t2))->v) = 0.0f;
                        (((struct o44_float *)(t2))->v) = 0.0f;
                        (((struct o40_float *)(t2))->v) = 0.0f;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(a5); }
                        *(unsigned int *)((t2 + 0x10)) = a4;
                        *(unsigned short *)((t2 + 0x1C)) = 0xA;
                        t3 = 0xA;
                    }
                    t1 = t3;
                } else {
                    t2 = a6;
                    if (a6 == 4) {
                        t3 = FUN_0c037320(0x1, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                        t4 = FUN_0c03f444(0x5, 0x0, t3);
                        t3 = t4;
                        if (t4 != 0) {
                            FUN_0c03733c(t4, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                            t5 = (((struct oC4_int *)(t4))->v);
                            *(unsigned char *)((t5 + 0x0)) = 0x1;
                            *(unsigned short *)((t5 + 0x6)) = 0xF;
                            (((struct o8C_float *)(t5))->v) = 3.0f;
                            (((struct o88_float *)(t5))->v) = 3.0f;
                            (((struct o84_float *)(t5))->v) = 3.0f;
                            t5 = (((struct oC8_int *)(t4))->v);
                            *(unsigned char *)((t5 + 0x0)) = 0x1;
                            *(unsigned short *)((t5 + 0x6)) = 0x1F;
                            (((struct o8C_float *)(t5))->v) = 0.100000001f;
                            (((struct o84_float *)(t5))->v) = 0.100000001f;
                            (((struct o88_float *)(t5))->v) = 1.0f;
                            *(unsigned char *)((t4 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                            *(unsigned char *)((t4 + 0x2)) = a6;
                            *(unsigned int *)((t4 + 0x4)) = 0xC130D50;
                            (((struct oA8_uchar *)(t4))->v) = 0x1;
                            (((struct oAC_ushort *)(t4))->v) = 0xF;
                            (((struct oA9_uchar *)(t4))->v) = 0x21;
                            (((struct o48_float *)(t4))->v) = 0.0f;
                            (((struct o44_float *)(t4))->v) = 0.0f;
                            (((struct o40_float *)(t4))->v) = 0.0f;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x28)) = *(struct mv3 *)(a5); }
                            (((struct o2C_float *)(t4))->v) = (((((struct o2C_float *)(t4))->v)) + 100.0f);
                            *(unsigned int *)((t4 + 0x10)) = a4;
                            *(unsigned short *)((t4 + 0x1C)) = 0x19;
                            t3 = 0x19;
                        }
                        t2 = t3;
                    }
                    t1 = t2;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            t0 = FUN_0c037320(0x6, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t2 = FUN_0c03f444(0x5, 0x0, t0);
            t3 = t2;
            if (t2 != 0) {
                FUN_0c03733c(t2, 0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                if ((int)t0 > 0) {
                    t4 = 0x0;
                    t5 = 0x0;
                    for (;;) {
                        t6 = *(int *)((((0xC4 + t2) + t4) + 0x0));
                        *(unsigned char *)((t6 + 0x0)) = 0x1;
                        *(unsigned short *)((t6 + 0x6)) = 0xF;
                        t5 = (t5 + 0x1);
                        (((struct o8C_float *)(t6))->v) = 1.0f;
                        (((struct o88_float *)(t6))->v) = 1.0f;
                        (((struct o84_float *)(t6))->v) = 1.0f;
                        t4 = (t4 + 0x4);
                        if ((int)t5 >= (int)t0) {
                            break;
                        }
                    }
                }
                *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned char *)((t2 + 0x2)) = a6;
                *(unsigned int *)((t2 + 0x4)) = 0xC130ACC;
                (((struct oA8_uchar *)(t2))->v) = 0x1;
                (((struct oAC_ushort *)(t2))->v) = 0x3F;
                (((struct oA9_uchar *)(t2))->v) = 0x21;
                (((struct o48_float *)(t2))->v) = 0.0f;
                (((struct o44_float *)(t2))->v) = 0.0f;
                (((struct o40_float *)(t2))->v) = 0.0f;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(a5); }
                (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) + 100.0f);
                *(unsigned int *)((t2 + 0x10)) = a4;
                *(unsigned short *)((t2 + 0x1C)) = 0x12C;
                t3 = 0x12C;
            }
            t1 = t3;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c037320(0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        t2 = FUN_0c03f444(0x5, 0x0, t1);
        t3 = t2;
        if (t2 != 0) {
            FUN_0c03733c(t2, 0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            if ((int)t1 > 0) {
                t4 = 0x0;
                t5 = 0x0;
                for (;;) {
                    t6 = *(int *)((((0xC4 + t2) + t4) + 0x0));
                    *(unsigned char *)((t6 + 0x0)) = 0x1;
                    *(unsigned short *)((t6 + 0x6)) = 0xF;
                    t5 = (t5 + 0x1);
                    (((struct o8C_float *)(t6))->v) = 1.0f;
                    (((struct o88_float *)(t6))->v) = 1.0f;
                    (((struct o84_float *)(t6))->v) = 1.0f;
                    t4 = (t4 + 0x4);
                    if ((int)t5 >= (int)t1) {
                        break;
                    }
                }
            }
            *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t2 + 0x2)) = a6;
            *(unsigned int *)((t2 + 0x4)) = 0xC130A4C;
            (((struct oA8_uchar *)(t2))->v) = 0x1;
            (((struct oAC_ushort *)(t2))->v) = 0x3F;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            (((struct o48_float *)(t2))->v) = 0.0f;
            (((struct o44_float *)(t2))->v) = 0.0f;
            (((struct o40_float *)(t2))->v) = 0.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(a5); }
            (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) + 150.0f);
            *(unsigned short *)((t2 + 0x1C)) = 0x1E;
            *(unsigned short *)((t2 + 0x1E)) = 0x0;
            t3 = 0x0;
        }
        t0 = t3;
    }
    return t0;
}

float FUN_0c039a12(int a4)
{
    int stk[12];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    v0_7 = a4;
    *(unsigned int *)(((int)stk + 16)) = v0_7;
    v0_0 = *(signed char *)((v0_7 + 0x2));
    v0_7 = (v0_0);
    if (((int)v0_0 < (int)(*(int *)0xC1B71E4))) goto L_C039A38;
    L_C039DBC:;
    return F0;
    L_C039A38:;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    v0_0 = (0x0);
    v0_1 = (0xC3BD890);
    v0_2 = (0xC3C4894);
    w0_0 = (-1.0f);
    L_C039DB0:;
    if (((int)(*(int *)(((int)stk + 12))) >= (int)0x2)) goto L_C039DBC;
    v0_5 = *(int *)(((int)stk + 12));
    v0_4 = *(int *)((((0xC20EFE0 + (((*(signed char *)(((*(int *)(((int)stk + 16))) + 0x2))) << 2) << 1)) + (v0_5 << 2)) + 0x0));
    v0_3 = (v0_4);
    v0_7 = ((v0_5 << 2));
    if ((v0_4 != 0)) goto L_C039A70;
    v0_3 = *(signed char *)(((*(int *)(((int)stk + 16))) + 0x1));
    *(unsigned char *)((((0xC3C7DF8 + (v0_3 << 1)) + (*(int *)(((int)stk + 12)))) + 0x0)) = v0_0;
    v0_7 = ((v0_3 << 1));
    L_C039DAA:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    goto L_C039DB0;
    L_C039A70:;
    v0_4 = *(signed char *)(((*(int *)(((int)stk + 16))) + 0x1));
    v0_5 = *(int *)0xC3C7DD4;
    *(unsigned int *)(((v0_7 + (0xC3C7DD8 + ((v0_4 << 2) << 1))) + 0x0)) = ((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294);
    *(unsigned int *)(((int)stk + 20)) = v0_0;
    v0_7 = ((v0_7 + (0xC3C7DD8 + ((v0_4 << 2) << 1))));
    L_C039D8E:;
    if (((int)(*(signed char *)((v0_3 + 0x0))) < 0)) goto L_C039D98;
    if (!(((int)(*(int *)0xC3C7DD4) < (int)0x28))) goto L_C039D98;
    v0_5 = FUN_0c03999c((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), (*(signed char *)((v0_3 + 0x0))), (*(signed char *)((v0_3 + 0x1))));
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C039AEE;
    if (((*(int *)((v0_4 + 0x8))) != 0)) goto L_C039AF2;
    goto L_C039AEE;
    L_C039D98:;
    v0_3 = *(int *)(((int)stk + 20));
    *(unsigned char *)((((0xC3C7DF8 + ((*(signed char *)(((*(int *)(((int)stk + 16))) + 0x1))) << 1)) + (*(int *)(((int)stk + 12)))) + 0x0)) = v0_3;
    v0_7 = (v0_3);
    goto L_C039DAA;
    L_C039AEE:;
    v0_3 = ((v0_3 + 0x24));
    goto L_C039D8E;
    L_C039AF2:;
    v0_6 = *(int *)0xC3C7DD4;
    v0_5 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x30)) = ((((v0_5 << 1) + v0_5) << 2) + 0xC3BD894);
    *(unsigned int *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x34)) = (((*(int *)((v0_1 + 0x0))) << 2) + 0xC3C0294);
    v0_5 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x38)) = ((((v0_5 << 1) + v0_5) << 2) + 0xC3C1094);
    *(unsigned int *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x24)) = (((*(int *)((v0_1 + 0x0))) << 1) + 0xC3C3A94);
    *(unsigned int *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x28)) = (((*(int *)((v0_1 + 0x0))) << 1) + 0xC3C4194);
    *(unsigned int *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x3C)) = (((*(int *)((v0_1 + 0x0))) << 2) + v0_2);
    (((struct o40_uint *)(((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294)))->v) = (0xC3C5694 + ((*(int *)((v0_1 + 0x0))) << 2));
    (((struct o44_uint *)(((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294)))->v) = (((*(int *)((v0_1 + 0x0))) << 2) + 0xC3C6494);
    *(unsigned char *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x0)) = (*(signed char *)((v0_3 + 0x0)));
    *(unsigned char *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x1)) = (*(signed char *)((v0_3 + 0x1)));
    *(unsigned char *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x2)) = (*(signed char *)((v0_3 + 0x2)));
    *(unsigned char *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x3)) = (*(signed char *)((v0_3 + 0x3)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x4)) = *(struct mv3 *)((v0_3 + 0x4)); }
    (((struct o10_float *)(((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o10_float *)(v0_3))->v));
    (((struct o18_float *)(((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o14_float *)(v0_3))->v));
    (((struct o1C_float *)(((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o18_float *)(v0_3))->v));
    (((struct o20_float *)(((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o1C_float *)(v0_3))->v));
    (((struct o14_float *)(((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o20_float *)(v0_3))->v));
    *(unsigned int *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x2C)) = (FUN_0c0398f0((*(int *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x30))), (*(int *)((((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294) + 0x34))), (*(int *)((v0_4 + 0x8)))));
    v0_5 = (v0_0);
    v0_6 = (((((((v0_6 << 2) << 1) + v0_6) << 2) << 1) + 0xC3C7294));
    L_C039CD6:;
    if (((int)v0_5 >= (int)(*(int *)((v0_6 + 0x2C))))) goto L_C039CE0;
    v0_8 = *(int *)((v0_1 + 0x0));
    v0_7 = (v0_8);
    if (((int)v0_8 < (int)0x380)) goto L_C039BC0;
    *(unsigned int *)((v0_6 + 0x2C)) = v0_5;
    L_C039CE0:;
    FUN_0c039846(v0_6, F4);
    v0_7 = (v0_0);
    L_C039D32:;
    if (((int)v0_7 < (int)((*(int *)((v0_6 + 0x2C))) - 1))) goto L_C039CE8;
    v0_5 = (v0_0);
    L_C039D78:;
    if (((int)v0_5 < (int)(*(int *)((v0_6 + 0x2C))))) goto L_C039D3E;
    *(unsigned int *)0xC3C7DD4 = ((*(int *)0xC3C7DD4) + 0x1);
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    v0_3 = ((v0_3 + 0x24));
    goto L_C039D8E;
    L_C039D3E:;
    v0_7 = (int)(((int (*)(int, int, int, int, float, float, float))((*(int *)((0xC20F060 + ((*(signed char *)((v0_6 + 0x3))) << 2))))))(((((v0_5 << 1) + v0_5) << 2) + (*(int *)((v0_6 + 0x30)))), R5, R6, R7, (*(float *)(((v0_5 << 2) + (*(int *)((v0_6 + 0x3C)))))), ((((struct o10_float *)(v0_6))->v)), F6)) >= 0;
    v0_4 = (v0_5 << 2);
    v0_5 = ((v0_5 + 0x1));
    v0_4 = v0_4;
    if (v0_7) goto L_C039D70;
    *(unsigned int *)((v0_4 + ((((struct o44_int *)(v0_6))->v)))) = v0_0;
    goto L_C039D78;
    L_C039D70:;
    *(unsigned int *)((v0_4 + ((((struct o44_int *)(v0_6))->v)))) = 0x1;
    goto L_C039D78;
    L_C039CE8:;
    R5 = ((v0_7 + 0x1));
    v0_4 = ((v0_7 << 1));
    L_C039D2A:;
    if (((int)R5 < (int)(*(int *)((v0_6 + 0x2C))))) goto L_C039CF2;
    v0_7 = ((v0_7 + 0x1));
    goto L_C039D32;
    L_C039CF2:;
    v0_8 = *(int *)((v0_6 + 0x3C));
    v0_9 = *(int *)((v0_6 + 0x28));
    v0_10 = !((*(float *)(((((*(short *)((v0_4 + v0_9))) << 2) + v0_8) + 0x0))) > (*(float *)(((((*(short *)(((R5 << 1) + v0_9))) << 2) + v0_8) + 0x0))));
    v0_5 = ((R5 << 1));
    R5 = ((R5 + 0x1));
    R6 = (v0_9);
    R7 = (v0_8);
    if (v0_10) goto L_C039D2A;
    v0_8 = *(int *)((v0_6 + 0x28));
    *(unsigned int *)(((int)stk + 8)) = (v0_8 + v0_4);
    v0_9 = *(short *)(((v0_8 + v0_4) + 0x0));
    *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x0)) = (*(short *)(((v0_8 + v0_5) + 0x0)));
    *(unsigned short *)((v0_5 + (*(int *)((v0_6 + 0x28))))) = v0_9;
    R6 = (v0_9);
    R7 = ((v0_8 + v0_5));
    goto L_C039D2A;
    L_C039BC0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x1C)) = *(struct mv3 *)(((((v0_7 << 1) + v0_7) << 2) + 0xC3BD894)); }
    v0_8 = *(signed char *)((v0_6 + 0x2));
    v0_7 = (v0_8);
    if ((v0_8 == 0)) goto L_C039C14;
    if ((v0_7 == 1)) goto L_C039C30;
    if (!((v0_7 == 2))) goto L_C039CBC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)((v0_6 + 0x4)); }
    nlSubVector3op((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x10));
    v0_7 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (v0_7 << 2);
    *(int *)((int)stk + 4) = (0xC3C5694 + (v0_7 << 2));
    *(int *)((int)stk + 0) = ((v0_7 << 2) + v0_2);
    w0_1 = nlScalor((((int)stk + 0) + 0x24));
    *(unsigned int *)(((int)stk + 4)) = (0xC3C5694 + (v0_7 << 2));
    *(unsigned int *)(((int)stk + 0)) = ((v0_7 << 2) + v0_2);
    F0 = (w0_1);
    goto L_C039CB4;
    L_C039CBC:;
    *(unsigned short *)((((*(int *)((v0_1 + 0x0))) << 1) + 0xC3C3A94)) = 0xFFFFFFFF;
    *(unsigned short *)(((v0_5 << 1) + (*(int *)((v0_6 + 0x28))))) = v0_5;
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) + 0x1);
    v0_5 = ((v0_5 + 0x1));
    goto L_C039CD6;
    L_C039CB4:;
    *(float *)(((*(int *)((int)stk + 0)) + 0x0)) = F0;
    *(float *)(((*(int *)((int)stk + 4)) + 0x0)) = F0;
    goto L_C039CBC;
    L_C039C30:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)((v0_4 + 0x6C)); }
    math_vec3_mul_xyz((((int)stk + 8) + 0x10), w0_0, w0_0, w0_0);
    nlSubVector3op((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x10));
    v0_7 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (v0_7 << 2);
    *(int *)((int)stk + 4) = (0xC3C5694 + (v0_7 << 2));
    *(int *)((int)stk + 0) = ((v0_7 << 2) + v0_2);
    w0_1 = nlScalor((((int)stk + 0) + 0x24));
    *(float *)((((v0_7 << 2) + v0_2) + 0x0)) = w0_1;
    *(float *)(((0xC3C5694 + (v0_7 << 2)) + 0x0)) = w0_1;
    goto L_C039CBC;
    L_C039C14:;
    v0_7 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (v0_7 << 2);
    *(int *)((int)stk + 4) = (0xC3C5694 + (v0_7 << 2));
    *(int *)((int)stk + 0) = ((v0_7 << 2) + v0_2);
    w0_1 = nlScalor((((int)stk + 0) + 0x24));
    *(unsigned int *)(((int)stk + 4)) = (0xC3C5694 + (v0_7 << 2));
    *(unsigned int *)(((int)stk + 0)) = ((v0_7 << 2) + v0_2);
    F0 = (w0_1);
    goto L_C039CB4;
}

int FUN_0c161da4(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t7;
    register float u22;
    register float u23;
    register float u27;
    register float u28;
    register float u32;
    register float u33;
    register int t34;
    register int t52;
    register int t57;
    register float u64;
    register int t95;
    register int t100;
    register int t110;
    register int t115;
    register int t117;
    register float u137;
    register float u138;
    register float u142;
    register float u143;
    register float u147;
    register float u148;
    register int t188;
    register int t176;
    register float u108;
    register int t114;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = *(signed char *)((a4 + 0x14));
            if (t2 != 0) {
                t188 = t2;
                if (t2 != 1) {
                } else {
                    t188 = (FUN_0c03f346(a4, a5, a6, a7));
                }
            } else {
                t7 = *(int *)((a4 + 0x10));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(((((short)(*(signed char *)((t7 + 0x1))) * (short)0x2F8) + 0xC5410FC) + 0xC8)); }
                thunk_FUN_0c058310((((((struct oD4_int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), ((int)stk + 0));
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0))));
                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - (*(float *)(((int)stk + 4))));
                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))));
                nlVoidUnitVector((((int)stk + 0) + 0xC));
                u22 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t7))->v)));
                u23 = (*(float *)(((int)stk + 0)));
                u23 = u23 + 100.0f * u22;
                (((struct o28_float *)(a4))->v) = u23;
                u27 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t7))->v)));
                u28 = (*(float *)(((int)stk + 8)));
                u28 = u28 + 100.0f * u27;
                (((struct o30_float *)(a4))->v) = u28;
                u32 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t7))->v)));
                u33 = (*(float *)(((int)stk + 4)));
                u33 = u33 + 100.0f * u32;
                (((struct o2C_float *)(a4))->v) = u33;
                t34 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t34 - 1);
                if ((int)(short)(t34 - 1) <= 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x5;
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) ^ 0x1);
                }
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x10, (*(int *)0xC4B40CC));
                if (((*(signed char *)((t7 + 0x3714))) != 0) && (t188 = *(signed char *)((t7 + 0x3715)), t188 == 17)) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t188 = 0x14;
                }
            }
        } else {
            t188 = t0;
            if (t0 == 2) {
                t52 = *(signed char *)((a4 + 0x14));
                if (t52 != 0) {
                    t188 = t52;
                    if (t52 != 1) {
                    } else {
                        t188 = (FUN_0c03f346(a4, a5, a6, a7));
                    }
                } else {
                    t57 = *(int *)((a4 + 0x10));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(((((short)(*(signed char *)((t57 + 0x1))) * (short)0x2F8) + 0xC5410FC) + 0xC8)); }
                    thunk_FUN_0c058310((((((struct oD4_int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                    u64 = ((((struct o2C_float *)(a4))->v));
                    u64 = u64 + 60.0f * ((((struct o378C_float *)(t57))->v));
                    (((struct o2C_float *)(a4))->v) = u64;
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xCCC);
                    if (((*(signed char *)((t57 + 0x3714))) != 0) && (t188 = *(signed char *)((t57 + 0x3715)), t188 == 17)) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t188 = 0x14;
                    }
                }
            }
        }
    } else {
        t95 = *(signed char *)((a4 + 0x14));
        if (t95 != 0) {
            t176 = t95;
            if (t95 == 1) {
                t176 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            t100 = *(int *)((a4 + 0x10));
            (((struct oA8_uchar *)(a4))->v) = (*(signed char *)((t100 + 0xA8)));
            if (((unsigned short)((((struct oAC_short *)(t100))->v)) & 0x400) != 0) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
                u108 = ((((struct oB0_float *)(t100))->v));
            } else {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
                u108 = 1.0f;
            }
            (((struct oBC_float *)(a4))->v) = u108;
            (((struct oB8_float *)(a4))->v) = u108;
            (((struct oB4_float *)(a4))->v) = u108;
            t110 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t110 - 1);
            if ((int)(short)(t110 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x4;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) ^ 0x1);
            }
            t115 = 0x0;
            for (;;) {
                t117 = *(int *)((((t115 << 2) + (0xC4 + a4)) + 0x0));
                FUN_0c03744a(t117, (*(short *)((a4 + 0x1E))), 0x45, (*(int *)0xC4B40CC));
                switch (t115) {
                case 0:
                    t114 = 0x4;
                    break;
                case 1:
                    t114 = 0x2;
                    break;
                case 2:
                    t114 = 0xD;
                    break;
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((((short)(*(signed char *)((t100 + 0x1))) * (short)0x2F8) + 0xC5411C4)); }
                thunk_FUN_0c058310(((*(int *)((((t114 << 2) + (0xC4 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498))) + 0x0))) + 0x28), ((int)stk + 0));
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0))));
                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - (*(float *)(((int)stk + 4))));
                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))));
                nlVoidUnitVector((((int)stk + 0) + 0xC));
                t115 = (t115 + 0x1);
                u137 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t100))->v)));
                u138 = (*(float *)(((int)stk + 0)));
                u138 = u138 + 100.0f * u137;
                (((struct o6C_float *)(t117))->v) = u138;
                u142 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t100))->v)));
                u143 = (*(float *)(((int)stk + 4)));
                u143 = u143 + 100.0f * u142;
                (((struct o70_float *)(t117))->v) = u143;
                u147 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t100))->v)));
                u148 = (*(float *)(((int)stk + 8)));
                u148 = u148 + 100.0f * u147;
                (((struct o74_float *)(t117))->v) = u148;
                if ((int)t115 < (int)0x3) continue;
                break;
            }
            if ((*(signed char *)((t100 + 0x3714))) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t176 = 0x14;
            } else {
                if ((unsigned char)(*(signed char *)((t100 + 0x38AC))) != 62) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t176 = 0x14;
                } else {
                    t176 = 0x24;
                    if (((((struct o38AE_short *)(t100))->v)) == ((((struct o24_short *)(a4))->v))) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t176 = 0x14;
                    }
                }
            }
        }
        t188 = t176;
    }
    return t188;
}

int FUN_0c061c54(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R1;
    register int R2;
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
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_0 = a4;
    v0_1 = a5;
    v0_9 = a6;
    v0_6 = a7;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC1C4AA0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1C4AAC); }
    w0_4 = (((struct o8_float *)(v0_9))->v);
    w0_5 = (((struct o8_float *)(v0_6))->v);
    v0_8 = (0xC);
    v0_0 = (v0_0);
    v0_1 = (v0_1);
    v0_2 = ((v0_9 + 0x8));
    v0_3 = ((v0_6 + 0x8));
    v0_7 = ((((int)stk + 0) + 0x24));
    v0_4 = (v0_6);
    v0_5 = (v0_9);
    w0_6 = (0.0f);
    w0_1 = ((((((struct oC_float *)((v0_9 + 0x8)))->v)) + ((((struct oC_float *)((v0_6 + 0x8)))->v))));
    w0_0 = ((w0_4 - w0_5));
    w0_2 = (w0_5);
    w0_3 = (w0_4);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C061CAE;
    w0_0 = (((-w0_3) + w0_2));
    L_C061CB0:;
    *(float *)((v0_7 + 0x0)) = (w0_1 - w0_0);
    w0_4 = (((struct o8_float *)(v0_2))->v);
    w0_5 = (((struct o8_float *)(v0_3))->v);
    w0_0 = (((((struct o14_float *)(v0_2))->v)) + (*(float *)((v0_3 + v0_8))));
    v0_8 = (0x8);
    w0_1 = w0_0;
    w0_0 = (w0_4);
    w0_2 = ((w0_4 - w0_5));
    w0_3 = (w0_5);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C061CD6;
    w0_6 = ((-w0_0));
    w0_0 = (((-w0_0) + w0_3));
    L_C061CD8:;
    *(float *)((v0_7 + v0_8)) = (w0_1 - w0_0);
    w0_4 = (((struct o4_float *)(v0_2))->v);
    w0_5 = (((struct o4_float *)(v0_3))->v);
    v0_8 = (0x4);
    w0_1 = ((((((struct o10_float *)(v0_2))->v)) + ((((struct oC_float *)(v0_3))->v))));
    w0_0 = (w0_4);
    w0_2 = (w0_5);
    w0_3 = ((w0_4 - w0_5));
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C061D00;
    w0_6 = ((-w0_0));
    w0_0 = (((-w0_0) + w0_2));
    L_C061D02:;
    *(float *)((v0_7 + v0_8)) = (w0_1 - w0_0);
    w0_0 = (0.0f);
    if (!(((*(float *)((v0_7 + 0x0))) > 0.0f))) goto L_C061FDE;
    if ((((((struct o8_float *)(v0_7))->v)) > w0_0)) goto L_C061D1E;
    goto L_C061FDE;
    L_C061FDE:;
    v0_8 = (0x0);
    L_C061FE0:;
    return v0_8;
    L_C061D1E:;
    if ((!(0.0f > ((((struct o4_float *)(v0_7))->v))))) goto L_C061D2C;
    goto L_C061FDE;
    L_C061D2C:;
    v0_8 = (FUN_0c061284(v0_0, v0_1)) == 0;
    if (v0_8) goto L_C061D58;
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)((v0_4 + 0x4)));
    (((struct o135_uchar *)(v0_1))->v) = (*(signed char *)((v0_5 + 0x4)));
    v0_8 = (0x2);
    goto L_C061FE0;
    L_C061D58:;
    w0_0 = (((struct o4_float *)(v0_7))->v);
    w0_1 = (w0_0);
    if ((!(w0_0 > 9.0f))) goto L_C061D7A;
    if (!((!(w0_1 > (*(float *)((v0_7 + 0x0))))))) goto L_C061E9C;
    if ((!(w0_1 > ((((struct o8_float *)(v0_7))->v))))) goto L_C061D7A;
    goto L_C061E9C;
    L_C061E9C:;
    w0_2 = *(float *)((v0_7 + 0x0));
    w0_0 = (w0_2);
    if ((w0_2 > w0_1)) goto L_C061F2C;
    if ((w0_0 > ((((struct o8_float *)(v0_7))->v)))) goto L_C061F2C;
    v0_6 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_6) goto L_C061EDA;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C061EC8;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C061ED0:;
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - (w0_0 / w0_1));
    L_C061FD0:;
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    L_C061FDA:;
    v0_8 = (0x1);
    goto L_C061FE0;
    L_C061EC8:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C061ED0;
    L_C061EDA:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C061F04;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C061EF4;
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C061EF8:;
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + w0_0);
    L_C061F8A:;
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    goto L_C061FDA;
    L_C061EF4:;
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C061EF8;
    L_C061F04:;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C061F18;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C061F20:;
    *(float *)(((int)stk + 12)) = (w0_0 / w0_1);
    *(float *)(((int)stk + 0)) = (-(w0_0 / w0_1));
    L_C061FC4:;
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    goto L_C061FD0;
    L_C061F18:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C061F20;
    L_C061F2C:;
    v0_6 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_6) goto L_C061F60;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C061F48;
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C061F4C:;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - w0_0);
    goto L_C061FD0;
    L_C061F48:;
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C061F4C;
    L_C061F60:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C061F9A;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C061F7C;
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C061F80:;
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + w0_0);
    goto L_C061F8A;
    L_C061F7C:;
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C061F80;
    L_C061F9A:;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C061FB0;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C061FB8:;
    *(float *)(((int)stk + 20)) = (w0_0 / w0_1);
    *(float *)(((int)stk + 8)) = (-(w0_0 / w0_1));
    goto L_C061FC4;
    L_C061FB0:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C061FB8;
    L_C061D7A:;
    if ((!(((((struct o4_float *)(v0_2))->v)) > ((((struct o4_float *)(v0_3))->v))))) goto L_C061E3E;
    v0_8 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_8) goto L_C061D9E;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o4_float *)(v0_7))->v)));
    goto L_C061FD0;
    L_C061D9E:;
    v0_8 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_8) goto L_C061DDE;
    FUN_0c060074(v0_3, v0_2, (((int)stk + 0) + 0x18));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 24))) * (*(float *)((v0_7 + 0x0))));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 32))) * ((((struct o8_float *)(v0_7))->v)));
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    L_C061E34:;
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)((v0_4 + 0x4)));
    goto L_C061FDA;
    L_C061DDE:;
    FUN_0c060074(v0_3, v0_2, (((int)stk + 0) + 0x18));
    *(float *)(((int)stk + 12)) = (((*(float *)(((int)stk + 24))) * (*(float *)((v0_7 + 0x0)))) / (1.0f + 1.0f));
    *(float *)(((int)stk + 20)) = (((*(float *)(((int)stk + 32))) * ((((struct o8_float *)(v0_7))->v))) / (1.0f + 1.0f));
    *(float *)(((int)stk + 0)) = (-(*(float *)(((int)stk + 12))));
    *(float *)(((int)stk + 8)) = (-(*(float *)(((int)stk + 20))));
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    goto L_C061E34;
    L_C061E3E:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C061E68;
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o4_float *)(v0_7))->v)));
    goto L_C061F8A;
    L_C061E68:;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((((struct o4_float *)(v0_7))->v)));
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    FUN_0c061222(v0_0, v0_1);
    (((struct o135_uchar *)(v0_1))->v) = (*(signed char *)((v0_5 + 0x4)));
    FUN_0c06130a(v0_1, v0_4, v0_3, v0_2);
    goto L_C061FDA;
    L_C061D00:;
    w0_0 = (w0_3);
    goto L_C061D02;
    L_C061CD6:;
    w0_0 = (w0_2);
    goto L_C061CD8;
    L_C061CAE:;
    w0_0 = (w0_0);
    goto L_C061CB0;
}

int FUN_0c061686(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R1;
    register int R2;
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
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_1 = a4;
    v0_0 = a5;
    v0_9 = a6;
    v0_6 = a7;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC1C4A70); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1C4A7C); }
    w0_4 = (((struct o8_float *)(v0_6))->v);
    w0_5 = (((struct o8_float *)(v0_9))->v);
    v0_8 = (0xC);
    v0_0 = (v0_0);
    v0_1 = (v0_1);
    v0_2 = ((v0_6 + 0x8));
    v0_3 = ((v0_9 + 0x8));
    v0_7 = ((((int)stk + 0) + 0x24));
    v0_4 = (v0_9);
    v0_5 = (v0_6);
    w0_6 = (0.0f);
    w0_1 = ((((((struct oC_float *)((v0_6 + 0x8)))->v)) + ((((struct oC_float *)((v0_9 + 0x8)))->v))));
    w0_0 = ((w0_4 - w0_5));
    w0_2 = (w0_5);
    w0_3 = (w0_4);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C0616E0;
    w0_0 = (((-w0_3) + w0_2));
    L_C0616E2:;
    *(float *)((v0_7 + 0x0)) = (w0_1 - w0_0);
    w0_4 = (((struct o8_float *)(v0_2))->v);
    w0_5 = (((struct o8_float *)(v0_3))->v);
    w0_0 = (((((struct o14_float *)(v0_2))->v)) + (*(float *)((v0_3 + v0_8))));
    v0_8 = (0x8);
    w0_1 = w0_0;
    w0_0 = (w0_4);
    w0_2 = ((w0_4 - w0_5));
    w0_3 = (w0_5);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C061708;
    w0_6 = ((-w0_0));
    w0_0 = (((-w0_0) + w0_3));
    L_C06170A:;
    *(float *)((v0_7 + v0_8)) = (w0_1 - w0_0);
    w0_4 = (((struct o4_float *)(v0_2))->v);
    w0_5 = (((struct o4_float *)(v0_3))->v);
    v0_8 = (0x4);
    w0_1 = ((((((struct o10_float *)(v0_2))->v)) + ((((struct oC_float *)(v0_3))->v))));
    w0_0 = (w0_4);
    w0_2 = (w0_5);
    w0_3 = ((w0_4 - w0_5));
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C061744;
    w0_6 = ((-w0_0));
    w0_0 = (((-w0_0) + w0_2));
    L_C061746:;
    *(float *)((v0_7 + v0_8)) = (w0_1 - w0_0);
    w0_0 = (0.0f);
    if (!(((*(float *)((v0_7 + 0x0))) > 0.0f))) goto L_C0619FA;
    if ((((((struct o8_float *)(v0_7))->v)) > w0_0)) goto L_C061762;
    goto L_C0619FA;
    L_C0619FA:;
    v0_8 = (0x0);
    L_C0619FC:;
    return v0_8;
    L_C061762:;
    if ((!(0.0f > ((((struct o4_float *)(v0_7))->v))))) goto L_C061770;
    goto L_C0619FA;
    L_C061770:;
    v0_8 = (FUN_0c061284(v0_0, v0_1)) == 0;
    if (v0_8) goto L_C06178E;
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)((v0_4 + 0x4)));
    (((struct o135_uchar *)(v0_1))->v) = (*(signed char *)((v0_5 + 0x4)));
    v0_8 = (0x2);
    goto L_C0619FC;
    L_C06178E:;
    w0_0 = (((struct o4_float *)(v0_7))->v);
    w0_1 = (w0_0);
    if ((!(w0_0 > 9.0f))) goto L_C0617B0;
    if (!((!(w0_1 > (*(float *)((v0_7 + 0x0))))))) goto L_C0618C4;
    if ((!(w0_1 > ((((struct o8_float *)(v0_7))->v))))) goto L_C0617B0;
    goto L_C0618C4;
    L_C0618C4:;
    w0_2 = *(float *)((v0_7 + 0x0));
    w0_0 = (w0_2);
    if ((w0_2 > w0_1)) goto L_C061954;
    if ((w0_0 > ((((struct o8_float *)(v0_7))->v)))) goto L_C061954;
    v0_6 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_6) goto L_C061902;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C0618F0;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C0618F8:;
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - (w0_0 / w0_1));
    L_C0619EE:;
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    L_C0619F6:;
    v0_8 = (0x1);
    goto L_C0619FC;
    L_C0618F0:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C0618F8;
    L_C061902:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C06192C;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C06191C;
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C061920:;
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + w0_0);
    L_C0619AC:;
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    goto L_C0619F6;
    L_C06191C:;
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C061920;
    L_C06192C:;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C061940;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C061948:;
    *(float *)(((int)stk + 12)) = (w0_0 / w0_1);
    *(float *)(((int)stk + 0)) = (-(w0_0 / w0_1));
    L_C0619E4:;
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    goto L_C0619EE;
    L_C061940:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C061948;
    L_C061954:;
    v0_6 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_6) goto L_C061982;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C061972;
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C061976:;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - w0_0);
    goto L_C0619EE;
    L_C061972:;
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C061976;
    L_C061982:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C0619BA;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C06199E;
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C0619A2:;
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + w0_0);
    goto L_C0619AC;
    L_C06199E:;
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C0619A2;
    L_C0619BA:;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C0619D0;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C0619D8:;
    *(float *)(((int)stk + 20)) = (w0_0 / w0_1);
    *(float *)(((int)stk + 8)) = (-(w0_0 / w0_1));
    goto L_C0619E4;
    L_C0619D0:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C0619D8;
    L_C0617B0:;
    if ((!(((((struct o4_float *)(v0_2))->v)) > ((((struct o4_float *)(v0_3))->v))))) goto L_C061878;
    v0_8 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_8) goto L_C0617D4;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o4_float *)(v0_7))->v)));
    goto L_C0619EE;
    L_C0617D4:;
    v0_8 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_8) goto L_C061812;
    FUN_0c060074(v0_3, v0_2, (((int)stk + 0) + 0x18));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 24))) * (*(float *)((v0_7 + 0x0))));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 32))) * ((((struct o8_float *)(v0_7))->v)));
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    L_C061864:;
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)((v0_4 + 0x4)));
    goto L_C0619F6;
    L_C061812:;
    FUN_0c060074(v0_3, v0_2, (((int)stk + 0) + 0x18));
    *(float *)(((int)stk + 12)) = (((*(float *)(((int)stk + 24))) * (*(float *)((v0_7 + 0x0)))) / (1.0f + 1.0f));
    *(float *)(((int)stk + 20)) = (((*(float *)(((int)stk + 32))) * ((((struct o8_float *)(v0_7))->v))) / (1.0f + 1.0f));
    *(float *)(((int)stk + 0)) = (-(*(float *)(((int)stk + 12))));
    *(float *)(((int)stk + 8)) = (-(*(float *)(((int)stk + 20))));
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    goto L_C061864;
    L_C061878:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C061892;
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o4_float *)(v0_7))->v)));
    goto L_C0619AC;
    L_C061892:;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((((struct o4_float *)(v0_7))->v)));
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    FUN_0c061222(v0_0, v0_1);
    (((struct o135_uchar *)(v0_1))->v) = (*(signed char *)((v0_5 + 0x4)));
    FUN_0c06130a(v0_1, v0_4, v0_3, v0_2);
    goto L_C0619F6;
    L_C061744:;
    w0_0 = (w0_3);
    goto L_C061746;
    L_C061708:;
    w0_0 = (w0_2);
    goto L_C06170A;
    L_C0616E0:;
    w0_0 = (w0_0);
    goto L_C0616E2;
}

void FUN_0c11ab30(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;

    t2 = *(int *)0xC473D00;
    t3 = 0x3;
    if (t2 != 0) {
        t4 = 0x9;
        if (t2 != 1) {
            if (t2 != 2) {
            } else {
                t2 = 0x0;
            }
            t4 = t2;
        }
        t3 = t4;
    }
    if (((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) == ((*(signed char *)((a4 + 0x2))) + 0x1)) && (t0 = *(signed char *)((a4 + 0x14)), (int)t0 < (int)0xA)) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x200);
                t2 = (((struct o41C_short *)(a4))->v);
                t4 = *(signed char *)((a4 + 0x2));
                u0 = ((*(float *)(((((t2 << 1) + t2) << 2) + 0xC29FA30))) + ((((struct o4_float *)((0xC291F10 + (((((((t4 << 1) + t4) + t3) + 0x1) << 1) + ((((t4 << 1) + t4) + t3) + 0x1)) << 2))))->v)));
                u0 = u0 + ((((struct o4_float *)0xC291FC4)->v)) * (math_sin_angle16((*(short *)((a4 + 0x1E)))));
                (((struct o2C_float *)(a4))->v) = u0;
                t2 = (((struct o20_short *)(a4))->v);
                t4 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
                if ((int)t2 >= 0) {
                    t4 = (t2 & 0x1);
                }
                if (t4 == 0) {
                    FUN_0c11a4c0(a4, ((((struct o22_short *)(a4))->v)));
                    (((struct o22_ushort *)(a4))->v) = ((-((((struct o22_short *)(a4))->v))) + 0x1);
                }
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                return;
            }
            if (t0 == 80) {
                t2 = *(short *)((a4 + 0x1E));
                if (((int)t2 >= 0) && ((int)t2 <= (int)0x1E)) {
                    t2 = *(signed char *)((a4 + 0x2));
                    FUN_0c0588bc((a4 + 0x28), ((((((((t2 << 1) + t2) + t3) + 0x2) << 1) + ((((t2 << 1) + t2) + t3) + 0x2)) << 2) + 0xC291F10), (a4 + 0x4C), (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
                    u0 = (((float)(*(short *)((a4 + 0x1E))) * 180.0f) / 30.0f);
                    u1 = math_sin_angle16(((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    u0 = ((((struct o2C_float *)(a4))->v));
                    u0 = u0 + u1 * ((((struct o8_float *)0xC291FC4)->v));
                    (((struct o2C_float *)(a4))->v) = u0;
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    return;
                }
                FUN_0c03f346(a4, a5, a6, a7);
    return;
            }
            if (t0 == 99) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)((a4 + 0x28)); }
                (((struct o14_uchar *)(a4))->v) = 0x50;
            }
            return;
        }
        if (((*(short *)((a4 + 0x1E))) == 20) && (t1 = *(signed char *)((a4 + 0x2)), t1 == 0)) {
            FUN_0c05a080(0x0, 0x0);
        }
        t0 = *(short *)((a4 + 0x1E));
        if (((int)t0 >= 0) && ((int)t0 <= (int)0x1E)) {
            t0 = *(signed char *)((a4 + 0x2));
            FUN_0c0588bc((a4 + 0x28), ((((((((t0 << 1) + t0) + t3) + 0x1) << 1) + ((((t0 << 1) + t0) + t3) + 0x1)) << 2) + 0xC291F10), (((((((t0 << 1) + t0) + t3) << 1) + (((t0 << 1) + t0) + t3)) << 2) + 0xC291F10), (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
            t0 = (((struct o41C_short *)(a4))->v);
            u0 = *(float *)(((0xC29FA30 + (((t0 << 1) + t0) << 2)) + 0x0));
            u1 = (((float)(*(short *)((a4 + 0x1E))) * 180.0f) / 30.0f);
            u2 = math_sin_angle16(((int)((((u1 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
            u1 = u0;
            u1 = u1 + u2 * ((((struct o0_float *)0xC291FC4)->v));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u1);
            t0 = *(short *)((a4 + 0x1E));
            if (((int)t0 >= 0) && ((int)t0 <= (int)0x1E)) {
                FUN_0c0588bc((a4 + 0x40), (a4 + 0x4C), 0xC2A0C78, (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
            }
        }
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) <= (int)0x1E) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A0C84); }
    (((struct o40_float *)(a4))->v) = 0.699999988f;
    (((struct o44_float *)(a4))->v) = 0.699999988f;
    (((struct o48_float *)(a4))->v) = 0.699999988f;
    t0 = (((struct o41C_short *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((t0 << 1) + t0) << 2) + 0xC29F12C)); }
    FUN_0c118810(a4, ((((struct o41C_short *)(a4))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)((a4 + 0x40)); }
}
