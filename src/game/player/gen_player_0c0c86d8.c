/* game/player: functions 0C0C86D8-0C0C8BE8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3818_short { char p[0x3818]; short v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c059df2(int, int);
int FUN_0c07e328(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
extern int FUN_0c0c2ab6();
int FUN_0c0c2d56(int, int, int);
int FUN_0c1606f4(int, int);
int FUN_0c0c86d8(int a4, int a5, int a6, int a7);
int FUN_0c0c8974(int a4);


int FUN_0c0c8974(int a4)
{
    register int t0;
    register int t15;

    t0 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)((a4 + 0x16))) != 0) {
        
    } else {
        FUN_0c0c213c(a4);
        FUN_0c1606f4(a4, 0x0);
        FUN_0c059df2((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1))), 0x23);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 8) {
        return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
    }
    t15 = FUN_0c0c283a(a4);
    if (t15 != 0) {
        return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
    }
    (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}
