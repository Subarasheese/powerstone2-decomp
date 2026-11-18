/* game/unsorted: functions 0C14A7C0-0C14A9B0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c14a7c0(int a4);
int FUN_0c14a878(int a4);


int FUN_0c14a878(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x3F)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x3F);
        }
        *(unsigned int *)((a4 + 0x38)) = ((t1 << 8) << 2);
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1F);
        }
        (((struct o58_float *)(a4))->v) = ((((float)t1 / 32.0f) + 0.5f) * 10.0f);
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1F);
        }
        u0 = 15.0f;
        u0 = u0 + 5.0f * (((float)t1 / 32.0f));
        (((struct o50_float *)(a4))->v) = u0;
        (((struct o54_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) * (math_cos_angle16((*(int *)((a4 + 0x38))))));
        (((struct o4C_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) * (math_sin_angle16((*(int *)((a4 + 0x38))))));
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (1.0f + 1.0f));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    *(unsigned int *)((a4 + 0x34)) = (math_atan2_angle16((-((((struct o50_float *)(a4))->v))), ((((struct o58_float *)(a4))->v))));
    u0 = (((struct o2C_float *)(a4))->v);
    (((struct o2C_float *)(a4))->v) = (u0 - 1.0f);
    if (!((u0 - 1.0f) > 750.0f)) {
        return FUN_0c03f346(a4);
    }
    return 0xC14A9D0;
}
