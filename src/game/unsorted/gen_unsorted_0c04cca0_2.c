/* game/unsorted: functions 0C04CCA0-0C04D6E0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c04b23c(int, int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c0582de(int, int);
int FUN_0c059e9a(int, int, int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c187798(void);
int FUN_0c04cefa(int a4, int a5, int a6, int a7);
int FUN_0c04d126(int a4, int a5, int a6);
int FUN_0c04d514(int a4);



int FUN_0c04d514(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        u0 = -16384.0f;
        u0 = u0 + 32768.0f * (((float)((int)((int)(nlRand()) % (int)0x80)) / 128.0f));
        u1 = 1300.0f;
        u1 = u1 + 200.0f * (((float)((int)((int)(nlRand()) % (int)0x80)) / 128.0f));
        u2 = 0.0f;
        u2 = u2 + u1 * (math_sin_angle16((int)u0));
        (((struct o28_float *)(a4))->v) = u2;
        u2 = -3500.0f;
        u2 = u2 + u1 * (math_cos_angle16((int)u0));
        (((struct o30_float *)(a4))->v) = u2;
        u0 = 200.0f;
        u0 = u0 + 200.0f * (((float)((int)((int)(nlRand()) % (int)0x80)) / 128.0f));
        (((struct o2C_float *)(a4))->v) = u0;
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1C))) > (int)0xD) {
            return FUN_0c03f346(a4);
        }
        *(unsigned short *)((a4 + 0x1E)) = 0x2;
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1C))), 0x2, (*(int *)0xC4B410C));
    }
    return (short)(t0 - 1);
}
