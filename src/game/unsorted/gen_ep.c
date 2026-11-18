/* Straight-line functions with calls and guards (batch gen_ep): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3770_int { char p[0x3770]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c05261c(int);
int FUN_0c0585a8(int, int, int, Stk3, float);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c059e0e(int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c07c19c(int);
int FUN_0c07e420(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c52c4(int, int, int);
int FUN_0c0c8c08(int, int, int, int);
int FUN_0c0c8c36(int, int, int, int);
int FUN_0c0d6fcc(int);
int FUN_0c0d704c(int, int, int);
int FUN_0c0d7390(int);
int FUN_0c0d7404(int);
int FUN_0c0ece48(int);
int FUN_0c0ece6e(int);
int FUN_0c0ece8e(int);
int FUN_0c0ecec4(int);
int FUN_0c0ecf3c(int);
int FUN_0c0ed05c(int);
int FUN_0c0ed126(int);
int FUN_0c0ed16c(int);
int FUN_0c0ed1d2(int);
int FUN_0c0ed222(int);
int FUN_0c0ed268(int);
int FUN_0c0ed2b8(int);
int FUN_0c14ca80(int);
extern int FUN_0c150010();
int FUN_0c15009e(int, float, float, float, float, float);
extern float FUN_0c17c450();
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int mdl_vtx_get_pos(int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_set_pos(int);
int nlAddVector3op(int, int, int);
float nlInnerProduct(int, int);
int nlRand(void);
int nlSubVector3op(int, int, int);
int thunk_FUN_0c05abb2(int, int);
float FUN_0c142bdc(int a4, int a5, int a6);
int FUN_0c0dfb68(int a4, int a5, int a6, int a7);
int FUN_0c125254(int a4, int a5, int a6, int a7);
int FUN_0c0ed33c(int a4, int a5, int a6, int a7);
int FUN_0c14cad2(int a4, int a5, int a6, int a7, float f4);
int FUN_0c11a89a(int a4, int a5, int a6, int a7);
int FUN_0c04387a(int a4, int a5, int a6, int a7);
int FUN_0c158340(int a4, int a5, int a6, int a7);
int FUN_0c163d06(int a4, int a5, int a6, int a7);
int FUN_0c0d7104(int a4, int a5, int a6, int a7);
int FUN_0c167764(int a4, int a5, int a6, int a7);
int FUN_0c0fd368(int a4, int a5, int a6);

float FUN_0c142bdc(int a4, int a5, int a6)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R8;
    register int R10;
    register int R11;
    register int R12;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register float F13;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_6 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_5 = *(signed char *)((v0_6 + 0x14));
    v0_4 = (v0_5);
    v0_3 = ((0x41C + v0_6));
    v0_2 = (v0_6);
    w0_0 = (1.0f);
    if ((v0_5 == 0)) goto L_C142C3C;
    if ((v0_4 == 1)) goto L_C142CD0;
    L_C142E52:;
    return F0;
    L_C142CD0:;
    nlSubVector3op((((int)stk + 0) + 0xC), (v0_2 + 0x28), v0_3);
    w0_1 = *(float *)(((int)stk + 12));
    w0_2 = *(float *)(((int)stk + 20));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    w0_1 = math_signed_sqrt(w0_2);
    *(unsigned int *)((v0_2 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20)))));
    w0_2 = (w0_1);
    if ((w0_1 != 0.0f)) goto L_C142D0E;
    w0_2 = (9.99999975e-06f);
    L_C142D0E:;
    *(unsigned int *)((v0_2 + 0x34)) = (math_atan_angle16(((-(*(float *)(((int)stk + 16)))) / w0_2)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_3) = *(struct mv3 *)((v0_2 + 0x28)); }
    if (((*(signed char *)((v0_2 + 0x131))) != 0)) goto L_C142D96;
    if (((*(signed char *)((v0_2 + 0x132))) != 0)) goto L_C142D96;
    v0_4 = (0x404);
    if ((((((struct o404_int *)(v0_2))->v)) == 0)) goto L_C142DE8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((0x178 + v0_2)); }
    v0_3 = (((float (*)(int))(FUN_0c17c450))((((int)stk + 0) + 0xC))) == 0.0f;
    if (v0_3) goto L_C142DE8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_2 + 0x4C)); }
    v0_3 = (((float (*)(int, Stk3))(FUN_0c17c450))(((int)stk + 0), *(Stk3 *)(((int)stk + 0)))) == 0.0f;
    if (v0_3) goto L_C142DE8;
    v0_3 = !(-0.0871559978f > (nlInnerProduct((((int)stk + 0) + 0xC), ((int)stk + 0))));
    if (v0_3) goto L_C142DE8;
    FUN_0c059e0e((*(signed char *)((v0_2 + 0x1))), 0x4B, (v0_2 + 0x28));
    L_C142D96:;
    v0_3 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((v0_2 + 0x28), v0_0, v0_1, w0_0, w0_0, w0_0, w0_0);
    L_C142E38:;
    v0_4 = ((FUN_0c03f346(v0_2, v0_0, v0_1, R7)));
    goto L_C142E52;
    L_C142DE8:;
    v0_3 = *(short *)((v0_2 + 0x1E));
    *(unsigned short *)((v0_2 + 0x1E)) = (v0_3 + 0x1);
    if (((int)(short)(v0_3 + 0x1) > (int)0xA)) goto L_C142E2C;
    v0_3 = (((struct oC8_int *)(v0_2))->v);
    (((struct o8C_float *)(v0_3))->v) = (((((struct o8C_float *)(v0_3))->v)) + 0.200000003f);
    v0_3 = (((struct oC8_int *)(v0_2))->v);
    FPUL_ = (0x3E4CCCCD);
    if ((!(((((struct o84_float *)(v0_3))->v)) > ((((struct o8C_float *)(v0_3))->v))))) goto L_C142E20;
    v0_4 = (0x84);
    v0_6 = (((((struct oC8_int *)(v0_2))->v)));
    L_C142E26:;
    (((struct o24_float *)(v0_6))->v) = (*(float *)((v0_6 + v0_4)));
    L_C142E2C:;
    v0_3 = *(short *)((v0_2 + 0x1C));
    *(unsigned short *)((v0_2 + 0x1C)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C142E42;
    goto L_C142E38;
    L_C142E42:;
    v0_4 = ((nlAddVector3op((v0_2 + 0x28), (v0_2 + 0x28), (v0_2 + 0x4C))));
    goto L_C142E52;
    L_C142E20:;
    v0_4 = (0x8C);
    v0_6 = (((((struct oC8_int *)(v0_2))->v)));
    goto L_C142E26;
    L_C142C3C:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_2))->v) = 0x1;
    v0_4 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((v0_2 + 0x28), v0_0, v0_1, w0_0, w0_0, w0_0, w0_0);
    (((struct o74_float *)(((((struct oC8_int *)(v0_2))->v))))->v) = -5.5f;
    (((struct o8C_float *)(((((struct oC8_int *)(v0_2))->v))))->v) = 0.0f;
    v0_4 = (((struct oC8_int *)(v0_2))->v);
    *(unsigned short *)((v0_4 + 0x6)) = ((*(short *)((v0_4 + 0x6))) | 0x1000);
    v0_4 = (0x22);
    if ((((((struct o22_short *)(v0_2))->v)) != 0)) goto L_C142CA8;
    v0_4 = ((FUN_0c059e0e((*(signed char *)((v0_2 + 0x1))), 0x40, (v0_2 + 0x28))));
    L_C142CC4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_3) = *(struct mv3 *)((v0_2 + 0x28)); }
    goto L_C142CD0;
    L_C142CA8:;
    v0_5 = *(short *)((v0_2 + v0_4));
    v0_4 = (v0_5);
    if ((v0_5 != 1)) goto L_C142CC4;
    v0_4 = ((FUN_0c059e9a((((short)(*(signed char *)((v0_2 + 0x1))) * (short)0x3938) + 0xC532498), 0x20, (v0_2 + 0x28))));
    goto L_C142CC4;
}

int FUN_0c0dfb68(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t9;
    register int t17;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t56;
    register int t57;
    register int t58;
    register int t61;
    register int t70;
    register int t94;
    register int t18;
    float u65;
    register float u66;
    int t78;
    register int t79;
    int t87;

    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)0x4) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 2);
        *(unsigned int *)(((((int)stk + 0) + 0x10) + t2)) = t1;
        t1 = (t1 + 0x1);
    }
    t4 = t1;
    t5 = a5;
    t6 = a6;
    t7 = a7;
    t9 = 0xA;
    for (;;) {
        if (t9 == 0) {
            break;
        }
        t2 = (nlRand());
        if ((int)t2 >= 0) {
            t2 = (t2 & 0x3);
        } else {
            t2 = (~t2);
            t2 = (t2 + 0x1);
            t2 = (t2 & 0x3);
            t2 = (~t2);
            t2 = (t2 + 0x1);
        }
        t23 = t2;
        t2 = (nlRand());
        if ((int)t2 >= 0) {
            t2 = (t2 & 0x3);
        } else {
            t2 = (~t2);
            t2 = (t2 + 0x1);
            t2 = (t2 & 0x3);
            t2 = (~t2);
            t2 = (t2 + 0x1);
        }
        t6 = t2;
        t5 = t23;
        t6 = (t6 << 2);
        t4 = t2;
        t5 = (t5 << 2);
        t6 = (t6 + (((int)stk + 0) + 0x10));
        t5 = (t5 + (((int)stk + 0) + 0x10));
        t19 = (*(int *)((t6 + 0x0)));
        t7 = (*(int *)((t5 + 0x0)));
        t9 = (t9 - 1);
        *(unsigned int *)((t5 + 0x0)) = t19;
        *(unsigned int *)((t6 + 0x0)) = t7;
    }
    t17 = t2;
    t20 = t4;
    t21 = t7;
    t22 = 0x0;
    t24 = t9;
    t25 = 0xC179AC0;
    for (;;) {
        if ((int)t22 >= (int)0x3) {
            break;
        }
        t20 = t22;
        t20 = (t20 + 0x1);
        t21 = t20;
        t21 = (t21 << 2);
        t25 = t22;
        t21 = (t21 + (((int)stk + 0) + 0x10));
        t25 = (t25 << 2);
        t23 = t21;
        t24 = t21;
        t25 = (t25 + (((int)stk + 0) + 0x10));
        if ((int)t20 < (int)0x4) {
            t26 = 0x3;
            for (;;) {
                t17 = t20;
                t17 = (t17 << 2);
                t18 = 0x371D;
                t17 = (*(int *)(((((int)stk + 0) + 0x10) + t17)));
                t17 = (t17 * 0x3938);
                t17 = (t17 + 0xC532498);
                t17 = (*(signed char *)((t18 + t17)));
                if (t17 == 1) {
                    t17 = (*(int *)((t25 + 0x0)));
                    t26 = 0x371D;
                    t17 = (t17 * 0x3938);
                    t17 = (t17 + 0xC532498);
                    t17 = (*(signed char *)((t26 + t17)));
                    if (t17 != 1) {
                        t26 = (*(int *)((t21 + 0x0)));
                        *(unsigned int *)(((int)stk + 0)) = t26;
                        t19 = (*(int *)((t25 + 0x0)));
                        *(unsigned int *)((t21 + 0x0)) = t19;
                        t26 = (*(int *)(((int)stk + 0)));
                        *(unsigned int *)((t25 + 0x0)) = t26;
                    }
                }
                t17 = (*(int *)((t23 + 0x0)));
                t18 = 0x3715;
                t17 = (t17 * 0x3938);
                t17 = (t17 + 0xC532498);
                t17 = (*(signed char *)((t18 + t17)));
                if (t17 != 34) {
                    t17 = (*(int *)((t25 + 0x0)));
                    t26 = 0x3715;
                    t17 = (t17 * 0x3938);
                    t17 = (t17 + 0xC532498);
                    t17 = (*(signed char *)((t26 + t17)));
                    if (t17 == 34) {
                        t26 = (*(int *)((t24 + 0x0)));
                        *(unsigned int *)(((int)stk + 0)) = t26;
                        t19 = (*(int *)((t25 + 0x0)));
                        *(unsigned int *)((t24 + 0x0)) = t19;
                        t26 = (*(int *)(((int)stk + 0)));
                        *(unsigned int *)((t25 + 0x0)) = t26;
                    }
                }
                t20 = (t20 + 0x1);
                t23 = (t23 + 0x4);
                t24 = (t24 + 0x4);
                t21 = (t21 + 0x4);
                if ((int)t20 >= (int)0x4) {
                    break;
                }
            }
        }
        t22 = (t22 + 0x1);
    }
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t52 = 0x0;
    t53 = 0x3;
    t54 = (((int)stk + 0) + 0x10);
    t55 = (((int)stk + 0) + 0x10);
    t56 = t23;
    t57 = (((int)stk + 0) + 0x10);
    t58 = (((int)stk + 0) + 0x10);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) < (int)0x4) {
            t61 = *(int *)(((((int)stk + 0) + 0x10) + ((*(int *)(((int)stk + 0))) << 2)));
            if (!(((((struct o160_float *)(((t61 * 0x3938) + 0xC532498)))->v)) > 0.0f)) {
                t55 = (t55 + 0x4);
                t57 = (t57 + 0x4);
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                t58 = (t58 + 0x4);
                continue;
            }
            t54 = ((int)stk + 0);
            t53 = ((t61 * 0x3938) + 0xC532498);
            t54 = (t54 + 0x4);
            t53 = (t53 + 0x28);
            t52 = t54;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t52) = *(struct mv3 *)(t53); }
            if ((((*(signed char *)((((t61 * 0x3938) + 0xC532498) + 0x371D))) == 1) && (u65 = (((struct o8_float *)(t54))->v), -640.0f > u65)) || (u66 = (((struct o8_float *)(t54))->v), -650.0f > u66)) {
                t70 = *(short *)((a4 + 0x1E));
                t56 = 0xC540978;
                t54 = 0x1;
                if (t70 == 0) {
                    t53 = (*(int *)((t57 + 0x0)));
                    t52 = t54;
                    (((struct o16_uchar *)(a4))->v) = t53;
                    t52 = ((int)t52 << (int)(*(int *)((t57 + 0x0))));
                    (((struct o22_ushort *)(t56))->v) = t52;
                    *(unsigned short *)((a4 + 0x1E)) = t54;
                    t54 = ((int)t54 << (int)(*(int *)((t57 + 0x0))));
                    (((struct o12E_ushort *)(a4))->v) = t54;
                    t54 = 0xC5421F8;
                    if ((*(signed char *)((t54 + 0x17F))) != 0) {
                        break;
                    }
                    t55 = (t55 + 0x4);
                    t57 = (t57 + 0x4);
                    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                    t58 = (t58 + 0x4);
                    continue;
                }
                if ((t70 == 1) && (t78 = *(int *)((t55 + 0x0)), t79 = *(signed char *)((a4 + 0x16)), t53 = t79, t53 != t78)) {
                    t52 = (*(int *)((t58 + 0x0)));
                    t53 = t54;
                    (((struct o17_uchar *)(a4))->v) = t52;
                    t52 = ((((struct o22_short *)(t56))->v));
                    t53 = ((int)t53 << (int)(*(int *)((t58 + 0x0))));
                    t52 = (t52 | t53);
                    t53 = t54;
                    (((struct o22_ushort *)(t56))->v) = t52;
                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                    t52 = ((((struct o12E_short *)(a4))->v));
                    t53 = ((int)t53 << (int)(*(int *)((t58 + 0x0))));
                    t52 = (t52 | t53);
                    (((struct o12E_ushort *)(a4))->v) = t52;
                    (((struct o12A_ushort *)(a4))->v) = ((~(*(short *)(((0x12A + a4) + 0x4)))) & 0xF);
                    if (((*(signed char *)((((t61 * 0x3938) + 0xC532498) + 0x371D))) == 1) && (t87 = (((struct o3770_int *)(((t61 * 0x3938) + 0xC532498)))->v), t53 = t87, t53 != 0)) {
                        t53 = 0x22;
                        t53 = (t53 + t56);
                        t52 = (*(short *)((t53 + 0x0)));
                        t52 = (t52 | ((int)t54 << (int)(*(signed char *)((((((struct o3770_int *)(((t61 * 0x3938) + 0xC532498)))->v)) + 0x1)))));
                        *(unsigned short *)((t53 + 0x0)) = t52;
                        t54 = ((int)t54 << (int)(*(signed char *)((((((struct o3770_int *)(((t61 * 0x3938) + 0xC532498)))->v)) + 0x1))));
                        t94 = (((((struct o12E_short *)(a4))->v)) | t54);
                        t54 = 0x12A;
                        (((struct o12E_ushort *)(a4))->v) = t94;
                        t54 = (t54 + a4);
                        *(unsigned short *)((t54 + 0x0)) = ((~(*(short *)((t54 + 0x4)))) & 0xF);
                        return 0x1;
                    }
                    return 0x1;
                }
                t55 = (t55 + 0x4);
                t57 = (t57 + 0x4);
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                t58 = (t58 + 0x4);
                continue;
            }
            t55 = (t55 + 0x4);
            t57 = (t57 + 0x4);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
            t58 = (t58 + 0x4);
            continue;
        }
        return 0x0;
    }
    (((struct o12A_ushort *)(a4))->v) = ((~(*(short *)(((0x12A + a4) + 0x4)))) & 0xF);
    return 0x1;
}

int FUN_0c125254(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((signed char)a5 != 0) {
        if ((signed char)a5 != 1) {
            if ((signed char)a5 == 2) {
                t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
                t1 = t0;
                if (t0 == 0) {
                } else {
                    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    (((struct oA8_uchar *)(t0))->v) = 0x1;
                    (((struct oAC_ushort *)(t0))->v) = 0x1F;
                    (((struct oA9_uchar *)(t0))->v) = 0x21;
                    *(unsigned int *)((t0 + 0x4)) = 0xC12512E;
                    *(unsigned int *)((t0 + 0x10)) = a4;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
                    (((struct o48_float *)(t0))->v) = 0.699999988f;
                    (((struct o44_float *)(t0))->v) = 0.699999988f;
                    (((struct o40_float *)(t0))->v) = 0.699999988f;
                    *(unsigned short *)((t0 + 0x1C)) = 0x0;
                    t2 = (((struct oC4_int *)(t0))->v);
                    FUN_0c03744a(t2, 0x2, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                    *(unsigned char *)((t2 + 0x0)) = 0x1;
                    *(unsigned short *)((t2 + 0x6)) = 0xF;
                    (((struct o8C_float *)(t2))->v) = 1.0f;
                    (((struct o88_float *)(t2))->v) = 1.0f;
                    (((struct o84_float *)(t2))->v) = 1.0f;
                    t1 = 0x84;
                }
                t0 = t1;
            } else {
                t1 = (signed char)a5;
                if ((signed char)a5 == 3) {
                    t2 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
                    t3 = t2;
                    if (t2 != 0) {
                        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        (((struct oA8_uchar *)(t2))->v) = 0x1;
                        (((struct oAC_ushort *)(t2))->v) = 0x1F;
                        (((struct oA9_uchar *)(t2))->v) = 0x21;
                        *(unsigned int *)((t2 + 0x4)) = 0xC1251CE;
                        *(unsigned int *)((t2 + 0x10)) = a4;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
                        (((struct o48_float *)(t2))->v) = 0.600000024f;
                        (((struct o44_float *)(t2))->v) = 0.600000024f;
                        (((struct o40_float *)(t2))->v) = 0.600000024f;
                        *(unsigned short *)((t2 + 0x1C)) = 0x0;
                        t4 = (((struct oC4_int *)(t2))->v);
                        FUN_0c03744a(t4, 0x3, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                        *(unsigned char *)((t4 + 0x0)) = 0x1;
                        *(unsigned short *)((t4 + 0x6)) = 0xF;
                        t3 = 0xF;
                    }
                    t1 = t3;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
            t2 = t0;
            if (t0 == 0) {
            } else {
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                (((struct oA8_uchar *)(t0))->v) = 0x1;
                (((struct oAC_ushort *)(t0))->v) = 0x1F;
                (((struct oA9_uchar *)(t0))->v) = 0x21;
                *(unsigned int *)((t0 + 0x4)) = 0xC1250A8;
                *(unsigned int *)((t0 + 0x10)) = a4;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
                (((struct o48_float *)(t0))->v) = 0.699999988f;
                (((struct o44_float *)(t0))->v) = 0.699999988f;
                (((struct o40_float *)(t0))->v) = 0.699999988f;
                *(unsigned short *)((t0 + 0x1C)) = 0x0;
                t3 = (((struct oC4_int *)(t0))->v);
                FUN_0c03744a(t3, 0x1, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                *(unsigned char *)((t3 + 0x0)) = 0x1;
                *(unsigned short *)((t3 + 0x6)) = 0xF;
                (((struct o8C_float *)(t3))->v) = 1.0f;
                (((struct o88_float *)(t3))->v) = 1.0f;
                (((struct o84_float *)(t3))->v) = 1.0f;
                t2 = 0x84;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
        t2 = t1;
        if (t1 == 0) {
        } else {
            *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            (((struct oA8_uchar *)(t1))->v) = 0x1;
            (((struct oAC_ushort *)(t1))->v) = 0xF;
            (((struct oA9_uchar *)(t1))->v) = 0x21;
            *(unsigned int *)((t1 + 0x4)) = 0xC124F0C;
            *(unsigned int *)((t1 + 0x10)) = a4;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            (((struct o48_float *)(t1))->v) = 1.0f;
            (((struct o44_float *)(t1))->v) = 1.0f;
            (((struct o40_float *)(t1))->v) = 1.0f;
            *(unsigned short *)((t1 + 0x1C)) = 0x0;
            t3 = (((struct oC4_int *)(t1))->v);
            FUN_0c03744a(t3, 0x0, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x6)) = 0x31;
            (((struct o8C_float *)(t3))->v) = 1.5f;
            (((struct o88_float *)(t3))->v) = 1.5f;
            (((struct o84_float *)(t3))->v) = 1.5f;
            t2 = 0x84;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0ed33c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)(*(signed char *)0xC54098D) >= (int)0xE) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        FUN_0c0ed2b8(a4);
        t0 = *(signed char *)((a4 + 0x15));
        switch (t0) {
        case 0:
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x1A4;
            if ((*(short *)((a4 + 0x1C))) != 0) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            }
            if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            } else {
                if ((int)(*(signed char *)0xC54098D) > (int)0xE) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o5C_float *)(a4))->v) = -10.0f;
                }
            }
            break;
        case 1:
            if ((*(short *)((a4 + 0x1C))) != 0) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            }
            if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            } else {
                if ((int)(*(signed char *)0xC54098D) > (int)0xE) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o5C_float *)(a4))->v) = -10.0f;
                }
            }
            break;
        case 2:
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            if (!(((((struct o2C_float *)(a4))->v)) > 8400.0f)) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o2C_float *)(a4))->v) = 8400.0f;
                FUN_0c15009e((a4 + 0x28), 1.0f, 1.0f, 1.0f, 30.0f, 20.0f);
                FUN_0c05261c((*(int *)0xC241C40));
                thunk_FUN_0c05abb2(0x50, (a4 + 0x28));
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                FUN_0c07c19c(0x11);
            }
            break;
        case 3:
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
                t1 = FUN_0c042fe0();
                if (t1 != 0) {
                    FUN_0c059c7a(0xE, 0x0);
                }
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o50_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
                *(unsigned short *)(((0x41C + a4) + 0x6)) = 0x0;
                *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x0;
                *(unsigned short *)(((0x41C + a4) + 0xA)) = 0x0;
            }
            break;
        case 4:
            FUN_0c0ecf3c(a4);
            FUN_0c0ece48(a4);
            break;
        case 5:
            FUN_0c0ed126(a4);
            break;
        case 6:
            FUN_0c0ed16c(a4);
            break;
        case 7:
            FUN_0c0ed1d2(a4);
            break;
        case 8:
            FUN_0c0ed222(a4);
            break;
        case 9:
            FUN_0c0ed268(a4);
            break;
        case 99:
            FUN_0c0ecec4(a4);
            break;
        case 10:
            FUN_0c0ed05c(a4);
            break;
        default:
            FUN_0c0ecf3c(a4);
            FUN_0c0ece48(a4);
            break;
        }
        FUN_0c0ece6e(a4);
        return FUN_0c0ece8e(a4);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
        (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) + 0x64);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1CCF7C); }
    *(unsigned int *)((a4 + 0x38)) = 0x1555;
    FUN_0c07e420(a4, 0x4);
    (((struct o128_ushort *)(a4))->v) = 0x40;
    t0 = (((struct oC4_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1F);
    FUN_0c0ed2b8(a4);
    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x1A4;
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            if ((int)(*(signed char *)0xC54098D) > (int)0xE) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o5C_float *)(a4))->v) = -10.0f;
            }
        }
        break;
    case 1:
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            if ((int)(*(signed char *)0xC54098D) > (int)0xE) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o5C_float *)(a4))->v) = -10.0f;
            }
        }
        break;
    case 2:
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        if (!(((((struct o2C_float *)(a4))->v)) > 8400.0f)) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o2C_float *)(a4))->v) = 8400.0f;
            FUN_0c15009e((a4 + 0x28), 1.0f, 1.0f, 1.0f, 30.0f, 20.0f);
            FUN_0c05261c((*(int *)0xC241C40));
            thunk_FUN_0c05abb2(0x50, (a4 + 0x28));
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            FUN_0c07c19c(0x11);
        }
        break;
    case 3:
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
            t1 = FUN_0c042fe0();
            if (t1 != 0) {
                FUN_0c059c7a(0xE, 0x0);
            }
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o50_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
            *(unsigned short *)(((0x41C + a4) + 0x6)) = 0x0;
            *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x0;
            *(unsigned short *)(((0x41C + a4) + 0xA)) = 0x0;
        }
        break;
    case 4:
        FUN_0c0ecf3c(a4);
        FUN_0c0ece48(a4);
        break;
    case 5:
        FUN_0c0ed126(a4);
        break;
    case 6:
        FUN_0c0ed16c(a4);
        break;
    case 7:
        FUN_0c0ed1d2(a4);
        break;
    case 8:
        FUN_0c0ed222(a4);
        break;
    case 9:
        FUN_0c0ed268(a4);
        break;
    case 99:
        FUN_0c0ecec4(a4);
        break;
    case 10:
        FUN_0c0ed05c(a4);
        break;
    default:
        FUN_0c0ecf3c(a4);
        FUN_0c0ece48(a4);
        break;
    }
    FUN_0c0ece6e(a4);
    return FUN_0c0ece8e(a4);
}

int FUN_0c14cad2(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register int R11;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_2 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = a7;
    w0_0 = f4;
    v0_6 = *(signed char *)((v0_2 + 0x14));
    v0_1 = (v0_6);
    v0_0 = (v0_2);
    v0_2 = (((*(int *)((v0_2 + 0x10))) + 0x38F8));
    if ((v0_6 == 0)) goto L_C14CAF4;
    if ((v0_1 == 1)) goto L_C14CB12;
    v0_1 = ((FUN_0c03f346(v0_0, v0_3, v0_4, v0_5)));
    L_C14CD38:;
    return v0_1;
    L_C14CB12:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    v0_3 = (0xC179AC0);
    v0_3 = (0xC17C110);
    if ((v0_2 == 0)) goto L_C14CB2E;
    if ((v0_1 == 1)) goto L_C14CC08;
    if ((v0_1 != 2)) goto L_C14CB2A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((short)((((struct o22_short *)(v0_0))->v)) * (short)0x3938) + 0xC5324C0)); }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((((struct o0_float *)0xC14CE20)->v)));
    FUN_0c0585a8(v0_0, ((int)stk + 0), 0x2D8, *(Stk3 *)(((int)stk + 0)), ((((struct o4_float *)0xC14CE20)->v)));
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C14CD06;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x1E;
    L_C14CD06:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    L_C14CD1A:;
    FUN_0c14ca80(v0_0);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C14CD38;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    v0_1 = (0x14);
    goto L_C14CD38;
    L_C14CB2A:;
    goto L_C14CD06;
    L_C14CC08:;
    v0_2 = (int)((int)(nlRand()) % (int)0x3);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C14CC20;
    if (!((v0_1 == 1))) goto L_C14CC70;
    v0_2 = nlRand();
    v0_1 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C14CC54;
    v0_1 = ((v0_1 & 0x1));
    goto L_C14CC5E;
    L_C14CC70:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C14CD1A;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x3C;
    goto L_C14CD1A;
    L_C14CC5E:;
    if ((v0_1 == 0)) goto L_C14CC68;
    w0_0 = (-0.0500000007f);
    L_C14CC6C:;
    v0_1 = (0x5C);
    L_C14CC6E:;
    *(float *)((v0_0 + v0_1)) = w0_0;
    goto L_C14CC70;
    L_C14CC68:;
    w0_0 = (0.0799999982f);
    goto L_C14CC6C;
    L_C14CC54:;
    v0_1 = (((~(((~v0_1) + 0x1) & 0x1)) + 0x1));
    goto L_C14CC5E;
    L_C14CC20:;
    v0_2 = nlRand();
    v0_1 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C14CC2C;
    v0_1 = ((v0_1 & 0x1));
    L_C14CC36:;
    if ((v0_1 == 0)) goto L_C14CC40;
    w0_0 = (-0.100000001f);
    L_C14CC44:;
    v0_1 = (0x58);
    goto L_C14CC6E;
    L_C14CC40:;
    w0_0 = (0.100000001f);
    goto L_C14CC44;
    L_C14CC2C:;
    v0_1 = (((~(((~v0_1) + 0x1) & 0x1)) + 0x1));
    goto L_C14CC36;
    L_C14CB2E:;
    v0_2 = (int)((int)(nlRand()) % (int)0x3);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C14CB46;
    if ((v0_1 == 1)) goto L_C14CB6E;
    v0_1 = (0x54);
    w0_0 = (30.0f);
    L_C14CBCE:;
    *(float *)((v0_0 + v0_1)) = w0_0;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C14CBF4;
    goto L_C14CD1A;
    L_C14CBF4:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x78;
    (((struct o54_float *)(v0_0))->v) = 0.0f;
    goto L_C14CD1A;
    L_C14CB6E:;
    v0_2 = nlRand();
    v0_1 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C14CBAC;
    v0_1 = ((v0_1 & 0x1));
    L_C14CBB6:;
    if ((v0_1 == 0)) goto L_C14CBC0;
    w0_0 = (-0.0500000007f);
    L_C14CBC4:;
    v0_1 = (0x5C);
    goto L_C14CBCE;
    L_C14CBC0:;
    w0_0 = (0.0500000007f);
    goto L_C14CBC4;
    L_C14CBAC:;
    v0_1 = (((~(((~v0_1) + 0x1) & 0x1)) + 0x1));
    goto L_C14CBB6;
    L_C14CB46:;
    v0_2 = nlRand();
    v0_1 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C14CB52;
    v0_1 = ((v0_1 & 0x1));
    L_C14CB5C:;
    if ((v0_1 == 0)) goto L_C14CB66;
    w0_0 = (-0.100000001f);
    L_C14CB6A:;
    v0_1 = (0x58);
    goto L_C14CBCE;
    L_C14CB66:;
    w0_0 = (0.100000001f);
    goto L_C14CB6A;
    L_C14CB52:;
    v0_1 = (((~(((~v0_1) + 0x1) & 0x1)) + 0x1));
    goto L_C14CB5C;
    L_C14CAF4:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x12C;
    *(unsigned short *)((v0_0 + 0x1E)) = 0xA;
    (((struct o20_ushort *)(v0_0))->v) = 0x0;
    (((struct o22_ushort *)(v0_0))->v) = (*(signed char *)((v0_2 + 0x1B)));
    goto L_C14CB12;
}

int FUN_0c11a89a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(short *)((a4 + 0x1C));
            if (((int)t1 >= 0) && ((int)t1 <= (int)0xA)) {
                FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
                FUN_0c0588bc((a4 + 0x40), 0xC291EF8, 0xC291EEC, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
            }
            t1 = *(short *)((a4 + 0x1C));
            if (((int)t1 >= (int)0xA) && ((int)t1 <= (int)0x14)) {
                FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
                FUN_0c0588bc((a4 + 0x40), 0xC291F04, 0xC291EF8, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            t2 = (short)(t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0x14) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t2 = 0x14;
            }
            return t2;
        }
        if (t0 == 99) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x32, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x21F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    t0 = nlRand();
    t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0xF);
    }
    t0 = nlRand();
    t2 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t2 = (t0 & 0xF);
    }
    u0 = (((float)t2 * 360.0f) / 16.0f);
    u1 = ((u0 * 65536.0f) / 360.0f);
    u0 = (((float)t1 * 50.0f) / 16.0f);
    u2 = ((((struct o28_float *)(a4))->v));
    u2 = u2 + u0 * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
    (((struct o28_float *)(a4))->v) = u2;
    u0 = (((float)t1 * 50.0f) / 16.0f);
    u2 = ((((struct o2C_float *)(a4))->v));
    u2 = u2 + u0 * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
    (((struct o2C_float *)(a4))->v) = u2;
    t0 = nlRand();
    t2 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t2 = (t0 & 0xF);
    }
    u0 = (((float)t2 * 360.0f) / 16.0f);
    u1 = math_sin_angle16((0xFFFF & (int)((((u0 * 65536.0f) / 360.0f)) + 0.5f)));
    u0 = (((float)t1 * 50.0f) / 16.0f);
    u2 = ((((struct o30_float *)(a4))->v));
    u2 = u2 + u0 * u1;
    (((struct o30_float *)(a4))->v) = u2;
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= 0) && ((int)t0 <= (int)0xA)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        FUN_0c0588bc((a4 + 0x40), 0xC291EF8, 0xC291EEC, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0xA) && ((int)t0 <= (int)0x14)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
        FUN_0c0588bc((a4 + 0x40), 0xC291F04, 0xC291EF8, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x14) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c04387a(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register float u6;
    register int t11;
    register int t12;
    register int t14;
    register int t15;
    register int t16;
    register float u29;
    register float t34;
    register float u36;
    register float u37;
    register int t60;
    register int t61;
    register int t63;
    register int t64;
    register int t73;
    register int t44;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t44 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x222);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x16C);
            u6 = 0.5f;
            u6 = u6 + 0.300000012f * (math_sin_angle16((*(short *)((a4 + 0x1E)))));
            (((struct oBC_float *)(a4))->v) = u6;
            (((struct oB8_float *)(a4))->v) = u6;
            (((struct oB4_float *)(a4))->v) = u6;
            t11 = *(int *)(((((((((*(signed char *)((a4 + 0x2))) << 1) + 0x58) << 2) << 2) << 1) + ((*(int *)0xC4B410C) + 0x10)) + 0x1C));
            *(unsigned int *)(((int)stk + 20)) = t11;
            t12 = *(int *)((t11 + 0x0));
            *(unsigned int *)(((int)stk + 4)) = t12;
            mdl_vtx_iter_begin(t12, t12);
            t14 = 0x0;
            t15 = 0x0;
            for (;;) {
                t16 = mdl_vtx_iter_next();
                if (t16 != 0) {
                    break;
                }
                mdl_vtx_get_pos((((int)stk + 4) + 0x18));
                t15 = t14;
                t15 = (t15 << 1);
                t15 = (t15 + t14);
                t15 = (t15 << 2);
                if (((((struct o4_float *)((t15 + 0xC40DDB8)))->v)) > 10.0f) {
                    *(float *)(((int)stk + 12)) = (*(float *)(((t15 + 0xC40DDB8) + 0x0)));
                    *(float *)(((int)stk + 8)) = ((((struct o8_float *)((t15 + 0xC40DDB8)))->v));
                    if ((*(float *)(((int)stk + 12))) == 0.0f) {
                        *(float *)(((int)stk + 12)) = 9.99999997e-07f;
                    }
                    if ((*(float *)(((int)stk + 8))) == 0.0f) {
                        *(float *)(((int)stk + 8)) = 9.99999997e-07f;
                    }
                    *(unsigned int *)(((int)stk + 4)) = (unsigned short)(math_atan_angle16(((*(float *)(((int)stk + 12))) / (*(float *)(((int)stk + 8))))));
                    t15 = (t15 + 0xC40DDB8);
                    *(unsigned int *)(((int)stk + 16)) = t15;
                    u29 = (((struct o4_float *)(t15))->v);
                    *(float *)(((int)stk + 24)) = u29;
                    *(float *)(((int)stk + 0)) = u29;
                    t34 = math_cos_angle16((int)((float)(*(short *)((a4 + 0x1C))) + ((((float)(*(int *)(((int)stk + 4))) * (*(float *)0xC043B58)) / 56.0f))));
                    u36 = ((*(float *)(((int)stk + 24))) * t34);
                    u37 = u29;
                    u37 = u37 + 0.200000003f * u36;
                    *(float *)(((int)stk + 32)) = u37;
                    mdl_vtx_set_pos((((int)stk + 4) + 0x18));
                }
                t14 = (t14 + 0x1);
            }
            t44 = t16;
        }
        t73 = t44;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x21F;
        (((struct oA9_uchar *)(a4))->v) = 0x1;
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        t60 = *(int *)(((((*(int *)0xC4B410C) + 0x10) + ((((((*(signed char *)((a4 + 0x2))) << 1) + 0x58) << 2) << 2) << 1)) + 0x1C));
        *(unsigned int *)(((int)stk + 20)) = t60;
        t61 = *(int *)((t60 + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t61;
        mdl_vtx_iter_begin(t61, t61);
        t63 = 0x0;
        for (;;) {
            t64 = mdl_vtx_iter_next();
            if (t64 != 0) {
                break;
            }
            mdl_vtx_get_pos((((int)stk + 4) + 0x18));
            if ((*(float *)(((int)stk + 32))) > 1.0f) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t63 << 1) + t63) << 2) + 0xC40DDB8)) = *(struct mv3 *)((((int)stk + 4) + 0x18)); }
            }
            t63 = (t63 + 0x1);
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t73 = 0x14;
    }
    return t73;
}

int FUN_0c158340(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register int t2;
    register int t9;
    register int t17;
    register int t23;
    register int t25;
    register int t55;
    register int t56;
    register int t58;
    register int t59;
    register int t61;
    register int t62;
    register float u69;
    register float u75;
    register float u81;
    register int t90;
    register int t97;
    register int t102;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            *(int *)((int)stk + 4) = 0x0;
            *(unsigned int *)(((int)stk + 8)) = 0xC2A29EC;
            t2 = ((((struct o0_int *)0xC2A29EC)->v));
            *(int *)((int)stk + 0) = t2;
            FUN_0c058a6e((0xB0 + a4), 0xC2A2A0C, 0xC2A29FC, (*(short *)((a4 + 0x1C))), t2, 0x0);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            if ((*(short *)((a4 + 0x1C))) != (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))) {
                t9 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t9 + 0x1);
                t102 = (t9 + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t102 = 0x14;
            }
        } else {
            if (t0 == 2) {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                if ((*(short *)((a4 + 0x1C))) != ((((struct o4_int *)0xC2A29EC)->v))) {
                    t17 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t17 + 0x1);
                    t102 = (t17 + 0x1);
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t102 = 0x14;
                }
            } else {
                if (t0 == 3) {
                    t23 = ((((struct o4_int *)0xC2A29EC)->v));
                    *(int *)((int)stk + 4) = t23;
                    *(unsigned int *)(((int)stk + 8)) = 0xC2A29F4;
                    t25 = ((((struct o8_int *)0xC2A29EC)->v));
                    *(int *)((int)stk + 0) = t25;
                    FUN_0c058a6e((0xB0 + a4), 0xC2A2A1C, 0xC2A2A0C, (*(short *)((a4 + 0x1C))), t25, t23);
                    if ((*(short *)((a4 + 0x1C))) == (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t102 = 0x14;
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                        t102 = (math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C)));
                    }
                } else {
                    t102 = (FUN_0c03f346(a4, a5, a6, a7));
                }
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x23, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x23F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o48_float *)(a4))->v) = 0.400000006f;
        (((struct o44_float *)(a4))->v) = 0.400000006f;
        (((struct o40_float *)(a4))->v) = 0.400000006f;
        { struct mv4 { int w[4]; }; *(struct mv4 *)((0xB0 + a4)) = *(struct mv4 *)(0xC2A27E4); }
        *(unsigned int *)(((int)stk + 12)) = (((int)stk + 8) + 0x18);
        t55 = nlRand();
        t56 = ((~(((~t55) + 0x1) & 0xF)) + 0x1);
        if ((int)t55 >= 0) {
            t56 = (t55 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 8) + 0x18) + 0x0)) = (((t56 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 8) + 0x18) + 0x4);
        t58 = nlRand();
        t59 = ((~(((~t58) + 0x1) & 0xF)) + 0x1);
        if ((int)t58 >= 0) {
            t59 = (t58 & 0xF);
        }
        *(unsigned int *)((((((int)stk + 8) + 0x18) + 0x4) + 0x0)) = (((t59 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 8) + 0x18) + 0x8);
        t61 = nlRand();
        t62 = ((~(((~t61) + 0x1) & 0xF)) + 0x1);
        if ((int)t61 >= 0) {
            t62 = (t61 & 0xF);
        }
        *(unsigned int *)((((((int)stk + 8) + 0x18) + 0x8) + 0x0)) = (((t62 << 8) << 2) << 2);
        u69 = ((((struct o28_float *)(a4))->v));
        u69 = u69 + (float)((((struct oC_int *)0xC2A29EC)->v)) * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))));
        *(float *)(((int)stk + 20)) = u69;
        u75 = ((((struct o2C_float *)(a4))->v));
        u75 = u75 + (float)((((struct oC_int *)0xC2A29EC)->v)) * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))));
        *(float *)(((int)stk + 24)) = u75;
        u81 = ((((struct o30_float *)(a4))->v));
        u81 = u81 + (float)((((struct oC_int *)0xC2A29EC)->v)) * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))));
        *(float *)(((int)stk + 28)) = u81;
        nlSubVector3op((a4 + 0x4C), (((int)stk + 8) + 0xC), (a4 + 0x28));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) / (float)((((struct o8_int *)0xC2A29EC)->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / (float)((((struct o8_int *)0xC2A29EC)->v)));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) / (float)((((struct o8_int *)0xC2A29EC)->v)));
        *(int *)((int)stk + 4) = 0x0;
        *(unsigned int *)(((int)stk + 8)) = 0xC2A29EC;
        t90 = ((((struct o0_int *)0xC2A29EC)->v));
        *(int *)((int)stk + 0) = t90;
        FUN_0c058a6e((0xB0 + a4), 0xC2A2A0C, 0xC2A29FC, (*(short *)((a4 + 0x1C))), t90, 0x0);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        if ((*(short *)((a4 + 0x1C))) != (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))) {
            t97 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t97 + 0x1);
            t102 = (t97 + 0x1);
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t102 = 0x14;
        }
    }
    return t102;
}

int FUN_0c163d06(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)(*(int *)0xC2A3120)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A30E4, 0xC2A30C0, (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A30E4, 0xC2A30CC, (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
            FUN_0c0588bc((((((struct oCC_int *)(a4))->v)) + 0x84), 0xC2A30E4, 0xC2A30D8, (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)(*(int *)0xC2A3120)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3048, ((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC2A30F0), (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
            FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3048, ((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC2A30F0), (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x400);
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - 0x400);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x800);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)(*(int *)0xC2A3120)) {
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t1 = 0x2;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x36, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x36, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((*(signed char *)((a4 + 0x2))) + 0x1), 0x36, (*(int *)0xC4B40CC));
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x23F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A30C0); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC2A30F0)); }
    *(unsigned short *)(((0x6 + ((((struct oC8_int *)(a4))->v))) + 0x0)) = 0x23F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A30CC); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC2A30F0)); }
    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0x23F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oCC_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A30D8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oCC_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A3058); }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)(*(int *)0xC2A3120)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A30E4, 0xC2A30C0, (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A30E4, 0xC2A30CC, (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
        FUN_0c0588bc((((((struct oCC_int *)(a4))->v)) + 0x84), 0xC2A30E4, 0xC2A30D8, (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)(*(int *)0xC2A3120)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3048, ((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC2A30F0), (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3048, ((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC2A30F0), (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x400);
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - 0x400);
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x800);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)(*(int *)0xC2A3120)) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
        t1 = 0x2;
    }
    return t1;
}

int FUN_0c0d7104(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x41D));
            if ((unsigned int)t0 < (unsigned int)0xC) {
                switch ((t0 << 1)) {
                    case 0:
                    {
                        FUN_0c0d6fcc(a4);
                    }
                        break;
                    case 2:
                    {
                        t0 = *(signed char *)((a4 + 0x2));
                        FUN_0c0d704c(a4, ((((t0 << 1) + t0) << 2) + 0xC28711C), (int)(((float)(*(int *)(((t0 << 2) + 0xC2871E8))) * 65536.0f) / 360.0f));
                    }
                        break;
                    case 4:
                    {
                        FUN_0c0c4b76(a4, a5, a6);
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                    }
                        break;
                    case 6:
                    {
                        FUN_0c0c4bcc(a4, a5, a6);
                    }
                        break;
                    case 8:
                    {
                        FUN_0c0c4c1c(a4, a5, a6);
                    }
                        break;
                    case 10:
                    {
                        FUN_0c0c5024(a4, a5, a6);
                    }
                        break;
                    case 12:
                    {
                        FUN_0c0c52c4(a4, a5, a6);
                    }
                        break;
                    case 14:
                    {
                        FUN_0c0c8c08(a4, a5, a6, a7);
                    }
                        break;
                    case 16:
                    {
                        FUN_0c0c8c36(a4, a5, a6, a7);
                    }
                        break;
                    case 18:
                    case 20:
                    {
                        FUN_0c0d7390(a4);
                    }
                        break;
                    default:
                    {
                        FUN_0c0d7404(a4);
                    }
                        break;
                }
            }
            t0 = *(signed char *)0xC54223C;
            t1 = t0;
            if (t0 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t2 = 0x15;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o41C_uchar *)(a4))->v) = 0xC3;
        (((struct o424_uchar *)(a4))->v) = 0x4;
        (((struct o160_float *)(a4))->v) = (float)(*(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2)));
        (((struct o420_ushort *)(a4))->v) = (int)((((struct o160_float *)(a4))->v));
        (((struct o422_uchar *)(a4))->v) = 0x0;
        (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
        (((struct o126_uchar *)(a4))->v) = 0x0;
        FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        t1 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC28711C + (((t1 << 1) + t1) << 2))); }
        *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC2871E8 + ((*(signed char *)((a4 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        t1 = *(signed char *)((a4 + 0x2));
        t2 = 0x1;
        if (((int)t1 >= (int)0xB) && ((int)t1 <= (int)0x10)) {
            t2 = 0x708;
        }
        *(unsigned short *)((a4 + 0x1C)) = t2;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) != 0) {
        } else {
            (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c167764(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R1;
    register int R2;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    v0_4 = a4;
    v0_3 = a5;
    v0_5 = a6;
    v0_6 = a7;
    v0_7 = *(signed char *)((v0_4 + 0x14));
    v0_2 = (v0_7);
    v0_1 = (0xC2A3560);
    v0_0 = (v0_4);
    if ((v0_7 == 0)) goto L_C1677B8;
    if ((v0_2 == 1)) goto L_C167862;
    v0_2 = ((FUN_0c03f346(v0_0, v0_3, v0_5, v0_6)));
    L_C1679B2:;
    return v0_2;
    L_C167862:;
    v0_3 = (0xC2A3554);
    if ((((int)((int)(*(short *)((v0_0 + 0x1C))) % (int)(*(int *)0xC2A355C))) != 0)) goto L_C1678F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x6C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x84)); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 8) + 0x18)) = *(struct mv4 *)((((((struct oC4_int *)(v0_0))->v)) + 0x14)); }
    v0_2 = ((int (*)(int, int, int, int, Stk3))(FUN_0c03744a))(((((struct oC4_int *)(v0_0))->v)), (*(short *)((v0_0 + 0x1E))), 0x52, (*(int *)0xC4B40CC), *(Stk3 *)(((int)stk + 8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x6C)) = *(struct mv3 *)(((int)stk + 8)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x84)) = *(struct mv3 *)((((int)stk + 8) + 0xC)); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(v0_0))->v)) + 0x14)) = *(struct mv4 *)((((int)stk + 8) + 0x18)); }
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) & 0x3);
    L_C1678F4:;
    v0_2 = ((v0_3 + 0x8));
    if (((int)(*(short *)((v0_0 + 0x1C))) > (int)((*(int *)(((v0_3 + 0x8) + 0x0))) << 2))) goto L_C167928;
    *(int *)((int)stk + 4) = 0x0;
    v0_2 = *(int *)((v0_2 + 0x0));
    *(int *)((int)stk + 0) = (v0_2 << 2);
    FUN_0c0588bc((((((struct oC4_int *)(v0_0))->v)) + 0x84), 0xC2A35A4, 0xC2A3598, (*(short *)((v0_0 + 0x1C))), (v0_2 << 2), 0x0);
    L_C167928:;
    v0_5 = *(short *)((v0_0 + 0x1C));
    v0_2 = (v0_3);
    v0_4 = (v0_5);
    if (((int)v0_5 < (int)(*(int *)((v0_3 + 0x4))))) goto L_C16795A;
    if (((int)v0_4 > (int)(*(int *)((v0_2 + 0x0))))) goto L_C16795A;
    v0_4 = (*(int *)((v0_2 + 0x4)));
    *(int *)((int)stk + 4) = v0_4;
    v0_2 = *(int *)((v0_2 + 0x8));
    *(int *)((int)stk + 0) = (v0_2 << 2);
    FUN_0c058a6e((((((struct oC4_int *)(v0_0))->v)) + 0x14), (v0_1 + 0x10), v0_1, (*(short *)((v0_0 + 0x1C))), (v0_2 << 2), v0_4);
    L_C16795A:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_2 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) <= (int)((*(int *)((v0_3 + 0x8))) << 2))) goto L_C1679B2;
    (((struct o14_uchar *)(v0_0))->v) = 0x3;
    v0_2 = (0x14);
    goto L_C1679B2;
    L_C1677B8:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c03744a))(((((struct oC4_int *)(v0_0))->v)), 0x4, 0x52, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x21F;
    v0_4 = (((struct oC4_int *)(v0_0))->v);
    v0_5 = nlRand();
    v0_2 = (v0_5);
    v0_3 = (0x1E);
    v0_4 = ((0x80 + v0_4));
    if (((int)v0_5 < 0)) goto L_C16781C;
    v0_2 = ((v0_2 & 0x3));
    L_C167826:;
    v0_5 = (int)(v0_2 * v0_3) >= 0;
    v0_2 = ((v0_2 * v0_3));
    if (v0_5) goto L_C167830;
    v0_2 = ((v0_2 + 0x3));
    L_C167830:;
    w0_0 = (((float)((v0_2 >> 1) >> 1) * 65536.0f) / 360.0f);
    *(unsigned int *)((v0_4 + 0x0)) = ((int)(w0_0 + 0.5f) & 0xFFFF);
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(v0_0))->v)) + 0x14)) = *(struct mv4 *)(v0_1); }
    w0_1 = (0.5f);
    w0_1 = (360.0f);
    FPUL_ = ((int)(w0_0 + 0.5f));
    goto L_C167862;
    L_C16781C:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x3)) + 0x1));
    goto L_C167826;
}

int FUN_0c0fd368(int a4, int a5, int a6)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t11;
    register int t12;
    register int t15;
    register int t19;
    register int t38;
    register int t39;
    register int t40;
    register int t41;
    register int t43;
    register int t47;
    register int t48;
    register int t51;
    register int t55;
    register int t74;
    register int t75;
    register int t76;
    register int t77;
    register int t79;
    register int t83;
    register int t84;
    register int t87;
    register int t91;
    register int t0;
    register int t1;
    register int t36;
    register int t37;
    register int t72;
    register int t73;

    if (a6 != 0) {
        if (a6 != 1) {
            if (a6 == 2) {
                *(unsigned int *)(((int)stk + 0)) = 0x2;
                t2 = 0x2;
                t3 = 0x0;
                t4 = a5;
                t5 = 0xA;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 0))) <= 0) {
                        break;
                    }
                    t0 = t4;
                    t7 = (int)((int)t0 / (int)t5);
                    t0 = t4;
                    *(unsigned int *)(((int)stk + 4)) = t7;
                    t1 = 0xC18760C;
                    t4 = ((int)((int)t0 % (int)t5));
                    t0 = t5;
                    t2 = (*(int *)(((int)stk + 0)));
                    t1 = 0xC4;
                    t5 = ((int)((int)t0 / (int)0xA));
                    t2 = (t2 + 0x3);
                    t11 = *(int *)(((int)stk + 4));
                    t2 = (t2 << 2);
                    t1 = (t1 + a4);
                    t12 = *(int *)0xC4B410C;
                    *(unsigned int *)(((int)stk + 8)) = t2;
                    t2 = (t2 + t1);
                    t2 = (*(int *)((t2 + 0x0)));
                    FUN_0c03744a(t2, 0x0, (t11 + 0x28), t12);
                    t2 = 0xC4;
                    t15 = *(int *)(((int)stk + 0));
                    t1 = (*(int *)(((int)stk + 8)));
                    t2 = (t2 + a4);
                    t2 = (t2 + t1);
                    t1 = (t15 + 0x3);
                    t2 = (*(int *)((t2 + 0x0)));
                    t19 = (((t15 + 0x3) << 1) + t1);
                    t1 = 0xC187798;
                    t0 = t2;
                    t0 = (t0 + 0x6C);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(((t19 << 2) + 0xC28EBA8)); }
                    t0 = (*(int *)(((int)stk + 4)));
                    if (t0 == 0) {
                        if (t3 != 1) {
                            *(volatile int *)(((int)stk + 0));
                        }
                    } else {
                        t3 = 0x1;
                    }
                    *(unsigned char *)((t2 + 0x0)) = 0x1;
                    t1 = (*(int *)(((int)stk + 0)));
                    t1 = (t1 - 1);
                    *(unsigned int *)(((int)stk + 0)) = t1;
                }
            }
        } else {
            *(unsigned int *)(((int)stk + 0)) = 0x2;
            t38 = 0x2;
            t39 = 0x0;
            t40 = a5;
            t41 = 0xA;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 0))) <= 0) {
                    break;
                }
                t36 = t40;
                t43 = (int)((int)t36 / (int)t41);
                t36 = t40;
                *(unsigned int *)(((int)stk + 4)) = t43;
                t37 = 0xC18760C;
                t40 = ((int)((int)t36 % (int)t41));
                t36 = t41;
                t38 = (*(int *)(((int)stk + 0)));
                t37 = 0xC4;
                t41 = ((int)((int)t36 / (int)0xA));
                t38 = (t38 - 1);
                t47 = *(int *)(((int)stk + 4));
                t38 = (t38 << 2);
                t37 = (t37 + a4);
                t48 = *(int *)0xC4B410C;
                *(unsigned int *)(((int)stk + 8)) = t38;
                t38 = (t38 + t37);
                t38 = (*(int *)((t38 + 0x8)));
                FUN_0c03744a(t38, 0x0, (t47 + 0x28), t48);
                t38 = 0xC4;
                t51 = *(int *)(((int)stk + 0));
                t37 = (*(int *)(((int)stk + 8)));
                t38 = (t38 + a4);
                t38 = (t38 + t37);
                t37 = (t51 - 1);
                t38 = (*(int *)((t38 + 0x8)));
                t55 = (((t51 - 1) << 1) + t37);
                t37 = 0xC187798;
                t36 = t38;
                t36 = (t36 + 0x6C);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t36) = *(struct mv3 *)(((t55 << 2) + 0xC28EBC0)); }
                t36 = (*(int *)(((int)stk + 4)));
                if (t36 == 0) {
                    if (t39 != 1) {
                        *(volatile int *)(((int)stk + 0));
                    }
                } else {
                    t39 = 0x1;
                }
                *(unsigned char *)((t38 + 0x0)) = 0x1;
                t37 = (*(int *)(((int)stk + 0)));
                t37 = (t37 - 1);
                *(unsigned int *)(((int)stk + 0)) = t37;
            }
        }
    } else {
        *(unsigned int *)(((int)stk + 0)) = 0x2;
        t74 = 0x2;
        t75 = 0x0;
        t76 = a5;
        t77 = 0xA;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 0))) <= 0) {
                break;
            }
            t72 = t76;
            t79 = (int)((int)t72 / (int)t77);
            t72 = t76;
            *(unsigned int *)(((int)stk + 4)) = t79;
            t73 = 0xC18760C;
            t76 = ((int)((int)t72 % (int)t77));
            t72 = t77;
            t74 = (*(int *)(((int)stk + 0)));
            t73 = 0xC4;
            t77 = ((int)((int)t72 / (int)0xA));
            t74 = (t74 - 1);
            t83 = *(int *)(((int)stk + 4));
            t74 = (t74 << 2);
            t73 = (t73 + a4);
            t84 = *(int *)0xC4B410C;
            *(unsigned int *)(((int)stk + 8)) = t74;
            t74 = (t74 + t73);
            t74 = (*(int *)((t74 + 0x0)));
            FUN_0c03744a(t74, 0x0, (t83 + 0x28), t84);
            t74 = 0xC4;
            t87 = *(int *)(((int)stk + 0));
            t73 = (*(int *)(((int)stk + 8)));
            t74 = (t74 + a4);
            t74 = (t74 + t73);
            t73 = (t87 - 1);
            t74 = (*(int *)((t74 + 0x0)));
            t91 = (((t87 - 1) << 1) + t73);
            t73 = 0xC187798;
            t72 = t74;
            t72 = (t72 + 0x6C);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t72) = *(struct mv3 *)(((t91 << 2) + 0xC28EBA8)); }
            t72 = (*(int *)(((int)stk + 4)));
            if (t72 == 0) {
                if (t75 != 1) {
                    *(volatile int *)(((int)stk + 0));
                }
            } else {
                t75 = 0x1;
            }
            *(unsigned char *)((t74 + 0x0)) = 0x1;
            t73 = (*(int *)(((int)stk + 0)));
            t73 = (t73 - 1);
            *(unsigned int *)(((int)stk + 0)) = t73;
        }
    }
    return a6;
}
