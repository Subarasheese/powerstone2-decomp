/* game/hit: functions 0C05FFA4-0C062660, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o133_uchar { char p[0x133]; unsigned char v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o16C_float { char p[0x16C]; float v; };
struct o174_float { char p[0x174]; float v; };
struct o178_float { char p[0x178]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o180_float { char p[0x180]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o375E_uchar { char p[0x375E]; unsigned char v; };
struct o404_uint { char p[0x404]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c056eae(int);
int FUN_0c056eee(void);
int math_mat_transform_vector(int, int);
int FUN_0c0582de(int, int);
int FUN_0c060454(int, int);
int FUN_0c060d74(int);
int FUN_0c06115c(int);
int FUN_0c06420e(int, float, float);
int FUN_0c06475c(int, int, float);
int FUN_0c06491e(void);
int FUN_0c064a2c(void);
int FUN_0c064cbc(int, int, int, float);
float math_signed_sqrt(float);
int nlSelectMatrixStack(int);
int math_vec3_accumulate(int, int);
float FUN_0c0e2240(int, int);
float FUN_0c0e2340(int);
int FUN_0c17c2d0(int, int);
int FUN_0c17c4d0(int);
int FUN_0c18778c(void);
int FUN_0c187798(int, int, int);
int FUN_0c05ffa4(int a4, int a5, int a6);
int FUN_0c05ffe2(int a4, int a5, int a6, int a7);
int FUN_0c060028(int a4, int a5, int a6);
int FUN_0c060074(int a4, int a5, int a6);
int FUN_0c0600c0(int a4, float f4, float f5, float f6, float f7);
int FUN_0c060180(int a4, int a5, int a6);
int FUN_0c0601da(int a4, int a5, float f4);
float FUN_0c060290(int a4, int a5);
int FUN_0c060376(int a4, int a5);
int FUN_0c06050c(int a4);
float FUN_0c0605e6(int a4);
void FUN_0c060612(void);
int FUN_0c060624(int a4, int a5, int a6);
int FUN_0c060682(int a4, int a5, int a6);
void FUN_0c0606e0(int a4, int a5, int a6);
float FUN_0c06078c(int a4, int a5, int a6);
float FUN_0c060812(int a4, int a5, int a6);
float FUN_0c0608d8(int a4, int a5, int a6);
float FUN_0c0609a0(int a4, int a5, int a6);
int FUN_0c060a84(int a4);
int FUN_0c060a9c(int a4, int a5, int a6, int a7);
int FUN_0c060bc2(void);
int FUN_0c060bd8(void);
int FUN_0c060c2c(int a4, int a5, int a6, int a7, int a8);
int FUN_0c060c80(int a4, int a5, int a6);
int FUN_0c060ca2(int a4, int a5, int a6, int a7);
int FUN_0c060d0e(int a4, int a5, int a6);
int FUN_0c060e70(int a4, int a5);
int FUN_0c060ee6(int a4, int a5, float f4);
int FUN_0c060fc2(int a4, int a5);
int FUN_0c06104e(void);
int FUN_0c061072(int a4, int a5, float f4);
int FUN_0c0610fa(int a4);
int FUN_0c0611f0(void);
int FUN_0c061222(int a4, int a5, int a6, float f4);
int FUN_0c061284(int a4, int a5);
int FUN_0c0612cc(int a4, int a5);
int FUN_0c0612ee(int a4);
int FUN_0c06130a(int a4, int a5, int a6, int a7);
int FUN_0c061416(int a4, int a5, int a6, int a7);
int FUN_0c06151a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c061604(int a4, int a5, int a6, int a7);

int FUN_0c05ffa4(int a4, int a5, int a6)
{
    register int t13;

    if (a4 != 1) {
        if (a4 != 2) {
            
            t13 = ((((struct o4_int *)0xC4F459C)->v));
        } else {
            t13 = ((((struct o0_int *)0xC4F459C)->v));
        }
    } else {
        t13 = (*(int *)(((a5 << 2) + 0xC4F458C)));
    }
    return (t13 + ((((((a6 << 2) + a6) << 1) << 2) << 2) << 1));
}

int FUN_0c05ffe2(int a4, int a5, int a6, int a7)
{
    register int t13;

    if (a4 != 1) {
        if (a4 != 2) {
            
            t13 = ((((struct o4_int *)0xC4F459C)->v));
        } else {
            t13 = ((((struct o0_int *)0xC4F459C)->v));
        }
    } else {
        t13 = (*(int *)(((a5 << 2) + 0xC4F458C)));
    }
    return (t13 + (((((((a6 << 2) + a6) << 1) + a7) << 2) << 2) << 1));
}

int FUN_0c060028(int a4, int a5, int a6)
{
    register float t6;

    *(float *)((a6 + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    (((struct o4_float *)(a6))->v) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a4))->v)));
    (((struct o8_float *)(a6))->v) = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a4))->v)));
    t6 = FUN_0c0e2340(a6);
    if (t6 != 0.0f) {
        return FUN_0c17c4d0(a6);
    }
    *(float *)((a6 + 0x0)) = 1.0f;
    (((struct o4_float *)(a6))->v) = 0.0f;
    (((struct o8_float *)(a6))->v) = 0.0f;
    return 0x8;
}

int FUN_0c060074(int a4, int a5, int a6)
{
    register float t4;

    *(float *)((a6 + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    (((struct o4_float *)(a6))->v) = 0.0f;
    (((struct o8_float *)(a6))->v) = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a4))->v)));
    t4 = FUN_0c0e2340(a6);
    if (t4 != 0.0f) {
        return FUN_0c17c4d0(a6);
    }
    *(float *)((a6 + 0x0)) = 1.0f;
    (((struct o4_float *)(a6))->v) = 0.0f;
    (((struct o8_float *)(a6))->v) = 0.0f;
    return 0x8;
}

int FUN_0c0600c0(int a4, float f4, float f5, float f6, float f7)
{
    register float t0;

    *(float *)((a4 + 0x0)) = (f6 - f4);
    (((struct o4_float *)(a4))->v) = 0.0f;
    (((struct o8_float *)(a4))->v) = (f7 - f5);
    t0 = FUN_0c0e2340(a4);
    if (t0 != 0.0f) {
        return FUN_0c17c4d0(a4);
    }
    *(float *)((a4 + 0x0)) = 1.0f;
    (((struct o4_float *)(a4))->v) = 0.0f;
    (((struct o8_float *)(a4))->v) = 0.0f;
    return 0x8;
}

int FUN_0c060180(int a4, int a5, int a6)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a6;
    if ((*(signed char *)(((int)stk + 0))) != -1) {
        return FUN_0c0582de(a5, ((*(int *)(((((*(signed char *)(((int)stk + 0))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28));
    }
    if (((((struct oA4_int *)(a4))->v)) != 0) {
        return FUN_0c0582de(a5, (a4 + 0x64));
    }
    math_mat_transform_vector(a5, (a4 + 0x64));
    return math_vec3_accumulate(a5, (a4 + 0x28));
}

int FUN_0c0601da(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    float u0;
    float u1;
    float u2;
    float u3;
    register float u4;

    t0 = *(signed char *)((a5 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                u4 = *(float *)((a4 + 0x0));
                if (!(((((struct o4_float *)(a4))->v)) > u4) && (u0 = (((struct o8_float *)(a4))->v), !(u0 > u4))) {
                    (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * (*(float *)((a4 + 0x0))));
                } else {
                    u0 = (((struct o8_float *)(a4))->v);
                    t0 = 0x4;
                    if (!((*(float *)((a4 + 0x0))) > u0) && (u1 = (((struct o4_float *)(a4))->v), !(u1 > u0))) {
                        t0 = 0x8;
                    }
                    (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * (*(float *)(((t0 + a4) + 0x0))));
                }
                t0 = 0x14;
            } else {
                if (!(((((struct o8_float *)(a4))->v)) > (*(float *)((a4 + 0x0))))) {
                    u0 = (*(float *)((a4 + 0x0)));
                } else {
                    u0 = ((((struct o8_float *)(a4))->v));
                }
                (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * u0);
                (((struct o18_float *)(a5))->v) = (((((struct o18_float *)(a5))->v)) * ((((struct o4_float *)(a4))->v)));
                t0 = 0x18;
            }
            t1 = t0;
        } else {
            (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * (*(float *)((a4 + 0x0))));
            (((struct o18_float *)(a5))->v) = (((((struct o18_float *)(a5))->v)) * ((((struct o4_float *)(a4))->v)));
            (((struct o1C_float *)(a5))->v) = (((((struct o1C_float *)(a5))->v)) * ((((struct o8_float *)(a4))->v)));
            t1 = 0x1C;
        }
        t0 = t1;
    } else {
        u0 = *(float *)((a4 + 0x0));
        if (!(((((struct o4_float *)(a4))->v)) > u0) && (u2 = (((struct o8_float *)(a4))->v), !(u2 > u0))) {
            (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * (*(float *)((a4 + 0x0))));
        } else {
            u0 = (((struct o8_float *)(a4))->v);
            t1 = 0x4;
            if (!((*(float *)((a4 + 0x0))) > u0) && (u3 = (((struct o4_float *)(a4))->v), !(u3 > u0))) {
                t1 = 0x8;
            }
            (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * (*(float *)(((t1 + a4) + 0x0))));
        }
        t0 = 0x14;
    }
    return t0;
}

float FUN_0c060290(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(signed char *)((a5 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t0 = *(int *)(((((*(signed char *)((a5 + 0x2))) << 2) + (0xC4 + a4)) + 0x0));
                u0 = (((struct o4_float *)((t0 + 0x28)))->v);
                u1 = (((struct o8_float *)((t0 + 0x28)))->v);
                u2 = (((struct o28_float *)(t0))->v);
                u3 = (u1 * u1);
                u3 = u3 + u0 * u0;
                u0 = u3;
                u0 = u0 + u2 * u2;
                u1 = math_signed_sqrt(u0);
                (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * u1);
                u0 = u1;
            } else {
                t0 = *(int *)(((((*(signed char *)((a5 + 0x2))) << 2) + (0xC4 + a4)) + 0x0));
                u1 = (((struct o4_float *)((t0 + 0x28)))->v);
                u2 = (((struct o8_float *)((t0 + 0x28)))->v);
                u3 = (((struct o28_float *)(t0))->v);
                u4 = (u2 * u2);
                u4 = u4 + u1 * u1;
                u1 = u4;
                u1 = u1 + u3 * u3;
                u2 = math_signed_sqrt(u1);
                (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * u2);
                (((struct o18_float *)(a5))->v) = (((((struct o18_float *)(a5))->v)) * u2);
                u0 = u2;
            }
            u1 = u0;
        } else {
            t0 = *(int *)(((((*(signed char *)((a5 + 0x2))) << 2) + (0xC4 + a4)) + 0x0));
            u0 = (((struct o4_float *)((t0 + 0x28)))->v);
            u2 = (((struct o8_float *)((t0 + 0x28)))->v);
            u3 = (((struct o28_float *)(t0))->v);
            u4 = (u2 * u2);
            u4 = u4 + u0 * u0;
            u0 = u4;
            u0 = u0 + u3 * u3;
            u2 = math_signed_sqrt(u0);
            (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * u2);
            (((struct o18_float *)(a5))->v) = (((((struct o18_float *)(a5))->v)) * u2);
            (((struct o1C_float *)(a5))->v) = (((((struct o1C_float *)(a5))->v)) * u2);
            u1 = u2;
        }
        u0 = u1;
    } else {
        t0 = *(int *)(((((*(signed char *)((a5 + 0x2))) << 2) + (0xC4 + a4)) + 0x0));
        u1 = (((struct o4_float *)((t0 + 0x28)))->v);
        u2 = (((struct o8_float *)((t0 + 0x28)))->v);
        u3 = (((struct o28_float *)(t0))->v);
        u4 = (u2 * u2);
        u4 = u4 + u1 * u1;
        u1 = u4;
        u1 = u1 + u3 * u3;
        u2 = math_signed_sqrt(u1);
        (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * u2);
        u0 = u2;
    }
    return u0;
}

int FUN_0c060376(int a4, int a5)
{

    register int R12;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_1 = a5;
    v0_3 = *(signed char *)((v0_1 + 0x1));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C060388;
    if ((v0_2 == 1)) goto L_C0603D4;
    if ((v0_2 == 2)) goto L_C0603F6;
    L_C060388:;
    w0_1 = (((struct o40_float *)(v0_0))->v);
    w0_0 = (w0_1);
    if ((((((struct o44_float *)(v0_0))->v)) > w0_1)) goto L_C0603A2;
    if ((((((struct o48_float *)(v0_0))->v)) > w0_0)) goto L_C0603A2;
    v0_2 = (0x14);
    v0_3 = (0x40);
    L_C06041A:;
    *(float *)((v0_1 + v0_2)) = ((*(float *)((v0_1 + v0_2))) * (*(float *)(((v0_3 + v0_0) + 0x0))));
    L_C060424:;
    return v0_2;
    L_C0603A2:;
    w0_1 = (((struct o48_float *)(v0_0))->v);
    w0_0 = (w0_1);
    if ((((((struct o40_float *)(v0_0))->v)) > w0_1)) goto L_C0603C4;
    if ((((((struct o44_float *)(v0_0))->v)) > w0_0)) goto L_C0603C4;
    v0_2 = (0x14);
    v0_3 = (0x48);
    L_C0603C8:;
    *(float *)((v0_1 + v0_2)) = ((*(float *)((v0_1 + v0_2))) * (*(float *)(((v0_3 + v0_0) + 0x0))));
    goto L_C060424;
    L_C0603C4:;
    v0_2 = (0x14);
    v0_3 = (0x44);
    goto L_C0603C8;
    L_C0603F6:;
    if ((((((struct o48_float *)(v0_0))->v)) > ((((struct o40_float *)(v0_0))->v)))) goto L_C060408;
    v0_2 = (0x14);
    v0_3 = (0x40);
    L_C06040C:;
    *(float *)((v0_1 + v0_2)) = ((*(float *)((v0_1 + v0_2))) * (*(float *)(((v0_3 + v0_0) + 0x0))));
    v0_2 = (0x18);
    v0_3 = (0x44);
    goto L_C06041A;
    L_C060408:;
    v0_2 = (0x14);
    v0_3 = (0x48);
    goto L_C06040C;
    L_C0603D4:;
    (((struct o14_float *)(v0_1))->v) = (((((struct o14_float *)(v0_1))->v)) * ((((struct o40_float *)(v0_0))->v)));
    (((struct o18_float *)(v0_1))->v) = (((((struct o18_float *)(v0_1))->v)) * ((((struct o44_float *)(v0_0))->v)));
    v0_2 = (0x1C);
    v0_3 = (0x48);
    goto L_C06041A;
}

int FUN_0c06050c(int a4)
{
    int stk[1];
    int t0;
    register float u2;
    register float u6;
    register float u10;
    register float u14;
    register float u42;
    register float u46;
    register float u50;
    register float u54;
    register float u59;
    register float u60;
    register float u38;
    register float u39;

    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = *(signed char *)((a4 + 0x1));
    if ((t0 != 0) && (t0 != 2)) {
        if (t0 != 1) {
            u2 = (((struct oC_float *)((a4 + 0x8)))->v);
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a4))->v)) + u2), (((((struct o8_float *)((a4 + 0x8)))->v)) + u2));
            u6 = (((struct oC_float *)((a4 + 0x8)))->v);
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a4))->v)) - u6), (((((struct o8_float *)((a4 + 0x8)))->v)) + u6));
            u10 = (((struct oC_float *)((a4 + 0x8)))->v);
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a4))->v)) + u10), (((((struct o8_float *)((a4 + 0x8)))->v)) - u10));
            u14 = (((struct oC_float *)((a4 + 0x8)))->v);
            u38 = (((((struct o8_float *)(a4))->v)) - u14);
            u39 = (((((struct o8_float *)((a4 + 0x8)))->v)) - u14);
        } else {
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a4))->v)) + ((((struct oC_float *)((a4 + 0x8)))->v))), (((((struct o8_float *)((a4 + 0x8)))->v)) + ((((struct o14_float *)((a4 + 0x8)))->v))));
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a4))->v)) - ((((struct oC_float *)((a4 + 0x8)))->v))), (((((struct o8_float *)((a4 + 0x8)))->v)) + ((((struct o14_float *)((a4 + 0x8)))->v))));
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a4))->v)) + ((((struct oC_float *)((a4 + 0x8)))->v))), (((((struct o8_float *)((a4 + 0x8)))->v)) - ((((struct o14_float *)((a4 + 0x8)))->v))));
            u38 = (((((struct o8_float *)(a4))->v)) - ((((struct oC_float *)((a4 + 0x8)))->v)));
            u39 = (((((struct o8_float *)((a4 + 0x8)))->v)) - ((((struct o14_float *)((a4 + 0x8)))->v)));
        }
        u59 = u38;
        u60 = u39;
    } else {
        u42 = (((struct oC_float *)((a4 + 0x8)))->v);
        FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a4))->v)) + u42), (((((struct o8_float *)((a4 + 0x8)))->v)) + u42));
        u46 = (((struct oC_float *)((a4 + 0x8)))->v);
        FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a4))->v)) - u46), (((((struct o8_float *)((a4 + 0x8)))->v)) + u46));
        u50 = (((struct oC_float *)((a4 + 0x8)))->v);
        FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a4))->v)) + u50), (((((struct o8_float *)((a4 + 0x8)))->v)) - u50));
        u54 = (((struct oC_float *)((a4 + 0x8)))->v);
        u59 = (((((struct o8_float *)(a4))->v)) - u54);
        u60 = (((((struct o8_float *)((a4 + 0x8)))->v)) - u54);
    }
    FUN_0c06420e(((int)stk + 0), u59, u60);
    return (*(int *)(((int)stk + 0)));
}

float FUN_0c0605e6(int a4)
{
    register int t3;

    t3 = 0xC;
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        
        t3 = 0x10;
    }
    return (((((struct o4_float *)((a4 + 0x8)))->v)) + (*(float *)(((a4 + 0x8) + t3))));
}

void FUN_0c060612(void)
{
    
}

int FUN_0c060624(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & a6) != 0) {
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + 0xC4FB63C);
            t3 = *(int *)((t2 + 0x0));
            t1 = (t0 * 0x960);
            t4 = t3;
            t1 = (t1 + 0xC4F90BC);
            *(unsigned int *)((((((t3 << 1) + t4) << 2) + t1) + 0x4)) = a5;
            t3 = *(int *)((t2 + 0x0));
            *(unsigned int *)((t2 + 0x0)) = (t3 + 0x1);
            t4 = ((t3 + 0x1) - 1);
            t1 = (t1 + (((((t3 + 0x1) - 1) << 1) + t4) << 2));
            *(unsigned int *)((t1 + 0x0)) = a4;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c060682(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & a6) != 0) {
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + 0xC4FDBCC);
            t3 = *(int *)((t2 + 0x0));
            t1 = (t0 * 0x960);
            t4 = t3;
            t1 = (t1 + 0xC4FB64C);
            *(unsigned int *)((((((t3 << 1) + t4) << 2) + t1) + 0x4)) = a5;
            t3 = *(int *)((t2 + 0x0));
            *(unsigned int *)((t2 + 0x0)) = (t3 + 0x1);
            t4 = ((t3 + 0x1) - 1);
            t1 = (t1 + (((((t3 + 0x1) - 1) << 1) + t4) << 2));
            *(unsigned int *)((t1 + 0x0)) = a4;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

void FUN_0c0606e0(int a4, int a5, int a6)
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

    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & a6) != 0) {
            t1 = 0xC4FDBCC;
            t2 = t0;
            t2 = (t2 << 2);
            t3 = 0xC4FB63C;
            t1 = (t1 + t2);
            t4 = 0xC4FB64C;
            t5 = *(int *)((t1 + 0x0));
            t3 = (t3 + t2);
            t2 = (t0 * 0x960);
            t6 = t5;
            t4 = (t4 + t2);
            t7 = t3;
            t3 = (*(int *)((t3 + 0x0)));
            t8 = 0xC4F90BC;
            t9 = ((((t5 << 1) + t6) << 2) + t4);
            t6 = t3;
            t3 = (t3 << 1);
            t3 = (t3 + t6);
            t8 = (t8 + t2);
            t3 = (t3 << 2);
            t3 = (t3 + t8);
            *(unsigned int *)((t3 + 0x4)) = a5;
            *(unsigned int *)((t9 + 0x4)) = a5;
            t2 = *(int *)((t1 + 0x0));
            *(unsigned int *)((t1 + 0x0)) = (t2 + 0x1);
            t6 = ((t2 + 0x1) - 1);
            t4 = (t4 + (((((t2 + 0x1) - 1) << 1) + t6) << 2));
            t6 = (*(int *)((t7 + 0x0)));
            t6 = (t6 + 0x1);
            *(unsigned int *)((t7 + 0x0)) = t6;
            t6 = (t6 - 1);
            t1 = t6;
            t6 = (t6 << 1);
            t6 = (t6 + t1);
            t6 = (t6 << 2);
            t8 = (t8 + t6);
            *(unsigned int *)((t8 + 0x0)) = a4;
            *(unsigned int *)((t4 + 0x0)) = a4;
        }
        t6 = 0x4;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)t6) {
            break;
        }
    }
}

float FUN_0c06078c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    u0 = FUN_0c0605e6(a5);
    t2 = 0x0;
    t3 = t0;
    t0 = t1;
    for (;;) {
        if ((((int)0x1 << (int)t2) & a6) != 0) {
            t3 = t2;
            t3 = (t3 << 2);
            t3 = (t3 + 0xC4F90AC);
            t1 = *(int *)((t3 + 0x0));
            t0 = (t2 * 0x960);
            t0 = (t0 + 0xC4F6B2C);
            *(float *)((((((t1 << 1) + (t1)) << 2) + t0) + (0x8))) = u0;
            t1 = *(int *)((t3 + 0x0));
            *(unsigned int *)((((((t1 << 1) + t1) << 2) + t0) + 0x4)) = a5;
            t1 = *(int *)((t3 + 0x0));
            *(unsigned int *)((t3 + 0x0)) = (t1 + 0x1);
            t0 = (t0 + (((((t1 + 0x1) - 1) << 1) + ((t1 + 0x1) - 1)) << 2));
            *(unsigned int *)((t0 + 0x0)) = a4;
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x4) {
            break;
        }
    }
    return u0;
}

float FUN_0c060812(int a4, int a5, int a6)
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
    register float u0;

    u0 = FUN_0c0605e6(a5);
    t3 = 0x0;
    t4 = t0;
    t0 = t1;
    t1 = t2;
    for (;;) {
        if ((((int)0x1 << (int)t3) & a6) != 0) {
            t0 = 0xC4FB63C;
            t2 = t3;
            t2 = (t2 << 2);
            t4 = 0xC4F90AC;
            t0 = (t0 + t2);
            t1 = 0xC4F6B2C;
            t5 = *(int *)((t0 + 0x0));
            t4 = (t4 + t2);
            t2 = t5;
            t6 = *(int *)((t4 + 0x0));
            t7 = 0xC4F90BC;
            t8 = (((t5 << 1) + t2) << 2);
            t2 = t6;
            t5 = (t3 * 0x960);
            t1 = (t1 + t5);
            *(unsigned int *)((((((t6 << 1) + t2) << 2) + t1) + 0x4)) = a5;
            t7 = (t7 + t5);
            *(unsigned int *)(((t8 + t7) + 0x4)) = a5;
            t6 = *(int *)((t0 + 0x0));
            t5 = a4;
            t2 = (*(int *)((t4 + 0x0)));
            t8 = t2;
            t2 = (t2 << 1);
            t2 = (t2 + t8);
            t2 = (t2 << 2);
            t2 = (t2 + t1);
            *(unsigned int *)((t2 + 0x0)) = t5;
            *(unsigned int *)((((((t6 << 1) + t6) << 2) + t7) + 0x0)) = t5;
            t5 = 0x8;
            t2 = *(int *)((t4 + 0x0));
            *(float *)((((((t2 << 1) + t2) << 2) + t1) + t5)) = u0;
            *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) + 0x1);
            *(unsigned int *)((t4 + 0x0)) = ((*(int *)((t4 + 0x0))) + 0x1);
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x4) {
            break;
        }
    }
    return u0;
}

float FUN_0c0608d8(int a4, int a5, int a6)
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
    register float u0;

    u0 = FUN_0c0605e6(a5);
    t3 = 0x0;
    t4 = t0;
    t0 = t1;
    t1 = t2;
    for (;;) {
        if ((((int)0x1 << (int)t3) & a6) != 0) {
            t0 = 0xC4FDBCC;
            t2 = t3;
            t2 = (t2 << 2);
            t4 = 0xC4F90AC;
            t0 = (t0 + t2);
            t1 = 0xC4F6B2C;
            t5 = *(int *)((t0 + 0x0));
            t4 = (t4 + t2);
            t2 = t5;
            t6 = *(int *)((t4 + 0x0));
            t7 = 0xC4FB64C;
            t8 = (((t5 << 1) + t2) << 2);
            t2 = t6;
            t5 = (t3 * 0x960);
            t1 = (t1 + t5);
            *(unsigned int *)((((((t6 << 1) + t2) << 2) + t1) + 0x4)) = a5;
            t7 = (t7 + t5);
            *(unsigned int *)(((t8 + t7) + 0x4)) = a5;
            t6 = *(int *)((t0 + 0x0));
            t5 = a4;
            t2 = (*(int *)((t4 + 0x0)));
            t8 = t2;
            t2 = (t2 << 1);
            t2 = (t2 + t8);
            t2 = (t2 << 2);
            t2 = (t2 + t1);
            *(unsigned int *)((t2 + 0x0)) = t5;
            *(unsigned int *)((((((t6 << 1) + t6) << 2) + t7) + 0x0)) = t5;
            t5 = 0x8;
            t2 = *(int *)((t4 + 0x0));
            *(float *)((((((t2 << 1) + t2) << 2) + t1) + t5)) = u0;
            *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) + 0x1);
            *(unsigned int *)((t4 + 0x0)) = ((*(int *)((t4 + 0x0))) + 0x1);
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x4) {
            break;
        }
    }
    return u0;
}

float FUN_0c0609a0(int a4, int a5, int a6)
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
    register int t10;
    register int t11;
    register int t12;
    register float u0;

    u0 = FUN_0c0605e6(a5);
    t3 = 0x0;
    t4 = t0;
    t0 = t1;
    t1 = t2;
    for (;;) {
        if ((((int)0x1 << (int)t3) & a6) != 0) {
            t2 = 0xC4FB63C;
            t1 = t3;
            t1 = (t1 << 2);
            t0 = 0xC4FDBCC;
            t2 = (t2 + t1);
            t4 = 0xC4F90AC;
            t5 = *(int *)((t2 + 0x0));
            t0 = (t0 + t1);
            t6 = *(int *)((t0 + 0x0));
            t4 = (t4 + t1);
            t7 = t5;
            t8 = ((t5 << 1) + t7);
            t7 = t6;
            t5 = (*(int *)((t4 + 0x0)));
            t9 = 0xC4F90BC;
            t10 = (t3 * 0x960);
            t11 = ((t6 << 1) + t7);
            t7 = t5;
            t6 = 0xC4FB64C;
            t5 = (t5 << 1);
            t12 = 0xC4F6B2C;
            t5 = (t5 + t7);
            t6 = (t6 + t10);
            t9 = (t9 + t10);
            t5 = (t5 << 2);
            t7 = a5;
            t12 = (t12 + t10);
            t5 = (t5 + t12);
            *(unsigned int *)((t5 + 0x4)) = t7;
            *(unsigned int *)((((t11 << 2) + t6) + 0x4)) = t7;
            *(unsigned int *)((((t8 << 2) + t9) + 0x4)) = t7;
            t8 = *(int *)((t2 + 0x0));
            t7 = (*(int *)((t0 + 0x0)));
            t10 = t7;
            t7 = (t7 << 1);
            t5 = (*(int *)((t4 + 0x0)));
            t7 = (t7 + t10);
            t10 = t5;
            t5 = (t5 << 1);
            t5 = (t5 + t10);
            t5 = (t5 << 2);
            t7 = (t7 << 2);
            t5 = (t5 + t12);
            t7 = (t7 + t6);
            *(unsigned int *)((t5 + 0x0)) = a4;
            *(unsigned int *)((t7 + 0x0)) = a4;
            *(unsigned int *)((((((t8 << 1) + t8) << 2) + t9) + 0x0)) = a4;
            t6 = *(int *)((t4 + 0x0));
            t5 = 0x8;
            *(float *)((((((t6 << 1) + t6) << 2) + t12) + t5)) = u0;
            *(unsigned int *)((t2 + 0x0)) = ((*(int *)((t2 + 0x0))) + 0x1);
            *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) + 0x1);
            *(unsigned int *)((t4 + 0x0)) = ((*(int *)((t4 + 0x0))) + 0x1);
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x4) {
            break;
        }
    }
    return u0;
}

int FUN_0c060a84(int a4)
{
    (((struct o168_float *)(a4))->v) = (*(float *)0xC060B08);
    (((struct o404_uint *)(a4))->v) = 0x0;
    (((struct o133_uchar *)(a4))->v) = 0x0;
    (((struct o135_uchar *)(a4))->v) = 0x0;
    return 0x135;
}


int FUN_0c060bc2(void)
{
    register int t2;
    register int t1;

    t2 = (*(int *)0xC532434);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = 0x375E;
        *(unsigned char *)((t2 + t1)) = 0x0;
        t2 = (*(int *)((t2 + 0xC)));
    }
    return t1;
}

int FUN_0c060bd8(void)
{
    return FUN_0c060fc2((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
}

int FUN_0c060c2c(int a4, int a5, int a6, int a7, int a8)
{
    math_vec3_accumulate((a4 + 0x28), a8);
    math_vec3_accumulate((a6 + 0x8), a8);
    math_vec3_accumulate((a4 + 0x178), a8);
    FUN_0c17c2d0((a5 + 0x28), a8);
    FUN_0c17c2d0((a7 + 0x8), a8);
    return (FUN_0c17c2d0((a5 + 0x178), a8));
}

int FUN_0c060c80(int a4, int a5, int a6)
{
    math_vec3_accumulate((a4 + 0x28), a5);
    return math_vec3_accumulate((a6 + 0x8), a5);
}

int FUN_0c060ca2(int a4, int a5, int a6, int a7)
{
    math_vec3_accumulate((a4 + 0x28), a5);
    math_vec3_accumulate((a7 + 0x8), a5);
    (((struct o178_float *)(a4))->v) = (((((struct o178_float *)(a4))->v)) + ((*(float *)((a5 + 0x0))) + (*(float *)((a6 + 0x0)))));
    (((struct o17C_float *)(a4))->v) = (((((struct o17C_float *)(a4))->v)) + (((((struct o4_float *)(a5))->v)) + ((((struct o4_float *)(a6))->v))));
    (((struct o180_float *)(a4))->v) = (((((struct o180_float *)(a4))->v)) + (((((struct o8_float *)(a5))->v)) + ((((struct o8_float *)(a6))->v))));
    return 0x180;
}

int FUN_0c060d0e(int a4, int a5, int a6)
{
    math_vec3_accumulate((a4 + 0x28), a5);
    return math_vec3_accumulate((a6 + 0x8), a5);
}

int FUN_0c060e70(int a4, int a5)
{
    register int t2;
    register int t14;
    register int t3;
    register int t4;
    register int t5;
    register int t9;
    register int t13;

    t2 = *(signed char *)(((*(int *)((((((a4 << 1) + a4) << 2) + 0xC28E494) + (a5 << 2)))) + 0x3));
    t14 = t2;
    if ((int)t2 > 0) {
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            t5 = *(int *)(((((((a4 << 1) + a4) << 2) + 0xC28E494) + (a5 << 2)) + 0x0));
            t9 = 0x14;
            if ((*(signed char *)(((t5 + t4) + 0x1))) != 0) {
                
                t9 = 0x18;
            }
            t13 = FUN_0c06475c(0x0, (t5 + t4), (((((struct oC_float *)((t5 + t4)))->v)) + (*(float *)(((t5 + t4) + t9)))));
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x20);
            if ((int)t3 >= (int)t2) {
                break;
            }
        }
        t14 = t13;
    }
    return t14;
}

int FUN_0c060ee6(int a4, int a5, float f4)
{
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u13;
    register int t1;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u12;

    t2 = 0xC28E404;
    t3 = a4;
    t4 = a4;
    t5 = (a5 << 2);
    t6 = 0x0;
    u13 = f4;
    for (;;) {
        if ((int)t6 >= (int)0x4) {
            break;
        }
        t11 = 0x960;
        t9 = t6;
        t1 = (*(int *)(((((((a4 << 1) + a4) << 2) + 0xC28E404) + (a5 << 2)) + 0x0)));
        t9 = (t9 << 2);
        t7 = (*(int *)((t9 + t1)));
        t8 = 0x0;
        t10 = 0xC4F90AC;
        t5 = 0x0;
        t1 = (*(signed char *)((t7 + 0x3)));
        t11 = (t6 * t11);
        t7 = t1;
        t3 = 0xC4F6B2C;
        t10 = (t10 + t9);
        t11 = (t11 + t3);
        if ((int)t7 > 0) {
            for (;;) {
                t1 = (*(int *)(((((((a4 << 1) + a4) << 2) + 0xC28E404) + (a5 << 2)) + 0x0)));
                t4 = (*(int *)((t9 + t1)));
                t4 = (t4 + t5);
                t1 = (*(signed char *)((t4 + 0x1)));
                if (t1 != 0) {
                    if (t1 != 1) {
                        t1 = 0x18;
                    } else {
                        t1 = 0x18;
                    }
                } else {
                    t1 = 0x14;
                }
                u12 = (*(float *)((t4 + t1)));
                t1 = 0xC;
                t2 = (*(int *)((t10 + 0x0)));
                t8 = (t8 + 0x1);
                u13 = (*(float *)((t4 + t1)));
                t1 = 0x8;
                t3 = t2;
                t2 = (t2 << 1);
                u13 = (u13 + u12);
                t2 = (t2 + t3);
                t2 = (t2 << 2);
                t2 = (t2 + t11);
                *(float *)((t2 + t1)) = u13;
                t3 = (*(int *)((t10 + 0x0)));
                t2 = t3;
                t3 = (t3 << 1);
                t3 = (t3 + t2);
                t3 = (t3 << 2);
                t3 = (t3 + t11);
                *(unsigned int *)((t3 + 0x4)) = t4;
                t3 = (*(int *)((t10 + 0x0)));
                t3 = (t3 + 0x1);
                *(unsigned int *)((t10 + 0x0)) = t3;
                t3 = (t3 - 1);
                t2 = t3;
                t3 = (t3 << 1);
                t3 = (t3 + t2);
                t3 = (t3 << 2);
                t3 = (t3 + t11);
                *(unsigned int *)((t3 + 0x0)) = 0x0;
                t5 = (t5 + 0x20);
                if ((int)t8 >= (int)t7) {
                    break;
                }
            }
        }
        t6 = (t6 + 0x1);
    }
    return t1;
}


int FUN_0c06104e(void)
{
    nlSelectMatrixStack(0x1);
    FUN_0c056eae(0x2);
    FUN_0c06491e();
    FUN_0c056eee();
    FUN_0c064a2c();
    return FUN_0c0611f0();
}

int FUN_0c061072(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t6;
    register int t13;
    register int t14;
    register int t4;
    int t5;

    t0 = *(signed char *)((a5 + 0x187));
    t1 = 0x187;
    t2 = a4;
    t3 = a5;
    t6 = a5;
    for (;;) {
        if (t6 == 0) {
            break;
        }
        t13 = t2;
        t14 = t3;
        if (a4 != t6) {
            t1 = 0x126;
            t1 = (*(signed char *)((t6 + t1)));
            if ((t1 != 2) && (t5 = 0x184, t4 = 0x0, t5 = (t5 + t6), (int)t0 > 0)) {
                for (;;) {
                    t3 = t6;
                    t2 = a4;
                    t1 = (FUN_0c064cbc(t2, t3, t5, f4));
                    t4 = (t4 + 0x1);
                    t5 = (t5 + 0x20);
                    if ((int)t4 >= (int)t0) {
                        break;
                    }
                }
            } else {
                t13 = t2;
                t14 = t3;
            }
        }
        t6 = (*(int *)((t6 + 0xC)));
        t2 = t13;
        t3 = t14;
    }
    return t1;
}

int FUN_0c0610fa(int a4)
{
    register float u1;

    register int R0;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R7;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    R4 = a4;
    u1 = (((struct o0_float *)0xC471A5C)->v);
    R5 = (0x0);
    R6 = (0x0);
    R7 = (0xC471A5C);
    F4 = (u1);
    if ((u1 > (*(float *)((R4 + 0x0))))) goto L_C06112E;
    R0 = (0x8);
    if ((((((struct o4_float *)(R7))->v)) > ((((struct o8_float *)(R4))->v)))) goto L_C061118;
    R5 = (R6);
    L_C061158:;
    return R5;
    L_C061118:;
    if ((F4 > (*(float *)((R4 + 0x0))))) goto L_C06112E;
    R0 = (0x8);
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > ((((struct o8_float *)(R4))->v))))) goto L_C06112E;
    R5 = (0x1);
    goto L_C061158;
    L_C06112E:;
    if ((!(F4 > (*(float *)((R4 + 0x0)))))) goto L_C061158;
    R0 = (0x8);
    if ((((((struct o4_float *)0xC471A5C)->v)) > ((((struct o8_float *)(R4))->v)))) goto L_C061144;
    R5 = (0x2);
    goto L_C061158;
    L_C061144:;
    if ((!(F4 > (*(float *)((R4 + 0x0)))))) goto L_C061158;
    R0 = (0x8);
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > ((((struct o8_float *)(R4))->v))))) goto L_C061158;
    R5 = (0x3);
    goto L_C061158;
}

int FUN_0c0611f0(void)
{
    register float u1;
    register int t2;
    register int t3;
    register float u4;

    u1 = *(float *)0xC0612C4;
    t2 = 0xC0612C4;
    t3 = (*(int *)0xC532434);
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t2 = 0x2C;
        u4 = (*(float *)((t3 + t2)));
        u4 = (u4 + u1);
        *(float *)((t3 + t2)) = u4;
        t2 = (FUN_0c06115c(t3));
        t2 = 0x2C;
        u4 = (*(float *)((t3 + t2)));
        u4 = (u4 - u1);
        *(float *)((t3 + t2)) = u4;
        t3 = (*(int *)((t3 + 0xC)));
    }
    return t2;
}

int FUN_0c061222(int a4, int a5, int a6, float f4)
{
    int stk[3];
    register int t21;
    register int t28;
    register float u5;
    register float u6;
    register float u11;
    register float u7;
    register float u13;
    register float u19;
    register float u14;
    float s1;
    float s2;

    t21 = 0x133;
    t28 = 0;
    if ((*(signed char *)((a5 + 0x133))) == 0) {
        *(float *)((((int)stk + 0) + 0x0)) = (((((struct o28_float *)(a4))->v)) - ((((struct o16C_float *)(a4))->v)));
        (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o30_float *)(a4))->v)) - ((((struct o174_float *)(a4))->v)));
        u5 = *(float *)((((int)stk + 0) + 0x0));
        u6 = *(float *)0xC0612C8;
        s1 = _builtin_fabsf(u5);
        u11 = s1;
        if (u6 > s1) {
            u7 = *(float *)((((int)stk + 0) + 0x0));
            (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + u7);
            (((struct o133_uchar *)(a5))->v) = 0x1;
            u11 = u7;
        }
        u13 = (((struct o8_float *)(((int)stk + 0)))->v);
        t21 = 0x8;
        s2 = _builtin_fabsf(u13);
        u19 = s2;
        if (u6 > s2) {
            u14 = (((struct o8_float *)(((int)stk + 0)))->v);
            (((struct o30_float *)(a5))->v) = (((((struct o30_float *)(a5))->v)) + u14);
            (((struct o133_uchar *)(a5))->v) = 0x1;
            t21 = 0x133;
            u19 = u14;
        }
        t28 = ((u6 > s2));
    } else {
        t28 = (0);
    }
    return t21;
}

int FUN_0c061284(int a4, int a5)
{
    register int t0;
    int t5;

    t0 = *(signed char *)((a4 + 0x126));
    if (t0 != 2) {
        if ((*(signed char *)((a5 + 0x126))) != 2) {
            if ((t0 == 1) && (t5 = *(signed char *)((a5 + 0x126)), t5 == 1)) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c0612cc(int a4, int a5)
{
    register int t0;
    int t2;

    t0 = *(signed char *)((a4 + 0x126));
    if (t0 != 1) {
        if ((t0 == 3) && (t2 = *(signed char *)((a5 + 0x0)), t2 == 0)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c0612ee(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x126));
    if (t0 != 2) {
        if (t0 == 1) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}



int FUN_0c06151a(int a4, int a5, int a6, int a7, float f4)
{
    int stk[9];
    register int t0;
    register int t3;
    register int t7;
    register int t22;
    register int t23;

    *(unsigned int *)(((int)stk + 0)) = a7;
    *(unsigned int *)(((int)stk + 4)) = (a6 + 0x8);
    t0 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x8);
    FUN_0c060074((t0 + 0x8), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x18));
    t3 = FUN_0c0612cc(a4, a5);
    if (t3 != 0) {
        *(float *)(((int)stk + 12)) = (-((*(float *)(((int)stk + 24))) * f4));
        *(float *)(((int)stk + 20)) = (-((*(float *)(((int)stk + 32))) * f4));
        *(float *)(((int)stk + 16)) = 0.0f;
        t22 = a5;
        t23 = (*(int *)(((int)stk + 0)));
    } else {
        t7 = FUN_0c0612cc(a5, a4);
        if (t7 != 0) {
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 24))) * f4);
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 32))) * f4);
            *(float *)(((int)stk + 16)) = 0.0f;
            t22 = a4;
            t23 = a6;
        } else {
            *(float *)(((int)stk + 12)) = (((*(float *)(((int)stk + 24))) * f4) / (1.0f + 1.0f));
            *(float *)(((int)stk + 20)) = (((*(float *)(((int)stk + 32))) * f4) / (1.0f + 1.0f));
            *(float *)(((int)stk + 16)) = 0.0f;
            FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
            *(float *)(((int)stk + 12)) = (-(*(float *)(((int)stk + 12))));
            *(float *)(((int)stk + 20)) = (-(*(float *)(((int)stk + 20))));
            t22 = a5;
            t23 = (*(int *)(((int)stk + 0)));
        }
    }
    return (FUN_0c060c80(t22, (((int)stk + 0) + 0xC), t23));
}

int FUN_0c061604(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct oC_float *)((a7 + 0x8)))->v);
    u1 = (((struct oC_float *)((a6 + 0x8)))->v);
    u2 = FUN_0c0e2240((a6 + 0x8), (a7 + 0x8));
    t0 = 0x0;
    if (((u1 + u0) - u2) > 0.0f) {
        t0 = FUN_0c061284(a4, a5);
        if (t0 != 0) {
            (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
            t0 = 0x2;
        } else {
            FUN_0c06151a(a4, a5, a6, a7, ((u1 + u0) - u2));
            t0 = 0x1;
        }
    }
    return t0;
}


