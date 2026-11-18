/* game/hit: functions 0C0C8C08-0C0C9D8C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o426_short { char p[0x426]; short v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int FUN_0c059df2(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c07d2c4(int, int);
int FUN_0c07dbd8(int, int);
int FUN_0c07e328(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c241a(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c4482(int, int, int);
int FUN_0c0c4770(int, int, int);
int FUN_0c0c47a4(int, int, int);
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c52c4(int, int, int);
int FUN_0c0c7f4c(int);
int FUN_0c0c8c08(int, int, int);
int FUN_0c0c8c36(int, int, int);
int FUN_0c0c8c90(int);
int FUN_0c0c8d00(int, int, int, int, int, int);
int FUN_0c0c8e8c(int);
int FUN_0c0c8f2e(int);
int FUN_0c0c8f70(int, int, int);
int FUN_0c15c344(int, int, int, int);
int FUN_0c1614c8(int, int);
int FUN_0c1632e0(int, int, int, float);
int FUN_0c16ab9e(int, int);
int FUN_0c16ac5c(int);
int FUN_0c16c210(int);
int FUN_0c16dd24(int, int);
int FUN_0c16e8f0(int);
int FUN_0c187798(void);
int FUN_0c0c8fd4(int a4, int a5, int a6);
int FUN_0c0c9568(int a4, int a5, int a6);
int FUN_0c0c9810(int a4, int a5, int a6);
int FUN_0c0c9884(int a4, int a5, int a6, int a7, int a8);


int FUN_0c0c9568(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0c3e3a(a4, a5, a6);
    if (t0 != 0) {
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = FUN_0c0c2ce4(a4);
            if (t1 != 0) {
                if (t1 != 2) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    return 0x15;
                }
                return FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1))));
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            return 0x50;
        }
        if (t0 == 2) {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                FUN_0c16ac5c(a4);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x56);
                return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
            }
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0xE39);
            return 0x7C;
        }
        if (t0 == 3) {
            t1 = *(signed char *)((a4 + 0x16));
            if (t1 != 0) {
                if (t1 != 1) {
                    return t1;
                }
                (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)0xC542260) & 0x1);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                }
                return (short)(t1 - 1);
            }
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x666);
            if (0.0f > ((((struct o50_float *)(a4))->v))) {
                t1 = FUN_0c0c2ce4(a4);
                if (t1 != 0) {
                    if (t1 == 2) {
                        return FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1))));
                    }
                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    return 0x16;
                }
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            return 0x50;
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x41C));
    if ((unsigned char)t0 != 79) {
        if ((unsigned char)t0 != 80) {
            if ((unsigned char)t0 != 81) {
                if ((unsigned char)t0 != 76) {
                    if ((unsigned char)t0 != 75) {
                        if ((unsigned char)t0 != 82) {
                            if ((unsigned char)t0 != 121) {
                                if (((unsigned char)t0 != 64) && ((unsigned char)t0 != 65)) {
                                    if (((unsigned char)t0 != 100) && ((unsigned char)t0 != 115)) {
                                        t1 = (unsigned char)t0;
                                        if (((unsigned char)t0 == 7) || ((unsigned char)t0 == 45)) {
                                            FUN_0c0c2ab6(a4, 0x3E);
                                            (((struct o12A_ushort *)(a4))->v) = 0x0;
                                            (((struct o50_float *)(a4))->v) = 20.0f;
                                            (((struct o5C_float *)(a4))->v) = -2.0f;
                                            (((struct o15_uchar *)(a4))->v) = 0x3;
                                            (((struct o16_uchar *)(a4))->v) = 0x0;
                                            t1 = 0x16;
                                        }
                                        t0 = t1;
                                    } else {
                                        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
                                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                                        (((struct o50_float *)(a4))->v) = 20.0f;
                                        (((struct o5C_float *)(a4))->v) = -2.0f;
                                        (((struct o15_uchar *)(a4))->v) = 0x3;
                                        (((struct o16_uchar *)(a4))->v) = 0x0;
                                        t0 = 0x16;
                                    }
                                    return t0;
                                }
                                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x49);
                                FUN_0c0c4482(a4, 0x5, 0x50);
                                return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                            }
                            FUN_0c16dd24((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x1);
                            return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                        }
                        FUN_0c16dd24((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x0);
                        return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                    }
                    FUN_0c16c210(a4);
                    return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                }
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = -2.0f;
                FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                FUN_0c0c25c4(a4);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                return 0x15;
            }
            FUN_0c16ab9e((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x2);
            return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
        }
        FUN_0c16ab9e((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x1);
        return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    }
    FUN_0c16ab9e((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x0);
    return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c0c9810(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c0c4770(a4, a5, a6);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4, a5, a6);
            }
            case 4:
            {
                return FUN_0c0c4b76(a4, a5, a6);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4, a5, a6);
            }
            case 8:
            {
                return FUN_0c0c4c1c(a4, a5, a6);
            }
            case 10:
            {
                return FUN_0c0c5024(a4, a5, a6);
            }
            case 12:
            {
                return FUN_0c0c52c4(a4, a5, a6);
            }
            case 14:
            {
                return FUN_0c0c8c08(a4, a5, a6);
            }
            case 16:
            {
                return FUN_0c0c8c36(a4, a5, a6);
            }
            case 18:
            {
                return FUN_0c0c8fd4(a4, a5, a6);
            }
            case 20:
            {
                return FUN_0c0c9568(a4, a5, a6);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}

