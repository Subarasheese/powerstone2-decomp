/* game/player: functions 0C1717BC-0C1717F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int res_pl_textures_release_all(void);
int FUN_0c036606(void);
int FUN_0c05a292(int, int, int, int, int);
int FUN_0c1717bc(void);

int FUN_0c1717bc(void)
{
    res_pl_textures_release_all();
    FUN_0c036606();
    return (FUN_0c05a292((*(signed char *)0xC542237), (*(signed char *)0xC53249A), (*(signed char *)0xC535DD2), (*(signed char *)0xC53970A), ((*(signed char *)0xC53D042))));
}
