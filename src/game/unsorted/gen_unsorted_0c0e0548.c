/* game/unsorted: functions 0C0E0548-0C0E0C6E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c073ed0(int, int, int);
int FUN_0c07d15c(int);
int FUN_0c07e420(int, int);
int FUN_0c0cff28(int, int);
int FUN_0c0e0548(int a4, int a5);
int FUN_0c0e0562(int a4);
int FUN_0c0e0b46(int a4, int a5, int a6, int a7);

int FUN_0c0e0548(int a4, int a5)
{
    FUN_0c0cff28(a4, a5);
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c0e0562(int a4)
{
    register int t9;
    register int t2;

    t9 = 0x0;
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
        t2 = FUN_0c07d15c(a4);
        t9 = 0x0;
        if (t2 != 0) {
            *(unsigned char *)((a4 + 0x1)) = (t2 - 1);
            FUN_0c073ed0(a4, (t2 - 1), ((*(int *)(((((*(signed char *)0xC542237) + 0x10) << 2) + 0xC25ACBC))) + 0xC8));
            t9 = 0x1;
        }
    }
    return t9;
}

int FUN_0c0e0b46(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        FUN_0c0e0548(a4, 0x6);
        FUN_0c07e420(a4, 0x7);
    }
    t0 = FUN_0c042fe0();
    if (t0 != 0) {
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 != 3) {
                        if (t1 != 4) {
                            if (t1 != 5) {
                                if (t1 != 6) {
                                    return t1;
                                }
                                return ((int (*)(int, int, int, int))(0xC0E08E0))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0E09EC))(a4, a5, a6, a7);
                        }
                        return t1;
                    }
                    return ((int (*)(int, int, int, int))(0xC0E07DC))(a4, a5, a6, a7);
                }
                return t1;
            }
            return ((int (*)(int, int, int, int))(0xC0E05B6))(a4, a5, a6, a7);
        }
        t1 = *(signed char *)((a4 + 0x16));
        if (t1 != 0) {
            if (t1 != 1) {
                return t1;
            }
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o131_uchar *)(a4))->v) = 0x0;
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        }
        if ((*(signed char *)((0x15 + (*(int *)0xC540DB0)))) == 7) {
            FUN_0c0e0548(a4, 0x5);
            (((struct o131_uchar *)(a4))->v) = 0x0;
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            return 0x12A;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            FUN_0c0e0548(a4, 0x3);
            return thunk_FUN_0c05abb2(0x56, (a4 + 0x28));
        }
        return (short)(t1 - 1);
    }
    return t0;
}
