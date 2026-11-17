/* game/hit: functions 0C05FFA4-0C062660, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o187_uchar { char p[0x187]; unsigned char v; };
struct o24_int { char p[0x24]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
float math_interval_overlap(float, float, float, float);
int FUN_0c060290(int, int, float);
int FUN_0c060376(int, int);
int FUN_0c060454(int, int);
int FUN_0c060a9c(int);
int FUN_0c060bc2(void);
int FUN_0c060bd8(void);
int FUN_0c060c80(int, int, int);
int FUN_0c0610fa(int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c061416(int, int, int, int);
int FUN_0c06151a(int, int, int, int, float);
int FUN_0c0641ca(int, int);
int FUN_0c06475c(int, int, float);
int FUN_0c064cbc(int, int, int);
float math_signed_sqrt(float);
int FUN_0c18778c(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c060428(int a4, int a5, float f4);
int FUN_0c060c00(void);
int FUN_0c060d74(int a4, int a5, int a6);
int FUN_0c060daa(int a4, int a5);
int FUN_0c06115c(int a4);
int FUN_0c0622ee(int a4, int a5, int a6, int a7);

int FUN_0c060428(int a4, int a5, float f4)
{
    register float u5;
    float u6;

    if ((*(signed char *)((a5 + 0x2))) != -1) {
        return FUN_0c060290(a4, a5, f4);
    }
    if ((((((struct o40_float *)(a4))->v)) == 1.0f) && ((u5 = (((struct o44_float *)(a4))->v), u5 == 1.0f) && (u6 = (((struct o48_float *)(a4))->v), u6 == 1.0f))) {
        return 0x48;
    }
    return FUN_0c060376(a4, a5);
}

int FUN_0c060c00(void)
{
    FUN_0c0641ca((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    FUN_0c060bd8();
    FUN_0c060a9c(((((struct o8_int *)0xC532434)->v)));
    FUN_0c060a9c(((((struct o4_int *)0xC532434)->v)));
    FUN_0c060a9c(((((struct o24_int *)0xC532434)->v)));
    FUN_0c060a9c(((((struct o0_int *)0xC532434)->v)));
    return FUN_0c060bc2();
}

int FUN_0c060d74(int a4, int a5, int a6)
{
    float u1;

    if (((*(signed char *)((a4 + 0x126))) == 0) && (u1 = (((struct o17C_float *)(a4))->v), u1 > 0.0f)) {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 9.0f);
    }
    return (FUN_0c187798(a4, a5, a6));
}

int FUN_0c060daa(int a4, int a5)
{
    register int t0;
    register int t1;
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

    t0 = *(signed char *)((a5 + 0x3));
    t1 = 0x0;
    if ((int)t0 > 0) {
        t2 = t0;
        t3 = 0x0;
        t4 = a5;
        t5 = 0x0;
        t6 = 0x0;
        t7 = a5;
        for (;;) {
            if (((*(signed char *)((t7 + 0x0))) & 0x4) != 0) {
                t8 = t6;
                t8 = (t8 << 2);
                t8 = (t8 << 2);
                t8 = (t8 << 1);
                t2 = 0x20;
                t2 = (FUN_0c18778c(t3, t4));
                t4 = 0x184;
                t4 = (t4 + a4);
                t4 = (t4 + t8);
                t3 = a4;
                t2 = (FUN_0c060454(t3, t4));
                t2 = (*(signed char *)((t7 + 0x1)));
                if (t2 != 0) {
                    if (t2 != 1) {
                        t3 = 0x184;
                        t2 = 0x18;
                        t3 = (t3 + a4);
                        t3 = (t3 + t8);
                    } else {
                        t3 = 0x184;
                        t3 = (t3 + a4);
                        t3 = (t3 + t8);
                        t2 = 0x18;
                    }
                } else {
                    t3 = 0x184;
                    t3 = (t3 + a4);
                    t3 = (t3 + t8);
                    t2 = 0x14;
                }
                u0 = *(float *)((t3 + t2));
                t2 = 0xC;
                u1 = *(float *)((t3 + t2));
                t4 = 0x184;
                t4 = (t4 + a4);
                t4 = (t4 + t8);
                t3 = a4;
                t2 = (FUN_0c06475c(t3, t4, (u1 + u0)));
                t6 = (t6 + 0x1);
            } else {
                t8 = t3;
                t9 = t4;
            }
            t5 = (t5 + 0x1);
            t3 = t8;
            t4 = t9;
            t7 = (t7 + 0x20);
            if ((int)t5 >= (int)t0) {
                break;
            }
        }
        t1 = t6;
    }
    (((struct o187_uchar *)(a4))->v) = t1;
    return 0x187;
}

int FUN_0c06115c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = FUN_0c0610fa((a4 + 0x28));
    t1 = t0;
    t2 = 0xC4F90AC;
    t3 = t0;
    t4 = 0x0;
    t5 = ((t0 * 0x960) + 0xC4F6B2C);
    for (;;) {
        if ((int)t4 >= (int)(*(int *)((((t0 << 2) + 0xC4F90AC) + 0x0)))) {
            break;
        }
        t1 = 0x2C;
        u0 = (*(float *)((a4 + t1)));
        t1 = 0x8;
        u1 = (*(float *)((t5 + t1)));
        if (!(u1 > u0)) {
            if ((*(int *)((t5 + 0x0))) == 0) {
                t3 = a4;
                t1 = (FUN_0c064cbc(t3, 0x0, (*(int *)((t5 + 0x4)))));
            } else {
                t1 = 0x128;
                t2 = (*(short *)(((*(int *)((t5 + 0x0))) + t1)));
                if ((t2 & 0xF0) != 0) {
                    t2 = 0xC064CBC;
                    t3 = a4;
                    t1 = (FUN_0c064cbc(t3, (*(int *)((t5 + 0x0))), (*(int *)((t5 + 0x4)))));
                } else {
                    t6 = t2;
                    t7 = t3;
                    u2 = u1;
                    u3 = u0;
                }
                t2 = t6;
                t6 = t7;
                u4 = u2;
                u2 = u3;
            }
            u1 = u4;
            u0 = u2;
            t4 = (t4 + 0x1);
            t3 = t6;
            t5 = (t5 + 0xC);
            continue;
        }
        break;
    }
    return t1;
}

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
