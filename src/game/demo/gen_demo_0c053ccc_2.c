/* game/demo: functions 0C053CCC-0C0548A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o260_float { char p[0x260]; float v; };
struct o268_int { char p[0x268]; int v; };
struct o268_uint { char p[0x268]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c053d32(int, int, int, int);
int FUN_0c053da0(int);
int FUN_0c054a62(int, int);
int FUN_0c056b68(int, int);
int FUN_0c056c28(int, int);
int math_atan2_angle16(int, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c053eb2(int a4, int a5, int a6, int a7);
int FUN_0c053f34(int a4);
int FUN_0c05457a(void);
int FUN_0c0546f4(int a4);

int FUN_0c053eb2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c053da0(a4);
    }
    FUN_0c053d32(a4, a5, a6, a7);
    return FUN_0c053da0(a4);
}

int FUN_0c053f34(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register float u5;
    register float u6;
    register float u7;
    register int t24;
    register int t26;
    register float u29;
    register int t38;
    register int t41;
    register int t16;
    register int t27;

    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)0xC54223C;
    if ((*(signed char *)(((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C)) + 0x0))) != 0) {
        u5 = (((struct o10_float *)((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C))))->v);
        *(float *)((((int)stk + 0) + 0x0)) = (u5 - ((((struct o4_float *)((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C))))->v)));
        u6 = (((struct oC_float *)((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C))))->v);
        u7 = (((struct o18_float *)((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C))))->v);
        (((struct o8_float *)(((int)stk + 0)))->v) = (u7 - u6);
        if ((u7 - u6) == 0.0f) {
            (((struct o8_float *)(((int)stk + 0)))->v) = 9.99999997e-07f;
        }
        t16 = (math_atan2_angle16(0xC5421F8, (*(float *)((((int)stk + 0) + 0x0))), ((((struct o8_float *)(((int)stk + 0)))->v))));
    } else {
        t16 = (*(int *)(((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C)) + 0x28)));
    }
    if ((*(signed char *)((a4 + 0xA))) == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t24 = 0xC1B9050;
        t26 = (0x248 + a4);
        for (;;) { t27 = *(int *)t24; t24 = (t24 + 4); if ((unsigned int)((0xC1B9050 + 128)) < (unsigned int)t24) break; *(unsigned int *)t26 = t27; t26 = (t26 + 4); }
        (((struct o268_uint *)(a4))->v) = (0xFFFFEAAB + t16);
        u29 = (((struct o20_float *)((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C))))->v);
        (((struct o260_float *)(a4))->v) = (u29 * (*(float *)0xC0540E8));
        FUN_0c054a62(a4, (0x248 + a4));
    }
    t38 = (0x1555 + t16);
    if ((int)((0x1555 + t16) - ((((struct o268_int *)(a4))->v))) > (int)0x8000) {
        t38 = ((0x1555 + t16) - 0x10000);
    }
    t41 = t38;
    if ((int)(t38 - ((((struct o268_int *)(a4))->v))) < (int)0xFFFF8000) {
        t41 = (t38 + 0x10000);
    }
    *(unsigned int *)((((0x264 + a4) + 0x4) + 0x0)) = ((*(int *)((((0x264 + a4) + 0x4) + 0x0))) + ((int)((int)(t41 - (*(int *)((((0x264 + a4) + 0x4) + 0x0)))) / (int)0x12C)));
    (((struct o268_uint *)(a4))->v) = (((((struct o268_int *)(a4))->v)) & 0xFFFF);
    return (FUN_0c056b68(a4, ((0x264 + a4) + 0x4)));
}


int FUN_0c0546f4(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register float u5;
    register float u6;
    register float u7;
    register int t22;
    register int t24;
    register int t26;
    register int t37;
    register int t39;
    register int t20;
    register int t47;
    register int t27;
    register int t40;

    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)0xC54223C;
    if ((*(signed char *)((((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C)) + 0x0))) != 0) {
        u5 = (((struct o10_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v);
        *(float *)((((int)stk + 0) + 0x0)) = (u5 - ((((struct o4_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v)));
        u6 = (((struct oC_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v);
        u7 = (((struct o18_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v);
        (((struct o8_float *)(((int)stk + 0)))->v) = (u7 - u6);
        if ((u7 - u6) == 0.0f) {
            (((struct o8_float *)(((int)stk + 0)))->v) = 9.99999997e-07f;
        }
        t20 = (math_atan2_angle16(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C)), (*(float *)((((int)stk + 0) + 0x0))), ((((struct o8_float *)(((int)stk + 0)))->v))));
    } else {
        t20 = (*(int *)((((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C)) + 0x28)));
    }
    t22 = *(signed char *)((a4 + 0xA));
    if (t22 != 0) {
        if (t22 != 1) {
            t47 = t20;
        } else {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            t24 = 0xC1B92B4;
            t26 = (0x248 + a4);
            for (;;) { t27 = *(int *)t24; t24 = (t24 + 4); if ((unsigned int)((0xC1B92B4 + 128)) < (unsigned int)t24) break; *(unsigned int *)t26 = t27; t26 = (t26 + 4); }
            (((struct o268_uint *)(a4))->v) = t20;
            FUN_0c054a62(a4, (0x248 + a4));
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t37 = 0xC1B9234;
        t39 = (0x248 + a4);
        for (;;) { t40 = *(int *)t37; t37 = (t37 + 4); if ((unsigned int)((0xC1B9234 + 128)) < (unsigned int)t37) break; *(unsigned int *)t39 = t40; t39 = (t39 + 4); }
        (((struct o268_uint *)(a4))->v) = t20;
        FUN_0c054a62(a4, (0x248 + a4));
    }
    return (FUN_0c056b68(a4, t47));
}
