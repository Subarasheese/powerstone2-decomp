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

