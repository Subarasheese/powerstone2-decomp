/* Straight-line functions with calls and guards (batch gen_er): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c042740(void);
int FUN_0c042800(void);
int FUN_0c0429fa(void);
int FUN_0c042ae4(void);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c061416(int, int, int, int);
int FUN_0c06151a(int, int, int, int, float);
int FUN_0c071094(int);
int FUN_0c071334(int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int);
int FUN_0c187798(int, int, int);
float math_interval_overlap(float, float, float, float);
float math_signed_sqrt(float);
int FUN_0c0622ee(int a4, int a5, int a6, int a7);
int FUN_0c111f38(int a4);
int FUN_0c055368(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0556c8(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8);
int FUN_0c042b10(void);
int FUN_0c071450(int a4, int a5, int a6, int a7);

int FUN_0c0622ee(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register float F1;
    register float F7;
    register float F12;
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
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_3 = a4;
    v0_0 = a5;
    v0_8 = a6;
    v0_9 = a7;
    v0_1 = ((int (*)(int, int, int))(FUN_0c187798))(v0_3, v0_0, v0_8);
    v0_1 = ((int (*)(void))(FUN_0c187798))();
    w0_0 = (((struct o8_float *)(v0_8))->v);
    w0_1 = (((struct o8_float *)(v0_9))->v);
    v0_7 = (0xC);
    v0_6 = ((((int)stk + 0) + 0x18));
    v0_1 = ((v0_9 + 0x8));
    v0_2 = ((v0_8 + 0x8));
    v0_0 = (v0_0);
    v0_3 = (v0_3);
    v0_4 = (v0_9);
    v0_5 = (v0_8);
    w0_2 = ((((((struct oC_float *)((v0_8 + 0x8)))->v)) + ((((struct oC_float *)((v0_9 + 0x8)))->v))));
    w0_3 = (w0_0);
    w0_4 = (w0_1);
    w0_5 = ((w0_0 - w0_1));
    if ((!(0.0f > (w0_0 - w0_1)))) goto L_C062350;
    w0_0 = (((-w0_3) + w0_4));
    L_C062352:;
    *(float *)((v0_6 + 0x0)) = (w0_2 - w0_0);
    w0_0 = (((struct o8_float *)(v0_2))->v);
    w0_1 = (((struct o8_float *)(v0_1))->v);
    w0_2 = (((((struct o14_float *)(v0_2))->v)) + (*(float *)((v0_1 + v0_7))));
    v0_7 = (0x8);
    w0_2 = w0_2;
    w0_3 = (w0_0);
    w0_4 = ((w0_0 - w0_1));
    w0_5 = (w0_1);
    if ((!(0.0f > (w0_0 - w0_1)))) goto L_C062388;
    w0_0 = (((-w0_3) + w0_5));
    L_C06238A:;
    *(float *)((v0_6 + v0_7)) = (w0_2 - w0_0);
    w0_0 = (((struct o4_float *)(v0_1))->v);
    w0_1 = (((struct o10_float *)(v0_1))->v);
    w0_2 = (((struct o4_float *)(v0_2))->v);
    w0_3 = (((struct o10_float *)(v0_2))->v);
    w0_0 = math_interval_overlap((w0_2 + w0_3), (w0_2 - w0_3), (w0_0 + w0_1), (w0_0 - w0_1));
    (((struct o4_float *)(v0_6))->v) = w0_0;
    w0_0 = (w0_0);
    w0_0 = (0.0f);
    if (!(((*(float *)((v0_6 + 0x0))) > 0.0f))) goto L_C062642;
    if ((((((struct o8_float *)(v0_6))->v)) > w0_0)) goto L_C0623CE;
    goto L_C062642;
    L_C062642:;
    v0_7 = (0x0);
    L_C062644:;
    return v0_7;
    L_C0623CE:;
    if ((!(0.0f > ((((struct o4_float *)(v0_6))->v))))) goto L_C0623DC;
    goto L_C062642;
    L_C0623DC:;
    v0_7 = (FUN_0c061284(v0_3, v0_0)) == 0;
    if (v0_7) goto L_C0623FC;
    (((struct o135_uchar *)(v0_3))->v) = (*(signed char *)((v0_4 + 0x4)));
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)((v0_5 + 0x4)));
    v0_7 = (0x2);
    goto L_C062644;
    L_C0623FC:;
    w0_1 = (((struct o4_float *)(v0_6))->v);
    w0_2 = (((((struct o8_float *)(v0_6))->v)));
    w0_0 = ((*(float *)((v0_6 + 0x0))));
    w0_3 = (w0_1);
    if ((!(w0_1 > 9.0f))) goto L_C062420;
    if (!((!(w0_3 > (*(float *)((v0_6 + 0x0))))))) goto L_C062512;
    if ((w0_3 > ((((struct o8_float *)(v0_6))->v)))) goto L_C062512;
    goto L_C062420;
    L_C062512:;
    if ((w0_0 > w0_3)) goto L_C06258C;
    if ((w0_0 > w0_2)) goto L_C06258C;
    v0_6 = (FUN_0c0612cc(v0_3, v0_0)) == 0;
    if (v0_6) goto L_C06253E;
    if ((!((*(float *)((v0_2 + 0x0))) > (*(float *)((v0_1 + 0x0)))))) goto L_C062536;
    w0_0 = ((-(*(float *)(((int)stk + 24)))));
    L_C06253A:;
    *(float *)(((int)stk + 0)) = w0_0;
    L_C062634:;
    FUN_0c060c80(v0_0, ((int)stk + 0), v0_4);
    L_C06263E:;
    v0_7 = (0x1);
    goto L_C062644;
    L_C062536:;
    w0_0 = ((*(float *)(((int)stk + 24))));
    goto L_C06253A;
    L_C06253E:;
    v0_6 = (FUN_0c0612cc(v0_0, v0_3)) == 0;
    if (v0_6) goto L_C062564;
    if (((*(float *)((v0_2 + 0x0))) > (*(float *)((v0_1 + 0x0))))) goto L_C06255A;
    w0_0 = ((-(*(float *)(((int)stk + 24)))));
    L_C06255E:;
    *(float *)(((int)stk + 12)) = w0_0;
    L_C0625EE:;
    FUN_0c060c80(v0_3, (((int)stk + 0) + 0xC), v0_5);
    goto L_C06263E;
    L_C06255A:;
    w0_0 = ((*(float *)(((int)stk + 24))));
    goto L_C06255E;
    L_C062564:;
    if ((!((*(float *)((v0_1 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C062578;
    w0_2 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 24)))));
    L_C062580:;
    *(float *)(((int)stk + 12)) = (w0_0 / w0_2);
    *(float *)(((int)stk + 0)) = (-(w0_0 / w0_2));
    L_C062628:;
    FUN_0c060c80(v0_3, (((int)stk + 0) + 0xC), v0_5);
    goto L_C062634;
    L_C062578:;
    w0_2 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 24))));
    goto L_C062580;
    L_C06258C:;
    v0_6 = (FUN_0c0612cc(v0_3, v0_0)) == 0;
    if (v0_6) goto L_C0625C8;
    if ((!(((((struct o8_float *)(v0_2))->v)) > ((((struct o8_float *)(v0_1))->v))))) goto L_C0625AA;
    w0_0 = ((-(*(float *)(((int)stk + 32)))));
    L_C0625AE:;
    *(float *)(((int)stk + 8)) = w0_0;
    goto L_C062634;
    L_C0625AA:;
    w0_0 = ((*(float *)(((int)stk + 32))));
    goto L_C0625AE;
    L_C0625C8:;
    v0_6 = (FUN_0c0612cc(v0_0, v0_3)) == 0;
    if (v0_6) goto L_C0625FE;
    if ((((((struct o8_float *)(v0_2))->v)) > ((((struct o8_float *)(v0_1))->v)))) goto L_C0625E6;
    w0_0 = ((-(*(float *)(((int)stk + 32)))));
    L_C0625EA:;
    *(float *)(((int)stk + 20)) = w0_0;
    goto L_C0625EE;
    L_C0625E6:;
    w0_0 = ((*(float *)(((int)stk + 32))));
    goto L_C0625EA;
    L_C0625FE:;
    if ((!(((((struct o8_float *)(v0_1))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C062614;
    w0_2 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 32)))));
    L_C06261C:;
    *(float *)(((int)stk + 20)) = (w0_0 / w0_2);
    *(float *)(((int)stk + 8)) = (-(w0_0 / w0_2));
    goto L_C062628;
    L_C062614:;
    w0_2 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 32))));
    goto L_C06261C;
    L_C062420:;
    if ((!(((((struct o4_float *)(v0_2))->v)) > ((((struct o4_float *)(v0_1))->v))))) goto L_C0624C8;
    if (((*(signed char *)((v0_0 + 0x0))) != 0)) goto L_C062458;
    if (((*(signed char *)((v0_3 + 0x126))) != 0)) goto L_C062458;
    w0_1 = (w0_2 * w0_2);
    w0_0 = math_signed_sqrt((((w0_0 * w0_0)) - w0_1));
    FUN_0c06151a(v0_3, v0_0, v0_5, v0_4, w0_0);
    goto L_C06263E;
    L_C062458:;
    v0_7 = (FUN_0c0612cc(v0_3, v0_0)) == 0;
    if (v0_7) goto L_C062470;
    *(float *)(((int)stk + 4)) = (-((((struct o4_float *)(v0_6))->v)));
    goto L_C062634;
    L_C062470:;
    *(float *)(((int)stk + 16)) = ((((struct o4_float *)(v0_6))->v));
    FUN_0c060c80(v0_3, (((int)stk + 0) + 0xC), v0_5);
    FUN_0c061222(v0_0, v0_3);
    (((struct o135_uchar *)(v0_3))->v) = (*(signed char *)((v0_4 + 0x4)));
    FUN_0c061416(v0_3, v0_5, v0_2, v0_1);
    goto L_C06263E;
    L_C0624C8:;
    v0_7 = (FUN_0c0612cc(v0_0, v0_3)) == 0;
    if (v0_7) goto L_C0624E0;
    *(float *)(((int)stk + 16)) = (-((((struct o4_float *)(v0_6))->v)));
    goto L_C0625EE;
    L_C0624E0:;
    *(float *)(((int)stk + 4)) = ((((struct o4_float *)(v0_6))->v));
    FUN_0c060c80(v0_0, ((int)stk + 0), v0_4);
    FUN_0c061222(v0_3, v0_0);
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)((v0_5 + 0x4)));
    FUN_0c06130a(v0_0, v0_4, v0_1, v0_2);
    goto L_C06263E;
    L_C062388:;
    w0_0 = (w0_4);
    goto L_C06238A;
    L_C062350:;
    w0_0 = (w0_5);
    goto L_C062352;
}

int FUN_0c111f38(int a4)
{
    int stk[7];
    register int t9;
    register int t10;
    register int t12;
    register int t16;
    register int t20;
    register int t22;
    register int t30;
    register int t36;
    int t39;
    int t40;
    int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t67;
    register int t141;
    register int t142;
    register int t164;
    register int t165;
    int t2;
    register int t61;
    register int t62;
    register int t63;
    register int t65;
    register int t54;
    register int t93;
    register int t94;
    register int t97;
    register int t87;
    register int t168;
    register int t169;
    register int t170;
    register int t173;
    register int t176;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t2 = *(signed char *)((a4 + 0x14)), t2 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t9 = *(signed char *)((a4 + 0x14));
    t10 = *(int *)0xC4739A4;
    if (t9 != 0) {
        if (t9 == 1) {
            return t9;
        }
        if (t9 == 2) {
            *(int *)((int)stk + 4) = 0x0;
            t12 = (*(int *)((t10 + 0x3C)));
            *(int *)((int)stk + 0) = t12;
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t10 + 0x38))), t12, 0x0));
        }
        if (t9 == 3) {
            *(int *)((int)stk + 4) = 0x0;
            t16 = (*(int *)((t10 + 0x3C)));
            *(int *)((int)stk + 0) = t16;
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t10 + 0x38))), t16, 0x0));
        }
        if (t9 == 4) {
            *(int *)((int)stk + 4) = 0x0;
            t20 = (*(int *)((t10 + 0x3C)));
            *(int *)((int)stk + 0) = t20;
            t22 = FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t10 + 0x38))), t20, 0x0);
            if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                return FUN_0c03f346(a4);
            }
            return t22;
        }
        return t9;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x61F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    FUN_0c1171f0(a4);
    t30 = *(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)));
    t36 = t30;
    if ((int)t30 >= 0) {
        t36 = (*(int *)((((*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) << 2) + 0xC474410)));
    }
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)(((int)stk + 24)) = (((((t36 << 2) << 1) - t36) * 0xE) + 0xC29620E);
    *(unsigned int *)(((int)stk + 8)) = (((t36 - 160) << 2) + 0xC2A08E0);
    t39 = 0xC2A08E0;
    t40 = (((((t36 << 2) << 1) - t36) * 0xE) + 0xC29620E);
    t41 = 0xFFFFFF60;
    t42 = 0xC473C74;
    t43 = 0x0;
    for (;;) {
        t44 = *(short *)((((((((t36 << 2) << 1) - t36) + t43) * 0xE) + 0xC29620E) + 0x0));
        if ((t44 != -1) && (((int)t44 >= 0) && (t41 = 0xB6, (int)t44 <= (int)t41))) {
            t39 = t43;
            t39 = (t39 << 2);
            *(unsigned int *)(((int)stk + 12)) = t39;
            t41 = (*(int *)(((int)stk + 8)));
            t40 = (*(int *)((t41 + 0x0)));
            t40 = (t40 << 2);
            t41 = (*(int *)((t40 + 0xC473D04)));
            t40 = 0x2000;
            if ((t41 & t40) != 0) {
                t42 = (((t36 << 2) << 1) - t36);
                t42 = (t42 + t43);
                t41 = (*(int *)(((int)stk + 12)));
                *(volatile int *)0xC4B410C;
                t42 = (t42 * 0xE);
                t42 = (t42 + 0xC29620E);
                t42 = (*(short *)((t42 + 0x0)));
                t54 = ((0xC4 + a4) + t41);
            } else {
                t42 = 0xB9;
                t41 = (*(int *)(((int)stk + 12)));
                *(volatile int *)0xC4B410C;
                t54 = (((t42 + 0xB) + a4) + t41);
            }
            FUN_0c1173dc((*(int *)((t54 + 0x0))), t42);
        } else {
            t61 = t39;
            t62 = t40;
            t63 = t41;
            t65 = t42;
        }
        t39 = t61;
        t40 = t62;
        t41 = t63;
        t42 = t65;
        t67 = *(short *)((((((((t36 << 2) << 1) - t36) + t43) * 0xE) + 0xC29620E) + 0x2));
        if ((t67 != -1) && (((int)t67 >= 0) && (t41 = 0xB6, (int)t67 <= (int)t41))) {
            t39 = (*(int *)(((int)stk + 8)));
            t41 = (*(int *)((t39 + 0x0)));
            t39 = 0x2000;
            t41 = (t41 << 2);
            t40 = (*(int *)((t41 + 0xC473D04)));
            if ((t40 & t39) != 0) {
                t40 = (*(int *)(((int)stk + 24)));
                t41 = (*(int *)(((int)stk + 16)));
                t42 = *(short *)((t40 + 0x2));
                *(volatile int *)0xC4B410C;
                t87 = ((0xC4 + a4) + t41);
            } else {
                t42 = 0xB9;
                t41 = (*(int *)(((int)stk + 20)));
                *(volatile int *)0xC4B410C;
                t87 = (((t42 + 0xB) + a4) + t41);
            }
            FUN_0c1173dc((*(int *)((t87 + 0xC))), t42);
        } else {
            t93 = t39;
            t94 = t40;
            t97 = t42;
        }
        t39 = t93;
        t40 = t94;
        t41 = (*(int *)(((int)stk + 20)));
        t42 = t97;
        t43 = (t43 + 0x1);
        t41 = (t41 + 0x4);
        *(unsigned int *)(((int)stk + 20)) = t41;
        t41 = 0x3;
        t40 = (*(int *)(((int)stk + 16)));
        t40 = (t40 + 0x4);
        *(unsigned int *)(((int)stk + 16)) = t40;
        t39 = (*(int *)(((int)stk + 24)));
        t39 = (t39 + 0xE);
        *(unsigned int *)(((int)stk + 24)) = t39;
        if ((int)t43 >= (int)t41) {
            break;
        }
    }
    if ((*(short *)((0xC29620E + ((((t36 << 2) << 1) - t36) * 0xE)))) != -1) {
        FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0xD, 0x4, (*(int *)0xC4B410C));
    }
    if ((*(short *)((0xC29620E + (((((t36 << 2) << 1) - t36) + 0x1) * 0xE)))) != -1) {
        FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0xD, 0x4, (*(int *)0xC4B410C));
    }
    if ((*(short *)((0xC29620E + (((((t36 << 2) << 1) - t36) + 0x2) * 0xE)))) != -1) {
        FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0xD, 0x4, (*(int *)0xC4B410C));
    }
    if ((*(short *)((0xC29620E + ((((t36 << 2) << 1) - t36) * 0xE)))) == -1) {
        if ((*(short *)((0xC29620E + (((((t36 << 2) << 1) - t36) + 0x1) * 0xE)))) == -1) {
            if ((*(short *)((0xC29620E + (((((t36 << 2) << 1) - t36) + 0x2) * 0xE)))) == -1) {
                *(volatile int *)0xC4B410C;
                FUN_0c1173dc(((((struct oC4_int *)(a4))->v)), 0xB8);
                t141 = 0x4;
                for (;;) {
                    t142 = ((0xC4 + a4) + t141);
                    t141 = (t141 + 0x4);
                    *(unsigned char *)(((*(int *)((t142 + 0x0))) + 0x0)) = 0x0;
                    if ((unsigned int)t141 >= (unsigned int)0x24) {
                        break;
                    }
                }
            }
        }
    }
    t164 = 0x0;
    t165 = 0x18;
    for (;;) {
        *(volatile int *)((((0xC4 + a4) + t164) + 0x0));
        FUN_0c187798(t164, t165, 0xC2913E0);
        t164 = (t168 + 0x4);
        t165 = t169;
        if ((unsigned int)t164 >= (unsigned int)t169) {
            break;
        }
    }
    *(volatile int *)((a4 + 0xDC));
    FUN_0c187798(t164, t165, t170);
    *(volatile int *)((a4 + 0xE0));
    FUN_0c187798(0x0, 0x0, t173);
    *(volatile int *)((a4 + 0xE4));
    return (FUN_0c187798(0x0, 0x0, t176));
}

int FUN_0c055368(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    if ((0xF & a4) != 1) {
        if ((0xF & a4) != 2) {
            if ((0xF & a4) == 3) {
                u0 = *(float *)((a5 + 0x0));
                u1 = *(float *)((a6 + 0x0));
                u2 = (u0 - u1);
                if (0.0f > (u0 - u1)) {
                    u2 = ((-u0) + u1);
                }
                u1 = *(float *)((a7 + 0x0));
                u3 = ((u0 - u1) / (float)a9);
                if (0.0f > ((u0 - u1) / (float)a9)) {
                    u4 = ((u0 - u1) / (float)a9);
                    u4 = -u4;
                    u3 = u4;
                }
                if (!(u2 > u3)) {
                    u0 = (*(float *)((a5 + 0x0)));
                } else {
                    u0 = ((*(float *)((a6 + 0x0))) + (((*(float *)((a5 + 0x0))) - (*(float *)((a7 + 0x0)))) / (float)a9));
                }
                *(float *)((a6 + 0x0)) = u0;
                u0 = (((struct o4_float *)(a5))->v);
                u1 = (((struct o4_float *)(a6))->v);
                u2 = (((struct o4_float *)(a7))->v);
                u3 = (u0 - u1);
                if (0.0f > (u0 - u1)) {
                    u3 = ((-u0) + u1);
                }
                u1 = ((u0 - u2) / (float)a9);
                if (0.0f > ((u0 - u2) / (float)a9)) {
                    u4 = ((u0 - u2) / (float)a9);
                    u4 = -u4;
                    u1 = u4;
                }
                if (!(u3 > u1)) {
                    u0 = ((((struct o4_float *)(a5))->v));
                } else {
                    u0 = (((((struct o4_float *)(a6))->v)) + ((((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a7))->v))) / (float)a9));
                }
                (((struct o4_float *)(a6))->v) = u0;
                u0 = (((struct o8_float *)(a5))->v);
                u1 = (((struct o8_float *)(a6))->v);
                u2 = (((struct o8_float *)(a7))->v);
                u3 = (u0 - u1);
                if (0.0f > (u0 - u1)) {
                    u3 = ((-u0) + u1);
                }
                u1 = ((u0 - u2) / (float)a9);
                if (0.0f > ((u0 - u2) / (float)a9)) {
                    u4 = ((u0 - u2) / (float)a9);
                    u4 = -u4;
                    u1 = u4;
                }
                if (!(u3 > u1)) {
                    (((struct o8_float *)(a6))->v) = ((((struct o8_float *)(a5))->v));
                } else {
                    (((struct o8_float *)(a6))->v) = (((((struct o8_float *)(a6))->v)) + ((((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a7))->v))) / (float)a9));
                }
                t0 = 0x8;
            } else {
                t1 = (0xF & a4);
                if ((0xF & a4) == 4) {
                    u0 = *(float *)((a5 + 0x0));
                    u1 = *(float *)((a6 + 0x0));
                    u2 = *(float *)((a7 + 0x0));
                    u3 = (u0 - u1);
                    if (0.0f > (u0 - u1)) {
                        u3 = ((-u0) + u1);
                    }
                    t2 = *(int *)((a8 + 0x0));
                    u1 = ((u0 - u2) / (float)(t2 + 0x1));
                    if (0.0f > ((u0 - u2) / (float)(t2 + 0x1))) {
                        u4 = ((u0 - u2) / (float)(t2 + 0x1));
                        u4 = -u4;
                        u1 = u4;
                    }
                    if (!(u3 > u1)) {
                        *(float *)((a6 + 0x0)) = (*(float *)((a5 + 0x0)));
                    } else {
                        *(float *)((a6 + 0x0)) = ((*(float *)((a6 + 0x0))) + (((*(float *)((a5 + 0x0))) - (*(float *)((a7 + 0x0)))) / (float)((*(int *)((a8 + 0x0))) + 0x1)));
                    }
                    u0 = (((struct o4_float *)(a5))->v);
                    u1 = (((struct o4_float *)(a6))->v);
                    u2 = (u0 - u1);
                    if (0.0f > (u0 - u1)) {
                        u2 = ((-u0) + u1);
                    }
                    t2 = *(int *)((a8 + 0x4));
                    u1 = (((struct o4_float *)(a7))->v);
                    u3 = ((u0 - u1) / (float)(t2 + 0x1));
                    if (0.0f > ((u0 - u1) / (float)(t2 + 0x1))) {
                        u4 = ((u0 - u1) / (float)(t2 + 0x1));
                        u4 = -u4;
                        u3 = u4;
                    }
                    if (!(u2 > u3)) {
                        (((struct o4_float *)(a6))->v) = ((((struct o4_float *)(a5))->v));
                    } else {
                        (((struct o4_float *)(a6))->v) = (((((struct o4_float *)(a6))->v)) + ((((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a7))->v))) / (float)((*(int *)((a8 + 0x4))) + 0x1)));
                    }
                    u0 = (((struct o8_float *)(a5))->v);
                    u1 = (((struct o8_float *)(a6))->v);
                    u2 = (u0 - u1);
                    if (0.0f > (u0 - u1)) {
                        u2 = ((-u0) + u1);
                    }
                    t2 = *(int *)((a8 + 0x8));
                    u1 = (((struct o8_float *)(a7))->v);
                    u3 = ((u0 - u1) / (float)(t2 + 0x1));
                    if (0.0f > ((u0 - u1) / (float)(t2 + 0x1))) {
                        u4 = ((u0 - u1) / (float)(t2 + 0x1));
                        u4 = -u4;
                        u3 = u4;
                    }
                    if (!(u2 > u3)) {
                        (((struct o8_float *)(a6))->v) = ((((struct o8_float *)(a5))->v));
                    } else {
                        (((struct o8_float *)(a6))->v) = (((((struct o8_float *)(a6))->v)) + ((((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a7))->v))) / (float)((*(int *)((a8 + 0x8))) + 0x1)));
                    }
                    t1 = 0x8;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            u0 = *(float *)((a5 + 0x0));
            u1 = *(float *)((a6 + 0x0));
            u2 = (u0 - u1);
            if (0.0f > (u0 - u1)) {
                u2 = ((-u0) + u1);
            }
            t0 = *(int *)((a8 + 0x0));
            u3 = ((u0 - u1) / (float)(t0 + 0x1));
            if (0.0f > ((u0 - u1) / (float)(t0 + 0x1))) {
                u4 = ((u0 - u1) / (float)(t0 + 0x1));
                u4 = -u4;
                u3 = u4;
            }
            if (!(u2 > u3)) {
                *(float *)((a6 + 0x0)) = (*(float *)((a5 + 0x0)));
            } else {
                *(float *)((a6 + 0x0)) = ((*(float *)((a6 + 0x0))) + (((*(float *)((a5 + 0x0))) - (*(float *)((a6 + 0x0)))) / (float)((*(int *)((a8 + 0x0))) + 0x1)));
            }
            u0 = (((struct o4_float *)(a5))->v);
            u1 = (((struct o4_float *)(a6))->v);
            u2 = (u0 - u1);
            if (0.0f > (u0 - u1)) {
                u2 = ((-u0) + u1);
            }
            t0 = *(int *)((a8 + 0x4));
            u3 = ((u0 - u1) / (float)(t0 + 0x1));
            if (0.0f > ((u0 - u1) / (float)(t0 + 0x1))) {
                u4 = ((u0 - u1) / (float)(t0 + 0x1));
                u4 = -u4;
                u3 = u4;
            }
            if (!(u2 > u3)) {
                (((struct o4_float *)(a6))->v) = ((((struct o4_float *)(a5))->v));
            } else {
                (((struct o4_float *)(a6))->v) = (((((struct o4_float *)(a6))->v)) + ((((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a6))->v))) / (float)((*(int *)((a8 + 0x4))) + 0x1)));
            }
            u0 = (((struct o8_float *)(a5))->v);
            u1 = (((struct o8_float *)(a6))->v);
            u2 = (u0 - u1);
            if (0.0f > (u0 - u1)) {
                u2 = ((-u0) + u1);
            }
            t0 = *(int *)((a8 + 0x8));
            u3 = ((u0 - u1) / (float)(t0 + 0x1));
            if (0.0f > ((u0 - u1) / (float)(t0 + 0x1))) {
                u4 = ((u0 - u1) / (float)(t0 + 0x1));
                u4 = -u4;
                u3 = u4;
            }
            if (!(u2 > u3)) {
                (((struct o8_float *)(a6))->v) = ((((struct o8_float *)(a5))->v));
            } else {
                (((struct o8_float *)(a6))->v) = (((((struct o8_float *)(a6))->v)) + ((((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a6))->v))) / (float)((*(int *)((a8 + 0x8))) + 0x1)));
            }
            t1 = 0x8;
        }
        t0 = t1;
    } else {
        t0 = (FUN_0c187798(a4, a5, a6));
    }
    return t0;
}

int FUN_0c0556c8(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    if ((0xF & a4) != 1) {
        if ((0xF & a4) != 2) {
            if ((0xF & a4) == 3) {
                u0 = *(float *)((a5 + 0x0));
                u1 = *(float *)((a6 + 0x0));
                u2 = (u0 - u1);
                if (0.0f > (u0 - u1)) {
                    u2 = ((-u0) + u1);
                }
                u1 = *(float *)((a7 + 0x0));
                u3 = ((u0 - u1) / (float)a9);
                if (0.0f > ((u0 - u1) / (float)a9)) {
                    u4 = ((u0 - u1) / (float)a9);
                    u4 = -u4;
                    u3 = u4;
                }
                if (!(u2 > u3)) {
                    u0 = (*(float *)((a5 + 0x0)));
                } else {
                    u0 = ((*(float *)((a6 + 0x0))) + (((*(float *)((a5 + 0x0))) - (*(float *)((a7 + 0x0)))) / (float)a9));
                }
                *(float *)((a6 + 0x0)) = u0;
                u0 = (((struct o4_float *)(a5))->v);
                u1 = (((struct o4_float *)(a6))->v);
                u2 = (((struct o4_float *)(a7))->v);
                u3 = (u0 - u1);
                if (0.0f > (u0 - u1)) {
                    u3 = ((-u0) + u1);
                }
                u1 = ((u0 - u2) / (float)a9);
                if (0.0f > ((u0 - u2) / (float)a9)) {
                    u4 = ((u0 - u2) / (float)a9);
                    u4 = -u4;
                    u1 = u4;
                }
                if (!(u3 > u1)) {
                    u0 = ((((struct o4_float *)(a5))->v));
                } else {
                    u0 = (((((struct o4_float *)(a6))->v)) + ((((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a7))->v))) / (float)a9));
                }
                (((struct o4_float *)(a6))->v) = u0;
                u0 = (((struct o8_float *)(a5))->v);
                u1 = (((struct o8_float *)(a6))->v);
                u2 = (((struct o8_float *)(a7))->v);
                u3 = (u0 - u1);
                if (0.0f > (u0 - u1)) {
                    u3 = ((-u0) + u1);
                }
                u1 = ((u0 - u2) / (float)a9);
                if (0.0f > ((u0 - u2) / (float)a9)) {
                    u4 = ((u0 - u2) / (float)a9);
                    u4 = -u4;
                    u1 = u4;
                }
                if (!(u3 > u1)) {
                    (((struct o8_float *)(a6))->v) = ((((struct o8_float *)(a5))->v));
                } else {
                    (((struct o8_float *)(a6))->v) = (((((struct o8_float *)(a6))->v)) + ((((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a7))->v))) / (float)a9));
                }
                t0 = 0x8;
            } else {
                if ((0xF & a4) == 4) {
                    u0 = *(float *)((a5 + 0x0));
                    u1 = *(float *)((a6 + 0x0));
                    u2 = *(float *)((a7 + 0x0));
                    u3 = (u0 - u1);
                    if (0.0f > (u0 - u1)) {
                        u3 = ((-u0) + u1);
                    }
                    t1 = *(int *)((a8 + 0x0));
                    u1 = ((u0 - u2) / (float)(t1 + 0x1));
                    if (0.0f > ((u0 - u2) / (float)(t1 + 0x1))) {
                        u4 = ((u0 - u2) / (float)(t1 + 0x1));
                        u4 = -u4;
                        u1 = u4;
                    }
                    if (!(u3 > u1)) {
                        *(float *)((a6 + 0x0)) = (*(float *)((a5 + 0x0)));
                    } else {
                        *(float *)((a6 + 0x0)) = ((*(float *)((a6 + 0x0))) + (((*(float *)((a5 + 0x0))) - (*(float *)((a7 + 0x0)))) / (float)((*(int *)((a8 + 0x0))) + 0x1)));
                    }
                    u0 = (((struct o4_float *)(a5))->v);
                    u1 = (((struct o4_float *)(a6))->v);
                    u2 = (u0 - u1);
                    if (0.0f > (u0 - u1)) {
                        u2 = ((-u0) + u1);
                    }
                    t1 = *(int *)((a8 + 0x4));
                    u1 = (((struct o4_float *)(a7))->v);
                    u3 = ((u0 - u1) / (float)(t1 + 0x1));
                    if (0.0f > ((u0 - u1) / (float)(t1 + 0x1))) {
                        u4 = ((u0 - u1) / (float)(t1 + 0x1));
                        u4 = -u4;
                        u3 = u4;
                    }
                    if (!(u2 > u3)) {
                        (((struct o4_float *)(a6))->v) = ((((struct o4_float *)(a5))->v));
                    } else {
                        (((struct o4_float *)(a6))->v) = (((((struct o4_float *)(a6))->v)) + ((((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a7))->v))) / (float)((*(int *)((a8 + 0x4))) + 0x1)));
                    }
                    u0 = (((struct o8_float *)(a5))->v);
                    u1 = (((struct o8_float *)(a6))->v);
                    u2 = (u0 - u1);
                    if (0.0f > (u0 - u1)) {
                        u2 = ((-u0) + u1);
                    }
                    t1 = *(int *)((a8 + 0x8));
                    u1 = (((struct o8_float *)(a7))->v);
                    u3 = ((u0 - u1) / (float)(t1 + 0x1));
                    if (0.0f > ((u0 - u1) / (float)(t1 + 0x1))) {
                        u4 = ((u0 - u1) / (float)(t1 + 0x1));
                        u4 = -u4;
                        u3 = u4;
                    }
                    if (!(u2 > u3)) {
                        (((struct o8_float *)(a6))->v) = ((((struct o8_float *)(a5))->v));
                    } else {
                        (((struct o8_float *)(a6))->v) = (((((struct o8_float *)(a6))->v)) + ((((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a7))->v))) / (float)((*(int *)((a8 + 0x8))) + 0x1)));
                    }
                    t1 = 0x8;
                } else {
                    t1 = (FUN_0c187798(a4, a5, a6));
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            u0 = *(float *)((a5 + 0x0));
            u1 = *(float *)((a6 + 0x0));
            u2 = (u0 - u1);
            if (0.0f > (u0 - u1)) {
                u2 = ((-u0) + u1);
            }
            t0 = *(int *)((a8 + 0x0));
            u3 = ((u0 - u1) / (float)(t0 + 0x1));
            if (0.0f > ((u0 - u1) / (float)(t0 + 0x1))) {
                u4 = ((u0 - u1) / (float)(t0 + 0x1));
                u4 = -u4;
                u3 = u4;
            }
            if (!(u2 > u3)) {
                *(float *)((a6 + 0x0)) = (*(float *)((a5 + 0x0)));
            } else {
                *(float *)((a6 + 0x0)) = ((*(float *)((a6 + 0x0))) + (((*(float *)((a5 + 0x0))) - (*(float *)((a6 + 0x0)))) / (float)((*(int *)((a8 + 0x0))) + 0x1)));
            }
            u0 = (((struct o4_float *)(a5))->v);
            u1 = (((struct o4_float *)(a6))->v);
            u2 = (u0 - u1);
            if (0.0f > (u0 - u1)) {
                u2 = ((-u0) + u1);
            }
            t0 = *(int *)((a8 + 0x4));
            u3 = ((u0 - u1) / (float)(t0 + 0x1));
            if (0.0f > ((u0 - u1) / (float)(t0 + 0x1))) {
                u4 = ((u0 - u1) / (float)(t0 + 0x1));
                u4 = -u4;
                u3 = u4;
            }
            if (!(u2 > u3)) {
                (((struct o4_float *)(a6))->v) = ((((struct o4_float *)(a5))->v));
            } else {
                (((struct o4_float *)(a6))->v) = (((((struct o4_float *)(a6))->v)) + ((((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a6))->v))) / (float)((*(int *)((a8 + 0x4))) + 0x1)));
            }
            u0 = (((struct o8_float *)(a5))->v);
            u1 = (((struct o8_float *)(a6))->v);
            u2 = (u0 - u1);
            if (0.0f > (u0 - u1)) {
                u2 = ((-u0) + u1);
            }
            t0 = *(int *)((a8 + 0x8));
            u3 = ((u0 - u1) / (float)(t0 + 0x1));
            if (0.0f > ((u0 - u1) / (float)(t0 + 0x1))) {
                u4 = ((u0 - u1) / (float)(t0 + 0x1));
                u4 = -u4;
                u3 = u4;
            }
            if (!(u2 > u3)) {
                (((struct o8_float *)(a6))->v) = ((((struct o8_float *)(a5))->v));
            } else {
                (((struct o8_float *)(a6))->v) = (((((struct o8_float *)(a6))->v)) + ((((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a6))->v))) / (float)((*(int *)((a8 + 0x8))) + 0x1)));
            }
            t1 = 0x8;
        }
        t0 = t1;
    } else {
        t0 = (FUN_0c187798(a4, a5, a6));
    }
    return t0;
}

int FUN_0c042b10(void)
{
    register int t1;

    FUN_0c042ae4();
    t1 = *(signed char *)0xC5421FA;
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c0429fa();
        }
        return FUN_0c042800();
    }
    return FUN_0c042740();
}

int FUN_0c071450(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c071334(a4);
            }
            return ((int (*)(int, int, int, int))(0xC071308))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC071190))(a4, a5, a6, a7);
    }
    return FUN_0c071094(a4);
}
