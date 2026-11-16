/* Straight-line functions with calls and guards (batch gen_jo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o375D_uchar { char p[0x375D]; unsigned char v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c0600c0(int, float, float, float, float);
int FUN_0c060c80(int, int, int);
int FUN_0c0612ee(int);
int FUN_0c061416(int, int, int, int);
int FUN_0c07c5dc(int, int, int);
int FUN_0c07e868(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c160f66(int, int);
int FUN_0c187798(int, int, int);
float math_interval_overlap(float, float, float, float);
float math_signed_sqrt(float);
int FUN_0c063650(int a4, int a5, int a6);
int FUN_0c06abf8(int a4, int a5, int a6, int a7);

int FUN_0c063650(int a4, int a5, int a6)
{
    int stk[8];
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u9;
    register float t10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    float t15;
    register int t60;
    register int t16;
    register float u33;
    register float u36;
    register float u40;

    FUN_0c187798(a4, a5, a6);
    u1 = (((struct oC_float *)((a6 + 0x8)))->v);
    u2 = (((struct oC_float *)((a4 + 0x8)))->v);
    *(float *)(((int)stk + 0)) = (u2 + u1);
    u3 = (((struct o8_float *)((a4 + 0x8)))->v);
    u4 = (((struct o8_float *)((a6 + 0x8)))->v);
    u5 = (((struct o8_float *)(a6))->v);
    u6 = (((struct o8_float *)(a4))->v);
    u9 = ((u3 - u4) * (u3 - u4));
    u9 = u9 + ((u6 - u5)) * ((u6 - u5));
    t10 = math_signed_sqrt(u9);
    u11 = (((struct o4_float *)((a6 + 0x8)))->v);
    *(float *)(((int)stk + 4)) = u11;
    u12 = (((struct o10_float *)((a6 + 0x8)))->v);
    u13 = (((struct o4_float *)((a4 + 0x8)))->v);
    u14 = (((struct o10_float *)((a4 + 0x8)))->v);
    t15 = math_interval_overlap((u13 + u14), (u13 - u14), (u11 + u12), (u11 - u12));
    t60 = 0x0;
    if ((((u2 + u1) - t10) > 0.0f) && (t15 > 0.0f)) {
        t16 = FUN_0c0612ee(a5);
        if (t16 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
            t60 = 0x2;
        } else {
            if ((t15 > 9.0f) && (t15 > ((u2 + u1) - t10))) {
                FUN_0c0600c0((((int)stk + 4) + 0x10), ((((struct o8_float *)(a6))->v)), ((((struct o8_float *)((a6 + 0x8)))->v)), ((((struct o8_float *)(a4))->v)), ((((struct o8_float *)((a4 + 0x8)))->v)));
                u33 = ((*(float *)(((int)stk + 20))) * ((u2 + u1) - t10));
                u33 = -u33;
                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u33);
                u36 = ((*(float *)(((int)stk + 28))) * ((u2 + u1) - t10));
                u36 = -u36;
                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u36);
                FUN_0c060c80(a5, (((int)stk + 4) + 0x4), a6);
            } else {
                u40 = t15;
                if (((((struct o4_float *)((a4 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                    u40 = (-t15);
                }
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + u40);
                FUN_0c060c80(a5, (((int)stk + 4) + 0x4), a6);
                if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a4 + 0x8)))->v))) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
                    FUN_0c061416(a5, a6, (a6 + 0x8), (a4 + 0x8));
                }
            }
            t60 = 0x1;
        }
    }
    return t60;
}

int FUN_0c06abf8(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t24;
    register int t43;
    register int t70;
    register int t29;
    register int t31;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t70 = 0x50;
                if (0.0f > ((((struct o50_float *)(a4))->v))) {
                    t2 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    *(unsigned int *)(((int)stk + 0)) = t2;
                    t70 = t2;
                    if (t2 != 0) {
                        (((struct o3756_uchar *)(a4))->v) = 0x3C;
                        (((struct o374A_uchar *)(a4))->v) = 0x3C;
                        (((struct o382E_ushort *)(a4))->v) = 0x0;
                        FUN_0c07e868(a4, 0x8, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t70 = 0x15;
                    }
                }
            } else {
                t70 = t0;
                if (t0 == 3) {
                } else {
                    t70 = t0;
                    if (t0 == 4) {
                        (((struct o382E_ushort *)(a4))->v) = 0x0;
                        (((struct o374A_uchar *)(a4))->v) = 0x3C;
                        (((struct o375D_uchar *)(a4))->v) = 0x1;
                        t70 = 0x375D;
                    }
                }
            }
        } else {
            (((struct o374A_uchar *)(a4))->v) = 0x3C;
            (((struct o3756_uchar *)(a4))->v) = 0x1;
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t24 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t24 - 1);
            t70 = (short)(t24 - 1);
            if ((int)(short)(t24 - 1) <= 0) {
                (((struct o3756_uchar *)(a4))->v) = 0x3C;
                if (((((struct o160_float *)(a4))->v)) != 0.0f) {
                    (((struct o3717_uchar *)(a4))->v) = 0x40;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t29 = 0x40;
                    t31 = 0x0;
                } else {
                    (((struct o3717_uchar *)(a4))->v) = 0xE;
                    (((struct o3718_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x372C)));
                    t29 = 0xE;
                    t31 = (*(signed char *)((a4 + 0x372C)));
                }
                t70 = (FUN_0c085cac(a4, t29, t31, a7));
            }
        }
    } else {
        (((struct o3756_uchar *)(a4))->v) = 0x1;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o382E_ushort *)(a4))->v) = 0x0;
        (((struct o374A_uchar *)(a4))->v) = 0x3C;
        (((struct o375D_uchar *)(a4))->v) = 0x1;
        t43 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t43 - 1);
        t70 = (short)(t43 - 1);
        if ((int)(short)(t43 - 1) > 0) {
        } else {
            if ((*(float *)0xC541098) > ((((struct o168_float *)(a4))->v))) {
                t70 = (FUN_0c085cac(a4, 0x16, 0x0, a7));
            } else {
                FUN_0c187798(0x1, a5, a6);
                (((struct o2C_float *)(a4))->v) = (((((struct o168_float *)(a4))->v)) + -1.0f);
                (((struct o375D_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                if ((int)(*(signed char *)((a4 + 0x374D))) < (int)0x3) {
                    FUN_0c07c5dc(a4, 0x3, 0x2);
                }
                FUN_0c160f66(a4, 0x1);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x31);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t70 = 0x15;
            }
        }
    }
    return t70;
}
