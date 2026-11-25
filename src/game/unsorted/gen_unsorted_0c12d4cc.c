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
int nlRand(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c12d4cc(int a4);
int FUN_0c12d692(int a4, int a5, int a6, int a7);


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
