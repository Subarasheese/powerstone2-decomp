/* Straight-line functions with calls and guards (batch gen_alf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0585a8(int, int, int, Stk3, float);
int FUN_0c14ca80(int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int FUN_0c14cad2(int a4, int a5, int a6, int a7);

int FUN_0c14cad2(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t7;
    register int t13;
    register int t27;
    register int t28;
    register int t29;
    register float u32;
    register int t38;
    register int t39;
    register float u42;
    register int t50;
    register int t59;
    register float u68;
    register int t60;
    register int t61;
    register float u64;
    register int t70;
    register int t71;
    register float u74;
    register int t82;
    register int t93;
    register int t98;
    register int t76;
    register float u78;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        *(unsigned short *)((a4 + 0x1E)) = 0xA;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = (*(signed char *)(((t1 + 0x38F8) + 0x1B)));
    }
    if ((t0 == 0) || (t0 == 1)) {
        t7 = *(signed char *)((a4 + 0x15));
        if (t7 != 0) {
            if (t7 != 1) {
                if (t7 == 2) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((short)((((struct o22_short *)(a4))->v)) * (short)0x3938) + 0xC5324C0)); }
                    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((((struct o0_float *)0xC14CE20)->v)));
                    FUN_0c0585a8(a4, ((int)stk + 0), 0x2D8, *(Stk3 *)(((int)stk + 0)), ((((struct o4_float *)0xC14CE20)->v)));
                    t13 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t13 - 1);
                    if ((int)(short)(t13 - 1) <= 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                    }
                }
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            } else {
                t27 = (int)((int)(nlRand()) % (int)0x3);
                if (t27 != 0) {
                    if (t27 != 1) {
                    } else {
                        t28 = nlRand();
                        t29 = (t28 % 0x2);
                        u32 = 0.0799999982f;
                        if (t29 != 0) {
                            u32 = -0.0500000007f;
                        }
                        (((struct o5C_float *)(a4))->v) = u32;
                    }
                } else {
                    t38 = nlRand();
                    t39 = (t38 % 0x2);
                    u42 = 0.100000001f;
                    if (t39 != 0) {
                        u42 = -0.100000001f;
                    }
                    (((struct o58_float *)(a4))->v) = u42;
                }
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                t50 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t50 - 1);
                if ((int)(short)(t50 - 1) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = 0x3C;
                }
            }
        } else {
            t59 = (int)((int)(nlRand()) % (int)0x3);
            if (t59 != 0) {
                t76 = 0x54;
                u68 = 30.0f;
                if (t59 != 1) {
                } else {
                    t60 = nlRand();
                    t61 = (t60 % 0x2);
                    u64 = 0.0500000007f;
                    if (t61 != 0) {
                        u64 = -0.0500000007f;
                    }
                    t76 = 0x5C;
                    u68 = u64;
                }
                u78 = u68;
            } else {
                t70 = nlRand();
                t71 = (t70 % 0x2);
                u74 = 0.100000001f;
                if (t71 != 0) {
                    u74 = -0.100000001f;
                }
                t76 = 0x58;
                u78 = u74;
            }
            *(float *)((a4 + t76)) = u78;
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t82 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t82 - 1);
            if ((int)(short)(t82 - 1) > 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x78;
                (((struct o54_float *)(a4))->v) = 0.0f;
            }
        }
        FUN_0c14ca80(a4);
        t93 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t93 - 1);
        t98 = (short)(t93 - 1);
        if ((int)(short)(t93 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t98 = 0x14;
        }
    } else {
        t98 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t98;
}
