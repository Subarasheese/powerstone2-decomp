/* game/unsorted: functions 0C137F74-0C138C30, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA4_uint { char p[0xA4]; unsigned int v; };
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c137f74(int a4, int a5, int a6);
int FUN_0c1382ba(int a4);


int FUN_0c1382ba(int a4)
{
    int stk[1];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t0 + 0x4)) = 0xC137F8E;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)((0xC53256C + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938)))) + 0x28);
        t4 = 0xA4;
    }
    return t4;
}


