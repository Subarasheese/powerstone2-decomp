/* Straight-line functions with calls and guards (batch gen_et): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c058542(int, int);
int FUN_0c058716(int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c07e2f4(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4b76();
extern int FUN_0c0c4bcc();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
extern int FUN_0c0d409c();
int FUN_0c0d4122(int, int, int);
int FUN_0c0f15e0(int);
int FUN_0c0f1640(int);
extern int FUN_0c143a30();
int FUN_0c1453c4(int, int, int);
int FUN_0c148d64(int, int, int);
int FUN_0c16b2cc(int, int, int, int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlRand(void);
int nlSubVector3op(int, int, int);
void FUN_0c120654(int a4, int a5, int a6, int a7);
int FUN_0c032a48(int a4, int a5, int a6, int a7);
int FUN_0c0f1688(int a4, int a5, int a6, int a7);
int FUN_0c14a58a(int a4, int a5, int a6, int a7);
int FUN_0c12e584(int a4, int a5, int a6, int a7);
float FUN_0c1491e4(int a4, int a5, int a6, int a7);
int FUN_0c152ad4(int a4, int a5, int a6, int a7);
int FUN_0c11a2a8(int a4, int a5, int a6, int a7);
int FUN_0c167196(int a4, int a5, int a6, int a7);
int FUN_0c16b38e(int a4, int a5, int a6, int a7);
int FUN_0c0332b6(int a4, int a5, int a6, int a7, float f4);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_ushort { char p[0x6]; unsigned short v; };


void FUN_0c120654(int a4, int a5, int a6, int a7)
{
    int stk[10];
    int t0;
    int t26;
    int t64;
    int t46;
    int t3;
    int t10;
    int t51;
    int t73;
    int t71;
    int t2;
    int t61;
    int t59;
    int t57;
    int t55;
    int t53;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0xB, a7);
    if (t0 != 0) {
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        t2 = *(int *)0xC4B410C;
        t3 = 0xB;
        if ((*(int *)(((int)stk + 0))) != 0) {
            t3 = 0xC;
        }
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, t3, t2);
        FUN_0c03744a(((((struct oC8_int *)(t0))->v)), 0x0, 0xA, (*(int *)0xC4B410C));
        t10 = *(int *)0xC4B410C;
        if ((int)a5 > (int)0xF423F) {
            FUN_0c03744a(((((struct oCC_int *)(t0))->v)), 0x0, 0x9F, t10);
        } else {
            FUN_0c03744a(((((struct oCC_int *)(t0))->v)), 0x0, 0x9E, t10);
            if ((int)a5 < (int)0x3E8) {
                *(unsigned char *)((((((struct oCC_int *)(t0))->v)) + 0x0)) = 0x0;
            } else {
                *(unsigned char *)((((((struct oCC_int *)(t0))->v)) + 0x0)) = 0x1;
            }
        }
        t26 = a5;
        if ((int)a5 > (int)0x5F5E0FF) {
            t26 = 0x5F5E0FF;
        }
        t46 = 0x8;
        if ((int)t26 >= (int)0x989680) {
        } else {
            t46 = 0x7;
            if ((int)t26 >= (int)0xF4240) {
            } else {
                t46 = 0x6;
                if ((int)t26 >= (int)0x186A0) {
                } else {
                    t46 = 0x5;
                    if ((int)t26 >= (int)0x2710) {
                    } else {
                        t46 = 0x4;
                        if ((int)t26 >= (int)0x3E8) {
                        } else {
                            t46 = 0x3;
                            if ((int)t26 >= (int)0x64) {
                            } else {
                                t46 = 0x1;
                                if ((int)t26 >= (int)0xA) {
                                    t46 = 0x2;
                                }
                            }
                        }
                    }
                }
            }
        }
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x1C)) = ((int)((int)t26 / (int)0x989680));
        t51 = (int)((int)t26 % (int)0x989680);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x18)) = ((int)((int)t51 / (int)0xF4240));
        t53 = (int)((int)t51 % (int)0xF4240);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x14)) = ((int)((int)t53 / (int)0x186A0));
        t55 = (int)((int)t53 % (int)0x186A0);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x10)) = ((int)((int)t55 / (int)0x2710));
        t57 = (int)((int)t55 % (int)0x2710);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0xC)) = ((int)((int)t57 / (int)0x3E8));
        t59 = (int)((int)t57 % (int)0x3E8);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x8)) = ((int)((int)t59 / (int)0x64));
        t61 = (int)((int)t59 % (int)0x64);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = ((int)((int)t61 / (int)0xA));
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = ((int)((int)t61 % (int)0xA));
        t64 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + (t64 << 2)) + 0xC))), (*(int *)(((((int)stk + 0) + 0x8) + (t64 << 2)))), 0x0, (*(int *)0xC4B410C));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + t0) + (t64 << 2)) + 0xC))) + 0x6C)) = *(struct mv3 *)(((((t64 << 1) + t64) << 2) + 0xC201908)); }
            t71 = (t64 << 2);
            t73 = ((int)t46 > (int)t64);
            t64 = (t64 + 0x1);
            *(unsigned char *)(((*(int *)(((t71 + (0xC4 + t0)) + 0xC))) + 0x0)) = ((t73) ? 1 : 0);
            if ((int)t64 >= (int)0x8) {
                break;
            }
        }
        (((struct o1_uchar *)(t0))->v) = 0xFFFFFFFF;
        (((struct o4_uint *)(t0))->v) = 0xC1205C4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0 + 0x28) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    }
}




int FUN_0c12e584(int a4, int a5, int a6, int a7)
{
    int stk[5];
    int t0;
    int t17;
    int t25;
    int t33;
    int t41;
    int t8;
    int t49;
    int t43;
    int t35;
    int t27;
    int t19;
    int t10;
    int t5;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x5, a7);
    t49 = t0;
    if (t0 != 0) {
        (((struct o1_uchar *)(t0))->v) = (*(signed char *)(a4 + 0x1));
        (((struct o4_uint *)(t0))->v) = 0xC12E7D0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0 + 0x28) = *(struct mv3 *)(a4 + 0x28); }
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = -40.0f;
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 0.0f;
        (((struct o5C_float *)(t0))->v) = -1.0f;
        (((struct o60_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct o34_uint *)(t0))->v) = 0x4000;
        (((struct o38_uint *)(t0))->v) = 0x0;
        (((struct o3C_uint *)(t0))->v) = 0x0;
        (((struct o10_uint *)(t0))->v) = a4;
        (((struct o1B_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 16)));
        t5 = 0x60;
        if (((int)(*(signed char *)(((int)stk + 16))) >= (int)0x5) && ((0x1 & (*(signed char *)(((int)stk + 16)))) == 0)) {
            t5 = 0x61;
        }
        FUN_0c07e2f4(t0, t5);
        FUN_0c064d24(t0, 0x1, 0x40, 0x0, 0x100, 0x0, 0x0, 0x0);
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t8 = (((struct oC4_int *)(t0))->v);
        t10 = *(int *)((0xC4B40FC + ((*(signed char *)(a4 + 0x1)) << 2)));
        *(unsigned int *)(((int)stk + 16)) = 0xC201D54;
        FUN_0c03744a(t8, (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((((struct o0_int *)0xC201D58)->v)), t10);
        (((struct o6_ushort *)(t8))->v) = 0x41F;
        (((struct o14_float *)(t8))->v) = 1.0f;
        (((struct o8C_float *)(t8))->v) = 1.0f;
        (((struct o1C_ushort *)(t0))->v) = ((unsigned char)(*(signed char *)((0xC2A1264 + (*(signed char *)(t0 + 0x1B))))) + 0xA);
        t17 = (((struct oC8_int *)(t0))->v);
        t19 = *(int *)((0xC4B40FC + ((*(signed char *)(a4 + 0x1)) << 2)));
        *(unsigned int *)(((int)stk + 16)) = 0xC201D5C;
        FUN_0c03744a(t17, (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((((struct o8_int *)0xC201D58)->v)), t19);
        (((struct o6_ushort *)(t17))->v) = 0x41F;
        (((struct o14_float *)(t17))->v) = 1.0f;
        (((struct o74_float *)(t17))->v) = (((((struct o74_float *)(t17))->v)) + 200.0f);
        (((struct o8C_float *)(t17))->v) = 0.0f;
        (((struct o88_float *)(t17))->v) = 0.0f;
        (((struct o84_float *)(t17))->v) = 0.0f;
        t25 = (((struct oCC_int *)(t0))->v);
        t27 = *(int *)((0xC4B40FC + ((*(signed char *)(a4 + 0x1)) << 2)));
        *(unsigned int *)(((int)stk + 16)) = 0xC201D64;
        FUN_0c03744a(t25, (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((((struct o10_int *)0xC201D58)->v)), t27);
        (((struct o6_ushort *)(t25))->v) = 0x41F;
        (((struct o14_float *)(t25))->v) = 1.0f;
        (((struct o74_float *)(t25))->v) = (((((struct o74_float *)(t25))->v)) + 50.0f);
        (((struct o8C_float *)(t25))->v) = 0.0f;
        (((struct o88_float *)(t25))->v) = 0.0f;
        (((struct o84_float *)(t25))->v) = 0.0f;
        (((struct o1E_ushort *)(t0))->v) = 0xA;
        (((struct o20_ushort *)(t0))->v) = 0x0;
        t33 = (((struct oD0_int *)(t0))->v);
        t35 = *(int *)((0xC4B40FC + ((*(signed char *)(a4 + 0x1)) << 2)));
        *(unsigned int *)(((int)stk + 16)) = 0xC201D6C;
        FUN_0c03744a(t33, (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((((struct o18_int *)0xC201D58)->v)), t35);
        (((struct o6_ushort *)(t33))->v) = 0x41F;
        (((struct o14_float *)(t33))->v) = 1.0f;
        (((struct o74_float *)(t33))->v) = (((((struct o74_float *)(t33))->v)) - 100.0f);
        (((struct o8C_float *)(t33))->v) = 1.0f;
        (((struct o88_float *)(t33))->v) = 1.0f;
        (((struct o84_float *)(t33))->v) = 1.0f;
        t41 = (((struct oD4_int *)(t0))->v);
        t43 = *(int *)((0xC4B40FC + ((*(signed char *)(a4 + 0x1)) << 2)));
        *(unsigned int *)(((int)stk + 16)) = 0xC201D74;
        FUN_0c03744a(t41, (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((((struct o20_int *)0xC201D58)->v)), t43);
        (((struct o6_ushort *)(t41))->v) = 0x1F;
        (((struct o74_float *)(t41))->v) = (((((struct o74_float *)(t41))->v)) - 0.0f);
        (((struct o8C_float *)(t41))->v) = 1.0f;
        (((struct o88_float *)(t41))->v) = 1.0f;
        (((struct o84_float *)(t41))->v) = 1.0f;
        t49 = 0x84;
    }
    return t49;
}

float FUN_0c1491e4(int a4, int a5, int a6, int a7)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F3;
    register float F12;
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
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_4 = a4;
    v0_0 = a5;
    v0_6 = a6;
    v0_5 = a7;
    v0_7 = *(signed char *)((v0_4 + 0x16));
    v0_3 = (v0_7);
    v0_2 = (0x14);
    v0_1 = (0xC2029D8);
    v0_0 = (v0_4);
    w0_0 = (1.5f);
    if ((v0_7 == 0)) goto L_C14922C;
    if ((v0_3 == 1)) goto L_C149262;
    if ((v0_3 == 2)) goto L_C1492B2;
    if ((v0_3 != 3)) goto L_C149216;
    if (((int)(*(short *)((v0_0 + 0x1E))) <= 0)) goto L_C1493A2;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) - 1);
    v0_2 = *(short *)(((0x1E + v0_0) + 0x0));
    v0_3 = *(signed char *)((v0_0 + 0x2));
    w0_1 = (((struct o4_float *)(((((v0_3 << 1) + v0_3) << 2) + v0_1)))->v);
    *(unsigned short *)(((int)stk + 0)) = v0_2;
    w0_2 = ((float)v0_2 * (math_sin_angle16(((*(short *)(((int)stk + 0))) << 13))));
    w0_1 = w0_1;
    w0_1 = w0_1 + w0_0 * w0_2;
    (((struct o2C_float *)(v0_0))->v) = w0_1;
    F0 = (w0_0);
    L_C1493A2:;
    v0_2 = (((struct oCC_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_2))->v) = (((((struct o78_int *)(v0_2))->v)) - 0x111);
    (((struct o78_uint *)((*(int *)(((0xC4 + v0_0) + 0x4)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + v0_0) + 0x8)))))->v));
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_3 = ((short)(v0_2 - 1));
    v0_4 = ((0xC4 + v0_0));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C1493EC;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)((v0_1 + (((v0_2 << 1) + v0_2) << 2))); }
    v0_3 = ((FUN_0c148d64(v0_0, 0x3, 0x0)));
    L_C1493EC:;
    return F0;
    L_C149216:;
    goto L_C1493EC;
    L_C1492B2:;
    v0_3 = (((struct oCC_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_3))->v) = (((((struct o78_int *)(v0_3))->v)) + 0x444);
    (((struct o78_uint *)((*(int *)(((0xC4 + v0_0) + 0x4)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + v0_0) + 0x8)))))->v));
    v0_4 = ((0xC4 + v0_0));
    if (((*(short *)((v0_0 + 0x1C))) != 5)) goto L_C1492E8;
    FUN_0c1453c4(v0_0, (*(short *)((v0_0 + 0x1E))), 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = v0_2;
    L_C1492E8:;
    if (((int)(*(short *)((v0_0 + 0x1C))) > (int)0x5)) goto L_C149324;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) - 1);
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_3 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)(((int)stk + 0)) = v0_3;
    w0_1 = (((struct o4_float *)((v0_1 + (((v0_4 << 1) + v0_4) << 2))))->v);
    w0_2 = ((float)v0_3 * (math_sin_angle16(((*(short *)(((int)stk + 0))) << 13))));
    w0_1 = w0_1;
    w0_1 = w0_1 + w0_0 * w0_2;
    (((struct o2C_float *)(v0_0))->v) = w0_1;
    F0 = (w0_0);
    L_C149324:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C1493EC;
    v0_3 = (v0_2);
    L_C149334:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_3;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_3 = (0x16);
    goto L_C1493EC;
    L_C149262:;
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_1))->v) = (((((struct o78_int *)(v0_1))->v)) - 0x111);
    (((struct o78_uint *)((*(int *)(((0xC4 + v0_0) + 0x4)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + v0_0) + 0x8)))))->v));
    v0_4 = ((0xC4 + v0_0));
    if (((int)(*(short *)((v0_0 + 0x1C))) > (int)0x4)) goto L_C14929E;
    if ((((((struct o20_short *)(v0_0))->v)) != 0)) goto L_C14929E;
    v0_1 = ((int (*)(int, int, int, int))(FUN_0c143a30))(v0_0, 0x1, v0_6, v0_5);
    (((struct o20_ushort *)(v0_0))->v) = 0x1;
    L_C14929E:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C1492AE;
    goto L_C1493EC;
    L_C1492AE:;
    v0_3 = (0xA);
    goto L_C149334;
    L_C14922C:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o20_ushort *)(v0_0))->v) = 0x0;
    math_mat_get_translate((v0_0 + 0x64), (((int)stk + 0) + 0x4));
    FUN_0c059e9a((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532498), 0x9, (((int)stk + 0) + 0x4));
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    goto L_C149262;
}




int FUN_0c16b38e(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t7;
    register int t16;
    register float u26;
    register int t28;
    register int t58;
    register int t71;
    register int t86;
    register int t88;
    register int t93;
    register float u110;
    register int t111;
    register int t115;
    register int t120;
    register int t8;
    register int t9;
    register int t10;
    register int t106;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                if ((*(signed char *)(((0x41C + a4) + 0x3))) != 0) {
                    t7 = *(int *)((a4 + 0x10));
                    if ((t7 != 0) && ((t8 = *(signed char *)((t7 + 0x14)), t8 == 3) || ((t9 = *(signed char *)((t7 + 0x14)), t9 == 99) || (t10 = *(int *)((t7 + 0x4)), t10 == 0)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                    }
                }
                t16 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t16))->v) = (((((struct o80_int *)(t16))->v)) + 0x71C);
                if (!(((((struct o48_float *)(a4))->v)) > (*(float *)((0xC203BBC + ((*(signed char *)(((0x41C + a4) + 0x3))) << 2)))))) {
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
                }
                u26 = (((struct o48_float *)(a4))->v);
                (((struct o44_float *)(a4))->v) = u26;
                (((struct o40_float *)(a4))->v) = u26;
                if ((*(signed char *)(((0x41C + a4) + 0x3))) == 0) {
                    t28 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t28 - 1);
                    if ((int)(short)(t28 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0xA;
                        FUN_0c16b2cc(a4, 0x0, a6, a7);
                    }
                }
                if ((*(signed char *)((a4 + 0x131))) != 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                } else {
                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                }
                t58 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t58 - 1);
                t120 = (short)(t58 - 1);
                if ((int)(short)(t58 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t120 = 0x14;
                }
            } else {
                t120 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            t71 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t71 - 1);
            t120 = (short)(t71 - 1);
            if ((int)(short)(t71 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xF0;
                t120 = 0xF0;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) == 13) {
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            t106 = a5;
        } else {
            t86 = FUN_0c064f80((((short)t0 * (short)0x3938) + 0xC532498));
            if (t86 == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0x380C + (((short)t0 * (short)0x3938) + 0xC532498))); }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
                t88 = FUN_0c058716(a4, ((int)stk + 0));
                t93 = 0x0;
                if ((int)t88 <= (int)0x4000) {
                    t93 = 0x38E3;
                    if ((int)t88 > (int)0x38E3) {
                    } else {
                        t93 = t88;
                        if ((int)t88 < 0) {
                            t93 = 0x0;
                        }
                    }
                    t106 = 0x38E3;
                }
                *(unsigned int *)((a4 + 0x34)) = t93;
            }
        }
        FUN_0c058542(a4, t106);
        (((struct oAC_ushort *)(a4))->v) = 0x31;
        u110 = *(float *)((0xC203BB0 + ((*(signed char *)(((0x41C + a4) + 0x3))) << 2)));
        (((struct o48_float *)(a4))->v) = u110;
        (((struct o44_float *)(a4))->v) = u110;
        (((struct o40_float *)(a4))->v) = u110;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t111 = *(signed char *)(((0x41C + a4) + 0x3));
        *(unsigned short *)((a4 + 0x1C)) = ((t111 << 2) + t111);
        if ((*(signed char *)(((0x41C + a4) + 0x3))) != 0) {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        }
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        t115 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t115 - 1);
        t120 = (short)(t115 - 1);
        if ((int)(short)(t115 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0xF0;
            t120 = 0xF0;
        }
    }
    return t120;
}



