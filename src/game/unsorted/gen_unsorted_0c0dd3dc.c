/* game/unsorted: functions 0C0DD3DC-0C0DD65E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0bbf58(int);
int FUN_0c0d04c4(int, int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c0dd3dc(int a4);
int FUN_0c0dd3ec(int a4);
int FUN_0c0dd428(int a4, int a5, int a6, int a7);

int FUN_0c0dd3dc(int a4)
{
    (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
    (((struct o160_float *)(a4))->v) = (*(float *)0xC0DD4F0);
    return 0x160;
}

int FUN_0c0dd3ec(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        if (((((struct o160_float *)(a4))->v)) != 0.0f) {
            (((struct o15_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            (((struct o12C_ushort *)(a4))->v) = 0x0;
        }
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0dd428(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t3;
    register int t9;
    register int t10;
    register float u17;
    register int t19;
    register int t20;
    register int t24;
    register float u31;
    register int t33;
    register int t34;
    register int t37;
    register int t38;
    register float u45;
    register int t48;
    register int t68;
    register float u75;
    register int t78;
    register int t101;
    register int t99;
    register int t107;
    register int t111;
    register int t115;
    register int t121;
    register int t122;
    register float u129;
    register int t131;
    register int t132;
    register int t136;
    register float u143;
    register int t145;
    register int t146;
    register int t149;
    register int t150;
    register float u157;
    register int t160;
    register int t179;
    register float u186;
    register int t189;
    register int t211;
    register int t209;
    register int t110;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        t3 = *(signed char *)((a4 + 0x15));
        if (t3 != 0) {
            if (t3 != 1) {
                if (t3 != 2) {
                    return t3;
                }
                t9 = *(signed char *)((a4 + 0x16));
                if (t9 != 0) {
                    if (t9 != 1) {
                        return t9;
                    }
                    t10 = *(signed char *)((a4 + 0x2));
                    u17 = ((((struct o8_float *)(((((t10 << 1) + t10) << 2) + 0xC1CA094)))->v));
                    u17 = u17 + (((float)(*(short *)((a4 + 0x1C))) / 2.5f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                    (((struct o30_float *)(a4))->v) = u17;
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    t19 = *(short *)((a4 + 0x1C));
                    if ((int)t19 <= 0) {
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t20 = *(signed char *)((a4 + 0x2));
                        (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t20 << 1) + t20) << 2))))->v));
                        return FUN_0c0dd3dc(a4);
                    }
                    return t19;
                }
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t24 = *(signed char *)((a4 + 0x2));
                u31 = ((((struct o8_float *)(((((t24 << 1) + t24) << 2) + 0xC1CA094)))->v));
                u31 = u31 + (((float)(*(short *)((a4 + 0x1C))) / 2.5f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                (((struct o30_float *)(a4))->v) = u31;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                t33 = *(short *)((a4 + 0x1C));
                if ((int)t33 <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t34 = *(signed char *)((a4 + 0x2));
                    (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t34 << 1) + t34) << 2))))->v));
                    return FUN_0c0dd3dc(a4);
                }
                return t33;
            }
            t37 = *(signed char *)((a4 + 0x16));
            if (t37 != 0) {
                if (t37 != 1) {
                } else {
                    t38 = *(signed char *)((a4 + 0x2));
                    u45 = ((((struct o8_float *)(((((t38 << 1) + t38) << 2) + 0xC1CA094)))->v));
                    u45 = u45 + (((float)(*(short *)((a4 + 0x1C))) / 10.0f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                    (((struct o30_float *)(a4))->v) = u45;
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t48 = *(signed char *)((a4 + 0x2));
                        (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t48 << 1) + t48) << 2))))->v));
                    }
                }
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t68 = *(signed char *)((a4 + 0x2));
                u75 = ((((struct o8_float *)(((((t68 << 1) + t68) << 2) + 0xC1CA094)))->v));
                u75 = u75 + (((float)(*(short *)((a4 + 0x1C))) / 10.0f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                (((struct o30_float *)(a4))->v) = u75;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t78 = *(signed char *)((a4 + 0x2));
                    (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t78 << 1) + t78) << 2))))->v));
                }
            }
            return FUN_0c0dd3ec(a4);
        }
        FUN_0c0dd3ec(a4);
        t101 = 0x15;
        if ((*(signed char *)((a4 + 0x15))) != 0) {
        } else {
            t99 = ((int (*)(void))(FUN_0c187798))();
            t101 = (FUN_0c0bbf58(a4));
        }
        return t101;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(volatile signed char *)((a4 + 0x2));
    t107 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    FUN_0c0dd3dc(a4);
    FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
    t111 = 0x0;
    for (;;) {
        if ((int)t111 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t110 = t111;
        t110 = (t110 << 2);
        t110 = (t110 + (0xC4 + a4));
        t110 = (*(int *)((t110 + 0x0)));
        FUN_0c0d04c4((t110 + 0x6), (t110 + 0x78));
        t111 = (t111 + 0x1);
    }
    t115 = *(signed char *)((a4 + 0x15));
    if (t115 != 0) {
        if (t115 != 1) {
            if (t115 != 2) {
                return t115;
            }
            t121 = *(signed char *)((a4 + 0x16));
            if (t121 != 0) {
                if (t121 != 1) {
                    return t121;
                }
                t122 = *(signed char *)((a4 + 0x2));
                u129 = ((((struct o8_float *)(((((t122 << 1) + t122) << 2) + 0xC1CA094)))->v));
                u129 = u129 + (((float)(*(short *)((a4 + 0x1C))) / 2.5f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                (((struct o30_float *)(a4))->v) = u129;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                t131 = *(short *)((a4 + 0x1C));
                if ((int)t131 <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t132 = *(signed char *)((a4 + 0x2));
                    (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t132 << 1) + t132) << 2))))->v));
                    return FUN_0c0dd3dc(a4);
                }
                return t131;
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            t136 = *(signed char *)((a4 + 0x2));
            u143 = ((((struct o8_float *)(((((t136 << 1) + t136) << 2) + 0xC1CA094)))->v));
            u143 = u143 + (((float)(*(short *)((a4 + 0x1C))) / 2.5f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
            (((struct o30_float *)(a4))->v) = u143;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            t145 = *(short *)((a4 + 0x1C));
            if ((int)t145 <= 0) {
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t146 = *(signed char *)((a4 + 0x2));
                (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t146 << 1) + t146) << 2))))->v));
                return FUN_0c0dd3dc(a4);
            }
            return t145;
        }
        t149 = *(signed char *)((a4 + 0x16));
        if (t149 != 0) {
            if (t149 != 1) {
            } else {
                t150 = *(signed char *)((a4 + 0x2));
                u157 = ((((struct o8_float *)(((((t150 << 1) + t150) << 2) + 0xC1CA094)))->v));
                u157 = u157 + (((float)(*(short *)((a4 + 0x1C))) / 10.0f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                (((struct o30_float *)(a4))->v) = u157;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t160 = *(signed char *)((a4 + 0x2));
                    (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t160 << 1) + t160) << 2))))->v));
                }
            }
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            t179 = *(signed char *)((a4 + 0x2));
            u186 = ((((struct o8_float *)(((((t179 << 1) + t179) << 2) + 0xC1CA094)))->v));
            u186 = u186 + (((float)(*(short *)((a4 + 0x1C))) / 10.0f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
            (((struct o30_float *)(a4))->v) = u186;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t189 = *(signed char *)((a4 + 0x2));
                (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t189 << 1) + t189) << 2))))->v));
            }
        }
        return FUN_0c0dd3ec(a4);
    }
    FUN_0c0dd3ec(a4);
    t211 = 0x15;
    if ((*(signed char *)((a4 + 0x15))) != 0) {
    } else {
        t209 = ((int (*)(void))(FUN_0c187798))();
        t211 = (FUN_0c0bbf58(a4));
    }
    return t211;
}
