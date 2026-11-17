/* game/unsorted: functions 0C0CA7BC-0C0CACA0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c3e3a(int);
int FUN_0c0c4770(int, int, int);
int FUN_0c0c47a4(int);
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c52c4(int, int, int);
int FUN_0c1614c8(int, int);
int FUN_0c16328c(int, int, int, float);
int FUN_0c187798(void);
int FUN_0c0ca7bc(int a4, float f4);
int FUN_0c0ca928(int a4, int a5, int a6, int a7);
int FUN_0c0caaf0(int a4, int a5, int a6, int a7, int a8);

int FUN_0c0ca7bc(int a4, float f4)
{
    int stk[3];
    register float u9;
    register int t11;
    register int t15;
    register int t20;
    register int t22;
    register int t12;
    register int t13;
    register int t16;
    register int t18;
    register int t21;

    if (((*(int *)0xC542260) & 2) == 0) {
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    } else {
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
    (((struct o8_float *)(((int)stk + 0)))->v) = 0.0f;
    *(float *)((((int)stk + 0) + 0x0)) = 0.0f;
    u9 = -25.0f;
    u9 = u9 + 25.0f * f4;
    (((struct o4_float *)(((int)stk + 0)))->v) = u9;
    *(volatile int *)((a4 + 0xC8));
    t11 = ((int (*)(int, int, int))(FUN_0c187798))(a4, ((int)stk + 0), 0x0);
    *(volatile int *)((t13 + 0xCC));
    t15 = ((int (*)(int, int))(FUN_0c187798))(t13, t12);
    (((struct o4_float *)(t16))->v) = (((((struct o4_float *)(t16))->v)) + 80.0f);
    *(volatile int *)((t18 + 0xD0));
    t20 = ((int (*)(int, int))(FUN_0c187798))(t18, t16);
    t22 = (((struct oD0_int *)(t21))->v);
    (((struct o7C_uint *)(t22))->v) = (((((struct o7C_int *)(t22))->v)) + 0x5000);
    return 0x7C;
}

int FUN_0c0ca928(int a4, int a5, int a6, int a7)
{
    int stk[7];
    int t0;
    register int t10;
    register int t12;
    register int t50;
    register int t67;
    register int t79;
    register int t8;
    register int t9;
    int t35;
    register int t78;

    t0 = *(signed char *)((a4 + 0x41D));
    if ((t0 != 0) && (t0 != 1)) {
        if (((*(signed char *)0xC542235) != 2) && ((t8 = (((struct o22_short *)(a4))->v), t8 != 0) || (t9 = *(signed char *)((a4 + 0x41D)), t9 == 11))) {
        } else {
            t10 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t10 - 1);
            if ((int)(short)(t10 - 1) <= 0) {
                math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
                t12 = *(signed char *)((a4 + 0x41C));
                if ((unsigned char)t12 != 8) {
                    if ((unsigned char)t12 != 9) {
                        if ((unsigned char)t12 != 10) {
                        } else {
                            FUN_0c16328c(0xFFFFFFFF, ((int)stk + 0), 0x4, 1.0f);
                        }
                    } else {
                        FUN_0c16328c(0xFFFFFFFF, ((int)stk + 0), 0x3, 0.5f);
                    }
                } else {
                    FUN_0c16328c(0xFFFFFFFF, ((int)stk + 0), 0x2, 0.300000012f);
                }
                (((struct o41D_uchar *)(a4))->v) = 0xB;
            }
        }
        if (((*(signed char *)((a4 + 0x132))) != 0) && (t35 = (((struct o22_short *)(a4))->v), (int)t35 > (int)0x1E)) {
            (((struct o22_ushort *)(a4))->v) = 0xA;
        }
        if ((int)((((struct o22_short *)(a4))->v)) < (int)0x78) {
            (((struct oB8_float *)(a4))->v) = 0.5f;
            (((struct oBC_float *)(a4))->v) = 0.5f;
        }
    }
    t50 = *(signed char *)((a4 + 0x41C));
    if (((unsigned char)t50 != 8) && ((unsigned char)t50 != 9)) {
        if ((unsigned char)t50 != 10) {
        } else {
            FUN_0c0ca7bc(a4, ((float)((((struct o22_short *)(a4))->v)) / 480.0f));
        }
    } else {
        FUN_0c0ca7bc(a4, ((float)((((struct o22_short *)(a4))->v)) / 300.0f));
    }
    FUN_0c0c3e3a(a4);
    t67 = *(signed char *)((a4 + 0x41D));
    t79 = t67;
    if ((unsigned int)t67 < (unsigned int)0xC) {
        switch ((t67 << 1)) {
            case 0:
            {
                t78 = (FUN_0c0c4770(a4, 0x0, 0x0));
            }
                break;
            case 2:
            {
                t78 = (FUN_0c0c47a4(a4));
            }
                break;
            case 4:
            {
                t78 = (FUN_0c0c4b76(a4, 0x0, 0x0));
            }
                break;
            case 6:
            {
                t78 = (FUN_0c0c4bcc(a4));
            }
                break;
            case 8:
            {
                t78 = (FUN_0c0c4c1c(a4, 0x0, 0x0));
            }
                break;
            case 10:
            {
                t78 = (FUN_0c0c5024(a4, 0x0, 0x0));
            }
                break;
            case 12:
            {
                t78 = (FUN_0c0c52c4(a4, 0x0, 0x0));
            }
                break;
            case 14:
            case 16:
            {
                t78 = (((int (*)(int, int, int, int))(0xC0CA8CC))(a4, a5, a6, a7));
            }
                break;
            default:
            {
                t78 = (FUN_0c0c2a80(a4));
            }
                break;
        }
        t79 = t78;
    }
    return t79;
}

int FUN_0c0caaf0(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t58;
    register int t6;
    register int t7;
    register int t28;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 20)) = (t0 * 0x34);
    (((struct o18_uchar *)(((int)stk + 0)))->v) = (*(signed char *)((((t0 * 0x34) + 0xC2738B8) + 0x1)));
    t2 = *(signed char *)(((int)stk + 24));
    t3 = (((struct oC_int *)0xC4B40CC)->v);
    *(unsigned int *)(((int)stk + 16)) = t2;
    t4 = FUN_0c037320(t2, t3);
    t58 = 0x0;
    if ((int)t4 < 0) {
    } else {
        t6 = FUN_0c037320(0x27, ((((struct o0_int *)0xC4B40CC)->v)));
        t58 = 0x0;
        if ((int)t6 < 0) {
        } else {
            t7 = FUN_0c03f444(0x9, 0x0, (t4 + t6));
            t58 = 0x0;
            if (t7 == 0) {
            } else {
                FUN_0c03733c(t7, (*(int *)(((int)stk + 16))), ((((struct oC_int *)0xC4B40CC)->v)));
                FUN_0c03744a(((((struct oD0_int *)(t7))->v)), 0x0, 0x27, ((((struct o0_int *)0xC4B40CC)->v)));
                (((struct o68_uint *)((*(int *)(((0xC4 + t7) + 0xC)))))->v) = (((((struct oC4_int *)(t7))->v)) + 0x28);
                *(unsigned int *)((t7 + 0x4)) = 0xC0CA928;
                (((struct oAC_ushort *)(t7))->v) = 0x21F;
                (((struct oA9_uchar *)(t7))->v) = 0x40;
                FUN_0c0c25c4(t7);
                (((struct o41D_uchar *)(t7))->v) = 0x0;
                (((struct o41C_uchar *)(t7))->v) = (*(int *)(((int)stk + 0)));
                (((struct o424_uchar *)(t7))->v) = (*(int *)(((int)stk + 8)));
                (((struct o1B_uchar *)(t7))->v) = (*(int *)(((int)stk + 4)));
                FUN_0c0c2ab6(t7, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t7 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
                (((struct o12C_ushort *)(t7))->v) = 0x0;
                (((struct o420_ushort *)(t7))->v) = (*(short *)(((0xC2738B8 + (*(int *)(((int)stk + 20)))) + 0x1A)));
                FUN_0c0c212c(t7);
                *(volatile int *)(((int)stk + 12));
                FUN_0c187798();
                (((struct oB4_float *)(t7))->v) = 1.0f;
                (((struct oB8_float *)(t7))->v) = 1.0f;
                (((struct oBC_float *)(t7))->v) = 1.0f;
                t28 = *(signed char *)((t7 + 0x41C));
                if ((unsigned char)t28 != 8) {
                    if ((unsigned char)t28 != 9) {
                        if ((unsigned char)t28 != 10) {
                        } else {
                            (((struct o22_ushort *)(t7))->v) = 0x1E0;
                        }
                    } else {
                        (((struct o22_ushort *)(t7))->v) = 0x168;
                    }
                } else {
                    (((struct o22_ushort *)(t7))->v) = 0x12C;
                }
                *(unsigned char *)((((((struct oC8_int *)(t7))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oCC_int *)(t7))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oD0_int *)(t7))->v)) + 0x0)) = 0x0;
                FUN_0c0c2aa2(t7, a8);
                FUN_0c1614c8(t7, 0x0);
                t58 = t7;
            }
        }
    }
    return t58;
}
