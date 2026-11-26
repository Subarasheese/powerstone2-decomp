/* Straight-line functions with calls and guards (batch gen_ks): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
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
int FUN_0c0e91a0(void);
int FUN_0c0e92f8(int);
int FUN_0c0e9338(void);
extern int FUN_0c0e9378();
int FUN_0c0e9398(int);
int FUN_0c0e956e(void);
void FUN_0c0e9596(void);

void FUN_0c0e9596(void)
{
    int qa0;
    int qa1;
    int stk[8];
    int t0;
    int t7;
    int t8;
    int t30;
    int t89;
    float u119;
    int t77;
    int t118;
    int t191;
    int t188;
    int t128;
    int t61;
    int t27;
    int t22;
    int t16;
    int t144;
    int t143;

    qa1 = 0xC54098D;
    qa0 = 0xC540D94;
    t0 = *(signed char *)0xC54098C;
    if (t0 == 0) {
        (((struct o0_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098C) + 0x1);
        (((struct o1_uchar *)0xC54098C)->v) = 0x0;
        (((struct o18_uint *)0xC540A20)->v) = 0x0;
        (((struct o0_uchar *)0xC540A20)->v) = 0x0;
        (((struct oA_ushort *)0xC54098C)->v) = 0x0;
        (((struct o0_float *)0xC541098)->v) = -500.0f;
        (((struct o4_float *)0xC541098)->v) = 0.0f;
    }
    if ((t0 == 0) || (t0 == 1)) {
        FUN_0c0e91a0();
        FUN_0c0e956e();
        t7 = *(signed char *)0xC54223C;
        t8 = *(signed char *)qa1;
        if ((unsigned int)t8 >= (unsigned int)0x11) {
            return;
        }
        switch ((t8 << 1)) {
            case 0:
            {
                FUN_0c0e92f8(0x0);
                FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)qa1) + 0x1);
                t16 = FUN_0c0e9398((*(signed char *)0xC54223C));
                if (t16 == 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = 0x2;
                    FUN_0c0e9338();
                    FUN_0c0d0378(0x0, 0x7);
                }
                return;
            }
            case 2:
            {
                t22 = FUN_0c0e9398((*(signed char *)0xC54223C));
                if (t22 == 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = 0x2;
                    FUN_0c0e9338();
                    FUN_0c0d0378(0x0, 0x7);
                }
                return;
            }
            case 4:
            {
                t27 = FUN_0c042fe0();
                if (t27 == 0) {
                    return;
                }
                (((struct o1_uchar *)0xC54098C)->v) = 0x3;
                (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1CC234 + (((*(signed char *)qa1) - 3) << 2))));
                ((int (*)(void))(FUN_0c0e9378))();
    return;
            }
            case 6:
            case 8:
            {
                t30 = (((struct o8_short *)0xC54098C)->v);
                (((struct o8_ushort *)0xC54098C)->v) = (t30 - 1);
                if ((int)(short)(t30 - 1) > 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)qa1) + 0x1);
                    (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1CC234 + (((*(signed char *)qa1) - 3) << 2))));
                    FUN_0c053a1a(0x2000, 0x1000, 0xA, ((*(int *)qa0) + 0x28), 0xC28812C);
                }
                return;
            }
            case 10:
            {
                (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)qa0)))->v)) + -1000.0f);
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)qa0)))->v));
                if (1850.0f > ((((struct o2C_float *)((*(int *)qa0)))->v))) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)qa1) + 0x1);
                    FUN_0c0e92f8(0x1);
                    FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
                }
                return;
            }
            case 12:
            {
                t61 = FUN_0c0e9398(t7);
                if (t61 == 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = 0x7;
                    FUN_0c0d039e(0x0, 0x7);
                    FUN_0c0d0378(0x9, 0x10);
                }
                (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)qa0)))->v)) + -1000.0f);
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)qa0)))->v));
                return;
            }
            case 14:
            {
                (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)qa0)))->v)) + -1000.0f);
                if (!(3350.0f > ((((struct o2C_float *)((*(int *)qa0)))->v)))) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)qa1) + 0x1);
                    (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1CC240 + (((*(signed char *)qa1) - 8) << 2))));
                    t77 = ((int (*)(void))(FUN_0c0e9378))();
                    FUN_0c05af9a(0x59, 0x7F, 0x78);
                }
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)qa0)))->v));
                return;
            }
            case 16:
            case 18:
            {
                t89 = (((struct o8_short *)0xC54098C)->v);
                (((struct o8_ushort *)0xC54098C)->v) = (t89 - 1);
                if ((int)(short)(t89 - 1) <= 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)qa1) + 0x1);
                    (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                    (((struct o8_ushort *)0xC54098C)->v) = (*(int *)((0xC1CC240 + (((*(signed char *)qa1) - 8) << 2))));
                    FUN_0c053a1a(0x2000, 0x1000, 0xA, ((*(int *)qa0) + 0x28), 0xC28812C);
                }
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)qa0)))->v));
                return;
            }
            case 20:
            {
                (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)qa0)))->v)) + -1000.0f);
                if (!(6500.0f > ((((struct o2C_float *)((*(int *)qa0)))->v)))) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)qa1) + 0x1);
                    FUN_0c0e92f8(0x2);
                }
                if (((*(signed char *)0xC54098E) == 0) && (t118 = *(int *)qa0, u119 = (((struct o2C_float *)(t118))->v), !(7000.0f > u119))) {
                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                }
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)qa0)))->v));
                return;
            }
            case 22:
            {
                t128 = FUN_0c0e9398(t7);
                if (t128 != 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = 0xC;
                    (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                    FUN_0c0d039e(0x9, 0x10);
                    FUN_0c0d0378(0x11, 0x16);
                }
                (((struct o0_float *)0xC541098)->v) = (((((struct o2C_float *)((*(int *)qa0)))->v)) + -1000.0f);
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)qa0)))->v));
                return;
            }
            case 24:
            {
                (((struct o4_float *)0xC541098)->v) = ((((struct o2C_float *)((*(int *)qa0)))->v));
                (((struct o0_float *)0xC541098)->v) = (((((struct o4_float *)0xC541098)->v)) + -1000.0f);
                if (!(((((struct o0_float *)0xC0E99D0)->v)) > ((((struct o4_float *)0xC541098)->v)))) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)qa1) + 0x1);
                    ((int (*)(void))(FUN_0c0e9378))();
    return;
                }
                return;
            }
            case 26:
            {
                t143 = *(signed char *)0xC54098E;
                if (t143 != 0) {
                    if (t143 != 1) {
                    } else {
                        t144 = (((struct oC_short *)0xC54098C)->v);
                        (((struct oC_ushort *)0xC54098C)->v) = (t144 - 1);
                        if ((int)(short)(t144 - 1) <= 0) {
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
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)qa1) + 0x1);
                FUN_0c0e92f8((*(signed char *)0xC54223C));
                (((struct o4_float *)0xC541098)->v) = (*(float *)((0xC1CCC30 + ((*(signed char *)0xC54223C) << 2))));
                (((struct o0_float *)0xC541098)->v) = (((((struct o4_float *)0xC541098)->v)) + -1000.0f);
                t188 = FUN_0c0e9398(((*(signed char *)0xC54223C) + 0x3));
                if (t188 != 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)qa1) + 0x1);
                    FUN_0c0d02a6();
    return;
                }
                return;
            }
            case 30:
            {
                t191 = FUN_0c0e9398(((*(signed char *)0xC54223C) + 0x3));
                if (t191 != 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)qa1) + 0x1);
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
    } else {
        return;
    }
}
