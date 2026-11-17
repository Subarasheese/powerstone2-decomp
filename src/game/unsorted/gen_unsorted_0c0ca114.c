/* game/unsorted: functions 0C0CA114-0C0CA59E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o10C_int { char p[0x10C]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_short { char p[0x7C]; short v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0c3f22(int, int, int);
int FUN_0c0ca114(int a4, int a5, int a6, int a7);
int FUN_0c0ca33c(int a4, int a5, float f4);

int FUN_0c0ca114(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    register float u0;

    t3 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)((a4 + 0x14))) != 0) {
        t4 = *(signed char *)((a4 + 0x424));
        if ((t4 != 0) && (t4 != 1)) {
            if (t4 != 2) {
                if (t4 != 3) {
                } else {
                    *(unsigned char *)((((((struct o100_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct o10C_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) + 0x0)) = 0x1;
                }
            } else {
                t4 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x446));
                *(unsigned char *)((((((short)(*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x371A))) * (short)0x2D0) + (0x2BC8 + (((short)t3 * (short)0x3938) + 0xC532498))) + (((((t4 << 2) << 1) + t4) << 2) << 2)) + 0x0)) = 0x1;
                t4 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x447));
                *(unsigned char *)((((((short)(*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x371A))) * (short)0x2D0) + (0x3168 + (((short)t3 * (short)0x3938) + 0xC532498))) + (((((t4 << 2) << 1) + t4) << 2) << 2)) + 0x0)) = 0x1;
            }
        }
        return FUN_0c03f346(a4, (((short)t3 * (short)0x3938) + 0xC532498), 0x1, a7);
    }
    if ((*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x3714))) != 0) {
        t4 = *(signed char *)((a4 + 0x424));
        if (((*(signed char *)(((((t4 << 2) << 1) + (0x386C + (((short)t3 * (short)0x3938) + 0xC532498))) + 0x0))) == (unsigned char)(*(signed char *)((a4 + 0x41C)))) && (t0 = *(int *)(((((t4 << 2) << 1) + (0x386C + (((short)t3 * (short)0x3938) + 0xC532498))) + 0x4)), t0 == a4)) {
            if (((*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x371A))) == 0) && ((t1 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x3715)), t1 != 32) || (t2 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x3739)), t2 != 27))) {
                (((struct oA8_uchar *)(a4))->v) = (*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0xA8)));
                if (((unsigned short)((((struct oAC_short *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) & 0x400) != 0) {
                    (((struct oAC_ushort *)(a4))->v) = 0x40F;
                    u0 = ((((struct oB0_float *)((((short)t3 * (short)0x3938) + 0xC532498)))->v));
                } else {
                    (((struct oAC_ushort *)(a4))->v) = 0xF;
                    u0 = 1.0f;
                }
                (((struct oB0_float *)(a4))->v) = u0;
                t0 = *(signed char *)((a4 + 0x424));
                t1 = t0;
                if (t0 == 0) {
                } else {
                    t2 = t0;
                    if (t0 == 1) {
                    } else {
                        if (t0 != 2) {
                            t4 = t0;
                            if (t0 != 3) {
                            } else {
                                t0 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x2));
                                if ((t0 != 6) && (t0 != 7)) {
                                    *(unsigned char *)((((((struct o100_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) + 0x0)) = 0x0;
                                    *(unsigned char *)((((((struct o10C_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) + 0x0)) = 0x0;
                                } else {
                                    *(unsigned char *)((((((struct o100_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) + 0x0)) = 0x1;
                                    *(unsigned char *)((((((struct o10C_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) + 0x0)) = 0x1;
                                }
                                if ((*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x371D))) == 6) {
                                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                                } else {
                                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                                }
                                t4 = 0xC8;
                            }
                            t0 = t4;
                        } else {
                            if ((unsigned char)(*(signed char *)((a4 + 0x41C))) != 112) {
                                t4 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x446));
                                *(unsigned char *)((((((short)(*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x371A))) * (short)0x2D0) + (0x2BC8 + (((short)t3 * (short)0x3938) + 0xC532498))) + (((((t4 << 2) << 1) + t4) << 2) << 2)) + 0x0)) = 0x0;
                                t4 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x447));
                                *(unsigned char *)((((((short)(*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x371A))) * (short)0x2D0) + (0x3168 + (((short)t3 * (short)0x3938) + 0xC532498))) + (((((t4 << 2) << 1) + t4) << 2) << 2)) + 0x0)) = 0x0;
                            }
                            t4 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x3721));
                            if (((unsigned char)t4 != 41) && ((unsigned char)t4 != 42)) {
                                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                            } else {
                                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                            }
                            t0 = 0xC4;
                        }
                        t2 = t0;
                    }
                    t1 = t2;
                }
                return t1;
            }
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            return 0xA8;
        }
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c0ca33c(int a4, int a5, float f4)
{
    int stk[2];
    int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t14;
    register int t25;
    register int t27;
    register int t29;
    register int t31;
    register int t65;
    register int t66;
    register int t67;
    register int t85;

    t2 = *(signed char *)(((((*(signed char *)((((a4 * 0x34) + 0xC2738B8) + 0x7))) << 2) << 1) + 0xC27B520));
    t3 = *(int *)0xC4B40D8;
    if ((t2 != 0) && (t2 != 1)) {
        t85 = 0x0;
        if ((t2 != 2) && (t2 != 3)) {
        } else {
            *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((((a4 * 0x34) + 0xC2738B8) + 0x1)));
            t5 = *(signed char *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 4)) = t5;
            t6 = FUN_0c037320(t5, t3);
            t7 = FUN_0c03f444(0x9, 0x0, (t6 + 0x1));
            t85 = 0x0;
            if (t7 != 0) {
                t8 = (((struct oC4_int *)(t7))->v);
                *(unsigned int *)(((int)stk + 0)) = t8;
                FUN_0c037498(t8, 0x0, (*(int *)(((int)stk + 4))), (*(int *)0xC4B40D8));
                *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x1;
                *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x6)) = 0x1F;
                t14 = (((struct oC8_int *)(t7))->v);
                *(unsigned int *)(((int)stk + 0)) = t14;
                FUN_0c037498(t14, 0x0, (*(int *)(((int)stk + 4))), (*(int *)0xC4B40D8));
                *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x1;
                *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x6)) = 0x1F;
                *(unsigned int *)((t7 + 0x4)) = 0xC0CA114;
                (((struct oA8_uchar *)(t7))->v) = 0x1;
                (((struct oAC_ushort *)(t7))->v) = 0xF;
                (((struct oA9_uchar *)(t7))->v) = 0x40;
                (((struct oB0_float *)(t7))->v) = 1.0f;
                *(unsigned char *)((t7 + 0x1)) = a5;
                (((struct o41D_uchar *)(t7))->v) = 0x1;
                (((struct o41C_uchar *)(t7))->v) = a4;
                (((struct o424_uchar *)(t7))->v) = t2;
                (((struct o1B_uchar *)(t7))->v) = 0x0;
                FUN_0c0c212c(t7);
                *(unsigned short *)(((0x12A + t7) + 0x4)) = 0x0;
                *(unsigned short *)(((0x12A + t7) + 0x2)) = 0x0;
                (((struct o12A_ushort *)(t7))->v) = 0x0;
                (((struct o17C_float *)(t7))->v) = 1.0f;
                FUN_0c0c3f22(t7, a5, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((t7 + 0x41C))) * (unsigned short)0x34) + 0xC2738BF))));
                if ((unsigned char)(*(signed char *)((t7 + 0x41C))) == 119) {
                    t25 = (((struct oC4_int *)(t7))->v);
                    (((struct o7C_uint *)(t25))->v) = (unsigned short)(((((struct o7C_short *)(t25))->v)) + 0xC000);
                    t27 = (((struct oC8_int *)(t7))->v);
                    (((struct o7C_uint *)(t27))->v) = (unsigned short)(0xC000 + ((((struct o7C_short *)(t27))->v)));
                    t29 = (((struct oC4_int *)(t7))->v);
                    (((struct o70_float *)(t29))->v) = (((((struct o70_float *)(t29))->v)) - 9.0f);
                    t31 = (((struct oC8_int *)(t7))->v);
                    (((struct o70_float *)(t31))->v) = (((((struct o70_float *)(t31))->v)) - 9.0f);
                }
                *(unsigned int *)(((((t2 << 2) << 1) + (0xC535D04 + (a5 * 0x3938))) + 0x4)) = t7;
                t85 = t7;
            }
        }
    } else {
        *(unsigned char *)(((int)stk + 4)) = (*(signed char *)((((a4 * 0x34) + 0xC2738B8) + 0x1)));
        t65 = FUN_0c037320((*(signed char *)(((int)stk + 4))), t3);
        t66 = FUN_0c03f444(0x9, 0x0, t65);
        t85 = 0x0;
        if (t66 == 0) {
        } else {
            t67 = (((struct oC4_int *)(t66))->v);
            *(unsigned int *)(((int)stk + 0)) = t67;
            FUN_0c037498(t67, 0x0, (*(signed char *)(((int)stk + 4))), (*(int *)0xC4B40D8));
            *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x6)) = 0x1F;
            *(unsigned int *)((t66 + 0x4)) = 0xC0CA114;
            (((struct oA8_uchar *)(t66))->v) = 0x1;
            (((struct oAC_ushort *)(t66))->v) = 0x40F;
            (((struct oA9_uchar *)(t66))->v) = 0x40;
            (((struct oB0_float *)(t66))->v) = 1.0f;
            *(unsigned char *)((t66 + 0x1)) = a5;
            (((struct o41D_uchar *)(t66))->v) = 0x0;
            (((struct o41C_uchar *)(t66))->v) = a4;
            (((struct o424_uchar *)(t66))->v) = t2;
            (((struct o1B_uchar *)(t66))->v) = 0x0;
            FUN_0c0c212c(t66);
            *(unsigned short *)(((0x12A + t66) + 0x4)) = 0x0;
            *(unsigned short *)(((0x12A + t66) + 0x2)) = 0x0;
            (((struct o12A_ushort *)(t66))->v) = 0x0;
            (((struct o17C_float *)(t66))->v) = 1.0f;
            FUN_0c0c3f22(t66, a5, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((t66 + 0x41C))) * (unsigned short)0x34) + 0xC2738BF))));
            *(unsigned int *)(((((t2 << 2) << 1) + (0xC535D04 + (a5 * 0x3938))) + 0x4)) = t66;
            t85 = t66;
        }
    }
    return t85;
}
