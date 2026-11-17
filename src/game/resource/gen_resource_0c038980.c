/* game/resource: functions 0C038980-0C0389C6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
int FUN_0c059e60(int, int);
int FUN_0c038980(int a4);

int FUN_0c038980(int a4)
{
    register int t1;
    register int t4;
    register int t6;
    int t3;

    if (((((struct o160_float *)(a4))->v)) > 0.0f) {
        t1 = *(int *)0xC3BD87C;
        *(unsigned int *)0xC3BD87C = ((t1 + 0x1) & 0x3);
        t4 = 0xC1AAB54;
        t6 = (((t1 + 0x1) & 0x3) << 2);
        if (((*(signed char *)((a4 + 0x2))) == 10) && (t3 = *(signed char *)((a4 + 0x371A)), t3 != 0)) {
            t4 = 0xC1AAB64;
            t6 = ((0x1 & ((t1 + 0x1) & 0x3)) << 2);
        }
        return FUN_0c059e60(a4, (*(int *)((t6 + t4))));
    }
    return 0x160;
}
