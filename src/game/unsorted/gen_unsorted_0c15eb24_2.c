/* game/unsorted: functions 0C15EB24-0C15ED7A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int a4, int a5, int a6);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c15ecc6(int a4);

int FUN_0c15ecc6(int a4)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t14;
    register int t7;
    register int t12;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 4)) = (t0 * 0x1C);
        t2 = *(int *)((((t0 * 0x1C) + 0xC2038D0) + 0x0));
        t3 = FUN_0c037320(t2, (*(int *)0xC4B4114));
        t4 = FUN_0c03f444(0x8, 0x0, t3);
        t14 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B4114));
            (((struct oAC_ushort *)(t4))->v) = 0x1F;
            (((struct oA9_uchar *)(t4))->v) = 0x21;
            *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t4 + 0x4)) = 0xC15EB24;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = *(int *)(((int)stk + 4));
            *(unsigned short *)((t4 + 0x1C)) = (((*(short *)(((t7 + 0xC2038D0) + 0x4))) + (*(short *)(((t7 + 0xC2038D0) + 0x8)))) + (*(int *)(((int)stk + 0))));
            (((struct o20_ushort *)(t4))->v) = (*(int *)(((t7 + 0xC2038D0) + 0xC)));
            t12 = ((int (*)(int))(FUN_0c187798))((t7 + 0xC2038D0));
            t14 = (((int (*)(void))(FUN_0c187798))());
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    return t14;
}
