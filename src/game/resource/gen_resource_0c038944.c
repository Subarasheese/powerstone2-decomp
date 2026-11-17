/* game/resource: functions 0C038944-0C03896A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o38CC_uint { char p[0x38CC]; unsigned int v; };
struct o38D0_uint { char p[0x38D0]; unsigned int v; };
struct o38D4_uint { char p[0x38D4]; unsigned int v; };
int FUN_0c038944(int a4, int a5);
int FUN_0c038958(int a4, int a5);

int FUN_0c038944(int a4, int a5)
{
    (((struct o38CC_uint *)(a4))->v) = (*(int *)((a5 + 0x4)));
    (((struct o38D0_uint *)(a4))->v) = 0x0;
    (((struct o38D4_uint *)(a4))->v) = (*(int *)((a5 + 0x8)));
    return 0x38D4;
}

int FUN_0c038958(int a4, int a5)
{
    return FUN_0c038944(a4, ((((a5 << 1) + a5) << 2) + 0xC1ABF7C));
}
