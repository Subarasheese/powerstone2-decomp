/* game/unsorted: functions 0C1082B8-0C108392, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int);
int FUN_0c18778c(void);
int FUN_0c187798(void);
int FUN_0c1082b8(int a4, int a5, int a6, int a7);

int FUN_0c1082b8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
    }
    *(volatile int *)(((*(int *)((a4 + 0x10))) + 0xC4));
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    FUN_0c1171f0(a4);
    if ((*(int *)((0xC473CC0 + ((*(signed char *)((a4 + 0x2))) << 2)))) != -1) {
        t0 = *(int *)((0xC473CC0 + ((*(signed char *)((a4 + 0x2))) << 2)));
        *(volatile int *)0xC4B410C;
        FUN_0c1173dc(((((struct oC4_int *)(a4))->v)), t0);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        t0 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
        *(volatile int *)((a4 + 0xC4));
        *(volatile signed char *)((a4 + 0x2));
        t0 = ((int (*)(void))(FUN_0c187798))();
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    t0 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
    t1 = t0;
    if (t0 == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}
