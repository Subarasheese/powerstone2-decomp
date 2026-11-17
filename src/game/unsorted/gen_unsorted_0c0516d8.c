/* game/unsorted: functions 0C0516D8-0C051878, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0d5188(void);
int FUN_0c04f148(int, int);
int FUN_0c04f29e(void);
int FUN_0c04f420(void);
int FUN_0c04f5a4(void);
int FUN_0c04fe1c(void);
int FUN_0c0506e8(void);
int FUN_0c0d04b4(int);
int FUN_0c0516d8(void);
int FUN_0c05180a(int a4);
int FUN_0c051852(void);

int FUN_0c0516d8(void)
{
    int stk[4];
    register int t2;
    register int t3;
    register int t14;
    register int t19;
    register int t21;
    register int t23;
    register int t25;

    FUN_0c0d04b4(0xC241478);
    t2 = (FUN_0c03ea04(0x4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(int *)0xC241474)) {
            break;
        }
        t2 = t3;
        t2 = (t2 << 2);
        t2 = (FUN_0c04f148(t3, (*(int *)((0xC1B8BCC + t2)))));
        t3 = (t3 + 0x1);
    }
    t14 = t2;
    if ((*(signed char *)0xC542361) == 0) {
        FUN_0c04f29e();
        FUN_0c04f420();
        FUN_0c04f5a4();
        FUN_0c04fe1c();
        t14 = (FUN_0c0506e8());
    }
    t19 = *(signed char *)0xC5429B4;
    if (t19 != 0) {
        if (t19 != 4) {
            if (t19 == 2) {
                if ((*(signed char *)0xC5429CB) != 0) {
                    t21 = FUN_0c0d5188();
                    if (t21 == 0) {
                        return ((int (*)(void))(0xC05164E))();
                    }
                    return t21;
                }
                return t19;
            }
            return t19;
        }
        if ((*(signed char *)0xC5429CB) != 0) {
            t23 = FUN_0c0d5188();
            if (t23 == 0) {
                return ((int (*)(void))(0xC05164E))();
            }
            return t23;
        }
        return t19;
    }
    if ((*(signed char *)0xC5429CB) != 0) {
        t25 = FUN_0c0d5188();
        if (t25 == 0) {
            return ((int (*)(void))(0xC05164E))();
        }
        return t25;
    }
    return t14;
}

int FUN_0c05180a(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(a4, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, a4, (*(int *)0xC4B410C));
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0517E0;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t0 = 0xA9;
    }
    return t0;
}

int FUN_0c051852(void)
{
    register int t1;
    register int t2;
    register int t4;
    register int t0;

    t1 = 0x0;
    t2 = 0xC1B8D4C;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)0xC1B8D54)) {
            break;
        }
        t4 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t0 = (FUN_0c05180a(t4));
        t1 = (t1 + 0x1);
    }
    return t0;
}
