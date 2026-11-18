/* game/unsorted: functions 0C14AACC-0C14AD8C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c05ab7e(int, int);
int FUN_0c064d5a(int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
int FUN_0c14aacc(int a4, int a5);
int FUN_0c14ab60(int a4, int a5, int a6, int a7);

int FUN_0c14aacc(int a4, int a5)
{
    FUN_0c064d5a(a4, ((((a5 << 1) + a5) << 2) + 0xC202ABC));
    (((struct o128_ushort *)(a4))->v) = ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))));
    (((struct o12A_ushort *)(a4))->v) = ((~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) & ((((struct o12A_short *)(a4))->v)));
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct o12E_ushort *)(a4))->v) = 0x0;
    return 0x12E;
}

