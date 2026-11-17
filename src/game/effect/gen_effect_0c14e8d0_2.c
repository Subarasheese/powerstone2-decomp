/* game/effect: functions 0C14E8D0-0C14F040, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c14ea40(int);
int FUN_0c14eb2c(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c14eaaa(int a4, int a5, int a6, int a7);
void FUN_0c14eb84(int a4, int a5, int a6, int a7);

int FUN_0c14eaaa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;

    t3 = *(signed char *)(((0x41C + a4) + 0x5));
    *(unsigned char *)(((0x41C + a4) + 0x5)) = (t3 - 1);
    t4 = (signed char)(t3 - 1);
    if ((signed char)(t3 - 1) == 0) {
        t3 = *(int *)(((((*(signed char *)(((0x41C + a4) + 0x4))) << 2) + (0xC4 + a4)) + 0x18));
        if ((*(signed char *)((t3 + 0x0))) != 0) {
            *(unsigned char *)(((0x41C + a4) + 0x5)) = 0x1;
            t4 = 0x1;
        } else {
            *(unsigned char *)(((0x41C + a4) + 0x5)) = 0x2;
            t6 = *(signed char *)(((0x41C + a4) + 0x4));
            t7 = ((~(((~(t6 + 0x1)) + 0x1) & 0x1)) + 0x1);
            if ((int)(t6 + 0x1) >= 0) {
                t7 = ((t6 + 0x1) & 0x1);
            }
            *(unsigned char *)(((0x41C + a4) + 0x4)) = t7;
            t6 = (((struct oD0_int *)(a4))->v);
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            t7 = ((int (*)(int, int, int))(FUN_0c187798))(t6, t3, (0x41C + a4));
            t3 = ((int (*)(int, int))(FUN_0c187798))(t0, t1);
            *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x400);
            (((struct o14_float *)(t2))->v) = 1.0f;
            t4 = 0x14;
        }
    }
    return t4;
}

void FUN_0c14eb84(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if ((unsigned int)t0 >= (unsigned int)0xC) {
        return;
    }
    switch ((t0 << 1)) {
        case 0:
        {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0xC00);
            (((struct o90_float *)(t0))->v) = -19.5f;
            (((struct o98_float *)(t0))->v) = 19.5499992f;
            (((struct o94_float *)(t0))->v) = 0.0f;
            (((struct o14_float *)(t0))->v) = 1.0f;
            return;
        }
        case 2:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            FUN_0c17c130((t0 + 0x6C), (t0 + 0x6C), (0x90 + t0));
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct oA0_uint *)(t0))->v) = 0xFFFFF99A;
            }
            FUN_0c14ea40(a4);
    return;
        }
        case 4:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct oA0_int *)(t0))->v)));
            u0 = ((((struct o6C_float *)(t0))->v));
            u0 = u0 + 10.0f * (math_sin_angle16((((((struct o7C_int *)(t0))->v)) - 16384)));
            (((struct o6C_float *)(t0))->v) = u0;
            u0 = ((((struct o74_float *)(t0))->v));
            u0 = u0 + 10.0f * (math_cos_angle16((((((struct o7C_int *)(t0))->v)) - 16384)));
            (((struct o74_float *)(t0))->v) = u0;
            if (!(500.0f > ((((struct o74_float *)(t0))->v)))) {
                (((struct o74_float *)(t0))->v) = 500.0f;
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                (((struct o90_float *)(t0))->v) = (-(((((struct o6C_float *)(t0))->v)) / 30.0f));
                (((struct o98_float *)(t0))->v) = (-(((((struct o74_float *)(t0))->v)) / 30.0f));
                (((struct o94_float *)(t0))->v) = 0.0f;
                (((struct oA0_uint *)(t0))->v) = 0xFFFFF889;
            }
            FUN_0c14ea40(a4);
    return;
        }
        case 6:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            FUN_0c17c130((t0 + 0x6C), (t0 + 0x6C), (0x90 + t0));
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct oA0_int *)(t0))->v)));
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                FUN_0c187798();
                (((struct o74_float *)(t0))->v) = 0.0f;
                FUN_0c187798();
                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                t0 = (((struct oCC_int *)(a4))->v);
                *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
                (((struct o14_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
            }
            FUN_0c14ea40(a4);
    return;
        }
        case 8:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.0500000007f);
            t0 = (((struct oCC_int *)(a4))->v);
            (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) + 0.0500000007f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                (((struct o14_float *)(((((struct oCC_int *)(a4))->v))))->v) = 1.0f;
                t0 = (((struct oD0_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                (((struct o94_float *)(t0))->v) = -20.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
            }
            return;
        }
        case 10:
        {
            t0 = (((struct oD0_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + ((((struct o94_float *)(t0))->v)));
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o70_float *)(t0))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
            }
            return;
        }
        case 12:
        {
            t0 = *(signed char *)((0xC202D08 + (*(short *)((a4 + 0x1C)))));
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) - (float)t0);
            t1 = (((struct oD0_int *)(a4))->v);
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((1.0f + 1.0f)) * (float)t0;
            (((struct o70_float *)(t1))->v) = u0;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            if ((float)t0 != 0.0f) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o70_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
                t0 = (((struct oD0_int *)(a4))->v);
                (((struct o70_float *)(t0))->v) = 0.0f;
                (((struct o98_float *)(t0))->v) = -49.9000015f;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
            }
            return;
        }
        case 14:
        {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
            }
            return;
        }
        case 16:
        {
            t0 = (((struct oD0_int *)(a4))->v);
            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + ((((struct o98_float *)(t0))->v)));
            FUN_0c14eaaa(a4, a5, a6, a7);
            FUN_0c14eb2c(a4);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o74_float *)(t0))->v) = 0.100000001f;
                t0 = (((struct oC8_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                (((struct o8C_float *)(t0))->v) = 1.0f;
                (((struct o98_float *)(t0))->v) = -0.0166666675f;
                *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x410);
                (((struct o14_float *)(t0))->v) = 0.0f;
                (((struct o74_float *)(t0))->v) = 41.0f;
                t0 = (((struct oD4_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
                (((struct o14_float *)(t0))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1E)) = 0x28;
                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            return;
        }
        case 18:
        {
            FUN_0c14eb2c(a4);
            if (((((struct o0_int *)0xC542440)->v)) != -1) {
                (((struct o0_uint *)0xC542440)->v) = (((((struct o0_int *)0xC542440)->v)) + 0x11111111);
                (((struct o4_uint *)0xC542440)->v) = (((((struct o4_int *)0xC542440)->v)) + 0x11111111);
                (((struct o8_uint *)0xC542440)->v) = (((((struct o8_int *)0xC542440)->v)) + 0x11111111);
                if (((((struct o0_int *)0xC542440)->v)) == -1) {
                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                    FUN_0c037498(((((struct oD0_int *)(a4))->v)), 0x0, 0x6, (*(int *)0xC4B410C));
                    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                }
            }
            t0 = (((struct oC8_int *)(a4))->v);
            if (((((struct o14_float *)(t0))->v)) != 1.0f) {
                u0 = (((struct o14_float *)(t0))->v);
                (((struct o14_float *)(t0))->v) = (u0 + 0.0625f);
                if (!(1.0f > (u0 + 0.0625f))) {
                    (((struct o14_float *)(t0))->v) = 1.0f;
                }
            }
            if ((*(short *)((a4 + 0x1E))) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            } else {
                t0 = (((struct oD4_int *)(a4))->v);
                if (((((struct o14_float *)(t0))->v)) > 0.0f) {
                    u0 = (((struct o14_float *)(t0))->v);
                    (((struct o14_float *)(t0))->v) = (u0 - 0.0625f);
                    if (!((u0 - 0.0625f) > 0.0f)) {
                        (((struct o14_float *)(t0))->v) = 0.0f;
                    }
                }
            }
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + ((((struct o98_float *)(t0))->v)));
            if (!(((((struct o8C_float *)(t0))->v)) > 0.0f)) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned char *)((t0 + 0x0)) = 0x0;
            }
            return;
        }
        case 20:
        {
            return;
        }
        default:
        {
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
    }
}
