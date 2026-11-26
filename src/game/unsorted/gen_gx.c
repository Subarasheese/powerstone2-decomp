/* Straight-line functions with calls and guards (batch gen_gx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o154_int { char p[0x154]; int v; };
struct o15C_int { char p[0x15C]; int v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c02b342(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0d2480(int, int);
int FUN_0c120018(int, int, int, int, int, int);
int FUN_0c120504(int, int, int, int);
int FUN_0c120654(int, int, int, int);
int FUN_0c120906(int, int, int, int, int);
int FUN_0c120cc4(int);
int FUN_0c1211b0(void);
int FUN_0c145c74(int, int);
int FUN_0c145d1c(int, int);
int FUN_0c158824(int);
int libc_strcmp(int, int);
int FUN_0c187cac(int, int, int, int, int);
int math_atan2_angle16(float, float);
int nlAddVector3op(int, int, int);
int nlSubVector3op(int, int, int);
int FUN_0c147928(int a4);
int FUN_0c0214e0(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c0d21ac(int a4);
int FUN_0c11f1fe(int a4, int a5, int a6, int a7);
int FUN_0c1589d6(int a4, float f4);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };



int FUN_0c0214e0(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[8];
    int v0_4;
    int v0_2;

    int v0_0;
    int v0_1;
    int v0_3;
    int v0_5;
    int v0_6;
    float w0_0;
    int T_;
    int R3;
    int R1;
    int v0_9;
    int v0_8;
    int v0_7;
    int t37;
    int t36;
    v0_1 = a5;
    v0_2 = a6;
    v0_4 = a7;
    w0_0 = f4;
    w0_0 = f5;
    w0_0 = f6;
    v0_9 = *(signed char *)0xC30AA33;
    v0_4 = (v0_9);
    v0_7 = (0x9);
    v0_0 = (0xC30540E);
    v0_3 = (0x32);
    v0_2 = (0xC30540C);
    v0_1 = (0xC30AA33);
    v0_5 = (0xC30A51E);
    v0_6 = (0x0);
    v0_8 = (0xC01CD2C);
    if ((v0_9 == 0)) goto L_C021548;
    if ((v0_4 == 1)) goto L_C021574;
    if ((v0_4 == 2)) goto L_C021588;
    if ((v0_4 == 3)) goto L_C0215C4;
    if ((v0_4 != 4)) goto L_C02151C;
    v0_3 = *(short *)(v0_2);
    *(unsigned short *)(v0_2) = (v0_3 - 1);
    if (((short)(v0_3 - 1) == 0)) goto L_C021690;
    L_C0217A2:;
    return v0_4;
    L_C021690:;
    *(unsigned char *)(v0_1) = ((*(signed char *)(v0_1)) + 0x1);
    *(unsigned short *)(v0_2) = 0xE;
    v0_4 = ((FUN_0c018fd2(0x20)));
    L_C0216A0:;
    v0_3 = *(short *)(v0_2);
    *(unsigned short *)(v0_2) = (v0_3 - 1);
    if (((short)(v0_3 - 1) != 0)) goto L_C0217A2;
    v0_0 = *(short *)(v0_0);
    v0_4 = (v0_0);
    if ((v0_0 != 1)) goto L_C0216B8;
    v0_0 = (0x6);
    L_C0216B4:;
    *(unsigned char *)(v0_1) = v0_0;
    goto L_C0217A2;
    L_C0216B8:;
    *(unsigned char *)(v0_1) = 0x7;
    *(unsigned short *)(v0_2) = 0x22;
    v0_4 = ((FUN_0c018e74(0x42)));
    goto L_C0217A2;
    L_C02151C:;
    if ((v0_4 != 5)) goto L_C021524;
    goto L_C0216A0;
    L_C021524:;
    if ((v0_4 != 6)) goto L_C02152C;
    *(unsigned char *)(v0_1) = 0x7;
    *(unsigned short *)(v0_2) = 0x22;
    v0_1 = (0x0 + v0_5);
    v0_2 = (0x0 + v0_5);
    v0_5 = ((0x0 + v0_5));
    v0_1 = v0_1;
    v0_2 = v0_2;
    v0_4 = (v0_6);
    L_C02171A:;
    if (((*(signed char *)(v0_2)) != 0)) goto L_C021738;
    for (t36 = 0; ; t36++) { *(unsigned char *)(v0_5 + t36) = *(unsigned char *)(0xC30A34C + t36); if (*(unsigned char *)(0xC30A34C + t36) == 0) break; }
    for (t37 = 0; ; t37++) { *(unsigned char *)((v0_1 + 0x8) + t37) = *(unsigned char *)(0xC30A354 + t37); if (*(unsigned char *)(0xC30A354 + t37) == 0) break; }
    v0_5 = (0x15);
    L_C021750:;
    v0_4 = ((FUN_0c018e74(v0_5)));
    goto L_C0217A2;
    L_C021738:;
    v0_6 = (int)(unsigned short)(v0_4 + 0x1) < (int)v0_3;
    v0_5 = (v0_5 + 0x1A);
    v0_1 = (v0_1 + 0x1A);
    v0_2 = (v0_2 + 0x1A);
    v0_4 = (v0_4 + 0x1);
    if (v0_6) goto L_C02171A;
    *(unsigned short *)(v0_0) = 0x3;
    v0_5 = (0x16);
    goto L_C021750;
    L_C02152C:;
    if ((v0_4 != 7)) goto L_C021534;
    v0_0 = *(short *)(v0_2);
    *(unsigned short *)(v0_2) = (v0_0 - 1);
    if (((short)(v0_0 - 1) != 0)) goto L_C0217A2;
    *(unsigned char *)(v0_1) = ((*(signed char *)(v0_1)) + 0x1);
    *(unsigned short *)(v0_2) = 0x12C;
    goto L_C0217A2;
    L_C021534:;
    if ((v0_4 != 8)) goto L_C02153C;
    v0_0 = *(short *)(v0_2);
    *(unsigned short *)(v0_2) = (v0_0 - 1);
    if (((int)(short)(v0_0 - 1) > (int)0xF0)) goto L_C0217A2;
    if (((*(short *)(v0_2)) != 0)) goto L_C021788;
    *(unsigned char *)(v0_1) = v0_7;
    L_C021788:;
    v0_0 = FUN_0c01cd2c(0x141);
    v0_4 = ((short)v0_0);
    if (((short)v0_0 == 0)) goto L_C0217A2;
    *(unsigned char *)(v0_1) = v0_7;
    L_C021796:;
    v0_4 = ((FUN_0c05aab6(((*(signed char *)0xC309993) << 1), 0x3)));
    goto L_C0217A2;
    L_C02153C:;
    if ((v0_4 != 9)) goto L_C021544;
    goto L_C0217A2;
    L_C021544:;
    goto L_C0217A2;
    L_C0215C4:;
    v0_4 = (((struct o0_short *)0xC305412)->v);
    v0_3 = (v0_4);
    v0_5 = (0x3);
    if (((int)(short)v0_4 >= 0)) goto L_C0215D2;
    v0_3 = (v0_6);
    L_C0215D2:;
    FUN_0c02b502(v0_5);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x10);
    FUN_0c187cac((((int)stk + 0) + 0x10), 0x0, 0x0, 0x0, 0xC1A89E8);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 8) + 0x10);
    FUN_0c02b342((*(int *)(((int)stk + 12))), (((int)stk + 8) + 0x10));
    FUN_0c02b3ba((*(int *)(((int)stk + 8))), 296.0f, 368.0f, (1.0f + 1.0f));
    v0_4 = (short)(FUN_0c01cd2c(0x101)) == 0;
    v0_3 = (0x2);
    if (v0_4) goto L_C02163A;
    if (((*(signed char *)0xC305416) != 0)) goto L_C02162C;
    *(unsigned short *)(v0_0) = 0x1;
    L_C02162E:;
    *(unsigned char *)(v0_1) = ((*(signed char *)(v0_1)) + 0x1);
    *(unsigned short *)(v0_2) = 0x10;
    goto L_C021796;
    L_C02162C:;
    *(unsigned short *)(v0_0) = v0_3;
    goto L_C02162E;
    L_C02163A:;
    v0_4 = (short)(FUN_0c01cd2c(0x40)) != 0;
    if (v0_4) goto L_C021652;
    v0_4 = (((struct o0_short *)0xC305412)->v);
    (((struct o0_ushort *)0xC305412)->v) = (v0_4 - 1);
    if (!(((short)(v0_4 - 1) != 0))) goto L_C021652;
    v0_4 = ((FUN_0c01c714(0xC305416, 0x1, 0x2)));
    goto L_C0217A2;
    L_C021652:;
    *(unsigned short *)(v0_0) = v0_3;
    *(unsigned char *)(v0_1) = ((*(signed char *)(v0_1)) + 0x1);
    *(unsigned short *)(v0_2) = v0_3;
    (((struct o4_uchar *)0xC305412)->v) = 0x1;
    v0_4 = ((FUN_0c05aab6(((*(signed char *)0xC309993) << 1), 0x4)));
    goto L_C0217A2;
    L_C021588:;
    v0_0 = *(short *)(v0_2);
    *(unsigned short *)(v0_2) = (v0_0 - 1);
    if (((short)(v0_0 - 1) == 0)) goto L_C021598;
    goto L_C0217A2;
    L_C021598:;
    v0_0 = (((*(signed char *)(v0_1)) + 0x1));
    goto L_C0216B4;
    L_C021574:;
    *(unsigned char *)(v0_1) = ((*(signed char *)(v0_1)) + 0x1);
    v0_3 = FUN_0c018e9c(0x20, 0xC305416);
    *(unsigned short *)(v0_2) = 0x22;
    *(unsigned short *)(v0_0) = v0_6;
    v0_4 = (v0_3);
    goto L_C021588;
    L_C021548:;
    *(unsigned char *)(v0_1) = ((*(signed char *)(v0_1)) + 0x1);
    v0_0 = (v0_6);
    v0_2 = ((0x0 + v0_5));
    v0_8 = (0xC30A34C);
    L_C02156A:;
    if (((int)(unsigned short)v0_0 < (int)v0_3)) goto L_C021558;
    goto L_C0217A2;
    L_C021558:;
    v0_5 = libc_strcmp(v0_2, v0_8);
    v0_4 = (v0_5);
    v0_0 = (v0_0 + 0x1);
    if ((v0_5 != 0)) goto L_C021568;
    *(unsigned char *)(v0_1) = v0_7;
    L_C021568:;
    v0_2 = (v0_2 + 0x1A);
    goto L_C02156A;
}


/* manual: results screen steps on byte 0C4750AE (list the players' scores, show them one by one, three timed screens); always returns 0; 120 cases, 316 of 316 instructions */
int FUN_0c11f1fe(int a4, int a5, int a6, int a7)
{
    struct mv3 { int w[3]; };
    struct mv3 a, b;
    float c[3];
    signed char *o, *list;
    int i, v;

    o = (signed char *)0xC4750AC;
    list = (signed char *)0xC474F8C;
#define I(n) (*(int *)(o + (n)))
    switch (o[2]) {
    case 0:
        o[2]++;
        o[3] = 0;
        I(0x14) = I(0x18) = I(0x1C) = I(0x20) = I(0x24) = 0;
        for (i = 0; i < 0x90; i++) {
            if (o[0x34 + i] == 0)
                continue;
            list[I(0x1C) * 2] = i;
            list[I(0x1C) * 2 + 1] = o[0x34 + i];
            I(0x1C)++;
            v = i > 0x79 ? 0x24 : 0x20;
            if ((I(v) += o[0x34 + i]) > 999)
                I(v) = 999;
        }
        if (I(0x1C) != 0)
            o[3] = 1;
    case 1:
        if (o[3] == 0) {
            o[2]++;
            o[3] = 0;
            FUN_0c120cc4(0);
        } else if (--I(0x14) <= 0) {
            I(0x14) = 0x5A;
            for (i = 0; i < 4; i++) {
                c[0] = 140.0f * i - 210.0f;
                c[1] = -210.0f;
                FUN_0c120018(0xFFFFFF81, (unsigned char)list[I(0x18) * 2], list[I(0x18) * 2 + 1], (int)c, 0xC201828, 1);
                if (++I(0x18) >= I(0x1C))
                    goto step;
            }
        }
        goto poll;
    case 2:
        if (o[3] == 0) {
            o[3]++;
            I(0x18) = 0x12C;
        }
        if (--I(0x18) <= 0) {
        step:
            o[2]++;
            o[3] = 0;
        }
    poll:
        if (FUN_0c1211b0() != 0) {
            o[2] = 3;
            o[3] = 0;
        }
        break;
    case 3:
        a = *(struct mv3 *)0xC201864;
        b = *(struct mv3 *)0xC201870;
        FUN_0c120504(3, 0xF, (int)&a, (int)&b);
        a = *(struct mv3 *)0xC20187C;
        FUN_0c120906(0, I(0x20), I(0x24), I(0x154), (int)&a);
        a = *(struct mv3 *)0xC201888;
        ((int (*)(int, int, int))FUN_0c120654)(0, I(0x15C), (int)&a);
        goto next;
    case 4:
        if (o[3] == 0) {
            o[3]++;
            I(0x18) = 0x1E0;
        }
        if (FUN_0c1211b0() != 0)
            I(0x18) = 0;
        if (--I(0x18) <= 0) {
        next:
            o[2]++;
            o[3] = 0;
        }
        break;
    default:
        o[1]++;
        o[2] = 0;
    }
#undef I
    return 0;
}

int FUN_0c1589d6(int a4, float f4)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    int R1000;
    R1000 = *(int *)((int)stk + 0);
    v0_0 = a4;
    w0_0 = f4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_4 = (v0_3);
    v0_1 = (0x1);
    v0_2 = (0xC17C2F0);
    v0_2 = (0xC2A2A64);
    v0_5 = (0xC17C130);
    v0_0 = (v0_0);
    if ((v0_3 == 0)) goto L_C158A50;
    if ((v0_4 == 1)) goto L_C158AD0;
    if ((v0_4 != 2)) goto L_C158A02;
    L_C158B0E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = v0_1;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x2;
    v0_1 = (0x10);
    L_C158B2A:;
    if (!((v0_1 != 0))) goto L_C158B2E;
    FUN_0c158824(v0_0);
    v0_1 = ((v0_1 - 1));
    goto L_C158B2A;
    L_C158B2E:;
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C158B78;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    R1000 = v0_1;
    nlAddVector3op(((R1000) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    R1000 = v0_1;
    nlAddVector3op(((R1000) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    L_C158C5C:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_4 = ((v0_1 - 1));
    return v0_4;
    L_C158B78:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C158B80:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    nlSubVector3op((v0_0 + 0x4C), (v0_2 + 0x18), (v0_2 + 0xC));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) / (1.0f + 1.0f));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) / (1.0f + 1.0f));
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) / (1.0f + 1.0f));
    *(unsigned short *)((v0_0 + 0x1C)) = 0x2;
    w0_0 = ((1.0f + 1.0f));
    L_C158BB6:;
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C158BEC;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    R1000 = v0_1;
    nlAddVector3op(((R1000) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    R1000 = v0_1;
    nlAddVector3op(((R1000) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    goto L_C158C5C;
    L_C158BEC:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C158BF4:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    nlSubVector3op((v0_0 + 0x4C), (v0_2 + 0x24), (v0_2 + 0x18));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) / 3.0f);
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) / 3.0f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) / 3.0f);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3;
    w0_0 = (3.0f);
    L_C158C2A:;
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C158C64;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    R1000 = v0_1;
    nlAddVector3op(((R1000) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    R1000 = v0_1;
    nlAddVector3op(((R1000) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    goto L_C158C5C;
    L_C158C64:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C158C6C:;
    return ((int (*)(int, int, int))(FUN_0c03f346))(v0_0, R5, R6);
    L_C158A02:;
    if ((v0_4 != 3)) goto L_C158A0A;
    goto L_C158B2E;
    L_C158A0A:;
    if ((v0_4 != 4)) goto L_C158A12;
    goto L_C158B80;
    L_C158A12:;
    if ((v0_4 != 5)) goto L_C158A1A;
    goto L_C158BB6;
    L_C158A1A:;
    if ((v0_4 != 6)) goto L_C158A22;
    goto L_C158BF4;
    L_C158A22:;
    if ((v0_4 != 7)) goto L_C158A2A;
    goto L_C158C2A;
    L_C158A2A:;
    goto L_C158C6C;
    L_C158AD0:;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    R1000 = v0_3;
    nlAddVector3op(((R1000) + 0x84), (v0_3 + 0x84), (v0_0 + 0x4C));
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    R1000 = v0_3;
    nlAddVector3op(((R1000) + 0x84), (v0_3 + 0x84), (v0_0 + 0x4C));
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C158B06;
    goto L_C158C5C;
    L_C158B06:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C158B0E;
    L_C158A50:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x5;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_1;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x84)) = *(struct mv3 *)(0xC2A2A94); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(v0_0))->v)) + 0x84)) = *(struct mv3 *)(0xC2A2AA0); }
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x1F;
    *(unsigned short *)((((((struct oC8_int *)(v0_0))->v)) + 0x6)) = 0x1F;
    nlSubVector3op((v0_0 + 0x4C), (v0_2 + 0xC), v0_2);
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) / 5.0f);
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) / 5.0f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) / 5.0f);
    w0_0 = (5.0f);
    goto L_C158AD0;
}
