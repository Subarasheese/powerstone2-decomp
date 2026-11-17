/* game/unsorted: functions 0C163A70-0C164A1A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c163cc0(int, int, int);
int FUN_0c18778c(int, int);
int FUN_0c187798(void);
int FUN_0c163a70(int a4, int a5, int a6, int a7);
int FUN_0c163afc(int a4, int a5, int a6, int a7);
int FUN_0c16498c(int a4, int a5, int a6, int a7);

int FUN_0c163a70(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t13;

    t0 = FUN_0c03f444(0x1, 0x0, 0x4);
    t13 = 0x0;
    if (t0 != 0) {
        switch (a7) {
        case 0:
            FUN_0c07e3ae(t0, 0x4D);
            break;
        case 1:
            FUN_0c07e3ae(t0, 0x4E);
            break;
        case 2:
            FUN_0c07e3ae(t0, 0x4F);
            break;
        }
        FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)a4)), (~((int)0x1 << (int)a4)), 0xFFFFFEF0);
        FUN_0c187798();
        FUN_0c187798();
        t13 = t0;
    }
    return t13;
}

int FUN_0c163afc(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A3068)->v))) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A309C, 0xC2A3090, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3068)->v))), 0x0);
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A30B4, 0xC2A30A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3068)->v))), 0x0);
        }
        t4 = *(short *)((a4 + 0x1C));
        if (((int)t4 >= (int)((((struct o4_int *)0xC2A3068)->v))) && (t0 = (((struct o0_int *)0xC2A3068)->v), (int)t4 <= (int)t0)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3080, 0xC2A3070, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3068)->v))), (((((struct o4_int *)0xC2A3068)->v))));
            FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3080, 0xC2A3070, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3068)->v))), (((((struct o4_int *)0xC2A3068)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t4 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A3068)->v))) {
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t4 = 0x14;
        }
        return t4;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x4D, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x4D, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
    *(volatile int *)((a4 + 0xC4));
    FUN_0c18778c(0xC2A3070, 0x21F);
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = t1;
    *(volatile int *)((a4 + 0xC8));
    FUN_0c18778c(t2, t1);
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A3068)->v))) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A309C, 0xC2A3090, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3068)->v))), 0x0);
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A30B4, 0xC2A30A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3068)->v))), 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o4_int *)0xC2A3068)->v))) && (t3 = (((struct o0_int *)0xC2A3068)->v), (int)t0 <= (int)t3)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3080, 0xC2A3070, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3068)->v))), (((((struct o4_int *)0xC2A3068)->v))));
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3080, 0xC2A3070, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3068)->v))), (((((struct o4_int *)0xC2A3068)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A3068)->v))) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c16498c(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (a7 != 0) {
        if (a7 != 1) {
            if (a7 != 2) {
                return a7;
            }
            t0 = FUN_0c163a70(a4, a5, a6, 0x2);
            if (t0 != 0) {
                *(unsigned int *)((t0 + 0x4)) = 0xC164644;
                *(unsigned char *)((t0 + 0x2)) = a7;
                *(unsigned char *)((t0 + 0x1)) = a4;
            }
            return FUN_0c163cc0(a4, a5, a6);
        }
        t0 = FUN_0c163a70(a4, a5, a6, 0x1);
        if (t0 != 0) {
            *(unsigned int *)((t0 + 0x4)) = 0xC1642FC;
            *(unsigned char *)((t0 + 0x2)) = a7;
            *(unsigned char *)((t0 + 0x1)) = a4;
        }
        return FUN_0c163cc0(a4, a5, a6);
    }
    t0 = FUN_0c163a70(a4, a5, a6, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC163F9E;
        *(unsigned char *)((t0 + 0x2)) = a7;
        *(unsigned char *)((t0 + 0x1)) = a4;
    }
    return FUN_0c163cc0(a4, a5, a6);
}
