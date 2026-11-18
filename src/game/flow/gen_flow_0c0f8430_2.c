/* game/flow: functions 0C0F8430-0C0F9496, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
int FUN_0c038e88(int);
int FUN_0c03f346(int, int);
int FUN_0c03f40c(int);
int FUN_0c0f916a(void);
int FUN_0c0f91d4(int, int, int, int, int, int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0f8a38(int a4, int a5, int a6);
int FUN_0c0f9468(void);


int FUN_0c0f9468(void)
{
    int stk[1];

    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        FUN_0c0f916a();
    }
    FUN_0c0f91d4(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
    FUN_0c03f40c(0x5);
    FUN_0c03f40c(0x8);
    FUN_0c038e88(0x5);
    return FUN_0c038e88(0x8);
}


