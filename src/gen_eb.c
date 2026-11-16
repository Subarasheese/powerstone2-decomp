/* Straight-line functions with calls and guards (batch gen_eb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c042fe0(void);
int FUN_0c053a1a(int, int, int, int, int);
int FUN_0c0585a8(int, int, int, float);
int FUN_0c059c16(int, int);
int FUN_0c05aae4(int, int);
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
int FUN_0c16af78(int, int, int);
int FUN_0c16af86(int, int, int, int);
extern int FUN_0c16afb6();
int FUN_0c179ac0(void);
extern int FUN_0c18778c();
int FUN_0c187798(void);
int math_vec3_accumulate(int, int);
void FUN_0c0e9596(int a4, int a5, int a6);
int FUN_0c16b5a6(int a4, int a5, int a6, int a7, float f4);
int FUN_0c16c8e8(int a4, int a5, int a6, int a7);

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

int FUN_0c16b5a6(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t6;
    register int t8;
    register int t10;
    register int t12;
    register int t16;
    register int t17;
    register int t18;
    register int t22;
    register int t23;
    register int t30;
    register int t32;
    register float u33;
    register int t37;
    register int t38;
    register int t39;
    register int t49;
    register float u50;
    register int t54;
    register int t55;
    register int t56;
    register int t58;
    register int t60;
    register int t62;
    register int t64;
    register int t66;
    register int t80;
    register int t84;
    register int t86;
    register float u89;
    register int t91;
    register float u92;
    register int t93;
    register int t95;
    register int t97;
    register int t99;
    register int t101;
    register int t103;
    register int t106;
    register int t107;
    register int t108;
    register int t114;
    register int t157;
    register int t161;
    register int t163;
    register float u166;
    register int t168;
    register float u169;
    register int t170;
    register int t172;
    register int t174;
    register int t176;
    register int t178;
    register int t180;
    register int t183;
    register int t184;
    register int t185;
    register int t191;
    register int t210;
    register float u28;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                if ((*(signed char *)((a4 + 0x15))) == 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                    t6 = (((struct oCC_int *)(a4))->v);
                    *(unsigned short *)((t6 + 0x6)) = ((*(short *)((t6 + 0x6))) | 0x210);
                    t8 = (((struct oD0_int *)(a4))->v);
                    *(unsigned short *)((t8 + 0x6)) = ((*(short *)((t8 + 0x6))) | 0x210);
                    t10 = (((struct oD4_int *)(a4))->v);
                    *(unsigned short *)((t10 + 0x6)) = ((*(short *)((t10 + 0x6))) | 0x210);
                    t12 = (((struct oD4_int *)(a4))->v);
                    (((struct o8C_float *)(t12))->v) = 1.0f;
                    (((struct o88_float *)(t12))->v) = 1.0f;
                    (((struct o84_float *)(t12))->v) = 1.0f;
                    *(volatile int *)(((0xC4 + a4) + 0x8));
                    *(volatile int *)(((0xC4 + a4) + 0x10));
                    *(volatile int *)(((0xC4 + a4) + 0xC));
                    t16 = ((int (*)(int, int, int))(FUN_0c187798))((0xC4 + a4), a5, a6);
                    t17 = ((int (*)(void))(FUN_0c187798))();
                    t18 = (((struct oD4_int *)(a4))->v);
                    (((struct o20_float *)(t18))->v) = f4;
                    (((struct o1C_float *)(t18))->v) = f4;
                    (((struct o18_float *)(t18))->v) = f4;
                    *(volatile int *)(((0xC4 + a4) + 0xC));
                    *(volatile int *)(((0xC4 + a4) + 0x10));
                    *(volatile int *)(((0xC4 + a4) + 0x8));
                    t22 = ((int (*)(int, float))(FUN_0c18778c))((0xC4 + a4), f4);
                    t23 = ((int (*)(void))(FUN_0c18778c))();
                } else {
                    u28 = 1.0f;
                }
                t30 = (((struct oD4_int *)(a4))->v);
                (((struct o8C_float *)(t30))->v) = (((((struct o8C_float *)(t30))->v)) + u28);
                t32 = (((struct oD4_int *)(a4))->v);
                u33 = (((struct o8C_float *)(t32))->v);
                (((struct o88_float *)(t32))->v) = u33;
                (((struct o84_float *)(t32))->v) = u33;
                *(volatile int *)(((0xC4 + a4) + 0x8));
                *(volatile int *)(((0xC4 + a4) + 0x10));
                *(volatile int *)(((0xC4 + a4) + 0xC));
                t37 = ((int (*)(int))(FUN_0c187798))((0xC4 + a4));
                t38 = ((int (*)(void))(FUN_0c187798))();
                t39 = (((struct oD4_int *)(a4))->v);
                (((struct o20_float *)(t39))->v) = (((((struct o20_float *)(t39))->v)) - 0.200000003f);
                if (!(((((struct o20_float *)(((((struct oD4_int *)(a4))->v))))->v)) > 0.0f)) {
                    (((struct o20_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                t49 = (((struct oD4_int *)(a4))->v);
                u50 = (((struct o20_float *)(t49))->v);
                (((struct o1C_float *)(t49))->v) = u50;
                (((struct o18_float *)(t49))->v) = u50;
                *(volatile int *)(((0xC4 + a4) + 0xC));
                *(volatile int *)(((0xC4 + a4) + 0x10));
                *(volatile int *)(((0xC4 + a4) + 0x8));
                t54 = ((int (*)(int))(FUN_0c18778c))((0xC4 + a4));
                t55 = ((int (*)(void))(FUN_0c18778c))();
                t56 = (((struct oCC_int *)(a4))->v);
                (((struct o78_uint *)(t56))->v) = (((((struct o78_int *)(t56))->v)) + 0x71C);
                t58 = (((struct oCC_int *)(a4))->v);
                (((struct o7C_uint *)(t58))->v) = (((((struct o7C_int *)(t58))->v)) + 0x1C71);
                t60 = (((struct oD0_int *)(a4))->v);
                (((struct o78_uint *)(t60))->v) = (((((struct o78_int *)(t60))->v)) + 0x71C);
                t62 = (((struct oD0_int *)(a4))->v);
                (((struct o7C_uint *)(t62))->v) = (((((struct o7C_int *)(t62))->v)) + 0x1C71);
                t64 = (((struct oD4_int *)(a4))->v);
                (((struct o78_uint *)(t64))->v) = (((((struct o78_int *)(t64))->v)) + 0x71C);
                t66 = (((struct oD4_int *)(a4))->v);
                (((struct o7C_uint *)(t66))->v) = (((((struct o7C_int *)(t66))->v)) + 0x1C71);
                t210 = 0x7C;
            } else {
                t210 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
            }
            t80 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t80 - 1);
            if ((int)(short)(t80 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
            }
            t84 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t84))->v) = (((((struct o7C_int *)(t84))->v)) - 0x1555);
            t86 = (((struct oC8_int *)(a4))->v);
            u89 = 1.5f;
            if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                u89 = 1.0f;
            }
            (((struct o84_float *)(t86))->v) = u89;
            t91 = (((struct oC8_int *)(a4))->v);
            u92 = (((struct o84_float *)(t91))->v);
            (((struct o8C_float *)(t91))->v) = u92;
            (((struct o88_float *)(t91))->v) = u92;
            t93 = (((struct oCC_int *)(a4))->v);
            (((struct o78_uint *)(t93))->v) = (((((struct o78_int *)(t93))->v)) + 0x71C);
            t95 = (((struct oCC_int *)(a4))->v);
            (((struct o7C_uint *)(t95))->v) = (((((struct o7C_int *)(t95))->v)) + 0x1C71);
            t97 = (((struct oD0_int *)(a4))->v);
            (((struct o78_uint *)(t97))->v) = (((((struct o78_int *)(t97))->v)) + 0x71C);
            t99 = (((struct oD0_int *)(a4))->v);
            (((struct o7C_uint *)(t99))->v) = (((((struct o7C_int *)(t99))->v)) + 0x1C71);
            t101 = (((struct oD4_int *)(a4))->v);
            (((struct o78_uint *)(t101))->v) = (((((struct o78_int *)(t101))->v)) + 0x71C);
            t103 = (((struct oD4_int *)(a4))->v);
            (((struct o7C_uint *)(t103))->v) = (((((struct o7C_int *)(t103))->v)) + 0x1C71);
            if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) == 13) {
                t106 = ((int (*)(int, float))(FUN_0c16afb6))(a4, f4);
                t107 = ((int (*)(void))(FUN_0c187798))();
            } else {
                t108 = ((int (*)(int, int, int))(FUN_0c187798))(t91, a5, a6);
            }
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
            FUN_0c0585a8(a4, ((int)stk + 0), 0x2D8, 10.0f);
            t114 = FUN_0c16af86(a4, 0x2, 0x2, 0x4);
            if (t114 != 0) {
                FUN_0c037498(((((struct oCC_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
                FUN_0c037498(((((struct oD0_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
                FUN_0c037498(((((struct oD4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t210 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct o48_float *)(a4))->v) = 1.5f;
        (((struct o44_float *)(a4))->v) = 1.5f;
        (((struct o40_float *)(a4))->v) = 1.5f;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x31;
        *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((((((struct oD0_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((((((struct oD4_int *)(a4))->v)) + 0x6)) = 0xF;
        FUN_0c16af78(a4, 0x2, 0x2);
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x4000;
        (((struct o78_uint *)(((((struct oD0_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oD4_int *)(a4))->v))))->v) = 0xFFFFC000;
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
        }
        t157 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t157 - 1);
        if ((int)(short)(t157 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        t161 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t161))->v) = (((((struct o7C_int *)(t161))->v)) - 0x1555);
        t163 = (((struct oC8_int *)(a4))->v);
        u166 = 1.5f;
        if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
            u166 = 1.0f;
        }
        (((struct o84_float *)(t163))->v) = u166;
        t168 = (((struct oC8_int *)(a4))->v);
        u169 = (((struct o84_float *)(t168))->v);
        (((struct o8C_float *)(t168))->v) = u169;
        (((struct o88_float *)(t168))->v) = u169;
        t170 = (((struct oCC_int *)(a4))->v);
        (((struct o78_uint *)(t170))->v) = (((((struct o78_int *)(t170))->v)) + 0x71C);
        t172 = (((struct oCC_int *)(a4))->v);
        (((struct o7C_uint *)(t172))->v) = (((((struct o7C_int *)(t172))->v)) + 0x1C71);
        t174 = (((struct oD0_int *)(a4))->v);
        (((struct o78_uint *)(t174))->v) = (((((struct o78_int *)(t174))->v)) + 0x71C);
        t176 = (((struct oD0_int *)(a4))->v);
        (((struct o7C_uint *)(t176))->v) = (((((struct o7C_int *)(t176))->v)) + 0x1C71);
        t178 = (((struct oD4_int *)(a4))->v);
        (((struct o78_uint *)(t178))->v) = (((((struct o78_int *)(t178))->v)) + 0x71C);
        t180 = (((struct oD4_int *)(a4))->v);
        (((struct o7C_uint *)(t180))->v) = (((((struct o7C_int *)(t180))->v)) + 0x1C71);
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) == 13) {
            t183 = ((int (*)(int))(FUN_0c16afb6))(a4);
            t184 = ((int (*)(void))(FUN_0c187798))();
        } else {
            t185 = ((int (*)(int))(FUN_0c187798))(t168);
        }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
        FUN_0c0585a8(a4, ((int)stk + 0), 0x2D8, 10.0f);
        t191 = FUN_0c16af86(a4, 0x2, 0x2, 0x4);
        if (t191 != 0) {
            FUN_0c037498(((((struct oCC_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD0_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t210 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
    }
    return t210;
}

int FUN_0c16c8e8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.00999999978f);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.00999999978f);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00999999978f);
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x3;
                t0 = (((struct o20_short *)(a4))->v);
                switch (t0) {
                case 1:
                    (((struct o20_ushort *)(a4))->v) = 0x2;
                    break;
                case 2:
                    (((struct o20_ushort *)(a4))->v) = 0x3;
                    break;
                case 3:
                    (((struct o20_ushort *)(a4))->v) = 0x4;
                    break;
                case 4:
                    (((struct o20_ushort *)(a4))->v) = 0x1;
                    break;
                }
                FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x54, (*(int *)0xC4B40CC));
            }
            if (!(((((struct o2C_float *)(a4))->v)) > ((*(float *)0xC54109C) + 500.0f))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o50_float *)(a4))->v) = -2.0f;
                (((struct o54_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x0;
                t0 = FUN_0c037320(0x20, (*(int *)0xC4B40CC));
                t1 = FUN_0c03f444(0x6, 0x0, t0);
                t2 = t1;
                if (t1 != 0) {
                    FUN_0c03733c(t1, 0x20, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
                    (((struct oA9_uchar *)(t1))->v) = 0x21;
                    FUN_0c187798();
                    *(unsigned int *)((t1 + 0x4)) = 0xC16CACE;
                    (((struct oAC_ushort *)(t1))->v) = 0x41F;
                    (((struct oB0_float *)(t1))->v) = 1.0f;
                    (((struct o60_float *)(t1))->v) = 1.20000005f;
                    (((struct o58_float *)(t1))->v) = ((1.20000005f * (1.0f + 1.0f)) / 3.0f);
                    if ((int)t0 > 0) {
                        t3 = 0x0;
                        t4 = 0x0;
                        for (;;) {
                            t4 = (t4 + 0x1);
                            t5 = *(int *)((((0xC4 + t1) + t3) + 0x0));
                            *(unsigned short *)((t5 + 0x6)) = ((*(short *)((t5 + 0x6))) | 0x1000);
                            (((struct o24_float *)((*(int *)((((0xC4 + t1) + t3) + 0x0)))))->v) = 1.20000005f;
                            t3 = (t3 + 0x4);
                            if ((int)t4 >= (int)t0) {
                                break;
                            }
                        }
                    }
                    t0 = FUN_0c179ac0();
                    t3 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                    if ((int)t0 >= 0) {
                        t3 = (t0 & 0x1);
                    }
                    (((struct o17_uchar *)(t1))->v) = t3;
                    t2 = t3;
                }
                return t2;
            }
            return 0x2C;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = FUN_0c179ac0();
            t2 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
            if ((int)t0 >= 0) {
                t2 = (t0 & 0x3);
            }
            u0 = *(float *)(((((t2 << 2) << 1) + 0xC2A39AC) + 0x0));
            (((struct o50_float *)(a4))->v) = u0;
            (((struct o54_float *)(a4))->v) = ((-u0) / (1.0f + 1.0f));
            (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)((((t2 << 2) << 1) + 0xC2A39AC)))->v));
            *(unsigned short *)((a4 + 0x1C)) = 0x64;
            *(unsigned short *)((a4 + 0x1E)) = 0x3;
            (((struct o20_ushort *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            FUN_0c05aae4(0x65, (a4 + 0x28));
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t1 = 0xA8;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x2));
    t1 = FUN_0c179ac0();
    t2 = ((~(((~t1) + 0x1) & 0x7)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x7);
    }
    *(unsigned short *)((a4 + 0x1C)) = (t2 + (t0 << 1));
    (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0xFFFFEAAB;
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o18_float *)(t0))->v) = 0.0f;
    (((struct o1C_float *)(t0))->v) = 0.0f;
    (((struct o20_float *)(t0))->v) = 0.0f;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
