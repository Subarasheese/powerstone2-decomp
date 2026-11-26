/* Straight-line functions with calls and guards (batch gen_ic): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3818_short { char p[0x3818]; short v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB0_short { char p[0xB0]; short v; };
struct oB2_short { char p[0xB2]; short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c010448(void);
int FUN_0c0117a0(int);
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018f40(int, int, int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cd2c(int);
int FUN_0c01ceac(void);
int FUN_0c01d094(void);
int FUN_0c01e9e4(void);
int FUN_0c02b342(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03afdc(int);
int FUN_0c03b25a(int);
int FUN_0c03c5c0(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c03c7ec(int);
int FUN_0c046238(void);
int FUN_0c046266(int, int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c07cb70(int, int, int, int);
int FUN_0c07cffa(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int, int);
int FUN_0c08076a(int);
int FUN_0c083cf0(int, int, int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c2cef80(int, int);
int FUN_0c2d73f6(int);
int FUN_0c2d7750(void);
int FUN_0c2e4720(void);
int FUN_0c2e6310(void);
int FUN_0c2e635a(void);
int FUN_0c2e638e(void);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int, int, int);
int FUN_0c2e7790(void);
int FUN_0c2e8a12(int);
int FUN_0c2e8a2e(int, int);
int FUN_0c2f294e(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int memset(int, int, int);
int nlRand(void);
int strcpy(int, int);
int strlen(int);
int strncpy(int, int, int);
extern int syCfgGetIndividualID();
int thunk_FUN_0c03f346(int);
int FUN_0c068acc(int a4);
void FUN_0c018fd8(int a4);
int FUN_0c0104ea(int a4, int a5, int a6, int a7);
int FUN_0c01de2c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c01d294(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c2e4330(int a4);


/* FUN_0c018fd8, written by hand from the original (1,686 bytes; the generated C was 13,216).
   A menu screen object a4: byte +20 is the phase (0..4), word +28 a frame counter, byte +3 the screen id, byte +21 the sub-phase of
   phase 4. Phases 1-3 animate floats at +64/+68/+176 with cos/sin of (counter << 10); phase 3 then draws the screen for id +3. */

/* manual: written by hand, 2026-11-23/24 (build/manual/notes.txt) */
void FUN_0c018fd8(int a4)
{
    int stk[32];
    int p;
    int n;
    int m;
    int s;
    float f;
    float g;

    switch (*(unsigned char *)(a4 + 20)) {
    case 0:
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        *(float *)(a4 + 48) = 2.0f;
        *(unsigned short *)(a4 + 172) = *(unsigned short *)(a4 + 172) | 0x410;
        *(float *)(a4 + 68) = 0.0199999996f;
        *(float *)(a4 + 64) = 0.0199999996f;
        *(float *)(a4 + 72) = 1.0f;
        *(float *)(a4 + 176) = 0.899999976f;
        *(short *)(a4 + 28) = 16;
    case 1:
        *(short *)(a4 + 28) = *(short *)(a4 + 28) - 1;
        *(float *)(a4 + 64) = math_cos_angle16((int)*(short *)(a4 + 28) << 10);
        if (*(short *)(a4 + 28) != 0) {
            return;
        }
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        *(short *)(a4 + 28) = 16;
    case 2:
        *(short *)(a4 + 28) = *(short *)(a4 + 28) - 1;
        *(float *)(a4 + 68) = math_cos_angle16((int)*(short *)(a4 + 28) << 10);
        if (*(short *)(a4 + 28) != 0) {
            return;
        }
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        *(unsigned short *)(a4 + 172) = *(unsigned short *)(a4 + 172) & 0xFFEF;
    case 3:
        if (*(signed char *)0xC30503C == *(signed char *)(a4 + 3)) {
            *(unsigned char *)(a4 + 20) = 4;
            *(unsigned char *)(a4 + 21) = 0;
        }
        *(short *)(a4 + 28) = *(short *)(a4 + 28) + 1;
        f = 0.899999976f;
        f = f + 0.0500000007f * math_sin_angle16((int)*(short *)(a4 + 28) << 10);
        *(float *)(a4 + 176) = f;
        p = *(int *)(0xC20DDFC + (int)*(signed char *)(a4 + 3) * 4);
        for (;;) {
            FUN_0c02b502(*(unsigned short *)p);
            FUN_0c02b3ba(*(int *)(p + 12), *(float *)(p + 4), *(float *)(p + 8), 2.0f);
            if (*(short *)(p + 16) != 0) {
                break;
            }
            p = p + 20;
        }
        stk[0] = (int)&stk[12];
        switch (*(signed char *)(a4 + 3)) {
        case 23:
            p = p + 20;
            FUN_0c02b342(0xC30999E, stk[0]);
            FUN_0c02b502(*(unsigned short *)p);
            FUN_0c02b3ba(stk[0], *(float *)(p + 4), *(float *)(p + 8), 2.0f);
            break;
        case 24:
            strcpy((int)&stk[2], 0xC3051C4);
            stk[0] = (int)&stk[12];
            FUN_0c02b342((int)&stk[2], (int)&stk[12]);
            *(unsigned char *)&stk[1] = strlen((int)&stk[2]);
            FUN_0c02b502(6);
            FUN_0c02b3ba(stk[0], (float)(320 - (*(unsigned char *)&stk[1] * 24) / 2), 180.0f, 2.0f);
            break;
        case 26:
        case 67:
            FUN_0c02b342(0xC30A404, stk[0]);
            FUN_0c02b502(3);
            FUN_0c02b3ba(stk[0], 248.0f, 156.0f, 2.0f);
            break;
        case 55:
            s = *(int *)0xC3BABB4;
            if ((*(unsigned int *)s & 1) != 0) {
                strcpy((int)&stk[12], s + 0x16C);
            } else {
                strcpy((int)&stk[12], s + 8);
            }
            if ((unsigned char)strlen((int)&stk[12]) <= 20) {
                FUN_0c02b502(7);
                FUN_0c02b3ba((int)&stk[12], 262.0f, 228.0f, 2.0f);
            } else {
                *(unsigned char *)((int)&stk[12] + 20) = 0;
                FUN_0c02b502(7);
                FUN_0c02b3ba((int)&stk[12], 262.0f, 228.0f, 2.0f);
                FUN_0c02b3ba(0xC1A758C, 502.0f, 228.0f, 2.0f);
            }
            break;
        case 60:
            p = p + 20;
            s = *(int *)(a4 + 16);
            FUN_0c02b342(s, stk[0]);
            FUN_0c02b502(*(unsigned short *)p);
            FUN_0c02b3ba(stk[0], *(float *)(p + 4) + 168.0f, *(float *)(p + 8), 2.0f);
            n = (unsigned char)strlen(s + 8);
            n = n + (n & 1);
            FUN_0c02b502(3);
            f = (float)(320 - (n * 24) / 4);
            FUN_0c02b3ba(s + 8, f + -24.0f, 180.0f, 2.0f);
            FUN_0c02b502(7);
            m = (n >> 1) - 1;
            FUN_0c02b3ba(0xC1A7590, (float)(m * 24) + f, 180.0f, 2.0f);
            break;
        case 32:
        case 22:
            p = p + 20;
            FUN_0c02b342(0xC30A34C, stk[0]);
            FUN_0c02b502(*(unsigned short *)p);
            FUN_0c02b3ba(stk[0], *(float *)(p + 4) + 168.0f, *(float *)(p + 8), 2.0f);
            n = (unsigned char)strlen(0xC30A354);
            n = n + (n & 1);
            FUN_0c02b502(3);
            f = (float)(320 - (n * 24) / 4);
            FUN_0c02b3ba(0xC30A354, f + -24.0f, 180.0f, 2.0f);
            FUN_0c02b502(7);
            m = (n >> 1) - 1;
            FUN_0c02b3ba(0xC1A7590, (float)(m * 24) + f, 180.0f, 2.0f);
            break;
        case 21:
            p = p + 20;
            FUN_0c02b342(0xC30A34C, stk[0]);
            FUN_0c02b502(*(unsigned short *)p);
            FUN_0c02b3ba(stk[0], *(float *)(p + 4) + 168.0f, *(float *)(p + 8), 2.0f);
            n = (unsigned char)strlen(0xC30A354);
            n = n + (n & 1);
            FUN_0c02b502(3);
            f = (float)(320 - (n * 24) / 4);
            g = *(float *)(p + 8) + 72.0f;
            FUN_0c02b3ba(0xC30A354, f + -24.0f, g, 2.0f);
            FUN_0c02b502(7);
            m = (n >> 1) - 1;
            FUN_0c02b3ba(0xC1A7590, (float)(m * 24) + f, *(float *)(p + 8) + 72.0f, 2.0f);
            break;
        case 70:
            FUN_0c02b502(3);
            FUN_0c02b3ba(*(signed char *)(a4 + 24) == 0 ? 0xC1A7598 : 0xC1A75A0, 416.0f, 204.0f, 2.0f);
            s = *(signed char *)(a4 + 25);
            FUN_0c02b3ba(s == 0 ? 0xC1A7598 : s == 1 ? 0xC1A75A0 : 0xC1A75A8, 416.0f, 228.0f, 2.0f);
            s = *(signed char *)(a4 + 26);
            FUN_0c02b3ba(s == 0 ? 0xC1A7598 : s == 1 ? 0xC1A75B0 : 0xC1A75B8, 416.0f, 252.0f, 2.0f);
            break;
        case 28:
            p = p + 20;
            FUN_0c02b502(*(int *)0xC5426EC == 0 ? 19 : 7);
            FUN_0c02b3ba(*(int *)(p + 12), *(float *)(p + 4), *(float *)(p + 8), 2.0f);
            break;
        }
        return;
    case 4:
        s = *(signed char *)(a4 + 21);
        if (s == 0) {
            *(unsigned char *)(a4 + 21) = *(unsigned char *)(a4 + 21) + 1;
            *(unsigned short *)(a4 + 172) = *(unsigned short *)(a4 + 172) & 0xFBFF;
            *(unsigned short *)(a4 + 172) = *(unsigned short *)(a4 + 172) | 0x10;
            *(float *)(a4 + 68) = 1.0f;
            *(float *)(a4 + 64) = 1.0f;
            *(short *)(a4 + 28) = 12;
        } else if (s != 1) {
            return;
        }
        *(short *)(a4 + 28) = *(short *)(a4 + 28) - 1;
        f = 1.0f;
        f = f + 0.699999988f * math_cos_angle16((int)*(short *)(a4 + 28) * 0x555);
        *(float *)(a4 + 64) = f;
        *(float *)(a4 + 68) = -math_cos_angle16((int)*(short *)(a4 + 28) * 0x555) + 1.0f;
        if (*(short *)(a4 + 28) == 0) {
            *(unsigned char *)(a4 + 168) = 0;
            *(unsigned char *)(a4 + 21) = *(unsigned char *)(a4 + 21) + 1;
            if (*(signed char *)0xC30503C != -1) {
                *(unsigned char *)0xC30EFA2 = 0;
            }
            thunk_FUN_0c03f346(a4);
        }
        return;
    }
}


int FUN_0c01d294(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t0;
    int qa0;
    int t4;
    int t5;
    int t3;
    int t1;
    int t2;

    qa0 = 0xC30EF6C;
    t0 = (((struct o0_int *)0xC305050)->v);
    t1 = (((struct o4_int *)0xC305050)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t2 = FUN_0c03c5c0(0x0, t1, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
                    if (t2 == 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x4;
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                        *(unsigned char *)0xC30B6FD = 0x0;
                    } else {
                        if (t2 == -1) {
                        } else {
                            if (((((struct o14_int *)0xC305050)->v)) == 0) {
                                (((struct o0_uint *)0xC305050)->v) = 0x63;
                            } else {
                                (((struct o0_uint *)0xC305050)->v) = 0x64;
                            }
                            (((struct o4_uint *)0xC305050)->v) = 0x0;
                        }
                    }
                    t2 = 0x0;
                } else {
                    if (t0 == 4) {
                        if (t1 != 0) {
                            if (t1 != 1) {
                                if (t1 != 2) {
                                    t3 = 0x0;
                                    if (t1 != 3) {
                                    } else {
                                        t4 = *(short *)qa0;
                                        *(unsigned short *)qa0 = (t4 - 1);
                                        t5 = 0x0;
                                        if ((int)(short)(t4 - 1) > 0) {
                                        } else {
                                            FUN_0c01e9e4();
                                            t5 = 0x1;
                                        }
                                        t3 = t5;
                                    }
                                    t4 = t3;
                                } else {
                                    t3 = *(short *)qa0;
                                    *(unsigned short *)qa0 = (t3 - 1);
                                    if ((int)(short)(t3 - 1) > 0) {
                                        t3 = FUN_0c01cd2c(0x101);
                                        if ((short)t3 == 0) {
                                        } else {
                                            *(unsigned short *)qa0 = 0x14;
                                            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                    } else {
                                        *(unsigned short *)qa0 = 0x14;
                                        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    }
                                    t4 = 0x0;
                                }
                                t3 = t4;
                            } else {
                                t4 = *(short *)qa0;
                                *(unsigned short *)qa0 = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    FUN_0c018e74(0x32);
                                    (((struct oC_uint *)0xC305050)->v) = 0x32;
                                    *(unsigned short *)qa0 = 0x14C;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                t3 = 0x0;
                            }
                            t4 = t3;
                        } else {
                            FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                            *(unsigned short *)qa0 = 0xC;
                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                            t4 = 0x0;
                        }
                        t3 = t4;
                    } else {
                        if (t0 == 99) {
                            switch (t1) {
                            case 0:
                                FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                *(unsigned short *)qa0 = 0xC;
                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                (((struct o8_uint *)0xC305050)->v) = 0x1;
                                break;
                            case 1:
                                t4 = *(short *)qa0;
                                *(unsigned short *)qa0 = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    FUN_0c018e74(0x3E);
                                    (((struct oC_uint *)0xC305050)->v) = 0x3E;
                                    *(unsigned short *)qa0 = 0x20;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                break;
                            case 2:
                                t4 = *(short *)qa0;
                                *(unsigned short *)qa0 = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                break;
                            case 3:
                                t4 = FUN_0c01cd2c(0x101);
                                if ((short)t4 == 0) {
                                } else {
                                    FUN_0c05aab6(0x0, 0x3);
                                    (((struct o14_uint *)0xC305050)->v) = 0x1;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                    *(unsigned short *)qa0 = 0xC;
                                }
                                break;
                            case 4:
                                t4 = *(short *)qa0;
                                *(unsigned short *)qa0 = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    (((struct o0_uint *)0xC305050)->v) = 0x1;
                                    (((struct o8_uint *)0xC305050)->v) = 0x0;
                                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                                }
                                break;
                            }
                            t4 = 0x0;
                        } else {
                            t5 = 0x0;
                            if (t0 == 100) {
                                if (t1 != 0) {
                                    if (t1 != 1) {
                                        if (t1 != 2) {
                                            if (t1 != 3) {
                                                if (t1 != 4) {
                                                    if (t1 != 5) {
                                                        if (t1 != 6) {
                                                        } else {
                                                            t0 = *(short *)qa0;
                                                            *(unsigned short *)qa0 = (t0 - 1);
                                                            if ((int)(short)(t0 - 1) <= 0) {
                                                                (((struct o0_uint *)0xC305050)->v) = 0x1;
                                                                (((struct o8_uint *)0xC305050)->v) = 0x0;
                                                                (((struct o4_uint *)0xC305050)->v) = 0x0;
                                                                (((struct o14_uint *)0xC305050)->v) = 0x1;
                                                            }
                                                        }
                                                        t0 = 0x0;
                                                    } else {
                                                        t5 = *(short *)qa0;
                                                        *(unsigned short *)qa0 = (t5 - 1);
                                                        t0 = 0x0;
                                                        if ((int)(short)(t5 - 1) <= 0) {
                                                            t5 = 0xFFFFFFFD;
                                                            if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                                            } else {
                                                                FUN_0c018e74(0x22);
                                                                (((struct oC_uint *)0xC305050)->v) = 0x22;
                                                                *(unsigned short *)qa0 = 0x98;
                                                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                                t5 = 0x0;
                                                            }
                                                            t0 = t5;
                                                        }
                                                    }
                                                    t5 = t0;
                                                } else {
                                                    t0 = *(short *)qa0;
                                                    *(unsigned short *)qa0 = (t0 - 1);
                                                    if ((int)(short)(t0 - 1) <= 0) {
                                                        if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                                            FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
                                                            t0 = 0x14;
                                                        } else {
                                                            FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                                            t0 = 0xC;
                                                        }
                                                        *(unsigned short *)qa0 = t0;
                                                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                    }
                                                    t5 = 0x0;
                                                }
                                                t0 = t5;
                                            } else {
                                                FUN_0c01c714(0xC305058, 0x1, 0x2);
                                                t5 = FUN_0c01cd2c(0x101);
                                                if ((short)t5 != 0) {
                                                    FUN_0c05aab6(0x0, 0x3);
                                                    *(unsigned short *)qa0 = 0x10;
                                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                }
                                                t0 = 0x0;
                                            }
                                            t5 = t0;
                                        } else {
                                            t0 = *(short *)qa0;
                                            *(unsigned short *)qa0 = (t0 - 1);
                                            if ((int)(short)(t0 - 1) <= 0) {
                                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                            }
                                            t5 = 0x0;
                                        }
                                        t0 = t5;
                                    } else {
                                        t5 = *(short *)qa0;
                                        *(unsigned short *)qa0 = (t5 - 1);
                                        if ((int)(short)(t5 - 1) <= 0) {
                                            FUN_0c018e9c(0x41, 0xC305058);
                                            (((struct oC_uint *)0xC305050)->v) = 0x41;
                                            *(unsigned short *)qa0 = 0x20;
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                        t0 = 0x0;
                                    }
                                    t5 = t0;
                                } else {
                                    FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                    *(unsigned short *)qa0 = 0xC;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    (((struct o8_uint *)0xC305050)->v) = 0x1;
                                    t5 = 0x0;
                                }
                            }
                            t4 = t5;
                        }
                        t3 = t4;
                    }
                    t2 = t3;
                }
                t0 = t2;
            } else {
                t2 = FUN_0c03c7ec(0x0);
                if (t2 == 0) {
                    t3 = 0x0;
                    for (;;) {
                        if ((*(signed char *)((0xC30999E + t3))) != (unsigned char)(*(signed char *)(((0xC83C306 + t3) + 0x0)))) {
                            break;
                        }
                        t3 = (t3 + 0x1);
                        if ((int)t3 >= (int)0x8) {
                            (((struct o0_uint *)0xC305050)->v) = 0x3;
                            FUN_0c01d094();
                            return 0x0;
                        }
                    }
                    if (((((struct o14_int *)0xC305050)->v)) == 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x63;
                    } else {
                        (((struct o0_uint *)0xC305050)->v) = 0x64;
                    }
                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                } else {
                    if (t2 == -1) {
                    } else {
                        if (((((struct o14_int *)0xC305050)->v)) != 0) {
                            (((struct o0_uint *)0xC305050)->v) = 0x64;
                        } else {
                            (((struct o0_uint *)0xC305050)->v) = 0x63;
                        }
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                    }
                }
                t0 = 0x0;
            }
            t2 = t0;
        } else {
            t0 = FUN_0c03add8(0xC30EF6C, t1, a6, a7);
            if ((int)t0 < 0) {
            } else {
                if ((t0 & 0x1) == 0) {
                    if (((((struct o14_int *)0xC305050)->v)) != 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x64;
                    } else {
                        (((struct o0_uint *)0xC305050)->v) = 0x63;
                    }
                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                } else {
                    t1 = FUN_0c03afdc(t0);
                    if ((int)t1 < 0) {
                    } else {
                        if ((t1 & 0x1) == 0) {
                            if (((((struct o14_int *)0xC305050)->v)) != 0) {
                                (((struct o0_uint *)0xC305050)->v) = 0x64;
                            } else {
                                (((struct o0_uint *)0xC305050)->v) = 0x63;
                            }
                        } else {
                            (((struct o0_uint *)0xC305050)->v) = 0x2;
                        }
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                    }
                }
            }
            t2 = 0x0;
        }
        t0 = t2;
    } else {
        if ((*(signed char *)0xC30B6FD) == 0) {
            (((struct o0_uint *)0xC305050)->v) = 0x3;
        } else {
            (((struct o0_uint *)0xC305050)->v) = 0x1;
        }
        (((struct o14_uint *)0xC305050)->v) = 0x0;
        (((struct oC_uint *)0xC305050)->v) = 0x22;
        t0 = 0x0;
    }
    return t0;
}

