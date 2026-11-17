/* game/menu/option: functions 0C0FB8F0-0C0FB92C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0fb8f0(void);
int FUN_0c0fb90e(void);

int FUN_0c0fb8f0(void)
{
    register int t0;
    register int t2;
    register int t3;

    { struct mvb32 { char b[32]; }; *(struct mvb32 *)(0xC83C6C4) = *(struct mvb32 *)(0xC5429A8); }
    t0 = 0xC5429C8;
    t2 = 0xC83C6E4;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC5429C8 + 1628)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    return 0x1;
}

int FUN_0c0fb90e(void)
{
    register int t0;
    register int t2;
    register int t3;

    { struct mvb32 { char b[32]; }; *(struct mvb32 *)(0xC5429A8) = *(struct mvb32 *)(0xC83C6C4); }
    t0 = 0xC83C6E4;
    t2 = 0xC5429C8;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC83C6E4 + 1628)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    return 0x1;
}
