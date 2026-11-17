/* game/player: functions 0C0C47A4-0C0C47D4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c47a4(int a4, int a5, int a6);
int FUN_0c0c47b2(int a4);

int FUN_0c0c47a4(int a4, int a5, int a6)
{
    return (FUN_0c0c3e3a(a4, a5, a6));
}

int FUN_0c0c47b2(int a4)
{
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    return 0x0;
}
