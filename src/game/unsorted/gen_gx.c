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
int FUN_0c1879e0(int, int);
int FUN_0c187cac(int, int, int, int, int);
int math_atan2_angle16(float, float);
int nlAddVector3op(int, int, int);
int nlSubVector3op(int, int, int);
int FUN_0c147928(int a4);
int FUN_0c0214e0(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c0d21ac(int a4);
float FUN_0c11f1fe(int a4, int a5, int a6, int a7);
int FUN_0c1589d6(int a4, float f4);

int FUN_0c147928(int a4)
{
    int stk[18];
    register int t8;
    register int t9;
    register int t13;
    register int t15;
    register int t19;
    register int t21;
    register int t27;
    register int t30;
    register int t39;
    register int t43;
    register int t47;
    register int t72;
    register int t76;
    register int t78;
    register int t82;
    register int t84;
    register int t90;
    register int t93;
    register int t102;
    register int t106;
    register int t110;
    register int t119;
    register int t123;
    register int t125;
    register int t132;
    register int t136;
    register int t154;
    register int t158;
    register int t160;
    register int t169;
    register int t173;
    register int t179;
    int t17;
    int t80;
    int t121;
    int t156;

    *(unsigned int *)(((int)stk + 16)) = 0xC2A2640;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x20)) = *(struct mv3 *)(0xC2A2640); }
    FUN_0c058adc((((int)stk + 16) + 0x20), (((int)stk + 16) + 0x20), (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532E38));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x14)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 44))) + (1.0f + 1.0f));
    FUN_0c058adc((((int)stk + 16) + 0x14), (((int)stk + 16) + 0x14), (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532E38));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((int)stk + 16) + 0x20)); }
    nlSubVector3op((((int)stk + 16) + 0x20), (((int)stk + 16) + 0x14), (((int)stk + 16) + 0x20));
    FUN_0c145c74((a4 + 0x34), (((int)stk + 16) + 0x20));
    t8 = *(signed char *)((a4 + 0x14));
    if (t8 != 0) {
        if (t8 != 1) {
            if (t8 != 2) {
                if (t8 == 3) {
                    t9 = (((struct oC4_int *)(a4))->v);
                    (((struct o80_uint *)(t9))->v) = (((((struct o80_int *)(t9))->v)) + ((((struct o14_int *)0xC2A26F4)->v)));
                    t13 = (((struct oC8_int *)(a4))->v);
                    (((struct o80_uint *)(t13))->v) = (((((struct o80_int *)(t13))->v)) - ((((struct o14_int *)0xC2A26F4)->v)));
                    t15 = *(short *)((a4 + 0x1C));
                    if (((int)t15 >= (int)((((struct oC_int *)0xC2A26F4)->v))) && (t17 = (((struct o10_int *)0xC2A26F4)->v), (int)t15 <= (int)t17)) {
                        *(unsigned int *)(((int)stk + 20)) = 0xC2A2700;
                        t19 = ((((struct oC_int *)0xC2A26F4)->v));
                        *(int *)((int)stk + 12) = t19;
                        *(unsigned int *)(((int)stk + 16)) = 0xC2A2704;
                        t21 = ((((struct o10_int *)0xC2A26F4)->v));
                        *(int *)((int)stk + 8) = t21;
                        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A26D0, 0xC2A26C4, (*(short *)((a4 + 0x1C))), t21, t19);
                        t27 = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
                        *(int *)((int)stk + 4) = t27;
                        t30 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                        *(int *)((int)stk + 0) = t30;
                        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A26E8, 0xC2A26DC, (*(short *)((a4 + 0x1C))), t30, t27);
                    }
                    t39 = (((struct oC4_int *)(a4))->v);
                    *(unsigned short *)((t39 + 0x6)) = ((*(short *)((t39 + 0x6))) | 0x1000);
                    FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
                    t43 = (((struct oC8_int *)(a4))->v);
                    *(unsigned short *)((t43 + 0x6)) = ((*(short *)((t43 + 0x6))) | 0x1000);
                    FUN_0c145d1c(a4, ((((struct oC8_int *)(a4))->v)));
                    t47 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t47 + 0x1);
                    t179 = (short)(t47 + 0x1);
                    if ((int)(short)(t47 + 0x1) > (int)((((struct o0_int *)0xC2A26F4)->v))) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t179 = 0x14;
                    }
                } else {
                    t179 = (FUN_0c03f346(a4));
                }
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0xA, (*(int *)((((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40DC) + 0x4))));
                FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0xA, (*(int *)((((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40DC) + 0x4))));
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A26C4); }
                *(unsigned short *)(((0x6 + ((((struct oC8_int *)(a4))->v))) + 0x0)) = 0x1F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A26DC); }
                t72 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t72))->v) = (((((struct o80_int *)(t72))->v)) + ((((struct o14_int *)0xC2A26F4)->v)));
                t76 = (((struct oC8_int *)(a4))->v);
                (((struct o80_uint *)(t76))->v) = (((((struct o80_int *)(t76))->v)) - ((((struct o14_int *)0xC2A26F4)->v)));
                t78 = *(short *)((a4 + 0x1C));
                if (((int)t78 >= (int)((((struct oC_int *)0xC2A26F4)->v))) && (t80 = (((struct o10_int *)0xC2A26F4)->v), (int)t78 <= (int)t80)) {
                    *(unsigned int *)(((int)stk + 20)) = 0xC2A2700;
                    t82 = ((((struct oC_int *)0xC2A26F4)->v));
                    *(int *)((int)stk + 12) = t82;
                    *(unsigned int *)(((int)stk + 16)) = 0xC2A2704;
                    t84 = ((((struct o10_int *)0xC2A26F4)->v));
                    *(int *)((int)stk + 8) = t84;
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A26D0, 0xC2A26C4, (*(short *)((a4 + 0x1C))), t84, t82);
                    t90 = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
                    *(int *)((int)stk + 4) = t90;
                    t93 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                    *(int *)((int)stk + 0) = t93;
                    FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A26E8, 0xC2A26DC, (*(short *)((a4 + 0x1C))), t93, t90);
                }
                t102 = (((struct oC4_int *)(a4))->v);
                *(unsigned short *)((t102 + 0x6)) = ((*(short *)((t102 + 0x6))) | 0x1000);
                FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
                t106 = (((struct oC8_int *)(a4))->v);
                *(unsigned short *)((t106 + 0x6)) = ((*(short *)((t106 + 0x6))) | 0x1000);
                FUN_0c145d1c(a4, ((((struct oC8_int *)(a4))->v)));
                t110 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t110 + 0x1);
                t179 = (short)(t110 + 0x1);
                if ((int)(short)(t110 + 0x1) > (int)((((struct o0_int *)0xC2A26F4)->v))) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t179 = 0x14;
                }
            }
        } else {
            t119 = *(short *)((a4 + 0x1C));
            if (((int)t119 >= (int)((((struct o4_int *)0xC2A26F4)->v))) && (t121 = (((struct o8_int *)0xC2A26F4)->v), (int)t119 <= (int)t121)) {
                t123 = ((((struct o4_int *)0xC2A26F4)->v));
                *(int *)((int)stk + 12) = t123;
                t125 = ((((struct o8_int *)0xC2A26F4)->v));
                *(int *)((int)stk + 8) = t125;
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A26B8, 0xC2A26AC, (*(short *)((a4 + 0x1C))), t125, t123);
            }
            t132 = (((struct oC4_int *)(a4))->v);
            *(unsigned short *)((t132 + 0x6)) = ((*(short *)((t132 + 0x6))) | 0x1000);
            FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
            t136 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t136 + 0x1);
            t179 = (short)(t136 + 0x1);
            if ((int)(short)(t136 + 0x1) > (int)((((struct oC_int *)0xC2A26F4)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t179 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0xA, (*(int *)((((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40DC) + 0x4))));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x3F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A26AC); }
        t154 = *(short *)((a4 + 0x1C));
        if (((int)t154 >= (int)((((struct o4_int *)0xC2A26F4)->v))) && (t156 = (((struct o8_int *)0xC2A26F4)->v), (int)t154 <= (int)t156)) {
            t158 = ((((struct o4_int *)0xC2A26F4)->v));
            *(int *)((int)stk + 12) = t158;
            t160 = ((((struct o8_int *)0xC2A26F4)->v));
            *(int *)((int)stk + 8) = t160;
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A26B8, 0xC2A26AC, (*(short *)((a4 + 0x1C))), t160, t158);
        }
        t169 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t169 + 0x6)) = ((*(short *)((t169 + 0x6))) | 0x1000);
        FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
        t173 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t173 + 0x1);
        t179 = (short)(t173 + 0x1);
        if ((int)(short)(t173 + 0x1) > (int)((((struct oC_int *)0xC2A26F4)->v))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t179 = 0x14;
        }
    }
    return t179;
}

int FUN_0c0214e0(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[8];
    register int t36;
    register int t37;

    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
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
    v0_3 = *(short *)((v0_2 + 0x0));
    *(unsigned short *)((v0_2 + 0x0)) = (v0_3 - 1);
    if (((short)(v0_3 - 1) == 0)) goto L_C021690;
    L_C0217A2:;
    return v0_4;
    L_C021690:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned short *)((v0_2 + 0x0)) = 0xE;
    v0_4 = ((FUN_0c018fd2(0x20)));
    L_C0216A0:;
    v0_3 = *(short *)((v0_2 + 0x0));
    *(unsigned short *)((v0_2 + 0x0)) = (v0_3 - 1);
    if (((short)(v0_3 - 1) != 0)) goto L_C0217A2;
    v0_0 = *(short *)((v0_0 + 0x0));
    v0_4 = (v0_0);
    if ((v0_0 != 1)) goto L_C0216B8;
    v0_0 = (0x6);
    L_C0216B4:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_0;
    goto L_C0217A2;
    L_C0216B8:;
    *(unsigned char *)((v0_1 + 0x0)) = 0x7;
    *(unsigned short *)((v0_2 + 0x0)) = 0x22;
    v0_4 = ((FUN_0c018e74(0x42)));
    goto L_C0217A2;
    L_C02151C:;
    if ((v0_4 != 5)) goto L_C021524;
    goto L_C0216A0;
    L_C021524:;
    if ((v0_4 != 6)) goto L_C02152C;
    *(unsigned char *)((v0_1 + 0x0)) = 0x7;
    *(unsigned short *)((v0_2 + 0x0)) = 0x22;
    v0_1 = (0x0 + v0_5);
    v0_2 = (0x0 + v0_5);
    v0_5 = ((0x0 + v0_5));
    v0_1 = v0_1;
    v0_2 = v0_2;
    v0_4 = (v0_6);
    L_C02171A:;
    if (((*(signed char *)((v0_2 + 0x0))) != 0)) goto L_C021738;
    for (t36 = 0; ; t36++) { *(unsigned char *)(v0_5 + t36) = *(unsigned char *)(0xC30A34C + t36); if (*(unsigned char *)(0xC30A34C + t36) == 0) break; }
    for (t37 = 0; ; t37++) { *(unsigned char *)((v0_1 + 0x8) + t37) = *(unsigned char *)(0xC30A354 + t37); if (*(unsigned char *)(0xC30A354 + t37) == 0) break; }
    v0_5 = (0x15);
    L_C021750:;
    v0_4 = ((FUN_0c018e74(v0_5)));
    goto L_C0217A2;
    L_C021738:;
    v0_6 = (int)(unsigned short)(v0_4 + 0x1) < (int)v0_3;
    v0_5 = ((v0_5 + 0x1A));
    v0_1 = ((v0_1 + 0x1A));
    v0_2 = ((v0_2 + 0x1A));
    v0_4 = ((v0_4 + 0x1));
    if (v0_6) goto L_C02171A;
    *(unsigned short *)((v0_0 + 0x0)) = 0x3;
    v0_5 = (0x16);
    goto L_C021750;
    L_C02152C:;
    if ((v0_4 != 7)) goto L_C021534;
    v0_0 = *(short *)((v0_2 + 0x0));
    *(unsigned short *)((v0_2 + 0x0)) = (v0_0 - 1);
    if (((short)(v0_0 - 1) != 0)) goto L_C0217A2;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned short *)((v0_2 + 0x0)) = 0x12C;
    goto L_C0217A2;
    L_C021534:;
    if ((v0_4 != 8)) goto L_C02153C;
    v0_0 = *(short *)((v0_2 + 0x0));
    *(unsigned short *)((v0_2 + 0x0)) = (v0_0 - 1);
    if (((int)(short)(v0_0 - 1) > (int)0xF0)) goto L_C0217A2;
    if (((*(short *)((v0_2 + 0x0))) != 0)) goto L_C021788;
    *(unsigned char *)((v0_1 + 0x0)) = v0_7;
    L_C021788:;
    v0_0 = FUN_0c01cd2c(0x141);
    v0_4 = ((short)v0_0);
    if (((short)v0_0 == 0)) goto L_C0217A2;
    *(unsigned char *)((v0_1 + 0x0)) = v0_7;
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
    *(int *)((int)stk + 4) = (unsigned short)((int)((int)(short)v0_3 / (int)0x3C));
    *(int *)((int)stk + 0) = 0xC1A89E8;
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x10);
    FUN_0c187cac((((int)stk + 0) + 0x10), 0x0, 0x0, 0x0, 0xC1A89E8);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 8) + 0x10);
    FUN_0c02b342((*(int *)(((int)stk + 12))), (((int)stk + 8) + 0x10));
    FUN_0c02b3ba((*(int *)(((int)stk + 8))), 296.0f, 368.0f, (1.0f + 1.0f));
    v0_4 = (short)(FUN_0c01cd2c(0x101)) == 0;
    v0_3 = (0x2);
    if (v0_4) goto L_C02163A;
    if (((*(signed char *)0xC305416) != 0)) goto L_C02162C;
    *(unsigned short *)((v0_0 + 0x0)) = 0x1;
    L_C02162E:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned short *)((v0_2 + 0x0)) = 0x10;
    goto L_C021796;
    L_C02162C:;
    *(unsigned short *)((v0_0 + 0x0)) = v0_3;
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
    *(unsigned short *)((v0_0 + 0x0)) = v0_3;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned short *)((v0_2 + 0x0)) = v0_3;
    (((struct o4_uchar *)0xC305412)->v) = 0x1;
    v0_4 = ((FUN_0c05aab6(((*(signed char *)0xC309993) << 1), 0x4)));
    goto L_C0217A2;
    L_C021588:;
    v0_0 = *(short *)((v0_2 + 0x0));
    *(unsigned short *)((v0_2 + 0x0)) = (v0_0 - 1);
    if (((short)(v0_0 - 1) == 0)) goto L_C021598;
    goto L_C0217A2;
    L_C021598:;
    v0_0 = (((*(signed char *)((v0_1 + 0x0))) + 0x1));
    goto L_C0216B4;
    L_C021574:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    v0_3 = FUN_0c018e9c(0x20, 0xC305416);
    *(unsigned short *)((v0_2 + 0x0)) = 0x22;
    *(unsigned short *)((v0_0 + 0x0)) = v0_6;
    v0_4 = (v0_3);
    goto L_C021588;
    L_C021548:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    v0_0 = (v0_6);
    v0_2 = ((0x0 + v0_5));
    v0_8 = (0xC30A34C);
    L_C02156A:;
    if (((int)(unsigned short)v0_0 < (int)v0_3)) goto L_C021558;
    goto L_C0217A2;
    L_C021558:;
    v0_5 = FUN_0c1879e0(v0_2, v0_8);
    v0_4 = (v0_5);
    v0_0 = ((v0_0 + 0x1));
    if ((v0_5 != 0)) goto L_C021568;
    *(unsigned char *)((v0_1 + 0x0)) = v0_7;
    L_C021568:;
    v0_2 = ((v0_2 + 0x1A));
    goto L_C02156A;
}

int FUN_0c0d21ac(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register float u0;
    register float u1;

    t4 = *(int *)((((*(signed char *)((a4 + 0x19))) << 2) + 0xC286EB8));
    t5 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t5 + 0x1);
    t6 = *(signed char *)((a4 + 0x1A));
    if ((int)(short)(t5 + 0x1) < (int)(*(int *)((((((t6 << 2) + t6) << 2) + t4) + 0x0)))) {
        nlAddVector3op((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
        nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        t5 = math_atan2_angle16(((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v)));
        t6 = *(int *)((a4 + 0x38));
        t7 = (unsigned short)(t5 - t6);
        if ((int)(unsigned short)(t5 - t6) > (int)0x8000) {
            t7 = ((unsigned short)(t5 - t6) - 0x10000);
        }
        t5 = 0x222;
        if ((int)t7 > (int)0x222) {
        } else {
            t6 = t7;
            if ((int)t7 < (int)0xFFFFFDDE) {
                t6 = 0xFFFFFDDE;
            }
            t5 = t6;
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t5);
        *(unsigned short *)(((0x41C + a4) + 0xE)) = ((*(short *)(((0x41C + a4) + 0xE))) - 1);
        t5 = *(short *)(((0x41C + a4) + 0xE));
        t6 = t5;
        if ((int)t5 <= 0) {
            if ((*(signed char *)((a4 + 0x16))) != 0) {
                FUN_0c0d2480(a4, 0x0);
                t5 = 0x96;
            } else {
                FUN_0c0d2480(a4, 0x1);
                t5 = 0x5A;
            }
            *(unsigned short *)(((0x41C + a4) + 0xE)) = t5;
            t6 = t5;
        }
        t5 = t6;
    } else {
        if ((*(signed char *)((a4 + 0x1A))) == 0) {
            t6 = *(signed char *)((a4 + 0x1A));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((((t6 << 2) + t6) << 2) + t4) + 0x8)); }
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            *(unsigned short *)(((0x41C + a4) + 0xE)) = 0x3C;
            FUN_0c0d2480(a4, 0x0);
        }
        t6 = *(signed char *)((a4 + 0x1A));
        (((struct o1B_uchar *)(a4))->v) = ((*(signed char *)((((((t6 << 2) + t6) << 2) + t4) + 0x4))) & 0x4);
        (((struct o1A_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1A))) + 0x1);
        t6 = *(signed char *)((a4 + 0x1A));
        t7 = *(int *)((((((((signed char)t6 - 1) << 2) + ((signed char)t6 - 1)) << 2) + t4) + 0x0));
        t8 = *(int *)(((((((signed char)t6 << 2) + (signed char)t6) << 2) + t4) + 0x0));
        if (((*(int *)(((((((signed char)t6 << 2) + (signed char)t6) << 2) + t4) + 0x4))) & 128) != 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0x78;
            t6 = 0x78;
        } else {
            t9 = *(signed char *)((a4 + 0x1A));
            if ((((*(int *)((((((t9 << 2) + t9) << 2) + t4) + 0x4))) & 2) != 0) && ((t0 = *(int *)((a4 + 0x10)), t0 != 0) && (t6 = *(int *)((a4 + 0x10)), t2 = *(short *)(((0x41C + a4) + 0xC)), t3 = (((struct o24_short *)(t6))->v), t2 == t3))) {
                t0 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x41D));
                if (t0 != 0) {
                    if (t0 == 1) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
                        FUN_0c0c2d56((*(int *)((a4 + 0x10))), 0x2, 0x0);
                        *(unsigned int *)((a4 + 0x10)) = 0x0;
                    }
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
                    FUN_0c0c2d56((*(int *)((a4 + 0x10))), 0x2, 0x0);
                    *(unsigned int *)((a4 + 0x10)) = 0x0;
                }
            }
            t0 = *(signed char *)((a4 + 0x1A));
            if (((*(int *)((((((t0 << 2) + t0) << 2) + t4) + 0x4))) & 1) != 0) {
                t0 = *(signed char *)((a4 + 0x1A));
                (((struct o4C_float *)(a4))->v) = ((((((struct o8_float *)(((((t0 << 2) + t0) << 2) + t4)))->v)) - ((((struct o28_float *)(a4))->v))) / (float)(t8 - t7));
                t0 = *(signed char *)((a4 + 0x1A));
                (((struct o50_float *)(a4))->v) = ((((((struct oC_float *)(((((t0 << 2) + t0) << 2) + t4)))->v)) - ((((struct o2C_float *)(a4))->v))) / (float)(t8 - t7));
                t0 = *(signed char *)((a4 + 0x1A));
                (((struct o54_float *)(a4))->v) = ((((((struct o10_float *)((t4 + (((t0 << 2) + t0) << 2))))->v)) - ((((struct o30_float *)(a4))->v))) / (float)(t8 - t7));
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
            } else {
                t0 = *(signed char *)((a4 + 0x1A));
                u0 = ((float)(t8 - t7) * ((((struct o4C_float *)(a4))->v)));
                u1 = (1.0f / ((float)(t8 - t7) * (float)(t8 - t7)));
                (((struct o58_float *)(a4))->v) = (((((((struct o8_float *)(((((t0 << 2) + t0) << 2) + t4)))->v)) - ((((struct o28_float *)(a4))->v))) - u0) * u1);
                t0 = *(signed char *)((a4 + 0x1A));
                u0 = ((float)(t8 - t7) * ((((struct o50_float *)(a4))->v)));
                u1 = (1.0f / ((float)(t8 - t7) * (float)(t8 - t7)));
                (((struct o5C_float *)(a4))->v) = (((((((struct oC_float *)(((((t0 << 2) + t0) << 2) + t4)))->v)) - ((((struct o2C_float *)(a4))->v))) - u0) * u1);
                t0 = *(signed char *)((a4 + 0x1A));
                u0 = ((float)(t8 - t7) * ((((struct o54_float *)(a4))->v)));
                u1 = (1.0f / ((float)(t8 - t7) * (float)(t8 - t7)));
                (((struct o60_float *)(a4))->v) = (((((((struct o10_float *)((t4 + (((t0 << 2) + t0) << 2))))->v)) - ((((struct o30_float *)(a4))->v))) - u0) * u1);
            }
            nlAddVector3op((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
            nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t0 = math_atan2_angle16(((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v)));
            t6 = *(int *)((a4 + 0x38));
            t2 = (unsigned short)(t0 - t6);
            if ((int)(unsigned short)(t0 - t6) > (int)0x8000) {
                t2 = ((unsigned short)(t0 - t6) - 0x10000);
            }
            t0 = 0x222;
            if ((int)t2 > (int)0x222) {
            } else {
                t6 = t2;
                if ((int)t2 < (int)0xFFFFFDDE) {
                    t6 = 0xFFFFFDDE;
                }
                t0 = t6;
            }
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t0);
            *(unsigned short *)(((0x41C + a4) + 0xE)) = ((*(short *)(((0x41C + a4) + 0xE))) - 1);
            t0 = *(short *)(((0x41C + a4) + 0xE));
            t6 = t0;
            if ((int)t0 <= 0) {
                if ((*(signed char *)((a4 + 0x16))) != 0) {
                    FUN_0c0d2480(a4, 0x0);
                    t0 = 0x96;
                } else {
                    FUN_0c0d2480(a4, 0x1);
                    t0 = 0x5A;
                }
                *(unsigned short *)(((0x41C + a4) + 0xE)) = t0;
                t6 = t0;
            }
        }
        t5 = t6;
    }
    return t5;
}

float FUN_0c11f1fe(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R1;
    register int R2;
    register float F0;
    register float F2;
    register float F3;
    register float F10;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_8 = a4;
    v0_7 = a5;
    v0_6 = a6;
    v0_5 = a7;
    v0_8 = *(signed char *)0xC4750AE;
    v0_4 = (v0_8);
    v0_2 = (0x1);
    v0_3 = (0xC474F8C);
    v0_0 = (0x0);
    v0_1 = (0xC4750AC);
    if ((v0_8 == 0)) goto L_C11F278;
    if ((v0_4 == 1)) goto L_C11F308;
    if ((v0_4 != 2)) goto L_C11F22E;
    if (((*(signed char *)((v0_1 + 0x3))) != 0)) goto L_C11F3BC;
    *(unsigned char *)((v0_1 + 0x3)) = ((*(signed char *)((v0_1 + 0x3))) + 0x1);
    *(unsigned int *)((v0_1 + 0x18)) = 0x12C;
    L_C11F3BC:;
    v0_2 = *(int *)((v0_1 + 0x18));
    *(unsigned int *)((v0_1 + 0x18)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) > 0)) goto L_C11F3D2;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    L_C11F3D2:;
    v0_2 = FUN_0c1211b0();
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_C11F4AA;
    *(unsigned char *)((v0_1 + 0x2)) = 0x3;
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    v0_4 = (v0_0);
    L_C11F4AA:;
    return F0;
    L_C11F22E:;
    if ((v0_4 != 3)) goto L_C11F236;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)(0xC201864); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x4)) = *(struct mv3 *)(0xC201870); }
    FUN_0c120504(0x3, 0xF, (((int)stk + 8) + 0x10), (((int)stk + 8) + 0x4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)(0xC20187C); }
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
    v0_2 = (((struct o154_int *)(v0_1))->v);
    *(unsigned int *)(((int)stk + 8)) = (v0_1 + 0xC);
    FUN_0c120906(0x0, (*(int *)(((*(int *)(((int)stk + 8))) + 0x14))), (*(int *)(((v0_1 + 0xC) + 0x18))), v0_2, (((int)stk + 8) + 0x10));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)(0xC201888); }
    v0_2 = (((struct o15C_int *)(v0_1))->v);
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    v0_3 = (0x0);
    v0_6 = ((((int)stk + 8) + 0x10));
    if (((unsigned int)v0_2 > (unsigned int)0x0)) goto L_C11F456;
    v0_7 = (v0_3);
    L_C11F458:;
    FUN_0c120654(0x0, v0_7, v0_6, v0_5);
    L_C11F490:;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    v0_4 = (v0_0);
    goto L_C11F4AA;
    L_C11F456:;
    v0_7 = ((*(int *)(((int)stk + 8))));
    goto L_C11F458;
    L_C11F236:;
    if ((v0_4 != 4)) goto L_C11F23E;
    if (((*(signed char *)((v0_1 + 0x3))) != 0)) goto L_C11F47A;
    *(unsigned char *)((v0_1 + 0x3)) = ((*(signed char *)((v0_1 + 0x3))) + 0x1);
    *(unsigned int *)((v0_1 + 0x18)) = 0x1E0;
    L_C11F47A:;
    v0_2 = FUN_0c1211b0();
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_C11F486;
    *(unsigned int *)((v0_1 + 0x18)) = v0_0;
    L_C11F486:;
    v0_2 = *(int *)((v0_1 + 0x18));
    *(unsigned int *)((v0_1 + 0x18)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) > 0)) goto L_C11F4AA;
    goto L_C11F490;
    L_C11F23E:;
    *(unsigned char *)((v0_1 + 0x1)) = ((*(signed char *)((v0_1 + 0x1))) + 0x1);
    *(unsigned char *)((v0_1 + 0x2)) = v0_0;
    v0_4 = (v0_0);
    goto L_C11F4AA;
    L_C11F308:;
    if (((*(signed char *)((v0_1 + 0x3))) != 0)) goto L_C11F324;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    FUN_0c120cc4(0x0);
    goto L_C11F3D2;
    L_C11F324:;
    v0_4 = *(int *)((v0_1 + 0x14));
    *(unsigned int *)((v0_1 + 0x14)) = (v0_4 - 1);
    if (((int)(v0_4 - 1) > 0)) goto L_C11F3D2;
    *(unsigned int *)((v0_1 + 0x14)) = 0x5A;
    v0_4 = (v0_0);
    v0_5 = (0x4);
    w0_0 = (140.0f);
    w0_1 = (-210.0f);
    L_C11F33E:;
    v0_6 = *(signed char *)(((((*(int *)((v0_1 + 0x18))) << 1) + v0_3) + 0x0));
    w0_2 = w0_1;
    w0_2 = w0_2 + w0_0 * (float)v0_4;
    *(float *)(((int)stk + 36)) = w0_2;
    *(float *)(((int)stk + 40)) = w0_1;
    v0_7 = v0_2;
    *(int *)((int)stk + 4) = v0_7;
    *(int *)((int)stk + 0) = 0xC201828;
    FUN_0c120018(0xFFFFFF81, (unsigned char)v0_6, (*(signed char *)(((((*(int *)((v0_1 + 0x18))) << 1) + v0_3) + 0x1))), (((int)stk + 0) + 0x24), 0xC201828, v0_7);
    v0_6 = *(int *)((v0_1 + 0x18));
    *(unsigned int *)((v0_1 + 0x18)) = (v0_6 + 0x1);
    if (((int)(v0_6 + 0x1) < (int)(*(int *)((v0_1 + 0x1C))))) goto L_C11F38E;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    goto L_C11F3D2;
    L_C11F38E:;
    v0_6 = (int)(v0_4 + 0x1) < (int)v0_5;
    v0_4 = ((v0_4 + 0x1));
    if (v0_6) goto L_C11F33E;
    goto L_C11F3D2;
    L_C11F278:;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    *(unsigned int *)((v0_1 + 0x14)) = v0_0;
    *(unsigned int *)((v0_1 + 0x18)) = v0_0;
    *(unsigned int *)((v0_1 + 0x1C)) = v0_0;
    *(unsigned int *)((v0_1 + 0x20)) = v0_0;
    *(unsigned int *)((v0_1 + 0x24)) = v0_0;
    v0_4 = (0x8F);
    v0_8 = (v0_0);
    v0_7 = (0x3E7);
    v0_5 = (0x79);
    v0_9 = (0x90);
    L_C11F2F8:;
    if (((int)v0_8 < (int)v0_9)) goto L_C11F29C;
    if (((*(int *)((v0_1 + 0x1C))) == 0)) goto L_C11F308;
    *(unsigned char *)((v0_1 + 0x3)) = v0_2;
    goto L_C11F308;
    L_C11F29C:;
    if (((*(signed char *)((((v0_1 + 0x34) + v0_8) + 0x0))) == 0)) goto L_C11F2F6;
    *(unsigned char *)(((((*(int *)((v0_1 + 0x1C))) << 1) + v0_3) + 0x0)) = v0_8;
    *(unsigned char *)(((((*(int *)((v0_1 + 0x1C))) << 1) + v0_3) + 0x1)) = (*(signed char *)((v0_8 + (v0_1 + 0x34))));
    *(unsigned int *)((v0_1 + 0x1C)) = ((*(int *)((v0_1 + 0x1C))) + 0x1);
    v0_6 = (((v0_1 + 0x34) + v0_8));
    if (((int)v0_8 > (int)v0_5)) goto L_C11F2E2;
    v0_10 = *(int *)((v0_1 + 0x20));
    v0_11 = *(signed char *)((v0_6 + 0x0));
    *(unsigned int *)((v0_1 + 0x20)) = (v0_10 + v0_11);
    if (((int)(v0_10 + v0_11) <= (int)v0_7)) goto L_C11F2F6;
    *(unsigned int *)((v0_1 + 0x20)) = v0_7;
    L_C11F2F6:;
    v0_8 = ((v0_8 + 0x1));
    goto L_C11F2F8;
    L_C11F2E2:;
    if (((int)v0_8 > (int)v0_4)) goto L_C11F2F6;
    v0_10 = *(int *)((v0_1 + 0x24));
    v0_11 = *(signed char *)((v0_6 + 0x0));
    *(unsigned int *)((v0_1 + 0x24)) = (v0_10 + v0_11);
    if (((int)(v0_10 + v0_11) <= (int)v0_7)) goto L_C11F2F6;
    *(unsigned int *)((v0_1 + 0x24)) = v0_7;
    goto L_C11F2F6;
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
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    nlAddVector3op(((*(int *)(((int)stk + 0))) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    nlAddVector3op(((*(int *)(((int)stk + 0))) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
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
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    nlAddVector3op(((*(int *)(((int)stk + 0))) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    nlAddVector3op(((*(int *)(((int)stk + 0))) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
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
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    nlAddVector3op(((*(int *)(((int)stk + 0))) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    nlAddVector3op(((*(int *)(((int)stk + 0))) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
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
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    nlAddVector3op(((*(int *)(((int)stk + 0))) + 0x84), (v0_3 + 0x84), (v0_0 + 0x4C));
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    nlAddVector3op(((*(int *)(((int)stk + 0))) + 0x84), (v0_3 + 0x84), (v0_0 + 0x4C));
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
