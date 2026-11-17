/* game/player: functions 0C0A74B0-0C0A7FA2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059fae(int, int, int);
int FUN_0c070320(int);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a74ce(int);
int FUN_0c0a797c(int, int, int);
int FUN_0c14f824(int, int, int);
int FUN_0c14f9d6(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0a758c(int a4, int a5, int a6);
int FUN_0c0a774e(int a4);
int FUN_0c0a7770(int a4);
int FUN_0c0a7862(int a4);
int FUN_0c0a7a82(int a4, int a5, int a6);

int FUN_0c0a758c(int a4, int a5, int a6)
{
    int stk[3];
    register float u10;
    register int t35;
    register int t65;
    register int t36;
    register int t40;
    register int t41;
    register int t42;
    register int t43;
    register float u48;
    register int t53;
    register int t54;
    register int t55;
    register int t56;

    if (((*(int *)0xC542260) & 1) == 0) {
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (a4 + 0x28), a6);
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    u10 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if ((int)(int)u10 <= (int)0x17) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    if (((int)u10 != 6) && (((int)u10 != 12) && ((int)u10 != 20))) {
        if (((int)u10 != 9) && ((int)u10 != 16)) {
            if ((int)u10 != 26) {
            } else {
                FUN_0c14f9d6((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
            }
        } else {
            FUN_0c059fae((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))), 0x1);
        }
    } else {
        FUN_0c059fae((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))), 0x0);
    }
    t35 = FUN_0c037bf6(a4);
    t65 = (unsigned char)t35;
    if ((unsigned char)t35 == 0) {
    } else {
        t36 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t36 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x10);
            t40 = *(int *)(((0x118 + a4) + 0x4));
            t41 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t40))->v) = 1.0f;
            (((struct o9C_float *)(t40))->v) = 1.0f;
            (((struct oA0_float *)(t41))->v) = 1.0f;
            (((struct o9C_float *)(t41))->v) = 1.0f;
            t42 = *(int *)(((0x118 + a4) + 0x4));
            t43 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t42))->v) = 1.0f;
            (((struct o98_float *)(t43))->v) = 1.0f;
            (((struct o94_float *)(t42))->v) = 1.0f;
            (((struct o94_float *)(t43))->v) = 1.0f;
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * 0.5f);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * 0.5f);
            t65 = 0x54;
        } else {
            FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0xF);
            (((struct o15_uchar *)(a4))->v) = 0x3;
            *(unsigned short *)((a4 + 0x1C)) = 0x78;
            *(unsigned short *)((a4 + 0x1E)) = 0x14;
            u48 = (((struct o0_float *)0xC0A7830)->v);
            (((struct o58_float *)(a4))->v) = (-(((((struct o4C_float *)(a4))->v)) / u48));
            (((struct o60_float *)(a4))->v) = (-(((((struct o54_float *)(a4))->v)) / u48));
            (((struct o50_float *)(a4))->v) = ((((struct o4_float *)0xC0A7830)->v));
            (((struct o5C_float *)(a4))->v) = ((((struct o8_float *)0xC0A7830)->v));
            t53 = (((struct o118_int *)(a4))->v);
            t54 = *(int *)(((0x118 + a4) + 0x4));
            (((struct oA0_float *)(t54))->v) = 1.0f;
            (((struct o9C_float *)(t54))->v) = 1.0f;
            (((struct oA0_float *)(t53))->v) = 1.0f;
            (((struct o9C_float *)(t53))->v) = 1.0f;
            t55 = *(int *)(((0x118 + a4) + 0x4));
            t56 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t55))->v) = 1.0f;
            (((struct o98_float *)(t56))->v) = 1.0f;
            (((struct o94_float *)(t55))->v) = 1.0f;
            (((struct o94_float *)(t56))->v) = 1.0f;
            t65 = 0x94;
        }
    }
    return t65;
}

int FUN_0c0a774e(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0a7770(int a4)
{
    register int t0;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x10);
            t0 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 5.0f;
            (((struct o94_float *)(t0))->v) = 5.0f;
            t0 = (((struct o11C_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 5.0f;
            (((struct o94_float *)(t0))->v) = 5.0f;
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
            return 0x54;
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        return FUN_0c037bf6(a4);
    }
    (((struct o15_uchar *)(a4))->v) = 0x2;
    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x10);
    t0 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
    return 0x54;
}

int FUN_0c0a7862(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x16);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        FUN_0c07ce58(a4, (((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194));
        t0 = FUN_0c07d774(a4);
        *(unsigned int *)((a4 + 0x38)) = t0;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(t0)) * ((((struct o0_float *)0xC25D3C8)->v)));
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o0_float *)0xC25D3C8)->v)));
        (((struct o58_float *)(a4))->v) = ((-((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o0_float *)0xC25D3C8)->v)))) / ((-(float)((((struct o4_int *)0xC25D3C8)->v))) + 47.0f));
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = ((-((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o0_float *)0xC25D3C8)->v)))) / (47.0f - (float)((((struct o4_int *)0xC25D3C8)->v))));
        t1 = 0x60;
    }
    return t1;
}

int FUN_0c0a7a82(int a4, int a5, int a6)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            return FUN_0c0a797c(a4, a5, a6);
        }
        return FUN_0c0a7862(a4);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0a7770(a4);
            }
            return FUN_0c0a774e(a4);
        }
        return FUN_0c0a758c(a4, a5, a6);
    }
    return FUN_0c0a74ce(a4);
}
