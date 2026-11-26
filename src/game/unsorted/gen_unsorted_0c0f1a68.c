/* game/unsorted: functions 0C0F1A68-0C0F25C6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03ffbe(void);
int FUN_0c042fe0(void);
int FUN_0c052c00(int, int, int);
int FUN_0c053ccc(int, int, int, int, int);
int FUN_0c056e44(int, int, int);
int FUN_0c059c16(int, int);
int FUN_0c059c54(int);
int FUN_0c059c7a(int, int);
int FUN_0c059d30(void);
int FUN_0c059e60(int, int);
int FUN_0c05b052(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0b507a(int, int, int);
int FUN_0c0cfecc(int, int, int);
int FUN_0c0d02a6(void);
int FUN_0c0d0378(int, int);
int FUN_0c0d039e(int, int);
int FUN_0c0d04b4(int);
int FUN_0c0f1a68(int);
int FUN_0c0f44d6(int);
int FUN_0c0f4920(int, int, int, int);
int FUN_0c0f1b40(int a4);
int FUN_0c0f1bac(int a4);
int FUN_0c0f1c1c(int a4);
int FUN_0c0f1c54(int a4);
int FUN_0c0f1c90(int a4);
int FUN_0c0f1d14(int a4, int a5);
int FUN_0c0f1d90(int a4);
int FUN_0c0f1df4(int a4, int a5);
int FUN_0c0f1e62(int a4);
int FUN_0c0f1e8c(void);
int FUN_0c0f1ee8(int a4);
int FUN_0c0f2034(void);
void FUN_0c0f2060(int a4, int a5, int a6);
int FUN_0c0f1c16(void);
void FUN_0c0f25c2(void);
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };


int FUN_0c0f1b40(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC54235E;
    t1 = t0;
    if (t0 == 2) {
        t0 = 0xC1C588C;
        t2 = 0x0;
        for (;;) {
            (((struct o40_uint *)((0xC540D94 + t2)))->v) = 0x0;
            t3 = FUN_0c0f1df4(a4, t0);
            t2 = (t2 + 0x4);
            t0 = (t0 + 0x30);
            if ((unsigned int)t2 >= (unsigned int)0x10) {
                break;
            }
        }
        t1 = t3;
    }
    return t1;
}

int FUN_0c0f1bac(int a4)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t8;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CD6E4)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CD6F0)));
    *(unsigned short *)0xC540996 = 0x0;
    t2 = *(signed char *)0xC542237;
    t3 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t2 << 2) << 1) + t2) << 2) + 0xC286D34) + (((t3 << 1) + t3) << 2)));
    FUN_0c03ea04(0x2, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    t8 = 0x3;
    if (a4 == 0) {
        t8 = 0x0;
    }
    return FUN_0c0f1a68(t8);
}

int FUN_0c0f1c1c(int a4)
{
    if ((*(signed char *)0xC54223C) == 0) {
        return (FUN_0c053ccc(0x4000, 0x1555, a4, 0x2, 0xC1CDF80));
    }
    return FUN_0c052c00(0x0, 0x0, a4);
}

int FUN_0c0f1c54(int a4)
{
    register int t3;

    *(unsigned short *)0xC540996 = 0x0;
    t3 = FUN_0c0cfecc((*(int *)(((((a4 << 2) << 1) + 0xC1CDD18) + 0x0))), 0xC540996, (*(int *)(((((a4 << 2) << 1) + 0xC1CDD18) + 0x4))));
    if ((int)t3 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0f1c90(int a4)
{
    register int t3;

    *(unsigned short *)0xC540998 = 0x0;
    t3 = FUN_0c0cfecc((*(int *)(((((a4 << 2) << 1) + 0xC1CDF68) + 0x0))), 0xC540998, (*(int *)(((((a4 << 2) << 1) + 0xC1CDF68) + 0x4))));
    if ((int)t3 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}


int FUN_0c0f1d90(int a4)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        if (a4 != 1) {
            t0 = a4;
            if (a4 != 2) {
            } else {
                t0 = (FUN_0c053ccc(0x4000, 0x1555, 0xA, 0x2, 0xC1CDFC8));
            }
            t1 = t0;
        } else {
            t1 = (FUN_0c053ccc(0x4000, 0x1555, 0xA, 0x2, 0xC1CDFB0));
        }
        t0 = t1;
    } else {
        t0 = (FUN_0c053ccc(0x4000, 0x1555, 0xA, 0x2, 0xC1CDF98));
    }
    return t0;
}

int FUN_0c0f1df4(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)((a5 + 0x0));
        if ((*(int *)(((((((t1 << 2) + t0) + 0x10) << 2) + 0xC540D94) + 0x0))) == 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return 0x0;
        }
    }
    *(unsigned int *)(((((((t1 << 2) + t0) + 0x10) << 2) + 0xC540D94) + 0x0)) = (FUN_0c0f4920((*(signed char *)0xC542363), (((t1 << 2) + t0) + 0x10), a4, a5));
    return 0x1;
}

int FUN_0c0f1e62(int a4)
{
    register int t0;
    register int t1;

    t0 = (((a4 << 2) + 0x10) << 2);
    t1 = 0x0;
    for (;;) {
        if ((*(int *)(((0xC540D94 + t0) + 0x0))) != 0) {
            break;
        }
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x4) {
            return 0x1;
        }
    }
    return 0x0;
}

int FUN_0c0f1e8c(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t0;
    register int t9;

    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if (((((struct o40_int *)((0xC540D94 + t3)))->v)) != 0) {
            t1 = 0x41C;
            t1 = (t1 + 0xC540978);
            t1 = (t1 + t2);
            t1 = (t1 + 0x40);
            t1 = (*(int *)((t1 + 0x0)));
            t0 = (FUN_0c0f44d6(t1));
        } else {
            t9 = t1;
        }
        t3 = (t3 + 0x4);
        t1 = t9;
        t2 = (t2 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)0x40) {
            break;
        }
    }
    return t0;
}

int FUN_0c0f1ee8(int a4)
{
    int v0_1;
    int v0_2;
    int v0_3;
    int v0_4;
    int v0_5;
    unsigned int s20;

    int v0_6;
    int v0_0;
    int T_;
    int R2;
    int R1;
    int s16;
    int s12;
    int s8;
    int s0;
    int v0_8;
    int v0_7;
    int s4;
    v0_2 = a4;
    s20 = 0x0;
    v0_0 = (0x0);
    v0_1 = (0xC5421F8);
    v0_3 = (0xC1CDFE0);
    v0_5 = (0x0);
    v0_4 = (0x0);
    v0_6 = (0x8);
    L_C0F1F08:;
    if (((int)(unsigned char)(*(signed char *)(v0_1 + 0x4A)) < (int)(*(int *)((v0_3 + (v0_5 << 2)))))) goto L_C0F1F1E;
    v0_4 = (v0_5);
    L_C0F1F1E:;
    v0_7 = (int)(v0_5 + 0x1) < (int)v0_6;
    v0_5 = (v0_5 + 0x1);
    if (v0_7) goto L_C0F1F08;
    v0_3 = *(signed char *)0xC540990;
    v0_5 = (v0_3);
    v0_1 = (0xC472AC8);
    v0_6 = (0xC540990);
    v0_4 = ((v0_4 & 0x7));
    if ((v0_3 == 0)) goto L_C0F1F3A;
    if ((v0_5 == 1)) goto L_C0F1F46;
    v0_1 = (FUN_0c0f1e62(0x0)) == 0;
    if (v0_1) goto L_C0F201E;
    v0_1 = (FUN_0c0f1e62(0x1)) == 0;
    if (v0_1) goto L_C0F201E;
    v0_1 = (FUN_0c0f1e62(0x2)) == 0;
    if (v0_1) goto L_C0F201E;
    *(unsigned char *)0xC540990 = v0_0;
    s20 = 0x1;
    L_C0F201E:;
    return ((*(int *)&s20));
    L_C0F1F46:;
    (*(unsigned int *)&s4) = v0_0;
    (*(unsigned int *)&s0) = ((v0_2 << 2) + 0xC258F4C);
    (*(unsigned int *)&s16) = (0xC1C54FC + ((((((v0_2 << 2) << 1) + v0_2) << 2) << 2) << 1));
    (*(unsigned int *)&s12) = (((v0_4 << 1) + v0_4) << 2);
    v0_4 = (0x3);
    v0_3 = (v0_0);
    v0_2 = (((((((v0_2 << 2) << 1) + v0_2) << 2) << 2) << 1));
    v0_5 = (0x4);
    L_C0F1F76:;
    if (((int)(*(int *)((v0_1 + (v0_3 << 2)))) >= (int)v0_4)) goto L_C0F1FE2;
    v0_2 = (FUN_0c0f1e62(v0_3)) == 0;
    if (v0_2) goto L_C0F1FE8;
    (*(unsigned int *)&s8) = ((v0_3 << 2) + v0_1);
    v0_6 = (v0_0);
    v0_7 = ((((((((v0_3 << 1) + v0_3) << 2) << 2) << 1) + (s16)) + (s12)));
    L_C0F1FAA:;
    v0_8 = *(signed char *)((v0_6 + (((*(int *)(((s8) + 0x0))) << 2) + v0_7)));
    v0_2 = (v0_8);
    if (((int)v0_8 < 0)) goto L_C0F1FCE;
    FUN_0c0f1df4(0x0, (((((v0_2 << 1) + v0_2) << 2) << 2) + (*(int *)(((s0) + 0x0)))));
    L_C0F1FCE:;
    v0_2 = (int)(v0_6 + 0x1) < (int)v0_5;
    v0_6 = (v0_6 + 0x1);
    if (v0_2) goto L_C0F1FAA;
    *(unsigned int *)((v0_1 + (v0_3 << 2))) = ((*(int *)((v0_1 + (v0_3 << 2)))) + 0x1);
    L_C0F1FE8:;
    v0_2 = (int)(v0_3 + 0x1) < (int)v0_4;
    v0_3 = (v0_3 + 0x1);
    if (v0_2) goto L_C0F1F76;
    if (((int)(s4) < (int)v0_4)) goto L_C0F201E;
    *(unsigned char *)0xC540990 = ((*(signed char *)0xC540990) + 0x1);
    goto L_C0F201E;
    L_C0F1FE2:;
    (*(unsigned int *)&s4) = ((s4) + 0x1);
    goto L_C0F1FE8;
    L_C0F1F3A:;
    *(unsigned char *)(v0_6) = ((*(signed char *)(v0_6)) + 0x1);
    (((struct o8_uint *)(v0_1))->v) = v0_0;
    (((struct o4_uint *)(v0_1))->v) = v0_0;
    *(unsigned int *)(v0_1) = v0_0;
    goto L_C0F1F46;
}

int FUN_0c0f2034(void)
{
    register int t1;
    register int t2;
    int t3;

    if (((*(signed char *)0xC542237) == 6) && ((t1 = *(signed char *)0xC54098C, (int)t1 > 0) && ((t2 = *(signed char *)0xC54098D, t2 == 4) && (t3 = *(signed char *)0xC54098E, (int)t3 > (int)0x1)))) {
        return 0x1;
    }
    return 0x0;
}

/* FUN_0c0f2060, written by hand from the original (1,378 bytes; the generated C was 3,028).
   A state machine on the object at 0C540978: byte +20 the phase (0, 1), byte +21 the step (0..9), byte +22 the sub-step, byte +23 a counter,
   short +28 a frame timer. P = 0C5421F8, Q = 0C532498 (4 records of 0x3938 bytes). The third parameter is only r6 passed on to
   FUN_0c056e44 (the original never loads r6). Steps 0 -> 1, 7 -> 8 and sub-steps 0 -> 1 fall through as in the original. */

/* manual: written by hand, 2026-11-23/24 (build/manual/notes.txt) */
void FUN_0c0f2060(int a4, int a5, int a6)
{
    int o;
    int p;
    int q;
    int t;
    int pv;
    int c;
    int e;
    int i;

    o = 0xC540978;
    if (*(signed char *)(o + 20) == 0) {
        *(unsigned char *)(o + 20) = *(signed char *)(o + 20) + 1;
        *(int *)(o + 192) = 0;
        *(unsigned char *)(o + 168) = 0;
        *(unsigned char *)(o + 21) = 0;
    } else if (*(signed char *)(o + 20) != 1) {
        return;
    }
    p = 0xC5421F8;
    q = 0xC532498;
    t = *(signed char *)(o + 22);
    pv = *(signed char *)(p + 68);
    switch (*(signed char *)(o + 21)) {
    case 0:
        *(unsigned char *)(o + 21) = *(signed char *)(o + 21) + 1;
        *(unsigned char *)(o + 23) = 0;
        FUN_0c0f1bac(0);
        FUN_0c059c16(*(signed char *)(p + 63), *(signed char *)(p + 68));
        FUN_0c0f1c90(*(signed char *)(o + 23));
    case 1:
        if (FUN_0c0f1c54(*(signed char *)(p + 68)) == 0) {
            return;
        }
        *(unsigned char *)(o + 21) = *(signed char *)(o + 21) + 1;
        FUN_0c0f1c16();
        return;
    case 2:
        if (FUN_0c042fe0() == 0) {
            return;
        }
        *(unsigned char *)(o + 21) = *(signed char *)(o + 21) + 1;
        *(unsigned char *)(o + 23) = 0;
        *(unsigned char *)(o + 22) = 0;
        *(unsigned char *)(o + 24) = 0;
        return;
    case 3:
        switch (t) {
        case 0:
            *(short *)(o + 28) = 2700;
            *(unsigned char *)(o + 22) = *(signed char *)(o + 22) + 1;
            *(unsigned char *)(o + 24) = 0;
            FUN_0c0f1d14(*(signed char *)(o + 23), 0);
            if (*(signed char *)(o + 23) != 0) {
                FUN_0c0f1c90(*(signed char *)(o + 23));
                FUN_0c0f1d14(*(signed char *)(o + 23) - 1, 1);
                FUN_0c0f1a68(*(signed char *)(o + 23));
            }
            FUN_0c0f1d90(*(signed char *)(o + 23));
        case 1:
            if (FUN_0c0f1ee8(*(signed char *)(o + 23)) != 0) {
                *(short *)(o + 28) = 0;
            }
            *(short *)(o + 28) = *(short *)(o + 28) - 1;
            if (*(short *)(o + 28) > 0) {
                return;
            }
            *(unsigned char *)(o + 22) = *(signed char *)(o + 22) + 1;
            FUN_0c0f1e8c();
            return;
        case 2:
            *(unsigned char *)(o + 23) = *(signed char *)(o + 23) + 1;
            if (*(signed char *)(o + 23) >= 3) {
                *(unsigned char *)(o + 21) = *(signed char *)(o + 21) + 1;
                *(unsigned char *)(o + 22) = 0;
                FUN_0c0f1d14(2, 1);
                return;
            }
            *(unsigned char *)(o + 22) = *(signed char *)(o + 22) + 1;
            *(short *)(o + 28) = 120;
            return;
        case 3:
            *(short *)(o + 28) = *(short *)(o + 28) - 1;
            if (*(short *)(o + 28) > 0) {
                return;
            }
            *(unsigned char *)(o + 22) = 0;
            return;
        default:
            return;
        }
    case 4:
        switch (t) {
        case 0:
            *(unsigned char *)(o + 22) = *(signed char *)(o + 22) + 1;
            FUN_0c056e44(25, 7, a6);
            *(short *)(o + 28) = 300;
        case 1:
            *(short *)(o + 28) = *(short *)(o + 28) - 1;
            if (*(short *)(o + 28) > 0) {
                return;
            }
            *(unsigned char *)(o + 22) = *(signed char *)(o + 22) + 1;
            *(short *)(o + 28) = 300;
            *(unsigned char *)(p + 61) = 0;
            return;
        case 2:
            *(short *)(o + 28) = *(short *)(o + 28) - 1;
            if (*(short *)(o + 28) <= 0) {
                *(unsigned char *)(o + 22) = *(signed char *)(o + 22) + 1;
                FUN_0c0f1bac(1);
                *(unsigned char *)(o + 1568) = 1;
            }
            if (*(short *)(o + 28) == 272) {
                FUN_0c05b052(30, 0);
            }
            if (*(short *)(o + 28) == 240) {
                FUN_0c059c54(14);
                FUN_0c059d30();
            }
            return;
        case 3:
            if (FUN_0c0f1c54(pv) == 0) {
                return;
            }
            *(unsigned char *)(o + 22) = *(signed char *)(o + 22) + 1;
            for (i = 0; i < 4; i++) {
                e = i * 14648 + q;
                if (*(signed char *)(e + 2) != 13) {
                    *(float *)(e + 40) = -100.0f + 100.0f * (float)i;
                    *(float *)(e + 44) = 800.0f;
                    *(float *)(e + 48) = 1000.0f;
                    if (*(signed char *)(e + 14100) != 0 && *(float *)(e + 352) > 0.0f) {
                        FUN_0c085cac(i * 14648 + q, 0, 0);
                    }
                }
            }
            return;
        default:
            *(unsigned char *)(o + 21) = *(signed char *)(o + 21) + 1;
            *(unsigned char *)(o + 22) = 0;
            *(short *)(o + 28) = 0;
            FUN_0c0b507a((short)*(signed char *)(p + 363) * (short)0x3938 + q, 19, 0);
            return;
        }
    case 5:
        switch (t) {
        case 0:
            *(unsigned char *)(o + 22) = *(signed char *)(o + 22) + 1;
            if (*(signed char *)(p + 358) != 0) {
                FUN_0c056e44(25, 8, a6);
            }
            *(short *)(o + 28) = 600;
            return;
        case 1:
            if (FUN_0c03ffbe() != 0) {
                c = *(signed char *)(o + 22) + 1;
            } else {
                *(short *)(o + 28) = *(short *)(o + 28) - 1;
                if (*(short *)(o + 28) >= 0) {
                    return;
                }
                c = 99;
            }
            *(unsigned char *)(o + 22) = c;
            *(unsigned char *)(o + 23) = 0;
            return;
        case 2:
            switch (*(signed char *)(o + 23)) {
            case 0:
                *(unsigned char *)(o + 23) = *(signed char *)(o + 23) + 1;
                FUN_0c0b507a((short)*(signed char *)(p + 363) * (short)0x3938 + q, 64, 0);
                if (*(signed char *)(p + 358) == 0) {
                    return;
                }
                FUN_0c059e60((short)*(signed char *)(p + 363) * (short)0x3938 + q, 24);
                return;
            case 1:
                *(unsigned char *)(o + 22) = 99;
                *(unsigned char *)(o + 23) = 0;
                FUN_0c0f1c1c(0);
                return;
            default:
                return;
            }
        default:
            *(unsigned char *)(o + 21) = *(signed char *)(o + 21) + 1;
            *(unsigned char *)(o + 22) = 0;
            FUN_0c0f1d14(3, 0);
            *(unsigned char *)(p + 61) = 2;
            FUN_0c059c16(*(signed char *)(p + 63), *(signed char *)(p + 68));
            if (FUN_0c042fe0() != 0) {
                FUN_0c059c7a(19, 0);
            }
            FUN_0c0f1c1c(10);
            return;
        }
    case 7:
        FUN_0c0f1bac(pv);
        *(unsigned char *)(o + 21) = *(signed char *)(o + 21) + 1;
    case 8:
        if (FUN_0c0f1c54(*(signed char *)(p + 68) + 2) == 0) {
            return;
        }
        *(unsigned char *)(o + 21) = *(signed char *)(o + 21) + 1;
        FUN_0c0d02a6();
        return;
    default:
        return;
    }
}

void FUN_0c0f25c2(void)
{
    
}
