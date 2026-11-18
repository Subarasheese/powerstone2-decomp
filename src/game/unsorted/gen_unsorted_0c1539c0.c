/* game/unsorted: functions 0C1539C0-0C154DE4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3840_short { char p[0x3840]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c1539c0(int a4);
int FUN_0c153a4c(int a4, int a5, int a6, int a7);

int FUN_0c1539c0(int a4)
{
    register int t0;
    register int t1;
    register int t8;
    register int t3;

    t0 = a4;
    t1 = 0x0;
    for (;;) {
        t8 = 0x3714;
        if ((*(signed char *)((((t1 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            t0 = 0x5;
            t3 = FUN_0c03f444(t0, 0x0, 0x9);
            t0 = t3;
            t8 = t3;
            if (t3 != 0) {
                *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
                *(unsigned int *)((t0 + 0x4)) = 0xC153A4C;
                *(unsigned int *)((t0 + 0x10)) = ((t1 * 0x3938) + 0xC532498);
                *(unsigned char *)((t0 + 0x2)) = t1;
                (((struct oAC_ushort *)(t0))->v) = 0x1F;
                (((struct oA9_uchar *)(t0))->v) = 0x1;
                (((struct o48_float *)(t0))->v) = 1.0f;
                (((struct o44_float *)(t0))->v) = 1.0f;
                (((struct o40_float *)(t0))->v) = 1.0f;
                *(unsigned int *)((t0 + 0x38)) = 0x0;
                *(unsigned int *)((t0 + 0x3C)) = 0x0;
                *(unsigned int *)((t0 + 0x34)) = 0x0;
                t8 = 0x40;
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    return t8;
}

