/* game/unsorted: functions 0C013B9C-0C013EE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c0159c4(int, int, int, int, int);
int FUN_0c015b58(void);
int FUN_0c01c62a(int);
int FUN_0c01ca2a(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c01ccba(void);
int FUN_0c01ccda(void);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c187ce8(int, int, int, int, int);
int syRtcGetDate(int);
int FUN_0c013b9c(int a4);

int FUN_0c013b9c(int a4)
{
    int stk[13];
    register int t16;
    register int t23;
    register int t28;
    register int t36;
    register int t41;
    register int t42;
    register int t44;
    register int t45;
    register int t58;
    register int t72;
    register int t80;
    register int t84;
    register int t116;
    register int t119;
    register int t120;

    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)0xC304B24 = a4;
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        syRtcGetDate(0xC304606);
    }
    FUN_0c02b502(0x7);
    *(int *)((int)stk + 12) = (unsigned char)(*(signed char *)0xC304609);
    *(int *)((int)stk + 8) = (unsigned char)(*(signed char *)0xC304608);
    *(int *)((int)stk + 4) = (unsigned short)(*(short *)0xC304606);
    *(int *)((int)stk + 0) = 0xC1A5D40;
    FUN_0c187cac((((int)stk + 16) + 0x4), 0x0, 0x0, 0x0, 0xC1A5D40);
    FUN_0c02b3ba((((int)stk + 16) + 0x4), 220.0f, 96.0f, 638.0f);
    FUN_0c02b502(0x0);
    t16 = 0x5F5E0FF;
    if ((int)((((struct o4_int *)0xC309BD4)->v)) > (int)0x5F5E0FF) {
    } else {
        t16 = ((((struct o4_int *)0xC309BD4)->v));
    }
    *(int *)((int)stk + 12) = (t16);
    *(int *)((int)stk + 8) = 0xC1A5D54;
    FUN_0c187cac((((int)stk + 16) + 0x4), 0x0, 0x0, 0x0, 0xC1A5D54);
    FUN_0c02b3ba((((int)stk + 16) + 0x4), 270.0f, 183.0f, 638.0f);
    t23 = 0x0;
    if ((int)((((struct o0_int *)0xC309BD4)->v)) > (int)((((struct o8_int *)0xC309BD4)->v))) {
        t23 = 0x9;
    }
    FUN_0c02b502(t23);
    t28 = 0x5F5E0FF;
    if ((int)((((struct o0_int *)0xC309BD4)->v)) > (int)0x5F5E0FF) {
    } else {
        t28 = ((((struct o0_int *)0xC309BD4)->v));
    }
    *(int *)((int)stk + 12) = (t28);
    *(int *)((int)stk + 8) = 0xC1A5D54;
    FUN_0c187cac((((int)stk + 16) + 0x4), 0x0, 0x0, 0x0, 0xC1A5D54);
    FUN_0c02b3ba((((int)stk + 16) + 0x4), 270.0f, 268.0f, 638.0f);
    FUN_0c02b502(0x0);
    t36 = 0x5F5E0FF;
    if ((int)((((struct o8_int *)0xC309BD4)->v)) > (int)0x5F5E0FF) {
    } else {
        t36 = ((((struct o8_int *)0xC309BD4)->v));
    }
    *(int *)((int)stk + 12) = (t36);
    *(int *)((int)stk + 8) = 0xC1A5D5C;
    FUN_0c187cac((((int)stk + 16) + 0x4), 0x0, 0x0, 0x0, 0xC1A5D5C);
    FUN_0c02b3ba((((int)stk + 16) + 0x4), 220.0f, 353.0f, 638.0f);
    t41 = *(int *)0xC304B24;
    t42 = *(signed char *)((t41 + 0x0));
    if ((unsigned char)t42 != 0) {
        if ((unsigned char)t42 != 1) {
            if ((unsigned char)t42 != 2) {
                if ((unsigned char)t42 == 3) {
                    t44 = FUN_0c01c62a((*(int *)((t41 + 0x8))));
                    if ((signed char)t44 != 0) {
                        t45 = *(int *)0xC304B24;
                        *(unsigned char *)((t45 + 0x0)) = ((*(signed char *)((t45 + 0x0))) + 0x1);
                        *(unsigned char *)(((*(int *)0xC304B24) + 0x4)) = 0x14;
                        FUN_0c0573cc(0xFF000000, 0x0, (*(signed char *)(((*(int *)0xC304B24) + 0x4))));
                    }
                } else {
                    if ((unsigned char)t42 == 4) {
                        if ((*(signed char *)((t41 + 0x4))) == 0) {
                            *(unsigned int *)(((int)stk + 16)) = (*(int *)((t41 + 0xC)));
                        }
                        *(unsigned char *)((t41 + 0x4)) = ((*(signed char *)((t41 + 0x4))) - 1);
                    } else {
                        t58 = FUN_0c015b58();
                        if (t58 != 0) {
                            *(unsigned char *)(((*(int *)0xC304B24) + 0x0)) = 0x2;
                            *(int *)((int)stk + 12) = 0xC309BDC;
                            *(int *)((int)stk + 8) = 0xC1A5D6C;
                            FUN_0c187ce8(0xC3045FD, 0x0, 0x0, 0x0, 0xC1A5D6C);
                            if ((int)((((struct o8_int *)0xC309BD4)->v)) > (int)0x5F5E0FF) {
                                (((struct o8_uint *)0xC309BD4)->v) = 0x5F5E0FF;
                            }
                            FUN_0c05aab6(0x0, 0x3);
                        }
                    }
                }
            } else {
                t72 = FUN_0c01ccda();
                if ((short)t72 != 0) {
                    *(unsigned char *)(((*(int *)0xC304B24) + 0x0)) = 0x4;
                    *(unsigned int *)(((*(int *)0xC304B24) + 0xC)) = 0x2;
                    *(unsigned char *)(((*(int *)0xC304B24) + 0x4)) = 0x14;
                    FUN_0c0573cc(0xFF000000, 0x0, (*(signed char *)(((*(int *)0xC304B24) + 0x4))));
                    FUN_0c05aab6(0x0, 0x4);
                } else {
                    t80 = FUN_0c01ccba();
                    if ((short)t80 != 0) {
                        FUN_0c05aab6(0x0, 0x3);
                        if ((*(signed char *)(((*(int *)0xC304B24) + 0x1))) != 0) {
                            t84 = *(int *)0xC304B24;
                            *(unsigned char *)((t84 + 0x0)) = ((*(signed char *)((t84 + 0x0))) + 0x1);
                            *(unsigned int *)(((*(int *)0xC304B24) + 0xC)) = 0x1;
                            (((struct o1B_uchar *)((*(int *)(((*(int *)0xC304B24) + 0x8)))))->v) = 0x0;
                            (((struct o22_ushort *)((*(int *)(((*(int *)0xC304B24) + 0x8)))))->v) = 0x0;
                        } else {
                            *(int *)((int)stk + 12) = (((((struct o8_int *)0xC309BD4)->v)));
                            *(int *)((int)stk + 8) = 0xC1A5D6C;
                            FUN_0c187cac(0xC3045FD, 0x0, 0x0, 0x0, 0xC1A5D6C);
                            *(int *)((int)stk + 4) = 0x4;
                            FUN_0c0159c4(0x0, 0x0, 0xC3045FD, 0x8, 0x4);
                            *(unsigned char *)(((*(int *)0xC304B24) + 0x0)) = 0x5;
                        }
                    }
                }
                FUN_0c01ca2a(((*(int *)0xC304B24) + 0x1), 0x1, 0x0);
            }
        } else {
            *(unsigned char *)((t41 + 0x0)) = ((*(signed char *)((t41 + 0x0))) + 0x1);
            FUN_0c01cb7c();
            FUN_0c01cc56(0x13, 0xC014040);
            t116 = FUN_0c01cc56(0x14, 0xC0140E0);
            if (t116 != 0) {
                *(unsigned char *)((t116 + 0x3)) = 0x0;
            }
            t119 = *(int *)0xC304B24;
            *(int *)((int)stk + 12) = (0x8 + t119);
            t120 = FUN_0c01cc56(0x15, 0xC0140E0);
            *(unsigned int *)(((0x8 + t119) + 0x0)) = t120;
            if (t120 != 0) {
                *(unsigned char *)((t120 + 0x3)) = 0x1;
            }
            FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        }
    } else {
        *(unsigned char *)((t41 + 0x0)) = ((*(signed char *)((t41 + 0x0))) + 0x1);
        *(unsigned int *)(((*(int *)0xC304B24) + 0xC)) = 0x0;
    }
    return (*(int *)(((int)stk + 16)));
}
