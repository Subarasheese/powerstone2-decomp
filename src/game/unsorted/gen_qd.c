/* Straight-line functions with calls and guards (batch gen_qd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
int FUN_0c05a080(int, int);
int FUN_0c104cc8(int);
int FUN_0c10de64(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c11e20c(int);
int FUN_0c10e96e(int a4);

int FUN_0c10e96e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
    }
    if ((t0 == 0) || (t0 == 1)) {
        if ((*(int *)((0xC473984 + ((*(int *)0xC473978) << 2)))) != 0xBA) {
            (((struct o16_uchar *)(a4))->v) = 0x2;
        } else {
            (((struct o16_uchar *)(a4))->v) = 0x3;
        }
        (((struct o17_uchar *)(a4))->v) = 0x0;
        return 0x17;
    } else {
        if (t0 != 2) {
            if (t0 == 3) {
                t1 = *(signed char *)((a4 + 0x17));
                if (t1 != 0) {
                    if (t1 != 1) {
                        t2 = t1;
                        if (t1 != 2) {
                        } else {
                            t1 = FUN_0c104cc8(0x3FCF);
                            t3 = t1;
                            if (t1 != 0) {
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                (((struct o17_uchar *)(a4))->v) = 0x0;
                                t3 = 0x17;
                            }
                            t2 = t3;
                        }
                        return t2;
                    }
                    t1 = FUN_0c117d54();
                    if ((int)t1 < 0) {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        return FUN_0c117e76();
                    }
                    return t1;
                }
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                FUN_0c117944(0xEC);
                return (FUN_0c05a080(0x19, 0x0));
            }
            if (t0 == 4) {
                return FUN_0c10de64(a4);
            }
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x17));
        t1 = 0;
        if (t0 == 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            (((struct o18_uchar *)(a4))->v) = 0x0;
        }
        if ((t0 == 0) || (t0 == 1)) {
            t2 = *(signed char *)((a4 + 0x18));
            switch (t2) {
            case 0:
                (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                FUN_0c117944(0xEB);
                return (FUN_0c05a080(0x18, 0x0));
            case 1:
                t2 = FUN_0c117d54();
                if ((int)t2 >= 0) {
                    return t2;
                }
                break;
            case 2:
                t1 = 2;
                break;
            default:
                return t2;
            }
        } else {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                t0 = *(signed char *)((a4 + 0x18));
                if (t0 != 0) {
                    if (t0 != 1) {
                        t2 = t0;
                        if (t0 != 2) {
                        } else {
                            t0 = FUN_0c104cc8(0x3FCF);
                            t3 = t0;
                            if (t0 != 0) {
                                (((struct o16_uchar *)(a4))->v) = 0x4;
                                (((struct o17_uchar *)(a4))->v) = 0x0;
                                t3 = 0x17;
                            }
                            t2 = t3;
                        }
                        return t2;
                    }
                    t0 = FUN_0c117d54();
                    if ((int)t0 < 0) {
                    } else {
                        return t0;
                    }
                } else {
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                    FUN_0c117944(0xEE, ((*(int *)((((*(int *)((0xC473984 + ((*(int *)0xC473978) << 2)))) << 2) + 0xC29DDD0)))));
                    FUN_0c05a080(0x1E, 0x0);
                    return FUN_0c11e20c((*(int *)((0xC473984 + ((*(int *)0xC473978) << 2)))));
                }
            } else {
                t0 = *(signed char *)((a4 + 0x18));
                switch (t0) {
                case 0:
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                    return (FUN_0c117944(0xED, ((*(int *)((((*(int *)((0xC473984 + ((*(int *)0xC473978) << 2)))) << 2) + 0xC29DDD0))))));
                case 1:
                    t0 = FUN_0c117d54();
                    if ((int)t0 < 0) {
                    } else {
                        return t0;
                    }
                    break;
                case 2:
                    t1 = 2;
                    break;
                default:
                    return t0;
                }
            }
        }
        if (t1) {
            t0 = FUN_0c104cc8(0x3FCF);
            t1 = t0;
            if (t0 == 0) {
            } else {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                (((struct o18_uchar *)(a4))->v) = 0x0;
                t1 = 0x18;
            }
            return t1;
        }
        (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
        return FUN_0c117e76();
    }
}
