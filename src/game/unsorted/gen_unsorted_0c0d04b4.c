/* game/unsorted: functions 0C0D04B4-0C0D04C4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
void FUN_0c0d04b4(int a4);

void FUN_0c0d04b4(int a4)
{
    (((struct o0_uint *)0xC542440)->v) = (*(int *)((a4 + 0x0)));
    (((struct o4_uint *)0xC542440)->v) = (*(int *)((a4 + 0x4)));
    (((struct o8_uint *)0xC542440)->v) = (*(int *)((a4 + 0x8)));
}
