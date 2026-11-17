/* game/unsorted: functions 0C0D3004-0C0D34FE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int math_mat_get_translate(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d04f0(int);
int FUN_0c0d3004(int);
int FUN_0c0d30ea(int, int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0d3162(int a4, int a5, int a6, int a7);

int FUN_0c0d3162(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                if (((*(short *)((a4 + 0x1C))) & 103) != 0) {
                    u0 = ((((struct o30_float *)(a4))->v));
                    u0 = u0 + 10.0f * (math_sin_angle16(((0x1F & (*(short *)((a4 + 0x1C)))) << 14)));
                    (((struct o30_float *)(a4))->v) = u0;
                    *(unsigned int *)((a4 + 0x3C)) = (int)(math_sin_angle16((((((*(short *)((a4 + 0x1C))) & 0x3) << 2) << 2) - 24)));
                }
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 5);
                    if ((int)((((struct o20_short *)(a4))->v)) < (int)0x1E) {
                        (((struct o20_ushort *)(a4))->v) = 0x1E;
                    }
                    *(unsigned short *)((a4 + 0x1E)) = ((((struct o20_short *)(a4))->v));
                    FUN_0c179ac0();
                    FUN_0c0d3004(a4);
                }
                if (!(-10.0f > ((((struct o50_float *)(a4))->v)))) {
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.0250000004f);
                }
                if (!(-10.0f > ((((struct o54_float *)(a4))->v)))) {
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.100000001f);
                }
                FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
                if (-1500.0f > ((((struct o2C_float *)(a4))->v))) {
                    (((struct oB0_float *)(a4))->v) = ((((((struct o2C_float *)(a4))->v)) + 2300.0f) / 800.0f);
                    if (0.0f > ((((struct oB0_float *)(a4))->v))) {
                        (((struct oB0_float *)(a4))->v) = 0.0f;
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = 0x3;
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c187798(a4, a5, a6);
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) + 0x64);
        }
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t1 = t0;
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
            t0 = (t0 + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if (((*(short *)((a4 + 0x1C))) & 103) != 0) {
            u0 = ((((struct o30_float *)(a4))->v));
            u0 = u0 + 10.0f * (math_sin_angle16(((0x1F & (*(short *)((a4 + 0x1C)))) << 14)));
            (((struct o30_float *)(a4))->v) = u0;
        }
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 5);
            if ((int)((((struct o20_short *)(a4))->v)) < (int)0x1E) {
                (((struct o20_ushort *)(a4))->v) = 0x1E;
            }
            *(unsigned short *)((a4 + 0x1E)) = ((((struct o20_short *)(a4))->v));
            FUN_0c179ac0();
            FUN_0c0d3004(a4);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) > 0) {
            return (short)(t0 - 1);
        }
        (((struct o14_uchar *)(a4))->v) = 0x2;
        FUN_0c0d04f0(a4);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 1.0f;
        (((struct oA4_uint *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x258;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = -1.0f;
        return thunk_FUN_0c05abb2(0x44, (a4 + 0x28));
    }
    t0 = *(signed char *)((a4 + 0x2));
    if ((*(signed char *)0xC54098D) != (*(int *)((0xC1C7EB4 + (t0 << 2))))) {
        return (t0 << 2);
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x168;
    (((struct o20_ushort *)(a4))->v) = 0x3C;
    *(unsigned short *)((a4 + 0x1E)) = 0x3C;
    math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
    (((struct oA4_uint *)(a4))->v) = 0x0;
    thunk_FUN_0c05abb2((*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC1C7EA4))), (a4 + 0x28));
    FUN_0c0d3004(a4);
    return FUN_0c0d30ea(a4, (*(short *)((a4 + 0x1C))));
}
