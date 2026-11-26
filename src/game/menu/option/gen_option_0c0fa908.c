/* game/menu/option: functions 0C0FA908-0C0FB8F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c058b68(void);
int FUN_0c058cdc(void);
int FUN_0c05a418(int a4, int a5);
int FUN_0c05b1d4(void);
int FUN_0c05f22c(int);
int FUN_0c0fb8b0(int, int, int);
int FUN_0c0fc69e(void);
int FUN_0c0fc6e6(void);
int FUN_0c1171f0(int);
int nlAddVector3op(int, int, int);
int FUN_0c18778c(int);
int FUN_0c0fa908(void);
int FUN_0c0fa94c(void);
int FUN_0c0fa966(int a4);
int FUN_0c0fad8c(int a4);
int FUN_0c0fb54c(void);
int FUN_0c0fb56c(void);
int FUN_0c0fb592(void);
int FUN_0c0fb5ca(int a4, int a5, int a6);
int FUN_0c0fb608(void);
int FUN_0c0fb66a(void);
int FUN_0c0fb680(void);
int FUN_0c0fb6a6(void);
int FUN_0c0fb6cc(void);
int FUN_0c0fb8ca(int a4, int a5);

int FUN_0c0fa908(void)
{
    register int t6;

    (((struct o0_uchar *)0xC472AD4)->v) = ((((struct o0_int *)0xC28E6DC)->v));
    (((struct o1_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E0);
    (((struct o2_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E4);
    (((struct o3_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E8);
    (((struct o5_uchar *)0xC472AD4)->v) = ((((struct o14_int *)0xC28E6DC)->v));
    (((struct o6_uchar *)0xC472AD4)->v) = ((((struct o18_int *)0xC28E6DC)->v));
    t6 = (((struct o1C_int *)0xC28E6DC)->v);
    (((struct o7_uchar *)0xC472AD4)->v) = t6;
    return t6;
}

int FUN_0c0fa94c(void)
{
    register int t4;

    (((struct o0_uchar *)0xC472AD4)->v) = ((((struct o0_int *)0xC28E6DC)->v));
    (((struct o1_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E0);
    (((struct o2_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E4);
    (((struct o3_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E8);
    t4 = (((struct o1C_int *)0xC28E6DC)->v);
    (((struct o7_uchar *)0xC472AD4)->v) = t4;
    return t4;
}


int FUN_0c0fad8c(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x4);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FA966;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return FUN_0c0fa966(t0);
    }
    return t0;
}

int FUN_0c0fb54c(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FADBC;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fb56c(void)
{
    register int t7;

    (((struct o0_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429C8);
    (((struct o1_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429C9);
    (((struct o2_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429CA);
    (((struct o3_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429CB);
    (((struct o4_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429CC);
    (((struct o5_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429CD);
    (((struct o6_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429CE);
    t7 = *(signed char *)0xC5429CF;
    (((struct o7_uchar *)0xC472AD4)->v) = t7;
    return t7;
}

int FUN_0c0fb592(void)
{
    (((struct o1B_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472AD4);
    (((struct o1C_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472AD5);
    (((struct o1D_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472AD6);
    (((struct o1E_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472AD7);
    (((struct o20_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472AD9);
    (((struct o21_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472ADA);
    (((struct o22_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472ADB);
    (((struct o0_uchar *)0xC5429AD)->v) = (*(signed char *)0xC5429C8);
    (((struct o1_uchar *)0xC5429AD)->v) = (*(signed char *)0xC5429CA);
    return FUN_0c0fb8ca((*(signed char *)0xC5429CD), (*(signed char *)0xC5429CE));
}

int FUN_0c0fb5ca(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)0xC472AD8;
    (((struct o23_uchar *)0xC5429A9)->v) = t0;
    (((struct o0_uchar *)0xC5429A9)->v) = t0;
    return FUN_0c0fb8b0((*(signed char *)0xC5429A9), a5, a6);
}

int FUN_0c0fb608(void)
{
    register int t56;

    if ((*(signed char *)0xC472AD4) == (*(signed char *)0xC5429C8)) {
        if ((*(signed char *)0xC472AD5) == (*(signed char *)0xC5429C9)) {
            if ((*(signed char *)0xC472AD6) == (*(signed char *)0xC5429CA)) {
                if ((*(signed char *)0xC472AD7) == (*(signed char *)0xC5429CB)) {
                    if ((*(signed char *)0xC472AD9) == (*(signed char *)0xC5429CD)) {
                        if ((*(signed char *)0xC472ADA) == (*(signed char *)0xC5429CE)) {
                            if ((*(signed char *)0xC472ADB) == (*(signed char *)0xC5429CF)) {
                                t56 = FUN_0c058b68();
                                if (t56 == 1) {
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x1;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c0fb66a(void)
{
    if ((*(signed char *)0xC472AD8) != (*(signed char *)0xC5429CC)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0fb680(void)
{
    register int t4;

    FUN_0c0fa908();
    FUN_0c0fc69e();
    FUN_0c0fb592();
    FUN_0c0fc6e6();
    t4 = FUN_0c058cdc();
    *(unsigned char *)0xC542B8C = 0x1;
    return t4;
}

int FUN_0c0fb6a6(void)
{
    FUN_0c0fa94c();
    FUN_0c0fc69e();
    FUN_0c0fb592();
    FUN_0c0fc6e6();
    FUN_0c058cdc();
    *(unsigned char *)0xC542B8C = 0x1;
    return 0x1;
}

int FUN_0c0fb6cc(void)
{
    if ((*(signed char *)0xC5429C8) == ((((struct o0_int *)0xC28E6DC)->v))) {
        if ((*(signed char *)0xC5429C9) == ((((struct o4_int *)0xC28E6DC)->v))) {
            if ((*(signed char *)0xC5429CA) == ((((struct o8_int *)0xC28E6DC)->v))) {
                if ((*(signed char *)0xC542A0A) == ((((struct o0_int *)0xC28E968)->v))) {
                    if ((*(signed char *)0xC542A0B) == ((((struct o4_int *)0xC28E968)->v))) {
                        if ((*(signed char *)0xC542A0C) != ((((struct o8_int *)0xC28E968)->v))) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0fb8ca(int a4, int a5)
{
    FUN_0c05a418((((a4 + 0x2) << 2) << 1), (((a5 << 1) + (a5 << 2)) + 0x2C));
    return FUN_0c05b1d4();
}
