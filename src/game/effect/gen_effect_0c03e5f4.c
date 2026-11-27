/* game/effect: functions 0C03E5F4-0C03EBFA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03e642(int, int, int, int, float);
int FUN_0c03e792(int);
float math_signed_sqrt(float);
int nlFogTableOff(void);
int gfx_set_fog_color(int);
int gfx_set_fog_density(int);
int thunk_FUN_0c2b5b00(int);
int nlFogDensityF(float);
int FUN_0c17c450(int);
int nlObjPutSetLightDirectionV(int);
int FUN_0c187798(void);
int memset(int, int, int);
int FUN_0c03e5f4(int a4, float f4);
int FUN_0c03e600(void);
int thunk_FUN_0c03e600(void);
int FUN_0c03e6b2(int a4, int a5);
int FUN_0c03e7b6(void);
int FUN_0c03e874(int a4);
int FUN_0c03e8f0(void);
int FUN_0c03e958(int a4, float f4, float f5);
int FUN_0c03ea04(int a4, int a5);

int FUN_0c03e5f4(int a4, float f4)
{
    *(float *)(((a4 * 0x4C) + 0xC542498)) = f4;
    return 0xC542498;
}

int FUN_0c03e600(void)
{
    register int t1;
    register int t3;

    memset(0xC542460, 0x0, 0x260);
    (((struct o4_uint *)0xC3DC268)->v) = 0x0;
    (((struct o0_uint *)0xC3DC268)->v) = 0x0;
    t1 = 0x0;
    for (;;) {
        t3 = FUN_0c03e5f4(t1, (*(float *)((0xC1B740C + (t1 << 2)))));
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x8) {
            break;
        }
    }
    return t3;
}

int thunk_FUN_0c03e600(void)
{
    return FUN_0c03e600();
}

int FUN_0c03e6b2(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)(((((*(signed char *)((((a4 * 0x3938) + 0xC532498) + 0x2))) << 1) + ((*(signed char *)((((a4 * 0x3938) + 0xC532498) + 0x371A))) & 0x1)) + 0xC1B7654));
    t1 = ((((t0 << 2) + t0) << 2) + 0xC1B7618);
    if ((int)t0 < 0) {
        t0 = 0xC1B7594;
        if (a5 != 0) {
        } else {
            t2 = *(signed char *)0xC542237;
            t3 = *(signed char *)((((*(signed char *)0xC54223C) + (0xC1B75E9 + ((t2 << 1) + t2))) + 0x0));
            t0 = ((((t3 << 2) + t3) << 2) + 0xC1B742C);
        }
        t1 = t0;
    }
    FUN_0c03e642((a4 + 0x1), (*(int *)((t1 + 0x0))), (t1 + 0x4), (*(int *)((t1 + 0x10))), 1.0f);
    return FUN_0c03e5f4((a4 + 0x1), (*(float *)((0xC1B767C + (((*(signed char *)((0x371A + ((a4 * 0x3938) + 0xC532498)))) & 0x1) << 2)))));
}



int FUN_0c03e8f0(void)
{
    register int t0;

    t0 = 0xC4789F8;
    for (;;) {
        *(float *)((t0 + 0x0)) = 0.0f;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC478BFC) {
            break;
        }
    }
    thunk_FUN_0c2b5b00(0xC4789F8);
    gfx_set_fog_color(0x101010);
    gfx_set_fog_density(0xFF09);
    return nlFogTableOff();
}

int FUN_0c03e958(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    u0 = math_signed_sqrt((f5 / (f4 / 16384.0f)));
    if ((int)((0x80 + (-(int)u0)) & 0x7F) > 0) {
        t0 = 0x0;
        for (;;) {
            t1 = t0;
            t2 = t0;
            t0 = (t0 + 0x1);
            *(float *)((0xC4789F8 + (t1 << 2))) = (1.0f - ((float)t2 / (float)((0x80 + (-(int)u0)) & 0x7F)));
            if ((int)t0 >= (int)((0x80 + (-(int)u0)) & 0x7F)) {
                break;
            }
        }
    }
    if ((unsigned int)((((0x80 + (-(int)u0)) & 0x7F) << 2) + 0xC4789F8) < (unsigned int)0xC478BFC) {
        t0 = ((((0x80 + (-(int)u0)) & 0x7F) << 2) + 0xC4789F8);
        for (;;) {
            *(float *)((t0 + 0x0)) = 0.0f;
            t0 = (t0 + 0x4);
            if ((unsigned int)t0 >= (unsigned int)0xC478BFC) {
                break;
            }
        }
    }
    thunk_FUN_0c2b5b00(0xC4789F8);
    gfx_set_fog_color(a4);
    return nlFogDensityF(f4);
}

int FUN_0c03ea04(int a4, int a5)
{
    int t2;
    int qa0;
    int stk[2];
    int qe0;
    int t3;
    int t66;
    int t67;

    qa0 = 0xC1B740C;
    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    FUN_0c03e600();
    FUN_0c03e642(0x7, 0x1, 0xC1B73E8, 0xC1B73D8, 1.0f);
    t2 = *(signed char *)(((int)stk + 4));
    t3 = *(signed char *)(((int)stk + 0));
    if (t2 != 1) {
        if (t2 != 2) {
            if (t2 != 3) {
                if (t2 != 4) {
                    if (t2 != 5) {
                        if (t2 != 6) {
                            if (t2 != 13) {
                                if (t2 == 7) {
                                    FUN_0c03e874(t3 + 0x3);
                                    return FUN_0c03e958(((((struct o2C_int *)0xC1B7960)->v)), ((((struct o24_float *)0xC1B7960)->v)), ((((struct o28_float *)0xC1B7960)->v)));
                                }
                                if (t2 == 8) {
                                    *(unsigned int *)(((int)stk + 0)) = 0xC1B73F4;
                                    FUN_0c03e642(0x0, 0x1, 0xC1B73F4, 0xC1B73D8, 1.0f);
                                    FUN_0c03e5f4(0x0, (*(float *)qa0));
                                    FUN_0c03e642(0x7, 0x1, (*(int *)(((int)stk + 0))), 0xC1B73D8, 1.0f);
                                    return FUN_0c03e958(((((struct o10_int *)0xC1B79A0)->v)), ((((struct o8_float *)0xC1B79A0)->v)), ((((struct oC_float *)0xC1B79A0)->v)));
                                }
                                if (t2 == 9) {
                                    FUN_0c03e874(0x2);
                                    return FUN_0c03e958(((((struct o38_int *)0xC1B7960)->v)), ((((struct o30_float *)0xC1B7960)->v)), ((((struct o34_float *)0xC1B7960)->v)));
                                }
                                if (t2 == 10) {
                                    FUN_0c03e874(0x5);
                                    return FUN_0c03e958(((((struct o4_int *)0xC1B79A0)->v)), ((((struct o3C_float *)0xC1B7960)->v)), ((((struct o0_float *)0xC1B79A0)->v)));
                                }
                                if (t2 == 11) {
                                    FUN_0c03e874(0x6);
                                } else {
                                    FUN_0c03e642(0x0, 0x1, 0xC1B73E8, 0xC1B73D8, 1.0f);
                                    FUN_0c03e5f4(0x0, (*(float *)qa0));
                                }
                                FUN_0c03e792(0x1);
                                return FUN_0c03e8f0();
                            }
                            *(unsigned int *)(((int)stk + 0)) = 0xC1B73F4;
                            FUN_0c03e642(0x0, 0x1, 0xC1B73F4, 0xC1B73D8, 1.0f);
                            FUN_0c03e5f4(0x0, (*(float *)qa0));
                            FUN_0c03e642(0x7, 0x1, (*(int *)(((int)stk + 0))), 0xC1B73D8, 1.0f);
                            return FUN_0c03e958(((((struct o1C_int *)0xC1B79A0)->v)), ((((struct o14_float *)0xC1B79A0)->v)), ((((struct o18_float *)0xC1B79A0)->v)));
                        }
                        *(unsigned int *)(((int)stk + 0)) = 0xC1B73F4;
                        FUN_0c03e642(0x0, 0x1, 0xC1B73F4, 0xC1B73D8, 1.0f);
                        FUN_0c03e5f4(0x0, (*(float *)qa0));
                        FUN_0c03e642(0x7, 0x1, (*(int *)(((int)stk + 0))), 0xC1B73D8, 1.0f);
                        return FUN_0c03e958(((((struct o20_int *)0xC1B7960)->v)), ((((struct o18_float *)0xC1B7960)->v)), ((((struct o1C_float *)0xC1B7960)->v)));
                    }
                    FUN_0c03e874(t3);
                    return FUN_0c03e958((*(int *)(((((((*(signed char *)(((int)stk + 0))) << 1) + (*(signed char *)(((int)stk + 0)))) << 2) + 0xC1B793C) + 0x8))), (*(float *)(((((((*(signed char *)(((int)stk + 0))) << 1) + (*(signed char *)(((int)stk + 0)))) << 2) + 0xC1B793C) + 0x0))), ((((struct o4_float *)((((((*(signed char *)(((int)stk + 0))) << 1) + (*(signed char *)(((int)stk + 0)))) << 2) + 0xC1B793C)))->v)));
                }
                FUN_0c03e642(0x0, 0x1, 0xC1B73F4, 0xC1B73D8, 1.0f);
                FUN_0c03e5f4(0x0, (*(float *)qa0));
                FUN_0c03e792(0x1);
                return FUN_0c03e958(((((struct o14_int *)0xC1B7960)->v)), ((((struct oC_float *)0xC1B7960)->v)), ((((struct o10_float *)0xC1B7960)->v)));
            }
            FUN_0c03e642(0x0, 0x1, 0xC1B73F4, 0xC1B73D8, 1.0f);
            FUN_0c03e5f4(0x0, (*(float *)qa0));
            FUN_0c03e792(0x1);
            return FUN_0c03e8f0();
        }
        FUN_0c03e7b6();
        FUN_0c03e792(0x0);
        t66 = *(signed char *)0xC542237;
        t67 = *(signed char *)0xC54223C;
        qe0 = ((((((t66 << 2) << 1) + t66) << 2) + 0xC1B7720) + (((t67 << 1) + t67) << 2));
        if (0.0f > (*(float *)((qe0 + 0x0)))) {
            return FUN_0c03e8f0();
        }
        return FUN_0c03e958((*(int *)((qe0 + 0x8))), (*(float *)((qe0 + 0x0))), ((((struct o4_float *)(qe0))->v)));
    }
    FUN_0c03e642(0x0, 0x1, 0xC1B73E8, 0xC1B73D8, 1.0f);
    FUN_0c03e5f4(0x0, (*(float *)qa0));
    FUN_0c03e792(0x1);
    return FUN_0c03e958(((((struct o8_int *)0xC1B7960)->v)), ((((struct o0_float *)0xC1B7960)->v)), ((((struct o4_float *)0xC1B7960)->v)));
}



