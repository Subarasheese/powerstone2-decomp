/* Straight-line functions with calls and guards (batch gen_fn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[8]; } Stk8;
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05ffe2(int, int, int, int);
int FUN_0c0600c0(int, float, float, float, float);
int FUN_0c060180(int, int, int);
int FUN_0c060428(int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c0612ee(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c120da2(int, int, int, int, Stk3);
int FUN_0c145d1c(int, int);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c1713d0(int, int, float, float);
int FUN_0c17143e(int, int, float);
int FUN_0c17149c(int, int, int);
extern int math_atan_angle16();
float math_interval_overlap(float, float, float, float);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c14676e(int a4, int a5, int a6, int a7);
int FUN_0c14e5b4(int a4, int a5);
int FUN_0c171554(void);
int FUN_0c063b40(int a4, int a5, int a6);
int FUN_0c0ef368(int a4);
int FUN_0c14f9d6(int a4, int a5);
int FUN_0c11fe4a(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c13e6c8(int a4, int a5, int a6, int a7);
int FUN_0c15e246(int a4, int a5, float f4, float f5);


int FUN_0c14e5b4(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t16;
    register int t23;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    if (t2 == 0) {
        return t2;
    }
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 != 0) {
        FUN_0c03733c(t3, 0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x4)) = 0xC14E224;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        if ((*(signed char *)(((int)stk + 16))) != 0) {
            *(unsigned int *)((t3 + 0x34)) = 0x1C00;
        }
        (((struct o48_float *)(t3))->v) = 0.0f;
        (((struct o44_float *)(t3))->v) = 0.0f;
        (((struct o40_float *)(t3))->v) = 0.0f;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (t3 + 0x28));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0x1F;
        t16 = (((struct oC4_int *)(t3))->v);
        (((struct o8C_float *)(t16))->v) = 1.0f;
        (((struct o88_float *)(t16))->v) = 1.0f;
        (((struct o84_float *)(t16))->v) = 1.0f;
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x1F;
        (((struct o84_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.0f;
        (((struct o88_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.0f;
        (((struct o8C_float *)(((((struct oC8_int *)(t3))->v))))->v) = 1.0f;
        (((struct o74_float *)(((((struct oC8_int *)(t3))->v))))->v) = 450.0f;
        *(unsigned int *)((t3 + 0x10)) = a4;
        (((struct o4C_float *)(t3))->v) = 0.0f;
        *(unsigned short *)((t3 + 0x1C)) = 0xB4;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t23 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t23));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x3B, 0x0, 0x100, (~((int)0x1 << (int)t23)), 0x0, 0x0);
        return FUN_0c07e2f4(t3, 0x65);
    }
    return t3;
}

int FUN_0c171554(void)
{
    int stk[11];
    register int t1;
    register int t3;
    register int t4;
    register int t11;
    register int t46;
    register int t13;
    register int t30;

    t1 = 0x90;
    if (((((struct o10_int *)0xC475A90)->v)) == 0) {
        t1 = 0x8C;
    }
    t3 = *(int *)((0xC475A64 + t1));
    t4 = 0x0;
    for (;;) {
        { struct mv8 { int w[8]; }; *(struct mv8 *)(((int)stk + 0)) = *(struct mv8 *)((FUN_0c05ffe2((((((struct o0_int *)0xC475A90)->v)) + 0x1), 0x0, ((((struct oC_int *)0xC475A90)->v)), t4))); }
        FUN_0c060180(t3, (((int)stk + 0) + 0x8), (*(signed char *)(((int)stk + 2))));
        t11 = *(signed char *)(((int)stk + 0));
        t46 = (FUN_0c060428(t3, ((int)stk + 0)));
        if (t11 != 0) {
            t13 = *(signed char *)(((int)stk + 0));
            switch (t13) {
            case 0:
                break;
            case 1:
                *(float *)(((int)stk + 32)) = 1.0f;
                *(float *)(((int)stk + 36)) = 0.0f;
                *(float *)(((int)stk + 40)) = 0.0f;
                break;
            case 2:
                *(float *)(((int)stk + 32)) = 0.0f;
                *(float *)(((int)stk + 36)) = 0.0f;
                *(float *)(((int)stk + 40)) = 1.0f;
                break;
            case 4:
                *(float *)(((int)stk + 32)) = 0.0f;
                *(float *)(((int)stk + 36)) = 1.0f;
                *(float *)(((int)stk + 40)) = 0.0f;
                break;
            case 3:
                *(float *)(((int)stk + 32)) = 1.0f;
                *(float *)(((int)stk + 36)) = 0.0f;
                *(float *)(((int)stk + 40)) = 1.0f;
                break;
            case 5:
                *(float *)(((int)stk + 32)) = 1.0f;
                *(float *)(((int)stk + 36)) = 1.0f;
                *(float *)(((int)stk + 40)) = 0.0f;
                break;
            case 6:
                *(float *)(((int)stk + 32)) = 0.0f;
                *(float *)(((int)stk + 36)) = 1.0f;
                *(float *)(((int)stk + 40)) = 1.0f;
                break;
            case 7:
                *(float *)(((int)stk + 32)) = 1.0f;
                *(float *)(((int)stk + 36)) = 1.0f;
                *(float *)(((int)stk + 40)) = 1.0f;
                break;
            }
            t30 = *(signed char *)(((int)stk + 1));
            if (t30 != 0) {
                if (t30 != 1) {
                    t46 = t30;
                    if (t30 != 2) {
                    } else {
                        t46 = (FUN_0c1713d0((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x20), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 20)))));
                    }
                } else {
                    t46 = (FUN_0c17149c((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x20)));
                }
            } else {
                t46 = (FUN_0c17143e((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x20), (*(float *)(((int)stk + 20)))));
            }
        }
        t4 = (t4 + 0x1);
        if ((int)t4 < (int)0xA) continue;
        break;
    }
    return t46;
}

int FUN_0c063b40(int a4, int a5, int a6)
{
    int stk[9];
    register int t0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u9;
    register float t10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    float t15;
    register int t48;
    register int t16;
    register float u32;
    register float u35;
    register float u39;
    register float u24;
    register float u25;

    *(unsigned int *)(((int)stk + 4)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC1C4B84); }
    t0 = *(int *)(((int)stk + 4));
    u1 = (((struct oC_float *)((a6 + 0x8)))->v);
    u2 = (((struct oC_float *)((t0 + 0x8)))->v);
    *(float *)(((int)stk + 0)) = (u2 + u1);
    u3 = (((struct o8_float *)((t0 + 0x8)))->v);
    u4 = (((struct o8_float *)((a6 + 0x8)))->v);
    u5 = (((struct o8_float *)(a6))->v);
    u6 = (((struct o8_float *)(t0))->v);
    u9 = ((u3 - u4) * (u3 - u4));
    u9 = u9 + ((u6 - u5)) * ((u6 - u5));
    t10 = math_signed_sqrt(u9);
    u11 = (((struct o4_float *)((a6 + 0x8)))->v);
    *(float *)(((int)stk + 8)) = u11;
    u12 = (((struct o10_float *)((a6 + 0x8)))->v);
    u13 = (((struct o4_float *)((t0 + 0x8)))->v);
    u14 = (((struct oC_float *)((t0 + 0x8)))->v);
    t15 = math_interval_overlap((u13 + u14), (u13 - u14), (u11 + u12), (u11 - u12));
    t48 = 0x0;
    if ((((u2 + u1) - t10) > 0.0f) && (t15 > 0.0f)) {
        t16 = FUN_0c0612ee(a5);
        if (t16 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x4)));
            t48 = 0x2;
        } else {
            FUN_0c0600c0((((int)stk + 4) + 0x14), ((((struct o8_float *)(t0))->v)), ((((struct o8_float *)((t0 + 0x8)))->v)), ((((struct o8_float *)(a6))->v)), ((((struct o8_float *)((a6 + 0x8)))->v)));
            if (((t15 > 9.0f) && (t15 > ((u2 + u1) - t10))) || (u24 = (((struct o4_float *)((t0 + 0x8)))->v), u25 = (((struct o4_float *)((a6 + 0x8)))->v), !(u24 > u25))) {
                u32 = ((*(float *)(((int)stk + 24))) * ((u2 + u1) - t10));
                u32 = -u32;
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + u32);
                u35 = ((*(float *)(((int)stk + 32))) * ((u2 + u1) - t10));
                u35 = -u35;
                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + u35);
                FUN_0c060c80(a5, (((int)stk + 4) + 0x8), a6);
            } else {
                u39 = t15;
                if (((((struct o4_float *)((t0 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                    u39 = (-t15);
                }
                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u39);
                FUN_0c060c80(a5, (((int)stk + 4) + 0x8), a6);
            }
            t48 = 0x1;
        }
    }
    return t48;
}

int FUN_0c0ef368(int a4)
{
    int stk[3];
    int t13;
    register int t15;
    register int t17;
    register int t19;
    register int t21;
    register float u24;
    register float u25;
    register float u26;
    register float t27;
    register int t29;
    register int t31;
    register int t33;
    register int t35;
    register int t37;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((((int)stk + 0) + 0x0))) - ((((struct o28_float *)(a4))->v)));
    (((struct o4_float *)(((int)stk + 0)))->v) = ((((((struct o4_float *)(((int)stk + 0)))->v)) - ((((struct o2C_float *)(a4))->v))) + 100.0f);
    (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o8_float *)(((int)stk + 0)))->v)) - ((((struct o30_float *)(a4))->v)));
    if ((*(float *)((((int)stk + 0) + 0x0))) == 0.0f) {
        *(float *)((((int)stk + 0) + 0x0)) = 9.99999997e-07f;
    }
    t13 = ((int (*)(Stk3, float))(math_atan_angle16))(*(Stk3 *)(((int)stk + 0)), ((-((((struct o8_float *)(((int)stk + 0)))->v))) / (*(float *)((((int)stk + 0) + 0x0)))));
    t15 = (0xFFFF & t13);
    if (0.0f > (*(float *)((((int)stk + 0) + 0x0)))) {
        t15 = ((0xFFFF & t13) + 0x8000);
    }
    t17 = *(int *)((a4 + 0x38));
    t19 = (unsigned short)((unsigned short)(0x4000 + t15) - t17);
    if (((unsigned short)((unsigned short)(0x4000 + t15) - t17) & 0x8000) != 0) {
        t19 = ((unsigned short)((unsigned short)(0x4000 + t15) - t17) | 0xFFFF0000);
    }
    t21 = 0xFFFFFDDE;
    if ((int)t19 > 0) {
        t21 = 0x222;
    }
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + t21);
    u24 = (((struct o8_float *)(((int)stk + 0)))->v);
    u25 = *(float *)((((int)stk + 0) + 0x0));
    u26 = (u24 * u24);
    u26 = u26 + u25 * u25;
    t27 = math_signed_sqrt(u26);
    t29 = ((int (*)(float))(math_atan_angle16))(((-t27) / ((((struct o4_float *)(((int)stk + 0)))->v))));
    t31 = t29;
    if (0.0f > ((((struct o4_float *)(((int)stk + 0)))->v))) {
        t31 = (t29 + 0x8000);
    }
    t33 = *(int *)((a4 + 0x34));
    t35 = (unsigned short)((-(unsigned short)(0x4000 + t31)) - t33);
    if ((0x8000 & (unsigned short)((-(unsigned short)(0x4000 + t31)) - t33)) != 0) {
        t35 = ((unsigned short)((-(unsigned short)(0x4000 + t31)) - t33) | 0xFFFF0000);
    }
    t37 = 0xFFFFFDDE;
    if ((int)t35 > 0) {
        t37 = 0x222;
    }
    *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + t37);
    return 0x4;
}

int FUN_0c14f9d6(int a4, int a5)
{
    int stk[28];
    int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t8;
    register int t11;
    register int t13;
    register int t15;
    register int t20;
    int t16;
    register float u18;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 12)) = (((*(int *)0xC542260) & 0x2) << 1);
    t2 = *(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x2));
    t3 = 0xC;
    if ((t2 != 4) && ((t2 != 5) && (t2 != 9))) {
        t3 = 0x0;
    }
    t4 = *(signed char *)(((int)stk + 12));
    t6 = 0x0;
    t7 = ((((((signed char)t3 + t4) << 1) + ((signed char)t3 + t4)) << 2) + 0xC202EF8);
    t8 = (((int)stk + 8) + 0x8);
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t8) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        nlAddVector3op(t8, t8, t7);
        t6 = (t6 + 0x1);
        t7 = (t7 + 0xC);
        t8 = (t8 + 0xC);
        if ((int)(signed char)t6 >= (int)0x8) {
            break;
        }
    }
    t11 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t11 & 0x7) << 1) + (t11 & 0x7)) << 2) + 0xC2030D8);
    t13 = *(signed char *)(((int)stk + 12));
    *(int *)((int)stk + 0) = ((((t13 << 1) + t13) << 2) + 0xC202E68);
    t15 = FUN_0c1502e8(a4, 0x8, 0x2, (((int)stk + 0) + 0x10), ((((t13 << 1) + t13) << 2) + 0xC202E68), (((((t11 & 0x7) << 1) + (t11 & 0x7)) << 2) + 0xC2030D8));
    t20 = t15;
    if (t15 != 0) {
        t16 = *(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x2));
        u18 = 1.20000005f;
        if ((t16 != 4) && ((t16 != 5) && (t16 != 9))) {
            u18 = 1.0f;
        }
        (((struct o10_float *)((0x41C + t15)))->v) = u18;
        *(unsigned short *)((t15 + 0x1C)) = (*(signed char *)((0x135 + (((short)(signed char)a4 * (short)0x3938) + 0xC532498))));
        *(unsigned short *)((t15 + 0x1E)) = 0x0;
        t20 = 0x0;
    }
    return t20;
}



