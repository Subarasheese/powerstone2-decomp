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
int nlRand(void);
float math_sin_angle16(int);
int FUN_0c0e2390(int, int, int);
float FUN_0c17c450(int);
int FUN_0c187798(void);
int FUN_0c0b1edc(int a4, float f4);
int FUN_0c0b2064(int a4, float f4);
int FUN_0c0b23b4(int a4);
float FUN_0c0b2ac2(int a4, float f4);
struct o38_int { char p[0x38]; int v; };


int FUN_0c0b1edc(int a4, float f4)
{
    int stk[19];
    int t7;
    int t9;
    int t12;
    float u15;
    float u13;
    float u14;
    int t11;
    float u17;
    int t10;
    int t8;
    int t47;
    float u45;
    float u44;
    float u50;
    float u49;
    float u48;
    float u29;
    float u28;
    float u27;
    float u39;
    float u16;

    *(unsigned int *)(((int)stk + 0)) = a4;
    (((struct o34_uchar *)((0x38F8 + a4)))->v) = 0xFFFFFFFF;
    FUN_0c0b1c7e((((int)stk + 0) + 0x3C));
    math_mat_get_translate(((*(int *)(((0x38F8 + a4) + 0x10))) + 0x64), (((int)stk + 0) + 0x30));
    *(float *)(((int)stk + 44)) = (math_cos_angle16(((((struct o38_int *)(a4))->v))));
    *(float *)(((int)stk + 36)) = (math_sin_angle16(((((struct o38_int *)(a4))->v))));
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
        t9 = (*(int *)(t11));
        t7 = (FUN_0c0b1d20(t9, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)))));
        if (t7 == 0) {
            t8 = 0xC17C2F0;
            t7 = (FUN_0c0e2390((((int)stk + 0) + 0x18), (((*(int *)(t10)) * 0x3938) + 0xC5324C0), (((int)stk + 0) + 0x30)));
            t9 = (((int)stk + 0) + 0x18);
            u27 = *(float *)((((int)stk + 0) + 0x20));
            u28 = *(float *)((((int)stk + 0) + 0x18));
            u29 = *(float *)((((int)stk + 0) + 0x2C));
            u17 = (FUN_0c17c450(t9));
            t7 = 0xC0B2004;
            u15 = (math_vec2_cos_between((*(float *)((((int)stk + 0) + 0x24))), u29, u28, u27));
            u14 = (*(float *)(0xC0B2004));
            if (!(u15 > u14) && (!(1000.0f > u17) && (u17 > u16))) {
                *(unsigned char *)(((0x38F8 + a4) + 0x34)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
                u16 = u17;
                t7 = (FUN_0c0df210(u15));
                t8 = 0xC058270;
                t12 = t7;
                t9 = (((int)stk + 0) + 0xC);
                t7 = (FUN_0c058270(t9, (((int)stk + 0) + 0x24), (((int)stk + 0) + 0x18)));
                t7 = 0x10;
                u14 = 0.0f;
                u13 = (*(float *)((((int)stk + 0) + 0x10)));
                if (!(u14 > u13)) {
                    t12 = (t12 - 0x1555);
                    if ((int)t12 < (int)0xE38) {
                        t12 = 0xE38;
                    }
                } else {
                    u39 = ((float)t12);
                    u39 *= -1.0f;
                    u13 = u39;
                    t12 = (((int)u13) + 0x1555);
                    if ((int)t12 > (int)0xFFFFF1C8) {
                        t12 = 0xFFFFF1C8;
                    }
                }
                t9 = ((int)(-t12) >> 8);
                *(unsigned char *)(((0x38F8 + a4) + 0x35)) = t9;
                t7 = 0x36;
                *(unsigned short *)(((0x38F8 + a4) + 0x36)) = (int)u16;
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
        t9 = t47;
        t11 = (t11 + 0x4);
        t10 = (t10 + 0x4);
        t8 = ((*(int *)(((int)stk + 4))) + 0x4);
        *(unsigned int *)(((int)stk + 4)) = t8;
    }
    return (*(signed char *)(((0x38F8 + a4) + 0x34)));
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
                            t16 = nlRand();
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

