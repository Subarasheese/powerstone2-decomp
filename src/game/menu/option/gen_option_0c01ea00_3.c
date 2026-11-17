/* Straight-line functions with calls and guards (cell 0C01EA00, the network connection states): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int FUN_0c010448(void);
int FUN_0c0159c4(int, int, int, int, int);
int FUN_0c015b58(void);
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cd2c(int);
int FUN_0c01e9e4(void);
int FUN_0c01ea2c(void);
int FUN_0c01f07c(int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c183074(int);
int FUN_0c184a90(int, int, int, int, int, int);
int FUN_0c184b4c(void);
int FUN_0c184c0c(int);
int FUN_0c01ee00(void);
void FUN_0c01ed4a(void);
int FUN_0c01f00c(void);
int FUN_0c01ecf4(void);
void FUN_0c01efc4(int a4);
int FUN_0c01ea38(void);

int FUN_0c01ee00(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC30985B;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 == 6) {
                                t1 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t1 - 1);
                                if ((int)(short)(t1 - 1) <= 0) {
                                    (((struct o3_uchar *)0xC309858)->v) = ((*(signed char *)0xC30985B) + 0x1);
                                    *(unsigned short *)0xC30EF6C = 0x14;
                                    FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
                                    (((struct o3_uchar *)0xC309858)->v) = ((*(signed char *)0xC30985B) + 0x1);
                                    t1 = *(short *)0xC30EF6C;
                                    *(unsigned short *)0xC30EF6C = (t1 - 1);
                                    if ((int)(short)(t1 - 1) <= 0) {
                                        (((struct o3_uchar *)0xC309858)->v) = 0x0;
                                        (((struct o0_uchar *)0xC309858)->v) = 0x0;
                                        (((struct o1_uchar *)0xC309858)->v) = 0x0;
                                        (((struct o2_uchar *)0xC309858)->v) = 0x0;
                                        (((struct o3_uchar *)0xC309858)->v) = 0x0;
                                        return FUN_0c010448();
                                    }
                                    return (short)(t1 - 1);
                                }
                                return t0;
                            }
                            if (t0 == 7) {
                                *(unsigned short *)0xC30EF6C = 0x14;
                                FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
                                (((struct o3_uchar *)0xC309858)->v) = ((*(signed char *)0xC30985B) + 0x1);
                                t1 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t1 - 1);
                                if ((int)(short)(t1 - 1) <= 0) {
                                    (((struct o3_uchar *)0xC309858)->v) = 0x0;
                                    (((struct o0_uchar *)0xC309858)->v) = 0x0;
                                    (((struct o1_uchar *)0xC309858)->v) = 0x0;
                                    (((struct o2_uchar *)0xC309858)->v) = 0x0;
                                    (((struct o3_uchar *)0xC309858)->v) = 0x0;
                                    return FUN_0c010448();
                                }
                                return (short)(t1 - 1);
                            }
                            if (t0 == 8) {
                                t1 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t1 - 1);
                                if ((int)(short)(t1 - 1) <= 0) {
                                    (((struct o3_uchar *)0xC309858)->v) = 0x0;
                                    (((struct o0_uchar *)0xC309858)->v) = 0x0;
                                    (((struct o1_uchar *)0xC309858)->v) = 0x0;
                                    (((struct o2_uchar *)0xC309858)->v) = 0x0;
                                    (((struct o3_uchar *)0xC309858)->v) = 0x0;
                                    return FUN_0c010448();
                                }
                                return (short)(t1 - 1);
                            }
                            return t0;
                        }
                        t1 = *(short *)0xC30EF6C;
                        *(unsigned short *)0xC30EF6C = (t1 - 1);
                        t2 = t0;
                        if ((int)(short)(t1 - 1) <= 0) {
                            FUN_0c0159c4(0x104, 0x114, 0xC30997F, 0x10, 0x82);
                            t1 = 0xC30997F;
                            for (;;) {
                                if ((unsigned int)t1 >= (unsigned int)0xC309991) {
                                    break;
                                }
                                *(unsigned char *)((t1 + 0x0)) = 0x0;
                                t1 = (t1 + 0x1);
                            }
                            FUN_0c018e74(0x37);
                            *(unsigned short *)0xC30EF6C = 0x1E;
                            (((struct o2_uchar *)0xC309858)->v) = 0x2;
                            (((struct o3_uchar *)0xC309858)->v) = 0x0;
                            t2 = 0x1E;
                        }
                        return t2;
                    }
                    t1 = *(short *)0xC30EF6C;
                    *(unsigned short *)0xC30EF6C = (t1 - 1);
                    t2 = t0;
                    if ((int)(short)(t1 - 1) <= 0) {
                        *(unsigned short *)0xC30EF6C = 0xC;
                        t1 = FUN_0c018fd2(0x3B);
                        (((struct o3_uchar *)0xC309858)->v) = ((*(signed char *)0xC30985B) + 0x1);
                        t2 = t1;
                    }
                    return t2;
                }
            } else {
                t1 = *(short *)0xC30EF6C;
                *(unsigned short *)0xC30EF6C = (t1 - 1);
                if ((int)(short)(t1 - 1) > 0) {
                    return t0;
                }
                (((struct o3_uchar *)0xC309858)->v) = ((*(signed char *)0xC30985B) + 0x1);
            }
            FUN_0c01c714(0xC3051EC, 0x1, 0x2);
            t1 = FUN_0c01cd2c(0x40);
            if ((short)t1 != 0) {
                t1 = FUN_0c05aab6(0x0, 0x4);
                (((struct o3_uchar *)0xC309858)->v) = 0x7;
                return t1;
            }
            t1 = FUN_0c01cd2c(0x101);
            if ((short)t1 == 0) {
                return (short)t1;
            }
            *(unsigned short *)0xC30EF6C = 0x10;
            if ((*(signed char *)0xC3051EC) == 0) {
                (((struct o3_uchar *)0xC309858)->v) = 0x6;
            } else {
                (((struct o3_uchar *)0xC309858)->v) = 0x4;
            }
            return FUN_0c05aab6(0x0, 0x3);
        }
        FUN_0c018e9c(0x3B, 0xC3051EC);
        *(unsigned short *)0xC30EF6C = 0x20;
        (((struct o3_uchar *)0xC309858)->v) = ((*(signed char *)0xC30985B) + 0x1);
        return 0x20;
    }
    t1 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t1 - 1);
    t2 = t0;
    if ((int)(short)(t1 - 1) > 0) {
    } else {
        (((struct o3_uchar *)0xC309858)->v) = ((*(signed char *)0xC30985B) + 0x1);
        *(unsigned char *)0xC3051EC = 0x0;
        FUN_0c018e9c(0x3B, 0xC3051EC);
        *(unsigned short *)0xC30EF6C = 0x20;
        (((struct o3_uchar *)0xC309858)->v) = ((*(signed char *)0xC30985B) + 0x1);
        t2 = 0x20;
    }
    return t2;
}

void FUN_0c01ed4a(void)
{
    register int t0;

    if ((*(short *)0xC30EF6C) != 0) {
        *(unsigned short *)0xC30EF6C = ((*(short *)0xC30EF6C) - 1);
        return;
    }
    t0 = FUN_0c015b58();
    if (t0 == 1) {
        if ((*(signed char *)0xC30997F) != 0) {
            (((struct o0_uchar *)0xC30985A)->v) = 0x4;
            *(unsigned short *)0xC30EF6C = 0x0;
            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
            FUN_0c05aab6(0x0, 0x3);
    return;
        }
        (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
        (((struct o1_uchar *)0xC30985A)->v) = 0x0;
        *(unsigned short *)0xC30EF6C = 0x14;
        FUN_0c018fd2(0x37);
        *(unsigned short *)0xC30EF6C = 0xC;
        return;
    }
    t0 = FUN_0c015b58();
    if ((int)t0 < 0) {
        (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
        (((struct o1_uchar *)0xC30985A)->v) = 0x0;
        *(unsigned short *)0xC30EF6C = 0x14;
        FUN_0c018fd2(0x37);
        *(unsigned short *)0xC30EF6C = 0xC;
    }
}

int FUN_0c01f00c(void)
{
    *(unsigned int *)0xC83C6C0 = 0x1;
    FUN_0c184b4c();
    FUN_0c01ea2c();
    FUN_0c184a90(0x0, 0x0, 0x0, 0x0, 0x0, 0x0);
    *(unsigned int *)0xC305068 = (short)(FUN_0c184c0c(0xC305198));
    (((struct o0_uchar *)0xC309859)->v) = ((*(signed char *)0xC309859) + 0x1);
    (((struct o1_uchar *)0xC309859)->v) = 0x0;
    (((struct o2_uchar *)0xC309859)->v) = 0x0;
    *(unsigned short *)0xC30540C = 0x64;
    FUN_0c01e9e4();
    FUN_0c018e74(0x18);
    FUN_0c01cb7c();
    *(unsigned int *)0xC30B6F8 = 0x0;
    *(unsigned short *)0xC30EF6C = 0x14;
    return FUN_0c0573c0(0xFF000000, 0x0, 0x14);
}

int FUN_0c01ecf4(void)
{
    register int t6;

    if ((*(signed char *)0xC30997F) == 0) {
        FUN_0c018e74(0x37);
        FUN_0c01cb7c();
        *(unsigned short *)0xC30EF6C = 0x14;
        FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        t6 = FUN_0c0159c4(0x104, 0x114, 0xC30997F, 0x10, 0x82);
        (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
        (((struct o1_uchar *)0xC30985A)->v) = 0x0;
    } else {
        (((struct o0_uchar *)0xC30985A)->v) = 0x5;
        t6 = 0x5;
    }
    return t6;
}

void FUN_0c01efc4(int a4)
{
    register int t0;

    t0 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x14) {
        *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    }
}

int FUN_0c01ea38(void)
{
    FUN_0c183074(0xC01EA00);
    (((struct o0_uchar *)0xC309859)->v) = ((*(signed char *)0xC309859) + 0x1);
    (((struct o2_uchar *)0xC309859)->v) = 0x0;
    (((struct o1_uchar *)0xC309859)->v) = 0x0;
    *(unsigned char *)0xC3054C5 = 0x1;
    return FUN_0c01f07c(0xC309859);
}
