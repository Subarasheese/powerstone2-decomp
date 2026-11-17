/* game/unsorted: functions 0C0DC784-0C0DD0C0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int FUN_0c03ea04(int, int);
int FUN_0c042fe0(void);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c052c00(int, int, int);
int FUN_0c056c64(int, int, int);
int FUN_0c056dc6(void);
int FUN_0c056e44(int, int);
int FUN_0c059c16(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c059d30(void);
int FUN_0c05af9a(int, int, int);
int FUN_0c07c19c(int);
int FUN_0c085cac(int, int, int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0cfecc(int, int, int);
int FUN_0c0d02a6(void);
int FUN_0c0d0378(int, int);
int FUN_0c0d04b4(int);
int FUN_0c0d0928(int);
int FUN_0c0dc784(void);
int FUN_0c0dc7e8(int);
int FUN_0c0e0352(int);
int FUN_0c0dc92c(void);
int FUN_0c0dc97c(void);
int FUN_0c0dcaac(int a4);
int FUN_0c0dcb18(void);
int FUN_0c0dcb1e(int a4, int a5, int a6);
int FUN_0c0dcb6e(void);
void FUN_0c0dcbec(void);

int FUN_0c0dc92c(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if (-1500.0f > ((((struct o2C_float *)(((t0 * 0x3938) + 0xC532498)))->v))) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return 0xFFFFFFFF;
        }
    }
    return t0;
}

int FUN_0c0dc97c(void)
{
    int stk[6];
    register int t0;
    register float u3;
    register float u4;
    register int t48;
    register int t6;
    register int t7;
    register int t9;
    register int t12;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register float u19;
    register float u20;
    register float u21;
    register int t25;
    register int t13;
    int t18;
    register int t41;
    register int t43;
    register int t44;
    register float u45;
    register float u46;

    t0 = *(signed char *)0xC54098F;
    u3 = *(float *)((((((t0 << 1) + t0) << 2) + 0xC1C99B8) + 0x0));
    u4 = (((struct o28_float *)((*(int *)0xC540D94)))->v);
    t48 = 0x28;
    if (!((u3 + -2500.0f) > u4)) {
        t6 = *(int *)((((((t0 << 1) + t0) << 2) + 0xC1C99B8) + 0x8));
        t7 = t6;
        if ((int)t6 < 0) {
            t7 = (-t6);
        }
        *(unsigned int *)(((int)stk + 8)) = ((((t0 << 1) + t0) << 2) + 0xC1C99B8);
        t9 = *(int *)((((((t0 << 1) + t0) << 2) + 0xC1C99B8) + 0x4));
        *(unsigned int *)(((int)stk + 0)) = t9;
        t14 = *(int *)((((t9 << 2) << 1) + 0xC1C9994));
        *(unsigned int *)(((int)stk + 4)) = t14;
        t12 = 0xC0DCAA0;
        t15 = ((((t0 << 1) + t0) << 2) + 0xC1C99B8);
        t16 = 0x0;
        t17 = 0x0;
        u19 = u4;
        u20 = (u3 + -2500.0f);
        u21 = -2500.0f;
        for (;;) {
            if ((int)t16 >= (int)(*(int *)(((int)stk + 4)))) {
                break;
            }
            t12 = 0x10;
            t13 = 0xC1C9990;
            *(float *)((((int)stk + 0) + t12)) = -9950.0f;
            t12 = 0x17;
            t14 = (*(signed char *)((0xC540978 + t12)));
            t12 = 0xC;
            t25 = t14;
            t14 = (t14 << 1);
            t14 = (t14 + t25);
            t14 = (t14 << 2);
            t14 = (t14 + 0xC1C99B8);
            u21 = (*(float *)((t14 + 0x0)));
            *(float *)((((int)stk + 0) + t12)) = u21;
            t12 = 0x17;
            t12 = (*(signed char *)((0xC540978 + t12)));
            t14 = t12;
            t12 = (t12 << 1);
            t12 = (t12 + t14);
            t12 = (t12 << 2);
            t12 = (t12 + 0xC1C99B8);
            t12 = (*(int *)((t12 + 0x4)));
            t12 = (t12 << 2);
            t12 = (t12 << 1);
            t12 = (*(int *)((t13 + t12)));
            u21 = (*(float *)((t17 + t12)));
            t12 = 0x14;
            *(float *)((((int)stk + 0) + t12)) = u21;
            t18 = 0x0;
            if ((int)t7 > 0) {
                for (;;) {
                    t15 = ((int)stk + 0);
                    t15 = (t15 + 0xC);
                    t12 = (FUN_0c0e0352(t15));
                    t12 = 0x10;
                    u21 = (*(float *)((((int)stk + 0) + t12)));
                    t12 = 0x10;
                    u21 = (u21 + 100.0f);
                    *(float *)((((int)stk + 0) + t12)) = u21;
                    t12 = (*(int *)(((int)stk + 0)));
                    if (t12 == 4) {
                        if ((0x1 & t18) != 0) {
                            t12 = 0x14;
                            u21 = (*(float *)((((int)stk + 0) + t12)));
                            u21 = (u21 + 50.0f);
                        } else {
                            t12 = 0x14;
                            u21 = (*(float *)((((int)stk + 0) + t12)));
                            u21 = (u21 - 50.0f);
                        }
                        t12 = 0x14;
                        *(float *)((((int)stk + 0) + t12)) = u21;
                    }
                    t18 = (t18 + 0x1);
                    if ((int)t18 >= (int)t7) {
                        break;
                    }
                }
            } else {
                t41 = t13;
                t43 = t14;
                t44 = t15;
                u45 = u19;
                u46 = u20;
            }
            u19 = u45;
            u20 = u46;
            t13 = t41;
            t17 = (t17 + 0x4);
            t14 = t43;
            t15 = t44;
            t16 = (t16 + 0x1);
        }
        *(unsigned char *)0xC54098F = ((*(signed char *)0xC54098F) + 0x1);
        t48 = 0x17;
    }
    return t48;
}

int FUN_0c0dcaac(int a4)
{
    register int t13;
    register int t14;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1C984C)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1C9858)));
    *(unsigned short *)0xC540996 = 0x0;
    if ((*(signed char *)0xC54098D) != 14) {
        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    }
    t13 = *(signed char *)0xC542237;
    t14 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t13 << 2) << 1) + t13) << 2) + 0xC286D34) + (((t14 << 1) + t14) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int FUN_0c0dcb18(void)
{
    return FUN_0c0dc7e8((*(signed char *)0xC54223C));
}

int FUN_0c0dcb1e(int a4, int a5, int a6)
{
    register int t1;

    *(volatile signed char *)0xC542377;
    t1 = *(signed char *)0xC54223C;
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            return FUN_0c052c00(0x2000, 0xE38, a4);
        }
        return FUN_0c056c64((*(int *)0xC540D94), 0xC5421F8, a6);
    }
    return FUN_0c052c00(0x2000, 0x1000, a4);
}

int FUN_0c0dcb6e(void)
{
    register int t0;
    register int t4;

    t0 = *(signed char *)0xC54223C;
    t4 = FUN_0c0cfecc((*(int *)(((((t0 << 2) << 1) + 0xC1CA07C) + 0x0))), 0xC540996, (*(int *)(((((t0 << 2) << 1) + 0xC1CA07C) + 0x4))));
    if ((int)t4 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

void FUN_0c0dcbec(void)
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

    t2 = *(signed char *)0xC54098C;
    if (t2 != 0) {
        if (t2 != 1) {
            return;
        }
        FUN_0c0dc784();
        t2 = *(signed char *)0xC54098E;
        t3 = *(signed char *)0xC54098D;
        if ((unsigned int)t3 >= (unsigned int)0x11) {
            return;
        }
        switch ((t3 << 1)) {
            case 0:
            {
                FUN_0c0dcaac(0x0);
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                t3 = FUN_0c0dcb6e();
                if (t3 == 0) {
                    return;
                }
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                FUN_0c0dcb18();
                FUN_0c0d0378(0x0, 0x5);
    return;
            }
            case 2:
            {
                t3 = FUN_0c0dcb6e();
                if (t3 == 0) {
                    return;
                }
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                FUN_0c0dcb18();
                FUN_0c0d0378(0x0, 0x5);
    return;
            }
            case 4:
            {
                t3 = FUN_0c042fe0();
                if (t3 == 0) {
                    return;
                }
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                ((int (*)(void))(0xC0DCB6A))();
    return;
            }
            case 6:
            {
                if ((int)((((struct o8_short *)0xC54098C)->v)) > 0) {
                    (((struct o8_ushort *)0xC54098C)->v) = (((((struct o8_short *)0xC54098C)->v)) - 1);
                }
                if ((*(signed char *)((0x15 + (*(int *)0xC540DD4)))) != 7) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                    thunk_FUN_0c05abb2(0x58, 0x0);
                    FUN_0c05af9a(0x58, 0x7F, 0xB4);
                }
                return;
            }
            case 8:
            {
                t3 = (((struct o8_short *)0xC54098C)->v);
                (((struct o8_ushort *)0xC54098C)->v) = (t3 - 1);
                if ((int)(short)(t3 - 1) <= 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                    FUN_0c05af9a(0x58, 0x32, 0x78);
                }
                if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0xF)) != 0) {
                    return;
                }
                FUN_0c07c19c(0x22);
    return;
            }
            case 10:
            case 12:
            {
                if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x19)) == 0) {
                    FUN_0c07c19c(0x22);
                }
                t3 = FUN_0c0dc92c();
                if ((int)t3 < 0) {
                    return;
                }
                (((struct o0_uchar *)0xC542235)->v) = 0x0;
                *(unsigned char *)0xC540F98 = 0x1;
                FUN_0c0dcaac(0x1);
                (((struct o1_uchar *)0xC54098C)->v) = 0x7;
                FUN_0c05af9a(0x58, 0x0, 0x1);
                FUN_0c056e44(0x19, 0x5);
                FUN_0c059d30();
    return;
            }
            case 14:
            {
                t3 = FUN_0c0dcb6e();
                if (t3 == 0) {
                    return;
                }
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                FUN_0c0dc784();
                FUN_0c0dcb18();
                FUN_0c05af9a(0x58, 0x7F, 0x12C);
                FUN_0c0d02a6();
                (((struct oC_ushort *)0xC54098C)->v) = 0x0;
                (((struct oE_ushort *)0xC54098C)->v) = 0x0;
                FUN_0c059d30();
    return;
            }
            case 16:
            {
                if (t2 == 0) {
                    t3 = (((struct o8_short *)0xC54098C)->v);
                    (((struct o8_ushort *)0xC54098C)->v) = (t3 - 1);
                    if ((int)(short)(t3 - 1) <= (int)0x1E) {
                        (((struct o0_uchar *)0xC542235)->v) = 0x2;
                        (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                        FUN_0c05258e(0x63, 0xA, 0x100, 0x1, 0x0);
                    }
                    if (((((struct o8_short *)0xC54098C)->v)) == ((*(int *)(((0xC1C9864 + ((*(signed char *)0xC54098D) << 2)) + 0x0))) - 40)) {
                        FUN_0c05258e(0x3, 0xA, 0x2000, 0xFFFFFFFF, 0x0);
                    }
                } else {
                    t3 = (((struct o8_short *)0xC54098C)->v);
                    (((struct o8_ushort *)0xC54098C)->v) = (t3 - 1);
                    if ((int)(short)(t3 - 1) <= 0) {
                        (((struct o1_uchar *)0xC54098C)->v) = 0x9;
                        (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                        FUN_0c05af9a(0x58, 0x40, 0xB4);
                    }
                }
                t3 = (((struct oC_short *)0xC54098C)->v);
                if (!((*(float *)(((((((t3 << 1) + t3) << 2) << 2) + 0xC1C957C) + 0x0))) > ((((struct o28_float *)((*(int *)0xC540D94)))->v)))) {
                    t4 = FUN_0c0d0928(((((((t3 << 1) + t3) << 2) << 2) + 0xC1C957C) + 0x10));
                    t3 = (((struct oC_short *)0xC54098C)->v);
                    FUN_0c0c2944(t4, 0x0, 0x0, (((((t3 << 1) + t3) << 2) << 2) + 0xC1C9580), 0xFFFFFFFF);
                    (((struct oC_ushort *)0xC54098C)->v) = (((((struct oC_short *)0xC54098C)->v)) + 0x1);
                }
                FUN_0c0dc97c();
                if (4000.0f > ((((struct o28_float *)((*(int *)0xC540D94)))->v))) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = 0xA;
                    (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                }
                return;
            }
            case 18:
            {
                t3 = (((struct oC_short *)0xC54098C)->v);
                if (!((*(float *)(((((((t3 << 1) + t3) << 2) << 2) + 0xC1C957C) + 0x0))) > ((((struct o28_float *)((*(int *)0xC540D94)))->v)))) {
                    t4 = FUN_0c0d0928(((((((t3 << 1) + t3) << 2) << 2) + 0xC1C957C) + 0x10));
                    t3 = (((struct oC_short *)0xC54098C)->v);
                    FUN_0c0c2944(t4, 0x0, 0x0, (((((t3 << 1) + t3) << 2) << 2) + 0xC1C9580), 0xFFFFFFFF);
                    (((struct oC_ushort *)0xC54098C)->v) = (((((struct oC_short *)0xC54098C)->v)) + 0x1);
                }
                FUN_0c0dc97c();
                if (4000.0f > ((((struct o28_float *)((*(int *)0xC540D94)))->v))) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = 0xA;
                    (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                }
                return;
            }
            case 20:
            {
                if (t2 != 0) {
                    if (t2 != 1) {
                    } else {
                        if (5900.0f > ((((struct o28_float *)((*(int *)0xC540D94)))->v))) {
                        } else {
                            (((struct o1_uchar *)0xC54098C)->v) = 0xB;
                            (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                            FUN_0c05af9a(0x58, 0x0, 0x78);
                        }
                    }
                    return;
                }
                if (4800.0f > ((((struct o28_float *)((*(int *)0xC540D94)))->v))) {
                    return;
                }
                (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                FUN_0c056dc6();
    return;
            }
            case 22:
            {
                t2 = (((struct o8_short *)0xC54098C)->v);
                (((struct o8_ushort *)0xC54098C)->v) = (t2 - 1);
                if ((int)(short)(t2 - 1) <= 0) {
                    t2 = FUN_0c042fe0();
                    if (t2 != 0) {
                        *(unsigned char *)0xC540F98 = 0x1;
                        (((struct o1_uchar *)0xC54098C)->v) = 0xC;
                        FUN_0c0dcaac(0x2);
                        FUN_0c056e44(0x19, 0x6);
                        (((struct o0_uchar *)0xC542235)->v) = 0x0;
                        FUN_0c059d30();
    return;
                    }
                    return;
                }
                return;
            }
            case 24:
            {
                t2 = FUN_0c0dcb6e();
                if (t2 != 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                    FUN_0c0dcb18();
                    (((struct o0_uchar *)0xC542235)->v) = 0x2;
                    t2 = (FUN_0c0d0378(0x6, 0xB));
                    t3 = t0;
                    t0 = 0x0;
                    for (;;) {
                        if ((int)t0 >= (int)0x4) {
                            break;
                        }
                        t4 = 0xC532498;
                        t2 = 0x3714;
                        t3 = (t0 * 0x3938);
                        t3 = (t3 + t4);
                        t5 = (*(signed char *)((t3 + t2)));
                        if (t5 != 0) {
                            t2 = 0x22;
                            t5 = (*(short *)((0xC540978 + t2)));
                            t6 = 0xC;
                            if ((t5 & ((int)0x1 << (int)t0)) == 0) {
                                t6 = 0xB;
                            }
                            t2 = (FUN_0c085cac(t3, 0x17, t6));
                        } else {
                            t6 = t5;
                            t7 = t4;
                            t8 = t3;
                        }
                        t0 = (t0 + 0x1);
                        t5 = t6;
                        t4 = t7;
                        t3 = t8;
                    }
                    FUN_0c059d30();
                    (((struct o4_uchar *)0xC54098C)->v) = ((*(signed char *)0xC542260) & 0x3);
                }
                return;
            }
            case 26:
            {
                return;
            }
            case 28:
            {
                FUN_0c0dcaac((*(signed char *)0xC54223C));
                (((struct o1_uchar *)0xC54098C)->v) = 0xF;
                t0 = FUN_0c0dcb6e();
                if (t0 != 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = 0x10;
                    FUN_0c0d02a6();
    return;
                }
                return;
            }
            case 30:
            {
                t0 = FUN_0c0dcb6e();
                if (t0 != 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = 0x10;
                    FUN_0c0d02a6();
    return;
                }
                return;
            }
            default:
            {
                return;
            }
        }
    }
    (((struct o0_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098C) + 0x1);
    (((struct o18_uint *)0xC540A20)->v) = 0x0;
    (((struct o0_uchar *)0xC540A20)->v) = 0x0;
    (((struct o1_uchar *)0xC54098C)->v) = 0x0;
    FUN_0c0dc784();
    t0 = *(signed char *)0xC54098E;
    t2 = *(signed char *)0xC54098D;
    if ((unsigned int)t2 >= (unsigned int)0x11) {
        return;
    }
    switch ((t2 << 1)) {
        case 0:
        {
            FUN_0c0dcaac(0x0);
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            t2 = FUN_0c0dcb6e();
            if (t2 == 0) {
                return;
            }
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
            FUN_0c0dcb18();
            FUN_0c0d0378(0x0, 0x5);
    return;
        }
        case 2:
        {
            t2 = FUN_0c0dcb6e();
            if (t2 == 0) {
                return;
            }
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
            FUN_0c0dcb18();
            FUN_0c0d0378(0x0, 0x5);
    return;
        }
        case 4:
        {
            t2 = FUN_0c042fe0();
            if (t2 == 0) {
                return;
            }
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
            ((int (*)(void))(0xC0DCB6A))();
    return;
        }
        case 6:
        {
            if ((int)((((struct o8_short *)0xC54098C)->v)) > 0) {
                (((struct o8_ushort *)0xC54098C)->v) = (((((struct o8_short *)0xC54098C)->v)) - 1);
            }
            if ((*(signed char *)((0x15 + (*(int *)0xC540DD4)))) != 7) {
            } else {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                thunk_FUN_0c05abb2(0x58, 0x0);
                FUN_0c05af9a(0x58, 0x7F, 0xB4);
            }
            return;
        }
        case 8:
        {
            t2 = (((struct o8_short *)0xC54098C)->v);
            (((struct o8_ushort *)0xC54098C)->v) = (t2 - 1);
            if ((int)(short)(t2 - 1) <= 0) {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                FUN_0c05af9a(0x58, 0x32, 0x78);
            }
            if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0xF)) != 0) {
                return;
            }
            FUN_0c07c19c(0x22);
    return;
        }
        case 10:
        case 12:
        {
            if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x19)) == 0) {
                FUN_0c07c19c(0x22);
            }
            t2 = FUN_0c0dc92c();
            if ((int)t2 < 0) {
                return;
            }
            (((struct o0_uchar *)0xC542235)->v) = 0x0;
            *(unsigned char *)0xC540F98 = 0x1;
            FUN_0c0dcaac(0x1);
            (((struct o1_uchar *)0xC54098C)->v) = 0x7;
            FUN_0c05af9a(0x58, 0x0, 0x1);
            FUN_0c056e44(0x19, 0x5);
            FUN_0c059d30();
    return;
        }
        case 14:
        {
            t2 = FUN_0c0dcb6e();
            if (t2 == 0) {
                return;
            }
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            (((struct o2_uchar *)0xC54098C)->v) = 0x0;
            (((struct o3_uchar *)0xC54098C)->v) = 0x0;
            (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
            FUN_0c0dc784();
            FUN_0c0dcb18();
            FUN_0c05af9a(0x58, 0x7F, 0x12C);
            FUN_0c0d02a6();
            (((struct oC_ushort *)0xC54098C)->v) = 0x0;
            (((struct oE_ushort *)0xC54098C)->v) = 0x0;
            FUN_0c059d30();
    return;
        }
        case 16:
        {
            if (t0 == 0) {
                t2 = (((struct o8_short *)0xC54098C)->v);
                (((struct o8_ushort *)0xC54098C)->v) = (t2 - 1);
                if ((int)(short)(t2 - 1) <= (int)0x1E) {
                    (((struct o0_uchar *)0xC542235)->v) = 0x2;
                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                    FUN_0c05258e(0x63, 0xA, 0x100, 0x1, 0x0);
                }
                if (((((struct o8_short *)0xC54098C)->v)) == ((*(int *)(((0xC1C9864 + ((*(signed char *)0xC54098D) << 2)) + 0x0))) - 40)) {
                    FUN_0c05258e(0x3, 0xA, 0x2000, 0xFFFFFFFF, 0x0);
                }
            } else {
                t2 = (((struct o8_short *)0xC54098C)->v);
                (((struct o8_ushort *)0xC54098C)->v) = (t2 - 1);
                if ((int)(short)(t2 - 1) <= 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = 0x9;
                    (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                    FUN_0c05af9a(0x58, 0x40, 0xB4);
                }
            }
            t2 = (((struct oC_short *)0xC54098C)->v);
            if (!((*(float *)(((((((t2 << 1) + t2) << 2) << 2) + 0xC1C957C) + 0x0))) > ((((struct o28_float *)((*(int *)0xC540D94)))->v)))) {
                t3 = FUN_0c0d0928(((((((t2 << 1) + t2) << 2) << 2) + 0xC1C957C) + 0x10));
                t2 = (((struct oC_short *)0xC54098C)->v);
                FUN_0c0c2944(t3, 0x0, 0x0, (((((t2 << 1) + t2) << 2) << 2) + 0xC1C9580), 0xFFFFFFFF);
                (((struct oC_ushort *)0xC54098C)->v) = (((((struct oC_short *)0xC54098C)->v)) + 0x1);
            }
            FUN_0c0dc97c();
            if (4000.0f > ((((struct o28_float *)((*(int *)0xC540D94)))->v))) {
            } else {
                (((struct o1_uchar *)0xC54098C)->v) = 0xA;
                (((struct o2_uchar *)0xC54098C)->v) = 0x0;
            }
            return;
        }
        case 18:
        {
            t2 = (((struct oC_short *)0xC54098C)->v);
            if (!((*(float *)(((((((t2 << 1) + t2) << 2) << 2) + 0xC1C957C) + 0x0))) > ((((struct o28_float *)((*(int *)0xC540D94)))->v)))) {
                t3 = FUN_0c0d0928(((((((t2 << 1) + t2) << 2) << 2) + 0xC1C957C) + 0x10));
                t2 = (((struct oC_short *)0xC54098C)->v);
                FUN_0c0c2944(t3, 0x0, 0x0, (((((t2 << 1) + t2) << 2) << 2) + 0xC1C9580), 0xFFFFFFFF);
                (((struct oC_ushort *)0xC54098C)->v) = (((((struct oC_short *)0xC54098C)->v)) + 0x1);
            }
            FUN_0c0dc97c();
            if (4000.0f > ((((struct o28_float *)((*(int *)0xC540D94)))->v))) {
            } else {
                (((struct o1_uchar *)0xC54098C)->v) = 0xA;
                (((struct o2_uchar *)0xC54098C)->v) = 0x0;
            }
            return;
        }
        case 20:
        {
            if (t0 != 0) {
                if (t0 != 1) {
                } else {
                    if (5900.0f > ((((struct o28_float *)((*(int *)0xC540D94)))->v))) {
                    } else {
                        (((struct o1_uchar *)0xC54098C)->v) = 0xB;
                        (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                        FUN_0c05af9a(0x58, 0x0, 0x78);
                    }
                }
                return;
            }
            if (4800.0f > ((((struct o28_float *)((*(int *)0xC540D94)))->v))) {
                return;
            }
            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
            FUN_0c056dc6();
    return;
        }
        case 22:
        {
            t0 = (((struct o8_short *)0xC54098C)->v);
            (((struct o8_ushort *)0xC54098C)->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                t0 = FUN_0c042fe0();
                if (t0 != 0) {
                    *(unsigned char *)0xC540F98 = 0x1;
                    (((struct o1_uchar *)0xC54098C)->v) = 0xC;
                    FUN_0c0dcaac(0x2);
                    FUN_0c056e44(0x19, 0x6);
                    (((struct o0_uchar *)0xC542235)->v) = 0x0;
                    FUN_0c059d30();
    return;
                }
                return;
            }
            return;
        }
        case 24:
        {
            t0 = FUN_0c0dcb6e();
            if (t0 != 0) {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1C9864 + ((*(signed char *)0xC54098D) << 2))));
                FUN_0c0dcb18();
                (((struct o0_uchar *)0xC542235)->v) = 0x2;
                t0 = (FUN_0c0d0378(0x6, 0xB));
                t2 = t1;
                t1 = 0x0;
                for (;;) {
                    if ((int)t1 >= (int)0x4) {
                        break;
                    }
                    t3 = 0xC532498;
                    t0 = 0x3714;
                    t2 = (t1 * 0x3938);
                    t2 = (t2 + t3);
                    t4 = (*(signed char *)((t2 + t0)));
                    if (t4 != 0) {
                        t0 = 0x22;
                        t4 = (*(short *)((0xC540978 + t0)));
                        t5 = 0xC;
                        if ((t4 & ((int)0x1 << (int)t1)) == 0) {
                            t5 = 0xB;
                        }
                        t0 = (FUN_0c085cac(t2, 0x17, t5));
                    } else {
                        t5 = t4;
                        t6 = t3;
                        t7 = t2;
                    }
                    t1 = (t1 + 0x1);
                    t4 = t5;
                    t3 = t6;
                    t2 = t7;
                }
                FUN_0c059d30();
                (((struct o4_uchar *)0xC54098C)->v) = ((*(signed char *)0xC542260) & 0x3);
            }
            return;
        }
        case 26:
        {
            return;
        }
        case 28:
        {
            FUN_0c0dcaac((*(signed char *)0xC54223C));
            (((struct o1_uchar *)0xC54098C)->v) = 0xF;
            t0 = FUN_0c0dcb6e();
            if (t0 != 0) {
                (((struct o1_uchar *)0xC54098C)->v) = 0x10;
                FUN_0c0d02a6();
    return;
            }
            return;
        }
        case 30:
        {
            t0 = FUN_0c0dcb6e();
            if (t0 != 0) {
                (((struct o1_uchar *)0xC54098C)->v) = 0x10;
                FUN_0c0d02a6();
    return;
            }
            return;
        }
        default:
        {
            return;
        }
    }
}
