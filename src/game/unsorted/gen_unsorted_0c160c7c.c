/* game/unsorted: functions 0C160C7C-0C160D72, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c18778c(void);
int FUN_0c187798(int);
int FUN_0c160c7c(int a4, int a5, int a6, int a7);
int FUN_0c160d32(int a4, int a5, int a6);

int FUN_0c160c7c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
            FUN_0c0588bc((a4 + 0x40), 0xC2A2DE4, 0xC2A2DD8, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
        }
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x8) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A2E00, 0xC2A2DF0, (*(short *)((a4 + 0x1C))), 0x18, 0x8);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x18) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0x29, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x21F;
    return (FUN_0c18778c());
}

int FUN_0c160d32(int a4, int a5, int a6)
{
    register int t0;
    register int t4;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC160C7C;
        FUN_0c187798(t0);
        t4 = (FUN_0c187798(t2));
    }
    return t4;
}
