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
int FUN_0c0dcb6a(void);

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
    int t12;
    int stk[6];
    int t14;
    float u21;
    int qe0;
    int t15;
    int t18;
    int t6;
    int t7;
    float u3;
    float u4;
    float u19;
    float u46;
    float u45;
    int t44;
    int t43;
    int t41;
    float u20;
    int t9;
    int t48;
    int t0;
    int t13;
    int t17;
    int t16;

    t0 = *(signed char *)0xC54098F;
    qe0 = ((((t0 << 1) + t0) << 2) + 0xC1C99B8);
    u3 = *(float *)((qe0 + 0x0));
    u4 = (((struct o28_float *)((*(int *)0xC540D94)))->v);
    t48 = 0x28;
    if (!((u3 + -2500.0f) > u4)) {
        t6 = *(int *)((qe0 + 0x8));
        t7 = t6;
        if ((int)t6 < 0) {
            t7 = (-t6);
        }
        t9 = *(int *)((qe0 + 0x4));
        *(unsigned int *)(((int)stk + 0)) = t9;
        t14 = *(int *)((((t9 << 2) << 1) + 0xC1C9994));
        *(unsigned int *)(((int)stk + 4)) = t14;
        t12 = 0xC0DCAA0;
        t15 = qe0;
        t16 = 0x0;
        t17 = 0x0;
        u19 = u4;
        u20 = (u3 + -2500.0f);
        u21 = -2500.0f;
        for (;;) {
            if ((int)t16 >= (int)(*(int *)(((int)stk + 4)))) {
                break;
            }
            t13 = 0xC1C9990;
            *(float *)((((int)stk + 0) + 0x10)) = -9950.0f;
            t14 = (*(signed char *)((0xC540978 + 0x17)));
            *(float *)((((int)stk + 0) + 0xC)) = (*(float *)((((((t14 << 1) + t14) << 2) + 0xC1C99B8) + 0x0)));
            t12 = (*(signed char *)((0xC540978 + 0x17)));
            t14 = t12;
            u21 = (*(float *)((t17 + (*(int *)((0xC1C9990 + (((*(int *)((((((t12 << 1) + t14) << 2) + 0xC1C99B8) + 0x4))) << 2) << 1)))))));
            t12 = 0x14;
            *(float *)((((int)stk + 0) + 0x14)) = u21;
            t18 = 0x0;
            if ((int)t7 > 0) {
                for (;;) {
                    t15 = (((int)stk + 0) + 0xC);
                    t12 = (FUN_0c0e0352(t15));
                    u21 = ((*(float *)((((int)stk + 0) + 0x10))) + 100.0f);
                    *(float *)((((int)stk + 0) + 0x10)) = u21;
                    t12 = (*(int *)(((int)stk + 0)));
                    if (t12 == 4) {
                        if ((0x1 & t18) != 0) {
                            t12 = 0x14;
                            u21 = ((*(float *)((((int)stk + 0) + 0x14))) + 50.0f);
                        } else {
                            t12 = 0x14;
                            u21 = ((*(float *)((((int)stk + 0) + 0x14))) - 50.0f);
                        }
                        t12 = 0x14;
                        *(float *)((((int)stk + 0) + 0x14)) = u21;
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

/* FUN_0c0dcbec, written by hand from the original (1,236 bytes; the generated C was 2,470).
   A screen state machine on the object at 0xC540978: byte +20 is the mode (0 = start, 1 = run), byte +21 the step (0..16), byte +22 a
   variant, short +28 a timer that the step loads from the table at 0xC1C9864 when it advances. Mode 0 clears four fields and falls
   into mode 1. Steps 0 -> 1, 8 -> 9 and 14 -> 15 fall through, as in the original; the generated C wrote the whole step switch twice. */

#define STEP(o) (*(signed char *)((o) + 21))
#define TIMER(o) (*(short *)((o) + 28))
#define NEXT(o) (*(unsigned char *)((o) + 21) = STEP(o) + 1)
#define LOAD(o) (*(unsigned short *)((o) + 28) = *(int *)(0xC1C9864 + (STEP(o) << 2)))

/* manual: written by hand, 2026-11-23/24 (build/manual/notes_FUN_0c0dcbec.txt) */
void FUN_0c0dcbec(void)
{
    int o;
    int v;
    int p;
    int i;

    o = 0xC540978;
    switch (*(signed char *)(o + 20)) {
    case 0:
        *(unsigned char *)(o + 20) = *(signed char *)(o + 20) + 1;
        *(int *)(o + 192) = 0;
        *(unsigned char *)(o + 168) = 0;
        *(unsigned char *)(o + 21) = 0;
    case 1:
        FUN_0c0dc784();
        v = *(signed char *)(o + 22);
        if ((unsigned int)STEP(o) >= 0x11) {
            return;
        }
        switch (STEP(o)) {
        case 0:
            FUN_0c0dcaac(0);
            NEXT(o);
        case 1:
            if (FUN_0c0dcb6e() == 0) {
                return;
            }
            NEXT(o);
            LOAD(o);
            FUN_0c0dcb18();
            FUN_0c0d0378(0, 5);
            return;
        case 2:
            if (FUN_0c042fe0() == 0) {
                return;
            }
            NEXT(o);
            LOAD(o);
            FUN_0c0dcb6a();
            return;
        case 3:
            if (TIMER(o) > 0) {
                TIMER(o) = TIMER(o) - 1;
            }
            if (*(signed char *)(*(int *)(o + 0x45C) + 21) == 7) {
                NEXT(o);
                LOAD(o);
                thunk_FUN_0c05abb2(0x58, 0);
                FUN_0c05af9a(0x58, 0x7F, 0xB4);
            }
            return;
        case 4:
            TIMER(o) = TIMER(o) - 1;
            if (TIMER(o) <= 0) {
                NEXT(o);
                LOAD(o);
                FUN_0c05af9a(0x58, 0x32, 0x78);
            }
            if ((unsigned int)(*(int *)0xC542260) % 15 != 0) {
                return;
            }
            FUN_0c07c19c(0x22);
            return;
        case 5:
        case 6:
            if ((unsigned int)(*(int *)0xC542260) % 25 == 0) {
                FUN_0c07c19c(0x22);
            }
            if (FUN_0c0dc92c() < 0) {
                return;
            }
            *(unsigned char *)0xC542235 = 0;
            *(unsigned char *)(o + 0x620) = 1;
            FUN_0c0dcaac(1);
            *(unsigned char *)(o + 21) = 7;
            FUN_0c05af9a(0x58, 0, 1);
            FUN_0c056e44(0x19, 5);
            FUN_0c059d30();
            return;
        case 7:
            if (FUN_0c0dcb6e() == 0) {
                return;
            }
            NEXT(o);
            *(unsigned char *)(o + 22) = 0;
            *(unsigned char *)(o + 23) = 0;
            LOAD(o);
            FUN_0c0dc784();
            FUN_0c0dcb18();
            FUN_0c05af9a(0x58, 0x7F, 0x12C);
            FUN_0c0d02a6();
            *(unsigned short *)(o + 32) = 0;
            *(unsigned short *)(o + 34) = 0;
            FUN_0c059d30();
            return;
        case 8:
            if (v == 0) {
                TIMER(o) = TIMER(o) - 1;
                if (TIMER(o) <= 30) {
                    *(unsigned char *)0xC542235 = 2;
                    *(unsigned char *)(o + 22) = *(signed char *)(o + 22) + 1;
                    FUN_0c05258e(99, 10, 256, 1, 0);
                }
                if (TIMER(o) == *(int *)(0xC1C9864 + (STEP(o) << 2)) - 40) {
                    FUN_0c05258e(3, 10, 0x2000, -1, 0);
                }
            } else {
                TIMER(o) = TIMER(o) - 1;
                if (TIMER(o) <= 0) {
                    *(unsigned char *)(o + 21) = 9;
                    LOAD(o);
                    FUN_0c05af9a(0x58, 0x40, 0xB4);
                }
            }
        case 9:
            p = 0xC1C957C + *(short *)(o + 32) * 48;
            if (!(*(float *)p > *(float *)(*(int *)(o + 0x41C) + 40))) {
                FUN_0c0c2944(FUN_0c0d0928(p + 16), 0, 0, 0xC1C9580 + *(short *)(o + 32) * 48, -1);
                *(unsigned short *)(o + 32) = *(short *)(o + 32) + 1;
            }
            FUN_0c0dc97c();
            if (4000.0f > *(float *)(*(int *)(o + 0x41C) + 40)) {
                return;
            }
            *(unsigned char *)(o + 21) = 10;
            *(unsigned char *)(o + 22) = 0;
            return;
        case 10:
            if (v == 0) {
                if (4800.0f > *(float *)(*(int *)(o + 0x41C) + 40)) {
                    return;
                }
                *(unsigned char *)(o + 22) = *(signed char *)(o + 22) + 1;
                FUN_0c056dc6();
            } else if (v == 1) {
                if (5900.0f > *(float *)(*(int *)(o + 0x41C) + 40)) {
                    return;
                }
                *(unsigned char *)(o + 21) = 11;
                LOAD(o);
                FUN_0c05af9a(0x58, 0, 0x78);
            }
            return;
        case 11:
            TIMER(o) = TIMER(o) - 1;
            if (TIMER(o) > 0) {
                return;
            }
            if (FUN_0c042fe0() == 0) {
                return;
            }
            *(unsigned char *)(o + 0x620) = 1;
            *(unsigned char *)(o + 21) = 12;
            FUN_0c0dcaac(2);
            FUN_0c056e44(0x19, 6);
            *(unsigned char *)0xC542235 = 0;
            FUN_0c059d30();
            return;
        case 12:
            if (FUN_0c0dcb6e() == 0) {
                return;
            }
            NEXT(o);
            LOAD(o);
            FUN_0c0dcb18();
            *(unsigned char *)0xC542235 = 2;
            FUN_0c0d0378(6, 11);
            for (i = 0; i < 4; i++) {
                p = 0xC532498 + i * 0x3938;
                if (*(signed char *)(p + 0x3714) != 0) {
                    FUN_0c085cac(p, 23, (*(short *)(o + 34) & (1 << i)) != 0 ? 12 : 11);
                }
            }
            FUN_0c059d30();
            *(unsigned char *)(o + 24) = *(signed char *)0xC542260 & 3;
            return;
        case 14:
            FUN_0c0dcaac(*(signed char *)0xC54223C);
            *(unsigned char *)(o + 21) = 15;
        case 15:
            if (FUN_0c0dcb6e() == 0) {
                return;
            }
            *(unsigned char *)(o + 21) = 16;
            FUN_0c0d02a6();
            return;
        }
        return;
    }
}
#undef STEP
#undef TIMER
#undef NEXT
#undef LOAD
