/* game/hit: functions 0C062E90-0C064D24, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40C_uint { char p[0x40C]; unsigned int v; };
struct o410_uint { char p[0x410]; unsigned int v; };
int FUN_0c056eae(int);
int FUN_0c056eee(void);
int FUN_0c06104e(void);
int FUN_0c063da2(void);
int FUN_0c063f06(void);
int FUN_0c064b5a(int, int);
int FUN_0c064bd8(int, int, float);
int FUN_0c064c4a(int, int, float);
int FUN_0c0e2390(int, int, int);
int FUN_0c187798(int);
int FUN_0c063ea0(int a4, float f4);
int FUN_0c063f24(void);
int FUN_0c064cbc(int a4, int a5, int a6, float f4);


int FUN_0c063f24(void)
{
    FUN_0c06104e();
    *(float *)0xC471A64 = (*(float *)0xC5324C8);
    FUN_0c056eae(0x6);
    FUN_0c063da2();
    FUN_0c063f06();
    return FUN_0c056eee();
}



