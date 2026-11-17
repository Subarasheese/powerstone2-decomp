/* game/stage: functions 0C0A9A18-0C0AB038, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1650_uint { char p[0x1650]; unsigned int v; };
struct o168_float { char p[0x168]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07d086(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f566(void);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0aad54(int, int, int, int);
extern int FUN_0c13cc84();
extern int FUN_0c13ce2c();
int math_vec3_accumulate(int, int);
int FUN_0c0a9a18(int a4);
int FUN_0c0aa91e(int a4, int a5, int a6, int a7);
int FUN_0c0aa9d2(int a4);
int FUN_0c0aa9f4(int a4, int a5, int a6, int a7);
int FUN_0c0aaa10(int a4);
int FUN_0c0aaa46(int a4, int a5, int a6, int a7);
int FUN_0c0aad82(int a4, int a5, int a6, int a7);
int FUN_0c0aadc2(int a4, int a5, int a6, int a7);
int FUN_0c0aaea6(int a4, float f4);

int FUN_0c0a9a18(int a4)
{
    register int t1;

    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t1 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    return FUN_0c037bf6(a4);
}

int FUN_0c0aa91e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC0AA6EA))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0AA4AC))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A9FBA))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0AA6EA))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0AA3EE))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A9D38))(a4, a5, a6, a7);
}

int FUN_0c0aa9d2(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t2 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c0aa9f4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0aa9d2(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0AA974))(a4, a5, a6, a7);
}

int FUN_0c0aaa10(int a4)
{
    register int t0;

    t0 = FUN_0c07f566();
    if (t0 != 0) {
        return 0x1;
    }
    t0 = FUN_0c07f566();
    if (t0 != 0) {
        return 0x0;
    }
    return 0x63;
}

int FUN_0c0aaa46(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t1 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t1, 0x5, 0x2, (t1), 0x5, 0x2);
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x31, 0xFFFFFFFF, 0x5, 0x31);
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o98_float *)(t3))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t3))->v) = 1.0f;
    (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    u1 = *(float *)0xC541098;
    if ((((((struct o168_float *)(a4))->v)) > u1) && (t0 = (((struct o3770_int *)(a4))->v), u0 = (((struct o168_float *)(t0))->v), u0 > u1)) {
        u0 = (((struct o168_float *)(a4))->v);
        u1 = (((struct o168_float *)(((((struct o3770_int *)(a4))->v))))->v);
        u2 = u1;
        if (u1 > u0) {
            u2 = u0;
        }
        (((struct o2C_float *)(a4))->v) = (u2 + -1.0f);
    }
    (((struct o446_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o447_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    FUN_0c07d086(a4, 0x0, (*(float *)0xC0AABDC));
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0xE;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0aad82(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return FUN_0c0aad54(a4, a5, a6, a7);
}

int FUN_0c0aadc2(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC0AAD8E))(a4, a5, a6, a7);
}

int FUN_0c0aaea6(int a4, float f4)
{
    int stk[8];

    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R11;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    v0_2 = a4;
    w0_0 = f4;
    v0_3 = *(signed char *)((v0_2 + 0x15));
    v0_1 = (v0_3);
    v0_0 = (v0_2);
    if ((v0_3 == 0)) goto L_C0AAEC6;
    if ((v0_1 != 1)) goto L_C0AAEC2;
    L_C0AAFC0:;
    v0_2 = *(signed char *)((v0_0 + 0x17));
    v0_1 = (v0_2);
    if ((v0_2 == 1)) goto L_C0AAFD0;
    if (!((v0_1 == 3))) goto L_C0AB01C;
    if ((((((struct o8C_float *)(((((struct o118_int *)(v0_0))->v))))->v)) != 77.0f)) goto L_C0AB01C;
    v0_1 = ((int (*)(int, int, int, int, int, int))(FUN_0c13cc84))(v0_0, 0x0, R6, R7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4));
    goto L_C0AB01C;
    L_C0AB01C:;
    return FUN_0c037bf6(v0_0);
    L_C0AAFD0:;
    if (((*(signed char *)((v0_0 + 0x371A))) == 0)) goto L_C0AB01C;
    if ((32.0f > ((((struct o8C_float *)(((((struct o118_int *)(v0_0))->v))))->v)))) goto L_C0AB01C;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0AB01C;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x2;
    v0_1 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c13ce2c))(v0_0, 0x0, R6, R7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8));
    goto L_C0AB01C;
    L_C0AAEC2:;
    return v0_1;
    L_C0AAEC6:;
    v0_3 = *(signed char *)((v0_0 + 0x17));
    v0_1 = (v0_3);
    v0_2 = (0x6);
    v0_4 = (0xC07E79C);
    if ((v0_3 == 0)) goto L_C0AAEE2;
    if ((v0_1 == 1)) goto L_C0AAF28;
    if ((v0_1 == 2)) goto L_C0AAF6E;
    if (!((v0_1 == 3))) goto L_C0AAF8A;
    v0_1 = (0x5);
    goto L_C0AAF74;
    L_C0AAF8A:;
    v0_1 = *(int *)(((0x118 + v0_0) + 0x4));
    v0_2 = (((struct o118_int *)(v0_0))->v);
    (((struct oA0_float *)(v0_1))->v) = 1.0f;
    (((struct o9C_float *)(v0_1))->v) = 1.0f;
    (((struct oA0_float *)(v0_2))->v) = 1.0f;
    (((struct o9C_float *)(v0_2))->v) = 1.0f;
    v0_1 = *(int *)(((0x118 + v0_0) + 0x4));
    v0_2 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 1.0f;
    (((struct o98_float *)(v0_2))->v) = 1.0f;
    (((struct o94_float *)(v0_1))->v) = 1.0f;
    (((struct o94_float *)(v0_2))->v) = 1.0f;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (v0_2);
    goto L_C0AAFC0;
    L_C0AAF74:;
    v0_3 = v0_1;
    *(int *)((int)stk + 8) = v0_3;
    v0_2 = v0_2;
    *(int *)((int)stk + 4) = v0_2;
    v0_4 = *(signed char *)((v0_0 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    v0_5 = v0_4;
    *(int *)((int)stk + 0) = v0_5;
    FUN_0c07e79c(v0_0, v0_4, 0x6, v0_1, v0_5, v0_2, v0_3);
    goto L_C0AAF8A;
    L_C0AAF6E:;
    v0_1 = (0x4);
    goto L_C0AAF74;
    L_C0AAF28:;
    if (((*(signed char *)((v0_0 + 0x371A))) == 0)) goto L_C0AAF54;
    *(int *)((int)stk + 8) = 0xD;
    v0_1 = v0_2;
    *(int *)((int)stk + 4) = v0_1;
    v0_2 = *(signed char *)((v0_0 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    v0_3 = v0_2;
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c07e79c(v0_0, v0_2, 0x6, 0xD, v0_3, v0_1, 0xD);
    (((struct o1650_uint *)(v0_0))->v) = 0x1555;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x0;
    goto L_C0AAF8A;
    L_C0AAF54:;
    *(int *)((int)stk + 8) = 0x3;
    v0_1 = v0_2;
    *(int *)((int)stk + 4) = v0_1;
    v0_2 = *(signed char *)((v0_0 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    v0_3 = v0_2;
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c07e79c(v0_0, v0_2, 0x6, 0x3, v0_3, v0_1, 0x3);
    goto L_C0AAF8A;
    L_C0AAEE2:;
    R6 = (0x6);
    if (((*(signed char *)((v0_0 + 0x371A))) == 0)) goto L_C0AAEFC;
    *(int *)((int)stk + 8) = 0xC;
    v0_1 = v0_2;
    *(int *)((int)stk + 4) = v0_1;
    v0_2 = *(signed char *)((v0_0 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    v0_3 = v0_2;
    *(int *)((int)stk + 0) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = 0xC;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    v0_1 = (v0_2);
    R7 = (0xC);
    L_C0AAF0A:;
    FUN_0c07e79c(v0_0, v0_1, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 4), *(int *)((int)stk + 8));
    goto L_C0AAF8A;
    L_C0AAEFC:;
    *(int *)((int)stk + 8) = 0x2;
    v0_1 = v0_2;
    *(int *)((int)stk + 4) = v0_1;
    v0_2 = *(signed char *)((v0_0 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    v0_3 = v0_2;
    *(int *)((int)stk + 0) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = 0x2;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    v0_1 = (v0_2);
    R7 = (0x2);
    goto L_C0AAF0A;
}
