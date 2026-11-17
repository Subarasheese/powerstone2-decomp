/* game/unsorted: functions 0C11CB1C-0C11CC74, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c11cb1c(int a4);
int FUN_0c11cb50(int a4, int a5, int a6, int a7);

int FUN_0c11cb1c(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x18, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x1, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC11C920;
        *(unsigned int *)((t1 + 0x10)) = a4;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c11cb50(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((int)(*(short *)(((*(int *)((a4 + 0x10))) + 0x1E))) >= (int)0x384) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    switch (t0) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c03733c(a4, 0x17, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798();
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 1:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 2:
        break;
    default:
        if (t0 != 99) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 0) {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 4) {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 8) {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    return (t0 + 0x1);
}
