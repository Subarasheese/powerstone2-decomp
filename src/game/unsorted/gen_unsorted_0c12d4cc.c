/* game/unsorted: functions 0C12D4CC-0C12D738, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c12d4cc(int a4);
int FUN_0c12d692(int a4, int a5, int a6, int a7);

int FUN_0c12d4cc(int a4)
{
    int stk[1];
    register int t0;
    register int t42;
    register int t4;
    register int t5;
    register float u7;
    register float u8;
    register float u9;
    register float u23;
    register float t24;
    register float u27;
    register float t29;
    register float u32;
    register int t35;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t42 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12D692;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        t4 = FUN_0c179ac0();
        t5 = ((~(((~t4) + 0x1) & 0x7)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0x7);
        }
        u7 = *(float *)((0xC2A113C + (t5 << 2)));
        (((struct o48_float *)(t0))->v) = (u7 + 3.0f);
        (((struct o44_float *)(t0))->v) = (u7 + 3.0f);
        (((struct o40_float *)(t0))->v) = (u7 + 3.0f);
        u8 = (((struct o0_float *)0xC12D6BC)->v);
        u9 = (((struct o4_float *)0xC12D6BC)->v);
        *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x168)) * u9) / u8));
        *(unsigned int *)((t0 + 0x38)) = ((*(int *)((t0 + 0x38))) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x168)) * u9) / u8));
        *(unsigned int *)((t0 + 0x3C)) = ((*(int *)((t0 + 0x3C))) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x168)) * u9) / u8));
        *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) & 0xFFFF);
        *(unsigned int *)((t0 + 0x38)) = ((*(int *)((t0 + 0x38))) & 0xFFFF);
        *(unsigned int *)((t0 + 0x3C)) = ((*(int *)((t0 + 0x3C))) & 0xFFFF);
        u23 = (((struct o10_float *)0xC12D6BC)->v);
        t24 = math_cos_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
        u27 = (t24 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
        (((struct o4C_float *)(t0))->v) = (u27 * u23);
        t29 = math_sin_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
        u32 = (t29 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
        (((struct o54_float *)(t0))->v) = (u32 * u23);
        (((struct o50_float *)(t0))->v) = (-((math_cos_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))) * u23));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oB0_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1C)) = 0x8;
        t35 = *(signed char *)((t0 + 0x1));
        *(unsigned char *)(((int)stk + 0)) = t35;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 0))), 0x2, (*(int *)((((signed char)t35 << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        t42 = 0xF;
    }
    return t42;
}

int FUN_0c12d692(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                t0 = *(short *)((a4 + 0x1C));
                (((struct oB0_float *)(a4))->v) = ((float)t0 / 4.0f);
                if (!(((float)t0 / 4.0f) > 0.0f)) {
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                }
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            }
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x4;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
        return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}
