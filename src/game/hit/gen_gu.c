/* Straight-line functions with calls and guards (batch gen_gu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o158_int { char p[0x158]; int v; };
struct o160_int { char p[0x160]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o41C_float { char p[0x41C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c07e3fc(int, int);
int FUN_0c11fbec(void);
int FUN_0c120018(int, int, int, int, int, int);
int FUN_0c120504(int, int, int, int);
int FUN_0c120654(int, int, int, int);
int FUN_0c120906(int, int, int, int, int);
int FUN_0c120e9e(int, int, int, int);
int FUN_0c1211b0(void);
int FUN_0c145c74(int, int);
int FUN_0c145d1c(int, int);
int FUN_0c145eb2(int, int, int);
int FUN_0c1470ea(int, int, int, float);
int FUN_0c147222(int, int, int, float);
float nlRoundOff(float);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int FUN_0c1472dc(int a4);
float FUN_0c11f5c2(int a4);
int FUN_0c061ff4(int a4, int a5, int a6, int a7);
int FUN_0c0cacac(int a4, int a5, int a6, int a7);

#define P(o) (*(int *)(a4 + (o)))
/* manual: task update of a thrown stone effect: follow the owner's hand, then by state [0x14] spawn, spin and fly to the
   target, shrink, wait and free the task; 152 cases, 391 of 391 instructions */
int FUN_0c1472dc(int a4)
{
    signed char *t = (signed char *)a4;
    float *scale = (float *)(a4 + 0x41C);
    Stk3 v;
    int hit, s, r, q;

    v = *(Stk3 *)0xC2A2640;
    FUN_0c058adc((int)&v, (int)&v, t[2] * 0x3938 + 0xC532498 + 0x9A0);
    *(Stk3 *)(a4 + 0x28) = v;
    if (t[0x14] <= 2) {
        FUN_0c0588bc(P(0xD0) + 0x6C, P(0xCC) + 0x6C, P(0xCC) + 0x84, *(short *)(a4 + 0x1C), 60, 0);
    } else {
        *(Stk3 *)(P(0xD0) + 0x6C) = *(Stk3 *)(P(0xCC) + 0x6C);
    }
    q = P(0xD0);
    hit = FUN_0c145eb2(q + 0x84, q + 0x6C, a4 + 0x28);
    if (hit == 0) {
        q = P(0xD0);
        *(Stk3 *)(q + 0x84) = *(Stk3 *)(q + 0x6C);
    }
    *(float *)(P(0xD0) + 0x88) = 0.0f;
    nlSubVector3op((int)&v, P(0xD0) + 0x84, (int)&v);
    FUN_0c145c74(a4 + 0x34, (int)&v);
    s = t[0x14];
    switch (s) {
    case 0:
        t[0x14]++;
        t[0xA8] = 1;
        *(short *)(a4 + 0xAC) = 15;
        *(Stk3 *)(a4 + 0x40) = *(Stk3 *)0xC2A23A0;
        t[0xA9] = 33;
        FUN_0c03744a(P(0xC4), 3, 10, *(int *)(t[2] * 8 + 0xC4B40E0));
        *(char *)P(0xC4) = 0;
        *(short *)(P(0xC4) + 6) = 31;
        *(Stk3 *)(P(0xC4) + 0x84) = *(Stk3 *)0xC2A2664;
        q = P(0xC4);
        *(float *)(q + 0x84) *= *scale;
        q = P(0xC4);
        *(float *)(q + 0x88) *= *scale;
        FUN_0c059e60(*(signed char *)0xC542363 * 0x3938 + 0xC532498, 0x25);
    case 1:
        t[0x14]++;
        *(char *)P(0xC4) = 1;
        return 0xC4;
    case 2:
        *(int *)(P(0xC4) + 0x80) += 0x1800;
        nlSubVector3op((int)&v, P(0xD0) + 0x84, a4 + 0x28);
        {
            float len = nlScalor((int)&v) / 4000.0f;
            *(float *)(P(0xC4) + 0x8C) = len;
        }
        if (*(short *)(a4 + 0x1C) % 8 == 0) FUN_0c147222(t[1], t[2], a4, *scale);
        if (hit & 3) FUN_0c1470ea(t[2], t[1], P(0xD0) + 0x84, *scale);
        goto draw;
    case 3:
        if (--*(short *)(a4 + 0x1C) >= 0) {
            *(float *)(P(0xC4) + 0x8C) -= 0.08f;
            *(float *)(P(0xC4) + 0x74) += 320.0f;
        } else {
            t[0x14]++;
            *(short *)(a4 + 0x1C) = 0;
            t[0xA8] = 0;
            FUN_0c059e60(*(signed char *)0xC542363 * 0x3938 + 0xC532498, 0x26);
        }
    draw:
        *(unsigned short *)(P(0xC4) + 6) |= 0x1000;
        r = FUN_0c145d1c(a4, P(0xC4));
        if (s == 2) {
            r = (short)(*(short *)(a4 + 0x1C) + 1);
            *(short *)(a4 + 0x1C) = r;
            if (r > 60) {
                t[0x14]++;
                r = (int)nlRoundOff(*(float *)(P(0xC4) + 0x8C) / 0.08f);
                *(short *)(a4 + 0x1C) = r;
            }
        }
        return r;
    case 4:
        r = (short)(*(short *)(a4 + 0x1C) + 1);
        *(short *)(a4 + 0x1C) = r;
        if (r > 40) {
            t[0x14]++;
            r = 20;
        }
        return r;
    case 5:
        return FUN_0c03f346(a4);
    }
    return s;
}
#undef P


int FUN_0c061ff4(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register int t192;
    register int t26;
    register float u42;
    register float u55;
    register int t57;
    register int t67;
    register float u85;
    register int t92;
    register int t103;
    register float u121;
    register int t132;
    register int t143;
    register float u43;
    register float u44;
    float u56;
    register float u64;
    register float u76;
    register float u83;
    register float u99;
    register float u112;
    register float u119;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC1C4AB8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1C4AC4); }
    u0 = (((struct o8_float *)(a6))->v);
    u1 = (((struct o8_float *)(a7))->v);
    u2 = (((struct oC_float *)((a7 + 0x8)))->v);
    u3 = (((struct oC_float *)((a6 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    (((struct o18_float *)(((int)stk + 0)))->v) = ((u3 + u2) - u4);
    u6 = (((struct o10_float *)((a6 + 0x8)))->v);
    u7 = (((struct o10_float *)((a7 + 0x8)))->v);
    u8 = (((struct o4_float *)((a6 + 0x8)))->v);
    u9 = (((struct o4_float *)((a7 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o4_float *)((((int)stk + 0) + 0x18)))->v) = ((u6 + u7) - u11);
    u13 = (((struct o14_float *)((a6 + 0x8)))->v);
    u14 = (((struct o14_float *)((a7 + 0x8)))->v);
    u15 = (((struct o8_float *)((a6 + 0x8)))->v);
    u16 = (((struct o8_float *)((a7 + 0x8)))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = ((u13 + u14) - u18);
    t192 = 0x0;
    if (!(((((struct o18_float *)(((int)stk + 0)))->v)) > 0.0f)) {
    } else {
        t192 = 0x0;
        if (!(((((struct o8_float *)((((int)stk + 0) + 0x18)))->v)) > 0.0f)) {
        } else {
            t192 = 0x0;
            if (0.0f > ((((struct o4_float *)((((int)stk + 0) + 0x18)))->v))) {
            } else {
                t26 = FUN_0c061284(a4, a5);
                if (t26 != 0) {
                    (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                    t192 = 0x2;
                } else {
                    u42 = (((struct o4_float *)((((int)stk + 0) + 0x18)))->v);
                    if ((u42 > 9.0f) && ((u43 = (((struct o18_float *)(((int)stk + 0)))->v), u42 > u43) || (u44 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v), u42 > u44))) {
                        u55 = (((struct o18_float *)(((int)stk + 0)))->v);
                        if (!(u55 > u42) && (u56 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v), !(u55 > u56))) {
                            t57 = FUN_0c0612cc(a4, a5);
                            if (t57 != 0) {
                                if (((((struct o8_float *)(a6))->v)) > ((((struct o8_float *)(a7))->v))) {
                                    u64 = (-(*(float *)(((int)stk + 24))));
                                } else {
                                    u64 = (*(float *)(((int)stk + 24)));
                                }
                                *(float *)(((int)stk + 0)) = u64;
                                FUN_0c060c80(a5, ((int)stk + 0), a7);
                            } else {
                                t67 = FUN_0c0612cc(a5, a4);
                                if (t67 != 0) {
                                    if (!(((((struct o8_float *)(a6))->v)) > ((((struct o8_float *)(a7))->v)))) {
                                        u76 = (-(*(float *)(((int)stk + 24))));
                                    } else {
                                        u76 = (*(float *)(((int)stk + 24)));
                                    }
                                    *(float *)(((int)stk + 12)) = u76;
                                    FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                } else {
                                    if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                                        u83 = (-(*(float *)(((int)stk + 24))));
                                    } else {
                                        u83 = (*(float *)(((int)stk + 24)));
                                    }
                                    *(float *)(((int)stk + 12)) = (u83 / (1.0f + 1.0f));
                                    u85 = (u83 / (1.0f + 1.0f));
                                    u85 = -u85;
                                    *(float *)(((int)stk + 0)) = u85;
                                    FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                    FUN_0c060c80(a5, ((int)stk + 0), a7);
                                }
                            }
                        } else {
                            t92 = FUN_0c0612cc(a4, a5);
                            if (t92 != 0) {
                                if (((((struct o8_float *)((a6 + 0x8)))->v)) > ((((struct o8_float *)((a7 + 0x8)))->v))) {
                                    u99 = (-(*(float *)(((int)stk + 32))));
                                } else {
                                    u99 = (*(float *)(((int)stk + 32)));
                                }
                                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u99);
                                FUN_0c060c80(a5, ((int)stk + 0), a7);
                            } else {
                                t103 = FUN_0c0612cc(a5, a4);
                                if (t103 != 0) {
                                    if (!(((((struct o8_float *)((a6 + 0x8)))->v)) > ((((struct o8_float *)((a7 + 0x8)))->v)))) {
                                        u112 = (-(*(float *)(((int)stk + 32))));
                                    } else {
                                        u112 = (*(float *)(((int)stk + 32)));
                                    }
                                    *(float *)(((int)stk + 20)) = u112;
                                    FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                } else {
                                    if (((((struct o8_float *)((a7 + 0x8)))->v)) > ((((struct o8_float *)((a6 + 0x8)))->v))) {
                                        u119 = (-(*(float *)(((int)stk + 32))));
                                    } else {
                                        u119 = (*(float *)(((int)stk + 32)));
                                    }
                                    *(float *)(((int)stk + 20)) = (u119 / (1.0f + 1.0f));
                                    u121 = (u119 / (1.0f + 1.0f));
                                    u121 = -u121;
                                    *(float *)(((int)stk + 8)) = u121;
                                    FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                    FUN_0c060c80(a5, ((int)stk + 0), a7);
                                }
                            }
                        }
                    } else {
                        if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a7 + 0x8)))->v))) {
                            t132 = FUN_0c0612cc(a4, a5);
                            if (t132 != 0) {
                                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o4_float *)((((int)stk + 0) + 0x18)))->v)));
                                FUN_0c060c80(a5, ((int)stk + 0), a7);
                            } else {
                                *(float *)(((int)stk + 16)) = ((((struct o4_float *)((((int)stk + 0) + 0x18)))->v));
                                FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                FUN_0c061222(a5, a4);
                                (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                                FUN_0c06130a(a4, a6, (a6 + 0x8), (a7 + 0x8));
                            }
                        } else {
                            t143 = FUN_0c0612cc(a5, a4);
                            if (t143 != 0) {
                                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o4_float *)((((int)stk + 0) + 0x18)))->v)));
                                FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                            } else {
                                *(float *)(((int)stk + 4)) = ((((struct o4_float *)((((int)stk + 0) + 0x18)))->v));
                                FUN_0c060c80(a5, ((int)stk + 0), a7);
                                FUN_0c061222(a4, a5);
                                (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                                FUN_0c06130a(a5, a7, (a7 + 0x8), (a6 + 0x8));
                            }
                        }
                    }
                    t192 = 0x1;
                }
            }
        }
    }
    return t192;
}

