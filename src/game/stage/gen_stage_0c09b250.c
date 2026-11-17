/* game/stage: functions 0C09B250-0C09B264, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o38F8_uint { char p[0x38F8]; unsigned int v; };
int FUN_0c09b250(int a4);

int FUN_0c09b250(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3715));
    if (t0 != 26) {
        (((struct o38F8_uint *)(a4))->v) = 0x0;
    }
    return t0;
}
