/* game/unsorted: functions 0C0298C8-0C029F70, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
int FUN_0c01f6f8(void);
int FUN_0c01fce0(int, int, int, int);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c0298c8(void);
int FUN_0c186380(int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
void FUN_0c029c9e(void);
int FUN_0c029caa(void);
int FUN_0c029d84(int a4, int a5, int a6, int a7);
int FUN_0c029e80(void);
int FUN_0c029f52(void);
int FUN_0c029f60(void);

void FUN_0c029c9e(void)
{
    (((struct o6_uchar *)0xC30985B)->v) = 0x0;
    (((struct o0_uchar *)0xC30985B)->v) = 0x0;
}

int FUN_0c029caa(void)
{
    int stk[33];
    register int t0;
    register int t1;
    register int t10;
    register int t37;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t0 = *(signed char *)0xC309861;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t37 = 0x0;
                if (t0 != 3) {
                } else {
                    t1 = FUN_0c01f6f8();
                    t37 = 0x0;
                    if (t1 != 0) {
                        t37 = 0x1;
                    }
                }
            } else {
                t10 = *(short *)0xC30540C;
                *(unsigned short *)0xC30540C = (t10 - 1);
                if ((int)(short)(t10 - 1) < 0) {
                    *(unsigned char *)0xC309861 = ((*(signed char *)0xC309861) + 0x1);
                }
                t37 = 0x0;
            }
        } else {
            *(unsigned char *)0xC309861 = ((*(signed char *)0xC309861) + 0x1);
            *(unsigned short *)0xC30540C = 0x3C;
            FUN_0c186380((*(int *)0xC309994));
            t37 = 0x0;
        }
    } else {
        *(unsigned char *)0xC309861 = ((*(signed char *)0xC309861) + 0x1);
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x7F;
        *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x3;
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x1;
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
        t37 = 0x0;
    }
    return t37;
}

int FUN_0c029d84(int a4, int a5, int a6, int a7)
{
    int stk[33];
    register int t0;
    register int t8;
    register int t17;

    t0 = *(signed char *)0xC30542C;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    (((struct o20_uchar *)0xC30540C)->v) = ((*(signed char *)0xC30542C) + 0x1);
                    FUN_0c01fce0(0xC3054C5, 0xC30540C, a6, a7);
                    return 0x0;
                }
                if ((*(signed char *)0xC3054C5) != 0) {
                    t8 = FUN_0c01f6f8();
                    if (t8 != 0) {
                        (((struct o20_uchar *)0xC30540C)->v) = ((*(signed char *)0xC30542C) + 0x1);
                    }
                } else {
                    (((struct o20_uchar *)0xC30540C)->v) = ((*(signed char *)0xC30542C) + 0x1);
                }
                return 0x0;
            }
            t17 = (((struct o0_short *)0xC30540C)->v);
            (((struct o0_ushort *)0xC30540C)->v) = (t17 - 1);
            if ((int)(short)(t17 - 1) < 0) {
                (((struct o20_uchar *)0xC30540C)->v) = ((*(signed char *)0xC30542C) + 0x1);
                *(unsigned char *)0xC30985B = 0x0;
            }
            return 0x0;
        }
        (((struct o20_uchar *)0xC30540C)->v) = ((*(signed char *)0xC30542C) + 0x1);
        (((struct o0_ushort *)0xC30540C)->v) = 0x3C;
        if ((*(signed char *)0xC3054C5) != 0) {
            FUN_0c186380((*(int *)0xC309994));
        }
        return 0x0;
    }
    (((struct o20_uchar *)0xC30540C)->v) = ((*(signed char *)0xC30542C) + 0x1);
    if ((*(signed char *)0xC3054C5) != 0) {
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x7F;
        *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x3;
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x1;
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
    }
    return 0x0;
}

int FUN_0c029e80(void)
{
    int stk[101];
    register int t1;
    register int t11;
    register int t32;
    int t14;

    if ((*(signed char *)0xC30985B) == 0) {
        t1 = FUN_0c022050();
        if (t1 != 0) {
            FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
            FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
        }
        (((struct o2_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985B) + 0x1);
        (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x70;
        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
        *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x7;
        t32 = (FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0)))));
    } else {
        t11 = FUN_0c022050();
        t32 = t11;
        if (t11 != 0) {
            FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
            if (((*(signed char *)(((int)stk + 0))) == 96) && (t14 = *(signed char *)(((int)stk + 4)), t14 == 7)) {
                FUN_0c1864e0((*(int *)0xC309994), (((int)stk + 0) + 0xC), 0x1);
                (((struct o0_uchar *)0xC309859)->v) = 0xD;
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
                (((struct o1_uchar *)0xC309859)->v) = 0x0;
                (((struct oA_uchar *)0xC305414)->v) = 0x0;
                (((struct o9_uchar *)0xC305414)->v) = 0x0;
                (((struct o1_uchar *)0xC305414)->v) = 0x0;
                (((struct o0_uchar *)0xC305414)->v) = 0x0;
                *(unsigned short *)0xC30A51C = 0x0;
                t32 = 0x0;
            } else {
                t32 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t32;
}

int FUN_0c029f52(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC305401) << 2) + 0xC20E5C0));
    return ((int (*)(void))(t1))();
}

int FUN_0c029f60(void)
{
    if ((*(signed char *)0xC30985A) == 0) {
        return FUN_0c0298c8();
    }
    return FUN_0c029f52();
}
