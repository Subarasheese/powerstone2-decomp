/* game/flow: functions 0C0D522C-0C0D54D6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
extern int FUN_0c0c2ab6();
extern int FUN_0c0c2d56();
int FUN_0c0d532c(int a4, int a5, int a6, int a7);

int FUN_0c0d532c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                t0 = ((int (*)(int, int, int, int))(FUN_0c0c2d56))(a4, 0x1, (*(signed char *)((a4 + 0x1))), a7);
                t0 = ((int (*)(int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
                (((struct o12E_ushort *)(a4))->v) = 0x0;
                (((struct oAC_ushort *)(a4))->v) = 0xF;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                t2 = 0xA8;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct oAC_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        t1 = ((int (*)(int, int, int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))), a6, a7);
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            t1 = ((int (*)(int, int, int))(FUN_0c0c2d56))(a4, 0x1, (*(signed char *)((a4 + 0x1))));
            t1 = ((int (*)(int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            (((struct oAC_ushort *)(a4))->v) = 0xF;
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t2 = 0xA8;
        }
        t0 = t2;
    }
    return t0;
}
