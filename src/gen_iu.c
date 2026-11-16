/* Straight-line functions with calls and guards (batch gen_iu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c17c4d0(int);
int FUN_0c187798(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c124f0c(int a4, int a5, int a6, int a7);
float FUN_0c13c930(int a4, int a5, int a6, int a7, float f4);

int FUN_0c124f0c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t10;
    register int t12;
    register float u16;
    register int t17;
    register float u28;
    register int t29;
    register float u67;
    register float u68;
    register float u72;
    register float u73;
    register float u77;
    register float u78;
    register int t79;
    register int t80;
    register float t82;
    register float u83;
    register float u84;
    int t2;
    register int t85;

    t0 = *(int *)((a4 + 0x10));
    t10 = a4;
    if (((*(signed char *)((t0 + 0x3715))) == 26) && (t2 = (((struct o3818_short *)(t0))->v), (unsigned short)t2 == 0x43D)) {
    } else {
        if ((int)(*(signed char *)((a4 + 0x14))) < (int)0x3) {
            (((struct o14_uchar *)(a4))->v) = 0x3;
        }
        t10 = 0x3;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t12 = *(signed char *)((a4 + 0x14));
    if (t12 != 0) {
        if (t12 == 3) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
            (((struct oBC_float *)(a4))->v) = 1.0f;
            (((struct oB8_float *)(a4))->v) = 1.0f;
            (((struct oB4_float *)(a4))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x8;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
            u16 = (((struct oB4_float *)(a4))->v);
            (((struct oBC_float *)(a4))->v) = u16;
            (((struct oB8_float *)(a4))->v) = u16;
            t17 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t17 - 1);
            t85 = (short)(t17 - 1);
            if ((int)(short)(t17 - 1) <= 0) {
                t85 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            t85 = t12;
            if (t12 == 4) {
                (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
                u28 = (((struct oB4_float *)(a4))->v);
                (((struct oBC_float *)(a4))->v) = u28;
                (((struct oB8_float *)(a4))->v) = u28;
                t29 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t29 - 1);
                t85 = (short)(t29 - 1);
                if ((int)(short)(t29 - 1) <= 0) {
                    t85 = (FUN_0c03f346(a4, a5, a6, a7));
                }
            }
        }
    } else {
        *(volatile signed char *)((t0 + 0x1));
        FUN_0c187798(t10, a5, a6);
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - ((((struct o28_float *)(t0))->v)));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o2C_float *)(t0))->v)));
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o30_float *)(t0))->v)));
        FUN_0c17c4d0(((int)stk + 0));
        u67 = ((*(float *)(((int)stk + 0))) * ((((struct o378C_float *)(t0))->v)));
        u68 = ((((struct o28_float *)(t0))->v));
        u68 = u68 + 150.0f * u67;
        (((struct o28_float *)(a4))->v) = u68;
        u72 = ((*(float *)(((int)stk + 8))) * ((((struct o378C_float *)(t0))->v)));
        u73 = ((((struct o30_float *)(t0))->v));
        u73 = u73 + 150.0f * u72;
        (((struct o30_float *)(a4))->v) = u73;
        u77 = ((*(float *)(((int)stk + 4))) * ((((struct o378C_float *)(t0))->v)));
        u78 = ((((struct o2C_float *)(t0))->v));
        u78 = u78 + 150.0f * u77;
        (((struct o2C_float *)(a4))->v) = u78;
        t79 = (((struct oC4_int *)(a4))->v);
        t80 = *(short *)((a4 + 0x1E));
        t82 = math_sin_angle16((int)(((float)((((t80 << 2) + t80) << 2) << 1) * 65536.0f) / 360.0f));
        u83 = 1.29999995f;
        u83 = u83 + 0.400000006f * t82;
        (((struct o84_float *)(t79))->v) = u83;
        u84 = (((struct o84_float *)(t79))->v);
        (((struct o8C_float *)(t79))->v) = u84;
        (((struct o88_float *)(t79))->v) = u84;
        t85 = 0x88;
    }
    return t85;
}

float FUN_0c13c930(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R13;
    register float F0;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    v0_4 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_1 = a7;
    w0_1 = f4;
    v0_0 = (v0_4);
    v0_4 = (0xC5421F8);
    if (((*(signed char *)0xC542237) != 1)) goto L_C13C96E;
    if (((*(signed char *)((v0_4 + 0x44))) != 2)) goto L_C13C96E;
    if (((*(signed char *)((v0_0 + 0x1B))) == (*(signed char *)((v0_4 + 0x44))))) goto L_C13C96E;
    v0_4 = ((FUN_0c03f346(v0_0, v0_2, v0_3, v0_1)));
    L_C13CAB6:;
    return F0;
    L_C13C96E:;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C13C97E;
    if ((v0_4 == 1)) goto L_C13CA30;
    v0_4 = ((FUN_0c03f346(v0_0, v0_2, v0_3, v0_1)));
    goto L_C13CAB6;
    L_C13CA30:;
    v0_3 = (0x71C);
    v0_1 = (0xC17C110);
    v0_2 = (0x0);
    L_C13CA82:;
    if (((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C13CA38;
    if (((int)(*(short *)((v0_0 + 0x1C))) > (int)0xA)) goto L_C13CA9C;
    (((struct oA8_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0xA8))) ^ 0x1);
    L_C13CA9C:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C13CAB6;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    v0_4 = (0x14);
    goto L_C13CAB6;
    L_C13CA38:;
    v0_1 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    math_vec3_accumulate((v0_1 + 0x6C), (0x90 + v0_1));
    *(float *)(((int)stk + 0)) = (float)((((struct o9C_int *)(v0_1))->v));
    *(float *)(((int)stk + 4)) = (float)((((struct oA0_int *)(v0_1))->v));
    *(float *)(((int)stk + 8)) = (float)((((struct oA4_int *)(v0_1))->v));
    math_vec3_accumulate((0x90 + v0_1), ((int)stk + 0));
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + v0_3);
    v0_2 = ((v0_2 + 0x1));
    goto L_C13CA82;
    L_C13C97E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    v0_1 = (0xFFFFFFFF);
    v0_2 = (0x0);
    v0_3 = (0x8);
    w0_0 = (10.0f);
    w0_1 = (0.0f);
    L_C13C996:;
    v0_4 = *(int *)((((0xC4 + v0_0) + v0_2) + 0x0));
    (((struct o98_float *)(v0_4))->v) = w0_1;
    (((struct o90_float *)(v0_4))->v) = w0_1;
    (((struct o94_float *)(v0_4))->v) = w0_0;
    v0_5 = (unsigned int)(v0_2 + 0x4) < (unsigned int)v0_3;
    (((struct oA0_uint *)(v0_4))->v) = v0_1;
    v0_4 = (v0_4);
    v0_2 = ((v0_2 + 0x4));
    if (v0_5) goto L_C13C996;
    v0_2 = (0x2);
    v0_3 = (0xC179BF0);
    v0_3 = (0x2AAA);
    L_C13CA28:;
    if (((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C13C9F4;
    goto L_C13CA30;
    L_C13C9F4:;
    v0_4 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    w0_1 = math_sin_angle16(((v0_2 - 2) * v0_3));
    (((struct o90_float *)(v0_4))->v) = (w0_1 * w0_0);
    w0_1 = math_cos_angle16(((v0_2 - 2) * v0_3));
    (((struct o98_float *)(v0_4))->v) = (w0_1 * w0_0);
    (((struct o94_float *)(v0_4))->v) = w0_0;
    (((struct oA0_uint *)(v0_4))->v) = v0_1;
    v0_2 = ((v0_2 + 0x1));
    F0 = ((w0_1 * w0_0));
    goto L_C13CA28;
}
