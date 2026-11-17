/* game/unsorted: functions 0C0D6FCC-0C0D7468, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0c2ab6(int, int);
extern int FUN_0c0c2d56();
int FUN_0c187798(int, int, int);
int FUN_0c0d704c(int a4, int a5, int a6, int a7);

int FUN_0c0d704c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                t1 = ((int (*)(int, int, int, int))(FUN_0c0c2d56))(a4, 0x0, (*(signed char *)((a4 + 0x1))), a7);
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t2 = 0x3C;
            }
        }
        t1 = t2;
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        FUN_0c187798(a4, a5, a6);
        *(unsigned int *)((a4 + 0x38)) = t0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        (((struct oA4_uint *)(a4))->v) = 0x0;
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            t0 = ((int (*)(int, int, int))(FUN_0c0c2d56))(a4, 0x0, (*(signed char *)((a4 + 0x1))));
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
            *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            t2 = 0x3C;
        }
        t1 = t2;
    }
    return t1;
}
