/* game/hit: functions 0C062668-0C0628C4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c060028(int, int, int);
float math_interval_overlap(float, float, float, float);
int FUN_0c060c80(int, int, int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c061416(int, int, int, int);
int FUN_0c06151a(int, int, int, int, float);
float math_signed_sqrt(float);
int FUN_0c187798(int);
int FUN_0c062668(int a4, int a5, int a6, int a7);

int FUN_0c062668(int a4, int a5, int a6, int a7)
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
    u2 = (((struct oC_float *)((a6 + 0x8)))->v);
    u3 = (((struct oC_float *)((a7 + 0x8)))->v);
    *(float *)(((int)stk + 0)) = (u3 + u2);
    u4 = (((struct o8_float *)((a7 + 0x8)))->v);
    u5 = (((struct o8_float *)((a6 + 0x8)))->v);
    u6 = (((struct o8_float *)(a6))->v);
    u7 = (((struct o8_float *)(a7))->v);
    u10 = ((u4 - u5) * (u4 - u5));
    u10 = u10 + ((u7 - u6)) * ((u7 - u6));
    t11 = math_signed_sqrt(u10);
    u12 = (((struct o4_float *)((a6 + 0x8)))->v);
    u13 = (((struct o10_float *)((a6 + 0x8)))->v);
    u14 = (((struct o4_float *)((a7 + 0x8)))->v);
    *(float *)(((int)stk + 4)) = u14;
    u15 = (((struct oC_float *)((a7 + 0x8)))->v);
    t16 = math_interval_overlap((u14 + u15), (u14 - u15), (u12 + u13), (u12 - u13));
    t98 = 0x0;
    if (!(((u3 + u2) - t11) > 0.0f)) {
    } else {
        t98 = 0x0;
        if (!(t16 > 0.0f)) {
        } else {
            t17 = FUN_0c061284(a5, a4);
            if (t17 != 0) {
                (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                t98 = 0x2;
            } else {
                if ((t16 > 9.0f) && (t16 > ((u3 + u2) - t11))) {
                    FUN_0c06151a(a5, a4, a7, a6, ((u3 + u2) - t11));
                } else {
                    if (((((struct o4_float *)((a7 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                        if (((*(signed char *)((a4 + 0x0))) == 0) && (t42 = *(signed char *)((a5 + 0x126)), t42 == 0)) {
                            FUN_0c06151a(a5, a4, a7, a6, ((u3 + u2) - t11));
                        } else {
                            t44 = FUN_0c0612cc(a5, a4);
                            if (t44 != 0) {
                                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - t16);
                                FUN_0c060c80(a4, (((int)stk + 4) + 0x4), a6);
                            } else {
                                *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + t16);
                                FUN_0c060c80(a5, (((int)stk + 4) + 0x10), a7);
                                FUN_0c061222(a4, a5);
                                (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                                FUN_0c061416(a5, a7, (a7 + 0x8), (a6 + 0x8));
                            }
                        }
                    } else {
                        FUN_0c060028((a6 + 0x8), (a7 + 0x8), (((int)stk + 4) + 0x1C));
                        t56 = FUN_0c0612cc(a4, a5);
                        if (t56 != 0) {
                            *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) - t16);
                            FUN_0c060c80(a5, (((int)stk + 4) + 0x10), a7);
                        } else {
                            t59 = FUN_0c0612cc(a5, a4);
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
                                FUN_0c060c80(a5, (((int)stk + 4) + 0x10), a7);
                            }
                            FUN_0c060c80(a4, (((int)stk + 4) + 0x4), a6);
                            (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                        }
                    }
                }
                t98 = 0x1;
            }
        }
    }
    return t98;
}
