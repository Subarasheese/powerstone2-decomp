/* game/unsorted: functions 0C12BAC0-0C12BB5C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o68_uint { char p[0x68]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c12bac0(int a4, int a5);

int FUN_0c12bac0(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t14;
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t14 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC12BB5C;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        t7 = *(signed char *)(((int)stk + 0));
        (((struct o68_uint *)(((((struct oC4_int *)(t3))->v))))->v) = ((*(int *)(((((*(int *)(((((unsigned char)t7 << 2) + 0xC2A1114) + 0x0))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
        (((struct o68_uint *)(((((struct oC8_int *)(t3))->v))))->v) = ((*(int *)(((((*(int *)(((((unsigned char)t7 << 2) + 0xC2A1114) + 0x0))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
        t14 = 0x68;
    }
    return t14;
}
