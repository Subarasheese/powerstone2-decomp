/* game/unsorted: functions 0C148D04-0C149556, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c143a30(int, int);
int FUN_0c1453c4(int, int, int);
int FUN_0c148d04(int, int);
int FUN_0c148d64(int, int, int);
float math_sin_angle16(int);
float FUN_0c0e2220(int, int);
int FUN_0c0e2390(int, int, int);
float FUN_0c17c450(int);
int FUN_0c187798(int, int, int);
int FUN_0c148f08(int a4, int a5, int a6, float f4, float f5);
int FUN_0c149000(int a4, int a5, int a6);
float FUN_0c1491e4(int a4, int a5, int a6, int a7);

int FUN_0c148f08(int a4, int a5, int a6, float f4, float f5)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t5;
    register float u7;
    register float u8;
    register int t0;
    register float u6;
    register float u9;
    float u13;

    t1 = a5;
    t2 = a6;
    t5 = 0x0;
    u7 = f4;
    u8 = f5;
    for (;;) {
        if ((int)t5 >= (int)0x4) {
            return 0x0;
        }
        if (t5 != (*(signed char *)((a4 + 0x1)))) {
            t1 = 0x3938;
            t2 = 0xC532498;
            t0 = (*(signed char *)((((t5 * t1) + t2) + 0x3714)));
            if ((t0 != 0) && (u13 = (((struct o160_float *)(((t5 * t1) + t2)))->v), u13 > 0.0f)) {
                t0 = 0xC187798;
                FUN_0c187798(((t5 * t1) + t2), t1, t2);
                t1 = ((int)stk + 0);
                u9 = 0.0f;
                t1 = (t1 + 0xC);
                *(float *)(((int)stk + 4)) = u9;
                math_mat_get_translate((a4 + 0x64), t1);
                t2 = ((int)stk + 0);
                t1 = ((int)stk + 0);
                *(float *)(((int)stk + 16)) = u9;
                t2 = (t2 + 0xC);
                FUN_0c0e2390((((int)stk + 0) + 0xC), t1, t2);
                u6 = (FUN_0c17c450((((int)stk + 0) + 0xC)));
                u7 = u6;
                u8 = ((((struct o0_float *)0xC149030)->v));
                if (!(u8 > u7)) {
                    u8 = ((((struct o4_float *)0xC149030)->v));
                    if (u8 > u7) {
                        *(float *)(((int)stk + 4)) = u9;
                        t1 = a4;
                        u7 = 1.0f;
                        t1 = (t1 + 0x64);
                        *(float *)(((int)stk + 0)) = u9;
                        *(float *)(((int)stk + 8)) = u7;
                        math_mat_transform_vector(((int)stk + 0), t1);
                        *(float *)(((int)stk + 4)) = u9;
                        u6 = (FUN_0c17c450(((int)stk + 0)));
                        u9 = ((((struct o10_float *)0xC149030)->v));
                        t1 = ((int)stk + 0);
                        u6 = (FUN_0c0e2220((((int)stk + 0) + 0xC), t1));
                        if (!(u9 > u6)) {
                            break;
                        }
                        t5 = (t5 + 0x1);
                        continue;
                    }
                    t5 = (t5 + 0x1);
                    continue;
                }
                break;
            }
            t5 = (t5 + 0x1);
            continue;
        }
        t5 = (t5 + 0x1);
    }
    *(unsigned short *)((a4 + 0x1E)) = t5;
    return 0x1;
}

int FUN_0c149000(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x16));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        t1 = *(short *)((a4 + 0x1C));
        if (t1 == 0) {
            return FUN_0c148d64(a4, 0x2, 0x0);
        }
        return t1;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798(0x0, a5, a6);
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = t0;
    (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = t0;
    (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = t0;
    FUN_0c148d04(a4, 0x1);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (t0 == 0) {
        return FUN_0c148d64(a4, 0x2, 0x0);
    }
    return t0;
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
    v0_6 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_0 = a7;
    v0_7 = *(signed char *)((v0_6 + 0x16));
    v0_5 = (v0_7);
    v0_3 = (0x14);
    v0_4 = (0xC2029D8);
    v0_0 = (v0_6);
    w0_0 = (1.5f);
    if ((v0_7 == 0)) goto L_C14922C;
    if ((v0_5 == 1)) goto L_C149262;
    if ((v0_5 == 2)) goto L_C1492B2;
    if ((v0_5 != 3)) goto L_C149216;
    if (((int)(*(short *)((v0_0 + 0x1E))) <= 0)) goto L_C1493A2;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) - 1);
    v0_3 = *(short *)(((0x1E + v0_0) + 0x0));
    v0_5 = *(signed char *)((v0_0 + 0x2));
    w0_1 = (((struct o4_float *)(((((v0_5 << 1) + v0_5) << 2) + v0_4)))->v);
    *(unsigned short *)(((int)stk + 0)) = v0_3;
    w0_2 = ((float)v0_3 * (math_sin_angle16(((*(short *)(((int)stk + 0))) << 13))));
    w0_1 = w0_1;
    w0_1 = w0_1 + w0_0 * w0_2;
    (((struct o2C_float *)(v0_0))->v) = w0_1;
    F0 = (w0_0);
    L_C1493A2:;
    v0_3 = (((struct oCC_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_3))->v) = (((((struct o78_int *)(v0_3))->v)) - 0x111);
    (((struct o78_uint *)((*(int *)(((0xC4 + v0_0) + 0x4)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + v0_0) + 0x8)))))->v));
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_5 = ((short)(v0_3 - 1));
    v0_6 = ((0xC4 + v0_0));
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C1493EC;
    *(volatile signed char *)((v0_0 + 0x2));
    FUN_0c187798(v0_6, v0_1, v0_2);
    v0_5 = ((FUN_0c148d64(v0_0, 0x3, 0x0)));
    L_C1493EC:;
    return F0;
    L_C149216:;
    goto L_C1493EC;
    L_C1492B2:;
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_1))->v) = (((((struct o78_int *)(v0_1))->v)) + 0x444);
    (((struct o78_uint *)((*(int *)(((0xC4 + v0_0) + 0x4)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + v0_0) + 0x8)))))->v));
    v0_6 = ((0xC4 + v0_0));
    if (((*(short *)((v0_0 + 0x1C))) != 5)) goto L_C1492E8;
    FUN_0c1453c4(v0_0, (*(short *)((v0_0 + 0x1E))), 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = v0_3;
    L_C1492E8:;
    if (((int)(*(short *)((v0_0 + 0x1C))) > (int)0x5)) goto L_C149324;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) - 1);
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)(((int)stk + 0)) = v0_1;
    w0_1 = (((struct o4_float *)((v0_4 + (((v0_2 << 1) + v0_2) << 2))))->v);
    w0_2 = ((float)v0_1 * (math_sin_angle16(((*(short *)(((int)stk + 0))) << 13))));
    w0_1 = w0_1;
    w0_1 = w0_1 + w0_0 * w0_2;
    (((struct o2C_float *)(v0_0))->v) = w0_1;
    F0 = (w0_0);
    L_C149324:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_5 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C1493EC;
    v0_5 = (v0_3);
    L_C149334:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_5;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_5 = (0x16);
    goto L_C1493EC;
    L_C149262:;
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_1))->v) = (((((struct o78_int *)(v0_1))->v)) - 0x111);
    (((struct o78_uint *)((*(int *)(((0xC4 + v0_0) + 0x4)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + v0_0) + 0x8)))))->v));
    v0_6 = ((0xC4 + v0_0));
    if (((int)(*(short *)((v0_0 + 0x1C))) > (int)0x4)) goto L_C14929E;
    if ((((((struct o20_short *)(v0_0))->v)) != 0)) goto L_C14929E;
    FUN_0c143a30(v0_0, 0x1);
    (((struct o20_ushort *)(v0_0))->v) = 0x1;
    L_C14929E:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_5 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C1492AE;
    goto L_C1493EC;
    L_C1492AE:;
    v0_5 = (0xA);
    goto L_C149334;
    L_C14922C:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_3;
    (((struct o20_ushort *)(v0_0))->v) = 0x0;
    math_mat_get_translate((v0_0 + 0x64), (((int)stk + 0) + 0x4));
    FUN_0c059e9a((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532498), 0x9, (((int)stk + 0) + 0x4));
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    goto L_C149262;
}
