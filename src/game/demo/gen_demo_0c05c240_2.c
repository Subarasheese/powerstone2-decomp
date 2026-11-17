/* game/demo: functions 0C05C240-0C05C424, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o10_short { char p[0x10]; short v; };
struct o12_short { char p[0x12]; short v; };
struct o2_short { char p[0x2]; short v; };
struct o4_short { char p[0x4]; short v; };
struct o6_short { char p[0x6]; short v; };
struct o8_short { char p[0x8]; short v; };
struct oA_short { char p[0xA]; short v; };
struct oC_short { char p[0xC]; short v; };
struct oE_short { char p[0xE]; short v; };
int FUN_0c05c240(int, int, int, int, int, int);
int FUN_0c17a550(int);
int FUN_0c05c2b4(void);

int FUN_0c05c2b4(void)
{
    register int t0;

    t0 = *(signed char *)0xC5429A8;
    FUN_0c17a550((*(int *)(((((t0 << 1) + t0) << 2) + 0xC2577C0))));
    FUN_0c05c240((*(int *)0xC257814), ((((struct o0_short *)0xC1C37A4)->v)), ((((struct o2_short *)0xC1C37A4)->v)), 0x7, 0x10, 0x10);
    FUN_0c05c240((*(int *)((((*(signed char *)0xC5429A8) << 2) + 0xC257818))), ((((struct o4_short *)0xC1C37A4)->v)), ((((struct o6_short *)0xC1C37A4)->v)), 0x7, 0x10, 0x10);
    FUN_0c05c240(0xC1C37BC, ((((struct o8_short *)0xC1C37A4)->v)), ((((struct oA_short *)0xC1C37A4)->v)), 0x7, 0x10, 0x10);
    FUN_0c05c240(0xC1C37C8, ((((struct oC_short *)0xC1C37A4)->v)), ((((struct oE_short *)0xC1C37A4)->v)), 0x7, 0x10, 0x10);
    if ((*(signed char *)0xC5421E1) != 0) {
        FUN_0c05c240(0xC1C37D4, ((((struct o10_short *)0xC1C37A4)->v)), ((((struct o12_short *)0xC1C37A4)->v)), 0x7, 0x10, 0x10);
    }
    return FUN_0c17a550(0xFFFFFFFF);
}
