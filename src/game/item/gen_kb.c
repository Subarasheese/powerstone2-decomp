/* Straight-line functions with calls and guards (batch gen_kb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c05ab12(int, int);
int math_atan2_angle16(float, float);
int math_mat_transform_vector(int, int);
float math_signed_sqrt(float);
int nlRand(void);
int FUN_0c16bb24(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c16cace(int a4, int a5, int a6, int a7);
int FUN_0c16cc48(int a4, float f4);

int FUN_0c16bb24(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register float F13;
    register float F14;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_2 = a5;
    w0_0 = f4;
    w0_0 = f5;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_0 = (v0_0);
    w0_0 = (0.0f);
    if ((v0_3 == 0)) goto L_C16BB44;
    if ((v0_1 == 1)) goto L_C16BBC2;
    v0_1 = ((FUN_0c03f346(v0_0, v0_2, a6, a7)));
    L_C16BC94:;
    return v0_1;
    L_C16BBC2:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C16BBD4;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    L_C16BBD4:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C16BC04;
    if ((v0_1 == 1)) goto L_C16BC3A;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C16BC80:;
    w0_0 = (((struct o48_float *)(v0_0))->v);
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o40_float *)(v0_0))->v) = w0_0;
    v0_1 = (0x40);
    goto L_C16BC94;
    L_C16BC3A:;
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) + 0.00999999978f);
    (((struct oBC_float *)(v0_0))->v) = (((((struct oBC_float *)(v0_0))->v)) - 0.100000001f);
    w0_1 = (((struct oBC_float *)(v0_0))->v);
    w0_2 = (w0_1);
    w0_2 = (0.0f);
    FPUL_ = (0x3DCCCCCD);
    if ((w0_1 > 0.0f)) goto L_C16BC6A;
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C16BC6A:;
    w0_0 = (((struct oBC_float *)(v0_0))->v);
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    goto L_C16BC80;
    L_C16BC04:;
    w0_1 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_1 + 0.200000003f);
    v0_1 = (0x48);
    w0_0 = (1.0f);
    FPUL_ = (0x3E4CCCCD);
    if ((1.0f > (w0_1 + 0.200000003f))) goto L_C16BC80;
    *(float *)((v0_0 + v0_1)) = w0_0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    goto L_C16BC80;
    L_C16BB44:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1E;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    *(float *)(((int)stk + 0)) = w0_0;
    *(float *)(((int)stk + 4)) = 110.0f;
    *(float *)(((int)stk + 8)) = w0_0;
    FUN_0c0582de(((int)stk + 0), (((((struct oC4_int *)((*(int *)((v0_0 + 0x10)))))->v)) + 0x28));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(((int)stk + 0)); }
    *(float *)(((int)stk + 0)) = w0_0;
    *(float *)(((int)stk + 4)) = 110.0f;
    *(float *)(((int)stk + 8)) = w0_0;
    math_mat_transform_vector(((int)stk + 0), (((((struct oC4_int *)((*(int *)((v0_0 + 0x10)))))->v)) + 0x28));
    *(unsigned int *)((v0_0 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 0))), (*(float *)(((int)stk + 8)))));
    w0_2 = *(float *)(((int)stk + 8));
    w0_1 = *(float *)(((int)stk + 0));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    w0_1 = math_signed_sqrt(w0_2);
    *(unsigned int *)((v0_0 + 0x34)) = (math_atan2_angle16(w0_1, (*(float *)(((int)stk + 4)))));
    goto L_C16BBC2;
}


int FUN_0c16cc48(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = FUN_0c037320(0x20, (*(int *)0xC4B40CC));
    t1 = FUN_0c03f444(0x6, 0x0, t0);
    t2 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x20, (*(int *)0xC4B40CC));
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a4); }
        *(unsigned int *)((t1 + 0x4)) = 0xC16CACE;
        (((struct oAC_ushort *)(t1))->v) = 0x41F;
        (((struct oB0_float *)(t1))->v) = 1.0f;
        (((struct o60_float *)(t1))->v) = f4;
        (((struct o58_float *)(t1))->v) = ((f4 * (1.0f + 1.0f)) / 3.0f);
        if ((int)t0 > 0) {
            t3 = 0x0;
            t4 = 0x0;
            for (;;) {
                t4 = (t4 + 0x1);
                t5 = *(int *)((((0xC4 + t1) + t3) + 0x0));
                *(unsigned short *)((t5 + 0x6)) = ((*(short *)((t5 + 0x6))) | 0x1000);
                (((struct o24_float *)((*(int *)((((0xC4 + t1) + t3) + 0x0)))))->v) = f4;
                t3 = (t3 + 0x4);
                if ((int)t4 >= (int)t0) {
                    break;
                }
            }
        }
        t0 = nlRand();
        t3 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t3 = (t0 & 0x1);
        }
        (((struct o17_uchar *)(t1))->v) = t3;
        t2 = t3;
    }
    return t2;
}
