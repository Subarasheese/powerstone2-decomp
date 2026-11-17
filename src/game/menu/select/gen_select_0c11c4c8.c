/* game/menu/select: functions 0C11C4C8-0C11C6AC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c187798(void);
int FUN_0c11c4c8(int a4);
int FUN_0c11c4f2(int a4, int a5, int a6, int a7);
int FUN_0c11c672(int a4, int a5);

int FUN_0c11c4c8(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11C31C;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c11c4f2(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 == 99) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t4;
        }
        t4 = *(short *)((a4 + 0x1C));
        if (((int)t4 >= (int)((((struct o4_int *)0xC2922D0)->v))) && (t0 = (((struct o8_int *)0xC2922D0)->v), (int)t4 <= (int)t0)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2922D0)->v))), (((((struct o4_int *)0xC2922D0)->v))));
            FUN_0c0588bc((a4 + 0x40), 0xC2922B8, 0xC2922AC, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2922D0)->v))), (((((struct o4_int *)0xC2922D0)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2922D0)->v))) && (t1 = (((struct o10_int *)0xC2922D0)->v), (int)t0 <= (int)t1)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2922D0)->v))), (((((struct oC_int *)0xC2922D0)->v))));
            FUN_0c0588bc((a4 + 0x40), 0xC2922C4, 0xC2922B8, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2922D0)->v))), (((((struct oC_int *)0xC2922D0)->v))));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03733c(a4, 0x19, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x41F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798();
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o4_int *)0xC2922D0)->v))) && (t2 = (((struct o8_int *)0xC2922D0)->v), (int)t0 <= (int)t2)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2922D0)->v))), (((((struct o4_int *)0xC2922D0)->v))));
            FUN_0c0588bc((a4 + 0x40), 0xC2922B8, 0xC2922AC, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2922D0)->v))), (((((struct o4_int *)0xC2922D0)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2922D0)->v))) && (t3 = (((struct o10_int *)0xC2922D0)->v), (int)t0 <= (int)t3)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2922D0)->v))), (((((struct oC_int *)0xC2922D0)->v))));
            FUN_0c0588bc((a4 + 0x40), 0xC2922C4, 0xC2922B8, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2922D0)->v))), (((((struct oC_int *)0xC2922D0)->v))));
        }
    }
    if ((int)(*(short *)((a4 + 0x1C))) < (int)((((struct o0_int *)0xC2922D0)->v))) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c11c672(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t1 = FUN_0c037320(0x19, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t5 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC11C4F2;
        t5 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t2 + 0x2)) = t5;
        *(unsigned int *)((t2 + 0x10)) = (*(int *)(((int)stk + 0)));
    }
    return t5;
}
