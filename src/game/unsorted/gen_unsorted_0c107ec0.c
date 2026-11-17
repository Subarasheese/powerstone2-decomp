/* game/unsorted: functions 0C107EC0-0C108016, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_int { char p[0x2C]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05b052(int, int);
int FUN_0c117944(int, ...);
int FUN_0c117d14(void);
int FUN_0c107ec0(int a4, int a5, int a6, int a7);
int FUN_0c107fee(void);

int FUN_0c107ec0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 80) {
                                t1 = t0;
                                if ((t0 == 98) || (t0 == 99)) {
                                    (((struct o14_uchar *)(a4))->v) = 0x50;
                                    t1 = 0x14;
                                }
                                return t1;
                            }
                            (((struct o14_uchar *)(((((struct o0_int *)0xC474B98)->v))))->v) = 0x63;
                            (((struct o0_uint *)0xC474B98)->v) = 0x0;
                            (((struct o0_uint *)0xC473CC0)->v) = 0xFFFFFFFF;
                            (((struct o4_uint *)0xC473CC0)->v) = 0xFFFFFFFF;
                            (((struct o8_uint *)0xC473CC0)->v) = 0xFFFFFFFF;
                            return FUN_0c03f346(a4, 0xC473CC0, 0xFFFFFFFF, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC107C84))(a4, 0x50, a6, a7);
                    }
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    return ((int (*)(int, int, int, int))(0xC107C84))(a4, 0x50, a6, a7);
                }
                t0 = (((struct o2C_int *)0xC473CC0)->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 2) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC10740C))(a4, 0x50, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC107654))(a4, 0x50, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC107A38))(a4, 0x50, a6, a7);
            }
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            FUN_0c117944(0xFFFFFFFF);
            t0 = FUN_0c117d14();
            (((struct o0_uint *)0xC474B98)->v) = t0;
            return t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x2BC) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c05b052(0x28, 0x1);
    (((struct o41C_uchar *)(a4))->v) = 0x0;
    (((struct o14_uchar *)(((((struct o14_int *)0xC474B98)->v))))->v) = 0xA;
    return 0x14;
}

int FUN_0c107fee(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC107EC0;
        return t0;
    }
    return 0x0;
}
