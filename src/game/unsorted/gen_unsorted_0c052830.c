/* game/unsorted: functions 0C052830-0C053CBA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o168_float { char p[0x168]; float v; };
struct o17C_uint { char p[0x17C]; unsigned int v; };
struct o180_uint { char p[0x180]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o19C_int { char p[0x19C]; int v; };
struct o19C_uint { char p[0x19C]; unsigned int v; };
struct o1A0_uint { char p[0x1A0]; unsigned int v; };
struct o1B4_int { char p[0x1B4]; int v; };
struct o1B4_uint { char p[0x1B4]; unsigned int v; };
struct o1B8_int { char p[0x1B8]; int v; };
struct o1B8_uint { char p[0x1B8]; unsigned int v; };
struct o1FC_int { char p[0x1FC]; int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o228_float { char p[0x228]; float v; };
struct o22C_float { char p[0x22C]; float v; };
struct o230_float { char p[0x230]; float v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C8_int { char p[0x2C8]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0522be(int);
int FUN_0c052364(int, int);
extern int FUN_0c0528f4();
int FUN_0c0534ee(int);
int FUN_0c0537d4(int);
int FUN_0c053a94(int);
int FUN_0c053eb2(int, int, int, int);
int FUN_0c053efe(int, int, int);
int FUN_0c053f16(int, int, int, int);
int FUN_0c053f34(int);
int FUN_0c054058(int);
int FUN_0c0546f4(int);
int FUN_0c0547ee(int, int, int, int);
int FUN_0c05490a(int, int, int, int);
int FUN_0c054a62(int, int);
extern int FUN_0c056b68();
int math_atan2_angle16(int, int, int, int, float, float);
float FUN_0c0e2240(int, int);
int FUN_0c187798(void);
int FUN_0c052830(int a4);
int FUN_0c05283e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0528c6(int a4);
int FUN_0c05293a(int a4, int a5, int a6, int a7);
int FUN_0c052962(int a4);
int FUN_0c052ba8(int a4);
int FUN_0c052c00(int a4, int a5, int a6);
int FUN_0c052c3e(int a4);
float FUN_0c052c4a(int a4, int a5, int a6, int a7, int a8);
float FUN_0c052c86(int a4, int a5, int a6, int a7, int a8);
int FUN_0c053128(int a4, int a5, int a6, int a7);
int FUN_0c0532be(int a4);
float FUN_0c05331e(int a4);
float FUN_0c0533a4(int a4);
int FUN_0c0537ac(int a4, int a5, int a6, int a7);
int FUN_0c0539c6(int a4, int a5, int a6, int a7);

int FUN_0c052830(int a4)
{
    *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    *(unsigned char *)((a4 + 0xB)) = 0x0;
    return 0x0;
}


int FUN_0c0528c6(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c05293a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC052936))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int))(FUN_0c0528f4))(a4, a5, a6);
    }
    FUN_0c0528c6(a4);
    return ((int (*)(int))(FUN_0c0528f4))(a4);
}

int FUN_0c052962(int a4)
{
    register int t1;
    register int t3;
    register int t4;

    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    t1 = 0xC1B8EA0;
    t3 = (0x248 + a4);
    for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)((0xC1B8EA0 + 128)) < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
    return FUN_0c054a62(a4, (0x248 + a4));
}

int FUN_0c052ba8(int a4)
{
    register int t1;
    register int t3;
    register int t4;

    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    t1 = 0xC1B8F20;
    t3 = (0x248 + a4);
    for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)((0xC1B8F20 + 128)) < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
    return FUN_0c054a62(a4, (0x248 + a4));
}

int FUN_0c052c00(int a4, int a5, int a6)
{
    register int t1;
    register int t2;

    FUN_0c0522be(0xC2414CC);
    t1 = 0xC5410FC;
    for (;;) {
        (((struct o1A0_uint *)(t1))->v) = a4;
        (((struct o19C_uint *)(t1))->v) = a5;
        t2 = (0x1FC + t1);
        t1 = (t1 + 0x2F8);
        *(unsigned int *)((t2 + 0x4)) = a6;
        *(unsigned int *)((t2 + 0x0)) = a6;
        if ((unsigned int)t1 >= (unsigned int)0xC541CDC) {
            break;
        }
    }
    return 0x19C;
}

int FUN_0c052c3e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    *(unsigned int *)((a4 + 0x18)) = 0x3E8;
    return (t0 + 0x1);
}

float FUN_0c052c4a(int a4, int a5, int a6, int a7, int a8)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    u0 = *(float *)((a7 + 0x0));
    u1 = (((struct o8_float *)(a6))->v);
    u2 = *(float *)((a8 + 0x0));
    u3 = *(float *)((a6 + 0x0));
    u4 = (u1 * ((*(float *)((a5 + 0x0))) - u0));
    u4 = u4 + ((((((struct o8_float *)(a7))->v)) - ((((struct o8_float *)(a5))->v)))) * u3;
    u5 = (u2 * u1);
    u1 = (u3 * ((((struct o8_float *)(a8))->v)));
    u3 = u0;
    u3 = u3 + ((u4 / (u5 - u1))) * u2;
    *(float *)((a4 + 0x0)) = u3;
    u0 = ((((struct o8_float *)(a7))->v));
    u0 = u0 + ((u4 / (u5 - u1))) * ((((struct o8_float *)(a8))->v));
    (((struct o8_float *)(a4))->v) = u0;
    return (u4 / (u5 - u1));
}

float FUN_0c052c86(int a4, int a5, int a6, int a7, int a8)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    u0 = (((struct o8_float *)(a6))->v);
    u1 = (((struct o4_float *)(a6))->v);
    u2 = (((struct o8_float *)(a7))->v);
    u3 = (((struct o8_float *)(a8))->v);
    u4 = (u1 * (((((struct o8_float *)(a5))->v)) - u2));
    u4 = u4 + ((((((struct o4_float *)(a7))->v)) - ((((struct o4_float *)(a5))->v)))) * u0;
    u5 = (u3 * u1);
    u1 = (u0 * ((((struct o4_float *)(a8))->v)));
    u0 = u2;
    u0 = u0 + ((u4 / (u5 - u1))) * u3;
    (((struct o8_float *)(a4))->v) = u0;
    u0 = ((((struct o4_float *)(a7))->v));
    u0 = u0 + ((u4 / (u5 - u1))) * ((((struct o4_float *)(a8))->v));
    (((struct o4_float *)(a4))->v) = u0;
    return (u4 / (u5 - u1));
}

int FUN_0c053128(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t3;
    register int t52;
    register int t5;
    register int t6;
    register int t7;
    register int t19;
    register float u22;
    register float u23;
    int t28;
    register int t29;
    register int t30;
    register int t35;
    register int t38;
    register int t40;
    register int t4;
    register float u8;
    register float u9;
    int t39;

    t0 = *(signed char *)0xC542237;
    t3 = *(int *)((((*(signed char *)0xC54223C) << 2) + ((((t0 << 1) + t0) << 2) + 0xC1BF61C)));
    *(unsigned int *)(((int)stk + 0)) = t3;
    t52 = t3;
    if (t3 != -1) {
        (((struct o18_float *)(((int)stk + 0)))->v) = 0.0f;
        (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = 0.0f;
        *(unsigned int *)(((int)stk + 8)) = 0xC532498;
        t5 = 0xC532498;
        t6 = 0xC532498;
        t7 = 0x0;
        for (;;) {
            if ((*(signed char *)((t5 + 0x3714))) != 0) {
                u8 = ((((struct o18_float *)(((int)stk + 0)))->v));
                u9 = ((((struct o28_float *)(t6))->v));
                t4 = 0x30;
                t4 = (t4 + t6);
                u8 = (u8 + u9);
                t7 = (t7 + 0x1);
                (((struct o18_float *)(((int)stk + 0)))->v) = u8;
                u8 = ((((struct o8_float *)((((int)stk + 0) + 0x18)))->v));
                u9 = (*(float *)((t4 + 0x0)));
                u8 = (u8 + u9);
                (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = u8;
            }
            t5 = (t5 + 0x3938);
            t6 = (t6 + 0x3938);
            if ((unsigned int)t5 >= (unsigned int)0xC540978) {
                break;
            }
        }
        (((struct o18_float *)(((int)stk + 0)))->v) = (((((struct o18_float *)(((int)stk + 0)))->v)) / (float)t7);
        (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x18)))->v)) / (float)t7);
        t19 = *(int *)(((int)stk + 0));
        (((struct oC_float *)(((int)stk + 0)))->v) = (((((struct o18_float *)(((int)stk + 0)))->v)) - (*(float *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0x0))));
        u22 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v);
        u23 = (((struct o8_float *)(((((t19 << 2) + t19) << 2) + 0xC1BF52C)))->v);
        (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = (u22 - u23);
        if ((u22 - u23) == 0.0f) {
            (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = 9.99999997e-07f;
        }
        t28 = math_atan2_angle16((((int)stk + 0) + 0x18), ((((t19 << 2) + t19) << 2) + 0xC1BF52C), t6, 0x3938, ((((struct oC_float *)(((int)stk + 0)))->v)), ((((struct o8_float *)((((int)stk + 0) + 0xC)))->v)));
        *(unsigned int *)(((int)stk + 0)) = ((((t19 << 2) + t19) << 2) + 0xC1BF52C);
        t29 = *(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0xC));
        t30 = *(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0x10));
        if (((int)(unsigned short)((0xFFFF & t28) - t29) >= (int)t30) && ((int)(unsigned short)((0xFFFF & t28) - t29) <= (int)(unsigned short)((-t30) + 0x8000))) {
            (((struct o1A0_uint *)(a4))->v) = (unsigned short)((*(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0xC))) + (*(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0x10))));
        } else {
            t35 = *(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0x10));
            if (((int)(unsigned short)((0xFFFF & t28) - t29) <= (int)(unsigned short)(-t35)) && ((int)(unsigned short)((0xFFFF & t28) - t29) >= (int)(unsigned short)(0x8000 + t35))) {
                (((struct o1A0_uint *)(a4))->v) = (unsigned short)((*(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0xC))) - (*(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0x10))));
            } else {
                t38 = *(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0x10));
                *(unsigned short *)(((int)stk + 0)) = t38;
                if (((int)(unsigned short)((0xFFFF & t28) - t29) > (int)(unsigned short)((-t38) + 0x8000)) && (t39 = *(short *)(((int)stk + 0)), (int)(unsigned short)((0xFFFF & t28) - t29) < (int)(unsigned short)(t39 + 0x8000))) {
                    *(unsigned int *)(((int)stk + 4)) = ((((t19 << 2) + t19) << 2) + 0xC1BF52C);
                    t40 = *(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0xC));
                    (((struct o1A0_uint *)(a4))->v) = (((t40 - (0xFFFF & t28)) + t40) + 0x8000);
                } else {
                    (((struct o1A0_uint *)(a4))->v) = (0xFFFF & t28);
                }
            }
        }
        t52 = 0x1A0;
    }
    return t52;
}

int FUN_0c0532be(int a4)
{
    register float u2;
    register float u3;
    register float u8;
    register float u9;
    register float u10;
    int t1;

    if (((*(signed char *)((((a4 * 0x3938) + 0xC532498) + 0x3714))) != 0) && (t1 = *(signed char *)((((a4 * 0x3938) + 0xC532498) + 0x375D)), t1 == 0)) {
        u2 = (((struct o0_float *)0xC053394)->v);
        u3 = (((struct o4_float *)0xC541098)->v);
        if (!(((((struct o168_float *)(((a4 * 0x3938) + 0xC532498)))->v)) > ((((struct o4_float *)0xC053394)->v)))) {
            if (!((u3 + u2) > ((((struct o2C_float *)(((a4 * 0x3938) + 0xC532498)))->v)))) {
                return 0x1;
            }
            return 0x0;
        }
        u8 = (((struct o8_float *)0xC053394)->v);
        u9 = (((struct o0_float *)0xC541098)->v);
        u10 = (u3 + u2);
        if ((u3 + u2) > (u9 + u8)) {
            u10 = (u9 + u8);
        }
        if (!(u10 > ((((struct o2C_float *)(((a4 * 0x3938) + 0xC532498)))->v)))) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

float FUN_0c05331e(int a4)
{
    register int t0;
    register float u1;
    register int t2;
    register float t3;

    t0 = 0x0;
    u1 = 0.0f;
    for (;;) {
        t2 = FUN_0c0532be(t0);
        if (t2 != 0) {
            t3 = FUN_0c0e2240((((t0 * 0x3938) + 0xC532498) + 0x28), ((a4 + 0xBC) + 0xC));
            if (t3 > u1) {
                u1 = t3;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return u1;
}

float FUN_0c0533a4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(int *)(((0x19C + a4) + 0x4));
    t1 = t0;
    if ((int)(t0 - (*(int *)(((0x19C + a4) + 0x1C)))) > (int)0x8000) {
        t1 = (t0 - 0x10000);
    }
    t0 = (((struct o1B8_int *)(a4))->v);
    t2 = t1;
    if ((int)(t1 - ((((struct o1B8_int *)(a4))->v))) < (int)0xFFFF8000) {
        t2 = (t1 + 0x10000);
    }
    t1 = (((struct o1FC_int *)(a4))->v);
    t3 = (int)((int)(t2 - t0) / (int)(t1 + 0x1));
    t0 = t3;
    if ((int)t1 > (int)0x1) {
        t1 = 0x10;
        if ((int)t3 > (int)0x10) {
        } else {
            t2 = t3;
            if ((int)t3 < (int)0xFFFFFFF0) {
                t2 = 0xFFFFFFF0;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    (((struct o1B8_uint *)(a4))->v) = (((((struct o1B8_int *)(a4))->v)) + t0);
    (((struct o1B8_uint *)(a4))->v) = (((((struct o1B8_int *)(a4))->v)) & 0xFFFF);
    t0 = (((struct o19C_int *)(a4))->v);
    u0 = FUN_0c05331e(a4);
    t1 = t0;
    u1 = u0;
    if (u0 > 2000.0f) {
        t2 = (int)((((u0 + -2000.0f) / 10.0f) * 65536.0f) / 360.0f);
        if ((int)(int)((((u0 + -2000.0f) / 10.0f) * 65536.0f) / 360.0f) > (int)0x222) {
            t2 = 0x222;
        }
        t1 = (t0 + t2);
        u1 = 10.0f;
    }
    t0 = t1;
    if ((int)(t1 - ((((struct o1B4_int *)(a4))->v))) > (int)0x8000) {
        t0 = (t1 - 0x10000);
    }
    t1 = (((struct o1B4_int *)(a4))->v);
    t2 = t0;
    if ((int)(t0 - ((((struct o1B4_int *)(a4))->v))) < (int)0xFFFF8000) {
        t2 = (t0 + 0x10000);
    }
    t0 = (((struct o1FC_int *)(a4))->v);
    t3 = (int)((int)(t2 - t1) / (int)(t0 + 0x1));
    t1 = t3;
    if ((int)t0 > (int)0x1) {
        t0 = 0x10;
        if ((int)t3 > (int)0x10) {
        } else {
            t2 = t3;
            if ((int)t3 < (int)0xFFFFFFF0) {
                t2 = 0xFFFFFFF0;
            }
            t0 = t2;
        }
        t1 = t0;
    }
    (((struct o1B4_uint *)(a4))->v) = (((((struct o1B4_int *)(a4))->v)) + t1);
    (((struct o1B4_uint *)(a4))->v) = (((((struct o1B4_int *)(a4))->v)) & 0xFFFF);
    *(unsigned int *)(((0x17C + a4) + 0x4)) = 0x0;
    (((struct o17C_uint *)(a4))->v) = 0x0;
    return u1;
}

int FUN_0c0537ac(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC0537A8))(a4, a5, a6, a7);
        }
        return FUN_0c0534ee(a4);
    }
    FUN_0c052c3e(a4);
    return FUN_0c0534ee(a4);
}

int FUN_0c0539c6(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c0522be(0xC2414E0);
    t1 = 0xC5410FC;
    for (;;) {
        (((struct o1A0_uint *)(t1))->v) = a4;
        (((struct o19C_uint *)(t1))->v) = a5;
        *(unsigned int *)(((0x1FC + t1) + 0x4)) = a6;
        (((struct o1FC_uint *)(t1))->v) = a6;
        (((struct o240_uint *)(t1))->v) = a7;
        (((struct o228_float *)(t1))->v) = 0.0f;
        (((struct o22C_float *)(t1))->v) = 0.0f;
        (((struct o230_float *)(t1))->v) = 0.0f;
        t1 = (t1 + 0x2F8);
        if ((unsigned int)t1 >= (unsigned int)0xC541CDC) {
            break;
        }
    }
    return 0x230;
}
