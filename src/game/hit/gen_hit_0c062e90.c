/* game/hit: functions 0C062E90-0C064D24, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o128_short { char p[0x128]; short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o404_uint { char p[0x404]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c05ffa4(int, int, int);
int FUN_0c05ffe2(int, int, int, int);
int FUN_0c0600c0(int, float, float, float, float);
float math_interval_overlap(float, float, float, float);
int FUN_0c060180(int, int, int);
int FUN_0c060428(int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c060e70(int, int);
int FUN_0c060ee6(int, int);
int FUN_0c0612ee(int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c061416(int, int, int, int);
int FUN_0c063ea0(int);
int FUN_0c02440e(int);
int FUN_0c0641ca(int, int);
int FUN_0c064cbc(int, int, int);
float math_signed_sqrt(float);
int FUN_0c181bb0(void);
int FUN_0c181c20(float);
int nlLineSetThickness(float);
int FUN_0c18778c(void);
int FUN_0c187798(int, int, int);
int FUN_0c187b60(int, int, int, int);
int FUN_0c062e90(int a4, int a5, int a6, int a7);
int FUN_0c062f0a(int a4, int a5, int a6);
int FUN_0c0630cc(int a4, int a5, int a6);
int FUN_0c063286(int a4, int a5, int a6);
int FUN_0c063448(int a4, int a5, int a6);
int FUN_0c063650(int a4, int a5, int a6);
int FUN_0c0637ce(int a4, int a5, int a6);
int FUN_0c063948(int a4, int a5, int a6);
int FUN_0c063b40(int a4, int a5, int a6);
int FUN_0c063ca4(int a4, int a5, int a6);
int FUN_0c063d5e(int a4, int a5, int a6, int a7);
int FUN_0c063da2(int a4, int a5, int a6, int a7);
int FUN_0c063f06(void);
int thunk_FUN_0c06494c(void);
int FUN_0c063f4a(int a4);
int FUN_0c0640fc(void);
int FUN_0c064116(void);
int FUN_0c064128(void);
int FUN_0c06420e(int a4, float f4, float f5);
int FUN_0c064262(int a4, float f4, float f5);
int FUN_0c064300(int a4, int a5, int a6, float f4);
int FUN_0c064372(int a4, int a5, int a6, float f4);
int FUN_0c06440e(int a4, int a5);
int FUN_0c0644f4(int a4, int a5);
int FUN_0c0645d0(int a4, int a5);
int FUN_0c064696(int a4, int a5);
int FUN_0c06475c(int a4, int a5, float f4);
int FUN_0c06483e(int a4, int a5);
int FUN_0c06485a(void);
int FUN_0c064892(int a4, int a5);
int FUN_0c06491e(void);
int FUN_0c06494c(void);
void FUN_0c064a2c(void);
int FUN_0c064a56(int a4, int a5, int a6);
int FUN_0c064af0(int a4, int a5);
int FUN_0c064b5a(int a4, int a5);
int FUN_0c064bd8(int a4, int a5);
int FUN_0c064c4a(int a4, int a5);

int FUN_0c062e90(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a6 + 0x1));
    t1 = ((int (*)(int, int, int, int))((*(int *)(((0xC25803C + (((t0 << 1) + t0) << 2)) + ((*(signed char *)((a7 + 0x1))) << 2))))))(a4, a5, a6, a7);
    if (t1 != 0) {
        FUN_0c064a56(a4, a5, a7);
        FUN_0c064a56(a5, a4, a6);
    }
    if ((*(signed char *)((a5 + 0x126))) != 2) {
        FUN_0c064cbc(a4, a5, a7);
    }
    t0 = *(signed char *)((a4 + 0x126));
    if (t0 != 2) {
        return FUN_0c064cbc(a5, a4, a6);
    }
    return t0;
}









int FUN_0c063ca4(int a4, int a5, int a6)
{
    int stk[8];
    register int t0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u9;
    register float t10;
    register int t29;
    register int t11;
    register float u20;
    register float u22;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = *(int *)(((int)stk + 4));
    u1 = (((struct oC_float *)((a6 + 0x8)))->v);
    u2 = (((struct oC_float *)((t0 + 0x8)))->v);
    u3 = (((struct o8_float *)((a6 + 0x8)))->v);
    u4 = (((struct o8_float *)((t0 + 0x8)))->v);
    u5 = (((struct o8_float *)(t0))->v);
    u6 = (((struct o8_float *)(a6))->v);
    u9 = ((u4 - u3) * (u4 - u3));
    u9 = u9 + ((u5 - u6)) * ((u5 - u6));
    t10 = math_signed_sqrt(u9);
    t29 = 0x0;
    if (((u2 + u1) - t10) > 0.0f) {
        t11 = FUN_0c0612ee(a5);
        if (t11 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x4)));
            t29 = 0x2;
        } else {
            FUN_0c0600c0((((int)stk + 0) + 0x14), ((((struct o8_float *)(t0))->v)), ((((struct o8_float *)((t0 + 0x8)))->v)), ((((struct o8_float *)(a6))->v)), ((((struct o8_float *)((a6 + 0x8)))->v)));
            u20 = ((*(float *)(((int)stk + 20))) * ((u2 + u1) - t10));
            u20 = -u20;
            *(float *)(((int)stk + 8)) = u20;
            u22 = ((*(float *)(((int)stk + 28))) * ((u2 + u1) - t10));
            u22 = -u22;
            *(float *)(((int)stk + 16)) = u22;
            *(float *)(((int)stk + 12)) = 0.0f;
            FUN_0c060c80(a5, (((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))));
            t29 = 0x1;
        }
    }
    return t29;
}

int FUN_0c063d5e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;

    t0 = *(signed char *)((a4 + 0x1));
    t4 = ((int (*)(int, int, int, int))((*(int *)(((0xC258060 + (((t0 << 1) + t0) << 2)) + ((*(signed char *)((a6 + 0x1))) << 2))))))(a4, a5, a6, a7);
    if (t4 != 0) {
        FUN_0c064af0(a5, a4);
    }
    return FUN_0c064cbc(a5, 0x0, a4);
}

int FUN_0c063da2(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R6;
    int R10;
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
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 20)) = 0xC4F90AC;
    *(unsigned int *)(((int)stk + 8)) = 0xC4F6B2C;
    *(unsigned int *)(((int)stk + 16)) = 0xC4F90AC;
    R10 = (0x10);
    v0_1 = (0xC4F90AC);
    L_C063DC6:;
    v0_1 = *(int *)(((int)stk + 20));
    v0_2 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 20)) = (v0_1 + 0x4);
    v0_1 = *(int *)((((v0_1 + 0x4) - 4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    *(unsigned int *)(((int)stk + 12)) = (v0_1 - 1);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    v0_1 = (0x1);
    v0_2 = (v0_2);
    L_C063E76:;
    if (((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)(((int)stk + 12))))) goto L_C063E00;
    v0_1 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_1 + 0x960);
    if (((unsigned int)(v0_1 + 0x960) < (unsigned int)(*(int *)(((int)stk + 16))))) goto L_C063DC6;
    return R0;
    L_C063E00:;
    v0_3 = (v0_1);
    v0_4 = ((*(int *)((v0_2 + 0x4))));
    v0_5 = ((v0_2 + 0xC));
    v0_6 = ((*(int *)((v0_2 + 0x0))));
    v0_2 = ((v0_2 + 0xC));
    if (((int)v0_1 >= (int)(*(int *)(((int)stk + 0))))) goto L_C063E6E;
    L_C063E10:;
    v0_7 = *(int *)((v0_5 + 0x0));
    v0_8 = (v0_7);
    if ((v0_6 == v0_7)) goto L_C063E64;
    if ((v0_6 != 0)) goto L_C063E2C;
    R0 = (0x12E);
    if (((((((struct o12E_short *)(v0_8))->v)) & R10) == 0)) goto L_C063E64;
    R0 = ((FUN_0c063d5e(v0_4, v0_8, (*(int *)((v0_5 + 0x4))), v0_0)));
    L_C063E64:;
    v0_7 = (int)(v0_3 + 0x1) < (int)(*(int *)(((int)stk + 0)));
    v0_3 = ((v0_3 + 0x1));
    v0_5 = ((v0_5 + 0xC));
    if (v0_7) goto L_C063E10;
    L_C063E6E:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C063E76;
    L_C063E2C:;
    if ((v0_8 != 0)) goto L_C063E44;
    R0 = (0x12E);
    if (((((((struct o12E_short *)(v0_6))->v)) & R10) == 0)) goto L_C063E64;
    R0 = ((FUN_0c063d5e((*(int *)((v0_5 + 0x4))), v0_6, v0_4, v0_0)));
    goto L_C063E64;
    L_C063E44:;
    R0 = (0x12E);
    if (((((((struct o128_short *)(v0_6))->v)) & ((((struct o12E_short *)(v0_8))->v))) == 0)) goto L_C063E64;
    R0 = (0x128);
    if (((((((struct o12E_short *)(v0_6))->v)) & ((((struct o128_short *)(v0_8))->v))) == 0)) goto L_C063E64;
    R0 = ((FUN_0c062e90(v0_6, v0_8, v0_4, (*(int *)((v0_5 + 0x4))))));
    goto L_C063E64;
}

int FUN_0c063f06(void)
{
    FUN_0c063ea0(((((struct o0_int *)0xC532434)->v)));
    FUN_0c063ea0(((((struct o4_int *)0xC532434)->v)));
    FUN_0c063ea0(((((struct o8_int *)0xC532434)->v)));
    return FUN_0c063ea0(((((struct o24_int *)0xC532434)->v)));
}

int thunk_FUN_0c06494c(void)
{
    return FUN_0c06494c();
}


int FUN_0c0640fc(void)
{
    FUN_0c02440e(((((struct o0_int *)0xC532434)->v)));
    FUN_0c02440e(((((struct o8_int *)0xC532434)->v)));
    FUN_0c02440e(((((struct o4_int *)0xC532434)->v)));
    return FUN_0c02440e(((((struct o24_int *)0xC532434)->v)));
}

int FUN_0c064116(void)
{
    FUN_0c181c20((*(float *)0xC0642C4));
    return nlLineSetThickness(1.0f);
}

int FUN_0c064128(void)
{
    register float u0;
    register float u1;
    register float u2;
    register int t3;
    register float u4;
    register int t6;
    register float u7;
    register int t8;

    u0 = (((struct o0_float *)0xC0642D8)->v);
    u1 = (((struct o4_float *)0xC0642D8)->v);
    u2 = (((struct o8_float *)0xC0642D8)->v);
    t3 = 0x0;
    for (;;) {
        u4 = u2;
        u4 = u4 + u0 * (float)t3;
        FUN_0c181bb0();
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x64) {
            break;
        }
    }
    t6 = 0x0;
    for (;;) {
        u7 = u2;
        u7 = u7 + u0 * (float)t6;
        t8 = FUN_0c181bb0();
        t6 = (t6 + 0x1);
        if ((int)t6 >= (int)0x64) {
            break;
        }
    }
    return t8;
}

int FUN_0c06420e(int a4, float f4, float f5)
{

    register int R0;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    w0_0 = f4;
    w0_1 = f5;
    w0_2 = (((struct o0_float *)0xC471A5C)->v);
    v0_1 = (0xC471A5C);
    w0_3 = (w0_2);
    if ((!(w0_0 > w0_2))) goto L_C064238;
    R0 = (0x4);
    if ((!(w0_1 > ((((struct o4_float *)(v0_1))->v))))) goto L_C064224;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x1));
    L_C064248:;
    *(unsigned int *)((v0_0 + 0x0)) = R0;
    L_C06425E:;
    return R0;
    L_C064224:;
    if ((!(w0_0 > w0_3))) goto L_C064238;
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > w0_1))) goto L_C064238;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x2));
    goto L_C064248;
    L_C064238:;
    if ((!(w0_3 > w0_0))) goto L_C06425E;
    if ((!(w0_1 > ((((struct o4_float *)0xC471A5C)->v))))) goto L_C06424C;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x4));
    goto L_C064248;
    L_C06424C:;
    if ((!(w0_3 > w0_0))) goto L_C06425E;
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > w0_1))) goto L_C06425E;
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_1 | 0x8);
    R0 = ((v0_1 | 0x8));
    goto L_C06425E;
}

int FUN_0c064262(int a4, float f4, float f5)
{

    register int R0;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    w0_0 = f4;
    w0_1 = f5;
    w0_2 = (((struct o0_float *)0xC471A5C)->v);
    v0_1 = (0xC471A5C);
    w0_3 = (w0_2);
    if ((!(w0_0 > w0_2))) goto L_C06428C;
    R0 = (0x4);
    if ((!(w0_1 > ((((struct o4_float *)(v0_1))->v))))) goto L_C064278;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x10));
    L_C06429C:;
    *(unsigned int *)((v0_0 + 0x0)) = R0;
    L_C0642B2:;
    return R0;
    L_C064278:;
    if ((!(w0_0 > w0_3))) goto L_C06428C;
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > w0_1))) goto L_C06428C;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x20));
    goto L_C06429C;
    L_C06428C:;
    if ((!(w0_3 > w0_0))) goto L_C0642B2;
    if ((!(w0_1 > ((((struct o4_float *)0xC471A5C)->v))))) goto L_C0642A0;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x40));
    goto L_C06429C;
    L_C0642A0:;
    if ((!(w0_3 > w0_0))) goto L_C0642B2;
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > w0_1))) goto L_C0642B2;
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_1 | 0x80);
    R0 = ((v0_1 | 0x80));
    goto L_C0642B2;
}

int FUN_0c064300(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & a6) != 0) {
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + 0xC4F90AC);
            t3 = *(int *)((t2 + 0x0));
            t1 = 0x8;
            t4 = (t0 * 0x960);
            t5 = t3;
            t4 = (t4 + 0xC4F6B2C);
            *(float *)((((((t3 << 1) + t5) << 2) + t4) + t1)) = f4;
            t3 = *(int *)((t2 + 0x0));
            t5 = t3;
            *(unsigned int *)((((((t3 << 1) + t5) << 2) + t4) + 0x4)) = a5;
            t3 = *(int *)((t2 + 0x0));
            *(unsigned int *)((t2 + 0x0)) = (t3 + 0x1);
            t5 = ((t3 + 0x1) - 1);
            t4 = (t4 + (((((t3 + 0x1) - 1) << 1) + t5) << 2));
            *(unsigned int *)((t4 + 0x0)) = a4;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c064372(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & a6) != 0) {
            t2 = 0x960;
            t3 = t0;
            t3 = (t3 << 2);
            t4 = 0xC4F6B2C;
            t5 = 0x0;
            t6 = 0x0;
            t3 = (t3 + 0xC4F90AC);
            t2 = (t0 * t2);
            t2 = (t2 + t4);
            t1 = t2;
            t7 = 0xC4F90AC;
            for (;;) {
                t4 = (*(int *)((t3 + 0x0)));
                if ((int)t6 >= (int)t4) {
                    break;
                }
                t7 = t6;
                t7 = (t7 << 1);
                t4 = t6;
                t7 = (t7 + t4);
                t7 = (t7 << 2);
                t6 = (t6 + 0x1);
                if (((*(int *)((t7 + t1)))) == a4) {
                    t5 = 0x1;
                }
            }
            if (t5 == 0) {
                t5 = *(int *)((t3 + 0x0));
                t1 = 0x8;
                t6 = t2;
                t4 = t5;
                *(float *)((((((t5 << 1) + t4) << 2) + t2) + t1)) = f4;
                t2 = *(int *)((t3 + 0x0));
                t4 = t2;
                *(unsigned int *)((((((t2 << 1) + t4) << 2) + t6) + 0x4)) = a5;
                t2 = *(int *)((t3 + 0x0));
                *(unsigned int *)((t3 + 0x0)) = (t2 + 0x1);
                t4 = ((t2 + 0x1) - 1);
                t6 = (t6 + (((((t2 + 0x1) - 1) << 1) + t4) << 2));
                *(unsigned int *)((t6 + 0x0)) = a4;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}






int FUN_0c06483e(int a4, int a5)
{
    register float u0;
    register float u1;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    if (u1 > u0) {
        return 0xFFFFFFFF;
    }
    if (u0 == u1) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c06485a(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0xC4F6B2C;
    t1 = 0xC4F90AC;
    for (;;) {
        t2 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t3 = FUN_0c187b60(t0, t2, 0xC, 0xC06483E);
        t0 = (t0 + 0x960);
        if ((unsigned int)t1 >= (unsigned int)0xC4F90BC) {
            break;
        }
    }
    return t3;
}


int FUN_0c06491e(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0xC4F6B2C;
    t1 = 0xC4F90AC;
    for (;;) {
        t2 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t3 = FUN_0c064892(t0, t2);
        t0 = (t0 + 0x960);
        if ((unsigned int)t1 >= (unsigned int)0xC4F90BC) {
            break;
        }
    }
    return t3;
}


void FUN_0c064a2c(void)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)0xC4F45A4 = 0xC4F45A8;
    t0 = 0xC4F45A4;
    t1 = 0x1;
    t2 = 0xC4F45A8;
    for (;;) {
        if (t1 != 0x320) {
            t0 = t2;
            t0 = (t0 + 0xC);
            *(unsigned int *)((t2 + 0x0)) = t0;
        }
        t1 = (t1 + 0x1);
        t2 = (t2 + 0xC);
        if ((int)t1 >= (int)0x321) {
            break;
        }
    }
    *(unsigned int *)0xC4F6B28 = 0x320;
}

int FUN_0c064a56(int a4, int a5, int a6)
{
    register int t4;
    register int t5;
    register int t6;

    if ((int)(*(int *)0xC4F6B28) <= (int)0x1) {
        return 0xFFFFFFFF;
    }
    t6 = (((struct o404_int *)(a4))->v);
    t4 = *(int *)0xC4F45A4;
    if (t6 != 0) {
        t5 = t6;
        for (;;) {
            if (t6 == 0) {
                *(unsigned int *)0xC4F45A4 = (*(int *)((t4 + 0x0)));
                *(unsigned int *)0xC4F6B28 = ((*(int *)0xC4F6B28) - 1);
                *(unsigned int *)((t4 + 0x0)) = 0x0;
                *(unsigned int *)((t4 + 0x4)) = a5;
                *(unsigned int *)((t4 + 0x8)) = a6;
                *(unsigned int *)((t5 + 0x0)) = t4;
                return 0x0;
            }
            if ((*(int *)((t6 + 0x8))) == a6) {
                break;
            }
            t6 = (*(int *)((t6 + 0x0)));
            if (t6 != 0) {
                t5 = t6;
            }
        }
        return 0x1;
    }
    *(unsigned int *)0xC4F45A4 = (*(int *)((t4 + 0x0)));
    *(unsigned int *)0xC4F6B28 = ((*(int *)0xC4F6B28) - 1);
    *(unsigned int *)((t4 + 0x0)) = 0x0;
    *(unsigned int *)((t4 + 0x4)) = a5;
    *(unsigned int *)((t4 + 0x8)) = a6;
    (((struct o404_uint *)(a4))->v) = t4;
    return 0x0;
}

int FUN_0c064af0(int a4, int a5)
{
    register int t4;
    register int t5;
    register int t6;

    if ((int)(*(int *)0xC4F6B28) <= (int)0x1) {
        return 0xFFFFFFFF;
    }
    t6 = (((struct o404_int *)(a4))->v);
    t4 = *(int *)0xC4F45A4;
    if (t6 != 0) {
        t5 = t6;
        for (;;) {
            if (t6 == 0) {
                *(unsigned int *)0xC4F45A4 = (*(int *)((t4 + 0x0)));
                *(unsigned int *)0xC4F6B28 = ((*(int *)0xC4F6B28) - 1);
                *(unsigned int *)((t4 + 0x0)) = 0x0;
                *(unsigned int *)((t4 + 0x4)) = 0x0;
                *(unsigned int *)((t4 + 0x8)) = a5;
                *(unsigned int *)((t5 + 0x0)) = t4;
                return 0x0;
            }
            if ((*(int *)((t6 + 0x8))) == a5) {
                break;
            }
            t6 = (*(int *)((t6 + 0x0)));
            if (t6 != 0) {
                t5 = t6;
            }
        }
        return 0x1;
    }
    *(unsigned int *)0xC4F45A4 = (*(int *)((t4 + 0x0)));
    *(unsigned int *)0xC4F6B28 = ((*(int *)0xC4F6B28) - 1);
    *(unsigned int *)((t4 + 0x0)) = 0x0;
    *(unsigned int *)((t4 + 0x4)) = 0x0;
    *(unsigned int *)((t4 + 0x8)) = a5;
    (((struct o404_uint *)(a4))->v) = t4;
    return 0x0;
}

int FUN_0c064b5a(int a4, int a5)
{
    register float u0;
    register float u1;
    float u3;

    u0 = (((struct o10_float *)(a5))->v);
    u1 = (((struct o4_float *)(a5))->v);
    if (!((u1 + u0) > (((((struct o2C_float *)(a4))->v)) + 1.0f)) && (u3 = (((struct o168_float *)(a4))->v), (u1 + u0) > u3)) {
        if (!(((*(float *)((a5 + 0x0))) - ((((struct oC_float *)(a5))->v))) > ((((struct o28_float *)(a4))->v)))) {
            if (!(((((struct o28_float *)(a4))->v)) > ((*(float *)((a5 + 0x0))) + ((((struct oC_float *)(a5))->v))))) {
                if (!((((((struct o8_float *)(a5))->v)) - ((((struct o14_float *)(a5))->v))) > ((((struct o30_float *)(a4))->v)))) {
                    if (!(((((struct o30_float *)(a4))->v)) > (((((struct o8_float *)(a5))->v)) + ((((struct o14_float *)(a5))->v))))) {
                        (((struct o168_float *)(a4))->v) = (u1 + u0);
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c064bd8(int a4, int a5)
{
    register int t0;
    float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u1 = (((struct o10_float *)(a5))->v);
    u2 = (((struct o4_float *)(a5))->v);
    t0 = 0x0;
    if (!((u2 + u1) > (((((struct o2C_float *)(a4))->v)) + 1.0f)) && (u0 = (((struct o168_float *)(a4))->v), (u2 + u1) > u0)) {
        u0 = *(float *)((a5 + 0x0));
        u3 = (((struct o28_float *)(a4))->v);
        u4 = (((struct o30_float *)(a4))->v);
        u5 = (((struct o8_float *)(a5))->v);
        u6 = ((u5 - u4) * (u5 - u4));
        u6 = u6 + ((u0 - u3)) * ((u0 - u3));
        u0 = math_signed_sqrt(u6);
        t0 = 0x0;
        if (!(0.0f > (((((struct oC_float *)(a5))->v)) - u0))) {
            (((struct o168_float *)(a4))->v) = (u2 + u1);
            t0 = 0x1;
        }
    }
    return t0;
}

int FUN_0c064c4a(int a4, int a5)
{
    register int t0;
    float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u1 = (((struct oC_float *)(a5))->v);
    u2 = (((struct o4_float *)(a5))->v);
    t0 = 0x0;
    if (!((u2 + u1) > (((((struct o2C_float *)(a4))->v)) + 1.0f)) && (u0 = (((struct o168_float *)(a4))->v), (u2 + u1) > u0)) {
        u0 = *(float *)((a5 + 0x0));
        u3 = (((struct o28_float *)(a4))->v);
        u4 = (((struct o30_float *)(a4))->v);
        u5 = (((struct o8_float *)(a5))->v);
        u6 = ((u5 - u4) * (u5 - u4));
        u6 = u6 + ((u0 - u3)) * ((u0 - u3));
        u0 = math_signed_sqrt(u6);
        t0 = 0x0;
        if (!(0.0f > (((((struct oC_float *)(a5))->v)) - u0))) {
            (((struct o168_float *)(a4))->v) = (u2 + u1);
            t0 = 0x1;
        }
    }
    return t0;
}


