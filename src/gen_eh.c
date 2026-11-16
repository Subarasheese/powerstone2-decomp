/* Straight-line functions with calls and guards (batch gen_eh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1B4_int { char p[0x1B4]; int v; };
struct o1B8_int { char p[0x1B8]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c012c34(int);
int FUN_0c01c62a(int);
int FUN_0c01cd2c(int);
int FUN_0c036518(int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c039846(int);
int FUN_0c0398f0(int, int, int);
int FUN_0c03999c(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0421a6(void);
int FUN_0c05261c(int);
int FUN_0c052c4a(int, int, int, int, int);
int FUN_0c052c86(int, int, int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c07d774(int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d36fc(int);
int FUN_0c0d37c2(int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
int FUN_0c133c78(int, int, int, int, int, int, int, int);
int FUN_0c134780(int, int, int);
int FUN_0c1350d4(int, int);
int FUN_0c1353a4(int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c17b1a0(int);
int FUN_0c17c4d0(int);
extern int FUN_0c187798();
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlStoreMatrix(int);
int nlUnitMatrix(void);
int res_pl_textures_release_all(void);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c052cf8(int a4, int a5, int a6);
int FUN_0c1238f8(int a4, int a5, int a6);
int FUN_0c1348c8(int a4);
void FUN_0c16fa76(int a4);
int FUN_0c130e70(int a4, int a5, int a6);
float FUN_0c039a12(int a4);
int FUN_0c0d38b4(int a4, int a5, int a6, int a7);
int FUN_0c042528(void);
int FUN_0c019c66(int a4, int a5, int a6);

int FUN_0c052cf8(int a4, int a5, int a6)
{
    int stk[395];
    register int t18;
    register int t13;
    register int t14;
    register int t20;
    register int t22;
    register int t24;
    register int t27;
    register int t30;
    register int t34;
    register int t35;
    register int t41;
    register float u49;
    register int t63;
    register int t64;
    register int t50;
    register int t51;
    register float u52;
    register int t68;
    register int t69;
    register int t71;
    register int t73;
    register int t76;
    register int t77;
    register int t78;
    register int t79;
    register int t86;
    register int t87;
    register int t93;
    register float u102;
    register int t118;
    register int t119;
    register int t104;
    register int t105;
    register int t106;
    register float u107;
    register int t123;
    register int t136;
    register int t137;
    register int t138;
    register float u140;
    register float u149;
    register int t158;
    register int t150;
    register int t151;
    register float u152;
    register int t162;
    register int t163;
    register int t176;
    register int t185;
    register int t25;
    register int t26;
    register int t28;
    register int t29;
    register int t47;
    register int t74;
    register int t75;
    register int t99;
    register int t172;

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
    t20 = ((int (*)(void))(FUN_0c187798))();
    FUN_0c17c4d0((0x61C + ((int)stk + 4)));
    t22 = ((int (*)(void))(FUN_0c187798))();
    t24 = FUN_0c17c4d0((0x610 + ((int)stk + 4)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t27 = t26;
    t30 = t18;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)a5) {
            break;
        }
        t27 = (*(int *)(((int)stk + 12)));
        t30 = 0x0;
        t34 = t27;
        t27 = (t27 << 1);
        t27 = (t27 + t34);
        t35 = *(int *)(((int)stk + 4));
        t27 = (t27 << 2);
        t25 = t35;
        t27 = (t27 + (0x160 + ((int)stk + 4)));
        t29 = t27;
        t28 = t27;
        *(unsigned int *)(((int)stk + 8)) = ((((t35 << 1) + t25) << 2) + (0xE8 + ((int)stk + 4)));
        if ((int)a5 > 0) {
            for (;;) {
                if ((*(int *)(((int)stk + 4))) == t30) {
                    t25 = (*(int *)(((int)stk + 8)));
                    t24 = 0xC;
                    t24 = (((int (*)(int))(FUN_0c187798))(t27));
                } else {
                    t24 = 0x610;
                    t24 = (t24 + ((int)stk + 4));
                    t41 = t24;
                    *(int *)((int)stk + 0) = t41;
                    t27 = t29;
                    t24 = (FUN_0c052c4a(t27, (*(int *)(((int)stk + 8))), (0x620 + ((int)stk + 0)), ((((t30 << 1) + t30) << 2) + (0xE8 + ((int)stk + 4))), t41));
                }
                t25 = (*(int *)(((int)stk + 12)));
                t30 = (t30 + 0x1);
                t29 = (t29 + 0xC);
                t25 = (t25 + 0x1);
                *(unsigned int *)(((int)stk + 12)) = t25;
                t28 = (t28 + 0xC);
                if ((int)t30 >= (int)a5) {
                    break;
                }
            }
        } else {
            t47 = t27;
        }
        t25 = (*(int *)(((int)stk + 4)));
        t27 = t47;
        t25 = (t25 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t25;
    }
    *(unsigned int *)(((int)stk + 28)) = (0x160 + ((int)stk + 4));
    u49 = (((struct o8_float *)((0x160 + ((int)stk + 4))))->v);
    *(unsigned int *)(((int)stk + 16)) = (a5 * a5);
    t63 = 0x1;
    t64 = 0x0;
    if ((int)0x1 < (int)(a5 * a5)) {
        t50 = 0x1;
        t51 = 0x0;
        u52 = u49;
        for (;;) {
            if (((((struct o8_float *)(((((t50 << 1) + t50) << 2) + (0x160 + ((int)stk + 4)))))->v)) > u52) {
                t51 = t50;
                u52 = ((((struct o8_float *)(((((t50 << 1) + t50) << 2) + (0x160 + ((int)stk + 4)))))->v));
            }
            t50 = (t50 + 0x1);
            if ((int)t50 >= (int)(*(int *)(((int)stk + 16)))) {
                break;
            }
        }
        t63 = t50;
        t64 = t51;
    }
    *(unsigned int *)(((int)stk + 12)) = (0xD0 + ((int)stk + 4));
    t68 = ((int (*)(int, int))(FUN_0c187798))(t63, t64);
    t69 = ((int (*)(void))(FUN_0c187798))();
    FUN_0c17c4d0((0x61C + ((int)stk + 4)));
    t71 = ((int (*)(void))(FUN_0c187798))();
    t73 = FUN_0c17c4d0((0x610 + ((int)stk + 4)));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t76 = t75;
    t77 = t28;
    t78 = t29;
    t79 = t30;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)a5) {
            break;
        }
        t76 = (*(int *)(((int)stk + 20)));
        t79 = 0x0;
        t86 = t76;
        t76 = (t76 << 1);
        t76 = (t76 + t86);
        t87 = *(int *)(((int)stk + 4));
        t76 = (t76 << 2);
        t74 = t87;
        t76 = (t76 + (0x160 + ((int)stk + 4)));
        t78 = t76;
        t77 = t76;
        *(unsigned int *)(((int)stk + 8)) = ((((t87 << 1) + t74) << 2) + (0xE8 + ((int)stk + 4)));
        if ((int)a5 > 0) {
            for (;;) {
                if ((*(int *)(((int)stk + 4))) == t79) {
                    t74 = (*(int *)(((int)stk + 8)));
                    t73 = 0xC;
                    t73 = (((int (*)(int))(FUN_0c187798))(t76));
                } else {
                    t73 = 0x610;
                    t73 = (t73 + ((int)stk + 4));
                    t93 = t73;
                    *(int *)((int)stk + 0) = t93;
                    t76 = t78;
                    t73 = (FUN_0c052c86(t76, (*(int *)(((int)stk + 8))), (0x620 + ((int)stk + 0)), ((((t79 << 1) + t79) << 2) + (0xE8 + ((int)stk + 4))), t93));
                }
                t74 = (*(int *)(((int)stk + 20)));
                t79 = (t79 + 0x1);
                t78 = (t78 + 0xC);
                t74 = (t74 + 0x1);
                *(unsigned int *)(((int)stk + 20)) = t74;
                t77 = (t77 + 0xC);
                if ((int)t79 >= (int)a5) {
                    break;
                }
            }
        } else {
            t99 = t76;
        }
        t74 = (*(int *)(((int)stk + 4)));
        t76 = t99;
        t74 = (t74 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t74;
    }
    u102 = (((struct o8_float *)((*(int *)(((int)stk + 28)))))->v);
    t118 = 0x1;
    t119 = 0x0;
    if ((int)0x1 < (int)(*(int *)(((int)stk + 16)))) {
        t104 = t74;
        t105 = 0x1;
        t106 = 0x0;
        u107 = u102;
        for (;;) {
            if (((((struct o8_float *)(((((t105 << 1) + t105) << 2) + (0x160 + ((int)stk + 4)))))->v)) > u107) {
                t104 = t105;
                t104 = (t104 << 1);
                t104 = (t104 + t105);
                t104 = (t104 << 2);
                t106 = t105;
                t104 = (t104 + (0x160 + ((int)stk + 4)));
                u107 = ((((struct o8_float *)(t104))->v));
            }
            t105 = (t105 + 0x1);
            if ((int)t105 >= (int)(*(int *)(((int)stk + 16)))) {
                break;
            }
        }
        t118 = t105;
        t119 = t106;
    }
    t123 = ((int (*)(int, int))(FUN_0c187798))(t118, t119);
    nlUnitMatrix();
    FUN_0c17b1a0((0x84 + ((int)stk + 4)));
    (((struct o4_float *)((*(int *)(((int)stk + 12)))))->v) = ((((struct o4_float *)((0xDC + ((int)stk + 4))))->v));
    if (((((struct o8_float *)((0xDC + ((int)stk + 4))))->v)) > ((((struct o8_float *)((*(int *)(((int)stk + 12)))))->v))) {
        (((struct o8_float *)((*(int *)(((int)stk + 12)))))->v) = ((((struct o8_float *)((0xDC + ((int)stk + 4))))->v));
    }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x1C);
    if ((int)a5 > 0) {
        t136 = (0xE8 + ((int)stk + 4));
        t137 = (((int)stk + 4) + 0x1C);
        t138 = 0x0;
        for (;;) {
            u140 = (((struct o8_float *)(t136))->v);
            t138 = (t138 + 0x1);
            t136 = (t136 + 0xC);
            *(float *)((t137 + 0x0)) = (((((struct o8_float *)((*(int *)(((int)stk + 12)))))->v)) - u140);
            t137 = (t137 + 0x4);
            if ((int)t138 >= (int)a5) {
                break;
            }
        }
    }
    u149 = *(float *)(((*(int *)(((int)stk + 4))) + 0x0));
    t158 = 0x0;
    if ((int)a5 > 0) {
        t150 = 0x0;
        t151 = 0x0;
        u152 = u149;
        for (;;) {
            if (u152 > (*(float *)(((((int)stk + 4) + 0x1C) + (t150 << 2))))) {
                t151 = t150;
                u152 = (*(float *)(((((int)stk + 4) + 0x1C) + (t150 << 2))));
            }
            t150 = (t150 + 0x1);
            if ((int)t150 >= (int)a5) {
                break;
            }
        }
        t158 = t151;
    }
    t162 = *(signed char *)0xC542237;
    t163 = *(signed char *)0xC54223C;
    if ((*(signed char *)0xC542377) != 0) {
        t172 = (*(int *)((((((((t162 << 1) + t162) << 2) << 1) + 0xC1BF424) + ((t163 << 2) << 1)) + 0x4)));
    } else {
        t172 = (*(int *)((((((((t162 << 1) + t162) << 2) << 1) + 0xC1BF424) + ((t163 << 2) << 1)) + 0x0)));
    }
    if ((float)t172 > (*(float *)((((t158 << 2) + (((int)stk + 4) + 0x1C)) + 0x0)))) {
        t176 = *(int *)(((int)stk + 12));
        (((struct o8_float *)(t176))->v) = (((((struct o8_float *)(t176))->v)) + ((float)t172 - (*(float *)((((t158 << 2) + (((int)stk + 4) + 0x1C)) + 0x0)))));
    }
    *(volatile int *)(((int)stk + 12));
    t185 = ((int (*)(int, int, int))(FUN_0c187798))(((t158 << 2) + (((int)stk + 4) + 0x1C)), (((int)stk + 4) + 0x1C), ((((((t162 << 1) + t162) << 2) << 1) + 0xC1BF424) + ((t163 << 2) << 1)));
    *(float *)(((int)stk + 208)) = ((*(float *)(((int)stk + 208))) - 100.0f);
    nlCalcPoint((*(int *)(((int)stk + 12))), ((*(int *)(((int)stk + 24))) + 0xBC));
    nlCalcPoint((0xC4 + ((int)stk + 4)), ((*(int *)(((int)stk + 24))) + 0xEC));
    return (nlPopMatrix(0x1));
}

int FUN_0c1238f8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    if (((signed char)a5 != 0) && ((signed char)a5 != 2)) {
        if ((signed char)a5 == 1) {
            t0 = FUN_0c03f444(0x5, 0x0, 0x6);
            t1 = t0;
            if (t0 != 0) {
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                (((struct oA8_uchar *)(t0))->v) = 0x1;
                (((struct oA9_uchar *)(t0))->v) = 0x21;
                (((struct oAC_ushort *)(t0))->v) = 0x1F;
                *(unsigned int *)((t0 + 0x4)) = 0xC123CFC;
                *(unsigned int *)((t0 + 0x10)) = a4;
                (((struct o14_uchar *)(t0))->v) = a5;
                (((struct o2C_float *)(t0))->v) = 0.0f;
                (((struct o30_float *)(t0))->v) = 0.0f;
                (((struct o28_float *)(t0))->v) = 0.0f;
                FUN_0c187798();
                (((struct o48_float *)(t0))->v) = 1.0f;
                (((struct o44_float *)(t0))->v) = 1.0f;
                (((struct o40_float *)(t0))->v) = 1.0f;
                t2 = 0x0;
                for (;;) {
                    *(unsigned char *)(((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))) + 0x0)) = 0x1;
                    *(unsigned short *)(((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))) + 0x6)) = 0x1F;
                    t3 = *(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0));
                    (((struct o8C_float *)(t3))->v) = 1.0f;
                    (((struct o84_float *)(t3))->v) = 1.0f;
                    (((struct o88_float *)((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0)))))->v) = 0.0f;
                    (((struct o6C_float *)((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0)))))->v) = (*(float *)((((((t2 << 1) + t2) << 2) + 0xC201A8C) + 0x0)));
                    (((struct o70_float *)((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0)))))->v) = ((((struct o4_float *)(((((t2 << 1) + t2) << 2) + 0xC201A8C)))->v));
                    (((struct o74_float *)((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0)))))->v) = ((((struct o8_float *)(((((t2 << 1) + t2) << 2) + 0xC201A8C)))->v));
                    FUN_0c03744a((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))), 0x0, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                    t3 = (int)t2 < (int)0x3;
                    t4 = (t2 << 2);
                    t2 = (t2 + 0x1);
                    if (t3) {
                        (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = 0x6000;
                        (((struct o78_uint *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = 0xE38;
                        (((struct o68_uint *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = (((((struct oF0_int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28);
                    } else {
                        (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = 0xFFFFA000;
                        (((struct o78_uint *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = 0xE38;
                        (((struct o68_uint *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = (((((struct oE0_int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28);
                    }
                    if ((int)t2 < (int)0x6) continue;
                    break;
                }
                *(unsigned short *)((t0 + 0x1C)) = 0x0;
                t1 = 0x0;
            }
            t0 = t1;
        } else {
            t1 = (signed char)a5;
            if ((signed char)a5 == 3) {
                t2 = FUN_0c037320(0x4, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                t3 = FUN_0c03f444(0x5, 0x0, t2);
                t4 = t3;
                if (t3 != 0) {
                    FUN_0c03733c(t3, 0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                    *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    (((struct oA8_uchar *)(t3))->v) = 0x1;
                    (((struct oA9_uchar *)(t3))->v) = 0x21;
                    (((struct oAC_ushort *)(t3))->v) = 0x1F;
                    *(unsigned int *)((t3 + 0x4)) = 0xC123CFC;
                    *(unsigned int *)((t3 + 0x10)) = a4;
                    (((struct o14_uchar *)(t3))->v) = a5;
                    (((struct o48_float *)(t3))->v) = 0.100000001f;
                    (((struct o44_float *)(t3))->v) = 0.100000001f;
                    (((struct o40_float *)(t3))->v) = 0.100000001f;
                    (((struct oA4_uint *)(t3))->v) = (((((struct oE0_int *)((0xC532498 + ((short)(*(signed char *)((t3 + 0x1))) * (short)0x3938))))->v)) + 0x28);
                    (((struct o30_float *)(t3))->v) = 0.0f;
                    (((struct o28_float *)(t3))->v) = 0.0f;
                    (((struct o2C_float *)(t3))->v) = -60.0f;
                    *(unsigned int *)((t3 + 0x34)) = 0x4000;
                    if ((int)t2 > 0) {
                        t5 = 0x0;
                        t6 = 0x0;
                        for (;;) {
                            *(unsigned char *)(((*(int *)((((0xC4 + t3) + t5) + 0x0))) + 0x0)) = 0x1;
                            t6 = (t6 + 0x1);
                            *(unsigned short *)(((*(int *)((((0xC4 + t3) + t5) + 0x0))) + 0x6)) = 0x1F;
                            t7 = *(int *)((((0xC4 + t3) + t5) + 0x0));
                            (((struct o8C_float *)(t7))->v) = 1.0f;
                            (((struct o88_float *)(t7))->v) = 1.0f;
                            (((struct o84_float *)(t7))->v) = 1.0f;
                            t5 = (t5 + 0x4);
                            if ((int)t6 >= (int)t2) {
                                break;
                            }
                        }
                    }
                    *(unsigned short *)((t3 + 0x1C)) = 0xA;
                    t4 = 0xA;
                }
                t1 = t4;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t0 = FUN_0c037320(0x2, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        t2 = FUN_0c03f444(0x5, 0x0, t0);
        t3 = t2;
        if (t2 != 0) {
            FUN_0c03733c(t2, 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            (((struct oA8_uchar *)(t2))->v) = 0x1;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            (((struct oAC_ushort *)(t2))->v) = 0x1F;
            *(unsigned int *)((t2 + 0x4)) = 0xC123CFC;
            *(unsigned int *)((t2 + 0x10)) = a4;
            (((struct o14_uchar *)(t2))->v) = a5;
            (((struct o30_float *)(t2))->v) = 0.0f;
            (((struct o28_float *)(t2))->v) = 0.0f;
            (((struct o2C_float *)(t2))->v) = -22.0f;
            FUN_0c187798();
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o40_float *)(t2))->v) = 1.0f;
            if ((int)t0 > 0) {
                t4 = 0x0;
                t5 = 0x0;
                for (;;) {
                    *(unsigned char *)(((*(int *)((((0xC4 + t2) + t4) + 0x0))) + 0x0)) = 0x1;
                    t5 = (t5 + 0x1);
                    *(unsigned short *)(((*(int *)((((0xC4 + t2) + t4) + 0x0))) + 0x6)) = 0x1F;
                    t6 = *(int *)((((0xC4 + t2) + t4) + 0x0));
                    (((struct o8C_float *)(t6))->v) = 1.0f;
                    (((struct o88_float *)(t6))->v) = 1.0f;
                    (((struct o84_float *)(t6))->v) = 1.0f;
                    t4 = (t4 + 0x4);
                    if ((int)t5 >= (int)t0) {
                        break;
                    }
                }
            }
            t0 = *(signed char *)((t2 + 0x1));
            (((struct oA4_uint *)(t2))->v) = ((((short)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x371A))) * (short)0x10E0) + (0x468 + (((short)t0 * (short)0x3938) + 0xC532498))) + 0x28);
            *(unsigned short *)((t2 + 0x1C)) = 0x0;
            *(unsigned short *)((t2 + 0x1E)) = 0x28;
            t3 = 0x28;
        }
        t1 = t3;
    }
    return t1;
}

int FUN_0c1348c8(int a4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R9;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_4 = *(signed char *)((v0_0 + 0x18));
    v0_2 = (v0_4);
    v0_3 = ((*(int *)((v0_0 + 0x10))));
    v0_1 = (0x0);
    v0_0 = (v0_0);
    if ((v0_4 == 0)) goto L_C1348F0;
    if ((v0_2 == 1)) goto L_C134900;
    L_C134C88:;
    return v0_2;
    L_C134900:;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_3 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (((int)stk + 0) + 0xC));
    FUN_0c187798();
    (((struct o50_float *)(v0_0))->v) = ((*(float *)(((int)stk + 16))) + 100.0f);
    v0_5 = *(signed char *)((v0_0 + 0x19));
    v0_2 = (v0_5);
    v0_4 = (0x1555);
    w0_0 = (0.200000003f);
    w0_1 = (100.0f);
    w0_2 = (0.00999999978f);
    if ((v0_5 == 0)) goto L_C134968;
    if ((v0_2 == 1)) goto L_C1349B0;
    if ((v0_2 == 2)) goto L_C134A22;
    if ((v0_2 != 3)) goto L_C134954;
    if (((*(signed char *)((v0_0 + 0x1A))) != 0)) goto L_C134B28;
    (((struct o1A_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x1A))) + 0x1);
    (((struct o20_ushort *)(v0_0))->v) = 0x5;
    (((struct o22_ushort *)(v0_0))->v) = 0x14;
    L_C134B28:;
    FUN_0c134780(v0_0, 0x3, R6);
    v0_4 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_4 - 1);
    v0_2 = (0x22);
    if (((short)(v0_4 - 1) != 0)) goto L_C134B90;
    *(unsigned short *)((v0_0 + v0_2)) = 0x14;
    v0_2 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_4 = (0x28);
    if (((short)(v0_2 - 1) != 0)) goto L_C134B5C;
    (((struct o19_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x19))) + 0x1);
    (((struct o1A_uchar *)(v0_0))->v) = v0_1;
    L_C134B5C:;
    *(float *)(((v0_4 + v0_0) + 0x0)) = ((*(float *)(((v0_4 + v0_0) + 0x0))) - (((math_sin_angle16((*(int *)((v0_0 + 0x38))))) * w0_1)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) - (((math_cos_angle16((*(int *)((v0_0 + 0x38))))) * w0_1)));
    FUN_0c1350d4(v0_0, 0x0);
    FUN_0c059e9a(v0_3, 0x26, (v0_0 + 0x28));
    L_C134B90:;
    if ((((int)((int)((((struct o22_short *)(v0_0))->v)) % (int)0x6)) != 0)) goto L_C134C3C;
    L_C134B9E:;
    *(float *)(((int)stk + 8)) = w0_0;
    *(float *)(((int)stk + 4)) = w0_0;
    *(float *)(((int)stk + 0)) = w0_0;
    FUN_0c1353a4(v0_0, 0x1, (v0_0 + 0x28), ((int)stk + 0));
    L_C134C3C:;
    w0_0 = *(float *)0xC134CBC;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((((struct o4C_float *)(v0_0))->v)) - ((((struct o28_float *)(v0_0))->v))) / w0_0));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((((struct o50_float *)(v0_0))->v)) - ((((struct o2C_float *)(v0_0))->v))) / w0_0));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((((struct o54_float *)(v0_0))->v)) - ((((struct o30_float *)(v0_0))->v))) / w0_0));
    v0_2 = (0x30);
    goto L_C134C88;
    L_C134954:;
    if ((v0_2 != 4)) goto L_C13495C;
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_2))->v) = (((((struct o78_int *)(v0_2))->v)) - 0x222);
    if (((int)((((struct o78_int *)(((((struct oC8_int *)(v0_0))->v))))->v)) >= 0)) goto L_C134C3C;
    (((struct o19_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x19))) + 0x1);
    (((struct o1A_uchar *)(v0_0))->v) = v0_1;
    (((struct o78_uint *)(((((struct oC8_int *)(v0_0))->v))))->v) = v0_1;
    goto L_C134C3C;
    L_C13495C:;
    if ((v0_2 != 5)) goto L_C134964;
    w0_0 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_0 - w0_2);
    v0_2 = (0x48);
    if ((!(w0_2 > (w0_0 - w0_2)))) goto L_C134C1E;
    *(float *)((v0_0 + v0_2)) = w0_2;
    (((struct o19_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x19))) + 0x1);
    (((struct o1A_uchar *)(v0_0))->v) = v0_1;
    FUN_0c133c78(v0_0, 0x0, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
    L_C134C1E:;
    w0_0 = (((struct o48_float *)(v0_0))->v);
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o40_float *)(v0_0))->v) = w0_0;
    goto L_C134C3C;
    L_C134964:;
    (((struct o18_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x18))) + 0x1);
    (((struct o19_uchar *)(v0_0))->v) = v0_1;
    L_C134C38:;
    (((struct o1A_uchar *)(v0_0))->v) = v0_1;
    goto L_C134C3C;
    L_C134A22:;
    v0_3 = *(signed char *)((v0_0 + 0x1A));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C134A36;
    if ((v0_2 == 1)) goto L_C134A42;
    if ((v0_2 == 2)) goto L_C134AA4;
    (((struct o19_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x19))) + 0x1);
    goto L_C134C38;
    L_C134AA4:;
    (((struct o22_ushort *)(v0_0))->v) = (((((struct o22_short *)(v0_0))->v)) + 0x1);
    if ((((int)((int)((((struct o22_short *)(v0_0))->v)) % (int)0x3)) != 0)) goto L_C134ACE;
    *(float *)(((int)stk + 8)) = w0_0;
    *(float *)(((int)stk + 4)) = w0_0;
    *(float *)(((int)stk + 0)) = w0_0;
    FUN_0c1353a4(v0_0, 0x1, (v0_0 + 0x28), ((int)stk + 0));
    L_C134ACE:;
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_2))->v) = (((((struct o78_int *)(v0_2))->v)) + 0x222);
    if (((int)((((struct o78_int *)(((((struct oC8_int *)(v0_0))->v))))->v)) >= (int)v0_4)) goto L_C134AEC;
    goto L_C134C3C;
    L_C134AEC:;
    (((struct o78_uint *)(((((struct oC8_int *)(v0_0))->v))))->v) = v0_4;
    (((struct o1A_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x1A))) + 0x1);
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    goto L_C134C3C;
    L_C134A42:;
    FUN_0c134780(v0_0, 0x3, R6);
    v0_2 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_2 + 0x1);
    if (((short)(v0_2 + 0x1) != 30)) goto L_C134A62;
    (((struct o1A_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x1A))) + 0x1);
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    L_C134A62:;
    if ((((int)((int)((((struct o22_short *)(v0_0))->v)) % (int)0x3)) == 0)) goto L_C134A74;
    goto L_C134C3C;
    L_C134A74:;
    goto L_C134B9E;
    L_C134A36:;
    (((struct o1A_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x1A))) + 0x1);
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    goto L_C134A42;
    L_C1349B0:;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + v0_4);
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) & 0xFFFF);
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) + w0_2);
    (((struct o22_ushort *)(v0_0))->v) = (((((struct o22_short *)(v0_0))->v)) + 0x1);
    FUN_0c05261c((*(int *)0xC241C1C));
    v0_2 = (0x48);
    w0_2 = (0.300000012f);
    if ((!(((((struct o48_float *)(v0_0))->v)) > 0.300000012f))) goto L_C134A00;
    *(float *)((v0_0 + v0_2)) = w0_2;
    *(unsigned int *)((v0_0 + 0x38)) = (FUN_0c07d774(v0_3));
    *(unsigned int *)((v0_0 + 0x3C)) = v0_1;
    *(unsigned int *)((v0_0 + 0x34)) = v0_1;
    (((struct o19_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x19))) + 0x1);
    (((struct o1A_uchar *)(v0_0))->v) = v0_1;
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    L_C134A00:;
    w0_0 = (((struct o48_float *)(v0_0))->v);
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o40_float *)(v0_0))->v) = w0_0;
    w0_0 = (((struct o40_float *)(v0_0))->v);
    *(float *)(((int)stk + 8)) = (w0_0 * 0.699999988f);
    *(float *)(((int)stk + 4)) = (w0_0 * 0.699999988f);
    *(float *)(((int)stk + 0)) = (w0_0 * 0.699999988f);
    FUN_0c1353a4(v0_0, 0x1, (v0_0 + 0x28), ((int)stk + 0));
    goto L_C134C3C;
    L_C134968:;
    w0_0 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_0 - w0_2);
    v0_2 = (0x48);
    if ((w0_2 > (w0_0 - w0_2))) goto L_C13497A;
    goto L_C134C1E;
    L_C13497A:;
    *(float *)((v0_0 + v0_2)) = w0_2;
    (((struct o19_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x19))) + 0x1);
    (((struct o1A_uchar *)(v0_0))->v) = v0_1;
    FUN_0c133c78(v0_0, 0x1, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    goto L_C134C1E;
    L_C1348F0:;
    (((struct o18_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x18))) + 0x1);
    (((struct o19_uchar *)(v0_0))->v) = v0_1;
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    goto L_C134900;
}

void FUN_0c16fa76(int a4)
{
    if (a4 != 0) {
        res_pl_textures_release_all();
        FUN_0c036518(0x0);
    return;
    }
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
    register int t7;
    register int t8;

    if (a6 != 0) {
        if (a6 != 1) {
            if (a6 == 2) {
                t0 = FUN_0c037320(0x7, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                t1 = FUN_0c03f444(0x5, 0x0, t0);
                t2 = t1;
                if (t1 != 0) {
                    FUN_0c03733c(t1, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                    t3 = 0x0;
                    t4 = 0x0;
                    if ((int)t0 > 0) {
                        t5 = 0x0;
                        t6 = 0x0;
                        for (;;) {
                            t7 = *(int *)((((0xC4 + t1) + t5) + 0x0));
                            *(unsigned char *)((t7 + 0x0)) = 0x1;
                            *(unsigned short *)((t7 + 0x6)) = 0xF;
                            t6 = (t6 + 0x1);
                            (((struct o8C_float *)(t7))->v) = 1.0f;
                            (((struct o88_float *)(t7))->v) = 1.0f;
                            (((struct o84_float *)(t7))->v) = 1.0f;
                            t5 = (t5 + 0x4);
                            if ((int)t6 >= (int)t0) {
                                break;
                            }
                        }
                        t0 = t7;
                        t3 = t5;
                        t4 = t6;
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
                    t5 = ((int (*)(int, int, int))(FUN_0c187798))(t0, t3, t4);
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
                        t4 = 0x0;
                        t5 = 0x0;
                        if ((int)t1 > 0) {
                            t6 = 0x0;
                            t7 = 0x0;
                            for (;;) {
                                t8 = *(int *)((((0xC4 + t2) + t6) + 0x0));
                                *(unsigned char *)((t8 + 0x0)) = 0x1;
                                *(unsigned short *)((t8 + 0x6)) = 0xF;
                                t7 = (t7 + 0x1);
                                (((struct o8C_float *)(t8))->v) = 1.0f;
                                (((struct o88_float *)(t8))->v) = 1.0f;
                                (((struct o84_float *)(t8))->v) = 1.0f;
                                t6 = (t6 + 0x4);
                                if ((int)t7 >= (int)t1) {
                                    break;
                                }
                            }
                            t1 = t8;
                            t4 = t6;
                            t5 = t7;
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
                        t6 = ((int (*)(int, int, int))(FUN_0c187798))(t1, t4, t5);
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
                            t6 = ((int (*)(int))(FUN_0c187798))(t5);
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
                t4 = 0x0;
                t5 = 0x0;
                if ((int)t0 > 0) {
                    t6 = 0x0;
                    t7 = 0x0;
                    for (;;) {
                        t8 = *(int *)((((0xC4 + t2) + t6) + 0x0));
                        *(unsigned char *)((t8 + 0x0)) = 0x1;
                        *(unsigned short *)((t8 + 0x6)) = 0xF;
                        t7 = (t7 + 0x1);
                        (((struct o8C_float *)(t8))->v) = 1.0f;
                        (((struct o88_float *)(t8))->v) = 1.0f;
                        (((struct o84_float *)(t8))->v) = 1.0f;
                        t6 = (t6 + 0x4);
                        if ((int)t7 >= (int)t0) {
                            break;
                        }
                    }
                    t0 = t8;
                    t4 = t6;
                    t5 = t7;
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
                t6 = ((int (*)(int, int, int))(FUN_0c187798))(t0, t4, t5);
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
            t4 = 0x0;
            t5 = 0x0;
            if ((int)t1 > 0) {
                t6 = 0x0;
                t7 = 0x0;
                for (;;) {
                    t8 = *(int *)((((0xC4 + t2) + t6) + 0x0));
                    *(unsigned char *)((t8 + 0x0)) = 0x1;
                    *(unsigned short *)((t8 + 0x6)) = 0xF;
                    t7 = (t7 + 0x1);
                    (((struct o8C_float *)(t8))->v) = 1.0f;
                    (((struct o88_float *)(t8))->v) = 1.0f;
                    (((struct o84_float *)(t8))->v) = 1.0f;
                    t6 = (t6 + 0x4);
                    if ((int)t7 >= (int)t1) {
                        break;
                    }
                }
                t1 = t8;
                t4 = t6;
                t5 = t7;
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
            t6 = ((int (*)(int, int, int))(FUN_0c187798))(t1, t4, t5);
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
    v0_6 = a4;
    *(unsigned int *)(((int)stk + 16)) = v0_6;
    v0_0 = *(signed char *)((v0_6 + 0x2));
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
    v0_6 = ((v0_5 << 2));
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
    *(unsigned int *)(((v0_6 + (0xC3C7DD8 + ((v0_4 << 2) << 1))) + 0x0)) = ((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294);
    *(unsigned int *)(((int)stk + 20)) = v0_0;
    v0_6 = ((v0_6 + (0xC3C7DD8 + ((v0_4 << 2) << 1))));
    L_C039D8E:;
    if (((int)(*(signed char *)((v0_3 + 0x0))) < 0)) goto L_C039D98;
    if (!(((int)(*(int *)0xC3C7DD4) < (int)0x28))) goto L_C039D98;
    v0_4 = FUN_0c03999c((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), (*(signed char *)((v0_3 + 0x0))), (*(signed char *)((v0_3 + 0x1))));
    v0_7 = (v0_4);
    if ((v0_4 == 0)) goto L_C039AEE;
    if (((*(int *)((v0_7 + 0x8))) != 0)) goto L_C039AF2;
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
    v0_5 = *(int *)0xC3C7DD4;
    v0_4 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x30)) = ((((v0_4 << 1) + v0_4) << 2) + 0xC3BD894);
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x34)) = (((*(int *)((v0_1 + 0x0))) << 2) + 0xC3C0294);
    v0_4 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x38)) = ((((v0_4 << 1) + v0_4) << 2) + 0xC3C1094);
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x24)) = (((*(int *)((v0_1 + 0x0))) << 1) + 0xC3C3A94);
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x28)) = (((*(int *)((v0_1 + 0x0))) << 1) + 0xC3C4194);
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x3C)) = (((*(int *)((v0_1 + 0x0))) << 2) + v0_2);
    (((struct o40_uint *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = (0xC3C5694 + ((*(int *)((v0_1 + 0x0))) << 2));
    (((struct o44_uint *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = (((*(int *)((v0_1 + 0x0))) << 2) + 0xC3C6494);
    *(unsigned char *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x0)) = (*(signed char *)((v0_3 + 0x0)));
    *(unsigned char *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x1)) = (*(signed char *)((v0_3 + 0x1)));
    *(unsigned char *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x2)) = (*(signed char *)((v0_3 + 0x2)));
    *(unsigned char *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x3)) = (*(signed char *)((v0_3 + 0x3)));
    v0_4 = ((int (*)(int, int, int))(FUN_0c187798))(v0_6, R5, R6);
    (((struct o10_float *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o10_float *)(v0_3))->v));
    (((struct o18_float *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o14_float *)(v0_3))->v));
    (((struct o1C_float *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o18_float *)(v0_3))->v));
    (((struct o20_float *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o1C_float *)(v0_3))->v));
    (((struct o14_float *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o20_float *)(v0_3))->v));
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x2C)) = (FUN_0c0398f0((*(int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x30))), (*(int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x34))), (*(int *)((v0_7 + 0x8)))));
    v0_4 = (v0_0);
    v0_5 = (((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294));
    L_C039CD6:;
    if (((int)v0_4 >= (int)(*(int *)((v0_5 + 0x2C))))) goto L_C039CE0;
    v0_7 = *(int *)((v0_1 + 0x0));
    v0_6 = (v0_7);
    if (((int)v0_7 < (int)0x380)) goto L_C039BC0;
    *(unsigned int *)((v0_5 + 0x2C)) = v0_4;
    L_C039CE0:;
    FUN_0c039846(v0_5);
    v0_6 = (v0_0);
    L_C039D32:;
    if (((int)v0_6 < (int)((*(int *)((v0_5 + 0x2C))) - 1))) goto L_C039CE8;
    v0_4 = (v0_0);
    L_C039D78:;
    if (((int)v0_4 < (int)(*(int *)((v0_5 + 0x2C))))) goto L_C039D3E;
    *(unsigned int *)0xC3C7DD4 = ((*(int *)0xC3C7DD4) + 0x1);
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    v0_3 = ((v0_3 + 0x24));
    goto L_C039D8E;
    L_C039D3E:;
    v0_8 = (int)(((int (*)(int, int, int, int, float, float, float))((*(int *)((0xC20F060 + ((*(signed char *)((v0_5 + 0x3))) << 2))))))(((((v0_4 << 1) + v0_4) << 2) + (*(int *)((v0_5 + 0x30)))), R5, R6, R7, (*(float *)(((v0_4 << 2) + (*(int *)((v0_5 + 0x3C)))))), ((((struct o10_float *)(v0_5))->v)), F6)) >= 0;
    v0_7 = (v0_4 << 2);
    v0_4 = ((v0_4 + 0x1));
    v0_7 = v0_7;
    if (v0_8) goto L_C039D70;
    *(unsigned int *)((v0_7 + ((((struct o44_int *)(v0_5))->v)))) = v0_0;
    goto L_C039D78;
    L_C039D70:;
    *(unsigned int *)((v0_7 + ((((struct o44_int *)(v0_5))->v)))) = 0x1;
    goto L_C039D78;
    L_C039CE8:;
    R5 = ((v0_6 + 0x1));
    v0_7 = ((v0_6 << 1));
    L_C039D2A:;
    if (((int)R5 < (int)(*(int *)((v0_5 + 0x2C))))) goto L_C039CF2;
    v0_6 = ((v0_6 + 0x1));
    goto L_C039D32;
    L_C039CF2:;
    v0_8 = *(int *)((v0_5 + 0x3C));
    v0_9 = *(int *)((v0_5 + 0x28));
    v0_10 = !((*(float *)(((((*(short *)((v0_7 + v0_9))) << 2) + v0_8) + 0x0))) > (*(float *)(((((*(short *)(((R5 << 1) + v0_9))) << 2) + v0_8) + 0x0))));
    v0_4 = ((R5 << 1));
    R5 = ((R5 + 0x1));
    R6 = (v0_9);
    R7 = (v0_8);
    if (v0_10) goto L_C039D2A;
    v0_8 = *(int *)((v0_5 + 0x28));
    *(unsigned int *)(((int)stk + 8)) = (v0_8 + v0_7);
    v0_9 = *(short *)(((v0_8 + v0_7) + 0x0));
    *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x0)) = (*(short *)(((v0_8 + v0_4) + 0x0)));
    *(unsigned short *)((v0_4 + (*(int *)((v0_5 + 0x28))))) = v0_9;
    R6 = (v0_9);
    R7 = ((v0_8 + v0_4));
    goto L_C039D2A;
    L_C039BC0:;
    v0_7 = ((int (*)(int, int, int))(FUN_0c187798))(v0_6, R5, R6);
    v0_8 = *(signed char *)((v0_5 + 0x2));
    v0_7 = (v0_8);
    if ((v0_8 == 0)) goto L_C039C14;
    if ((v0_7 == 1)) goto L_C039C30;
    if (!((v0_7 == 2))) goto L_C039CBC;
    v0_6 = ((int (*)(int, int, int))(FUN_0c187798))(v0_6, R5, R6);
    FUN_0c0e2390((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x10));
    v0_6 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (v0_6 << 2);
    *(int *)((int)stk + 4) = (0xC3C5694 + (v0_6 << 2));
    *(int *)((int)stk + 0) = ((v0_6 << 2) + v0_2);
    w0_1 = FUN_0c0e2340((((int)stk + 0) + 0x24));
    *(unsigned int *)(((int)stk + 4)) = (0xC3C5694 + (v0_6 << 2));
    *(unsigned int *)(((int)stk + 0)) = ((v0_6 << 2) + v0_2);
    F0 = (w0_1);
    goto L_C039CB4;
    L_C039CBC:;
    *(unsigned short *)((((*(int *)((v0_1 + 0x0))) << 1) + 0xC3C3A94)) = 0xFFFFFFFF;
    *(unsigned short *)(((v0_4 << 1) + (*(int *)((v0_5 + 0x28))))) = v0_4;
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) + 0x1);
    v0_4 = ((v0_4 + 0x1));
    goto L_C039CD6;
    L_C039CB4:;
    *(float *)(((*(int *)((int)stk + 0)) + 0x0)) = F0;
    *(float *)(((*(int *)((int)stk + 4)) + 0x0)) = F0;
    goto L_C039CBC;
    L_C039C30:;
    v0_6 = ((int (*)(int, int, int))(FUN_0c187798))(v0_6, R5, R6);
    math_vec3_mul_xyz((((int)stk + 8) + 0x10), w0_0, w0_0, w0_0);
    FUN_0c0e2390((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x10));
    v0_6 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (v0_6 << 2);
    *(int *)((int)stk + 4) = (0xC3C5694 + (v0_6 << 2));
    *(int *)((int)stk + 0) = ((v0_6 << 2) + v0_2);
    w0_1 = FUN_0c0e2340((((int)stk + 0) + 0x24));
    *(float *)((((v0_6 << 2) + v0_2) + 0x0)) = w0_1;
    *(float *)(((0xC3C5694 + (v0_6 << 2)) + 0x0)) = w0_1;
    goto L_C039CBC;
    L_C039C14:;
    v0_6 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (v0_6 << 2);
    *(int *)((int)stk + 4) = (0xC3C5694 + (v0_6 << 2));
    *(int *)((int)stk + 0) = ((v0_6 << 2) + v0_2);
    w0_1 = FUN_0c0e2340((((int)stk + 0) + 0x24));
    *(unsigned int *)(((int)stk + 4)) = (0xC3C5694 + (v0_6 << 2));
    *(unsigned int *)(((int)stk + 0)) = ((v0_6 << 2) + v0_2);
    F0 = (w0_1);
    goto L_C039CB4;
}

int FUN_0c0d38b4(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    int t3;
    register float u6;
    register int t34;
    register int t50;
    register int t62;
    register int t64;
    int t72;
    register int t130;
    register int t84;
    register float u88;
    register int t106;
    register int t120;
    register int t136;
    register float u158;
    register int t140;
    register int t164;
    register int t184;
    register float u206;
    register int t188;
    register int t212;
    register int t232;
    register int t240;
    register int t243;
    register int t254;
    register int t255;
    register int t258;
    register int t260;
    int t263;
    register int t320;
    register int t275;
    register float u279;
    register int t296;
    register int t310;
    register int t326;
    register float u348;
    register int t330;
    register int t354;
    register int t374;
    register float u396;
    register int t378;
    register int t402;
    register int t422;
    register int t429;
    register int t432;
    register float u182;
    register float u149;
    register float u173;
    register float u230;
    register float u197;
    register float u221;
    register float u238;
    register float u250;
    register float u372;
    register float u339;
    register float u363;
    register float u420;
    register float u387;
    register float u411;
    register float u427;
    register float u438;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                t3 = *(short *)0xC540994;
                if ((0x67 & t3) != 0) {
                    *(int *)((int)stk + 0) = (a4 + 0x30);
                    u6 = ((((struct o30_float *)(a4))->v));
                    u6 = u6 + 10.0f * (math_sin_angle16(((0x1F & t3) << 14)));
                    (((struct o30_float *)(a4))->v) = u6;
                }
                if ((int)(*(int *)((a4 + 0x3C))) <= (int)0x1555) {
                    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x5B);
                } else {
                    if ((int)(*(int *)((a4 + 0x34))) <= (int)0x1555) {
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x5B);
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 10.0f);
                    } else {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 30.0f);
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 10.0f);
                    }
                }
                t34 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t34 - 1);
                if ((int)(short)(t34 - 1) <= 0) {
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 5);
                    if ((int)((((struct o20_short *)(a4))->v)) < (int)0x1E) {
                        (((struct o20_ushort *)(a4))->v) = 0x1E;
                    }
                    *(unsigned short *)((a4 + 0x1E)) = ((((struct o20_short *)(a4))->v));
                    FUN_0c179ac0();
                    FUN_0c0d36fc(a4);
                }
                t50 = (((struct o22_short *)(a4))->v);
                (((struct o22_ushort *)(a4))->v) = (t50 - 1);
                if ((int)(short)(t50 - 1) <= 0) {
                    (((struct o22_ushort *)(a4))->v) = (((int)((int)(FUN_0c179ac0()) % (int)0x3C)) + 0x1E);
                    thunk_FUN_0c05abb2(0x44, (a4 + 0x28));
                }
                t62 = *(short *)0xC540994;
                t64 = t62;
                if ((int)t62 <= 0) {
                    thunk_FUN_0c05abb2(0x4D, (a4 + 0x28));
                    (((struct o14_uchar *)(a4))->v) = 0x3;
                    t64 = 0x14;
                }
                return t64;
            }
            if (t2 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t2;
        }
        t72 = *(signed char *)((a4 + 0x15));
        if (t72 != 0) {
            if ((t72 != 1) && (t72 != 2)) {
                if (t72 != 3) {
                    if (t72 != 4) {
                        t130 = t72;
                        if (t72 != 5) {
                        } else {
                            t84 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t84 - 1);
                            if (((short)(t84 - 1) & 103) != 0) {
                                *(int *)((int)stk + 0) = (a4 + 0x30);
                                u88 = ((((struct o30_float *)(a4))->v));
                                u88 = u88 + 10.0f * (math_sin_angle16(((0x1F & (*(short *)((a4 + 0x1C)))) << 14)));
                                (((struct o30_float *)(a4))->v) = u88;
                                *(unsigned int *)((a4 + 0x3C)) = (int)(math_sin_angle16((((((*(short *)0xC540994) & 0x3) << 2) << 2) - 24)));
                            }
                            if (((*(short *)((a4 + 0x1C))) & 127) == 0) {
                                thunk_FUN_0c05abb2(0x45, (a4 + 0x28));
                            }
                            t106 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t106 - 1);
                            if ((int)(short)(t106 - 1) <= 0) {
                                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 5);
                                if ((int)((((struct o20_short *)(a4))->v)) < (int)0x14) {
                                    (((struct o20_ushort *)(a4))->v) = 0x14;
                                }
                                *(unsigned short *)((a4 + 0x1E)) = ((((struct o20_short *)(a4))->v));
                                FUN_0c179ac0();
                                FUN_0c0d36fc(a4);
                            }
                            t120 = *(signed char *)0xC54098D;
                            t130 = t120;
                            if (t120 != 8) {
                            } else {
                                (((struct o14_uchar *)(a4))->v) = 0x2;
                                (((struct o15_uchar *)(a4))->v) = 0x0;
                                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x2);
                                *(unsigned short *)((a4 + 0x1C)) = (*(short *)0xC540994);
                                (((struct o22_ushort *)(a4))->v) = 0x1E;
                                t130 = (thunk_FUN_0c05abb2(0x44, (a4 + 0x28)));
                            }
                        }
                        return t130;
                    }
                    t136 = *(signed char *)((a4 + 0x16));
                    if (t136 != 0) {
                        u158 = 0.0f;
                        if (t136 != 1) {
                        } else {
                            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0f);
                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                            t140 = (((struct o20_short *)(a4))->v);
                            (((struct o20_ushort *)(a4))->v) = (t140 - 1);
                            if ((int)(short)(t140 - 1) <= 0) {
                                FUN_0c0d37c2(a4, 0x0);
                            } else {
                                u149 = 0.0f;
                            }
                            u158 = u149;
                        }
                        u182 = u158;
                    } else {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        (((struct o4C_float *)(a4))->v) = 0.0f;
                        (((struct o20_ushort *)(a4))->v) = 0x50;
                        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0f);
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                        t164 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t164 - 1);
                        if ((int)(short)(t164 - 1) <= 0) {
                            FUN_0c0d37c2(a4, 0x0);
                        } else {
                            u173 = 0.0f;
                        }
                        u182 = u173;
                    }
                    return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u182);
                }
                t184 = *(signed char *)((a4 + 0x16));
                if (t184 != 0) {
                    u206 = 0.0f;
                    if (t184 != 1) {
                    } else {
                        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.0f);
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                        t188 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t188 - 1);
                        if ((int)(short)(t188 - 1) <= 0) {
                            FUN_0c0d37c2(a4, 0x0);
                        } else {
                            u197 = 0.0f;
                        }
                        u206 = u197;
                    }
                    u230 = u206;
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o4C_float *)(a4))->v) = -0.0f;
                    (((struct o20_ushort *)(a4))->v) = 0x50;
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.0f);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    t212 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t212 - 1);
                    if ((int)(short)(t212 - 1) <= 0) {
                        FUN_0c0d37c2(a4, 0x0);
                    } else {
                        u221 = 0.0f;
                    }
                    u230 = u221;
                }
                return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u230);
            }
            t232 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t232 - 1);
            if ((int)(short)(t232 - 1) <= 0) {
                FUN_0c0d37c2(a4, 0x0);
            } else {
                u238 = 0.0f;
            }
            return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u238);
        }
        t240 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t240 - 1);
        if ((int)(short)(t240 - 1) <= 0) {
            t243 = 0x2;
            if (!(0.0f > ((((struct o28_float *)(a4))->v)))) {
                t243 = 0x1;
            }
            FUN_0c0d37c2(a4, t243);
        } else {
            u250 = 0.0f;
        }
        return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u250);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x7;
    FUN_0c0d37c2(a4, 0x1);
    t254 = FUN_0c179ac0();
    t255 = ((~(((~t254) + 0x1) & 0x3)) + 0x1);
    if ((int)t254 >= 0) {
        t255 = (t254 & 0x3);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((short)(t255 + 0x1) * (short)0x5A);
    FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
    t258 = 0x0;
    for (;;) {
        if ((int)t258 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t260 = *(int *)((((t258 << 2) + (0xC4 + a4)) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t260;
        FUN_0c0d04c4(((*(int *)(((int)stk + 4))) + 0x6), (t260 + 0x78));
        t258 = (t258 + 0x1);
    }
    t263 = *(signed char *)((a4 + 0x15));
    if (t263 != 0) {
        if ((t263 != 1) && (t263 != 2)) {
            if (t263 != 3) {
                if (t263 != 4) {
                    t320 = t263;
                    if (t263 != 5) {
                    } else {
                        t275 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t275 - 1);
                        if (((short)(t275 - 1) & 103) != 0) {
                            *(int *)((int)stk + 0) = (a4 + 0x30);
                            u279 = ((((struct o30_float *)(a4))->v));
                            u279 = u279 + 10.0f * (math_sin_angle16(((0x1F & (*(short *)((a4 + 0x1C)))) << 14)));
                            (((struct o30_float *)(a4))->v) = u279;
                            *(unsigned int *)((a4 + 0x3C)) = (int)(math_sin_angle16((((((*(short *)0xC540994) & 0x3) << 2) << 2) - 24)));
                        }
                        if (((*(short *)((a4 + 0x1C))) & 127) == 0) {
                            thunk_FUN_0c05abb2(0x45, (a4 + 0x28));
                        }
                        t296 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t296 - 1);
                        if ((int)(short)(t296 - 1) <= 0) {
                            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 5);
                            if ((int)((((struct o20_short *)(a4))->v)) < (int)0x14) {
                                (((struct o20_ushort *)(a4))->v) = 0x14;
                            }
                            *(unsigned short *)((a4 + 0x1E)) = ((((struct o20_short *)(a4))->v));
                            FUN_0c179ac0();
                            FUN_0c0d36fc(a4);
                        }
                        t310 = *(signed char *)0xC54098D;
                        t320 = t310;
                        if (t310 != 8) {
                        } else {
                            (((struct o14_uchar *)(a4))->v) = 0x2;
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x2);
                            *(unsigned short *)((a4 + 0x1C)) = (*(short *)0xC540994);
                            (((struct o22_ushort *)(a4))->v) = 0x1E;
                            t320 = (thunk_FUN_0c05abb2(0x44, (a4 + 0x28)));
                        }
                    }
                    return t320;
                }
                t326 = *(signed char *)((a4 + 0x16));
                if (t326 != 0) {
                    u348 = 0.0f;
                    if (t326 != 1) {
                    } else {
                        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0f);
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                        t330 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t330 - 1);
                        if ((int)(short)(t330 - 1) <= 0) {
                            FUN_0c0d37c2(a4, 0x0);
                        } else {
                            u339 = 0.0f;
                        }
                        u348 = u339;
                    }
                    u372 = u348;
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o4C_float *)(a4))->v) = 0.0f;
                    (((struct o20_ushort *)(a4))->v) = 0x50;
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0f);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    t354 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t354 - 1);
                    if ((int)(short)(t354 - 1) <= 0) {
                        FUN_0c0d37c2(a4, 0x0);
                    } else {
                        u363 = 0.0f;
                    }
                    u372 = u363;
                }
                return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u372);
            }
            t374 = *(signed char *)((a4 + 0x16));
            if (t374 != 0) {
                u396 = 0.0f;
                if (t374 != 1) {
                } else {
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.0f);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    t378 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t378 - 1);
                    if ((int)(short)(t378 - 1) <= 0) {
                        FUN_0c0d37c2(a4, 0x0);
                    } else {
                        u387 = 0.0f;
                    }
                    u396 = u387;
                }
                u420 = u396;
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o4C_float *)(a4))->v) = -0.0f;
                (((struct o20_ushort *)(a4))->v) = 0x50;
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.0f);
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                t402 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t402 - 1);
                if ((int)(short)(t402 - 1) <= 0) {
                    FUN_0c0d37c2(a4, 0x0);
                } else {
                    u411 = 0.0f;
                }
                u420 = u411;
            }
            return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u420);
        }
        t422 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t422 - 1);
        if ((int)(short)(t422 - 1) <= 0) {
            FUN_0c0d37c2(a4, 0x0);
        } else {
            u427 = 0.0f;
        }
        return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u427);
    }
    t429 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t429 - 1);
    if ((int)(short)(t429 - 1) <= 0) {
        t432 = 0x2;
        if (!(0.0f > ((((struct o28_float *)(a4))->v)))) {
            t432 = 0x1;
        }
        FUN_0c0d37c2(a4, t432);
    } else {
        u438 = 0.0f;
    }
    return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u438);
}

int FUN_0c042528(void)
{
    register int t0;

    t0 = *(signed char *)0xC5421FA;
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(void))(0xC0424E4))();
        }
        return FUN_0c0421a6();
    }
    return ((int (*)(void))(0xC041F28))();
}

int FUN_0c019c66(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register float u0;

    t0 = *(signed char *)((a4 + 0x3));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = *(signed char *)((a4 + 0x14));
            if (t2 != 0) {
                t3 = t2;
                if (t2 != 1) {
                } else {
                    t2 = *(signed char *)((a4 + 0x15));
                    if (t2 != 0) {
                        if (t2 != 1) {
                            t4 = t2;
                            if (t2 == 2) {
                                t2 = *(signed char *)((t1 + 0x8));
                                t5 = t2;
                                if (t2 != 0) {
                                } else {
                                    (((struct o15_uchar *)(a4))->v) = 0x0;
                                    t5 = 0x15;
                                }
                                t4 = t5;
                            }
                            t2 = t4;
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = *(signed char *)((t1 + 0x8));
                            t5 = (unsigned char)t4;
                            if ((unsigned char)t4 == 4) {
                            } else {
                                *(unsigned char *)((t1 + 0x9)) = ((*(signed char *)((t1 + 0x9))) + 0x1);
                                if ((unsigned char)(*(signed char *)((t1 + 0x8))) == 2) {
                                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                                }
                                t4 = *(signed char *)((t1 + 0x8));
                                t6 = (unsigned char)t4;
                                if ((unsigned char)t4 != 3) {
                                } else {
                                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                                    t6 = 0xA8;
                                }
                                t5 = t6;
                            }
                            t2 = t5;
                        }
                        t4 = t2;
                    } else {
                        t2 = *(signed char *)((t1 + 0x8));
                        t5 = t2;
                        if (t2 == 0) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t5 = 0x15;
                        }
                        t4 = t5;
                    }
                    t3 = t4;
                }
                t2 = t3;
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                (((struct o2C_float *)(a4))->v) = 0.0f;
                (((struct o30_float *)(a4))->v) = 0.0f;
                t2 = 0x30;
            }
            t3 = t2;
        } else {
            if (t0 == 2) {
                u0 = 128.0f;
                if ((*(signed char *)((t1 + 0xA))) == 0) {
                    u0 = -128.0f;
                }
                (((struct o28_float *)(a4))->v) = u0;
                t2 = *(signed char *)((a4 + 0x14));
                if (t2 != 0) {
                    if (t2 != 1) {
                        t4 = t2;
                        if (t2 != 2) {
                        } else {
                            t2 = FUN_0c01c62a(a4);
                            *(unsigned char *)((t1 + 0x9)) = t2;
                            t4 = t2;
                        }
                        t2 = t4;
                    } else {
                        FUN_0c012c34(a4);
                        t4 = *(signed char *)((a4 + 0x15));
                        if (t4 != 0) {
                            if (t4 != 1) {
                                t5 = t4;
                                if (t4 != 2) {
                                } else {
                                    t4 = *(signed char *)((t1 + 0x8));
                                    t6 = t4;
                                    if (t4 != 0) {
                                    } else {
                                        (((struct o15_uchar *)(a4))->v) = 0x0;
                                        t6 = 0x15;
                                    }
                                    t5 = t6;
                                }
                                t4 = t5;
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                *(unsigned char *)((t1 + 0x9)) = ((*(signed char *)((t1 + 0x9))) + 0x1);
                                if ((unsigned char)(*(signed char *)((t1 + 0x8))) != 2) {
                                    t5 = *(signed char *)((t1 + 0x8));
                                    if ((unsigned char)t5 == 3) {
                                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                                        t6 = 0xA8;
                                    } else {
                                        t7 = (unsigned char)t5;
                                        if ((unsigned char)t5 != 4) {
                                        } else {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            (((struct o1B_uchar *)(a4))->v) = 0x0;
                                            *(unsigned char *)((t1 + 0x9)) = 0x0;
                                            (((struct o22_ushort *)(a4))->v) = 0x0;
                                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                                            t7 = 0xA8;
                                        }
                                        t6 = t7;
                                    }
                                    t5 = t6;
                                } else {
                                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                                    t5 = 0xA8;
                                }
                                t4 = t5;
                            }
                            t5 = t4;
                        } else {
                            t4 = *(signed char *)((t1 + 0x8));
                            t6 = t4;
                            if (t4 == 0) {
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t6 = 0x15;
                            }
                            t5 = t6;
                        }
                        t2 = t5;
                    }
                    t4 = t2;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                    (((struct o2C_float *)(a4))->v) = -176.0f;
                    (((struct o30_float *)(a4))->v) = 3.0f;
                    t4 = 0x30;
                }
                t2 = t4;
            } else {
                if (t0 == 3) {
                    t4 = 0x14;
                    if ((*(signed char *)((a4 + 0x14))) != 0) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                        t4 = 0xA8;
                    }
                    t5 = t4;
                } else {
                    if (t0 == 4) {
                        t4 = *(signed char *)((a4 + 0x14));
                        t6 = *(int *)((a4 + 0x10));
                        if (t4 != 0) {
                            if (t4 != 1) {
                                if (t4 != 2) {
                                    t7 = t4;
                                    if (t4 != 3) {
                                    } else {
                                        t4 = FUN_0c01c62a(a4);
                                        t8 = (signed char)t4;
                                        if ((signed char)t4 != 0) {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            t8 = 0x14;
                                        }
                                        t7 = t8;
                                    }
                                    t4 = t7;
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF54 + ((unsigned char)(*(signed char *)((t6 + 0x0))) << 2))));
                                    FUN_0c012c34(a4);
                                    t7 = FUN_0c01cd2c(0x101);
                                    t8 = (short)t7;
                                    if ((short)t7 != 0) {
                                        t9 = (short)t7;
                                        if ((*(signed char *)0xC30EFA2) != 0) {
                                        } else {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            (((struct o1B_uchar *)(a4))->v) = 0x0;
                                            (((struct o22_ushort *)(a4))->v) = 0x0;
                                            t9 = 0x22;
                                        }
                                        t8 = t9;
                                    }
                                    t4 = t8;
                                }
                                t7 = t4;
                            } else {
                                (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF54 + ((unsigned char)(*(signed char *)((t6 + 0x0))) << 2))));
                                FUN_0c012c34(a4);
                                t4 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                                t8 = (short)(t4 - 1);
                                if ((short)(t4 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t8 = 0x14;
                                }
                                t7 = t8;
                            }
                            t4 = t7;
                        } else {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF54 + ((unsigned char)(*(signed char *)((t6 + 0x0))) << 2))));
                            FUN_0c012c34(a4);
                            t6 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t6 - 1);
                            t7 = (short)(t6 - 1);
                            if ((short)(t6 - 1) == 0) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t7 = 0x14;
                            }
                            t4 = t7;
                        }
                        t6 = t4;
                    } else {
                        t4 = t0;
                        if (t0 == 5) {
                            t0 = *(signed char *)((a4 + 0x14));
                            t7 = *(int *)((a4 + 0x10));
                            if (t0 != 0) {
                                if (t0 != 1) {
                                    if (t0 != 2) {
                                        t8 = t0;
                                        if (t0 != 3) {
                                        } else {
                                            t0 = FUN_0c01c62a(a4);
                                            t9 = (signed char)t0;
                                            if ((signed char)t0 != 0) {
                                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                                t9 = 0x14;
                                            }
                                            t8 = t9;
                                        }
                                        t0 = t8;
                                    } else {
                                        (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF64 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
                                        FUN_0c012c34(a4);
                                        t8 = FUN_0c01cd2c(0x101);
                                        t9 = (short)t8;
                                        if ((short)t8 != 0) {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            (((struct o1B_uchar *)(a4))->v) = 0x0;
                                            (((struct o22_ushort *)(a4))->v) = 0x0;
                                            t9 = 0x22;
                                        }
                                        t0 = t9;
                                    }
                                    t8 = t0;
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF64 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
                                    FUN_0c012c34(a4);
                                    t0 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                                    t9 = (short)(t0 - 1);
                                    if ((short)(t0 - 1) == 0) {
                                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                        t9 = 0x14;
                                    }
                                    t8 = t9;
                                }
                                t0 = t8;
                            } else {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                (((struct oA8_uchar *)(a4))->v) = 0x1;
                                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                                (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF64 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
                                FUN_0c012c34(a4);
                                t7 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t7 - 1);
                                t8 = (short)(t7 - 1);
                                if ((short)(t7 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t8 = 0x14;
                                }
                                t0 = t8;
                            }
                            t4 = t0;
                        }
                        t6 = t4;
                    }
                    t5 = t6;
                }
                t2 = t5;
            }
            t3 = t2;
        }
        t0 = t3;
    } else {
        t2 = *(signed char *)((a4 + 0x14));
        if (t2 != 0) {
            t3 = t2;
            if (t2 != 1) {
            } else {
                t2 = *(signed char *)((a4 + 0x15));
                if (t2 != 0) {
                    if (t2 != 1) {
                        if (t2 != 2) {
                            t4 = t2;
                            if (t2 != 3) {
                            } else {
                                t2 = *(signed char *)((t1 + 0x8));
                                t5 = t2;
                                if (t2 != 0) {
                                } else {
                                    (((struct o15_uchar *)(a4))->v) = 0x0;
                                    t5 = 0x15;
                                }
                                t4 = t5;
                            }
                            t2 = t4;
                        } else {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                            t4 = 0x2C;
                            if (((((struct o4C_float *)(a4))->v)) > ((((struct o2C_float *)(a4))->v))) {
                            } else {
                                (((struct o2C_float *)(a4))->v) = ((((struct o4C_float *)(a4))->v));
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t5 = *(signed char *)((t1 + 0x9));
                                *(unsigned char *)((t1 + 0x9)) = (t5 + 0x1);
                                t4 = (t5 + 0x1);
                            }
                            t2 = t4;
                        }
                        t4 = t2;
                    } else {
                        t2 = *(signed char *)((t1 + 0x8));
                        if ((unsigned char)t2 != 1) {
                            if ((unsigned char)t2 != 2) {
                                if ((unsigned char)t2 != 3) {
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x2);
                                    t2 = 0x15;
                                } else {
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x2);
                                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                                    t5 = *(signed char *)((t1 + 0x9));
                                    *(unsigned char *)((t1 + 0x9)) = (t5 + 0x1);
                                    t2 = (t5 + 0x1);
                                }
                                t5 = t2;
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x2);
                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                                t2 = *(signed char *)((t1 + 0x9));
                                *(unsigned char *)((t1 + 0x9)) = (t2 + 0x1);
                                t5 = (t2 + 0x1);
                            }
                            t2 = t5;
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct o50_float *)(a4))->v) = 10.0f;
                            (((struct o4C_float *)(a4))->v) = 0.0f;
                            t2 = 0x4C;
                        }
                        t4 = t2;
                    }
                    t2 = t4;
                } else {
                    t4 = *(signed char *)((t1 + 0x8));
                    t1 = t4;
                    if (t4 == 0) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    }
                    t2 = t1;
                }
                t3 = t2;
            }
            t1 = t3;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o2C_float *)(a4))->v) = -400.0f;
            (((struct o30_float *)(a4))->v) = 0.0f;
            t1 = 0x30;
        }
        t0 = t1;
    }
    return t0;
}
