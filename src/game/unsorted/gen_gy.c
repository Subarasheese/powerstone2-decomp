/* Straight-line functions with calls and guards (batch gen_gy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_short { char p[0x41C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c0cff96(int, int, float);
int FUN_0c118810(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
void FUN_0c0f71b8(int a4, float f4);
void FUN_0c0f99bc(int a4, float f4);
void FUN_0c119f90(int a4, int a5, int a6, int a7);
int FUN_0c031486(int a4, int a5, int a6, int a7);
int FUN_0c034d8c(int a4, int a5, int a6, int a7, float f4);

void FUN_0c0f71b8(int a4, float f4)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xFF;
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t1 = (((struct oD8_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
        t1 = (((struct oD4_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x400);
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oD8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC1FB1EC); }
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
    }
    FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC1FB1D4, f4);
    t1 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x12);
    t1 = (((struct oCC_int *)(a4))->v);
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x12);
    (((struct o16_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x15)));
    t1 = *(signed char *)((a4 + 0x15));
    switch (t1) {
    case 0:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        if ((int)(*(short *)((a4 + 0x1C))) < 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x1;
        }
        break;
    case 1:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x10);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x100) {
            (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x100;
            (((struct o15_uchar *)(a4))->v) = 0x2;
        }
        break;
    case 2:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 5);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
        if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
            (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1);
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x14) {
                *(unsigned short *)((a4 + 0x1E)) = 0x5A;
            }
            (((struct o15_uchar *)(a4))->v) = 0x0;
        }
        break;
    }
    if (((*(signed char *)((a4 + 0x15))) != (*(signed char *)((a4 + 0x16)))) && (t0 = *(signed char *)((a4 + 0x15)), t0 == 1)) {
        (((struct o17_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 == 0) {
    } else {
        if (t0 == 1) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x3);
            if ((int)((((struct o22_short *)(a4))->v)) > (int)0x40) {
                (((struct o22_ushort *)(a4))->v) = 0x40;
            }
            t0 = (((struct o22_short *)(a4))->v);
            u0 = (((struct o0_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o10_float *)0xC1FB1F0)->v)) - u0));
            (((struct o18_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o4_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o14_float *)0xC1FB1F0)->v)) - u0));
            (((struct o1C_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o8_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o18_float *)0xC1FB1F0)->v)) - u0));
            (((struct o20_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x40) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oD8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC1FB1FC); }
            }
        } else {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            if ((int)((((struct o22_short *)(a4))->v)) < 0) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            t0 = (((struct o22_short *)(a4))->v);
            u0 = (((struct o0_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o10_float *)0xC1FB1F0)->v)) - u0));
            (((struct o18_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o4_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o14_float *)0xC1FB1F0)->v)) - u0));
            (((struct o1C_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o8_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o18_float *)0xC1FB1F0)->v)) - u0));
            (((struct o20_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            if ((int)((((struct o22_short *)(a4))->v)) <= 0) {
                (((struct o17_uchar *)(a4))->v) = 0x0;
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oD8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC1FB1EC); }
            }
        }
    }
}

void FUN_0c0f99bc(int a4, float f4)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xFF;
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t1 = (((struct oD8_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
        t1 = (((struct oD4_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x400);
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oD8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC1FB5A0); }
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
    }
    FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC1FB588, f4);
    t1 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x12);
    t1 = (((struct oCC_int *)(a4))->v);
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x12);
    (((struct o16_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x15)));
    t1 = *(signed char *)((a4 + 0x15));
    switch (t1) {
    case 0:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        if ((int)(*(short *)((a4 + 0x1C))) < 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x1;
        }
        break;
    case 1:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x8);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x100) {
            (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x100;
            (((struct o15_uchar *)(a4))->v) = 0x2;
        }
        break;
    case 2:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 8);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
        if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
            (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1);
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x14) {
                *(unsigned short *)((a4 + 0x1E)) = 0x5A;
            }
            (((struct o15_uchar *)(a4))->v) = 0x0;
        }
        break;
    }
    if (((*(signed char *)((a4 + 0x15))) != (*(signed char *)((a4 + 0x16)))) && (t0 = *(signed char *)((a4 + 0x15)), t0 == 1)) {
        (((struct o17_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 == 0) {
    } else {
        if (t0 == 1) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x3);
            if ((int)((((struct o22_short *)(a4))->v)) > (int)0x40) {
                (((struct o22_ushort *)(a4))->v) = 0x40;
            }
            t0 = (((struct o22_short *)(a4))->v);
            u0 = (((struct o0_float *)0xC1FB5A4)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o10_float *)0xC1FB5A4)->v)) - u0));
            (((struct o18_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o4_float *)0xC1FB5A4)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o14_float *)0xC1FB5A4)->v)) - u0));
            (((struct o1C_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o8_float *)0xC1FB5A4)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o18_float *)0xC1FB5A4)->v)) - u0));
            (((struct o20_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x40) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oD8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC1FB5B0); }
            }
        } else {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            if ((int)((((struct o22_short *)(a4))->v)) < 0) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            t0 = (((struct o22_short *)(a4))->v);
            u0 = (((struct o0_float *)0xC1FB5A4)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o10_float *)0xC1FB5A4)->v)) - u0));
            (((struct o18_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o4_float *)0xC1FB5A4)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o14_float *)0xC1FB5A4)->v)) - u0));
            (((struct o1C_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o8_float *)0xC1FB5A4)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o18_float *)0xC1FB5A4)->v)) - u0));
            (((struct o20_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            if ((int)((((struct o22_short *)(a4))->v)) <= 0) {
                (((struct o17_uchar *)(a4))->v) = 0x0;
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oD8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC1FB5A0); }
            }
        }
    }
}

void FUN_0c119f90(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    (((struct o4C_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / (float)((((struct o14_int *)0xC291E68)->v)));
                    (((struct o54_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) / (float)((((struct o14_int *)0xC291E68)->v)));
                    (((struct o50_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) / (float)((((struct o14_int *)0xC291E68)->v)));
                    FUN_0c05a080(0xC, 0x0);
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + ((((struct o24_int *)0xC291E68)->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o30_float *)0xC291E68)->v)));
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o34_float *)0xC291E68)->v)));
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)((((struct o14_int *)0xC291E68)->v))) {
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                    }
                    return;
                }
                if (t0 == 4) {
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + ((((struct o24_int *)0xC291E68)->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o30_float *)0xC291E68)->v)));
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o34_float *)0xC291E68)->v)));
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)((((struct o14_int *)0xC291E68)->v))) {
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                    }
                    return;
                }
                if (t0 == 99) {
                    FUN_0c03f346(a4, a5, a6, a7);
    return;
                }
                return;
            }
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + ((((struct o1C_int *)0xC291E68)->v)));
            t0 = (((struct o41C_short *)(a4))->v);
            u0 = ((*(float *)(((((t0 << 1) + t0) << 2) + 0xC29FA30))) + ((((struct o0_float *)0xC291E68)->v)));
            u0 = u0 + ((((struct o28_float *)0xC291E68)->v)) * (math_sin_angle16(((((struct o20_short *)(a4))->v))));
            (((struct o2C_float *)(a4))->v) = u0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + ((((struct o20_int *)0xC291E68)->v)));
            u0 = (((struct o4C_float *)(a4))->v);
            u1 = (((struct o2C_float *)0xC291E68)->v);
            u2 = ((((-(math_cos_angle16((*(short *)((a4 + 0x1E)))))) + 1.0f) / (1.0f + 1.0f)) * ((((struct o4C_float *)(a4))->v)));
            u3 = u0;
            u3 = u3 + u1 * u2;
            (((struct o40_float *)(a4))->v) = u3;
            u0 = (((struct o50_float *)(a4))->v);
            u1 = (((struct o2C_float *)0xC291E68)->v);
            u2 = ((((-(math_cos_angle16((*(short *)((a4 + 0x1E)))))) + 1.0f) / (1.0f + 1.0f)) * ((((struct o50_float *)(a4))->v)));
            u3 = u0;
            u3 = u3 + u1 * u2;
            (((struct o44_float *)(a4))->v) = u3;
            u0 = (((struct o54_float *)(a4))->v);
            u1 = (((struct o2C_float *)0xC291E68)->v);
            u2 = ((((-(math_cos_angle16((*(short *)((a4 + 0x1E)))))) + 1.0f) / (1.0f + 1.0f)) * ((((struct o54_float *)(a4))->v)));
            u3 = u0;
            u3 = u3 + u1 * u2;
            (((struct o48_float *)(a4))->v) = u3;
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0xC8) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            return;
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + ((((struct o18_int *)0xC291E68)->v)));
        t0 = (((struct o41C_short *)(a4))->v);
        u0 = ((*(float *)(((((t0 << 1) + t0) << 2) + 0xC29FA30))) + ((((struct o0_float *)0xC291E68)->v)));
        u0 = u0 + ((((struct o24_float *)0xC291E68)->v)) * (math_sin_angle16(((((struct o20_short *)(a4))->v))));
        (((struct o2C_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) <= (int)0x8C) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A0C84); }
    t0 = (((struct o41C_short *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((t0 << 1) + t0) << 2) + 0xC29F12C)); }
    FUN_0c118810(a4, ((((struct o41C_short *)(a4))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)((a4 + 0x40)); }
}

int FUN_0c031486(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.200000003f);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.200000003f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            } else {
                if (t0 == 3) {
                    t2 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) - 0.0300000012f);
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t3 = (short)(t2 - 1);
                    if ((short)(t2 - 1) == 0) {
                        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x71F;
                        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                        *(unsigned short *)((a4 + 0x1C)) = 0x19;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 0x15;
                    }
                    t2 = t3;
                } else {
                    if (t0 == 4) {
                        t3 = (((struct oC4_int *)(a4))->v);
                        (((struct o1C_float *)(t3))->v) = (((((struct o1C_float *)(t3))->v)) + 0.0399999991f);
                        t3 = (((struct oC4_int *)(a4))->v);
                        (((struct o20_float *)(t3))->v) = (((((struct o20_float *)(t3))->v)) + 0.0399999991f);
                        t3 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                        t4 = (short)(t3 - 1);
                        if ((short)(t3 - 1) == 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x19;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t3 = t4;
                    } else {
                        t4 = t0;
                        if (t0 == 5) {
                            t0 = (((struct oC4_int *)(a4))->v);
                            (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.0399999991f);
                            t0 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                            t4 = (short)(t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t4 = 0x14;
                            }
                        }
                        t3 = t4;
                    }
                    t2 = t3;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A93D4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A93D4) + 0xC)); }
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A93D4) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A93D4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A93D4) + 0xC)); }
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.0f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c034d8c(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    if ((unsigned char)(*(signed char *)0xC541F41) == 9) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.200000003f);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.200000003f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            } else {
                if (t0 == 3) {
                    t2 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) - 0.0299999993f);
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t3 = (short)(t2 - 1);
                    if ((short)(t2 - 1) == 0) {
                        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x71F;
                        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                        *(unsigned short *)((a4 + 0x1C)) = 0x19;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 0x15;
                    }
                    t2 = t3;
                } else {
                    if (t0 == 4) {
                        u0 = *(float *)0xC0350C0;
                        t3 = (((struct oC4_int *)(a4))->v);
                        (((struct o1C_float *)(t3))->v) = (((((struct o1C_float *)(t3))->v)) + u0);
                        t3 = (((struct oC4_int *)(a4))->v);
                        (((struct o20_float *)(t3))->v) = (((((struct o20_float *)(t3))->v)) + u0);
                        t3 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                        t4 = (short)(t3 - 1);
                        if ((short)(t3 - 1) == 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t3 = t4;
                    } else {
                        t4 = t0;
                        if (t0 == 5) {
                            t0 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                            t4 = (short)(t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t4 = 0x14;
                            }
                        }
                        t3 = t4;
                    }
                    t2 = t3;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA324)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA324) + 0xC)); }
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA324) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA324)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA324) + 0xC)); }
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.0f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}
