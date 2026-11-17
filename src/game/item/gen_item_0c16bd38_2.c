/* game/item: functions 0C16BD38-0C16C150, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c16bd38(int, int, int, int);
int FUN_0c16be0a(int, int, int, int, float);
int FUN_0c187798(void);
int FUN_0c16c016(int a4);
int FUN_0c16c0c6(int a4, float f4);

int FUN_0c16c016(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            if ((*(signed char *)((a4 + 0x2))) == 1) {
                t0 = FUN_0c16bd38((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                if (t0 == 0) {
                } else {
                    FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned int *)((t0 + 0x4)) = 0xC16BF02;
                    *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                    FUN_0c187798();
                }
            } else {
                t0 = FUN_0c16bd38((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x0);
                if (t0 != 0) {
                    FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned int *)((t0 + 0x4)) = 0xC16BF02;
                    *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                    FUN_0c187798();
                }
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        if ((*(signed char *)((a4 + 0x2))) == 1) {
            t0 = FUN_0c16bd38((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            if (t0 == 0) {
            } else {
                FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t0 + 0x4)) = 0xC16BF02;
                *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                FUN_0c187798();
            }
        } else {
            t0 = FUN_0c16bd38((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x0);
            if (t0 != 0) {
                FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t0 + 0x4)) = 0xC16BF02;
                *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                FUN_0c187798();
            }
        }
    }
    return FUN_0c03f346(a4);
}

int FUN_0c16c0c6(int a4, float f4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            if ((*(signed char *)((a4 + 0x2))) == 1) {
                t0 = FUN_0c16be0a((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1, f4);
                if (t0 == 0) {
                } else {
                    FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned int *)((t0 + 0x4)) = 0xC16BF02;
                    *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                    FUN_0c187798();
                }
            } else {
                t0 = FUN_0c16be0a((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x0, f4);
                if (t0 != 0) {
                    FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned int *)((t0 + 0x4)) = 0xC16BF02;
                    *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                    FUN_0c187798();
                }
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        if ((*(signed char *)((a4 + 0x2))) == 1) {
            t0 = FUN_0c16be0a((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1, f4);
            if (t0 == 0) {
            } else {
                FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t0 + 0x4)) = 0xC16BF02;
                *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                FUN_0c187798();
            }
        } else {
            t0 = FUN_0c16be0a((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x0, f4);
            if (t0 != 0) {
                FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t0 + 0x4)) = 0xC16BF02;
                *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                FUN_0c187798();
            }
        }
    }
    return FUN_0c03f346(a4);
}
