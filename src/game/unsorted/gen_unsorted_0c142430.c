/* game/unsorted: functions 0C142430-0C1425CE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c142430(int a4, int a5);
int FUN_0c14251e(int a4);

int FUN_0c142430(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = FUN_0c037320(0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t1 + 0x4)) = 0xC14251E;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t1 + 0x2)) = a5;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)(((a5 << 2) + 0xC20249C))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t1 + 0x28));
        *(unsigned int *)((t1 + 0x38)) = (*(int *)((a4 + 0x38)));
        t2 = *(int *)((t1 + 0x38));
        t3 = 0xFFFFC000;
        if ((*(signed char *)((t1 + 0x2))) != 0) {
            t3 = 0x4000;
        }
        t4 = (int)((int)(FUN_0c179ac0()) % (int)0x5);
        u0 = (((struct o0_float *)0xC142568)->v);
        u1 = math_cos_angle16(((t2 + t3) + ((t4 - 2) * 0x71C)));
        (((struct o54_float *)(t1))->v) = (u1 * u0);
        u1 = math_sin_angle16(((t2 + t3) + ((t4 - 2) * 0x71C)));
        (((struct o4C_float *)(t1))->v) = (u1 * u0);
        (((struct o50_float *)(t1))->v) = ((((struct oC_float *)0xC142568)->v));
        (((struct o5C_float *)(t1))->v) = -1.0f;
        (((struct o60_float *)(t1))->v) = 0.0f;
        (((struct o58_float *)(t1))->v) = 0.0f;
        *(unsigned short *)((t1 + 0x1C)) = 0x1E;
        t0 = 0x1E;
    }
    return t0;
}

int FUN_0c14251e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 0x222);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c03f346(a4);
    }
    return (short)(t0 - 1);
}
