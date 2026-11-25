/* game/player: functions 0C09BA40-0C09BDEA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059ef6(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07da48(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c14f824(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c09ba40(int a4, int a5, int a6);
int FUN_0c09bc34(int a4);
int FUN_0c09bc60(int a4);
int FUN_0c09bdb2(int a4);

int FUN_0c09ba40(int a4, int a5, int a6)
{
    int t0;
    int t1;
    register float u0;

    if (((*(int *)0xC542260) & 3) == 0) {
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (a4 + 0x28), a6);
    }
    FUN_0c07da48(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if ((*(short *)((a4 + 0x1E))) != 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        if (((int)(*(short *)((a4 + 0x1E))) <= 0) && (t0 = (((struct o20_short *)(a4))->v), (int)t0 > 0)) {
            FUN_0c07e2f4(a4, 0x13);
            (((struct o20_ushort *)(a4))->v) = 0x0;
        }
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if ((t0 != 0) && (t1 = (((struct o20_short *)(a4))->v), (int)t1 > 0)) {
            t0 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                if (((((struct o20_short *)(a4))->v)) != 1) {
                    FUN_0c07e2f4(a4, 0x11);
                    (((struct o22_ushort *)(a4))->v) = 0x5;
                } else {
                    FUN_0c07e2f4(a4, 0x13);
                }
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            }
        }
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 == 0) {
        return (unsigned char)t0;
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xF, (t0), 0x2, 0xF);
        u0 = (((struct o0_float *)0xC09BCB0)->v);
        t0 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = u0;
        (((struct o94_float *)(t0))->v) = u0;
        t0 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = u0;
        (((struct o94_float *)(t0))->v) = u0;
        u0 = (((struct o4_float *)0xC09BCB0)->v);
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * u0);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * u0);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0xE, (t0), 0x2, 0xE);
    *(unsigned short *)((a4 + 0x1C)) = 0x78;
    *(unsigned short *)((a4 + 0x1E)) = 0x14;
    u0 = (((struct o8_float *)0xC09BCB0)->v);
    (((struct o58_float *)(a4))->v) = (-(((((struct o4C_float *)(a4))->v)) / u0));
    (((struct o60_float *)(a4))->v) = (-(((((struct o54_float *)(a4))->v)) / u0));
    (((struct o50_float *)(a4))->v) = ((((struct oC_float *)0xC09BCB0)->v));
    (((struct o5C_float *)(a4))->v) = ((((struct o10_float *)0xC09BCB0)->v));
    t0 = (((struct o118_int *)(a4))->v);
    t1 = *(int *)(((0x118 + a4) + 0x4));
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o15_uchar *)(a4))->v) = 0x3;
    return 0x15;
}

int FUN_0c09bc34(int a4)
{
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t1;
}


int FUN_0c09bdb2(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0xB, (t0), 0x2, 0xB);
    FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x1);
    return FUN_0c037bf6(a4);
}
