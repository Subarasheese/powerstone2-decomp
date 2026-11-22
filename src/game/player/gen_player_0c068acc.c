/* game/player: functions 0C068ACC-0C0699DE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o168_float { char p[0x168]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3818_short { char p[0x3818]; short v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c07cb70(int, int, int, int);
int FUN_0c07cffa(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
int FUN_0c08076a(int);
int FUN_0c083cf0(int, int, int, int);
int FUN_0c085cac(int, int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c068acc(int a4);
int FUN_0c0699c2(int a4, int a5, int a6, int a7);


int FUN_0c0699c2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0699BE))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0695FE))(a4, a5, a6, a7);
}
