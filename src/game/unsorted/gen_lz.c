/* Straight-line functions with calls and guards (batch gen_lz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_short { char p[0x10]; short v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o12_short { char p[0x12]; short v; };
struct o12_ushort { char p[0x12]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int FUN_0c036de8(int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c0527e6(void);
int FUN_0c0573d8(void);
int FUN_0c05aab6(int, int);
int FUN_0c05f22c(int);
int FUN_0c05fa74(int);
int FUN_0c05fe02(void);
int game_reset_objects(void);
int FUN_0c05fba0(void);

int FUN_0c05fba0(void)
{
    int qa0;
    int stk[6];
    int t27;
    int t0;
    int t61;
    int t20;
    int t33;
    int t41;
    int t15;
    int t14;
    int t64;
    int t36;
    int t34;
    int t24;
    int t59;
    int t47;

    qa0 = 0xC541F43;
    t0 = *(signed char *)0xC541F41;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
    } else {
        (((struct o1_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F41) + 0x1);
        (((struct o2_uchar *)0xC541F40)->v) = 0x0;
        (((struct o3_uchar *)0xC541F40)->v) = 0x0;
        (((struct oE_ushort *)0xC541F40)->v) = 0x0;
        (((struct o10_ushort *)0xC541F40)->v) = 0x0;
        (((struct o12_ushort *)0xC541F40)->v) = 0x708;
        FUN_0c03eff6();
        FUN_0c0573d8();
        FUN_0c03ea04(0x3, 0x0);
        FUN_0c036de8(0x23);
        FUN_0c0527e6();
        game_reset_objects();
        (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
        if ((*(int *)0xC5421D0) == 0) {
            (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
            (((struct o1_uchar *)0xC541F40)->v) = 0x0;
            (((struct o2_uchar *)0xC541F40)->v) = 0x0;
            (((struct o3_uchar *)0xC541F40)->v) = 0x0;
            (((struct o4_uchar *)0xC541F40)->v) = 0x0;
            (((struct oE_ushort *)0xC541F40)->v) = 0x0;
            (((struct o10_ushort *)0xC541F40)->v) = 0x0;
            (((struct o12_ushort *)0xC541F40)->v) = 0x0;
            return (FUN_0c03eff6());
        }
    }
    (((struct o12_ushort *)0xC541F40)->v) = (((((struct o12_short *)0xC541F40)->v)) - 1);
    if (((int)((((struct o12_short *)0xC541F40)->v)) <= 0) && ((t14 = *(signed char *)0xC541F42, t14 == 0) && (t15 = *(signed char *)qa0, (unsigned char)t15 == 1))) {
        (((struct o3_uchar *)0xC541F40)->v) = 0x2;
        (((struct oE_ushort *)0xC541F40)->v) = 0x1;
        (((struct o10_ushort *)0xC541F40)->v) = 0x3C;
    }
    if ((unsigned char)(*(signed char *)0xC541F42) != 0) {
        t20 = *(signed char *)qa0;
        if ((unsigned char)t20 != 0) {
            if ((unsigned char)t20 != 1) {
            } else {
                (((struct o10_ushort *)0xC541F40)->v) = (((((struct o10_short *)0xC541F40)->v)) - 1);
                if ((int)((((struct o10_short *)0xC541F40)->v)) <= 0) {
                    (((struct o2_uchar *)0xC541F40)->v) = 0x0;
                    (((struct o3_uchar *)0xC541F40)->v) = 0x0;
                    (((struct o4_uchar *)0xC541F40)->v) = 0x0;
                    FUN_0c03eff6();
                }
            }
        } else {
            t24 = FUN_0c05fa74(0x9);
            if (t24 != 0) {
                FUN_0c05fe02();
                (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)qa0) + 0x1);
                (((struct o10_ushort *)0xC541F40)->v) = 0x12C;
            }
        }
    } else {
        t27 = *(signed char *)qa0;
        if ((unsigned char)t27 != 0) {
            if ((unsigned char)t27 != 1) {
                if ((unsigned char)t27 != 2) {
                    if ((unsigned char)t27 != 3) {
                        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
                        (((struct o1_uchar *)0xC541F40)->v) = 0x0;
                        (((struct o2_uchar *)0xC541F40)->v) = 0x0;
                        (((struct o3_uchar *)0xC541F40)->v) = 0x0;
                        (((struct o4_uchar *)0xC541F40)->v) = 0x0;
                        (((struct oE_ushort *)0xC541F40)->v) = 0x0;
                        (((struct o10_ushort *)0xC541F40)->v) = 0x0;
                        (((struct o12_ushort *)0xC541F40)->v) = 0x0;
                        return 0x0;
                    }
                    t33 = (((struct oE_short *)0xC541F40)->v);
                    if (t33 != 1) {
                        if (t33 != 2) {
                        } else {
                            t34 = FUN_0c05fa74(0x9);
                            if (t34 != 0) {
                                (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)qa0) + 0x1);
                            }
                        }
                    } else {
                        t36 = FUN_0c05fa74(0x13);
                        if (t36 != 0) {
                            (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)qa0) + 0x1);
                        }
                    }
                } else {
                    (((struct o10_ushort *)0xC541F40)->v) = (((((struct o10_short *)0xC541F40)->v)) - 1);
                    if ((int)((((struct o10_short *)0xC541F40)->v)) <= 0) {
                        (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)qa0) + 0x1);
                    }
                }
            } else {
                t41 = FUN_0c05f22c(0x2000);
                if (t41 != 0) {
                    (((struct oE_ushort *)0xC541F40)->v) = (((((struct oE_short *)0xC541F40)->v)) - 1);
                    if ((int)((((struct oE_short *)0xC541F40)->v)) < 0) {
                        (((struct oE_ushort *)0xC541F40)->v) = 0x2;
                    }
                    FUN_0c05aab6(t41, 0x6);
                } else {
                    t47 = FUN_0c05f22c(0x1000);
                    if (t47 != 0) {
                        (((struct oE_ushort *)0xC541F40)->v) = (((((struct oE_short *)0xC541F40)->v)) + 0x1);
                        if ((int)((((struct oE_short *)0xC541F40)->v)) > (int)0x2) {
                            (((struct oE_ushort *)0xC541F40)->v) = 0x0;
                        }
                        FUN_0c05aab6(t47, 0x6);
                    }
                }
                t59 = FUN_0c05f22c(0x8101);
                if (t59 != 0) {
                    FUN_0c05aab6(t59, 0x2);
                    t61 = (((struct oE_short *)0xC541F40)->v);
                    if (t61 != 0) {
                        if ((t61 != 1) && (t61 != 2)) {
                        } else {
                            (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)qa0) + 0x1);
                            (((struct o10_ushort *)0xC541F40)->v) = 0x3C;
                        }
                    } else {
                        (((struct o2_uchar *)0xC541F40)->v) = 0x1;
                        (((struct o3_uchar *)0xC541F40)->v) = 0x0;
                        (((struct o4_uchar *)0xC541F40)->v) = 0x0;
                        FUN_0c03eff6();
                    }
                }
            }
        } else {
            t64 = FUN_0c05fa74(0x13);
            if (t64 == 0) {
            } else {
                FUN_0c05fe02();
                (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)qa0) + 0x1);
            }
        }
    }
    FUN_0c03f40c(0x5);
    return FUN_0c038e88(0x5);
}
