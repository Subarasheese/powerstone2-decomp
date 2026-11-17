/* game/unsorted: functions 0C03FCFC-0C03FD34, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o64_ushort { char p[0x64]; unsigned short v; };
int FUN_0c187798(int);
int memset(int, int, int);
int FUN_0c03fcfc(int a4);

int FUN_0c03fcfc(int a4)
{
    register int t1;

    memset(a4, 0x0, 0xAC);
    t1 = *(int *)0xC40DC48;
    *(unsigned int *)0xC40DC48 = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC40DC28)) = a4;
    FUN_0c187798(0xC40DC48);
    (((struct o64_ushort *)(a4))->v) = (*(short *)0xC1B7A30);
    return 0x64;
}
