/* game/hit: functions 0C064D9C-0C065C58, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_interval_overlap(float, float, float, float);
int FUN_0c064f8e(int, int);
int FUN_0c0652c4(int, int, int, float, float);
int FUN_0c065434(int, int, int, float, float);
float math_signed_sqrt(float);
int math_atan2_angle16(int, int, int, int, float, float);
int math_vec3_accumulate(int, int);
float FUN_0c064d9c(int a4);
float FUN_0c064dc4(int a4);
int FUN_0c064de4(int a4, int a5);
float FUN_0c064e28(int a4);
float FUN_0c064e48(int a4);
int FUN_0c064e70(int a4, int a5);
float FUN_0c064ea0(int a4);
int FUN_0c064eb4(int a4, int a5);
int FUN_0c064ee4(int a4, int a5);
int FUN_0c064f02(int a4);
int FUN_0c064f80(int a4);
int FUN_0c064fba(int a4, int a5, int a6);
int FUN_0c064fd4(int a4, int a5, int a6);
int FUN_0c0650b0(int a4, int a5, int a6);
int FUN_0c06514e(int a4, int a5, int a6);
int FUN_0c0651f8(int a4, int a5, int a6);
int FUN_0c065396(int a4, int a5, int a6);
int FUN_0c06551a(int a4, int a5, int a6);
int FUN_0c0655c0(int a4, int a5, int a6);
int FUN_0c0655dc(int a4, int a5, int a6, int a7, int a8, float f4, float f5);
int FUN_0c065788(int a4, int a5, float f4);
int FUN_0c0657d4(int a4, int a5, int a6, int a7);
int FUN_0c065806(int a4, int a5, int a6, int a7, float f4);
int FUN_0c06593a(int a4, int a5);
int FUN_0c06599a(int a4, int a5);
int FUN_0c065a90(int a4);

float FUN_0c064d9c(int a4)
{
    register int t3;

    t3 = 0x14;
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        
        t3 = 0x18;
    }
    return (((((struct oC_float *)(a4))->v)) + (*(float *)((a4 + t3))));
}

float FUN_0c064dc4(int a4)
{
    register int t3;

    t3 = 0x14;
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        
        t3 = 0x18;
    }
    return (*(float *)((a4 + t3)));
}

int FUN_0c064de4(int a4, int a5)
{
    int stk[9];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c064f8e(a4, (((int)stk + 0) + 0x4));
    if (t0 != 0) {
        *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = (FUN_0c064dc4((((int)stk + 0) + 0x4)));
        return 0x1;
    }
    return 0x0;
}

float FUN_0c064e28(int a4)
{
    int stk[8];
    register int t0;
    register float u3;

    t0 = FUN_0c064f8e(a4, ((int)stk + 0));
    u3 = 0.0f;
    if (t0 != 0) {
        u3 = (FUN_0c064dc4(((int)stk + 0)));
    }
    return u3;
}

float FUN_0c064e48(int a4)
{
    register int t3;

    t3 = 0x14;
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        
        t3 = 0x18;
    }
    return (((((struct oC_float *)(a4))->v)) - (*(float *)((a4 + t3))));
}

int FUN_0c064e70(int a4, int a5)
{
    int stk[9];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c064f8e(a4, (((int)stk + 0) + 0x4));
    if (t0 != 0) {
        *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = (FUN_0c064e48((((int)stk + 0) + 0x4)));
        return 0x1;
    }
    return 0x0;
}

float FUN_0c064ea0(int a4)
{
    *(volatile signed char *)((a4 + 0x1));
    
    return ((((struct o14_float *)(a4))->v));
}

int FUN_0c064eb4(int a4, int a5)
{
    int stk[9];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c064f8e(a4, (((int)stk + 0) + 0x4));
    if (t0 != 0) {
        *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = (FUN_0c064ea0((((int)stk + 0) + 0x4)));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c064ee4(int a4, int a5)
{
    register int t1;
    register int t4;

    t1 = ((((struct o404_int *)(a4))->v));
    for (;;) {
        if (t1 == 0) {
            return 0x0;
        }
        t4 = *(int *)((t1 + 0x8));
        if ((*(signed char *)((t4 + 0x4))) == a5) {
            break;
        }
        t1 = (*(int *)((t1 + 0x0)));
    }
    return t4;
}

int FUN_0c064f02(int a4)
{
    if (((((struct o404_int *)(a4))->v)) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c064f80(int a4)
{
    return (((((((struct o17C_float *)(a4))->v)) > 0.0f)) ? 1 : 0);
}

int FUN_0c064fba(int a4, int a5, int a6)
{
    *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
    (((struct o8_float *)(a6))->v) = (((((struct o8_float *)((a4 + 0x8)))->v)) - ((((struct o8_float *)((a5 + 0x8)))->v)));
    return 0x1;
}

int FUN_0c064fd4(int a4, int a5, int a6)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register float u20;
    register float u31;
    register int t33;
    float u21;
    float u32;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    u2 = (((struct oC_float *)((a5 + 0x8)))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u3 + u2) - u4);
    u6 = (((struct o14_float *)((a5 + 0x8)))->v);
    u7 = (((struct oC_float *)((a4 + 0x8)))->v);
    u8 = (((struct o8_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a5 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u11);
    u13 = (((struct o10_float *)((a5 + 0x8)))->v);
    u14 = (((struct oC_float *)((a4 + 0x8)))->v);
    u15 = (((struct o4_float *)((a4 + 0x8)))->v);
    u16 = (((struct o4_float *)((a5 + 0x8)))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u14 + u13) - u18);
    u20 = *(float *)((((int)stk + 0) + 0x0));
    if (!(u20 > ((u14 + u13) - u18)) && (u21 = (((struct o8_float *)(((int)stk + 0)))->v), !(u20 > u21))) {
        *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
    } else {
        u31 = (((struct o8_float *)(((int)stk + 0)))->v);
        t33 = 0x4;
        if (((*(float *)((((int)stk + 0) + 0x0))) > u31) && (u32 = (((struct o4_float *)(((int)stk + 0)))->v), u32 > u31)) {
            t33 = 0x8;
        }
        *(float *)((a6 + t33)) = ((*(float *)(((a4 + 0x8) + t33))) - (*(float *)(((a5 + 0x8) + t33))));
    }
    return 0x1;
}

int FUN_0c0650b0(int a4, int a5, int a6)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)((a5 + 0x8)))->v);
    u1 = (((struct oC_float *)((a4 + 0x8)))->v);
    u2 = (((struct o8_float *)((a5 + 0x8)))->v);
    u3 = (((struct o8_float *)((a4 + 0x8)))->v);
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u6 = ((u3 - u2) * (u3 - u2));
    u6 = u6 + ((u5 - u4)) * ((u5 - u4));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)((a5 + 0x8)))->v);
    u4 = (((struct o10_float *)((a5 + 0x8)))->v);
    u5 = (((struct o4_float *)((a4 + 0x8)))->v);
    u6 = (((struct oC_float *)((a4 + 0x8)))->v);
    u7 = math_interval_overlap((u5 + u6), (u5 - u6), (u3 + u4), (u3 - u4));
    t0 = 0x4;
    if (u7 > ((u1 + u0) - u2)) {
    } else {
        *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
        t0 = 0x8;
    }
    *(float *)((a6 + t0)) = ((*(float *)(((a4 + 0x8) + t0))) - (*(float *)(((a5 + 0x8) + t0))));
    return 0x1;
}

int FUN_0c06514e(int a4, int a5, int a6)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register int t24;
    float u21;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    u2 = (((struct oC_float *)((a5 + 0x8)))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)((a5 + 0x8)))->v);
    u7 = (((struct o14_float *)((a4 + 0x8)))->v);
    u8 = (((struct o8_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a5 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u11);
    u13 = (((struct oC_float *)((a5 + 0x8)))->v);
    u14 = (((struct o10_float *)((a4 + 0x8)))->v);
    u15 = (((struct o4_float *)((a4 + 0x8)))->v);
    u16 = (((struct o4_float *)((a5 + 0x8)))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u14 + u13) - u18);
    t24 = 0x4;
    if (!(((u14 + u13) - u18) > (*(float *)((((int)stk + 0) + 0x0)))) && (u21 = (((struct o8_float *)(((int)stk + 0)))->v), !(((u14 + u13) - u18) > u21))) {
    } else {
        *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
        t24 = 0x8;
    }
    *(float *)((a6 + t24)) = ((*(float *)(((a4 + 0x8) + t24))) - (*(float *)(((a5 + 0x8) + t24))));
    return 0x1;
}

int FUN_0c0651f8(int a4, int a5, int a6)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register float u21;
    register float u32;
    register int t34;
    float u22;
    float u33;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    u2 = (((struct oC_float *)((a5 + 0x8)))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u3 + u2) - u4);
    u6 = (((struct o10_float *)((a4 + 0x8)))->v);
    u7 = (((struct o10_float *)((a5 + 0x8)))->v);
    u8 = (((struct o4_float *)((a4 + 0x8)))->v);
    u9 = (((struct o4_float *)((a5 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u6 + u7) - u11);
    u13 = (((struct o14_float *)((a4 + 0x8)))->v);
    u14 = (((struct o14_float *)((a5 + 0x8)))->v);
    u15 = (((struct o8_float *)((a4 + 0x8)))->v);
    u16 = (((struct o8_float *)((a5 + 0x8)))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u13 + u14) - u18);
    u21 = *(float *)((((int)stk + 0) + 0x0));
    if (!(u21 > ((((struct o4_float *)(((int)stk + 0)))->v))) && (u22 = (((struct o8_float *)(((int)stk + 0)))->v), !(u21 > u22))) {
        *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
    } else {
        u32 = (((struct o8_float *)(((int)stk + 0)))->v);
        t34 = 0x4;
        if (((*(float *)((((int)stk + 0) + 0x0))) > u32) && (u33 = (((struct o4_float *)(((int)stk + 0)))->v), u33 > u32)) {
            t34 = 0x8;
        }
        *(float *)((a6 + t34)) = ((*(float *)(((a4 + 0x8) + t34))) - (*(float *)(((a5 + 0x8) + t34))));
    }
    return 0x1;
}

int FUN_0c065396(int a4, int a5, int a6)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)((a5 + 0x8)))->v);
    u1 = (((struct oC_float *)((a4 + 0x8)))->v);
    u2 = (((struct o8_float *)((a5 + 0x8)))->v);
    u3 = (((struct o8_float *)((a4 + 0x8)))->v);
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u6 = ((u3 - u2) * (u3 - u2));
    u6 = u6 + ((u5 - u4)) * ((u5 - u4));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)((a4 + 0x8)))->v);
    u4 = (((struct o10_float *)((a4 + 0x8)))->v);
    u5 = (((struct o4_float *)((a5 + 0x8)))->v);
    u6 = (((struct oC_float *)((a5 + 0x8)))->v);
    u7 = math_interval_overlap((u5 + u6), (u5 - u6), (u3 + u4), (u3 - u4));
    t0 = 0x4;
    if (u7 > ((u1 + u0) - u2)) {
        *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
        t0 = 0x8;
    }
    *(float *)((a6 + t0)) = ((*(float *)(((a4 + 0x8) + t0))) - (*(float *)(((a5 + 0x8) + t0))));
    return 0x1;
}

int FUN_0c06551a(int a4, int a5, int a6)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)((a5 + 0x8)))->v);
    u1 = (((struct oC_float *)((a4 + 0x8)))->v);
    u2 = (((struct o8_float *)((a5 + 0x8)))->v);
    u3 = (((struct o8_float *)((a4 + 0x8)))->v);
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u6 = ((u3 - u2) * (u3 - u2));
    u6 = u6 + ((u5 - u4)) * ((u5 - u4));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)((a5 + 0x8)))->v);
    u4 = (((struct o10_float *)((a5 + 0x8)))->v);
    u5 = (((struct o4_float *)((a4 + 0x8)))->v);
    u6 = (((struct o10_float *)((a4 + 0x8)))->v);
    u7 = math_interval_overlap((u5 + u6), (u5 - u6), (u3 + u4), (u3 - u4));
    t0 = 0x4;
    if (u7 > ((u1 + u0) - u2)) {
        *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
        t0 = 0x8;
    }
    *(float *)((a6 + t0)) = ((*(float *)(((a4 + 0x8) + t0))) - (*(float *)(((a5 + 0x8) + t0))));
    return 0x1;
}

int FUN_0c0655c0(int a4, int a5, int a6)
{
    if ((int)(unsigned short)(((a5 - a4) + a6) + 0x8000) < (int)(a6 << 1)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0655dc(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    int stk[5];

    register int R2;
    register int R3;
    register int R8;
    register float F2;
    register float F3;
    register int T_;
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
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    w0_0 = f4;
    w0_1 = f5;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    v0_7 = *(signed char *)((v0_2 + 0x1));
    v0_4 = (v0_7);
    v0_5 = (v0_2);
    v0_6 = (v0_3);
    if ((v0_7 == 0)) goto L_C06560E;
    if ((v0_4 == 1)) goto L_C06564A;
    if ((v0_4 == 2)) goto L_C065686;
    L_C0656BE:;
    if (((*(float *)(((int)stk + 12))) == 0.0f)) goto L_C0656D0;
    *(unsigned int *)((a8 + 0x0)) = 0x0;
    v0_0 = (0x0);
    L_C0656FC:;
    return v0_0;
    L_C0656D0:;
    if (((*(float *)(((int)stk + 16))) != 0.0f)) goto L_C0656E2;
    *(float *)(((int)stk + 16)) = (*(float *)0xC065774);
    L_C0656E2:;
    v0_0 = math_atan2_angle16(v0_0, v0_1, v0_2, v0_3, (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 16))));
    *(unsigned int *)((a8 + 0x0)) = v0_0;
    v0_0 = ((FUN_0c0655c0((*(int *)(((int)stk + 4))), v0_0, (*(int *)(((int)stk + 0))))));
    goto L_C0656FC;
    L_C065686:;
    v0_7 = *(signed char *)((v0_6 + 0x1));
    v0_4 = (v0_7);
    if ((v0_7 == 0)) goto L_C065698;
    if ((v0_4 == 1)) goto L_C0656A6;
    if ((v0_4 == 2)) goto L_C0656B4;
    goto L_C0656BE;
    L_C0656B4:;
    FUN_0c06551a(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
    L_C0656A6:;
    FUN_0c065434(v0_5, v0_6, (((int)stk + 0) + 0x8), w0_0, w0_1);
    goto L_C0656BE;
    L_C065698:;
    FUN_0c065396(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
    L_C06564A:;
    v0_7 = *(signed char *)((v0_6 + 0x1));
    v0_4 = (v0_7);
    if ((v0_7 == 0)) goto L_C06565C;
    if ((v0_4 == 1)) goto L_C06566A;
    if ((v0_4 == 2)) goto L_C065678;
    goto L_C0656BE;
    L_C065678:;
    FUN_0c0652c4(v0_5, v0_6, (((int)stk + 0) + 0x8), w0_0, w0_1);
    goto L_C0656BE;
    L_C06566A:;
    FUN_0c0651f8(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
    L_C06565C:;
    FUN_0c06514e(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
    L_C06560E:;
    v0_7 = *(signed char *)((v0_6 + 0x1));
    v0_4 = (v0_7);
    if ((v0_7 == 0)) goto L_C065620;
    if ((v0_4 == 1)) goto L_C06562E;
    if ((v0_4 == 2)) goto L_C06563C;
    goto L_C0656BE;
    L_C06563C:;
    FUN_0c0650b0(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
    L_C06562E:;
    FUN_0c064fd4(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
    L_C065620:;
    FUN_0c064fba(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
}

int FUN_0c065788(int a4, int a5, float f4)
{
    int stk[8];
    register int t1;
    register int t12;
    register int t2;
    register int t3;
    register float u6;
    register float u5;

    t3 = (((struct o404_int *)(a4))->v);
    t1 = FUN_0c064f8e(a4, ((int)stk + 0));
    t12 = 0x0;
    if (t1 != 0) {
        t2 = 0x0;
        u6 = f4;
        for (;;) {
            if (t3 == 0) {
                break;
            }
            u5 = (*(float *)((a5 + 0x0)));
            u6 = ((FUN_0c064d9c((*(int *)((t3 + 0x8))))));
            if (u6 > u5) {
                *(float *)((a5 + 0x0)) = u6;
                t2 = 0x1;
            }
            t3 = (*(int *)((t3 + 0x0)));
        }
        t12 = t2;
    }
    return t12;
}

int FUN_0c0657d4(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t3;
    int t4;

    t1 = 0x404;
    t3 = ((((struct o404_int *)(a4))->v));
    t4 = a7;
    for (;;) {
        if (t3 == 0) {
            t1 = 0x0;
            return t1;
        }
        if ((*(int *)((t3 + 0x4))) != 0) {
            t1 = 0x128;
            if (((*(short *)((((*(int *)((t3 + 0x4)))) + t1))) & (short)a5) == 0) {
                t3 = (*(int *)((t3 + 0x0)));
                continue;
            }
            break;
        }
        t4 = 0x10;
        if (((short)a5 & t4) != 0) {
            break;
        }
        t3 = (*(int *)((t3 + 0x0)));
    }
    return 0x1;
}

int FUN_0c065806(int a4, int a5, int a6, int a7, float f4)
{
    int stk[1];
    int t1;
    register int t4;
    int t5;
    register int t6;
    int t7;
    register int t8;
    register int t9;
    register float u12;
    register int t2;
    register int t3;
    register float u11;
    register int t28;
    register int t31;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    register int t41;

    *(unsigned short *)(((int)stk + 0)) = a6;
    t1 = 0x404;
    t4 = a4;
    t5 = a5;
    t6 = a6;
    t7 = a7;
    t8 = 0x0;
    t9 = ((((struct o404_int *)(a4))->v));
    u12 = f4;
    for (;;) {
        if (t9 == 0) {
            break;
        }
        t5 = (*(short *)(((int)stk + 0)));
        t7 = 0x10;
        t4 = (*(int *)((t9 + 0x8)));
        t3 = t5;
        t6 = 0x0;
        if ((t3 & t7) != 0) {
            t7 = (*(int *)((t9 + 0x4)));
            if ((t7 != 0) && (t1 = 0x128, t28 = *(short *)((t7 + t1)), t2 = t28, (t2 & t5) != 0)) {
                t6 = 0x1;
            } else {
                if (t7 == 0) {
                    t6 = 0x1;
                }
            }
        } else {
            t7 = (*(int *)((t9 + 0x4)));
            if ((t7 != 0) && (t1 = 0x128, t31 = *(short *)((t7 + t1)), t2 = t31, (t2 & t5) != 0)) {
                t6 = 0x1;
            }
        }
        if (t6 != 0) {
            u11 = (*(float *)((a5 + 0x0)));
            u12 = ((FUN_0c064d9c(t4)));
            if (u12 > u11) {
                *(float *)((a5 + 0x0)) = u12;
                t8 = 0x1;
            }
        } else {
            t35 = t1;
            t36 = t2;
            t37 = t3;
            t38 = t4;
            t39 = t5;
            t40 = t6;
            t41 = t7;
        }
        t1 = t35;
        t9 = (*(int *)((t9 + 0x0)));
        t2 = t36;
        t3 = t37;
        t4 = t38;
        t5 = t39;
        t6 = t40;
        t7 = t41;
    }
    return t8;
}

int FUN_0c06593a(int a4, int a5)
{
    register int t1;

    t1 = ((((struct o404_int *)(a4))->v));
    for (;;) {
        if (t1 == 0) {
            return 0x0;
        }
        if (a5 == (*(int *)((t1 + 0x4)))) {
            break;
        }
        t1 = (*(int *)((t1 + 0x0)));
    }
    return 0xFFFFFFFF;
}

int FUN_0c06599a(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t10;

    t0 = 0x404;
    t1 = a4;
    t2 = a5;
    t3 = ((((struct o404_int *)(a4))->v));
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t10 = (*(int *)((t3 + 0x4)));
        t5 = t1;
        t6 = t2;
        if (t10 != 0) {
            t0 = 0x126;
            t7 = (*(signed char *)((t10 + t0)));
            if (t7 == 0) {
                t2 = a5;
                t1 = t10;
                t1 = (t1 + 0x28);
                t0 = (math_vec3_accumulate(t1, t2));
            } else {
                t10 = t7;
                t5 = t1;
                t6 = t2;
            }
        } else {
            t10 = t7;
        }
        t3 = (*(int *)((t3 + 0x0)));
        t7 = t10;
        t1 = t5;
        t2 = t6;
    }
    return t0;
}

int FUN_0c065a90(int a4)
{
    int stk[8];
    register int t18;
    register int t2;
    register int t6;
    register int t7;
    register int t4;
    register int t5;
    int t12;
    register int t13;
    register int t14;

    t7 = (((struct o404_int *)(a4))->v);
    t2 = FUN_0c064f8e(a4, ((int)stk + 0));
    t18 = 0x0;
    if (t2 != 0) {
        t6 = 0x0;
        for (;;) {
            if (t7 == 0) {
                break;
            }
            t4 = (*(int *)((t7 + 0x4)));
            if ((t4 != 0) && (t12 = *(int *)((t7 + 0x4)), t5 = t12, t13 = *(signed char *)((t5 + 0x0)), t14 = (t4 == 0), t4 = t13, t4 == 0)) {
                t5 = 0x1;
                t2 = (*(signed char *)((((*(int *)((t7 + 0x4)))) + 0x1)));
                t5 = ((int)t5 << (int)t2);
                t6 = (t6 | t5);
            }
            t7 = (*(int *)((t7 + 0x0)));
        }
        t18 = t6;
    }
    return t18;
}
