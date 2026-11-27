/* Straight-line functions with calls and guards (batch gen_ame): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o375C_uchar { char p[0x375C]; unsigned char v; };
struct o375D_uchar { char p[0x375D]; unsigned char v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3840_short { char p[0x3840]; short v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c042ff8(void);
int FUN_0c043064(void);
int FUN_0c059e60(int, int);
int FUN_0c05aaf6(int);
int FUN_0c067438(int);
int FUN_0c073eb8(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c1603c2(int);
int nlRand(void);
int FUN_0c083a40(int a4, int a5, int a6, int a7, float f4);

int FUN_0c083a40(int a4, int a5, int a6, int a7, float f4)
{
    int stk[11];
    register int t4;
    register int t5;
    register int t8;
    register int t11;
    register int t9;
    int t12;
    register int t21;
    register int t62;
    int t3;
    float u10;
    register int t13;
    int t29;
    int t47;
    int t74;
    register int R1004;
    register int R1008;
    register int R1012;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x16;
    FUN_0c081dfc(a4, a5, a6, a7);
    FUN_0c067438(a4);
    (((struct o374A_uchar *)(a4))->v) = 0x3C;
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    if (((*(signed char *)0xC54098D) == 8) && (t3 = *(signed char *)0xC542237, t3 == 0)) {
        (((struct o15_uchar *)(a4))->v) = 0x4;
        return 0x15;
    }
    t4 = nlRand();
    t5 = (t4 % 0x4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC541068 + (((t5 << 1) + t5) << 2))); }
    t8 = FUN_0c042ff8();
    t11 = 0;
    if (t8 != 0) {
        t9 = FUN_0c043064();
        if ((t9 == 0) && (u10 = (((struct o160_float *)(a4))->v), !(u10 > 0.0f))) {
        } else {
            t11 = 1;
        }
    } else {
        t11 = 1;
    }
    if (t11) {
        t12 = *(signed char *)0xC54098D;
        if (((t12 != 10) && (t12 != 11)) || (t13 = *(signed char *)0xC542237, t13 != 2)) {
            FUN_0c073eb8(a4, (*(signed char *)((a4 + 0x1))), ((*(int *)0xC25AD1C) + 0x17C));
            t21 = *(signed char *)(((int)stk + 12));
            if (t21 != 0) {
                if (t21 == 1) {
                    if (((((struct o160_float *)(a4))->v)) != 0.0f) {
                        FUN_0c07e868(a4, 0x9);
                    } else {
                        R1012 = 0x35;
                        R1008 = 0x4;
                        R1004 = 0xFFFFFFFF;
                        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x35, 0xFFFFFFFF, 0x4, 0x35);
                        (((struct o372C_uchar *)(a4))->v) = 0x0;
                        if ((((((struct o3840_short *)(a4))->v)) != 0x270F) && (t29 = (((struct o3840_short *)(a4))->v), (int)t29 < (int)0xF0)) {
                            (((struct o3840_ushort *)(a4))->v) = (((((struct o3840_short *)(a4))->v)) + 0xB4);
                        }
                    }
                    (((struct o3756_uchar *)(a4))->v) = 0x1;
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                    (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
                    (((struct o15_uchar *)(a4))->v) = 0x2;
                }
            } else {
                if (((((struct o160_float *)(a4))->v)) != 0.0f) {
                    FUN_0c07e868(a4, 0x0);
                } else {
                    R1012 = 0x35;
                    R1008 = 0x4;
                    R1004 = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x35, 0xFFFFFFFF, 0x4, 0x35);
                    (((struct o372C_uchar *)(a4))->v) = 0x0;
                    if ((((((struct o3840_short *)(a4))->v)) != 0x270F) && (t47 = (((struct o3840_short *)(a4))->v), (int)t47 < (int)0xF0)) {
                        (((struct o3840_ushort *)(a4))->v) = (((((struct o3840_short *)(a4))->v)) + 0xB4);
                    }
                }
                (((struct o3756_uchar *)(a4))->v) = 0x1;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x5;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37DC + a4)) = *(struct mv3 *)((a4 + 0x28)); }
                (((struct o375D_uchar *)(a4))->v) = 0x1;
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 1000.0f);
                (((struct o15_uchar *)(a4))->v) = 0x0;
            }
            (((struct o375C_uchar *)(a4))->v) = 0xB4;
            t62 = *(signed char *)((a4 + 0x3716));
            if (t62 != 22) {
                FUN_0c1603c2(a4);
                if ((*(signed char *)((0xC535BB8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) == 0) {
                    FUN_0c05aaf6((0xAB + (*(signed char *)((a4 + 0x1)))));
                }
                return FUN_0c059e60(a4, 0xF);
            }
            return t62;
        }
        if (((*(signed char *)((a4 + 0x3716))) != 22) && (t74 = *(signed char *)((a4 + 0x3716)), t74 != 32)) {
            FUN_0c073eb8(a4, (*(signed char *)((a4 + 0x1))), ((*(int *)0xC25AD1C) + 0x104));
        }
    }
    (((struct o3756_uchar *)(a4))->v) = 0x1;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct o15_uchar *)(a4))->v) = 0x4;
    return 0x15;
}
