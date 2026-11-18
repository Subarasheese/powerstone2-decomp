/* Straight-line functions with calls and guards (batch gen_ca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c05f22c(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c104e6a(int, int);
int FUN_0c106744(int);
int FUN_0c1085a6(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c1186d4(int);
int FUN_0c1187ba(void);
int FUN_0c106dee(int a4, int a5, int a6, int a7);

int FUN_0c106dee(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 == 5) {
                            t1 = *(signed char *)((a4 + 0x16));
                            if (t1 != 0) {
                                if (t1 != 1) {
                                    if (t1 != 2) {
                                        return t1;
                                    }
                                    t1 = FUN_0c05f22c(0x3FCF);
                                    if (t1 != 0) {
                                        return ((int (*)(int, int, int, int))(0xC10676E))(a4, a5, a6, a7);
                                    }
                                    return t1;
                                }
                                t1 = FUN_0c117d54();
                                if ((int)t1 < 0) {
                                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                    return FUN_0c117e76();
                                }
                                return t1;
                            }
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            return (FUN_0c117944(0x2E));
                        }
                        return t0;
                    }
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                }
                t0 = *(signed char *)((a4 + 0x16));
                if (t0 != 0) {
                    if (t0 != 1) {
                        return t0;
                    }
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    FUN_0c1186d4((*(short *)((a4 + 0x1E))));
                    *(unsigned char *)(((*(int *)0xC474C00) + 0x2)) = (*(short *)((a4 + 0x1E)));
                }
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) > (int)0xA) {
                    (((struct o14_uchar *)((*(int *)0xC474C00)))->v) = 0x63;
                    *(unsigned int *)0xC474C00 = 0x0;
                    t0 = *(short *)((a4 + 0x1E));
                    if (t0 != 0) {
                        if (t0 != 1) {
                            return t0;
                        }
                        if ((*(short *)((a4 + 0x1C))) != 0) {
                            FUN_0c1085a6(0x2);
                            return ((int (*)(int, int, int, int))(0xC106752))(a4, a5, a6, a7);
                        }
                        FUN_0c1085a6(0x1);
                        return FUN_0c106744(a4);
                    }
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    return 0x16;
                }
                return 0x20;
            }
            *(unsigned short *)((a4 + 0x1E)) = (FUN_0c104e6a((*(short *)((a4 + 0x1E))), 0x1));
            *(unsigned char *)(((*(int *)0xC474C00) + 0x2)) = (*(short *)((a4 + 0x1E)));
            t0 = FUN_0c104d70();
            if (t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            } else {
                t1 = FUN_0c104db8();
                t0 = t1;
                if (t1 == 0) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = 0x1;
                    t0 = 0x1;
                }
            }
            return t0;
        }
        t0 = FUN_0c117d54();
        t1 = t0;
        if ((int)t0 >= 0) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned int *)0xC474C00 = (FUN_0c1187ba());
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned char *)(((*(int *)0xC474C00) + 0x2)) = t0;
            t1 = t0;
        }
        return t1;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return (FUN_0c117944(0x2D));
}
