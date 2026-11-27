/* game/demo: functions 0C05C424-0C05C512, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o28_short { char p[0x28]; short v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int dbg_set_cell_size(int, int);
int nlPuts(int);
int nlLocate(int, int);
int FUN_0c17a550(int);
int FUN_0c05c432(void);

int FUN_0c05c432(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((((unsigned short)((((struct o0_short *)0xC5426D8)->v)) & 0x3CF) == 0) && (t0 = (((struct o28_short *)0xC5426D8)->v), ((unsigned short)t0 & 0x3CF) == 0)) {
    } else {
        (((struct oC_ushort *)0xC541F40)->v) = 0x1;
    }
    (((struct oC_ushort *)0xC541F40)->v) = (((((struct oC_short *)0xC541F40)->v)) - 1);
    if (((((struct oC_short *)0xC541F40)->v)) == 0) {
        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
        (((struct o1_uchar *)0xC541F40)->v) = 0x0;
        return 0x0;
    }
    t0 = *(signed char *)0xC5429A8;
    FUN_0c17a550((*(int *)((((((t0 << 1) + t0) << 2) + 0xC2577C0) + 0x0))));
    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)0xC5429A8;
        if ((int)t0 >= (int)(*(int *)((((((t1 << 1) + t1) << 2) + 0xC2577C0) + 0x8)))) {
            break;
        }
        dbg_set_cell_size(0x10, 0x10);
        t1 = (*(signed char *)0xC5429A8);
        t2 = t0;
        t3 = t1;
        t1 = (t1 << 1);
        t1 = (t1 + t3);
        t1 = (t1 << 2);
        t2 = (t2 << 1);
        t1 = (t1 + 0xC2577C0);
        t1 = (*(int *)((t1 + 0x4)));
        t2 = (t2 + t0);
        t2 = (t2 << 2);
        t1 = (t1 + t2);
        nlLocate((*(int *)((t1 + 0x0))), (*(int *)((t1 + 0x4))));
        t1 = *(signed char *)0xC5429A8;
        nlPuts((*(int *)((((*(int *)((((((t1 << 1) + t1) << 2) + 0xC2577C0) + 0x4))) + t2) + 0x8))));
        dbg_set_cell_size(0x8, 0x8);
        t0 = (t0 + 0x1);
    }
    return FUN_0c17a550(0xFFFFFFFF);
}
