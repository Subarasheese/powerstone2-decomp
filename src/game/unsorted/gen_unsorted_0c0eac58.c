/* game/unsorted: functions 0C0EAC58-0C0EAD10, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c0eac58(int a4, int a5, int a6, int a7);

int FUN_0c0eac58(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x3;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) + 0x64);
        }
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            FUN_0c07e420(a4, 0x1);
            (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFEF;
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & 0xFFFFF3FF);
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x3C) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o136_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)((a4 + 0x34));
    t2 = 0x100;
    if (t0 != 0) {
        t2 = 0xFFFFFF00;
    }
    *(unsigned int *)((a4 + 0x34)) = (t1 + t2);
    t1 = *(signed char *)0xC54098D;
    t2 = t0;
    if ((int)t1 >= (int)0x8) {
        t0 = 0xE;
        if ((int)t1 <= (int)0xE) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        t2 = t0;
    }
    return t2;
}
