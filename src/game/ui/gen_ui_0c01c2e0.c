/* game/ui: functions 0C01C2E0-0C01C5A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int FUN_0c018e9c(int, int);
int FUN_0c01a9c0(void);
int FUN_0c01c714(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c01cd2c(int);
int FUN_0c01e9e4(void);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c05a292(int, int, int, int, int);
int nlLocate(int, int);
int strcpy(int, int);
int FUN_0c01c2e0(int a4);
int FUN_0c01c38a(void);
int FUN_0c01c392(void);

int FUN_0c01c2e0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC309BE4;
    t1 = a4;
    if ((int)(signed char)a4 > (int)0x24) {
        t1 = 0x24;
    }
    t2 = t0;
    if ((int)(signed char)t0 > (int)0x24) {
        t2 = 0x24;
    }
    if ((signed char)t1 != (signed char)t2) {
        FUN_0c05a292(0xC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        FUN_0c01cb7c();
        t0 = FUN_0c01cc56(0x8, 0xC01C004);
        (((struct o20_ushort *)(t0))->v) = (signed char)t1;
        (((struct o22_ushort *)(t0))->v) = (signed char)t2;
        *(unsigned char *)(((FUN_0c01cc56((*(short *)(((((signed char)t1 << 2) + 0xC20E2B4) + 0x0))), 0xC01BBA8)) + 0x2)) = 0x0;
        t0 = *(short *)(((((signed char)t1 << 2) + 0xC20E2B4) + 0x2));
        t2 = t0;
        if (t0 != 0) {
            t0 = FUN_0c01cc56((*(short *)((((((signed char)t1 << 2) + 0xC20E2B4) + 0x2) + 0x0))), 0xC01BBA8);
            t2 = 0x2;
            if ((*(short *)((((((signed char)t1 << 2) + 0xC20E2B4) + 0x2) + 0x0))) == 41) {
                t2 = 0x1;
            }
            *(unsigned char *)((t0 + 0x2)) = t2;
        }
        *(unsigned char *)0xC305046 = 0x1;
        t0 = t2;
    }
    return t0;
}

int FUN_0c01c38a(void)
{
    *(unsigned char *)0xC305046 = 0x2;
    return 0xC305046;
}

int FUN_0c01c392(void)
{
    int stk[7];
    register int t1;
    register int t34;
    register int t3;
    register int t7;
    register int t25;

    nlLocate(0x3, 0x3);
    t1 = *(signed char *)0xC30EF6B;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            t34 = (unsigned char)t1;
            if ((unsigned char)t1 != 2) {
            } else {
                FUN_0c01c714(0xC30EF6A, 0x1, 0x3);
                t3 = FUN_0c01cd2c(0x80);
                if ((short)t3 != 0) {
                    FUN_0c018e9c(0x20, 0xC30EF6A);
                }
                t7 = FUN_0c01cd2c(0x1000);
                t34 = (short)t7;
                if ((short)t7 != 0) {
                    (((struct o0_uchar *)0xC30541F)->v) = ((*(signed char *)0xC30541F) + 0x1);
                    (((struct o0_uchar *)0xC30541F)->v) = ((*(signed char *)0xC30541F) & 0x3);
                    if ((*(signed char *)0xC30541F) == 3) {
                        *(unsigned short *)0xC30EF76 = ((*(short *)0xC30EF76) + 0x1);
                        *(unsigned short *)0xC30EF76 = ((*(short *)0xC30EF76) & 0x3);
                        (((struct o1_uchar *)0xC30541F)->v) = ((*(short *)0xC30EF76) & 0x1);
                        *(unsigned char *)0xC309E07 = (((*(short *)0xC30EF76) & 0x2) >> 1);
                    }
                    *(unsigned short *)0xC30EF7A = ((*(short *)0xC30EF7A) + 0x1);
                    *(unsigned short *)0xC30EF7A = ((*(short *)0xC30EF7A) & 0x1F);
                    *(unsigned char *)0xC542239 = 0xC;
                    if ((int)(*(short *)0xC30EF7A) < (int)0x10) {
                        *(unsigned char *)0xC309993 = 0x0;
                    } else {
                        *(unsigned char *)0xC309993 = 0x1;
                    }
                    if ((*(short *)0xC30EF7A) == 0) {
                        t25 = *(signed char *)0xC54235E;
                        *(unsigned char *)0xC54235E = (t25 + 0x1);
                        if ((signed char)(t25 + 0x1) == 3) {
                            *(unsigned char *)0xC54235E = 0x0;
                        }
                    }
                    FUN_0c01e9e4();
                    (((struct o0_uchar *)0xC30EF6B)->v) = 0x1;
                    t34 = 0x1;
                }
            }
            return t34;
        }
        (((struct o0_uchar *)0xC30EF6B)->v) = ((*(signed char *)0xC30EF6B) + 0x1);
        return FUN_0c01a9c0();
    }
    (((struct o0_uchar *)0xC30EF6B)->v) = ((*(signed char *)0xC30EF6B) + 0x1);
    FUN_0c036de8(0x20, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    *(unsigned char *)0xC309BE4 = 0x24;
    (((struct o0_uchar *)0xC30A3E6)->v) = 0x11;
    strcpy(0xC3099A6, 0xC1A7688);
    strcpy(0xC30A404, 0xC1A7694);
    strcpy(0xC30A354, 0xC1A769C);
    strcpy(0xC30A366, 0xC1A76A8);
    (((struct o0_ushort *)0xC309C6C)->v) = 0xA;
    (((struct o2_ushort *)0xC309C6C)->v) = 0x5;
    (((struct o2_ushort *)0xC30A3E6)->v) = 0x8;
    (((struct o4_ushort *)0xC30A3E6)->v) = 0x5;
    *(unsigned short *)0xC30EF7A = 0x0;
    (((struct o0_uchar *)0xC30541F)->v) = 0x2;
    *(unsigned char *)0xC309E07 = 0x0;
    (((struct o1_uchar *)0xC30541F)->v) = 0x0;
    *(unsigned char *)0xC54235E = 0x1;
    *(unsigned char *)0xC542239 = 0xC;
    return 0x166;
}
