/* game/network: functions 0C024208-0C0243F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
int FUN_0c013fe8(void);
int FUN_0c0185b4(void);
int FUN_0c018e74(int);
int FUN_0c01cb7c(void);
int FUN_0c01e9e4(void);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c186740(int, int, int);
int FUN_0c024208(void);
int FUN_0c024396(void);
int FUN_0c0243a2(void);

int FUN_0c024208(void)
{
    int stk[36];
    register int t0;
    register int t6;
    register int t15;
    register int t36;
    register int t37;
    register int t41;
    register int t60;
    register int t62;
    register int t76;

    t0 = FUN_0c022050();
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    }
    t62 = *(signed char *)0xC30985B;
    if (t62 != 0) {
        if (t62 != 1) {
            if (t62 != 2) {
                if (t62 != 3) {
                    if (t62 == 5) {
                        t6 = *(short *)0xC30EF6C;
                        *(unsigned short *)0xC30EF6C = (t6 - 1);
                        if ((int)(short)(t6 - 1) <= 0) {
                            (((struct o0_uchar *)0xC309859)->v) = 0xD;
                            (((struct o1_uchar *)0xC309859)->v) = 0x0;
                            (((struct o2_uchar *)0xC309859)->v) = 0x0;
                        }
                    }
                    t76 = t62;
                } else {
                    t15 = *(short *)0xC30EF6C;
                    *(unsigned short *)0xC30EF6C = (t15 + 0x1);
                    t76 = t62;
                    if ((int)(short)(t15 + 0x1) >= (int)0x14) {
                        FUN_0c01e9e4();
                        (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x70;
                        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
                        *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x4;
                        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x5;
                        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = ((*(signed char *)0xC30541F) + 0x1);
                        t76 = FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
                        (((struct o1_uchar *)0xC309859)->v) = 0x6;
                        (((struct o2_uchar *)0xC309859)->v) = 0x0;
                    }
                }
            } else {
                t36 = *(short *)0xC30EF6C;
                *(unsigned short *)0xC30EF6C = (t36 - 1);
                if ((int)(short)(t36 - 1) >= 0) {
                    t37 = FUN_0c021ed2();
                    if (t37 != 0) {
                        (((struct o2_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985B) + 0x1);
                        *(unsigned short *)0xC30EF6C = 0x0;
                        FUN_0c05aab6(0x0, 0x3);
                        t76 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
                    } else {
                        t41 = FUN_0c021ee2();
                        t76 = t41;
                        if (t41 != 0) {
                            (((struct o2_uchar *)0xC309859)->v) = 0x5;
                            *(unsigned short *)0xC30EF6C = 0x14;
                            FUN_0c05aab6(0x0, 0x4);
                            t76 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
                        }
                    }
                } else {
                    (((struct o2_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985B) + 0x1);
                    *(unsigned short *)0xC30EF6C = 0x0;
                    FUN_0c05aab6(0x0, 0x3);
                    t76 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
                }
            }
        } else {
            t60 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t60 + 0x1);
            if ((int)(short)(t60 + 0x1) >= (int)0x34) {
                (((struct o2_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985B) + 0x1);
                *(unsigned short *)0xC30EF6C = 0x12C;
                t62 = 0x12C;
            }
            t76 = t62;
        }
    } else {
        (((struct o2_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985B) + 0x1);
        FUN_0c018e74(0x4D);
        FUN_0c01cb7c();
        *(unsigned short *)0xC30EF6C = 0x0;
        t76 = (FUN_0c0573c0(0xFF000000, 0x0, 0x14));
    }
    return t76;
}

int FUN_0c024396(void)
{
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    return FUN_0c0185b4();
}

int FUN_0c0243a2(void)
{
    int stk[3];
    register int t4;
    register int t7;

    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    FUN_0c01e9e4();
    FUN_0c0573c0(0xFF000000, 0x0, 0x14);
    *(unsigned short *)0xC30EF6C = 0x16;
    FUN_0c013fe8();
    t4 = FUN_0c022050();
    t7 = t4;
    if (t4 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t7 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    return t7;
}
