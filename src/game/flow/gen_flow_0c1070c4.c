/* game/flow: functions 0C1070C4-0C10739C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c056e44(int, int);
int FUN_0c108258(void);
int FUN_0c10852e(void);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1173a0(void);
int FUN_0c11791c(void);
int FUN_0c117d14(void);
int FUN_0c119ba4(int, int);
int FUN_0c187798(int);
int FUN_0c1070c4(int a4, int a5, int a6, int a7);
int FUN_0c107346(void);


int FUN_0c107346(void)
{
    register int t6;

    *(unsigned int *)0xC474718 = 0x1;
    (((struct o0_uint *)0xC474B90)->v) = (FUN_0c1173a0());
    (((struct o14_uint *)0xC474B90)->v) = (FUN_0c119ba4(0x103, 0x1));
    (((struct o10_uint *)0xC474B90)->v) = (FUN_0c108258());
    (((struct o20_uint *)0xC474B90)->v) = (FUN_0c10852e());
    (((struct o8_uint *)0xC474B90)->v) = (FUN_0c117d14());
    (((struct o4_uint *)0xC474B90)->v) = (FUN_0c11791c());
    t6 = (((struct o4_int *)0xC474B90)->v);
    (((struct o2C_float *)(t6))->v) = (((((struct o2C_float *)(t6))->v)) + 65.0f);
    return 0x2C;
}
