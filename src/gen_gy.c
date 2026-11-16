/* Straight-line functions with calls and guards (batch gen_gy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058542(int, int, float);
int FUN_0c058716(int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c16b2cc(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c11a2a8(int a4, int a5, int a6, int a7);
int FUN_0c16b38e(int a4, int a5, int a6, int a7);

int FUN_0c11a2a8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(short *)((a4 + 0x1C));
            if (((int)t1 >= 0) && ((int)t1 <= (int)0xA)) {
                FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
            }
            t1 = *(short *)((a4 + 0x1C));
            if (((int)t1 >= (int)0xA) && ((int)t1 <= (int)0x14)) {
                FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            t2 = (short)(t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0x14) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t2 = 0x14;
            }
            return t2;
        }
        if (t0 == 99) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(signed char *)((a4 + 0x2))), 0x23, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x20F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(volatile int *)((a4 + 0x10));
    FUN_0c187798();
    t0 = FUN_0c179ac0();
    t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0xF);
    }
    t0 = FUN_0c179ac0();
    t2 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t2 = (t0 & 0xF);
    }
    u0 = (((float)t2 * 360.0f) / 16.0f);
    u1 = ((u0 * 65536.0f) / 360.0f);
    u0 = (((float)t1 * 50.0f) / 16.0f);
    u2 = ((((struct o28_float *)(a4))->v));
    u2 = u2 + u0 * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
    (((struct o28_float *)(a4))->v) = u2;
    u0 = (((float)t1 * 50.0f) / 16.0f);
    u2 = ((((struct o2C_float *)(a4))->v));
    u2 = u2 + u0 * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
    (((struct o2C_float *)(a4))->v) = u2;
    t0 = FUN_0c179ac0();
    t2 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t2 = (t0 & 0xF);
    }
    u0 = (((float)t2 * 360.0f) / 16.0f);
    u1 = math_sin_angle16((0xFFFF & (int)((((u0 * 65536.0f) / 360.0f)) + (*(float *)0xC11A4F4))));
    u0 = (((float)t1 * 50.0f) / 16.0f);
    u2 = ((((struct o30_float *)(a4))->v));
    u2 = u2 + u0 * u1;
    (((struct o30_float *)(a4))->v) = u2;
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= 0) && ((int)t0 <= (int)0xA)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0xA) && ((int)t0 <= (int)0x14)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x14) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c16b38e(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t7;
    register int t16;
    register float u26;
    register int t28;
    register int t58;
    register int t71;
    register int t86;
    register int t89;
    register int t94;
    register float u111;
    register int t112;
    register int t116;
    register int t121;
    register int t8;
    register int t9;
    register int t10;
    register int t107;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                if ((*(signed char *)(((0x41C + a4) + 0x3))) != 0) {
                    t7 = *(int *)((a4 + 0x10));
                    if ((t7 != 0) && ((t8 = *(signed char *)((t7 + 0x14)), t8 == 3) || ((t9 = *(signed char *)((t7 + 0x14)), t9 == 99) || (t10 = *(int *)((t7 + 0x4)), t10 == 0)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                    }
                }
                t16 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t16))->v) = (((((struct o80_int *)(t16))->v)) + 0x71C);
                if (!(((((struct o48_float *)(a4))->v)) > (*(float *)((0xC203BBC + ((*(signed char *)(((0x41C + a4) + 0x3))) << 2)))))) {
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
                }
                u26 = (((struct o48_float *)(a4))->v);
                (((struct o44_float *)(a4))->v) = u26;
                (((struct o40_float *)(a4))->v) = u26;
                if ((*(signed char *)(((0x41C + a4) + 0x3))) == 0) {
                    t28 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t28 - 1);
                    if ((int)(short)(t28 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0xA;
                        FUN_0c16b2cc(a4, 0x0);
                    }
                }
                if ((*(signed char *)((a4 + 0x131))) != 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                } else {
                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                }
                t58 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t58 - 1);
                t121 = (short)(t58 - 1);
                if ((int)(short)(t58 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t121 = 0x14;
                }
            } else {
                t121 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            t71 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t71 - 1);
            t121 = (short)(t71 - 1);
            if ((int)(short)(t71 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xF0;
                t121 = 0xF0;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) == 13) {
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            t107 = a5;
        } else {
            t86 = FUN_0c064f80((((short)t0 * (short)0x3938) + 0xC532498));
            if (t86 == 0) {
                FUN_0c187798();
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
                t89 = FUN_0c058716(a4, ((int)stk + 0));
                t94 = 0x0;
                if ((int)t89 <= (int)0x4000) {
                    t94 = 0x38E3;
                    if ((int)t89 > (int)0x38E3) {
                    } else {
                        t94 = t89;
                        if ((int)t89 < 0) {
                            t94 = 0x0;
                        }
                    }
                    t107 = 0x38E3;
                }
                *(unsigned int *)((a4 + 0x34)) = t94;
            }
        }
        FUN_0c058542(a4, t107, 15.0f);
        (((struct oAC_ushort *)(a4))->v) = 0x31;
        u111 = *(float *)((0xC203BB0 + ((*(signed char *)(((0x41C + a4) + 0x3))) << 2)));
        (((struct o48_float *)(a4))->v) = u111;
        (((struct o44_float *)(a4))->v) = u111;
        (((struct o40_float *)(a4))->v) = u111;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t112 = *(signed char *)(((0x41C + a4) + 0x3));
        *(unsigned short *)((a4 + 0x1C)) = ((t112 << 2) + t112);
        if ((*(signed char *)(((0x41C + a4) + 0x3))) != 0) {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        }
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        t116 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t116 - 1);
        t121 = (short)(t116 - 1);
        if ((int)(short)(t116 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0xF0;
            t121 = 0xF0;
        }
    }
    return t121;
}
