/* game/player: functions 0C09E190-0C09EAF6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05258e(int, int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059dae(int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c070320(int);
int FUN_0c073566(int, int);
int FUN_0c07bdd0(int, int);
int FUN_0c07d086(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c091448(int, int);
int FUN_0c090e12(int);
int FUN_0c09e84c(int);
int FUN_0c0ae4c0(int);
int FUN_0c12ebe4(int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c14fed8(int, int, float, float);
int FUN_0c179ac0(void);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c09e190(int a4);
int FUN_0c09e38c(int a4, int a5, int a6, int a7);
int FUN_0c09e6f0(int a4);
int FUN_0c09e8de(int a4, int a5, int a6, int a7);
int FUN_0c09e980(int a4);
int FUN_0c09eab2(int a4, int a5, int a6, int a7);

int FUN_0c09e190(int a4)
{
    int stk[12];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t21;

    *(int *)((int)stk + 20) = 0x2;
    *(int *)((int)stk + 16) = 0x5;
    t0 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 32)) = t0;
    t1 = t0;
    *(int *)((int)stk + 12) = t1;
    FUN_0c07e79c(a4, t0, 0x5, 0x2, t1, 0x5, 0x2);
    t3 = *(int *)(((0x118 + a4) + 0x4));
    t4 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    (((struct oA0_float *)(t4))->v) = 1.0f;
    (((struct o9C_float *)(t4))->v) = 1.0f;
    t5 = *(int *)(((0x118 + a4) + 0x4));
    t6 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t5))->v) = 1.0f;
    (((struct o98_float *)(t6))->v) = 1.0f;
    (((struct o94_float *)(t5))->v) = 1.0f;
    (((struct o94_float *)(t6))->v) = 1.0f;
    *(int *)((int)stk + 8) = 0x7;
    *(int *)((int)stk + 4) = 0x5;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x7, 0xFFFFFFFF, 0x5, 0x7);
    t9 = (((struct o3770_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 28)) = t9;
    t10 = *(int *)(((t9 + 0x118) + 0x4));
    t11 = (((struct o118_int *)(t9))->v);
    (((struct oA0_float *)(t10))->v) = 1.0f;
    (((struct o9C_float *)(t10))->v) = 1.0f;
    (((struct oA0_float *)(t11))->v) = 1.0f;
    (((struct o9C_float *)(t11))->v) = 1.0f;
    t12 = (((struct o3770_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 24)) = t12;
    t13 = *(int *)(((t12 + 0x118) + 0x4));
    t14 = (((struct o118_int *)(t12))->v);
    (((struct o98_float *)(t13))->v) = 1.0f;
    (((struct o98_float *)(t14))->v) = 1.0f;
    (((struct o94_float *)(t13))->v) = 1.0f;
    (((struct o94_float *)(t14))->v) = 1.0f;
    (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o446_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o447_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    FUN_0c091448(a4, ((((struct o3770_int *)(a4))->v)));
    FUN_0c07d086(a4, 0x0, 150.0f);
    t21 = (((struct o3770_int *)(a4))->v);
    (((struct o3830_ushort *)(t21))->v) = (((((struct o12E_short *)(t21))->v)) ^ 0xF);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (((int)stk + 0) + 0x24));
    FUN_0c14f238((((int)stk + 0) + 0x24), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c09e38c(int a4, int a5, int a6, int a7)
{
    register int t4;
    int t1;

    if (((int)(*(signed char *)((a4 + 0x16))) < (int)0x2) && (t1 = (((struct o3770_int *)(a4))->v), t1 == 0)) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t4 = *(signed char *)((a4 + 0x16));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                return t4;
            }
            return FUN_0c090e12(a4);
        }
        return ((int (*)(int, int, int, int))(0xC09E2EC))(a4, a5, a6, a7);
    }
    return FUN_0c09e190(a4);
}


int FUN_0c09e8de(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if ((((int)(*(signed char *)((a4 + 0x16))) >= (int)0x3) && (t0 = *(short *)((a4 + 0x1C)), t0 != 1)) || (t1 = (((struct o3770_int *)(a4))->v), t1 != 0)) {
        t0 = *(signed char *)((a4 + 0x16));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        return t0;
                    }
                    return FUN_0c09e84c(a4);
                }
                return FUN_0c09e6f0(a4);
            }
            return ((int (*)(int, int, int, int))(0xC09E5A0))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC09E3FC))(a4, a5, a6, a7);
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c09e980(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x18));
    if (t0 != 0) {
        if (t0 == 1) {
            return t0;
        }
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    return t0;
                }
                t0 = FUN_0c064ee4(a4, 0x2);
                if (t0 != 0) {
                    (((struct o37A4_float *)(a4))->v) = 0.0f;
                } else {
                    FUN_0c070320(a4);
                }
                t0 = FUN_0c037bf6(a4);
                if ((unsigned char)t0 != 0) {
                    FUN_0c085cac(a4, 0xE, 0x0);
                    t0 = *(int *)(((0x118 + a4) + 0x4));
                    t1 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t0))->v) = 1.0f;
                    (((struct o9C_float *)(t0))->v) = 1.0f;
                    (((struct oA0_float *)(t1))->v) = 1.0f;
                    (((struct o9C_float *)(t1))->v) = 1.0f;
                    t0 = *(int *)(((0x118 + a4) + 0x4));
                    t1 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t0))->v) = 1.0f;
                    (((struct o98_float *)(t1))->v) = 1.0f;
                    (((struct o94_float *)(t0))->v) = 1.0f;
                    (((struct o94_float *)(t1))->v) = 1.0f;
                    return 0x94;
                }
                return FUN_0c038362(a4);
            }
        } else {
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x1);
            FUN_0c059e60(a4, 0x5);
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
        }
        t0 = FUN_0c064ee4(a4, 0x2);
        if (t0 != 0) {
            (((struct o37A4_float *)(a4))->v) = 0.0f;
        } else {
            FUN_0c070320(a4);
        }
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2A, 0xFFFFFFFF, 0x4, 0x2A);
            FUN_0c037bf6(a4);
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            return 0x18;
        }
        return FUN_0c038362(a4);
    }
    FUN_0c037bf6(a4);
    return FUN_0c038362(a4);
}

int FUN_0c09eab2(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = (((struct o3770_int *)(a4))->v);
    if ((t1 != 0) && (t0 = *(signed char *)((t1 + 0x14)), t0 == 2)) {
        t0 = *(signed char *)((a4 + 0x3728));
        if ((t0 != 0) && (t0 == 5)) {
            FUN_0c09e980(a4);
        } else {
            FUN_0c0ae4c0(a4);
        }
        (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
        return 0x3770;
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}
