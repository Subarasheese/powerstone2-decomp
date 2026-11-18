/* game/unsorted: functions 0C034230-0C034746, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o74_float { char p[0x74]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c034230(int a4);
int FUN_0c03441a(void);


int FUN_0c03441a(void)
{
    register int t1;
    register int t3;
    register int t6;

    t1 = *(signed char *)0xC1AA25C;
    FUN_0c037320(t1, (*(int *)0xC4B410C));
    t3 = FUN_0c03f444(0x8, 0x0, 0x2);
    t6 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, t1, (*(int *)0xC4B410C));
        *(unsigned int *)((t3 + 0x4)) = 0xC034230;
        *(unsigned char *)((t3 + 0x2)) = 0x0;
        t6 = 0x0;
    }
    return t6;
}
