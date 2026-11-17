/* game/hit: functions 0C05FFA4-0C062660, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oC_float { char p[0xC]; float v; };
int math_mat_transform_vector(int, int);
int FUN_0c0582de(int, int);
int FUN_0c060028(int, int, int);
int FUN_0c060074(int, int, int);
float math_interval_overlap(float, float, float, float);
int FUN_0c060290(int, int);
int FUN_0c060376(int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c061416(int, int, int, int);
int FUN_0c06151a(int, int, int, int, float);
float math_signed_sqrt(float);
int math_vec3_accumulate(int, int);
extern int FUN_0c187798();
int FUN_0c060454(int a4, int a5, float f4);
int FUN_0c061686(int a4, int a5, int a6, int a7);
int FUN_0c061a10(int a4, int a5, int a6, int a7);
int FUN_0c061c54(int a4, int a5, int a6, int a7);
int FUN_0c061ff4(int a4, int a5, int a6, int a7);

int FUN_0c060454(int a4, int a5, float f4)
{
    register int t34;
    register float u11;
    float u12;
    register float u22;
    float u23;

    if ((*(signed char *)((a5 + 0x2))) != -1) {
        FUN_0c0582de((a5 + 0x8), ((*(int *)(((((*(signed char *)((a5 + 0x2))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28));
        FUN_0c060290(a4, a5);
        t34 = 0x1;
    } else {
        t34 = 0x0;
        if ((((((struct o40_float *)(a4))->v)) == 0.0f) && ((u11 = (((struct o44_float *)(a4))->v), u11 == 0.0f) && (u12 = (((struct o48_float *)(a4))->v), u12 == 0.0f))) {
        } else {
            if (((((struct oA4_int *)(a4))->v)) != 0) {
                FUN_0c0582de((a5 + 0x8), (a4 + 0x64));
            } else {
                math_mat_transform_vector((a5 + 0x8), (a4 + 0x64));
                math_vec3_accumulate((a5 + 0x8), (a4 + 0x28));
            }
            if ((((((struct o40_float *)(a4))->v)) == 1.0f) && ((u22 = (((struct o44_float *)(a4))->v), u22 == 1.0f) && (u23 = (((struct o48_float *)(a4))->v), u23 == 1.0f))) {
            } else {
                FUN_0c060376(a4, a5);
            }
            t34 = 0x1;
        }
    }
    return t34;
}

int FUN_0c061686(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R1;
    register int R2;
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
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_1 = a4;
    v0_0 = a5;
    v0_9 = a6;
    v0_6 = a7;
    v0_2 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_0, v0_9);
    v0_2 = ((int (*)(void))(FUN_0c187798))();
    w0_4 = (((struct o8_float *)(v0_6))->v);
    w0_5 = (((struct o8_float *)(v0_9))->v);
    v0_8 = (0xC);
    v0_0 = (v0_0);
    v0_1 = (v0_1);
    v0_2 = ((v0_6 + 0x8));
    v0_3 = ((v0_9 + 0x8));
    v0_7 = ((((int)stk + 0) + 0x24));
    v0_4 = (v0_9);
    v0_5 = (v0_6);
    w0_6 = (0.0f);
    w0_1 = ((((((struct oC_float *)((v0_6 + 0x8)))->v)) + ((((struct oC_float *)((v0_9 + 0x8)))->v))));
    w0_0 = ((w0_4 - w0_5));
    w0_2 = (w0_5);
    w0_3 = (w0_4);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C0616E0;
    w0_0 = (((-w0_3) + w0_2));
    L_C0616E2:;
    *(float *)((v0_7 + 0x0)) = (w0_1 - w0_0);
    w0_4 = (((struct o8_float *)(v0_2))->v);
    w0_5 = (((struct o8_float *)(v0_3))->v);
    w0_0 = (((((struct o14_float *)(v0_2))->v)) + (*(float *)((v0_3 + v0_8))));
    v0_8 = (0x8);
    w0_1 = w0_0;
    w0_0 = (w0_4);
    w0_2 = ((w0_4 - w0_5));
    w0_3 = (w0_5);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C061708;
    w0_6 = ((-w0_0));
    w0_0 = (((-w0_0) + w0_3));
    L_C06170A:;
    *(float *)((v0_7 + v0_8)) = (w0_1 - w0_0);
    w0_4 = (((struct o4_float *)(v0_2))->v);
    w0_5 = (((struct o4_float *)(v0_3))->v);
    v0_8 = (0x4);
    w0_1 = ((((((struct o10_float *)(v0_2))->v)) + ((((struct oC_float *)(v0_3))->v))));
    w0_0 = (w0_4);
    w0_2 = (w0_5);
    w0_3 = ((w0_4 - w0_5));
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C061744;
    w0_6 = ((-w0_0));
    w0_0 = (((-w0_0) + w0_2));
    L_C061746:;
    *(float *)((v0_7 + v0_8)) = (w0_1 - w0_0);
    w0_0 = (0.0f);
    if (!(((*(float *)((v0_7 + 0x0))) > 0.0f))) goto L_C0619FA;
    if ((((((struct o8_float *)(v0_7))->v)) > w0_0)) goto L_C061762;
    goto L_C0619FA;
    L_C0619FA:;
    v0_8 = (0x0);
    L_C0619FC:;
    return v0_8;
    L_C061762:;
    if ((!(0.0f > ((((struct o4_float *)(v0_7))->v))))) goto L_C061770;
    goto L_C0619FA;
    L_C061770:;
    v0_8 = (FUN_0c061284(v0_0, v0_1)) == 0;
    if (v0_8) goto L_C06178E;
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)((v0_4 + 0x4)));
    (((struct o135_uchar *)(v0_1))->v) = (*(signed char *)((v0_5 + 0x4)));
    v0_8 = (0x2);
    goto L_C0619FC;
    L_C06178E:;
    w0_0 = (((struct o4_float *)(v0_7))->v);
    w0_1 = (w0_0);
    if ((!(w0_0 > 9.0f))) goto L_C0617B0;
    if (!((!(w0_1 > (*(float *)((v0_7 + 0x0))))))) goto L_C0618C4;
    if ((!(w0_1 > ((((struct o8_float *)(v0_7))->v))))) goto L_C0617B0;
    goto L_C0618C4;
    L_C0618C4:;
    w0_2 = *(float *)((v0_7 + 0x0));
    w0_0 = (w0_2);
    if ((w0_2 > w0_1)) goto L_C061954;
    if ((w0_0 > ((((struct o8_float *)(v0_7))->v)))) goto L_C061954;
    v0_6 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_6) goto L_C061902;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C0618F0;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C0618F8:;
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - (w0_0 / w0_1));
    L_C0619EE:;
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    L_C0619F6:;
    v0_8 = (0x1);
    goto L_C0619FC;
    L_C0618F0:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C0618F8;
    L_C061902:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C06192C;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C06191C;
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C061920:;
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + w0_0);
    L_C0619AC:;
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    goto L_C0619F6;
    L_C06191C:;
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C061920;
    L_C06192C:;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C061940;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C061948:;
    *(float *)(((int)stk + 12)) = (w0_0 / w0_1);
    *(float *)(((int)stk + 0)) = (-(w0_0 / w0_1));
    L_C0619E4:;
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    goto L_C0619EE;
    L_C061940:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C061948;
    L_C061954:;
    v0_6 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_6) goto L_C061982;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C061972;
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C061976:;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - w0_0);
    goto L_C0619EE;
    L_C061972:;
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C061976;
    L_C061982:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C0619BA;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C06199E;
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C0619A2:;
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + w0_0);
    goto L_C0619AC;
    L_C06199E:;
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C0619A2;
    L_C0619BA:;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C0619D0;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C0619D8:;
    *(float *)(((int)stk + 20)) = (w0_0 / w0_1);
    *(float *)(((int)stk + 8)) = (-(w0_0 / w0_1));
    goto L_C0619E4;
    L_C0619D0:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C0619D8;
    L_C0617B0:;
    if ((!(((((struct o4_float *)(v0_2))->v)) > ((((struct o4_float *)(v0_3))->v))))) goto L_C061878;
    v0_8 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_8) goto L_C0617D4;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o4_float *)(v0_7))->v)));
    goto L_C0619EE;
    L_C0617D4:;
    v0_8 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_8) goto L_C061812;
    FUN_0c060074(v0_3, v0_2, (((int)stk + 0) + 0x18));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 24))) * (*(float *)((v0_7 + 0x0))));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 32))) * ((((struct o8_float *)(v0_7))->v)));
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    L_C061864:;
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)((v0_4 + 0x4)));
    goto L_C0619F6;
    L_C061812:;
    FUN_0c060074(v0_3, v0_2, (((int)stk + 0) + 0x18));
    *(float *)(((int)stk + 12)) = (((*(float *)(((int)stk + 24))) * (*(float *)((v0_7 + 0x0)))) / (1.0f + 1.0f));
    *(float *)(((int)stk + 20)) = (((*(float *)(((int)stk + 32))) * ((((struct o8_float *)(v0_7))->v))) / (1.0f + 1.0f));
    *(float *)(((int)stk + 0)) = (-(*(float *)(((int)stk + 12))));
    *(float *)(((int)stk + 8)) = (-(*(float *)(((int)stk + 20))));
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    goto L_C061864;
    L_C061878:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C061892;
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o4_float *)(v0_7))->v)));
    goto L_C0619AC;
    L_C061892:;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((((struct o4_float *)(v0_7))->v)));
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    FUN_0c061222(v0_0, v0_1);
    (((struct o135_uchar *)(v0_1))->v) = (*(signed char *)((v0_5 + 0x4)));
    FUN_0c06130a(v0_1, v0_4, v0_3, v0_2);
    goto L_C0619F6;
    L_C061744:;
    w0_0 = (w0_3);
    goto L_C061746;
    L_C061708:;
    w0_0 = (w0_2);
    goto L_C06170A;
    L_C0616E0:;
    w0_0 = (w0_0);
    goto L_C0616E2;
}

int FUN_0c061a10(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register int t1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u10;
    register float t11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    float t16;
    register int t98;
    register int t17;
    register int t44;
    register int t56;
    register int t59;
    register float u62;
    register float u65;
    int t42;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    t1 = ((int (*)(void))(FUN_0c187798))();
    u2 = (((struct oC_float *)((a7 + 0x8)))->v);
    u3 = (((struct oC_float *)((a6 + 0x8)))->v);
    *(float *)(((int)stk + 0)) = (u3 + u2);
    u4 = (((struct o8_float *)((a6 + 0x8)))->v);
    u5 = (((struct o8_float *)((a7 + 0x8)))->v);
    u6 = (((struct o8_float *)(a7))->v);
    u7 = (((struct o8_float *)(a6))->v);
    u10 = ((u4 - u5) * (u4 - u5));
    u10 = u10 + ((u7 - u6)) * ((u7 - u6));
    t11 = math_signed_sqrt(u10);
    u12 = (((struct o4_float *)((a7 + 0x8)))->v);
    u13 = (((struct o10_float *)((a7 + 0x8)))->v);
    u14 = (((struct o4_float *)((a6 + 0x8)))->v);
    *(float *)(((int)stk + 4)) = u14;
    u15 = (((struct oC_float *)((a6 + 0x8)))->v);
    t16 = math_interval_overlap((u14 + u15), (u14 - u15), (u12 + u13), (u12 - u13));
    t98 = 0x0;
    if (!(((u3 + u2) - t11) > 0.0f)) {
    } else {
        t98 = 0x0;
        if (!(t16 > 0.0f)) {
        } else {
            t17 = FUN_0c061284(a4, a5);
            if (t17 != 0) {
                (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                t98 = 0x2;
            } else {
                if ((t16 > 9.0f) && (t16 > ((u3 + u2) - t11))) {
                    FUN_0c06151a(a4, a5, a6, a7, ((u3 + u2) - t11));
                } else {
                    if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a7 + 0x8)))->v))) {
                        if (((*(signed char *)((a5 + 0x0))) == 0) && (t42 = *(signed char *)((a4 + 0x126)), t42 == 0)) {
                            FUN_0c06151a(a4, a5, a6, a7, ((u3 + u2) - t11));
                        } else {
                            t44 = FUN_0c0612cc(a4, a5);
                            if (t44 != 0) {
                                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - t16);
                                FUN_0c060c80(a5, (((int)stk + 4) + 0x4), a7);
                            } else {
                                *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + t16);
                                FUN_0c060c80(a4, (((int)stk + 4) + 0x10), a6);
                                FUN_0c061222(a5, a4);
                                (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                                FUN_0c061416(a4, a6, (a6 + 0x8), (a7 + 0x8));
                            }
                        }
                    } else {
                        FUN_0c060028((a7 + 0x8), (a6 + 0x8), (((int)stk + 4) + 0x1C));
                        t56 = FUN_0c0612cc(a5, a4);
                        if (t56 != 0) {
                            *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) - t16);
                            FUN_0c060c80(a4, (((int)stk + 4) + 0x10), a6);
                        } else {
                            t59 = FUN_0c0612cc(a4, a5);
                            if (t59 != 0) {
                                u62 = ((*(float *)(((int)stk + 32))) * ((u3 + u2) - t11));
                                u62 = -u62;
                                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u62);
                                u65 = ((*(float *)(((int)stk + 40))) * ((u3 + u2) - t11));
                                u65 = -u65;
                                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u65);
                            } else {
                                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + ((((*(float *)(((int)stk + 32))) * ((u3 + u2) - t11)) / (1.0f + 1.0f))));
                                *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + ((((*(float *)(((int)stk + 40))) * ((u3 + u2) - t11)) / (1.0f + 1.0f))));
                                *(float *)(((int)stk + 8)) = (-(*(float *)(((int)stk + 20))));
                                *(float *)(((int)stk + 16)) = (-(*(float *)(((int)stk + 28))));
                                FUN_0c060c80(a4, (((int)stk + 4) + 0x10), a6);
                            }
                            FUN_0c060c80(a5, (((int)stk + 4) + 0x4), a7);
                            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                        }
                    }
                }
                t98 = 0x1;
            }
        }
    }
    return t98;
}

int FUN_0c061c54(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R1;
    register int R2;
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
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_0 = a4;
    v0_1 = a5;
    v0_9 = a6;
    v0_6 = a7;
    v0_2 = ((int (*)(int, int, int))(FUN_0c187798))(v0_0, v0_1, v0_9);
    v0_2 = ((int (*)(void))(FUN_0c187798))();
    w0_4 = (((struct o8_float *)(v0_9))->v);
    w0_5 = (((struct o8_float *)(v0_6))->v);
    v0_8 = (0xC);
    v0_0 = (v0_0);
    v0_1 = (v0_1);
    v0_2 = ((v0_9 + 0x8));
    v0_3 = ((v0_6 + 0x8));
    v0_7 = ((((int)stk + 0) + 0x24));
    v0_4 = (v0_6);
    v0_5 = (v0_9);
    w0_6 = (0.0f);
    w0_1 = ((((((struct oC_float *)((v0_9 + 0x8)))->v)) + ((((struct oC_float *)((v0_6 + 0x8)))->v))));
    w0_0 = ((w0_4 - w0_5));
    w0_2 = (w0_5);
    w0_3 = (w0_4);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C061CAE;
    w0_0 = (((-w0_3) + w0_2));
    L_C061CB0:;
    *(float *)((v0_7 + 0x0)) = (w0_1 - w0_0);
    w0_4 = (((struct o8_float *)(v0_2))->v);
    w0_5 = (((struct o8_float *)(v0_3))->v);
    w0_0 = (((((struct o14_float *)(v0_2))->v)) + (*(float *)((v0_3 + v0_8))));
    v0_8 = (0x8);
    w0_1 = w0_0;
    w0_0 = (w0_4);
    w0_2 = ((w0_4 - w0_5));
    w0_3 = (w0_5);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C061CD6;
    w0_6 = ((-w0_0));
    w0_0 = (((-w0_0) + w0_3));
    L_C061CD8:;
    *(float *)((v0_7 + v0_8)) = (w0_1 - w0_0);
    w0_4 = (((struct o4_float *)(v0_2))->v);
    w0_5 = (((struct o4_float *)(v0_3))->v);
    v0_8 = (0x4);
    w0_1 = ((((((struct o10_float *)(v0_2))->v)) + ((((struct oC_float *)(v0_3))->v))));
    w0_0 = (w0_4);
    w0_2 = (w0_5);
    w0_3 = ((w0_4 - w0_5));
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C061D00;
    w0_6 = ((-w0_0));
    w0_0 = (((-w0_0) + w0_2));
    L_C061D02:;
    *(float *)((v0_7 + v0_8)) = (w0_1 - w0_0);
    w0_0 = (0.0f);
    if (!(((*(float *)((v0_7 + 0x0))) > 0.0f))) goto L_C061FDE;
    if ((((((struct o8_float *)(v0_7))->v)) > w0_0)) goto L_C061D1E;
    goto L_C061FDE;
    L_C061FDE:;
    v0_8 = (0x0);
    L_C061FE0:;
    return v0_8;
    L_C061D1E:;
    if ((!(0.0f > ((((struct o4_float *)(v0_7))->v))))) goto L_C061D2C;
    goto L_C061FDE;
    L_C061D2C:;
    v0_8 = (FUN_0c061284(v0_0, v0_1)) == 0;
    if (v0_8) goto L_C061D58;
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)((v0_4 + 0x4)));
    (((struct o135_uchar *)(v0_1))->v) = (*(signed char *)((v0_5 + 0x4)));
    v0_8 = (0x2);
    goto L_C061FE0;
    L_C061D58:;
    w0_0 = (((struct o4_float *)(v0_7))->v);
    w0_1 = (w0_0);
    if ((!(w0_0 > 9.0f))) goto L_C061D7A;
    if (!((!(w0_1 > (*(float *)((v0_7 + 0x0))))))) goto L_C061E9C;
    if ((!(w0_1 > ((((struct o8_float *)(v0_7))->v))))) goto L_C061D7A;
    goto L_C061E9C;
    L_C061E9C:;
    w0_2 = *(float *)((v0_7 + 0x0));
    w0_0 = (w0_2);
    if ((w0_2 > w0_1)) goto L_C061F2C;
    if ((w0_0 > ((((struct o8_float *)(v0_7))->v)))) goto L_C061F2C;
    v0_6 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_6) goto L_C061EDA;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C061EC8;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C061ED0:;
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - (w0_0 / w0_1));
    L_C061FD0:;
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    L_C061FDA:;
    v0_8 = (0x1);
    goto L_C061FE0;
    L_C061EC8:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C061ED0;
    L_C061EDA:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C061F04;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C061EF4;
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C061EF8:;
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + w0_0);
    L_C061F8A:;
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    goto L_C061FDA;
    L_C061EF4:;
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C061EF8;
    L_C061F04:;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C061F18;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C061F20:;
    *(float *)(((int)stk + 12)) = (w0_0 / w0_1);
    *(float *)(((int)stk + 0)) = (-(w0_0 / w0_1));
    L_C061FC4:;
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    goto L_C061FD0;
    L_C061F18:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C061F20;
    L_C061F2C:;
    v0_6 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_6) goto L_C061F60;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C061F48;
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C061F4C:;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - w0_0);
    goto L_C061FD0;
    L_C061F48:;
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C061F4C;
    L_C061F60:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C061F9A;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C061F7C;
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C061F80:;
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + w0_0);
    goto L_C061F8A;
    L_C061F7C:;
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C061F80;
    L_C061F9A:;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C061FB0;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C061FB8:;
    *(float *)(((int)stk + 20)) = (w0_0 / w0_1);
    *(float *)(((int)stk + 8)) = (-(w0_0 / w0_1));
    goto L_C061FC4;
    L_C061FB0:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C061FB8;
    L_C061D7A:;
    if ((!(((((struct o4_float *)(v0_2))->v)) > ((((struct o4_float *)(v0_3))->v))))) goto L_C061E3E;
    v0_8 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_8) goto L_C061D9E;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o4_float *)(v0_7))->v)));
    goto L_C061FD0;
    L_C061D9E:;
    v0_8 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_8) goto L_C061DDE;
    FUN_0c060074(v0_3, v0_2, (((int)stk + 0) + 0x18));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 24))) * (*(float *)((v0_7 + 0x0))));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 32))) * ((((struct o8_float *)(v0_7))->v)));
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    L_C061E34:;
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)((v0_4 + 0x4)));
    goto L_C061FDA;
    L_C061DDE:;
    FUN_0c060074(v0_3, v0_2, (((int)stk + 0) + 0x18));
    *(float *)(((int)stk + 12)) = (((*(float *)(((int)stk + 24))) * (*(float *)((v0_7 + 0x0)))) / (1.0f + 1.0f));
    *(float *)(((int)stk + 20)) = (((*(float *)(((int)stk + 32))) * ((((struct o8_float *)(v0_7))->v))) / (1.0f + 1.0f));
    *(float *)(((int)stk + 0)) = (-(*(float *)(((int)stk + 12))));
    *(float *)(((int)stk + 8)) = (-(*(float *)(((int)stk + 20))));
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    goto L_C061E34;
    L_C061E3E:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C061E68;
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o4_float *)(v0_7))->v)));
    goto L_C061F8A;
    L_C061E68:;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((((struct o4_float *)(v0_7))->v)));
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    FUN_0c061222(v0_0, v0_1);
    (((struct o135_uchar *)(v0_1))->v) = (*(signed char *)((v0_5 + 0x4)));
    FUN_0c06130a(v0_1, v0_4, v0_3, v0_2);
    goto L_C061FDA;
    L_C061D00:;
    w0_0 = (w0_3);
    goto L_C061D02;
    L_C061CD6:;
    w0_0 = (w0_2);
    goto L_C061CD8;
    L_C061CAE:;
    w0_0 = (w0_0);
    goto L_C061CB0;
}

int FUN_0c061ff4(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u13;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register float u20;
    register int t184;
    register int t28;
    register float u44;
    register float u57;
    register int t59;
    register int t69;
    register float u87;
    register int t94;
    register int t105;
    register float u123;
    register int t134;
    register int t145;
    register float u45;
    register float u46;
    float u58;
    register float u66;
    register float u78;
    register float u85;
    register float u101;
    register float u114;
    register float u121;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    t1 = ((int (*)(void))(FUN_0c187798))();
    u2 = (((struct o8_float *)(a6))->v);
    u3 = (((struct o8_float *)(a7))->v);
    u4 = (((struct oC_float *)((a7 + 0x8)))->v);
    u5 = (((struct oC_float *)((a6 + 0x8)))->v);
    u6 = (u2 - u3);
    if (0.0f > (u2 - u3)) {
        u6 = ((-u2) + u3);
    }
    (((struct o18_float *)(((int)stk + 0)))->v) = ((u5 + u4) - u6);
    u8 = (((struct o10_float *)((a6 + 0x8)))->v);
    u9 = (((struct o10_float *)((a7 + 0x8)))->v);
    u10 = (((struct o4_float *)((a6 + 0x8)))->v);
    u11 = (((struct o4_float *)((a7 + 0x8)))->v);
    u13 = (u10 - u11);
    if (0.0f > (u10 - u11)) {
        u13 = ((-u10) + u11);
    }
    (((struct o4_float *)((((int)stk + 0) + 0x18)))->v) = ((u8 + u9) - u13);
    u15 = (((struct o14_float *)((a6 + 0x8)))->v);
    u16 = (((struct o14_float *)((a7 + 0x8)))->v);
    u17 = (((struct o8_float *)((a6 + 0x8)))->v);
    u18 = (((struct o8_float *)((a7 + 0x8)))->v);
    u20 = (u17 - u18);
    if (0.0f > (u17 - u18)) {
        u20 = ((-u17) + u18);
    }
    (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = ((u15 + u16) - u20);
    t184 = 0x0;
    if (!(((((struct o18_float *)(((int)stk + 0)))->v)) > 0.0f)) {
    } else {
        t184 = 0x0;
        if (!(((((struct o8_float *)((((int)stk + 0) + 0x18)))->v)) > 0.0f)) {
        } else {
            t184 = 0x0;
            if (0.0f > ((((struct o4_float *)((((int)stk + 0) + 0x18)))->v))) {
            } else {
                t28 = FUN_0c061284(a4, a5);
                if (t28 != 0) {
                    (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                    t184 = 0x2;
                } else {
                    u44 = (((struct o4_float *)((((int)stk + 0) + 0x18)))->v);
                    if ((u44 > 9.0f) && ((u45 = (((struct o18_float *)(((int)stk + 0)))->v), u44 > u45) || (u46 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v), u44 > u46))) {
                        u57 = (((struct o18_float *)(((int)stk + 0)))->v);
                        if (!(u57 > u44) && (u58 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v), !(u57 > u58))) {
                            t59 = FUN_0c0612cc(a4, a5);
                            if (t59 != 0) {
                                if (((((struct o8_float *)(a6))->v)) > ((((struct o8_float *)(a7))->v))) {
                                    u66 = (-(*(float *)(((int)stk + 24))));
                                } else {
                                    u66 = (*(float *)(((int)stk + 24)));
                                }
                                *(float *)(((int)stk + 0)) = u66;
                                FUN_0c060c80(a5, ((int)stk + 0), a7);
                            } else {
                                t69 = FUN_0c0612cc(a5, a4);
                                if (t69 != 0) {
                                    if (!(((((struct o8_float *)(a6))->v)) > ((((struct o8_float *)(a7))->v)))) {
                                        u78 = (-(*(float *)(((int)stk + 24))));
                                    } else {
                                        u78 = (*(float *)(((int)stk + 24)));
                                    }
                                    *(float *)(((int)stk + 12)) = u78;
                                    FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                } else {
                                    if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                                        u85 = (-(*(float *)(((int)stk + 24))));
                                    } else {
                                        u85 = (*(float *)(((int)stk + 24)));
                                    }
                                    *(float *)(((int)stk + 12)) = (u85 / (1.0f + 1.0f));
                                    u87 = (u85 / (1.0f + 1.0f));
                                    u87 = -u87;
                                    *(float *)(((int)stk + 0)) = u87;
                                    FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                    FUN_0c060c80(a5, ((int)stk + 0), a7);
                                }
                            }
                        } else {
                            t94 = FUN_0c0612cc(a4, a5);
                            if (t94 != 0) {
                                if (((((struct o8_float *)((a6 + 0x8)))->v)) > ((((struct o8_float *)((a7 + 0x8)))->v))) {
                                    u101 = (-(*(float *)(((int)stk + 32))));
                                } else {
                                    u101 = (*(float *)(((int)stk + 32)));
                                }
                                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u101);
                                FUN_0c060c80(a5, ((int)stk + 0), a7);
                            } else {
                                t105 = FUN_0c0612cc(a5, a4);
                                if (t105 != 0) {
                                    if (!(((((struct o8_float *)((a6 + 0x8)))->v)) > ((((struct o8_float *)((a7 + 0x8)))->v)))) {
                                        u114 = (-(*(float *)(((int)stk + 32))));
                                    } else {
                                        u114 = (*(float *)(((int)stk + 32)));
                                    }
                                    *(float *)(((int)stk + 20)) = u114;
                                    FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                } else {
                                    if (((((struct o8_float *)((a7 + 0x8)))->v)) > ((((struct o8_float *)((a6 + 0x8)))->v))) {
                                        u121 = (-(*(float *)(((int)stk + 32))));
                                    } else {
                                        u121 = (*(float *)(((int)stk + 32)));
                                    }
                                    *(float *)(((int)stk + 20)) = (u121 / (1.0f + 1.0f));
                                    u123 = (u121 / (1.0f + 1.0f));
                                    u123 = -u123;
                                    *(float *)(((int)stk + 8)) = u123;
                                    FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                    FUN_0c060c80(a5, ((int)stk + 0), a7);
                                }
                            }
                        }
                    } else {
                        if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a7 + 0x8)))->v))) {
                            t134 = FUN_0c0612cc(a4, a5);
                            if (t134 != 0) {
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
                            t145 = FUN_0c0612cc(a5, a4);
                            if (t145 != 0) {
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
                    t184 = 0x1;
                }
            }
        }
    }
    return t184;
}
