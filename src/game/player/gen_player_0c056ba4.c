/* game/player: functions 0C056BA4-0C056E06, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o2C8_uint { char p[0x2C8]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c0522be(int);
int FUN_0c187798(int, int, int);
void FUN_0c056ba4(int a4, int a5, int a6);
void FUN_0c056be6(int a4, int a5, int a6);
int FUN_0c056c28(int a4, int a5, int a6);
int FUN_0c056c64(int a4, int a5, int a6);

void FUN_0c056ba4(int a4, int a5, int a6)
{
    register int t5;
    register int t6;
    register int t8;
    register int t9;

    if (a5 != 0) {
        (((struct o0_uint *)0xC241658)->v) = a5;
    }
    if (a6 != 0) {
        (((struct o4_uint *)0xC241658)->v) = a6;
    }
    FUN_0c0522be(0xC24164C);
    t5 = 0xC5410FC;
    for (;;) {
        t6 = a4;
        t8 = (0x248 + t5);
        for (;;) { t9 = *(int *)t6; t6 = (t6 + 4); if ((unsigned int)((a4 + 128)) < (unsigned int)t6) break; *(unsigned int *)t8 = t9; t8 = (t8 + 4); }
        t5 = (t5 + 0x2F8);
        if ((unsigned int)t5 >= (unsigned int)0xC541CDC) {
            break;
        }
    }
}



int FUN_0c056c64(int a4, int a5, int a6)
{
    *(unsigned int *)0xC24166C = (a4 + 0x28);
    return FUN_0c056c28(0xC241660, 0xC241674, a6);
}



