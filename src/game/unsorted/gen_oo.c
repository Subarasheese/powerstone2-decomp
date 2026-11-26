/* Straight-line functions with calls and guards (batch gen_oo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c036de8(int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c04da80(void);
int FUN_0c04db9a(void);
int FUN_0c04dd38(void);
int FUN_0c04de60(int, int);
int FUN_0c04def0(int, int);
int FUN_0c04e008(void);
int FUN_0c04e7b6(int, int);
int FUN_0c04e8cc(void);
int FUN_0c04e986(int, int);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c05af8a(void);
int FUN_0c05b0be(int, int);
int FUN_0c07c436(void);
int staffroll_create(void);
int FUN_0c04d76c(void);

int FUN_0c04d76c(void)
{
    int stk[6];
    register int t2;
    register int t7;
    register int t26;
    register int t35;
    register int t42;
    register int t55;
    register int t66;
    register int t82;
    register int t98;
    register int t134;
    register int t151;
    register int t164;
    int t1;
    register int t25;

    if (((int)(unsigned char)(*(signed char *)0xC541F44) > 0) && (t1 = *(signed char *)0xC541F44, (int)(unsigned char)t1 < (int)0x9)) {
        t2 = FUN_0c04da80();
        if (t2 != 0) {
            *(unsigned short *)0xC541F4E = 0x1F;
            (((struct o3_uchar *)0xC541F41)->v) = 0x9;
            FUN_0c05b0be(0x1E, 0x0);
        }
    }
    t7 = *(signed char *)0xC541F44;
    if ((unsigned char)t7 != 0) {
        t25 = 0xC541F4E;
    } else {
        FUN_0c07c436();
        FUN_0c05af8a();
        FUN_0c03eff6();
        FUN_0c036de8(0xF);
        FUN_0c059c7a(0x0, 0x0);
        FUN_0c0527e6();
        FUN_0c03ea04(0x7, 0x0);
        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
        FUN_0c04de60(0x1, 0x78);
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x5);
        (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
        FUN_0c04db9a();
        FUN_0c04dd38();
        FUN_0c04e7b6(0x0, 0x8);
        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
    }
    if (((unsigned char)t7 == 0) || ((unsigned char)t7 == 1)) {
        t26 = *(short *)0xC541F4E;
        *(unsigned short *)0xC541F4E = (t26 - 1);
        if ((int)(short)(t26 - 1) > 0) {
        } else {
            *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
            staffroll_create();
        }
    } else {
        if ((unsigned char)t7 != 2) {
            if ((unsigned char)t7 != 3) {
                if ((unsigned char)t7 != 4) {
                    if ((unsigned char)t7 == 5) {
                        t35 = *(short *)0xC541F4E;
                        *(unsigned short *)0xC541F4E = (t35 - 1);
                        if ((int)(short)(t35 - 1) > 0) {
                        } else {
                            *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        }
                    } else {
                        if ((unsigned char)t7 == 6) {
                            t42 = *(short *)0xC541F4E;
                            *(unsigned short *)0xC541F4E = (t42 - 1);
                            if ((int)(short)(t42 - 1) > 0) {
                            } else {
                                *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                FUN_0c04de60(0x0, ((*(short *)0xC541F4E) + 0x2));
                                FUN_0c04e986((int)((float)((*(short *)0xC541F4E) << 2) / 5.0f), 0x8);
                                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            }
                        } else {
                            if ((unsigned char)t7 == 7) {
                                t55 = *(short *)0xC541F4E;
                                *(unsigned short *)0xC541F4E = (t55 - 1);
                                if ((int)(short)(t55 - 1) > 0) {
                                } else {
                                    *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                    FUN_0c04de60(0x1, ((*(short *)0xC541F4E) + 0x2));
                                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                }
                            } else {
                                if ((unsigned char)t7 == 8) {
                                    t66 = *(short *)0xC541F4E;
                                    *(unsigned short *)0xC541F4E = (t66 - 1);
                                    if ((int)(short)(t66 - 1) <= 0) {
                                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                        FUN_0c0573c0(0xFF000000, 0x0, 0x1E);
                                        FUN_0c04def0(0xB, 0xA);
                                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                    }
                                } else {
                                    if ((unsigned char)t7 == 9) {
                                        if ((*(short *)0xC541F4E) == 31) {
                                            FUN_0c0573cc(0xFF000000, 0x0, 0x1E);
                                        }
                                        t82 = *(short *)0xC541F4E;
                                        *(unsigned short *)0xC541F4E = (t82 - 1);
                                        if ((int)(short)(t82 - 1) <= 0) {
                                            *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                            FUN_0c03eff6();
                                            FUN_0c0573c0(0xFF000000, 0x0, 0x1E);
                                            FUN_0c04def0(0x5, 0xB);
                                            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                        }
                                    } else {
                                        if ((unsigned char)t7 == 10) {
                                            if ((*(short *)0xC541F4E) == 31) {
                                                FUN_0c0573cc(0xFF000000, 0x0, 0x1E);
                                            }
                                            t98 = *(short *)0xC541F4E;
                                            *(unsigned short *)0xC541F4E = (t98 - 1);
                                            if ((int)(short)(t98 - 1) <= 0) {
                                                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                            }
                                        } else {
                                            *(unsigned char *)0xC3BD447 = 0x0;
                                            FUN_0c03eff6();
                                            (((struct o0_uchar *)0xC541F41)->v) = 0x6;
                                            (((struct o3_uchar *)0xC541F41)->v) = 0x0;
                                            (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                                            (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                                            *(unsigned short *)0xC541F4E = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    t134 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t134 - 1);
                    if ((int)(short)(t134 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        FUN_0c03ea04(0x7, 0x1);
                        FUN_0c04e008();
                    }
                }
            } else {
                t151 = *(short *)0xC541F4E;
                *(unsigned short *)0xC541F4E = (t151 - 1);
                if ((int)(short)(t151 - 1) > 0) {
                } else {
                    *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                }
            }
        } else {
            t164 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t164 - 1);
            if ((int)(short)(t164 - 1) > 0) {
            } else {
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                FUN_0c04e8cc();
                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
            }
        }
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038e88(0x8);
}
