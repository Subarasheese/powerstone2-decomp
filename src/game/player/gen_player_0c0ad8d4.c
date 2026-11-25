/* game/player: functions 0C0AD8D4-0C0ADB20, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0ad8d4(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };


int FUN_0c0ad8d4(int a4)
{
    int t2;
    int t0;
    float u6;
    int t3;
    float u5;
    int t1;
    float u0;
    float u7;
    int t4;
    float u1;
    float u9;
    float u4;
    float u3;
    float u2;
    float u10;
    float u8;

    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / 10.0f));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / 10.0f));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / 10.0f));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c037bf6(a4);
    if (((int)((int)((((struct o1C_short *)(a4))->v)) % (int)0xA)) == 0) {
        FUN_0c07e2f4(a4, 0x66);
    }
    t1 = 0xE4E0;
    t2 = 0xC532498;
    for (;;) {
        t3 = *(signed char *)(t2 + 0x2);
        if (t3 == 12) {
            u2 = u0;
        } else {
            if (t3 == 13) {
                u3 = u0;
            } else {
                t1 = (*(signed char *)(t2 + 0x3714));
                if (t1 == 0) {
                    u4 = u0;
                } else {
                    t1 = 0xC1794E0;
                    u5 = (((((struct o28_float *)(t2))->v)) - ((((struct o28_float *)(a4))->v)));
                    u7 = (((((struct o2C_float *)(t2))->v)) - ((((struct o2C_float *)(a4))->v)));
                    u8 = (((((struct o30_float *)(t2))->v)) - ((((struct o30_float *)(a4))->v)));
                    u9 = math_signed_sqrt(((u8 * u8) + u5 * u5));
                    u6 = 500.0f;
                    u10 = u9;
                    if (u6 > u7) {
                        u0 = -100.0f;
                        if ((u7 > u0) && (u1 = u7, t0 = (u7 > u0), u7 = 310.100006f, u7 > u10)) {
                            t3 = u5 == (0.0f);
                            u6 = 0.0f;
                            if (t3) {
                                u5 = 9.99999997e-07f;
                            }
                            if (u8 == u6) {
                                u8 = 9.99999997e-07f;
                            }
                            u8 = (-u8);
                            t3 = math_atan_angle16((u8 / u5));
                            u6 = 0.0f;
                            t4 = t3;
                            if (u6 > u5) {
                                t4 = (t3 + 0x8000);
                            }
                            u0 = ((1.0f) + (1.0f));
                            t3 = (0x14000 - ((unsigned short)((t4 + 0x4000) + ((int)((((((300.0f) - u10) / ((((struct o0_float *)0xC0ADB74)->v))) + u0) * ((((struct o4_float *)0xC0ADB74)->v))) / ((((struct o8_float *)0xC0ADB74)->v)))))));
                            u6 = (math_cos_angle16(t3));
                            t1 = 0xC179BF0;
                            (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(a4))->v)) + u10 * u6);
                            u6 = (math_sin_angle16(t3));
                            u5 = ((((struct o30_float *)(a4))->v)) + u10 * u6;
                            u7 = u5;
                            (((struct o30_float *)(t2))->v) = u7;
                        } else {
                            u5 = u0;
                        }
                        u6 = u5;
                    }
                    u4 = u6;
                }
                u3 = u4;
            }
            u2 = u3;
        }
        u0 = u2;
        t1 = 0xC540978;
        t2 = (t2 + 0x3938);
        if ((unsigned int)t2 < (unsigned int)0xC540978) continue;
        break;
    }
    t0 = (((struct o1C_short *)(a4))->v);
    (((struct o1C_ushort *)(a4))->v) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0xF0) {
        t0 = *(signed char *)(a4 + 0x1);
        FUN_0c07e79c(a4, t0, 0x1, 0x14, (t0), 0x1, 0x14);
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
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
        t1 = 0x17;
    }
    return t1;
}
