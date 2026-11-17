/* game/hit: functions 0C062E90-0C064D24, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o128_short { char p[0x128]; short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o404_uint { char p[0x404]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c05ffa4(int, int, int);
int FUN_0c05ffe2(int, int, int, int);
int FUN_0c0600c0(int, float, float, float, float);
float math_interval_overlap(float, float, float, float);
int FUN_0c060180(int, int, int);
int FUN_0c060428(int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c060e70(int, int);
int FUN_0c060ee6(int, int);
int FUN_0c0612ee(int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c061416(int, int, int, int);
int FUN_0c063ea0(int);
int FUN_0c02440e(int);
int FUN_0c0641ca(int, int);
int FUN_0c064cbc(int, int, int);
float math_signed_sqrt(float);
int FUN_0c181bb0(void);
int FUN_0c181c20(float);
int FUN_0c181c30(float);
int FUN_0c18778c(void);
int FUN_0c187798(int, int, int);
int FUN_0c187b60(int, int, int, int);
int FUN_0c062e90(int a4, int a5, int a6, int a7);
int FUN_0c062f0a(int a4, int a5, int a6);
int FUN_0c0630cc(int a4, int a5, int a6);
int FUN_0c063286(int a4, int a5, int a6);
int FUN_0c063448(int a4, int a5, int a6);
int FUN_0c063650(int a4, int a5, int a6);
int FUN_0c0637ce(int a4, int a5, int a6);
int FUN_0c063948(int a4, int a5, int a6);
int FUN_0c063b40(int a4, int a5, int a6);
int FUN_0c063ca4(int a4, int a5, int a6);
int FUN_0c063d5e(int a4, int a5, int a6, int a7);
int FUN_0c063da2(int a4, int a5, int a6, int a7);
int FUN_0c063f06(void);
int thunk_FUN_0c06494c(void);
int FUN_0c063f4a(int a4);
int FUN_0c0640fc(void);
int FUN_0c064116(void);
int FUN_0c064128(void);
int FUN_0c06420e(int a4, float f4, float f5);
int FUN_0c064262(int a4, float f4, float f5);
int FUN_0c064300(int a4, int a5, int a6, float f4);
int FUN_0c064372(int a4, int a5, int a6, float f4);
int FUN_0c06440e(int a4, int a5);
int FUN_0c0644f4(int a4, int a5);
int FUN_0c0645d0(int a4, int a5);
int FUN_0c064696(int a4, int a5);
int FUN_0c06475c(int a4, int a5, float f4);
int FUN_0c06483e(int a4, int a5);
int FUN_0c06485a(void);
int FUN_0c064892(int a4, int a5);
int FUN_0c06491e(void);
int FUN_0c06494c(void);
void FUN_0c064a2c(void);
int FUN_0c064a56(int a4, int a5, int a6);
int FUN_0c064af0(int a4, int a5);
int FUN_0c064b5a(int a4, int a5);
int FUN_0c064bd8(int a4, int a5);
int FUN_0c064c4a(int a4, int a5);

int FUN_0c062e90(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a6 + 0x1));
    t1 = ((int (*)(int, int, int, int))((*(int *)(((0xC25803C + (((t0 << 1) + t0) << 2)) + ((*(signed char *)((a7 + 0x1))) << 2))))))(a4, a5, a6, a7);
    if (t1 != 0) {
        FUN_0c064a56(a4, a5, a7);
        FUN_0c064a56(a5, a4, a6);
    }
    if ((*(signed char *)((a5 + 0x126))) != 2) {
        FUN_0c064cbc(a4, a5, a7);
    }
    t0 = *(signed char *)((a4 + 0x126));
    if (t0 != 2) {
        return FUN_0c064cbc(a5, a4, a6);
    }
    return t0;
}

int FUN_0c062f0a(int a4, int a5, int a6)
{
    int stk[6];
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u19;
    register int t147;
    register int t24;
    register float u63;
    register float u100;
    register float u22;
    float u23;
    register float u64;
    register float u65;
    float u101;
    register float u114;
    register float u120;
    register float u131;

    FUN_0c187798(a4, a5, a6);
    u1 = (((struct o8_float *)(a4))->v);
    u2 = (((struct o8_float *)(a6))->v);
    u3 = (((struct oC_float *)((a6 + 0x8)))->v);
    u4 = (((struct oC_float *)((a4 + 0x8)))->v);
    u5 = (u1 - u2);
    if (0.0f > (u1 - u2)) {
        u5 = ((-u1) + u2);
    }
    (((struct oC_float *)(((int)stk + 0)))->v) = ((u4 + u3) - u5);
    u7 = (((struct o10_float *)((a4 + 0x8)))->v);
    u8 = (((struct o10_float *)((a6 + 0x8)))->v);
    u9 = (((struct o4_float *)((a4 + 0x8)))->v);
    u10 = (((struct o4_float *)((a6 + 0x8)))->v);
    u12 = (u9 - u10);
    if (0.0f > (u9 - u10)) {
        u12 = ((-u9) + u10);
    }
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = ((u7 + u8) - u12);
    u14 = (((struct o14_float *)((a4 + 0x8)))->v);
    u15 = (((struct o14_float *)((a6 + 0x8)))->v);
    u16 = (((struct o8_float *)((a4 + 0x8)))->v);
    u17 = (((struct o8_float *)((a6 + 0x8)))->v);
    u19 = (u16 - u17);
    if (0.0f > (u16 - u17)) {
        u19 = ((-u16) + u17);
    }
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = ((u14 + u15) - u19);
    t147 = 0x0;
    if ((((((struct oC_float *)(((int)stk + 0)))->v)) > 0.0f) && ((u22 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u22 > 0.0f) && (u23 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v), u23 > 0.0f))) {
        t24 = FUN_0c0612ee(a5);
        if (t24 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
            t147 = 0x2;
        } else {
            u63 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v);
            if ((u63 > 9.0f) && ((u64 = (((struct oC_float *)(((int)stk + 0)))->v), u63 > u64) || (u65 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u63 > u65))) {
                u100 = (((struct oC_float *)(((int)stk + 0)))->v);
                if (!(u100 > u63) && (u101 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), !(u100 > u101))) {
                    if (((((struct o8_float *)(a4))->v)) > ((((struct o8_float *)(a6))->v))) {
                        u114 = (-(*(float *)(((int)stk + 12))));
                    } else {
                        u114 = (*(float *)(((int)stk + 12)));
                    }
                    *(float *)(((int)stk + 0)) = u114;
                } else {
                    if (((((struct o8_float *)((a4 + 0x8)))->v)) > ((((struct o8_float *)((a6 + 0x8)))->v))) {
                        u120 = (-(*(float *)(((int)stk + 20))));
                    } else {
                        u120 = (*(float *)(((int)stk + 20)));
                    }
                    *(float *)(((int)stk + 8)) = u120;
                }
                FUN_0c060c80(a5, ((int)stk + 0), a6);
            } else {
                if (((((struct o4_float *)((a4 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                    u131 = (-(*(float *)(((int)stk + 16))));
                } else {
                    u131 = (*(float *)(((int)stk + 16)));
                }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u131);
                FUN_0c060c80(a5, ((int)stk + 0), a6);
                if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a4 + 0x8)))->v))) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
                }
                FUN_0c06130a(a5, a6, (a6 + 0x8), (a4 + 0x8));
            }
            t147 = 0x1;
        }
    }
    return t147;
}

int FUN_0c0630cc(int a4, int a5, int a6)
{
    int stk[6];
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register int t150;
    register int t22;
    register float u61;
    register float u98;
    register float u20;
    float u21;
    register float u62;
    register float u63;
    float u99;
    register float u112;
    register float u118;
    register float u129;

    FUN_0c187798(a4, a5, a6);
    u1 = (((struct o8_float *)(a4))->v);
    u2 = (((struct o8_float *)(a6))->v);
    u3 = (((struct oC_float *)((a6 + 0x8)))->v);
    u4 = (((struct oC_float *)((a4 + 0x8)))->v);
    u5 = (u1 - u2);
    if (0.0f > (u1 - u2)) {
        u5 = ((-u1) + u2);
    }
    (((struct oC_float *)(((int)stk + 0)))->v) = ((u4 + u3) - u5);
    u7 = (((struct oC_float *)((a6 + 0x8)))->v);
    u8 = (((struct o14_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a4 + 0x8)))->v);
    u10 = (((struct o8_float *)((a6 + 0x8)))->v);
    u12 = (u9 - u10);
    if (0.0f > (u9 - u10)) {
        u12 = ((-u9) + u10);
    }
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = ((u8 + u7) - u12);
    u14 = (((struct o4_float *)((a6 + 0x8)))->v);
    u15 = (((struct o10_float *)((a6 + 0x8)))->v);
    u16 = (((struct o4_float *)((a4 + 0x8)))->v);
    u17 = (((struct o10_float *)((a4 + 0x8)))->v);
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = (math_interval_overlap((u16 + u17), (u16 - u17), (u14 + u15), (u14 - u15)));
    t150 = 0x0;
    if ((((((struct oC_float *)(((int)stk + 0)))->v)) > 0.0f) && ((u20 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u20 > 0.0f) && (u21 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v), u21 > 0.0f))) {
        t22 = FUN_0c0612ee(a5);
        if (t22 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
            t150 = 0x2;
        } else {
            u61 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v);
            if ((u61 > 9.0f) && ((u62 = (((struct oC_float *)(((int)stk + 0)))->v), u61 > u62) || (u63 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u61 > u63))) {
                u98 = (((struct oC_float *)(((int)stk + 0)))->v);
                if (!(u98 > u61) && (u99 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), !(u98 > u99))) {
                    if (((((struct o8_float *)(a4))->v)) > ((((struct o8_float *)(a6))->v))) {
                        u112 = (-(*(float *)(((int)stk + 12))));
                    } else {
                        u112 = (*(float *)(((int)stk + 12)));
                    }
                    *(float *)(((int)stk + 0)) = u112;
                } else {
                    if (((((struct o8_float *)((a4 + 0x8)))->v)) > ((((struct o8_float *)((a6 + 0x8)))->v))) {
                        u118 = (-(*(float *)(((int)stk + 20))));
                    } else {
                        u118 = (*(float *)(((int)stk + 20)));
                    }
                    *(float *)(((int)stk + 8)) = u118;
                }
                FUN_0c060c80(a5, ((int)stk + 0), a6);
            } else {
                if (((((struct o4_float *)((a4 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                    u129 = (-(*(float *)(((int)stk + 16))));
                } else {
                    u129 = (*(float *)(((int)stk + 16)));
                }
                *(float *)(((int)stk + 4)) = u129;
                FUN_0c060c80(a5, ((int)stk + 0), a6);
                if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a4 + 0x8)))->v))) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
                    FUN_0c06130a(a5, a6, (a6 + 0x8), (a4 + 0x8));
                }
            }
            t150 = 0x1;
        }
    }
    return t150;
}

int FUN_0c063286(int a4, int a5, int a6)
{
    int stk[6];
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u19;
    register int t152;
    register int t24;
    register float u63;
    register float u100;
    register float u22;
    float u23;
    register float u64;
    register float u65;
    float u101;
    register float u114;
    register float u120;
    register float u131;

    FUN_0c187798(a4, a5, a6);
    u1 = (((struct o8_float *)(a4))->v);
    u2 = (((struct o8_float *)(a6))->v);
    u3 = (((struct oC_float *)((a6 + 0x8)))->v);
    u4 = (((struct oC_float *)((a4 + 0x8)))->v);
    u5 = (u1 - u2);
    if (0.0f > (u1 - u2)) {
        u5 = ((-u1) + u2);
    }
    (((struct oC_float *)(((int)stk + 0)))->v) = ((u4 + u3) - u5);
    u7 = (((struct oC_float *)((a6 + 0x8)))->v);
    u8 = (((struct o14_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a4 + 0x8)))->v);
    u10 = (((struct o8_float *)((a6 + 0x8)))->v);
    u12 = (u9 - u10);
    if (0.0f > (u9 - u10)) {
        u12 = ((-u9) + u10);
    }
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = ((u8 + u7) - u12);
    u14 = (((struct oC_float *)((a6 + 0x8)))->v);
    u15 = (((struct o10_float *)((a4 + 0x8)))->v);
    u16 = (((struct o4_float *)((a4 + 0x8)))->v);
    u17 = (((struct o4_float *)((a6 + 0x8)))->v);
    u19 = (u16 - u17);
    if (0.0f > (u16 - u17)) {
        u19 = ((-u16) + u17);
    }
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = ((u15 + u14) - u19);
    t152 = 0x0;
    if ((((((struct oC_float *)(((int)stk + 0)))->v)) > 0.0f) && ((u22 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u22 > 0.0f) && (u23 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v), u23 > 0.0f))) {
        t24 = FUN_0c0612ee(a5);
        if (t24 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
            t152 = 0x2;
        } else {
            u63 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v);
            if ((u63 > 9.0f) && ((u64 = (((struct oC_float *)(((int)stk + 0)))->v), u63 > u64) || (u65 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u63 > u65))) {
                u100 = (((struct oC_float *)(((int)stk + 0)))->v);
                if (!(u100 > u63) && (u101 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), !(u100 > u101))) {
                    if (((((struct o8_float *)(a4))->v)) > ((((struct o8_float *)(a6))->v))) {
                        u114 = (-(*(float *)(((int)stk + 12))));
                    } else {
                        u114 = (*(float *)(((int)stk + 12)));
                    }
                    *(float *)(((int)stk + 0)) = u114;
                } else {
                    if (((((struct o8_float *)((a4 + 0x8)))->v)) > ((((struct o8_float *)((a6 + 0x8)))->v))) {
                        u120 = (-(*(float *)(((int)stk + 20))));
                    } else {
                        u120 = (*(float *)(((int)stk + 20)));
                    }
                    *(float *)(((int)stk + 8)) = u120;
                }
                FUN_0c060c80(a5, ((int)stk + 0), a6);
            } else {
                if (((((struct o4_float *)((a4 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                    u131 = (-(*(float *)(((int)stk + 16))));
                } else {
                    u131 = (*(float *)(((int)stk + 16)));
                }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u131);
                FUN_0c060c80(a5, ((int)stk + 0), a6);
                if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a4 + 0x8)))->v))) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
                    FUN_0c06130a(a5, a6, (a6 + 0x8), (a4 + 0x8));
                }
            }
            t152 = 0x1;
        }
    }
    return t152;
}

int FUN_0c063448(int a4, int a5, int a6)
{
    int stk[9];
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register int t151;
    register int t25;
    float u46;
    register float u65;
    register float u77;
    register float u81;
    register float u83;
    register float u92;
    register float u96;
    register float u47;
    register float u48;
    float u66;
    register float u110;

    FUN_0c187798(a4, a5, a6);
    u1 = (((struct o8_float *)(a4))->v);
    u2 = (((struct o8_float *)(a6))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (((struct oC_float *)((a6 + 0x8)))->v);
    u5 = (u1 - u2);
    if (0.0f > (u1 - u2)) {
        u5 = ((-u1) + u2);
    }
    (((struct o18_float *)(((int)stk + 0)))->v) = ((u4 + u3) - u5);
    u7 = (((struct oC_float *)((a4 + 0x8)))->v);
    u8 = (((struct o14_float *)((a6 + 0x8)))->v);
    u9 = (((struct o8_float *)((a4 + 0x8)))->v);
    u10 = (((struct o8_float *)((a6 + 0x8)))->v);
    u12 = (u9 - u10);
    if (0.0f > (u9 - u10)) {
        u12 = ((-u9) + u10);
    }
    (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = ((u8 + u7) - u12);
    u14 = (((struct o4_float *)((a4 + 0x8)))->v);
    u15 = (((struct o10_float *)((a4 + 0x8)))->v);
    u16 = (((struct o4_float *)((a6 + 0x8)))->v);
    u17 = (((struct o10_float *)((a6 + 0x8)))->v);
    (((struct o4_float *)((((int)stk + 0) + 0x18)))->v) = (math_interval_overlap((u16 + u17), (u16 - u17), (u14 + u15), (u14 - u15)));
    t151 = 0x0;
    if (!(((((struct o18_float *)(((int)stk + 0)))->v)) > 0.0f)) {
    } else {
        t151 = 0x0;
        if (!(((((struct o8_float *)((((int)stk + 0) + 0x18)))->v)) > 0.0f)) {
        } else {
            t151 = 0x0;
            if (!(((((struct o4_float *)((((int)stk + 0) + 0x18)))->v)) > 0.0f)) {
            } else {
                t25 = FUN_0c0612ee(a5);
                if (t25 != 0) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
                    t151 = 0x2;
                } else {
                    u46 = (((struct o4_float *)((((int)stk + 0) + 0x18)))->v);
                    if ((u46 > 9.0f) && ((u47 = (((struct o18_float *)(((int)stk + 0)))->v), u46 > u47) || (u48 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v), u46 > u48))) {
                        u65 = (((struct o18_float *)(((int)stk + 0)))->v);
                        if (!(u65 > u46) && (u66 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v), !(u65 > u66))) {
                            FUN_0c0600c0((((int)stk + 0) + 0xC), ((((struct o8_float *)(a4))->v)), ((((struct o8_float *)((a4 + 0x8)))->v)), ((((struct o8_float *)(a6))->v)), ((((struct o8_float *)((a6 + 0x8)))->v)));
                            u77 = (*(float *)(((int)stk + 0)));
                            u77 = u77 + ((((struct o18_float *)(((int)stk + 0)))->v)) * (*(float *)(((int)stk + 12)));
                            *(float *)(((int)stk + 0)) = u77;
                            u81 = (*(float *)(((int)stk + 8)));
                            u81 = u81 + ((((struct o18_float *)(((int)stk + 0)))->v)) * (*(float *)(((int)stk + 20)));
                            *(float *)(((int)stk + 8)) = u81;
                            FUN_0c060c80(a5, ((int)stk + 0), a6);
                        } else {
                            u83 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v);
                            if ((u65 > u83) && (u46 > u83)) {
                                FUN_0c0600c0((((int)stk + 0) + 0xC), ((((struct o8_float *)(a4))->v)), ((((struct o8_float *)((a4 + 0x8)))->v)), ((((struct o8_float *)(a6))->v)), ((((struct o8_float *)((a6 + 0x8)))->v)));
                                u92 = (*(float *)(((int)stk + 0)));
                                u92 = u92 + ((((struct o8_float *)((((int)stk + 0) + 0x18)))->v)) * (*(float *)(((int)stk + 12)));
                                *(float *)(((int)stk + 0)) = u92;
                                u96 = (*(float *)(((int)stk + 8)));
                                u96 = u96 + ((((struct o8_float *)((((int)stk + 0) + 0x18)))->v)) * (*(float *)(((int)stk + 20)));
                                *(float *)(((int)stk + 8)) = u96;
                                FUN_0c060c80(a5, ((int)stk + 0), a6);
                            }
                        }
                    } else {
                        if (((((struct o4_float *)((a4 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                            u110 = (-(*(float *)(((int)stk + 28))));
                        } else {
                            u110 = (*(float *)(((int)stk + 28)));
                        }
                        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u110);
                        FUN_0c060c80(a5, ((int)stk + 0), a6);
                        if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a4 + 0x8)))->v))) {
                            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
                            FUN_0c061416(a5, a6, (a6 + 0x8), (a4 + 0x8));
                        }
                    }
                    t151 = 0x1;
                }
            }
        }
    }
    return t151;
}

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

int FUN_0c0637ce(int a4, int a5, int a6)
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
    u11 = (((struct o4_float *)((a4 + 0x8)))->v);
    *(float *)(((int)stk + 4)) = u11;
    u12 = (((struct o10_float *)((a4 + 0x8)))->v);
    u13 = (((struct o4_float *)((a6 + 0x8)))->v);
    u14 = (((struct oC_float *)((a6 + 0x8)))->v);
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

int FUN_0c063948(int a4, int a5, int a6)
{
    int stk[11];
    register int t1;
    register int t2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u14;
    register float u16;
    register float u17;
    register float u18;
    register float u19;
    register float u21;
    register int t210;
    register int t29;
    register float u73;
    register float u114;
    register float u156;
    register float u157;
    register float u158;
    register float u162;
    register float u163;
    register float u164;
    register float u165;
    register float u169;
    register float u74;
    register float u75;
    float u115;
    register float u128;
    register float u134;
    register float u148;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    FUN_0c187798(a4, a5, a6);
    t1 = *(int *)(((int)stk + 4));
    t2 = *(int *)(((int)stk + 0));
    u3 = (((struct o8_float *)(t1))->v);
    u4 = (((struct o8_float *)(t2))->v);
    u5 = (((struct oC_float *)((t2 + 0x8)))->v);
    u6 = (((struct oC_float *)((t1 + 0x8)))->v);
    u7 = (u3 - u4);
    if (0.0f > (u3 - u4)) {
        u7 = ((-u3) + u4);
    }
    (((struct o20_float *)(((int)stk + 0)))->v) = ((u6 + u5) - u7);
    u9 = (((struct oC_float *)((t2 + 0x8)))->v);
    u10 = (((struct o14_float *)((t1 + 0x8)))->v);
    u11 = (((struct o8_float *)((t1 + 0x8)))->v);
    u12 = (((struct o8_float *)((t2 + 0x8)))->v);
    u14 = (u11 - u12);
    if (0.0f > (u11 - u12)) {
        u14 = ((-u11) + u12);
    }
    (((struct o8_float *)((((int)stk + 0) + 0x20)))->v) = ((u10 + u9) - u14);
    u16 = (((struct oC_float *)((t2 + 0x8)))->v);
    u17 = (((struct o10_float *)((t1 + 0x8)))->v);
    u18 = (((struct o4_float *)((t1 + 0x8)))->v);
    u19 = (((struct o4_float *)((t2 + 0x8)))->v);
    u21 = (u18 - u19);
    if (0.0f > (u18 - u19)) {
        u21 = ((-u18) + u19);
    }
    (((struct o4_float *)((((int)stk + 0) + 0x20)))->v) = ((u17 + u16) - u21);
    t210 = 0x0;
    if (!(((((struct o20_float *)(((int)stk + 0)))->v)) > 0.0f)) {
    } else {
        t210 = 0x0;
        if (!(((((struct o8_float *)((((int)stk + 0) + 0x20)))->v)) > 0.0f)) {
        } else {
            t210 = 0x0;
            if (!(((((struct o4_float *)((((int)stk + 0) + 0x20)))->v)) > 0.0f)) {
            } else {
                t29 = FUN_0c0612ee(a5);
                if (t29 != 0) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x4)));
                    t210 = 0x2;
                } else {
                    u73 = (((struct o4_float *)((((int)stk + 0) + 0x20)))->v);
                    if ((u73 > 9.0f) && ((u74 = (((struct o20_float *)(((int)stk + 0)))->v), u73 > u74) || (u75 = (((struct o8_float *)((((int)stk + 0) + 0x20)))->v), u73 > u75))) {
                        u114 = (((struct o20_float *)(((int)stk + 0)))->v);
                        if (!(u114 > u73) && (u115 = (((struct o8_float *)((((int)stk + 0) + 0x20)))->v), !(u114 > u115))) {
                            if (((((struct o8_float *)(t2))->v)) > ((((struct o8_float *)(t1))->v))) {
                                u128 = (-(*(float *)(((int)stk + 32))));
                            } else {
                                u128 = (*(float *)(((int)stk + 32)));
                            }
                            *(float *)(((int)stk + 8)) = u128;
                        } else {
                            if (((((struct o8_float *)((t2 + 0x8)))->v)) > ((((struct o8_float *)((t1 + 0x8)))->v))) {
                                u134 = (-(*(float *)(((int)stk + 40))));
                            } else {
                                u134 = (*(float *)(((int)stk + 40)));
                            }
                            *(float *)(((int)stk + 16)) = u134;
                        }
                    } else {
                        if (((((struct o4_float *)((t2 + 0x8)))->v)) > ((((struct o4_float *)((t1 + 0x8)))->v))) {
                            if (((((struct o4_float *)((t2 + 0x8)))->v)) > ((((struct o4_float *)((t1 + 0x8)))->v))) {
                                u148 = (-(*(float *)(((int)stk + 36))));
                            } else {
                                u148 = (*(float *)(((int)stk + 36)));
                            }
                            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + u148);
                        } else {
                            FUN_0c0600c0((((int)stk + 0) + 0x14), ((((struct o8_float *)(t2))->v)), ((((struct o8_float *)((t2 + 0x8)))->v)), ((((struct o8_float *)(t1))->v)), ((((struct o8_float *)((t1 + 0x8)))->v)));
                            u156 = (((struct o20_float *)(((int)stk + 0)))->v);
                            u157 = (((struct o8_float *)((((int)stk + 0) + 0x20)))->v);
                            u158 = u157;
                            if (u157 > u156) {
                                u158 = u156;
                            }
                            u162 = (*(float *)(((int)stk + 8)));
                            u162 = u162 + u158 * (*(float *)(((int)stk + 20)));
                            *(float *)(((int)stk + 8)) = u162;
                            u163 = (((struct o8_float *)((((int)stk + 0) + 0x20)))->v);
                            u164 = (((struct o20_float *)(((int)stk + 0)))->v);
                            u165 = u163;
                            if (u163 > u164) {
                                u165 = u164;
                            }
                            u169 = (*(float *)(((int)stk + 16)));
                            u169 = u169 + u165 * (*(float *)(((int)stk + 28)));
                            *(float *)(((int)stk + 16)) = u169;
                        }
                    }
                    FUN_0c060c80(a5, (((int)stk + 0) + 0x8), (*(int *)(((int)stk + 4))));
                    t210 = 0x1;
                }
            }
        }
    }
    return t210;
}

int FUN_0c063b40(int a4, int a5, int a6)
{
    int stk[9];
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
    register int t49;
    register int t17;
    register float u33;
    register float u36;
    register float u40;
    register float u25;
    register float u26;

    *(unsigned int *)(((int)stk + 4)) = a4;
    FUN_0c187798(a4, a5, a6);
    t1 = *(int *)(((int)stk + 4));
    u2 = (((struct oC_float *)((a6 + 0x8)))->v);
    u3 = (((struct oC_float *)((t1 + 0x8)))->v);
    *(float *)(((int)stk + 0)) = (u3 + u2);
    u4 = (((struct o8_float *)((t1 + 0x8)))->v);
    u5 = (((struct o8_float *)((a6 + 0x8)))->v);
    u6 = (((struct o8_float *)(a6))->v);
    u7 = (((struct o8_float *)(t1))->v);
    u10 = ((u4 - u5) * (u4 - u5));
    u10 = u10 + ((u7 - u6)) * ((u7 - u6));
    t11 = math_signed_sqrt(u10);
    u12 = (((struct o4_float *)((a6 + 0x8)))->v);
    *(float *)(((int)stk + 8)) = u12;
    u13 = (((struct o10_float *)((a6 + 0x8)))->v);
    u14 = (((struct o4_float *)((t1 + 0x8)))->v);
    u15 = (((struct oC_float *)((t1 + 0x8)))->v);
    t16 = math_interval_overlap((u14 + u15), (u14 - u15), (u12 + u13), (u12 - u13));
    t49 = 0x0;
    if ((((u3 + u2) - t11) > 0.0f) && (t16 > 0.0f)) {
        t17 = FUN_0c0612ee(a5);
        if (t17 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x4)));
            t49 = 0x2;
        } else {
            FUN_0c0600c0((((int)stk + 4) + 0x14), ((((struct o8_float *)(t1))->v)), ((((struct o8_float *)((t1 + 0x8)))->v)), ((((struct o8_float *)(a6))->v)), ((((struct o8_float *)((a6 + 0x8)))->v)));
            if (((t16 > 9.0f) && (t16 > ((u3 + u2) - t11))) || (u25 = (((struct o4_float *)((t1 + 0x8)))->v), u26 = (((struct o4_float *)((a6 + 0x8)))->v), !(u25 > u26))) {
                u33 = ((*(float *)(((int)stk + 24))) * ((u3 + u2) - t11));
                u33 = -u33;
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + u33);
                u36 = ((*(float *)(((int)stk + 32))) * ((u3 + u2) - t11));
                u36 = -u36;
                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + u36);
                FUN_0c060c80(a5, (((int)stk + 4) + 0x8), a6);
            } else {
                u40 = t16;
                if (((((struct o4_float *)((t1 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                    u40 = (-t16);
                }
                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u40);
                FUN_0c060c80(a5, (((int)stk + 4) + 0x8), a6);
            }
            t49 = 0x1;
        }
    }
    return t49;
}

int FUN_0c063ca4(int a4, int a5, int a6)
{
    int stk[8];
    register int t0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u9;
    register float t10;
    register int t29;
    register int t11;
    register float u20;
    register float u22;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = *(int *)(((int)stk + 4));
    u1 = (((struct oC_float *)((a6 + 0x8)))->v);
    u2 = (((struct oC_float *)((t0 + 0x8)))->v);
    u3 = (((struct o8_float *)((a6 + 0x8)))->v);
    u4 = (((struct o8_float *)((t0 + 0x8)))->v);
    u5 = (((struct o8_float *)(t0))->v);
    u6 = (((struct o8_float *)(a6))->v);
    u9 = ((u4 - u3) * (u4 - u3));
    u9 = u9 + ((u5 - u6)) * ((u5 - u6));
    t10 = math_signed_sqrt(u9);
    t29 = 0x0;
    if (((u2 + u1) - t10) > 0.0f) {
        t11 = FUN_0c0612ee(a5);
        if (t11 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x4)));
            t29 = 0x2;
        } else {
            FUN_0c0600c0((((int)stk + 0) + 0x14), ((((struct o8_float *)(t0))->v)), ((((struct o8_float *)((t0 + 0x8)))->v)), ((((struct o8_float *)(a6))->v)), ((((struct o8_float *)((a6 + 0x8)))->v)));
            u20 = ((*(float *)(((int)stk + 20))) * ((u2 + u1) - t10));
            u20 = -u20;
            *(float *)(((int)stk + 8)) = u20;
            u22 = ((*(float *)(((int)stk + 28))) * ((u2 + u1) - t10));
            u22 = -u22;
            *(float *)(((int)stk + 16)) = u22;
            *(float *)(((int)stk + 12)) = 0.0f;
            FUN_0c060c80(a5, (((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))));
            t29 = 0x1;
        }
    }
    return t29;
}

int FUN_0c063d5e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;

    t0 = *(signed char *)((a4 + 0x1));
    t4 = ((int (*)(int, int, int, int))((*(int *)(((0xC258060 + (((t0 << 1) + t0) << 2)) + ((*(signed char *)((a6 + 0x1))) << 2))))))(a4, a5, a6, a7);
    if (t4 != 0) {
        FUN_0c064af0(a5, a4);
    }
    return FUN_0c064cbc(a5, 0x0, a4);
}

int FUN_0c063da2(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R6;
    int R10;
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
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 20)) = 0xC4F90AC;
    *(unsigned int *)(((int)stk + 8)) = 0xC4F6B2C;
    *(unsigned int *)(((int)stk + 16)) = 0xC4F90AC;
    R10 = (0x10);
    v0_1 = (0xC4F90AC);
    L_C063DC6:;
    v0_1 = *(int *)(((int)stk + 20));
    v0_2 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 20)) = (v0_1 + 0x4);
    v0_1 = *(int *)((((v0_1 + 0x4) - 4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    *(unsigned int *)(((int)stk + 12)) = (v0_1 - 1);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    v0_1 = (0x1);
    v0_2 = (v0_2);
    L_C063E76:;
    if (((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)(((int)stk + 12))))) goto L_C063E00;
    v0_1 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_1 + 0x960);
    if (((unsigned int)(v0_1 + 0x960) < (unsigned int)(*(int *)(((int)stk + 16))))) goto L_C063DC6;
    return R0;
    L_C063E00:;
    v0_3 = (v0_1);
    v0_4 = ((*(int *)((v0_2 + 0x4))));
    v0_5 = ((v0_2 + 0xC));
    v0_6 = ((*(int *)((v0_2 + 0x0))));
    v0_2 = ((v0_2 + 0xC));
    if (((int)v0_1 >= (int)(*(int *)(((int)stk + 0))))) goto L_C063E6E;
    L_C063E10:;
    v0_7 = *(int *)((v0_5 + 0x0));
    v0_8 = (v0_7);
    if ((v0_6 == v0_7)) goto L_C063E64;
    if ((v0_6 != 0)) goto L_C063E2C;
    R0 = (0x12E);
    if (((((((struct o12E_short *)(v0_8))->v)) & R10) == 0)) goto L_C063E64;
    R0 = ((FUN_0c063d5e(v0_4, v0_8, (*(int *)((v0_5 + 0x4))), v0_0)));
    L_C063E64:;
    v0_7 = (int)(v0_3 + 0x1) < (int)(*(int *)(((int)stk + 0)));
    v0_3 = ((v0_3 + 0x1));
    v0_5 = ((v0_5 + 0xC));
    if (v0_7) goto L_C063E10;
    L_C063E6E:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C063E76;
    L_C063E2C:;
    if ((v0_8 != 0)) goto L_C063E44;
    R0 = (0x12E);
    if (((((((struct o12E_short *)(v0_6))->v)) & R10) == 0)) goto L_C063E64;
    R0 = ((FUN_0c063d5e((*(int *)((v0_5 + 0x4))), v0_6, v0_4, v0_0)));
    goto L_C063E64;
    L_C063E44:;
    R0 = (0x12E);
    if (((((((struct o128_short *)(v0_6))->v)) & ((((struct o12E_short *)(v0_8))->v))) == 0)) goto L_C063E64;
    R0 = (0x128);
    if (((((((struct o12E_short *)(v0_6))->v)) & ((((struct o128_short *)(v0_8))->v))) == 0)) goto L_C063E64;
    R0 = ((FUN_0c062e90(v0_6, v0_8, v0_4, (*(int *)((v0_5 + 0x4))))));
    goto L_C063E64;
}

int FUN_0c063f06(void)
{
    FUN_0c063ea0(((((struct o0_int *)0xC532434)->v)));
    FUN_0c063ea0(((((struct o4_int *)0xC532434)->v)));
    FUN_0c063ea0(((((struct o8_int *)0xC532434)->v)));
    return FUN_0c063ea0(((((struct o24_int *)0xC532434)->v)));
}

int thunk_FUN_0c06494c(void)
{
    return FUN_0c06494c();
}

int FUN_0c063f4a(int a4)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R9;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    v0_6 = a4;
    v0_4 = (0x124);
    v0_0 = (0x0);
    v0_1 = (v0_6);
    w0_0 = (0.0f);
    w0_1 = (1.0f);
    if (((*(signed char *)((v0_6 + 0x124))) != 0)) goto L_C063F70;
    L_C0640D0:;
    return v0_4;
    L_C063F70:;
    v0_2 = ((FUN_0c05ffa4((*(signed char *)((v0_1 + 0x124))), (*(signed char *)((v0_1 + 0x1))), (*(signed char *)((v0_1 + 0x125))))));
    v0_3 = (v0_0);
    L_C0640C6:;
    v0_5 = *(signed char *)((v0_2 + 0x3));
    v0_4 = (v0_5);
    if (((int)v0_3 >= (int)v0_5)) goto L_C0640D0;
    FUN_0c05ffe2((*(signed char *)((v0_1 + 0x124))), (*(signed char *)((v0_1 + 0x1))), (*(signed char *)((v0_1 + 0x125))), v0_3);
    FUN_0c18778c();
    v0_4 = *(signed char *)(((int)stk + 0));
    v0_6 = (v0_0);
    v0_5 = (v0_4);
    if (!(((signed char)v0_4 != 0))) goto L_C0640C4;
    v0_4 = ((signed char)v0_5);
    if (((signed char)v0_5 == 1)) goto L_C064008;
    if ((v0_4 == 2)) goto L_C064016;
    if ((v0_4 == 4)) goto L_C06401C;
    if ((v0_4 == 3)) goto L_C064022;
    if ((v0_4 == 5)) goto L_C06402C;
    if ((v0_4 == 6)) goto L_C06403A;
    if ((v0_4 == 7)) goto L_C064040;
    if ((v0_4 == 0)) goto L_C06404E;
    goto L_C06404E;
    L_C0640C4:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C0640C6;
    L_C06404E:;
    v0_6 = (0x1);
    L_C064052:;
    if ((v0_6 != 0)) goto L_C0640C4;
    FUN_0c060180(v0_1, (((int)stk + 0) + 0x8), (*(signed char *)(((int)stk + 2))));
    FUN_0c060428(v0_1, ((int)stk + 0));
    v0_5 = *(signed char *)(((int)stk + 1));
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C06407E;
    if ((v0_4 == 1)) goto L_C0640A4;
    if ((v0_4 == 2)) goto L_C0640B0;
    goto L_C0640C4;
    L_C0640B0:;
    v0_4 = (0xC1713D0);
    v0_5 = ((((int)stk + 0) + 0x20));
    F4 = ((*(float *)(((int)stk + 24))));
    F5 = ((*(float *)(((int)stk + 20))));
    L_C0640BE:;
    v0_4 = ((int (*)(int, int, int, int, float, float))(v0_4))((((int)stk + 0) + 0x8), v0_5, R6, R7, F4, F5);
    goto L_C0640C4;
    L_C0640A4:;
    v0_4 = (0xC17149C);
    v0_5 = ((((int)stk + 0) + 0x14));
    goto L_C0640BE;
    L_C06407E:;
    v0_4 = (0xC17143E);
    v0_5 = ((((int)stk + 0) + 0x20));
    F4 = ((*(float *)(((int)stk + 20))));
    goto L_C0640BE;
    L_C064040:;
    *(float *)(((int)stk + 32)) = w0_1;
    L_C064044:;
    *(float *)(((int)stk + 36)) = w0_1;
    L_C064048:;
    *(float *)(((int)stk + 40)) = w0_1;
    goto L_C064052;
    L_C06403A:;
    *(float *)(((int)stk + 32)) = w0_0;
    goto L_C064044;
    L_C06402C:;
    *(float *)(((int)stk + 32)) = w0_1;
    L_C064030:;
    *(float *)(((int)stk + 36)) = w0_1;
    *(float *)(((int)stk + 40)) = w0_0;
    goto L_C064052;
    L_C064022:;
    *(float *)(((int)stk + 32)) = w0_1;
    L_C064026:;
    *(float *)(((int)stk + 36)) = w0_0;
    goto L_C064048;
    L_C06401C:;
    *(float *)(((int)stk + 32)) = w0_0;
    goto L_C064030;
    L_C064016:;
    *(float *)(((int)stk + 32)) = w0_0;
    goto L_C064026;
    L_C064008:;
    *(float *)(((int)stk + 32)) = w0_1;
    *(float *)(((int)stk + 36)) = w0_0;
    *(float *)(((int)stk + 40)) = w0_0;
    goto L_C064052;
}

int FUN_0c0640fc(void)
{
    FUN_0c02440e(((((struct o0_int *)0xC532434)->v)));
    FUN_0c02440e(((((struct o8_int *)0xC532434)->v)));
    FUN_0c02440e(((((struct o4_int *)0xC532434)->v)));
    return FUN_0c02440e(((((struct o24_int *)0xC532434)->v)));
}

int FUN_0c064116(void)
{
    FUN_0c181c20((*(float *)0xC0642C4));
    return FUN_0c181c30(1.0f);
}

int FUN_0c064128(void)
{
    register float u0;
    register float u1;
    register float u2;
    register int t3;
    register float u4;
    register int t6;
    register float u7;
    register int t8;

    u0 = (((struct o0_float *)0xC0642D8)->v);
    u1 = (((struct o4_float *)0xC0642D8)->v);
    u2 = (((struct o8_float *)0xC0642D8)->v);
    t3 = 0x0;
    for (;;) {
        u4 = u2;
        u4 = u4 + u0 * (float)t3;
        FUN_0c181bb0();
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x64) {
            break;
        }
    }
    t6 = 0x0;
    for (;;) {
        u7 = u2;
        u7 = u7 + u0 * (float)t6;
        t8 = FUN_0c181bb0();
        t6 = (t6 + 0x1);
        if ((int)t6 >= (int)0x64) {
            break;
        }
    }
    return t8;
}

int FUN_0c06420e(int a4, float f4, float f5)
{

    register int R0;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    w0_0 = f4;
    w0_1 = f5;
    w0_2 = (((struct o0_float *)0xC471A5C)->v);
    v0_1 = (0xC471A5C);
    w0_3 = (w0_2);
    if ((!(w0_0 > w0_2))) goto L_C064238;
    R0 = (0x4);
    if ((!(w0_1 > ((((struct o4_float *)(v0_1))->v))))) goto L_C064224;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x1));
    L_C064248:;
    *(unsigned int *)((v0_0 + 0x0)) = R0;
    L_C06425E:;
    return R0;
    L_C064224:;
    if ((!(w0_0 > w0_3))) goto L_C064238;
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > w0_1))) goto L_C064238;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x2));
    goto L_C064248;
    L_C064238:;
    if ((!(w0_3 > w0_0))) goto L_C06425E;
    if ((!(w0_1 > ((((struct o4_float *)0xC471A5C)->v))))) goto L_C06424C;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x4));
    goto L_C064248;
    L_C06424C:;
    if ((!(w0_3 > w0_0))) goto L_C06425E;
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > w0_1))) goto L_C06425E;
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_1 | 0x8);
    R0 = ((v0_1 | 0x8));
    goto L_C06425E;
}

int FUN_0c064262(int a4, float f4, float f5)
{

    register int R0;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    w0_0 = f4;
    w0_1 = f5;
    w0_2 = (((struct o0_float *)0xC471A5C)->v);
    v0_1 = (0xC471A5C);
    w0_3 = (w0_2);
    if ((!(w0_0 > w0_2))) goto L_C06428C;
    R0 = (0x4);
    if ((!(w0_1 > ((((struct o4_float *)(v0_1))->v))))) goto L_C064278;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x10));
    L_C06429C:;
    *(unsigned int *)((v0_0 + 0x0)) = R0;
    L_C0642B2:;
    return R0;
    L_C064278:;
    if ((!(w0_0 > w0_3))) goto L_C06428C;
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > w0_1))) goto L_C06428C;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x20));
    goto L_C06429C;
    L_C06428C:;
    if ((!(w0_3 > w0_0))) goto L_C0642B2;
    if ((!(w0_1 > ((((struct o4_float *)0xC471A5C)->v))))) goto L_C0642A0;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x40));
    goto L_C06429C;
    L_C0642A0:;
    if ((!(w0_3 > w0_0))) goto L_C0642B2;
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > w0_1))) goto L_C0642B2;
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_1 | 0x80);
    R0 = ((v0_1 | 0x80));
    goto L_C0642B2;
}

int FUN_0c064300(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & a6) != 0) {
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + 0xC4F90AC);
            t3 = *(int *)((t2 + 0x0));
            t1 = 0x8;
            t4 = (t0 * 0x960);
            t5 = t3;
            t4 = (t4 + 0xC4F6B2C);
            *(float *)((((((t3 << 1) + t5) << 2) + t4) + t1)) = f4;
            t3 = *(int *)((t2 + 0x0));
            t5 = t3;
            *(unsigned int *)((((((t3 << 1) + t5) << 2) + t4) + 0x4)) = a5;
            t3 = *(int *)((t2 + 0x0));
            *(unsigned int *)((t2 + 0x0)) = (t3 + 0x1);
            t5 = ((t3 + 0x1) - 1);
            t4 = (t4 + (((((t3 + 0x1) - 1) << 1) + t5) << 2));
            *(unsigned int *)((t4 + 0x0)) = a4;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c064372(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & a6) != 0) {
            t2 = 0x960;
            t3 = t0;
            t3 = (t3 << 2);
            t4 = 0xC4F6B2C;
            t5 = 0x0;
            t6 = 0x0;
            t3 = (t3 + 0xC4F90AC);
            t2 = (t0 * t2);
            t2 = (t2 + t4);
            t1 = t2;
            t7 = 0xC4F90AC;
            for (;;) {
                t4 = (*(int *)((t3 + 0x0)));
                if ((int)t6 >= (int)t4) {
                    break;
                }
                t7 = t6;
                t7 = (t7 << 1);
                t4 = t6;
                t7 = (t7 + t4);
                t7 = (t7 << 2);
                t6 = (t6 + 0x1);
                if (((*(int *)((t7 + t1)))) == a4) {
                    t5 = 0x1;
                }
            }
            if (t5 == 0) {
                t5 = *(int *)((t3 + 0x0));
                t1 = 0x8;
                t6 = t2;
                t4 = t5;
                *(float *)((((((t5 << 1) + t4) << 2) + t2) + t1)) = f4;
                t2 = *(int *)((t3 + 0x0));
                t4 = t2;
                *(unsigned int *)((((((t2 << 1) + t4) << 2) + t6) + 0x4)) = a5;
                t2 = *(int *)((t3 + 0x0));
                *(unsigned int *)((t3 + 0x0)) = (t2 + 0x1);
                t4 = ((t2 + 0x1) - 1);
                t6 = (t6 + (((((t2 + 0x1) - 1) << 1) + t4) << 2));
                *(unsigned int *)((t6 + 0x0)) = a4;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c06440e(int a4, int a5)
{
    int stk[2];
    int t0;
    register float u2;
    register float u6;
    register float u10;
    register float u14;
    register float u42;
    register float u46;
    register float u50;
    register float u54;
    register float u59;
    register float u60;
    register float u38;
    register float u39;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = *(signed char *)((a5 + 0x1));
    if ((t0 != 0) && (t0 != 2)) {
        if (t0 != 1) {
            u2 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + u2), (((((struct o8_float *)((a5 + 0x8)))->v)) + u2));
            u6 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) - u6), (((((struct o8_float *)((a5 + 0x8)))->v)) + u6));
            u10 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + u10), (((((struct o8_float *)((a5 + 0x8)))->v)) - u10));
            u14 = (((struct oC_float *)((a5 + 0x8)))->v);
            u38 = (((((struct o8_float *)(a5))->v)) - u14);
            u39 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u14);
        } else {
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v))));
            u38 = (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v)));
            u39 = (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v)));
        }
        u59 = u38;
        u60 = u39;
    } else {
        u42 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + u42), (((((struct o8_float *)((a5 + 0x8)))->v)) + u42));
        u46 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) - u46), (((((struct o8_float *)((a5 + 0x8)))->v)) + u46));
        u50 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + u50), (((((struct o8_float *)((a5 + 0x8)))->v)) - u50));
        u54 = (((struct oC_float *)((a5 + 0x8)))->v);
        u59 = (((((struct o8_float *)(a5))->v)) - u54);
        u60 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u54);
    }
    FUN_0c06420e(((int)stk + 0), u59, u60);
    return (FUN_0c064300((*(int *)(((int)stk + 4))), a5, (*(int *)(((int)stk + 0))), 0.0f));
}

int FUN_0c0644f4(int a4, int a5)
{
    int stk[2];
    int t0;
    register float u2;
    register float u6;
    register float u10;
    register float u14;
    register float u42;
    register float u46;
    register float u50;
    register float u54;
    register float u59;
    register float u60;
    register float u38;
    register float u39;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = *(signed char *)((a5 + 0x1));
    if ((t0 != 0) && (t0 != 2)) {
        if (t0 != 1) {
            u2 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c064262(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + u2), (((((struct o8_float *)((a5 + 0x8)))->v)) + u2));
            u6 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c064262(((int)stk + 0), (((((struct o8_float *)(a5))->v)) - u6), (((((struct o8_float *)((a5 + 0x8)))->v)) + u6));
            u10 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c064262(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + u10), (((((struct o8_float *)((a5 + 0x8)))->v)) - u10));
            u14 = (((struct oC_float *)((a5 + 0x8)))->v);
            u38 = (((((struct o8_float *)(a5))->v)) - u14);
            u39 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u14);
        } else {
            FUN_0c064262(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c064262(((int)stk + 0), (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c064262(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v))));
            u38 = (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v)));
            u39 = (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v)));
        }
        u59 = u38;
        u60 = u39;
    } else {
        u42 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c064262(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + u42), (((((struct o8_float *)((a5 + 0x8)))->v)) + u42));
        u46 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c064262(((int)stk + 0), (((((struct o8_float *)(a5))->v)) - u46), (((((struct o8_float *)((a5 + 0x8)))->v)) + u46));
        u50 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c064262(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + u50), (((((struct o8_float *)((a5 + 0x8)))->v)) - u50));
        u54 = (((struct oC_float *)((a5 + 0x8)))->v);
        u59 = (((((struct o8_float *)(a5))->v)) - u54);
        u60 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u54);
    }
    FUN_0c064262(((int)stk + 0), u59, u60);
    return (FUN_0c064300((*(int *)(((int)stk + 4))), a5, (*(int *)(((int)stk + 0))), 0.0f));
}

int FUN_0c0645d0(int a4, int a5)
{
    int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a5 + 0x1));
    if ((t0 != 0) && (t0 != 2)) {
        if (t0 != 1) {
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) + u0), (((((struct o8_float *)((a5 + 0x8)))->v)) + u0));
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) - u0), (((((struct o8_float *)((a5 + 0x8)))->v)) + u0));
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) + u0), (((((struct o8_float *)((a5 + 0x8)))->v)) - u0));
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            u1 = (((((struct o8_float *)(a5))->v)) - u0);
            u2 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u0);
        } else {
            FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v))));
            u1 = (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v)));
            u2 = (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v)));
        }
        u0 = u1;
        u1 = u2;
    } else {
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) + u2), (((((struct o8_float *)((a5 + 0x8)))->v)) + u2));
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) - u2), (((((struct o8_float *)((a5 + 0x8)))->v)) + u2));
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) + u2), (((((struct o8_float *)((a5 + 0x8)))->v)) - u2));
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        u0 = (((((struct o8_float *)(a5))->v)) - u2);
        u1 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u2);
    }
    return FUN_0c06420e(a4, u0, u1);
}

int FUN_0c064696(int a4, int a5)
{
    int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a5 + 0x1));
    if ((t0 != 0) && (t0 != 2)) {
        if (t0 != 1) {
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) + u0), (((((struct o8_float *)((a5 + 0x8)))->v)) + u0));
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) - u0), (((((struct o8_float *)((a5 + 0x8)))->v)) + u0));
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) + u0), (((((struct o8_float *)((a5 + 0x8)))->v)) - u0));
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            u1 = (((((struct o8_float *)(a5))->v)) - u0);
            u2 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u0);
        } else {
            FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v))));
            u1 = (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v)));
            u2 = (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v)));
        }
        u0 = u1;
        u1 = u2;
    } else {
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) + u2), (((((struct o8_float *)((a5 + 0x8)))->v)) + u2));
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) - u2), (((((struct o8_float *)((a5 + 0x8)))->v)) + u2));
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) + u2), (((((struct o8_float *)((a5 + 0x8)))->v)) - u2));
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        u0 = (((((struct o8_float *)(a5))->v)) - u2);
        u1 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u2);
    }
    return FUN_0c064262(a4, u0, u1);
}

int FUN_0c06475c(int a4, int a5, float f4)
{
    int stk[3];
    int t0;
    register float u2;
    register float u6;
    register float u10;
    register float u14;
    register float u42;
    register float u46;
    register float u50;
    register float u54;
    register float u59;
    register float u60;
    register float u38;
    register float u39;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 8)) = f4;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = *(signed char *)((a5 + 0x1));
    if ((t0 != 0) && (t0 != 2)) {
        if (t0 != 1) {
            u2 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + u2), (((((struct o8_float *)((a5 + 0x8)))->v)) + u2));
            u6 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) - u6), (((((struct o8_float *)((a5 + 0x8)))->v)) + u6));
            u10 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + u10), (((((struct o8_float *)((a5 + 0x8)))->v)) - u10));
            u14 = (((struct oC_float *)((a5 + 0x8)))->v);
            u38 = (((((struct o8_float *)(a5))->v)) - u14);
            u39 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u14);
        } else {
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v))));
            u38 = (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v)));
            u39 = (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v)));
        }
        u59 = u38;
        u60 = u39;
    } else {
        u42 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + u42), (((((struct o8_float *)((a5 + 0x8)))->v)) + u42));
        u46 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) - u46), (((((struct o8_float *)((a5 + 0x8)))->v)) + u46));
        u50 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c06420e(((int)stk + 0), (((((struct o8_float *)(a5))->v)) + u50), (((((struct o8_float *)((a5 + 0x8)))->v)) - u50));
        u54 = (((struct oC_float *)((a5 + 0x8)))->v);
        u59 = (((((struct o8_float *)(a5))->v)) - u54);
        u60 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u54);
    }
    FUN_0c06420e(((int)stk + 0), u59, u60);
    return (FUN_0c064300((*(int *)(((int)stk + 4))), a5, (*(int *)(((int)stk + 0))), (*(float *)(((int)stk + 8)))));
}

int FUN_0c06483e(int a4, int a5)
{
    register float u0;
    register float u1;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    if (u1 > u0) {
        return 0xFFFFFFFF;
    }
    if (u0 == u1) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c06485a(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0xC4F6B2C;
    t1 = 0xC4F90AC;
    for (;;) {
        t2 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t3 = FUN_0c187b60(t0, t2, 0xC, 0xC06483E);
        t0 = (t0 + 0x960);
        if ((unsigned int)t1 >= (unsigned int)0xC4F90BC) {
            break;
        }
    }
    return t3;
}

int FUN_0c064892(int a4, int a5)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t3;
    register int t8;
    register int t0;
    register int t4;
    register int t7;
    int t9;
    register int t10;
    register float u11;
    register float u12;
    register int t15;
    register int t17;
    register int t19;

    t1 = 0x0;
    t2 = (0xC + a4);
    t3 = 0x1;
    for (;;) {
        if ((int)t3 >= (int)a5) {
            break;
        }
        t2 = (t2 + 0xC);
        t0 = 0xC;
        t0 = (FUN_0c187798(a4, a5, t1));
        t8 = t7;
        for (;;) {
            if (((int)t8 >= 0) && (t9 = (int)(((unsigned int)t8) >> 31), t0 = 0x8, u11 = *(float *)((((((t8 << 1) + t8) << 2) + t10) + t0)), t0 = 0x8, u12 = *(float *)((((int)stk + 0) + t0)), u11 > u12)) {
                t4 = t8;
                t4 = (t4 << 1);
                t4 = (t4 + t8);
                t4 = (t4 << 2);
                t4 = (t4 + t10);
                t0 = 0xC;
                t0 = (FUN_0c187798(t10, 0x0, t8));
                t8 = (t15 - 1);
                continue;
            }
            break;
        }
        t0 = 0xC;
        t0 = (FUN_0c187798(t17, 0x0, t8));
        t1 = (t19 + 0x1);
        t3 = (t3 + 0x1);
    }
    return t0;
}

int FUN_0c06491e(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0xC4F6B2C;
    t1 = 0xC4F90AC;
    for (;;) {
        t2 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t3 = FUN_0c064892(t0, t2);
        t0 = (t0 + 0x960);
        if ((unsigned int)t1 >= (unsigned int)0xC4F90BC) {
            break;
        }
    }
    return t3;
}

int FUN_0c06494c(void)
{
    int stk[2];
    int t0;
    register int t3;
    register int t9;
    register int t11;
    register int t19;
    register int t13;
    register int t14;
    register int t15;
    register int t23;
    register int t16;
    register int t17;
    register int t18;

    t0 = 0x0;
    for (;;) {
        FUN_0c0641ca((*(signed char *)0xC542237), t0);
        t3 = *(signed char *)0xC542237;
        if (((*(signed char *)0xC542237) == 1) && (t0 == 0)) {
            FUN_0c060e70(t3, t0);
        } else {
            FUN_0c060ee6(t3, t0);
        }
        FUN_0c06485a();
        *(unsigned int *)(((int)stk + 4)) = (0xC471A2C + ((t0 << 2) << 2));
        *(unsigned int *)(((int)stk + 0)) = (0xC46E1EC + (t0 * 0x12C0));
        t9 = 0x0;
        for (;;) {
            t11 = *(int *)(((t9 << 2) + 0xC4F90AC));
            *(unsigned int *)((((*(int *)(((int)stk + 4))) + (t9 << 2)) + 0x0)) = t11;
            *(volatile int *)(((int)stk + 0));
            t19 = 0xC4F90AC;
            if ((int)t11 > 0) {
                t13 = 0x0;
                t14 = 0x0;
                for (;;) {
                    t15 = FUN_0c187798(t13, t9, t14);
                    t14 = (t16 + 0x1);
                    t13 = (t18 + 0xC);
                    if ((int)t14 >= (int)t17) {
                        break;
                    }
                }
                t19 = t15;
            } else {
                t23 = t9;
            }
            t9 = (t23 + 0x1);
            if ((int)t9 >= (int)0x4) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    return t19;
}

void FUN_0c064a2c(void)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)0xC4F45A4 = 0xC4F45A8;
    t0 = 0xC4F45A4;
    t1 = 0x1;
    t2 = 0xC4F45A8;
    for (;;) {
        if (t1 != 0x320) {
            t0 = t2;
            t0 = (t0 + 0xC);
            *(unsigned int *)((t2 + 0x0)) = t0;
        }
        t1 = (t1 + 0x1);
        t2 = (t2 + 0xC);
        if ((int)t1 >= (int)0x321) {
            break;
        }
    }
    *(unsigned int *)0xC4F6B28 = 0x320;
}

int FUN_0c064a56(int a4, int a5, int a6)
{
    register int t4;
    register int t5;
    register int t6;

    if ((int)(*(int *)0xC4F6B28) <= (int)0x1) {
        return 0xFFFFFFFF;
    }
    t6 = (((struct o404_int *)(a4))->v);
    t4 = *(int *)0xC4F45A4;
    if (t6 != 0) {
        t5 = t6;
        for (;;) {
            if (t6 == 0) {
                *(unsigned int *)0xC4F45A4 = (*(int *)((t4 + 0x0)));
                *(unsigned int *)0xC4F6B28 = ((*(int *)0xC4F6B28) - 1);
                *(unsigned int *)((t4 + 0x0)) = 0x0;
                *(unsigned int *)((t4 + 0x4)) = a5;
                *(unsigned int *)((t4 + 0x8)) = a6;
                *(unsigned int *)((t5 + 0x0)) = t4;
                return 0x0;
            }
            if ((*(int *)((t6 + 0x8))) == a6) {
                break;
            }
            t6 = (*(int *)((t6 + 0x0)));
            if (t6 != 0) {
                t5 = t6;
            }
        }
        return 0x1;
    }
    *(unsigned int *)0xC4F45A4 = (*(int *)((t4 + 0x0)));
    *(unsigned int *)0xC4F6B28 = ((*(int *)0xC4F6B28) - 1);
    *(unsigned int *)((t4 + 0x0)) = 0x0;
    *(unsigned int *)((t4 + 0x4)) = a5;
    *(unsigned int *)((t4 + 0x8)) = a6;
    (((struct o404_uint *)(a4))->v) = t4;
    return 0x0;
}

int FUN_0c064af0(int a4, int a5)
{
    register int t4;
    register int t5;
    register int t6;

    if ((int)(*(int *)0xC4F6B28) <= (int)0x1) {
        return 0xFFFFFFFF;
    }
    t6 = (((struct o404_int *)(a4))->v);
    t4 = *(int *)0xC4F45A4;
    if (t6 != 0) {
        t5 = t6;
        for (;;) {
            if (t6 == 0) {
                *(unsigned int *)0xC4F45A4 = (*(int *)((t4 + 0x0)));
                *(unsigned int *)0xC4F6B28 = ((*(int *)0xC4F6B28) - 1);
                *(unsigned int *)((t4 + 0x0)) = 0x0;
                *(unsigned int *)((t4 + 0x4)) = 0x0;
                *(unsigned int *)((t4 + 0x8)) = a5;
                *(unsigned int *)((t5 + 0x0)) = t4;
                return 0x0;
            }
            if ((*(int *)((t6 + 0x8))) == a5) {
                break;
            }
            t6 = (*(int *)((t6 + 0x0)));
            if (t6 != 0) {
                t5 = t6;
            }
        }
        return 0x1;
    }
    *(unsigned int *)0xC4F45A4 = (*(int *)((t4 + 0x0)));
    *(unsigned int *)0xC4F6B28 = ((*(int *)0xC4F6B28) - 1);
    *(unsigned int *)((t4 + 0x0)) = 0x0;
    *(unsigned int *)((t4 + 0x4)) = 0x0;
    *(unsigned int *)((t4 + 0x8)) = a5;
    (((struct o404_uint *)(a4))->v) = t4;
    return 0x0;
}

int FUN_0c064b5a(int a4, int a5)
{
    register float u0;
    register float u1;
    float u3;

    u0 = (((struct o10_float *)(a5))->v);
    u1 = (((struct o4_float *)(a5))->v);
    if (!((u1 + u0) > (((((struct o2C_float *)(a4))->v)) + 1.0f)) && (u3 = (((struct o168_float *)(a4))->v), (u1 + u0) > u3)) {
        if (!(((*(float *)((a5 + 0x0))) - ((((struct oC_float *)(a5))->v))) > ((((struct o28_float *)(a4))->v)))) {
            if (!(((((struct o28_float *)(a4))->v)) > ((*(float *)((a5 + 0x0))) + ((((struct oC_float *)(a5))->v))))) {
                if (!((((((struct o8_float *)(a5))->v)) - ((((struct o14_float *)(a5))->v))) > ((((struct o30_float *)(a4))->v)))) {
                    if (!(((((struct o30_float *)(a4))->v)) > (((((struct o8_float *)(a5))->v)) + ((((struct o14_float *)(a5))->v))))) {
                        (((struct o168_float *)(a4))->v) = (u1 + u0);
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c064bd8(int a4, int a5)
{
    register int t0;
    float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u1 = (((struct o10_float *)(a5))->v);
    u2 = (((struct o4_float *)(a5))->v);
    t0 = 0x0;
    if (!((u2 + u1) > (((((struct o2C_float *)(a4))->v)) + 1.0f)) && (u0 = (((struct o168_float *)(a4))->v), (u2 + u1) > u0)) {
        u0 = *(float *)((a5 + 0x0));
        u3 = (((struct o28_float *)(a4))->v);
        u4 = (((struct o30_float *)(a4))->v);
        u5 = (((struct o8_float *)(a5))->v);
        u6 = ((u5 - u4) * (u5 - u4));
        u6 = u6 + ((u0 - u3)) * ((u0 - u3));
        u0 = math_signed_sqrt(u6);
        t0 = 0x0;
        if (!(0.0f > (((((struct oC_float *)(a5))->v)) - u0))) {
            (((struct o168_float *)(a4))->v) = (u2 + u1);
            t0 = 0x1;
        }
    }
    return t0;
}

int FUN_0c064c4a(int a4, int a5)
{
    register int t0;
    float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u1 = (((struct oC_float *)(a5))->v);
    u2 = (((struct o4_float *)(a5))->v);
    t0 = 0x0;
    if (!((u2 + u1) > (((((struct o2C_float *)(a4))->v)) + 1.0f)) && (u0 = (((struct o168_float *)(a4))->v), (u2 + u1) > u0)) {
        u0 = *(float *)((a5 + 0x0));
        u3 = (((struct o28_float *)(a4))->v);
        u4 = (((struct o30_float *)(a4))->v);
        u5 = (((struct o8_float *)(a5))->v);
        u6 = ((u5 - u4) * (u5 - u4));
        u6 = u6 + ((u0 - u3)) * ((u0 - u3));
        u0 = math_signed_sqrt(u6);
        t0 = 0x0;
        if (!(0.0f > (((((struct oC_float *)(a5))->v)) - u0))) {
            (((struct o168_float *)(a4))->v) = (u2 + u1);
            t0 = 0x1;
        }
    }
    return t0;
}
