/* game/network: functions 0C0247A0-0C024BF0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
int FUN_0c013f2e(void);
int FUN_0c014a68(void);
int FUN_0c018e74(int);
int FUN_0c018f0a(int);
int FUN_0c01cb7c(void);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02bad0(void);
int FUN_0c02bae6(void);
int FUN_0c0573cc(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int strcpy(int, int);
int FUN_0c0247a0(void);
int FUN_0c02491e(void);

int FUN_0c0247a0(void)
{
    int stk[36];
    register int t1;
    register int t6;
    register int t10;
    register int t39;
    register int t12;

    FUN_0c013f2e();
    t1 = FUN_0c022050();
    if (t1 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    }
    t6 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t6 + 0x1);
    if ((short)(t6 + 0x1) == 16) {
        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    }
    t10 = *(short *)0xC30EF6C;
    t39 = t10;
    if ((int)t10 < (int)0x24) {
    } else {
        FUN_0c01e9e4();
        *(unsigned short *)0xC30EF6C = 0x0;
        t12 = *(signed char *)0xC305415;
        if (t12 != 0) {
            if (t12 != 1) {
                if (t12 != 2) {
                    t39 = t12;
                    if (t12 != 3) {
                    } else {
                        (((struct o0_uchar *)0xC309859)->v) = 0x7;
                        (((struct o1_uchar *)0xC309859)->v) = 0x0;
                        (((struct o2_uchar *)0xC309859)->v) = 0x0;
                        *(unsigned char *)0xC305416 = 0x0;
                        *(unsigned char *)0xC30AF9A = 0x0;
                        t39 = (FUN_0c014a68());
                    }
                } else {
                    (((struct o0_uchar *)0xC309859)->v) = 0x6;
                    (((struct o1_uchar *)0xC309859)->v) = 0x0;
                    (((struct o2_uchar *)0xC309859)->v) = 0x0;
                    *(unsigned char *)0xC305416 = 0x0;
                    FUN_0c018e74(0xC);
                    FUN_0c018f0a(0xC305416);
                    t39 = (FUN_0c01cb7c());
                }
            } else {
                (((struct o0_uchar *)0xC309859)->v) = 0x5;
                (((struct o1_uchar *)0xC309859)->v) = 0x0;
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
                *(unsigned char *)0xC305416 = 0x0;
                FUN_0c018e74(0xC);
                FUN_0c018f0a(0xC305416);
                t39 = (FUN_0c01cb7c());
            }
        } else {
            (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x70;
            *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
            *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x4;
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x1;
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = 0x1;
            FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
            (((struct o0_uchar *)0xC309859)->v) = 0x2;
            (((struct o1_uchar *)0xC309859)->v) = 0x0;
            (((struct o2_uchar *)0xC309859)->v) = 0x0;
            (((struct o1_uchar *)0xC30A347)->v) = 0x1;
            (((struct o2_uchar *)0xC30A347)->v) = 0x0;
            (((struct o0_uchar *)0xC30A347)->v) = 0x0;
            t39 = (FUN_0c02bad0());
        }
    }
    return t39;
}

int FUN_0c02491e(void)
{
    int stk[37];
    register int t0;
    register int t56;
    register int t2;
    register int t3;
    register int t11;
    int t25;

    t0 = FUN_0c022050();
    t56 = t0;
    if (t0 == 0) {
    } else {
        FUN_0c0220c4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        t2 = *(signed char *)(((int)stk + 8));
        t3 = *(int *)0xC309994;
        if (t2 != 96) {
            t56 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
        } else {
            if ((*(signed char *)(((int)stk + 4))) == 1) {
                FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                t11 = FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
                if ((*(signed char *)(((int)stk + 0))) != 0) {
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x70;
                    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                    *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x4;
                    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x4;
                    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x3)) = 0x1;
                    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                    (((struct o1_uchar *)0xC30A347)->v) = 0x1;
                    (((struct o2_uchar *)0xC30A347)->v) = 0x0;
                    (((struct o0_uchar *)0xC30A347)->v) = 0x0;
                    (((struct o1_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985A) + 0x1);
                    FUN_0c02bae6();
                    t56 = (strcpy(0xC3053B8, 0xC1A8BF8));
                } else {
                    (((struct o0_uchar *)0xC309859)->v) = 0x1;
                    (((struct o1_uchar *)0xC309859)->v) = 0x0;
                    *(unsigned char *)0xC305415 = 0x0;
                    t56 = t11;
                }
            } else {
                if ((t2 == 96) && (t25 = *(signed char *)(((int)stk + 4)), t25 == 2)) {
                    FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                    t56 = FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
                    if ((*(signed char *)(((int)stk + 0))) != 0) {
                        (((struct o1_uchar *)0xC309859)->v) = 0x9;
                        *(unsigned char *)0xC305415 = 0x0;
                        *(unsigned short *)0xC30EF6C = 0x0;
                    } else {
                        (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x70;
                        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                        *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x4;
                        *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x4;
                        *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x3)) = 0x1;
                        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                        (((struct o1_uchar *)0xC30A347)->v) = 0x1;
                        (((struct o2_uchar *)0xC30A347)->v) = 0x0;
                        (((struct o0_uchar *)0xC30A347)->v) = 0x0;
                        (((struct o1_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985A) + 0x1);
                        FUN_0c02bad0();
                        FUN_0c02bae6();
                        t56 = (strcpy(0xC3053B8, 0xC1A8BF8));
                    }
                } else {
                    t56 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
                }
            }
        }
    }
    return t56;
}
