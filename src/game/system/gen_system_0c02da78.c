/* game/system: functions 0C02DA78-0C02DBC2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c17a360(int);
int FUN_0c17a4c0(int, int);
int dbg_printf(int, ...);
int FUN_0c02da78(void);

int FUN_0c02da78(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC3BA8E0;
    FUN_0c17a4c0(0xA, 0xA);
    *(volatile int *)((((-t0) << 2) + 0xC20EA7C));
    t0 = *(int *)0xC3BA8E0;
    t1 = (dbg_printf(0xC1A8EEC));
    if (t0 == 0) {
        if (((*(int *)(((*(int *)0xC3BABB4) + 0x0))) & 1) == 0) {
            FUN_0c17a4c0(0xE, 0xB);
            FUN_0c17a360(0xC1A8EF8);
            t0 = ((*(int *)0xC3BABB4) + 0x4);
        } else {
            FUN_0c17a4c0(0xE, 0xB);
            FUN_0c17a360(0xC1A8F08);
            t0 = ((*(int *)0xC3BABB4) + 0x168);
        }
        FUN_0c17a4c0(0xE, 0xC);
        dbg_printf(0xC1A8F18);
        FUN_0c17a4c0(0xE, 0xD);
        dbg_printf(0xC1A8F28);
        FUN_0c17a4c0(0xE, 0xE);
        dbg_printf(0xC1A8F28);
        FUN_0c17a4c0(0xE, 0xF);
        dbg_printf(0xC1A8F38);
        FUN_0c17a4c0(0xE, 0x10);
        dbg_printf(0xC1A8F48);
        FUN_0c17a4c0(0xE, 0x11);
        *(volatile signed char *)((t0 + 0xAB));
        *(volatile signed char *)((t0 + 0xAA));
        *(volatile signed char *)((t0 + 0xA9));
        *(volatile signed char *)((t0 + 0xA8));
        dbg_printf(0xC1A8F58);
        FUN_0c17a4c0(0xE, 0x12);
        *(volatile signed char *)((t0 + 0xAF));
        *(volatile signed char *)((t0 + 0xAE));
        *(volatile signed char *)((t0 + 0xAD));
        *(volatile signed char *)((t0 + 0xAC));
        t1 = (dbg_printf(0xC1A8F74));
    }
    return t1;
}
