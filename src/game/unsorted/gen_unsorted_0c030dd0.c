/* game/unsorted: functions 0C030DD0-0C030ED6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c057cfa(int, int);
int FUN_0c030dd0(int a4, int a5);

int FUN_0c030dd0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = a5;
    if ((*(int *)0xC542408) == 0) {
        t2 = 0x0;
    }
    t3 = *(int *)(((0xC5423C4 + ((t2 << 2) << 2)) + 0x0));
    t4 = (int)((int)t3 / (int)0xA);
    t5 = (int)((int)t3 % (int)0xA);
    if (t4 == 0) {
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB48) + 0x0))) + 0xA) + 0x0)) = (t5 + 0x10);
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB48) + 0x0))) + 0xB) + 0x0)) = 0x20;
    } else {
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB48) + 0x0))) + 0xA) + 0x0)) = (t4 + 0x10);
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB48) + 0x0))) + 0xB) + 0x0)) = (t5 + 0x10);
    }
    t3 = *(int *)(((0xC5423C4 + ((t2 << 2) << 2)) + 0x8));
    if ((t3 != 0) && ((t3 != 1) && ((t0 = *(int *)(((0xC5423C4 + ((t2 << 2) << 2)) + 0x0)), t0 == 0) || (t1 = *(int *)(((0xC5423C4 + ((t2 << 2) << 2)) + 0x4)), t1 != 0)))) {
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB48) + 0x0))) + 0xD) + 0x0)) = ((*(int *)(((0xC5423C4 + ((t2 << 2) << 2)) + 0x4))) + 0x10);
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB48) + 0x0))) + 0xE) + 0x0)) = 0x1A;
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB48) + 0x0))) + 0xF) + 0x0)) = ((*(int *)(((0xC5423C4 + ((t2 << 2) << 2)) + 0x8))) + 0x10);
    } else {
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB48) + 0x0))) + 0xD) + 0x0)) = 0x20;
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB48) + 0x0))) + 0xE) + 0x0)) = 0x20;
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB48) + 0x0))) + 0xF) + 0x0)) = 0x20;
    }
    return FUN_0c057cfa((*(int *)((a4 + (a5 << 2)))), (*(int *)((0xC20EB48 + (a5 << 2)))));
}
