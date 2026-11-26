/* game/player: functions 0C037EC0-0C0385C4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o114_int { char p[0x114]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o88_float { char p[0x88]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int math_angle3_delta_scaled(int, int, int, float);
int math_vec3_sub_scaled(int, int, int, float);
int math_vec3i_add(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c037ec0(int a4, int a5);
int FUN_0c037f40(int a4, int a5);
int FUN_0c037f80(int a4, int a5);
int FUN_0c038024(int a4);
float FUN_0c038362(int a4);
float FUN_0c03848e(int a4);
int FUN_0c038548(int a4);
int FUN_0c038566(void);
void FUN_0c03859e(int a4);
void FUN_0c0385b2(int a4);

int FUN_0c037ec0(int a4, int a5)
{
    register int t0;

    t0 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t0 + 0x2);
    *(unsigned int *)((a4 + 0x0)) = ((int)((((float)(*(short *)((((t0 + 0x2) - 2) + 0x0))) * 65536.0f) / 182.044449f) / 360.0f) & 0xFFFF);
    t0 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t0 + 0x2);
    *(unsigned int *)((a4 + 0x4)) = ((int)((((float)(*(short *)((((t0 + 0x2) - 2) + 0x0))) * 65536.0f) / 182.044449f) / 360.0f) & 0xFFFF);
    t0 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t0 + 0x2);
    *(unsigned int *)((a4 + 0x8)) = ((int)((((float)(*(short *)((((t0 + 0x2) - 2) + 0x0))) * 65536.0f) / 182.044449f) / 360.0f) & 0xFFFF);
    return 0xC037F3C;
}

int FUN_0c037f40(int a4, int a5)
{
    register int t0;
    register float u0;

    t0 = *(int *)((a5 + 0x0));
    u0 = *(float *)0xC038044;
    *(unsigned int *)((a5 + 0x0)) = (t0 + 0x2);
    *(float *)((a4 + 0x0)) = ((float)(*(short *)((((t0 + 0x2) - 2) + 0x0))) / u0);
    t0 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t0 + 0x2);
    (((struct o4_float *)(a4))->v) = ((float)(*(short *)((((t0 + 0x2) - 2) + 0x0))) / u0);
    t0 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t0 + 0x2);
    (((struct o8_float *)(a4))->v) = ((float)(*(short *)((((t0 + 0x2) - 2) + 0x0))) / u0);
    return 0x8;
}

int FUN_0c037f80(int a4, int a5)
{
    register int t0;
    register float u0;

    t0 = *(int *)((a5 + 0x0));
    u0 = *(float *)0xC038048;
    *(unsigned int *)((a5 + 0x0)) = (t0 + 0x2);
    *(float *)((a4 + 0x0)) = ((float)(*(short *)((((t0 + 0x2) - 2) + 0x0))) / u0);
    t0 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t0 + 0x2);
    (((struct o4_float *)(a4))->v) = ((float)(*(short *)((((t0 + 0x2) - 2) + 0x0))) / u0);
    t0 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t0 + 0x2);
    (((struct o8_float *)(a4))->v) = ((float)(*(short *)((((t0 + 0x2) - 2) + 0x0))) / u0);
    return 0x8;
}


float FUN_0c038362(int a4)
{
    int stk[10];
    register int t0;
    register float u1;
    register float u4;
    register float u6;
    register float u7;
    register float u9;
    register float u14;
    register float u17;
    register float u19;
    register float u20;
    register float t28;
    register float u29;
    register float t31;
    register float u32;
    register float u34;
    register float u36;
    register float u37;
    register float u42;
    register float u44;
    register float u45;

    t0 = (((struct o118_int *)(a4))->v);
    u1 = (((struct o98_float *)(t0))->v);
    u4 = u1;
    if (!(u1 > 0.0f)) {
        u4 = ((((struct o90_float *)(t0))->v));
    }
    u6 = (((struct o94_float *)(t0))->v);
    u7 = (((struct o98_float *)(t0))->v);
    u9 = (((struct o90_float *)(t0))->v);
    *(unsigned int *)(((int)stk + 0)) = ((((struct o68_int *)(t0))->v));
    FUN_0c037f40((((int)stk + 0) + 0x1C), ((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = ((((struct o6C_int *)(t0))->v));
    FUN_0c037f40((((int)stk + 0) + 0x10), ((int)stk + 0));
    math_vec3_sub_scaled((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x1C), (((u7 - u6) + u9) / u4));
    u14 = (((struct o98_float *)(t0))->v);
    u17 = u14;
    if (!(u14 > 0.0f)) {
        u17 = ((((struct o90_float *)(t0))->v));
    }
    u19 = (((struct o94_float *)(t0))->v);
    u20 = (((struct o98_float *)(t0))->v);
    *(unsigned int *)(((int)stk + 0)) = ((((struct o68_int *)(t0))->v));
    FUN_0c037f40((((int)stk + 0) + 0x1C), ((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = ((((struct o6C_int *)(t0))->v));
    FUN_0c037f40((((int)stk + 0) + 0x10), ((int)stk + 0));
    math_vec3_sub_scaled((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x1C), ((u20 - u19) / u17));
    FUN_0c0e2390((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x1C));
    t28 = math_sin_angle16((*(int *)((a4 + 0x38))));
    u29 = (((struct o40_float *)(a4))->v);
    t31 = math_cos_angle16((*(int *)((a4 + 0x38))));
    u32 = (((struct o40_float *)(a4))->v);
    u34 = (t28 * u29);
    u36 = (t31 * u32);
    u37 = (((((struct o24_float *)(((int)stk + 0)))->v)) * u34);
    u37 = u37 + u36 * (*(float *)(((int)stk + 28)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u37);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o20_float *)(((int)stk + 0)))->v)));
    u42 = (t28 * u29);
    u44 = (t31 * u32);
    u45 = (-(((((struct o1C_float *)(((int)stk + 0)))->v)) * u42));
    u45 = u45 + u44 * (*(float *)(((int)stk + 36)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + u45);
    return (t31 * u32);
}

float FUN_0c03848e(int a4)
{
    int stk[5];
    register int t0;
    register float u6;
    register float u7;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = (((struct o118_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 0)) = (((((struct o68_int *)(t0))->v)) + 0xC);
    FUN_0c037f40((((int)stk + 0) + 0x8), ((int)stk + 0));
    u6 = *(float *)(((int)stk + 12));
    u7 = (((((struct o88_float *)(t0))->v)) * ((((struct o44_float *)((*(int *)(((int)stk + 4)))))->v)));
    *(float *)(((int)stk + 12)) = (u6 * u7);
    return (u6 * u7);
}

int FUN_0c038548(int a4)
{
    register int t1;
    register int t2;

    t1 = 0xC532434;
    t2 = (*(int *)(((a4 << 2) + 0xC532434)));
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = (FUN_0c038024(t2));
        t2 = (*(int *)((t2 + 0xC)));
    }
    return t1;
}

int FUN_0c038566(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t6;
    register int t8;
    register int t9;

    t0 = 0xC532498;
    t1 = 0xC532498;
    t2 = 0xC532498;
    t3 = 0xC532498;
    for (;;) {
        t6 = 0x3714;
        if ((*(signed char *)((t3 + 0x3714))) != 0) {
            t0 = t2;
            t6 = (FUN_0c038024(t0));
        } else {
            t8 = t0;
            t9 = t1;
        }
        t3 = (t3 + 0x3938);
        t0 = t8;
        t1 = t9;
        t2 = (t2 + 0x3938);
        if ((unsigned int)t3 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t6;
}

void FUN_0c03859e(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + a4);
    *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a4 + 0x4))) + a4);
    *(unsigned int *)((a4 + 0x8)) = ((*(int *)((a4 + 0x8))) + a4);
}

void FUN_0c0385b2(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (((*(int *)((a4 + 0x0))) + a4) + 0x8);
    *(unsigned int *)((a4 + 0x4)) = (((*(int *)((a4 + 0x4))) + a4) + 0x8);
}
