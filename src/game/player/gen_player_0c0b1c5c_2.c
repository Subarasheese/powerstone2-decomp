/* game/player: functions 0C0B1C5C-0C0B4AFC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o3780_float { char p[0x3780]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oD4_int { char p[0xD4]; int v; };
float math_vec2_cos_between(float, float, float, float);
int FUN_0c058270(int, int, int);
int FUN_0c0582de(int, int);
int math_mat_get_translate(int, int);
int FUN_0c0b1c7e(int);
int FUN_0c0b1d20(int, int);
int FUN_0c0b1db6(int);
int FUN_0c0b21d8(void);
int FUN_0c0b223c(void);
extern int FUN_0c0b2888();
int FUN_0c0df210(float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c0e2390(int, int, int);
float FUN_0c17c450(int);
int FUN_0c187798(void);
int FUN_0c0b1edc(int a4, float f4);
int FUN_0c0b2064(int a4, float f4);
int FUN_0c0b23b4(int a4);
float FUN_0c0b2ac2(int a4, float f4);

int FUN_0c0b1edc(int a4, float f4)
{
    int stk[19];
    register int t7;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register float u15;
    register float u16;
    float u17;
    register int t24;
    register float u27;
    register float u28;
    register float u29;
    register float u39;
    register int t8;
    register float u13;
    register float u14;
    register int t47;
    register float u48;
    register float u49;
    register float u50;
    register float u44;
    register float u45;

    *(unsigned int *)(((int)stk + 0)) = a4;
    (((struct o34_uchar *)((0x38F8 + a4)))->v) = 0xFFFFFFFF;
    FUN_0c0b1c7e((((int)stk + 0) + 0x3C));
    math_mat_get_translate(((*(int *)(((0x38F8 + a4) + 0x10))) + 0x64), (((int)stk + 0) + 0x30));
    *(float *)(((int)stk + 44)) = (math_cos_angle16((*(int *)((a4 + 0x38)))));
    *(float *)(((int)stk + 36)) = (math_sin_angle16((*(int *)((a4 + 0x38)))));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x10);
    t7 = 0xC0B1FF0;
    t9 = (((int)stk + 0) + 0x3C);
    t10 = (((int)stk + 0) + 0x3C);
    t11 = (((int)stk + 0) + 0x3C);
    t12 = ((((int)stk + 0) + 0x3C) + 0x10);
    u15 = f4;
    u16 = 0.0f;
    u17 = 0.0f;
    for (;;) {
        if ((unsigned int)t11 >= (unsigned int)(*(int *)(((int)stk + 8)))) {
            break;
        }
        t7 = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        t9 = (*(int *)((t11 + 0x0)));
        t7 = (FUN_0c0b1d20(t9, t7));
        if (t7 == 0) {
            t8 = (*(int *)((t10 + 0x0)));
            t9 = ((int)stk + 0);
            t24 = (t8 * 0x3938);
            t8 = 0xC17C2F0;
            t9 = (t9 + 0x18);
            t7 = (FUN_0c0e2390(t9, (t24 + 0xC5324C0), (((int)stk + 0) + 0x30)));
            t9 = ((int)stk + 0);
            t9 = (t9 + 0x18);
            t7 = 0x20;
            u27 = *(float *)((((int)stk + 0) + t7));
            t7 = 0x18;
            u28 = *(float *)((((int)stk + 0) + t7));
            t7 = 0x2C;
            u29 = *(float *)((((int)stk + 0) + t7));
            t7 = 0x24;
            u17 = (FUN_0c17c450(t9));
            u15 = (*(float *)((((int)stk + 0) + t7)));
            t7 = 0xC0B2004;
            u15 = (math_vec2_cos_between(u15, u29, u28, u27));
            u14 = (*(float *)((t7 + 0x0)));
            if (!(u15 > u14) && (!(1000.0f > u17) && (u17 > u16))) {
                t8 = (*(int *)(((int)stk + 4)));
                t7 = 0x34;
                *(unsigned char *)(((0x38F8 + a4) + t7)) = (*(int *)((t8 + 0x0)));
                u16 = u17;
                t7 = (FUN_0c0df210(u15));
                t8 = 0xC058270;
                t9 = ((int)stk + 0);
                t12 = t7;
                t9 = (t9 + 0xC);
                t7 = (FUN_0c058270(t9, (((int)stk + 0) + 0x24), (((int)stk + 0) + 0x18)));
                t7 = 0x10;
                u14 = 0.0f;
                u13 = (*(float *)((((int)stk + 0) + t7)));
                if (!(u14 > u13)) {
                    t12 = (t12 - 0x1555);
                    if ((int)t12 < (int)0xE38) {
                        t12 = 0xE38;
                    }
                } else {
                    u13 = (float)t12;
                    u39 = u13;
                    u39 *= -1.0f;
                    u13 = u39;
                    t12 = (int)u13;
                    t12 = (t12 + 0x1555);
                    if ((int)t12 > (int)0xFFFFF1C8) {
                        t12 = 0xFFFFF1C8;
                    }
                }
                t9 = (-t12);
                t9 = ((int)t9 >> 8);
                t7 = 0x35;
                *(unsigned char *)(((0x38F8 + a4) + t7)) = t9;
                t7 = 0x36;
                *(unsigned short *)(((0x38F8 + a4) + t7)) = (int)u16;
                t47 = t9;
                u44 = u13;
            } else {
                u45 = u15;
            }
            u48 = u44;
            u49 = u14;
            u50 = u45;
        }
        u13 = u48;
        u14 = u49;
        u15 = u50;
        t8 = (*(int *)(((int)stk + 4)));
        t9 = t47;
        t11 = (t11 + 0x4);
        t10 = (t10 + 0x4);
        t8 = (t8 + 0x4);
        *(unsigned int *)(((int)stk + 4)) = t8;
    }
    return (*(signed char *)(((0x38F8 + a4) + 0x34)));
}

int FUN_0c0b2064(int a4, float f4)
{
    int stk[15];
    register int t9;
    register int t12;
    register float u15;
    float u16;
    register int t19;
    register float u28;
    register float u29;
    register float u30;
    register int t10;
    register int t11;
    register float u13;
    register float u14;
    register float u17;
    register int t42;
    register float u44;
    register float u45;
    register float u46;
    register float u39;
    register float u40;
    register float u33;
    register int t34;
    register float u35;

    *(unsigned int *)(((int)stk + 4)) = 0xFFFFFFFF;
    FUN_0c0b1c7e((((int)stk + 0) + 0x2C));
    FUN_0c187798();
    FUN_0c0582de((((int)stk + 0) + 0x20), (((((struct oD4_int *)(a4))->v)) + 0x28));
    *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 36)) = 0.0f;
    (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = (math_cos_angle16((*(int *)((a4 + 0x38)))));
    (((struct o14_float *)(((int)stk + 0)))->v) = (math_sin_angle16((*(int *)((a4 + 0x38)))));
    t9 = 0xC0B20FC;
    t12 = 0x0;
    u15 = f4;
    u16 = 999999.0f;
    for (;;) {
        if ((int)t12 >= (int)0x4) {
            break;
        }
        t9 = (*(signed char *)((a4 + 0x1)));
        t19 = t9;
        t9 = t12;
        t9 = (t9 << 2);
        t9 = (FUN_0c0b1d20((*(int *)(((((int)stk + 0) + 0x2C) + t9))), t19));
        if (t9 == 0) {
            t10 = t12;
            t10 = (t10 << 2);
            t10 = (t10 + (((int)stk + 0) + 0x2C));
            t11 = 0xC532498;
            t9 = 0x2C;
            u13 = (*(float *)(((int)stk + 0)));
            u14 = (*(float *)(((((*(int *)((t10 + 0x0))) * 0x3938) + t11) + t9)));
            if (!(u14 > u13)) {
                t9 = (FUN_0c0e2390((((int)stk + 0) + 0x8), ((((*(int *)((t10 + 0x0))) * 0x3938) + t11) + 0x28), (((int)stk + 0) + 0x20)));
                t9 = 0x10;
                u28 = *(float *)((((int)stk + 0) + t9));
                t9 = 0x8;
                u29 = *(float *)((((int)stk + 0) + t9));
                t9 = 0x8;
                u30 = *(float *)(((((int)stk + 0) + 0x14) + t9));
                u17 = (FUN_0c17c450((((int)stk + 0) + 0x8)));
                u15 = ((((struct o14_float *)(((int)stk + 0)))->v));
                u14 = 0.0f;
                u15 = (math_vec2_cos_between(u15, u30, u29, u28));
                if (!(u14 > u15) && (((t9 = 0xC0B222C, u33 = *(float *)((t9 + 0x0)), t34 = (u14 > u15), u14 = u33, !(u14 > u15)) || (t9 = 0xC0B2230, u35 = *(float *)((t9 + 0x0)), u13 = u35, !(u17 > u13))) && (!(50.0f > u17) && (!(u17 > 700.0f) && (u16 > u17))))) {
                    *(unsigned int *)(((int)stk + 4)) = t12;
                    u16 = u17;
                    t42 = t9;
                }
                u40 = u15;
            } else {
                t42 = t9;
                u39 = u13;
            }
            u44 = u39;
            u45 = u14;
            u46 = u40;
        } else {
            t42 = t9;
        }
        u13 = u44;
        u14 = u45;
        u15 = u46;
        t9 = t42;
        t12 = (t12 + 0x1);
    }
    return (*(int *)(((int)stk + 4)));
}

int FUN_0c0b23b4(int a4)
{
    register int t0;
    register int t50;
    register int t1;
    register int t41;
    register int t32;
    register int t3;
    register int t6;
    int t7;
    register int t8;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t19;
    register int t5;

    t0 = FUN_0c0b1db6(a4);
    t50 = 0x0;
    if (t0 != 0) {
        t1 = FUN_0c0b223c();
        t41 = 0x0;
        if (t1 == 0) {
            t3 = FUN_0c0b21d8();
            t32 = 0x0;
            if (t3 != 2) {
                t6 = 0x0;
                t7 = 0x0;
                t8 = 0x0;
                for (;;) {
                    if ((int)t6 >= (int)0x4) {
                        break;
                    }
                    t3 = t6;
                    t3 = (t3 << 2);
                    t3 = (*(int *)(((0x38F8 + a4) + t3)));
                    t3 = (*(signed char *)(((0x1B) + t3)));
                    if (t3 == 2) {
                        t5 = 0x1;
                        t5 = ((int)t5 << (int)t6);
                        t8 = (t8 + 0x1);
                        t7 = (t7 | t5);
                    }
                    t6 = (t6 + 0x1);
                }
                t32 = 0x0;
                if ((int)t8 >= (int)0x2) {
                    if ((0x5 & t7) == 5) {
                        t14 = ((int (*)(int, int, int, int))(FUN_0c0b2888))(a4, 0x20, 0x1, 0x4);
                    } else {
                        if ((0xA & t7) == 10) {
                            t15 = ((int (*)(int, int, int, int))(FUN_0c0b2888))(a4, 0x20, 0x2, 0x4);
                        } else {
                            t16 = FUN_0c179ac0();
                            t17 = ((~(((~t16) + 0x1) & 0x1)) + 0x1);
                            if ((int)t16 >= 0) {
                                t17 = (t16 & 0x1);
                            }
                            t19 = ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x20, (t17 + 0x1));
                        }
                    }
                    t32 = 0x1;
                }
            }
            t41 = t32;
        }
        t50 = t41;
    }
    return t50;
}

float FUN_0c0b2ac2(int a4, float f4)
{
    int stk[15];
    register float t8;
    register int t9;
    register int t11;
    register int t12;
    register int t13;
    register float u15;
    register float u16;
    register float u25;
    register float u26;
    register float u27;
    register float u31;
    register int t10;
    register float u14;
    register float u17;
    register int t37;
    register float u38;
    register float u39;

    *(unsigned int *)(((int)stk + 4)) = (*(signed char *)((a4 + 0x1)));
    FUN_0c0b1c7e((((int)stk + 0) + 0x2C));
    FUN_0c187798();
    FUN_0c0582de((((int)stk + 0) + 0x20), (((((struct oD4_int *)(a4))->v)) + 0x28));
    (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = (math_cos_angle16((*(int *)((a4 + 0x38)))));
    t8 = math_sin_angle16((*(int *)((a4 + 0x38))));
    (((struct o14_float *)(((int)stk + 0)))->v) = t8;
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x3C);
    t9 = 0xC0B2B6C;
    t11 = (((int)stk + 0) + 0x2C);
    t12 = (((int)stk + 0) + 0x2C);
    t13 = (((int)stk + 0) + 0x2C);
    u15 = f4;
    u16 = 999999.0f;
    for (;;) {
        if ((unsigned int)t13 >= (unsigned int)(*(int *)(((int)stk + 0)))) {
            break;
        }
        t9 = (*(signed char *)((a4 + 0x1)));
        t9 = (FUN_0c0b1d20((*(int *)((t13 + 0x0))), t9));
        if (t9 == 0) {
            t9 = (FUN_0c0e2390((((int)stk + 0) + 0x8), ((((*(int *)((t12 + 0x0))) * 0x3938) + 0xC532498) + 0x28), (((int)stk + 0) + 0x20)));
            t10 = 0xC17C450;
            t9 = 0x10;
            u25 = *(float *)((((int)stk + 0) + t9));
            t9 = 0x8;
            u26 = *(float *)((((int)stk + 0) + t9));
            t9 = 0x8;
            u27 = *(float *)(((((int)stk + 0) + 0x14) + t9));
            u17 = (FUN_0c17c450((((int)stk + 0) + 0x8)));
            u15 = ((((struct o14_float *)(((int)stk + 0)))->v));
            u15 = (math_vec2_cos_between(u15, u27, u26, u25));
            u15 = (u15 - 1.0f);
            t9 = 0xC0B2C14;
            u14 = (*(float *)((t9 + 0x0)));
            if (u14 > u15) {
                u31 = u15;
                u31 *= -5.0f;
                u15 = u31;
            } else {
                u15 = 1.0f;
            }
            u15 = (u15 * u17);
            if (u16 > u15) {
                t10 = (*(int *)((t11 + 0x0)));
                u16 = u17;
                *(unsigned int *)(((int)stk + 4)) = t10;
                t37 = t10;
            }
            u38 = u14;
            u39 = u15;
        }
        u14 = u38;
        u15 = u39;
        t13 = (t13 + 0x4);
        t10 = t37;
        t12 = (t12 + 0x4);
        t11 = (t11 + 0x4);
    }
    *(unsigned int *)((a4 + 0x10)) = (((*(int *)(((int)stk + 4))) * 0x3938) + 0xC532498);
    (((struct o3780_float *)(a4))->v) = u16;
    return t8;
}
