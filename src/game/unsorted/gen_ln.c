/* Straight-line functions with calls and guards (batch gen_ln): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c05b048(int, int);
int FUN_0c05f22c(int);
int FUN_0c115120(int);
int FUN_0c117944(int, ...);
int FUN_0c117a6e(int, ...);
int FUN_0c117d54(void);
extern int FUN_0c117e76();
int FUN_0c11e2d0(int, int, int, int);
int FUN_0c107a38(int a4, int a5, int a6, int a7);

int FUN_0c107a38(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t6 = *(signed char *)((a4 + 0x15));
    if (t6 == 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
    }
    if ((t6 == 0) || (t6 == 1)) {
        t7 = *(signed char *)((a4 + 0x16));
        if (t7 != 0) {
            if (t7 != 1) {
                if (t7 != 2) {
                    t8 = t7;
                    if (t7 != 3) {
                    } else {
                        t7 = FUN_0c05f22c(0x3FCF);
                        t8 = t7;
                        if (t7 != 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t8 = 0x15;
                        }
                    }
                    return t8;
                }
                t7 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t7 + 0x1);
                if ((int)(short)(t7 + 0x1) <= (int)0xD2) {
                    return 0x20;
                }
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t7 = ((int (*)(void))(FUN_0c117e76))();
                return FUN_0c05b048(0x78, 0x1);
            }
            t7 = FUN_0c117d54();
            t8 = t7;
            if ((int)t7 >= 0) {
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x0;
                t8 = 0x20;
            }
            return t8;
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t7 = 0x0;
        if ((((((struct oC_int *)0xC473CC0)->v)) != -1) && (t0 = (((struct oC_int *)0xC473CC0)->v), t1 = *(int *)((0xC473D04 + (t0 << 2))), (t1 & 0x40000) != 0)) {
            t7 = 0x1;
        }
        t0 = t7;
        if ((((((struct o10_int *)0xC473CC0)->v)) != -1) && (t2 = (((struct o10_int *)0xC473CC0)->v), t3 = *(int *)((0xC473D04 + (t2 << 2))), (t3 & 0x40000) != 0)) {
            t0 = (t7 | 0x1);
        }
        t1 = t0;
        if ((((((struct o14_int *)0xC473CC0)->v)) != -1) && (t4 = (((struct o14_int *)0xC473CC0)->v), t5 = *(int *)((0xC473D04 + (t4 << 2))), (t5 & 0x40000) != 0)) {
            t1 = (t0 | 0x1);
        }
        if (t1 != 0) {
            FUN_0c117944(0x40);
        } else {
            FUN_0c117944(0x41);
        }
        return FUN_0c115120(0x5);
    } else {
        if (t6 == 2) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = (*(int *)0xC473D00);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            FUN_0c11e2d0((*(int *)((0xC473CCC + (((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2)))), ((((struct o0_int *)0xC473CC0)->v)), ((((struct o4_int *)0xC473CC0)->v)), ((((struct o8_int *)0xC473CC0)->v)));
        } else if (t6 == 3) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            FUN_0c11e2d0((*(int *)((0xC473CCC + (((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2)))), ((((struct o0_int *)0xC473CC0)->v)), ((((struct o4_int *)0xC473CC0)->v)), ((((struct o8_int *)0xC473CC0)->v)));
        } else if (t6 == 4) {
        } else {
            return t6;
        }
        t0 = *(signed char *)((a4 + 0x16));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 != 2) {
                } else {
                    t0 = FUN_0c05f22c(0x3FCF);
                    t2 = t0;
                    if (t0 != 0) {
                        *(unsigned short *)(((*(int *)0xC474BAC) + 0x1C)) = (((*(int *)0xC473D00) - (*(short *)(((0x1E + a4) + 0x0)))) + 0x1);
                        t0 = *(short *)((a4 + 0x1E));
                        if (t0 == 0) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t3 = 0x14;
                        } else {
                            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                            (((struct o15_uchar *)(a4))->v) = 0x3;
                            t3 = 0x15;
                        }
                        t2 = t3;
                    }
                    t1 = t2;
                }
                return t1;
            }
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return ((int (*)(void))(FUN_0c117e76))();
            }
            return t0;
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return (FUN_0c117a6e(0x42, ((*(int *)((((*(int *)((0xC473CCC + (((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2)))) << 2) + 0xC29DDD0))))));
    }
}
