/* game/unsorted: functions 0C1193C8-0C11A28A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int);
int FUN_0c11e964(int);
int FUN_0c11ea4e(int);
float FUN_0c179b10(float);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c1193c8(int a4, int a5, int a6, int a7);
int FUN_0c1194d0(int a4, int a5, int a6, int a7);
int FUN_0c1195d4(int a4, int a5, int a6, int a7);
int FUN_0c11978c(int a4, int a5, int a6, int a7);
int FUN_0c11990c(int a4);
int FUN_0c119ba4(int a4, int a5);
int FUN_0c119c18(int a4, int a5, int a6, int a7);
int FUN_0c119c94(void);
float FUN_0c119cc6(int a4, int a5, int a6, float f4);





int FUN_0c11990c(int a4)
{
    register int t0;
    int t1;
    register int t2;

    t0 = (((struct o20_int *)0xC474714)->v);
    (((struct o41C_uint *)(a4))->v) = t0;
    t1 = FUN_0c11ea4e(t0);
    (((struct o0_uint *)0xC474714)->v) = t1;
    if (((((((struct o41C_int *)(a4))->v)) & 0x100) != 0) && (t1 == 0)) {
    } else {
        FUN_0c11e964(((((struct o41C_int *)(a4))->v)));
    }
    if ((int)((((struct o0_int *)0xC474404)->v)) < 0) {
        (((struct o0_uint *)0xC474404)->v) = 0x0;
        (((struct o8_uint *)0xC474404)->v) = 0x0;
    }
    t0 = (((struct o0_int *)0xC474714)->v);
    if ((int)((((struct o0_int *)0xC474404)->v)) >= (int)t0) {
        (((struct o0_uint *)0xC474404)->v) = (t0 - 1);
        (((struct o8_uint *)0xC474404)->v) = (t0 - 1);
        if ((int)(t0 - 1) >= (int)0x5) {
            (((struct o8_uint *)0xC474404)->v) = 0x4;
        }
        (((struct o4_uint *)0xC474404)->v) = ((((struct o0_int *)0xC474404)->v));
    }
    t0 = (((struct o4_int *)0xC474404)->v);
    t1 = (((struct o0_int *)0xC474404)->v);
    if ((int)t1 < (int)t0) {
        if ((int)t1 <= (int)(t0 - 5)) {
            (((struct o8_uint *)0xC474404)->v) = 0x0;
        } else {
            (((struct o8_uint *)0xC474404)->v) = (((((struct o8_int *)0xC474404)->v)) - 1);
        }
    }
    t0 = (((struct o4_int *)0xC474404)->v);
    t1 = (((struct o0_int *)0xC474404)->v);
    if ((int)t1 > (int)t0) {
        if ((int)t1 >= (int)(t0 + 0x5)) {
            (((struct o8_uint *)0xC474404)->v) = 0x4;
        } else {
            (((struct o8_uint *)0xC474404)->v) = (((((struct o8_int *)0xC474404)->v)) + 0x1);
        }
    }
    if (((((struct o0_int *)0xC474404)->v)) == 0) {
        (((struct o8_uint *)0xC474404)->v) = 0x0;
    }
    if ((int)((((struct o8_int *)0xC474404)->v)) < 0) {
        (((struct o8_uint *)0xC474404)->v) = 0x0;
    }
    if ((int)((((struct o8_int *)0xC474404)->v)) > (int)0x4) {
        (((struct o8_uint *)0xC474404)->v) = 0x4;
    }
    (((struct o4_uint *)0xC474404)->v) = ((((struct o0_int *)0xC474404)->v));
    if (((((struct o0_int *)0xC474714)->v)) != 0) {
        *(unsigned short *)(((0x41C + a4) + 0x8)) = ((((struct o0_int *)0xC474404)->v));
        *(unsigned short *)(((0x41C + a4) + 0xA)) = ((((struct o4_int *)0xC474404)->v));
        *(unsigned short *)(((0x41C + a4) + 0xC)) = ((((struct o8_int *)0xC474404)->v));
        *(unsigned short *)(((0x41C + a4) + 0xE)) = ((((struct o0_int *)0xC474714)->v));
    } else {
        (((struct o0_uint *)0xC474404)->v) = 0x0;
        (((struct o4_uint *)0xC474404)->v) = 0x0;
        (((struct o8_uint *)0xC474404)->v) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0xA)) = ((((struct o4_int *)0xC474404)->v));
        *(unsigned short *)(((0x41C + a4) + 0xC)) = ((((struct o8_int *)0xC474404)->v));
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                return t0;
            }
            if (t0 != 10) {
                if (t0 == 11) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                    t2 = (short)(t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                        (((struct o14_uchar *)(a4))->v) = 0x50;
                        t2 = 0x14;
                    }
                    return t2;
                }
                if (t0 == 80) {
                    return FUN_0c03f346(a4, 0xC474404, 0xC474408, 0x4);
                }
                t1 = t0;
                if (t0 == 99) {
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                    t1 = 0x14;
                }
                return t1;
            }
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o4C_float *)(a4))->v) = -25.0f;
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x10) {
                (((struct o14_uchar *)(a4))->v) = 0x50;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = FUN_0c03f444(0x8, 0x0, 0x1);
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t0 + 0x4)) = 0xC11929C;
            *(unsigned int *)((t0 + 0x10)) = a4;
        }
        t0 = FUN_0c03f444(0x8, 0x1, 0x1);
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t0 + 0x4)) = 0xC1193C8;
            *(unsigned int *)((t0 + 0x10)) = a4;
        }
        t0 = FUN_0c03f444(0x8, 0x1, 0x1);
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t0 + 0x4)) = 0xC1194D0;
            *(unsigned int *)((t0 + 0x10)) = a4;
        }
        t0 = FUN_0c03f444(0x8, 0x2, 0xA);
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t0 + 0x4)) = 0xC1195D4;
            *(unsigned int *)((t0 + 0x10)) = a4;
        }
        if ((*(signed char *)(((0x41C + a4) + 0x4))) == 3) {
            t0 = FUN_0c03f444(0x8, 0x1, 0xA);
            if (t0 != 0) {
                *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
                *(unsigned int *)((t0 + 0x4)) = 0xC11978C;
                *(unsigned int *)((t0 + 0x10)) = a4;
            }
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 400.0f);
        (((struct o4C_float *)(a4))->v) = 25.0f;
    }
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c119ba4(int a4, int a5)
{
    int stk[2];
    register int t1;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)0xC474734 = (*(int *)(((int)stk + 0)));
    (((struct o0_uint *)0xC474404)->v) = 0x0;
    (((struct o4_uint *)0xC474404)->v) = 0x0;
    (((struct o8_uint *)0xC474404)->v) = 0x0;
    t1 = FUN_0c03f444(0x5, 0x0, 0x0);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC11990C;
        (((struct o41C_uint *)(t1))->v) = (*(int *)(((int)stk + 0)));
        *(unsigned char *)(((0x41C + t1) + 0x4)) = (*(signed char *)(((int)stk + 4)));
        return t1;
    }
    return 0x0;
}


int FUN_0c119c94(void)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0xF, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC119C18;
        return t2;
    }
    return 0x0;
}

float FUN_0c119cc6(int a4, int a5, int a6, float f4)
{
    int stk[34];
    register float t0;
    register int t1;
    register int t22;
    register float u25;
    register float u3;
    register float u11;
    register float u7;
    register float u28;
    register float u29;
    register float u34;
    register float u35;
    register float u39;
    register float u46;
    register float u51;
    register float u53;
    register float u59;
    register float u60;
    register float u64;
    register float u65;
    register float u72;
    register float u74;
    register float u79;
    register float u81;
    register float u91;
    register int t127;
    register float u133;
    register float u136;
    register float u138;
    register float u143;
    register float u146;
    register float u149;
    register float u154;
    register float u157;
    register float u159;
    register float u160;
    register float u17;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c179b10(f4);
    (((struct o68_float *)(((int)stk + 0)))->v) = t0;
    t1 = *(int *)(((int)stk + 0));
    t22 = (int)t0;
    u25 = (f4 / (1.0f + 1.0f));
    if ((int)t0 == 0) {
    } else {
        if ((int)t0 == 1) {
            t22 = 0x0;
            u17 = (((f4 - ((((struct o68_float *)(((int)stk + 0)))->v))) / (1.0f + 1.0f)) + 0.5f);
        } else {
            u3 = (((struct o68_float *)(((int)stk + 0)))->v);
            t22 = ((int)t0 - 1);
            u11 = ((f4 - u3) / (1.0f + 1.0f));
            if (((int)t0 - 1) == (t1 - 4)) {
            } else {
                t22 = ((int)t0 - 1);
                u7 = (f4 - u3);
                if (((int)t0 - 1) == ((*(int *)(((int)stk + 0))) - 3)) {
                    t22 = (((int)t0 - 1) - 1);
                    u7 = (((f4 - u3) / (1.0f + 1.0f)) + 0.5f);
                }
                u11 = u7;
            }
            u17 = u11;
        }
        u25 = u17;
    }
    u28 = (u25 * u25);
    (((struct o10_float *)((((int)stk + 0) + 0x68)))->v) = (u28 * u25);
    (((struct o14_float *)((((int)stk + 0) + 0x68)))->v) = (u25 * u25);
    u29 = ((1.0f - u25) * (1.0f - u25));
    (((struct o18_float *)((((int)stk + 0) + 0x68)))->v) = (u29 * (1.0f - u25));
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x68) + 0x1C);
    (((struct o1C_float *)((((int)stk + 0) + 0x68)))->v) = ((1.0f - u25) * (1.0f - u25));
    if (t22 == 0) {
        (((struct o68_float *)(((int)stk + 0)))->v) = ((((struct o18_float *)((((int)stk + 0) + 0x68)))->v));
        u34 = (((((struct o14_float *)((((int)stk + 0) + 0x68)))->v)) * 4.5f);
        u35 = (((((((struct o10_float *)((((int)stk + 0) + 0x68)))->v)) * 1.75f)) - u34);
        u35 = u35 + 3.0f * u25;
        (((struct o4_float *)((((int)stk + 0) + 0x68)))->v) = u35;
        u39 = (((((struct o10_float *)((((int)stk + 0) + 0x68)))->v)) * 0.916666687f);
        (((struct o8_float *)((((int)stk + 0) + 0x68)))->v) = (((((((struct o14_float *)((((int)stk + 0) + 0x68)))->v)) * 1.5f)) - u39);
        (((struct oC_float *)((((int)stk + 0) + 0x68)))->v) = (((((struct o10_float *)((((int)stk + 0) + 0x68)))->v)) * 0.166666672f);
    } else {
        if (t22 == (t1 - 4)) {
            (((struct o68_float *)(((int)stk + 0)))->v) = (((((struct o18_float *)((((int)stk + 0) + 0x68)))->v)) * 0.166666672f);
            u46 = (((((struct o18_float *)((((int)stk + 0) + 0x68)))->v)) * 0.916666687f);
            (((struct o4_float *)((((int)stk + 0) + 0x68)))->v) = ((((*(float *)(((*(int *)(((int)stk + 0))) + 0x0))) * 1.5f)) - u46);
            u51 = ((*(float *)(((*(int *)(((int)stk + 0))) + 0x0))) * 4.5f);
            u53 = (((((((struct o18_float *)((((int)stk + 0) + 0x68)))->v)) * 1.75f)) - u51);
            u53 = u53 + 3.0f * ((1.0f - u25));
            (((struct o8_float *)((((int)stk + 0) + 0x68)))->v) = u53;
            (((struct oC_float *)((((int)stk + 0) + 0x68)))->v) = ((((struct o10_float *)((((int)stk + 0) + 0x68)))->v));
        } else {
            if (t22 == 1) {
                (((struct o68_float *)(((int)stk + 0)))->v) = (((((struct o18_float *)((((int)stk + 0) + 0x68)))->v)) * 0.25f);
                u59 = (((((struct o14_float *)((((int)stk + 0) + 0x68)))->v)) * 1.25f);
                u60 = (((((((struct o10_float *)((((int)stk + 0) + 0x68)))->v)) * 0.583333313f)) - u59);
                u60 = u60 + u25 * 0.25f;
                (((struct o4_float *)((((int)stk + 0) + 0x68)))->v) = (u60 + 0.583333313f);
                u64 = (((((struct o10_float *)((((int)stk + 0) + 0x68)))->v)) * 0.5f);
                u65 = (((((((struct o14_float *)((((int)stk + 0) + 0x68)))->v)) * 0.5f)) - u64);
                u65 = u65 + u25 * 0.5f;
                (((struct o8_float *)((((int)stk + 0) + 0x68)))->v) = (u65 + 0.166666672f);
                (((struct oC_float *)((((int)stk + 0) + 0x68)))->v) = (((((struct o10_float *)((((int)stk + 0) + 0x68)))->v)) * 0.166666672f);
            } else {
                if (t22 == ((t1 - 4) - 1)) {
                    (((struct o68_float *)(((int)stk + 0)))->v) = (((((struct o18_float *)((((int)stk + 0) + 0x68)))->v)) * 0.166666672f);
                    u72 = (((((struct o18_float *)((((int)stk + 0) + 0x68)))->v)) * 0.5f);
                    u74 = ((((*(float *)(((*(int *)(((int)stk + 0))) + 0x0))) * 0.5f)) - u72);
                    u74 = u74 + ((1.0f - u25)) * 0.5f;
                    (((struct o4_float *)((((int)stk + 0) + 0x68)))->v) = (u74 + 0.166666672f);
                    u79 = ((*(float *)(((*(int *)(((int)stk + 0))) + 0x0))) * 1.25f);
                    u81 = (((((((struct o18_float *)((((int)stk + 0) + 0x68)))->v)) * 0.583333313f)) - u79);
                    u81 = u81 + ((1.0f - u25)) * 0.25f;
                    (((struct o8_float *)((((int)stk + 0) + 0x68)))->v) = (u81 + 0.583333313f);
                    (((struct oC_float *)((((int)stk + 0) + 0x68)))->v) = (((((struct o10_float *)((((int)stk + 0) + 0x68)))->v)) * 0.25f);
                } else {
                    (((struct o68_float *)(((int)stk + 0)))->v) = (((((struct o18_float *)((((int)stk + 0) + 0x68)))->v)) * 0.166666672f);
                    (((struct o4_float *)((((int)stk + 0) + 0x68)))->v) = ((((((((struct o10_float *)((((int)stk + 0) + 0x68)))->v)) * 0.5f)) - ((((struct o14_float *)((((int)stk + 0) + 0x68)))->v))) + (*(float *)0xC11A024));
                    u91 = 0.166666672f;
                    u91 = u91 + 0.5f * (((((((struct o14_float *)((((int)stk + 0) + 0x68)))->v)) - ((((struct o10_float *)((((int)stk + 0) + 0x68)))->v))) + u25));
                    (((struct o8_float *)((((int)stk + 0) + 0x68)))->v) = u91;
                    (((struct oC_float *)((((int)stk + 0) + 0x68)))->v) = (((((struct o10_float *)((((int)stk + 0) + 0x68)))->v)) * 0.166666672f);
                }
            }
        }
    }
    t127 = *(int *)(((int)stk + 4));
    u133 = (((((struct oC_float *)(((((t22 << 1) + t22) << 2) + t127)))->v)) * ((((struct o4_float *)((((int)stk + 0) + 0x68)))->v)));
    u133 = u133 + ((((struct o68_float *)(((int)stk + 0)))->v)) * (*(float *)((((((t22 << 1) + t22) << 2) + t127) + 0x0)));
    u136 = u133;
    u136 = u136 + ((((struct o8_float *)((((int)stk + 0) + 0x68)))->v)) * ((((struct o18_float *)(((((t22 << 1) + t22) << 2) + t127)))->v));
    u138 = u136;
    u138 = u138 + ((((struct oC_float *)((((int)stk + 0) + 0x68)))->v)) * ((((struct o24_float *)(((((t22 << 1) + t22) << 2) + t127)))->v));
    *(float *)((a6 + 0x0)) = u138;
    u143 = (((((struct o4_float *)((((((t22 << 1) + t22) << 2) + t127) + 0xC)))->v)) * ((((struct o4_float *)((((int)stk + 0) + 0x68)))->v)));
    u143 = u143 + ((((struct o68_float *)(((int)stk + 0)))->v)) * ((((struct o4_float *)(((((t22 << 1) + t22) << 2) + t127)))->v));
    u146 = u143;
    u146 = u146 + ((((struct o8_float *)((((int)stk + 0) + 0x68)))->v)) * ((((struct o4_float *)((((((t22 << 1) + t22) << 2) + t127) + 0x18)))->v));
    u149 = u146;
    u149 = u149 + ((((struct oC_float *)((((int)stk + 0) + 0x68)))->v)) * ((((struct o4_float *)((((((t22 << 1) + t22) << 2) + t127) + 0x24)))->v));
    (((struct o4_float *)(a6))->v) = u149;
    u154 = (((((struct o8_float *)((((((t22 << 1) + t22) << 2) + t127) + 0xC)))->v)) * ((((struct o4_float *)((((int)stk + 0) + 0x68)))->v)));
    u154 = u154 + ((((struct o68_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)(((((t22 << 1) + t22) << 2) + t127)))->v));
    u157 = u154;
    u157 = u157 + ((((struct o8_float *)((((int)stk + 0) + 0x68)))->v)) * ((((struct o8_float *)((((((t22 << 1) + t22) << 2) + t127) + 0x18)))->v));
    u159 = (((struct oC_float *)((((int)stk + 0) + 0x68)))->v);
    u160 = u157;
    u160 = u160 + u159 * ((((struct o8_float *)((((((t22 << 1) + t22) << 2) + t127) + 0x24)))->v));
    (((struct o8_float *)(a6))->v) = u160;
    return u159;
}


