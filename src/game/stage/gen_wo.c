/* Straight-line functions with calls and guards (batch gen_wo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o4_int { char p[0x4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c059e60(int, int);
int FUN_0c073682(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0b507a(int, int, int);
int FUN_0c0b5ee0(int, int);
int FUN_0c0b5f0a(int, int);
int FUN_0c14ada0(int, int, int, int, int);
int nlRand(void);
int FUN_0c0b6018(int a4, int a5, int a6);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c0b6018(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = *(signed char *)(a4 + 0x16);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                t1 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
                if ((int)(short)(t1 - 1) > 0) {
                    return FUN_0c038362(a4);
                }
                (((struct o1C_ushort *)(a4))->v) = 0xF;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x38F8 + a4) + 0x1C)) = *(struct mv3 *)(((((short)(*(signed char *)(((0x38F8 + a4) + 0x1B))) * (short)0x3938) + 0xC532498) + 0x28)); }
                (((struct o20_float *)((0x38F8 + a4)))->v) = ((((struct o168_float *)((0xC532498 + ((short)(*(signed char *)(((0x38F8 + a4) + 0x1B))) * (short)0x3938))))->v));
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                return 0x16;
            }
            if (t0 == 3) {
                (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                t1 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    (((struct o1C_ushort *)(a4))->v) = 0x28;
                    FUN_0c059e60(a4, 0x22);
                    FUN_0c0b5f0a(a4, 0x0);
                    FUN_0c0b5f0a(a4, 0x1);
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                    return 0x16;
                }
                return FUN_0c038362(a4);
            }
            if (t0 == 4) {
                (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
                t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                t0 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    t0 = (((struct o4_int *)0xC1C6808)->v);
                    t1 = *(signed char *)(a4 + 0x1);
                    FUN_0c07e79c(a4, t1, 0x1, t0, (t1), 0x1, (t0));
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                    t0 = 0x16;
                    t1 = 0x0;
                    for (;;) {
                        if ((int)t1 >= (int)0x4) {
                            break;
                        }
                        t0 = (FUN_0c0b5ee0(t1, (*(signed char *)(a4 + 0x1))));
                        if (t0 == 0) {
                            t0 = (FUN_0c073682(((t1 * 0x3938) + 0xC532498), 0x12));
                        }
                        t1 = (t1 + 0x1);
                    }
                    return t0;
                }
                return FUN_0c038362(a4);
            }
            t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
            if ((unsigned char)t0 != 0) {
                return FUN_0c0b507a(a4, 0x0, 0x0);
            }
            return FUN_0c038362(a4);
        }
    } else {
        t0 = (((struct o0_int *)0xC1C6808)->v);
        t1 = *(signed char *)(a4 + 0x1);
        FUN_0c07e79c(a4, t1, 0x1, t0, (t1), 0x1, (t0));
        t0 = nlRand();
        t1 = (t0 % 0x2);
        (((struct o1B_uchar *)((0x38F8 + a4)))->v) = (*(signed char *)((((0x38F8 + a4) + 0x18) + t1)));
        (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)(a4 + 0x17);
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c038362(a4);
        }
        t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
        t0 = (((struct o1E_short *)(a4))->v);
        (((struct o1E_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o1E_ushort *)(a4))->v) = 0x14;
            FUN_0c14ada0(a4, 0x0, 0x3C, (((((struct oE4_int *)(a4))->v)) + 0x28), 0xC1C6810);
            FUN_0c14ada0(a4, 0x1, 0x3C, (((((struct oF4_int *)(a4))->v)) + 0x28), 0xC1C681C);
        }
        t0 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) > 0) {
        } else {
            (((struct o1C_ushort *)(a4))->v) = 0xF;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            t1 = 0x17;
        }
        return t1;
    }
    t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
    if ((unsigned char)t0 == 0) {
    } else {
        (((struct o1C_ushort *)(a4))->v) = 0x87;
        (((struct o1E_ushort *)(a4))->v) = 0x14;
        FUN_0c059e60(a4, 0x21);
        FUN_0c14ada0(a4, 0x0, 0x3C, (((((struct oE4_int *)(a4))->v)) + 0x28), 0xC1C6810);
        FUN_0c14ada0(a4, 0x1, 0x3C, (((((struct oF4_int *)(a4))->v)) + 0x28), 0xC1C681C);
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
    }
    return FUN_0c038362(a4);
}
