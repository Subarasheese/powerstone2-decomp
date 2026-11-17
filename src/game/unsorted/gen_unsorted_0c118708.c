/* game/unsorted: functions 0C118708-0C1187E2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int);
int FUN_0c118708(int a4, int a5, int a6, int a7);
int FUN_0c1187ba(void);

int FUN_0c118708(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 80) {
                t1 = t0;
                if (t0 != 99) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    t1 = 0x14;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xB, 0xD, (*(int *)0xC4B410C));
        FUN_0c187798(((((struct oC4_int *)(a4))->v)));
    }
    t0 = (((struct oC4_int *)(a4))->v);
    t1 = 0xC291D58;
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t1 = 0xC291D64;
    }
    return FUN_0c17c130((t0 + 0x6C), (0x90 + t0), t1);
}

int FUN_0c1187ba(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC118708;
        return t0;
    }
    return 0x0;
}
