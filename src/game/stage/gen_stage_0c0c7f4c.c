/* game/stage: functions 0C0C7F4C-0C0C81FE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c059df2(int, int);
int FUN_0c15c344(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0c7f4c(int a4, int a5, int a6);
int FUN_0c0c81ee(int a4, int a5, int a6, int a7);


int FUN_0c0c81ee(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x41D))) == 7) {
        return ((int (*)(int, int, int, int))(0xC0C8030))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0C80E0))(a4, a5, a6, a7);
}
