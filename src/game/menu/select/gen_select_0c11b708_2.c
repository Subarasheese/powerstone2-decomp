/* game/menu/select: functions 0C11B708-0C11C088, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o46C_int { char p[0x46C]; int v; };
int FUN_0c03f444(int, int, int);
int FUN_0c11b708(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c15b478(int, int, int, int, int, int, int, int);
int FUN_0c187798(int);
int FUN_0c11bae2(int a4, int a5, int a6);

int FUN_0c11bae2(int a4, int a5, int a6)
{
    int stk[12];
    register int t0;
    register int t1;
    register int t2;
    register int t12;
    register int t7;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    t1 = ((int (*)(void))(FUN_0c187798))();
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t12 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC11B708;
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 20)));
        *(unsigned short *)((t2 + 0x1E)) = (*(int *)(((int)stk + 16)));
        FUN_0c11b708(t2, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
        *(int *)((int)stk + 12) = (((int)stk + 16) + 0x8);
        *(int *)((int)stk + 8) = (((int)stk + 12) + 0x18);
        *(int *)((int)stk + 4) = 0x64;
        t7 = (*(int *)0xC2920C8);
        *(int *)((int)stk + 0) = t7;
        t12 = (FUN_0c15b478(0xFFFFFFFF, (t2 + 0x64), t2, (*(int *)((((((struct o46C_int *)((*(int *)0xC4B410C)))->v)) + 0x0))), t7, 0x64, (((int)stk + 12) + 0x18), (((int)stk + 16) + 0x8)));
    }
    return t12;
}
