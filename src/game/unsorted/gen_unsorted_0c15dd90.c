/* game/unsorted: functions 0C15DD90-0C15DF78, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c15dd90(int a4);

int FUN_0c15dd90(int a4)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register int t8;
    register int t9;
    register int t11;
    register int t12;
    register int t16;
    register int t17;
    register int t21;
    register int t23;
    register int t24;
    register int t28;
    register int t32;
    register int t33;
    register int t35;
    register int t36;
    register int t44;
    register int t40;
    register int t42;
    register int t52;
    register int t53;
    register int t57;
    register int t61;
    register int t46;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)0xC5429A8;
        t2 = *(int *)(((((t0 << 2) + t0) << 2) + 0xC20375C));
        t6 = t2;
        if (t1 != 0) {
            t6 = (t2 + 0x8);
            if (t1 == 1) {
                t6 = (t2 + 0x4);
            }
        }
        t8 = *(int *)0xC4B4114;
        t9 = t6;
        if ((int)t6 >= (int)0xA) {
            t9 = (t6 + 0x6);
        }
        t11 = FUN_0c037320(t9, t8);
        t12 = FUN_0c03f444(0x8, 0x0, t11);
        if (t12 != 0) {
            FUN_0c03733c(t12, t9, (*(int *)0xC4B4114));
            (((struct oAC_ushort *)(t12))->v) = 0x1F;
            (((struct oA9_uchar *)(t12))->v) = 0x21;
            *(unsigned char *)((t12 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t12 + 0x4)) = 0xC15DA24;
            *(unsigned char *)((t12 + 0x2)) = t0;
            (((struct o20_ushort *)(t12))->v) = a4;
            *(unsigned short *)((t12 + 0x1C)) = ((*(short *)((((((t0 << 2) + t0) << 2) + 0xC20375C) + 0x4))) + a4);
            t16 = ((int (*)(int))(FUN_0c187798))(((((t0 << 2) + t0) << 2) + 0xC20375C));
            t17 = ((int (*)(void))(FUN_0c187798))();
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t21 = *(signed char *)0xC5421DF;
    if (t21 != 1) {
        if (t21 != 2) {
            t23 = FUN_0c037320(0x12, (*(int *)0xC4B4114));
            t24 = FUN_0c03f444(0x8, 0x0, t23);
            t46 = t24;
            if (t24 != 0) {
                FUN_0c03733c(t24, 0x12, (*(int *)0xC4B4114));
                (((struct oAC_ushort *)(t24))->v) = 0x1F;
                (((struct oA9_uchar *)(t24))->v) = 0x21;
                *(unsigned char *)((t24 + 0x1)) = 0xFFFFFFFF;
                *(unsigned int *)((t24 + 0x4)) = 0xC15DB86;
                *(unsigned char *)((t24 + 0x2)) = 0x0;
                (((struct o20_ushort *)(t24))->v) = a4;
                *(unsigned short *)((t24 + 0x1C)) = ((*(short *)0xC2037B0) + a4);
                t28 = ((int (*)(int))(FUN_0c187798))(0xC2037AC);
                t46 = (((int (*)(void))(FUN_0c187798))());
            }
        } else {
            t32 = 0x0;
            for (;;) {
                *(unsigned int *)(((int)stk + 4)) = (((t32 << 2) + t32) << 2);
                t33 = *(int *)((((((t32 << 2) + t32) << 2) + 0xC2037C0) + 0x0));
                *(unsigned int *)(((int)stk + 0)) = t33;
                t35 = FUN_0c037320(t33, (*(int *)0xC4B4114));
                t36 = FUN_0c03f444(0x8, 0x0, t35);
                t44 = t36;
                if (t36 != 0) {
                    FUN_0c03733c(t36, (*(int *)(((int)stk + 0))), (*(int *)0xC4B4114));
                    (((struct oAC_ushort *)(t36))->v) = 0x1F;
                    (((struct oA9_uchar *)(t36))->v) = 0x21;
                    *(unsigned char *)((t36 + 0x1)) = 0xFFFFFFFF;
                    *(unsigned int *)((t36 + 0x4)) = 0xC15DB86;
                    *(unsigned char *)((t36 + 0x2)) = (t32 + 0x1);
                    (((struct o20_ushort *)(t36))->v) = a4;
                    t40 = *(int *)(((int)stk + 4));
                    *(unsigned short *)((t36 + 0x1C)) = ((*(short *)(((t40 + 0xC2037C0) + 0x4))) + a4);
                    t42 = ((int (*)(int))(FUN_0c187798))((t40 + 0xC2037C0));
                    t44 = (((int (*)(void))(FUN_0c187798))());
                }
                t32 = (t32 + 0x1);
                if ((unsigned int)t32 >= (unsigned int)0x3) {
                    break;
                }
            }
            t46 = t44;
        }
        t61 = t46;
    } else {
        t52 = FUN_0c037320(0x12, (*(int *)0xC4B4114));
        t53 = FUN_0c03f444(0x8, 0x0, t52);
        t61 = t53;
        if (t53 != 0) {
            FUN_0c03733c(t53, 0x12, (*(int *)0xC4B4114));
            (((struct oAC_ushort *)(t53))->v) = 0x1F;
            (((struct oA9_uchar *)(t53))->v) = 0x21;
            *(unsigned char *)((t53 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t53 + 0x4)) = 0xC15DB86;
            *(unsigned char *)((t53 + 0x2)) = 0x0;
            (((struct o20_ushort *)(t53))->v) = a4;
            *(unsigned short *)((t53 + 0x1C)) = ((*(short *)0xC2037B0) + a4);
            t57 = ((int (*)(int))(FUN_0c187798))(0xC2037AC);
            t61 = (((int (*)(void))(FUN_0c187798))());
        }
    }
    return t61;
}
