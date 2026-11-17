/* game/unsorted: functions 0C15B65C-0C15B8DA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c17c4d0(int);
int FUN_0c187798(int, int, int);
int FUN_0c15b65c(int a4, int a5, int a6, int a7);
float FUN_0c15b758(int a4, int a5, int a6, int a7);

int FUN_0c15b65c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x3C) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    } else {
        t2 = (short)(t0 + 0x1);
        t0 = a4;
        t3 = 0x0;
        for (;;) {
            t4 = *(int *)((((0xC4 + a4) + t3) + 0x0));
            if ((*(signed char *)((t4 + 0x0))) != 0) {
                t2 = 0x6C;
                *(float *)((t4 + t2)) = ((*(float *)((t4 + t2))) + ((((struct o18_float *)(t4))->v)));
                t2 = 0x74;
                *(float *)((t4 + t2)) = ((*(float *)((t4 + t2))) + ((((struct o1C_float *)(t4))->v)));
                t2 = 0x70;
                *(float *)((t4 + t2)) = ((*(float *)((t4 + t2))) + ((((struct o20_float *)(t4))->v)));
                t2 = 0x20;
                u2 = *(float *)((t4 + t2));
                *(float *)((t4 + t2)) = (u2 + -1.0f);
                if ((0.0f > (u2 + -1.0f)) && (t2 = 0x2C, u0 = *(float *)((a4 + t2)), t2 = 0x70, u1 = *(float *)((t4 + t2)), u0 > u1)) {
                    *(unsigned char *)((t4 + 0x0)) = 0x0;
                }
                t2 = 0x80;
                t2 = (t2 + t4);
                t4 = t2;
                t2 = (FUN_0c179ac0());
                t5 = 0xC18760C;
                t6 = t2;
                t2 = 0x4000;
                t2 = ((int)((int)t6 % (int)t2));
                t5 = (*(int *)((t4 + 0x0)));
                t5 = (t5 + t2);
                *(unsigned int *)((t4 + 0x0)) = t5;
            } else {
                t4 = t0;
            }
            t3 = (t3 + 0x4);
            t0 = t4;
            if ((unsigned int)t3 >= (unsigned int)0xC) {
                break;
            }
        }
        t1 = t2;
    }
    return t1;
}

float FUN_0c15b758(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register int R12;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_2 = a4;
    v0_3 = a6;
    v0_4 = *(signed char *)((v0_2 + 0x14));
    v0_1 = (v0_4);
    v0_0 = (v0_2);
    if ((v0_4 == 0)) goto L_C15B794;
    if ((v0_1 == 1)) goto L_C15B7A2;
    if ((v0_1 != 2)) goto L_C15B776;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) * 0.899999976f);
    w0_0 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_0 * 1.03999996f);
    (((struct o48_float *)(v0_0))->v) = (w0_0 * 1.03999996f);
    (((struct o44_float *)(v0_0))->v) = (w0_0 * 1.03999996f);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    w0_0 = ((w0_0 * 1.03999996f));
    FPUL_ = (0x3F851EB8);
    if (((short)(v0_2 - 1) != 0)) goto L_C15B8D0;
    L_C15B8C0:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    L_C15B8D0:;
    return F0;
    L_C15B776:;
    if ((v0_1 != 3)) goto L_C15B77E;
    v0_1 = ((FUN_0c03f346(v0_0, a5, v0_3, a7)));
    goto L_C15B8D0;
    L_C15B77E:;
    goto L_C15B8D0;
    L_C15B7A2:;
    v0_1 = *(int *)((v0_0 + 0x10));
    *(volatile signed char *)((v0_1 + 0x1));
    FUN_0c187798(v0_2, 0x0, v0_3);
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - ((((struct o28_float *)(v0_1))->v)));
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o2C_float *)(v0_1))->v)));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o30_float *)(v0_1))->v)));
    FUN_0c17c4d0(((int)stk + 0));
    w0_0 = ((*(float *)(((int)stk + 0))) * ((((struct o378C_float *)(v0_1))->v)));
    w0_1 = ((((struct o28_float *)(v0_1))->v));
    w0_1 = w0_1 + 150.0f * w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_1;
    w0_0 = ((*(float *)(((int)stk + 8))) * ((((struct o378C_float *)(v0_1))->v)));
    w0_1 = ((((struct o30_float *)(v0_1))->v));
    w0_1 = w0_1 + 150.0f * w0_0;
    (((struct o30_float *)(v0_0))->v) = w0_1;
    w0_0 = ((*(float *)(((int)stk + 4))) * ((((struct o378C_float *)(v0_1))->v)));
    w0_1 = ((((struct o2C_float *)(v0_1))->v));
    w0_1 = w0_1 + 150.0f * w0_0;
    (((struct o2C_float *)(v0_0))->v) = w0_1;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) + 0x5);
    w0_0 = math_sin_angle16((int)(((float)(*(short *)((v0_0 + 0x1C))) * 65536.0f) / 360.0f));
    w0_1 = (((((struct o378C_float *)(v0_1))->v)) * 1.5f);
    w0_1 = w0_1 + 0.100000001f * w0_0;
    (((struct o48_float *)(v0_0))->v) = w0_1;
    (((struct o44_float *)(v0_0))->v) = w0_1;
    (((struct o40_float *)(v0_0))->v) = w0_1;
    v0_2 = (v0_1);
    F0 = (0.100000001f);
    w0_0 = (w0_0);
    if (((*(signed char *)((v0_1 + 0x3715))) != 32)) goto L_C15B87A;
    if (((*(signed char *)((v0_2 + 0x3739))) != 26)) goto L_C15B87A;
    v0_2 = *(signed char *)((v0_2 + 0x16));
    v0_1 = (v0_2);
    if ((v0_2 == 2)) goto L_C15B8D0;
    L_C15B87A:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0xA;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x400);
    (((struct oB0_float *)(v0_0))->v) = 1.0f;
    goto L_C15B8C0;
    L_C15B794:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C15B7A2;
}
