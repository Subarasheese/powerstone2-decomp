/* game/stage: functions 0C0E91A0-0C0EA276, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int FUN_0c042fe0(void);
int FUN_0c053a1a(int, int, int, int, int);
int FUN_0c059c16(int, int);
int FUN_0c05af9a(int, int, int);
int FUN_0c05b048(int, int);
int FUN_0c05b052(int, int);
int FUN_0c0d02a6(void);
int FUN_0c0d0378(int, int);
int FUN_0c0d039e(int, int);
int FUN_0c0e91a0(int, int, int);
int FUN_0c0e92f8(int);
int FUN_0c0e9338(void);
int FUN_0c0e9378(void);
extern int FUN_0c0e9398();
int FUN_0c0e956e(void);
int FUN_0c187798(int, int, int);
int FUN_0c0e9220(int a4, int a5, int a6);
void FUN_0c0e9596(int a4, int a5, int a6);


void FUN_0c0e9596(int a4, int a5, int a6)
{
    int stk[8];
    register int t0;
    register int t3;
    register int t4;
    register int t12;
    register int t18;
    register int t23;
    register int t26;
    register int t57;
    register int t85;
    register int t124;
    register int t139;
    register int t140;
    register int t184;
    register int t187;
    register int t192;
    register int t193;
    register int t201;
    register int t207;
    register int t212;
    register int t215;
    register int t246;
    register int t274;
    register int t313;
    register int t328;
    register int t329;
    register int t373;
    register int t376;
    int t114;
    register float u115;
    int t303;
    register float u304;

    t0 = *(signed char *)0xC54098C;
    if (t0 != 0) {
        if (t0 != 1) {
            return;
        }
        FUN_0c0e91a0(a4, a5, a6);
        FUN_0c0e956e();
        t3 = *(signed char *)0xC54223C;
        t4 = *(signed char *)0xC54098D;
        if ((unsigned int)t4 >= (unsigned int)0x11) {
            return;
        }
        switch ((t4 << 1)) {
            case 0:
            {
                FUN_0c0e92f8(0x0);
                FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                t12 = ((int (*)(int))(FUN_0c0e9398))((*(signed char *)0xC54223C));
                if (t12 == 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = 0x2;
                    FUN_0c0e9338();
                    FUN_0c0d0378(0x0, 0x7);
                }
                return;
            }
            case 2:
            {
                t18 = ((int (*)(int, int))(FUN_0c0e9398))((*(signed char *)0xC54223C), 0xC1CC240);
                if (t18 == 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = 0x2;
                    FUN_0c0e9338();
                    FUN_0c0d0378(0x0, 0x7);
                }
                return;
            }
            case 4:
            {
                t23 = FUN_0c042fe0();
                if (t23 == 0) {
                    return;
                }
                (((struct o1_uchar *)0xC54098C)->v) = 0x3;
                (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1CC234 + (((*(signed char *)0xC54098D) - 3) << 2))));
                FUN_0c0e9378();
    return;
            }
            case 6:
            case 8:
            {
                t26 = (((struct o8_short *)0xC54098C)->v);
                (((struct o8_ushort *)0xC54098C)->v) = (t26 - 1);
                if ((int)(short)(t26 - 1) > 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1CC234 + (((*(signed char *)0xC54098D) - 3) << 2))));
                    *(int *)((int)stk + 0) = 0xC28812C;
                    FUN_0c053a1a(0x2000, 0x1000, 0xA, ((*(int *)0xC540D94) + 0x28), 0xC28812C);
                }
                return;
            }
            case 10:
            {
                (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)0xC540D94)))->v)) + -1000.0f);
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
                if (1850.0f > ((((struct o2C_float *)((*(int *)0xC540D94)))->v))) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    FUN_0c0e92f8(0x1);
                    FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
                }
                return;
            }
            case 12:
            {
                t57 = ((int (*)(int, int))(FUN_0c0e9398))(t3, 0xC1CC240);
                if (t57 == 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = 0x7;
                    FUN_0c0d039e(0x0, 0x7);
                    FUN_0c0d0378(0x9, 0x10);
                }
                (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)0xC540D94)))->v)) + -1000.0f);
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
                return;
            }
            case 14:
            {
                (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)0xC540D94)))->v)) + -1000.0f);
                if (!(3350.0f > ((((struct o2C_float *)((*(int *)0xC540D94)))->v)))) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1CC240 + (((*(signed char *)0xC54098D) - 8) << 2))));
                    FUN_0c0e9378();
                    FUN_0c05af9a(0x59, 0x7F, 0x78);
                }
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
                return;
            }
            case 16:
            case 18:
            {
                t85 = (((struct o8_short *)0xC54098C)->v);
                (((struct o8_ushort *)0xC54098C)->v) = (t85 - 1);
                if ((int)(short)(t85 - 1) <= 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                    (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1CC240 + (((*(signed char *)0xC54098D) - 8) << 2))));
                    *(int *)((int)stk + 0) = 0xC28812C;
                    FUN_0c053a1a(0x2000, 0x1000, 0xA, ((*(int *)0xC540D94) + 0x28), 0xC28812C);
                }
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
                return;
            }
            case 20:
            {
                (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)0xC540D94)))->v)) + -1000.0f);
                if (!(6500.0f > ((((struct o2C_float *)((*(int *)0xC540D94)))->v)))) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    FUN_0c0e92f8(0x2);
                }
                if (((*(signed char *)0xC54098E) == 0) && (t114 = *(int *)0xC540D94, u115 = (((struct o2C_float *)(t114))->v), !(7000.0f > u115))) {
                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                }
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
                return;
            }
            case 22:
            {
                t124 = ((int (*)(int, int))(FUN_0c0e9398))(t3, 0xC1CC240);
                if (t124 != 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = 0xC;
                    (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                    FUN_0c0d039e(0x9, 0x10);
                    FUN_0c0d0378(0x11, 0x16);
                }
                (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)0xC540D94)))->v)) + -1000.0f);
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
                return;
            }
            case 24:
            {
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
                (((struct o0_float *)0xC541098)->v) = (((((struct o4_float *)0xC541098)->v)) + -1000.0f);
                if (!(((((struct o0_float *)0xC0E99D0)->v)) > ((((struct o4_float *)0xC541098)->v)))) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    FUN_0c0e9378();
    return;
                }
                return;
            }
            case 26:
            {
                t139 = *(signed char *)0xC54098E;
                if (t139 != 0) {
                    if (t139 != 1) {
                    } else {
                        t140 = (((struct oC_short *)0xC54098C)->v);
                        (((struct oC_ushort *)0xC54098C)->v) = (t140 - 1);
                        if ((int)(short)(t140 - 1) <= 0) {
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
                            FUN_0c05b048(0x1, 0x3C);
                            (((struct o4_float *)0xC541098)->v) = (*(float *)((0xC1CCC30 + ((*(signed char *)0xC54223C) << 2))));
                            (((struct o0_float *)0xC541098)->v) = (((((struct o4_float *)0xC541098)->v)) + -1000.0f);
                        }
                    }
                } else {
                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                    FUN_0c05b052(0x3C, 0x0);
                    (((struct oC_ushort *)0xC54098C)->v) = 0x0;
                    (((struct o4_float *)0xC541098)->v) = (*(float *)((0xC1CCC30 + ((*(signed char *)0xC54223C) << 2))));
                    (((struct o0_float *)0xC541098)->v) = (((((struct o4_float *)0xC541098)->v)) + ((((struct o8_float *)0xC0E99D0)->v)));
                }
                return;
            }
            case 28:
            {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                FUN_0c0e92f8((*(signed char *)0xC54223C));
                (((struct o4_float *)0xC541098)->v) = (*(float *)((0xC1CCC30 + ((*(signed char *)0xC54223C) << 2))));
                (((struct o0_float *)0xC541098)->v) = (((((struct o4_float *)0xC541098)->v)) + -1000.0f);
                t184 = ((int (*)(int))(FUN_0c0e9398))(((*(signed char *)0xC54223C) + 0x3));
                if (t184 != 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    FUN_0c0d02a6();
    return;
                }
                return;
            }
            case 30:
            {
                t187 = ((int (*)(int, int))(FUN_0c0e9398))(((*(signed char *)0xC54223C) + 0x3), 0xC1CC240);
                if (t187 != 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
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
    (((struct o1_uchar *)0xC54098C)->v) = 0x0;
    (((struct o18_uint *)0xC540A20)->v) = 0x0;
    (((struct o0_uchar *)0xC540A20)->v) = 0x0;
    (((struct oA_ushort *)0xC54098C)->v) = 0x0;
    (((struct o0_float *)0xC541098)->v) = -500.0f;
    (((struct o4_float *)0xC541098)->v) = 0.0f;
    FUN_0c0e91a0(a4, a5, a6);
    FUN_0c0e956e();
    t192 = *(signed char *)0xC54223C;
    t193 = *(signed char *)0xC54098D;
    if ((unsigned int)t193 >= (unsigned int)0x11) {
        return;
    }
    switch ((t193 << 1)) {
        case 0:
        {
            FUN_0c0e92f8(0x0);
            FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            t201 = ((int (*)(int))(FUN_0c0e9398))((*(signed char *)0xC54223C));
            if (t201 == 0) {
            } else {
                (((struct o1_uchar *)0xC54098C)->v) = 0x2;
                FUN_0c0e9338();
                FUN_0c0d0378(0x0, 0x7);
            }
            return;
        }
        case 2:
        {
            t207 = ((int (*)(int, int))(FUN_0c0e9398))((*(signed char *)0xC54223C), 0xC1CC240);
            if (t207 == 0) {
            } else {
                (((struct o1_uchar *)0xC54098C)->v) = 0x2;
                FUN_0c0e9338();
                FUN_0c0d0378(0x0, 0x7);
            }
            return;
        }
        case 4:
        {
            t212 = FUN_0c042fe0();
            if (t212 == 0) {
                return;
            }
            (((struct o1_uchar *)0xC54098C)->v) = 0x3;
            (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1CC234 + (((*(signed char *)0xC54098D) - 3) << 2))));
            FUN_0c0e9378();
    return;
        }
        case 6:
        case 8:
        {
            t215 = (((struct o8_short *)0xC54098C)->v);
            (((struct o8_ushort *)0xC54098C)->v) = (t215 - 1);
            if ((int)(short)(t215 - 1) > 0) {
            } else {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1CC234 + (((*(signed char *)0xC54098D) - 3) << 2))));
                *(int *)((int)stk + 0) = 0xC28812C;
                FUN_0c053a1a(0x2000, 0x1000, 0xA, ((*(int *)0xC540D94) + 0x28), 0xC28812C);
            }
            return;
        }
        case 10:
        {
            (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)0xC540D94)))->v)) + -1000.0f);
            (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
            if (1850.0f > ((((struct o2C_float *)((*(int *)0xC540D94)))->v))) {
            } else {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                FUN_0c0e92f8(0x1);
                FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
            }
            return;
        }
        case 12:
        {
            t246 = ((int (*)(int, int))(FUN_0c0e9398))(t192, 0xC1CC240);
            if (t246 == 0) {
            } else {
                (((struct o1_uchar *)0xC54098C)->v) = 0x7;
                FUN_0c0d039e(0x0, 0x7);
                FUN_0c0d0378(0x9, 0x10);
            }
            (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)0xC540D94)))->v)) + -1000.0f);
            (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
            return;
        }
        case 14:
        {
            (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)0xC540D94)))->v)) + -1000.0f);
            if (!(3350.0f > ((((struct o2C_float *)((*(int *)0xC540D94)))->v)))) {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1CC240 + (((*(signed char *)0xC54098D) - 8) << 2))));
                FUN_0c0e9378();
                FUN_0c05af9a(0x59, 0x7F, 0x78);
            }
            (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
            return;
        }
        case 16:
        case 18:
        {
            t274 = (((struct o8_short *)0xC54098C)->v);
            (((struct o8_ushort *)0xC54098C)->v) = (t274 - 1);
            if ((int)(short)(t274 - 1) <= 0) {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1CC240 + (((*(signed char *)0xC54098D) - 8) << 2))));
                *(int *)((int)stk + 0) = 0xC28812C;
                FUN_0c053a1a(0x2000, 0x1000, 0xA, ((*(int *)0xC540D94) + 0x28), 0xC28812C);
            }
            (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
            return;
        }
        case 20:
        {
            (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)0xC540D94)))->v)) + -1000.0f);
            if (!(6500.0f > ((((struct o2C_float *)((*(int *)0xC540D94)))->v)))) {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                FUN_0c0e92f8(0x2);
            }
            if (((*(signed char *)0xC54098E) == 0) && (t303 = *(int *)0xC540D94, u304 = (((struct o2C_float *)(t303))->v), !(7000.0f > u304))) {
                (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
            }
            (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
            return;
        }
        case 22:
        {
            t313 = ((int (*)(int, int))(FUN_0c0e9398))(t192, 0xC1CC240);
            if (t313 != 0) {
                (((struct o1_uchar *)0xC54098C)->v) = 0xC;
                (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                FUN_0c0d039e(0x9, 0x10);
                FUN_0c0d0378(0x11, 0x16);
            }
            (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)0xC540D94)))->v)) + -1000.0f);
            (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
            return;
        }
        case 24:
        {
            (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)0xC540D94)))->v));
            (((struct o0_float *)0xC541098)->v) = (((((struct o4_float *)0xC541098)->v)) + -1000.0f);
            if (!(((((struct o0_float *)0xC0E99D0)->v)) > ((((struct o4_float *)0xC541098)->v)))) {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                FUN_0c0e9378();
    return;
            }
            return;
        }
        case 26:
        {
            t328 = *(signed char *)0xC54098E;
            if (t328 != 0) {
                if (t328 != 1) {
                } else {
                    t329 = (((struct oC_short *)0xC54098C)->v);
                    (((struct oC_ushort *)0xC54098C)->v) = (t329 - 1);
                    if ((int)(short)(t329 - 1) <= 0) {
                        (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
                        FUN_0c05b048(0x1, 0x3C);
                        (((struct o4_float *)0xC541098)->v) = (*(float *)((0xC1CCC30 + ((*(signed char *)0xC54223C) << 2))));
                        (((struct o0_float *)0xC541098)->v) = (((((struct o4_float *)0xC541098)->v)) + -1000.0f);
                    }
                }
            } else {
                (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                FUN_0c05b052(0x3C, 0x0);
                (((struct oC_ushort *)0xC54098C)->v) = 0x0;
                (((struct o4_float *)0xC541098)->v) = (*(float *)((0xC1CCC30 + ((*(signed char *)0xC54223C) << 2))));
                (((struct o0_float *)0xC541098)->v) = (((((struct o4_float *)0xC541098)->v)) + ((((struct o8_float *)0xC0E99D0)->v)));
            }
            return;
        }
        case 28:
        {
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            FUN_0c0e92f8((*(signed char *)0xC54223C));
            (((struct o4_float *)0xC541098)->v) = (*(float *)((0xC1CCC30 + ((*(signed char *)0xC54223C) << 2))));
            (((struct o0_float *)0xC541098)->v) = (((((struct o4_float *)0xC541098)->v)) + -1000.0f);
            t373 = ((int (*)(int))(FUN_0c0e9398))(((*(signed char *)0xC54223C) + 0x3));
            if (t373 != 0) {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                FUN_0c0d02a6();
    return;
            }
            return;
        }
        case 30:
        {
            t376 = ((int (*)(int, int))(FUN_0c0e9398))(((*(signed char *)0xC54223C) + 0x3), 0xC1CC240);
            if (t376 != 0) {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
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


