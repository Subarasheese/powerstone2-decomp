/* game/unsorted: functions 0C0CF944-0C0CFBE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c0cbfe8(int);
int FUN_0c0d0258(int);
int FUN_0c0d06cc(void);
int FUN_0c0d14d4(void);
int FUN_0c0d6d7a(void);
int FUN_0c0dd0c0(void);
int FUN_0c0e33ae(void);
int FUN_0c0e99c8(void);
int FUN_0c0f1548(void);
int FUN_0c0f25c2(void);
int FUN_0c0f5984(void);
int FUN_0c0f6078(void);
int FUN_0c0f6348(void);
int FUN_0c187798(int, int, int);
int FUN_0c0cf944(int a4);

int FUN_0c0cf944(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;

    *(unsigned int *)0xC472668 = 0x0;
    switch (a4) {
    case 0:
        FUN_0c0d14d4();
        break;
    case 1:
        FUN_0c0d6d7a();
        break;
    case 2:
        FUN_0c0dd0c0();
        break;
    case 3:
        FUN_0c0e33ae();
        break;
    case 4:
        FUN_0c0e99c8();
        break;
    case 5:
        FUN_0c0f1548();
        break;
    case 6:
        FUN_0c0f25c2();
        break;
    case 7:
        FUN_0c0f5984();
        break;
    case 8:
        FUN_0c0f6078();
        break;
    case 9:
        FUN_0c0f6348();
        break;
    }
    (((struct o0_ushort *)0xC541064)->v) = 0xB4;
    (((struct o2_ushort *)0xC541064)->v) = 0x3C;
    FUN_0c0d0258((*(int *)(((a4 << 2) + 0xC286D00))));
    FUN_0c0d06cc();
    t5 = 0x7;
    if ((*(signed char *)0xC5429B4) == 2) {
    } else {
        t6 = *(signed char *)0xC542A09;
        t7 = 0x3;
        if (t6 != 0) {
            t8 = 0x5;
            if (t6 != 1) {
                t8 = 0x7;
            }
            t7 = t8;
        }
        t6 = 0xC542A09;
        t5 = t7;
    }
    (((struct o0_uchar *)0xC540F9A)->v) = 0x0;
    t7 = t6;
    t6 = 0x0;
    if ((int)t5 > 0) {
        t8 = 0x0;
        for (;;) {
            t10 = *(int *)((0xC1C73E0 + (((t8 - t5) + 0x7) << 2)));
            t11 = (0xC540F9B + t8);
            t8 = (t8 + 0x1);
            *(unsigned char *)((t11 + 0x0)) = t10;
            t9 = *(signed char *)0xC540F9A;
            (((struct o0_uchar *)0xC540F9A)->v) = (t9 + 0x1);
            if ((int)t8 >= (int)t5) {
                break;
            }
        }
        t7 = (t9 + 0x1);
        t6 = t8;
        t5 = 0xC1C73E0;
    }
    (((struct o8_uint *)0xC5410EC)->v) = 0x0;
    (((struct oC_uint *)0xC5410EC)->v) = 0x0;
    (((struct o8_ushort *)0xC540F9A)->v) = 0x0;
    t8 = *(signed char *)0xC5429B4;
    t9 = t8;
    t10 = t6;
    t11 = t5;
    if ((t8 != 2) && ((t8 == 2) || (t0 = *(signed char *)0xC542A09, t0 == 0))) {
    } else {
        t0 = t8;
        t12 = t7;
        t7 = 0xC5429B4;
        t13 = t8;
        t8 = t6;
        t6 = t5;
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)0x4) {
                break;
            }
            t0 = 0x3714;
            t13 = (t5 * 0x3938);
            t13 = (t13 + 0xC532498);
            t7 = (*(signed char *)((t13 + t0)));
            if ((t7 != 0) && ((t0 = 0x166, t1 = *(signed char *)((0xC5421F8 + t0)), t1 == 0) || (t0 = 0x16B, t2 = *(signed char *)((0xC5421F8 + t0)), t12 = t2, t5 != t12))) {
                t12 = 0xC0CBFE8;
                t0 = (FUN_0c0cbfe8(t13));
            } else {
                t14 = t12;
                t15 = t7;
                t16 = t13;
                t17 = t8;
                t18 = t6;
            }
            t5 = (t5 + 0x1);
            t12 = t14;
            t7 = t15;
            t13 = t16;
            t8 = t17;
            t6 = t18;
        }
        t0 = t5;
        t9 = t13;
        t10 = t8;
        t11 = t6;
    }
    FUN_0c187798(t9, t10, t11);
    (((struct o0_uint *)0xC5410EC)->v) = 0x0;
    (((struct o4_uint *)0xC5410EC)->v) = 0x0;
    t1 = *(signed char *)0xC5429B4;
    if (t1 != 2) {
        t2 = t1;
        t5 = 0xC5429B4;
        t6 = t3;
        t3 = 0x0;
        t7 = t4;
        t4 = t0;
        for (;;) {
            if ((int)t3 >= (int)0x4) {
                break;
            }
            t2 = 0x3714;
            t5 = (t3 * 0x3938);
            t5 = (t5 + 0xC532498);
            t0 = (*(signed char *)((t5 + t2)));
            if (t0 != 0) {
                t4 = t3;
                t5 = t3;
                t4 = (t4 << 2);
                t6 = 0x0;
                t7 = 0x0;
                t4 = (t4 + t5);
                for (;;) {
                    t0 = 0x5;
                    if ((int)t6 >= (int)t0) {
                        break;
                    }
                    t2 = 0x152;
                    t2 = (t2 + 0xC5421F8);
                    t2 = (t2 + t4);
                    t5 = (*(signed char *)((t6 + t2)));
                    if (t5 != 0) {
                        t2 = 0x152;
                        t5 = 0x34;
                        t2 = (t2 + 0xC5421F8);
                        t2 = (t2 + t4);
                        t2 = (*(signed char *)((t6 + t2)));
                        t2 = ((short)t2 * (short)t5);
                        t2 = (*(signed char *)(((0xC2738B8) + t2)));
                        if (t2 != 2) {
                            t2 = 0x774;
                            t0 = 0x152;
                            t5 = 0x74C;
                            t2 = (*(int *)((0xC540978 + t2)));
                            t0 = (t0 + 0xC5421F8);
                            t0 = (t0 + t4);
                            t2 = (t2 << 1);
                            t5 = (t5 + 0xC540978);
                            t0 = (t0 + t6);
                            t2 = (t2 + t5);
                            t5 = (*(signed char *)((t0 + 0x0)));
                            *(unsigned char *)((t2 + 0x0)) = t5;
                            t2 = 0x774;
                            t5 = 0x74C;
                            t0 = (*(int *)((0xC540978 + t2)));
                            t5 = (t5 + 0xC540978);
                            t0 = (t0 << 1);
                            t0 = (t0 + t5);
                            t2 = t3;
                            *(unsigned char *)((t0 + 0x1)) = t2;
                            t7 = 0x1;
                            t2 = 0x774;
                            t5 = (*(int *)((0xC540978 + t2)));
                            t5 = (t5 + 0x1);
                            *(unsigned int *)((0xC540978 + t2)) = t5;
                        }
                    }
                    t6 = (t6 + 0x1);
                }
                if (t7 != 0) {
                    t2 = 0x778;
                    t5 = (*(int *)((0xC540978 + t2)));
                    t5 = (t5 + 0x1);
                    *(unsigned int *)((0xC540978 + t2)) = t5;
                }
            }
            t3 = (t3 + 0x1);
        }
        t0 = t2;
    } else {
        t0 = t1;
    }
    return t0;
}
