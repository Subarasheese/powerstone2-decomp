/* game/flow: functions 0C0F94CC-0C0FA5B4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0f9cc4(int a4);

int FUN_0c0f9cc4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x5;
    if ((*(signed char *)0xC541F62) == 0) {
        t0 = 0x4;
    }
    t1 = FUN_0c037320(t0, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x8, 0x0, t1);
    t1 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, t0, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x80;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC0F9CB0;
        (((struct oA4_uint *)(t2))->v) = (a4 + 0x64);
        t1 = 0xA4;
    }
    return t1;
}
