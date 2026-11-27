/* game/item: functions 0C16AC5C-0C16BD10, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c162860(int, int);
int FUN_0c16af78(int, int, int);
int FUN_0c16b01e(int, int, int);
int FUN_0c16b38e(int, float);
int FUN_0c16b5a6(int);
int nlRand(void);
int FUN_0c187798(int);
int FUN_0c16b2cc(int a4, int a5);
int FUN_0c16b9d2(int a4, int a5, int a6, float f4);
int FUN_0c16b9ec(int a4, int a5, int a6, int a7);


int FUN_0c16b9d2(int a4, int a5, int a6, float f4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c16b5a6(a4);
        }
        return FUN_0c16b38e(a4, f4);
    }
    return FUN_0c16b01e(a4, a5, a6);
}

