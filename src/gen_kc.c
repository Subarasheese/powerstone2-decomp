/* Straight-line functions with calls and guards (batch gen_kc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_short { char p[0x80]; short v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c01599c(void);
int FUN_0c0159c4(int, int, int, int, int);
int FUN_0c015b58(void);
int FUN_0c01ccba(void);
int FUN_0c01ccda(void);
int FUN_0c01cd2c(int);
int FUN_0c03733c(int, int, int);
int FUN_0c038ec2(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f40c(int, int);
int FUN_0c042be0(void);
int FUN_0c04331a(void);
int FUN_0c043326(void);
int FUN_0c05aab6(int, int);
int FUN_0c05f604(void);
int FUN_0c05f63a(void);
int FUN_0c05f6fc(void);
int FUN_0c05f7a0(int);
int FUN_0c07196c(int);
int FUN_0c071aa8(int);
int FUN_0c07c19c(int);
int FUN_0c0d5188(void);
int FUN_0c13dd14(int);
int FUN_0c179ac0(void);
int FUN_0c187d88(int);
int game_reset_objects(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0d8da4(int a4, int a5, int a6, int a7);
int FUN_0c13ddb8(int a4, int a5, int a6, int a7);
int FUN_0c15fb90(int a4);
int FUN_0c014ab0(void);
int FUN_0c042e72(void);
int FUN_0c05f436(void);
int FUN_0c071ae4(int a4);
int FUN_0c11e5bc(int a4, int a5);
int FUN_0c1219b6(int a4, int a5);
int FUN_0c13c4c0(int a4);

int FUN_0c0d8da4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            return FUN_0c03f346(a4, a5, a6, a7);
                        }
                        return (short)(t0 - 1);
                    }
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 54);
                    t0 = 0x78;
                    if ((int)((((struct o78_int *)(((((struct oC4_int *)(a4))->v))))->v)) < (int)0x4000) {
                        (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x4000;
                        *(unsigned short *)((a4 + 0x1C)) = 0x384;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    return t0;
                }
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x80);
                (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (((-(int)(((math_cos_angle16((*(short *)((a4 + 0x1E))))) * 11796480.0f) / 360.0f)) + 0x8000) & 0xFFFF);
                t0 = (((struct oC4_int *)(a4))->v);
                t1 = t0;
                if ((int)((((struct o78_int *)(t0))->v)) > (int)0x471C) {
                    thunk_FUN_0c05abb2(0x4A, 0x0);
                    FUN_0c07c19c(0xE);
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                return t1;
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                thunk_FUN_0c05abb2(0x4B, 0x0);
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (((-(int)(((math_cos_angle16((*(short *)((a4 + 0x1E))))) * 11796480.0f) / 360.0f)) + 0x8000) & 0xFFFF);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)0xC54098D;
    t1 = t0;
    if (t0 == 3) {
        *(unsigned short *)((a4 + 0x1C)) = 0x8E8;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c13ddb8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t18;
    register int t29;
    register int t32;
    register int t45;
    register int t46;
    register int t61;
    register int t66;
    register int t23;
    register int t3;
    register int t30;
    register int t31;
    register float u33;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t23 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            t2 = 0x0;
            for (;;) {
                if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                    break;
                }
                t3 = t2;
                t3 = (t3 << 2);
                t3 = (t3 + (0xC4 + a4));
                t3 = (*(int *)((t3 + 0x0)));
                math_vec3_accumulate((t3 + 0x6C), (0x90 + t3));
                *(float *)(((int)stk + 4)) = (float)((((struct o9C_int *)(t3))->v));
                *(float *)(((int)stk + 8)) = (float)((((struct oA0_int *)(t3))->v));
                *(float *)(((int)stk + 12)) = (float)((((struct oA4_int *)(t3))->v));
                math_vec3_accumulate((0x90 + t3), (((int)stk + 0) + 0x4));
                t2 = (t2 + 0x1);
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
                (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
            }
            t18 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t18 - 1);
            if ((int)(short)(t18 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
            }
            t23 = (FUN_0c13dd14(a4));
        }
        t66 = t23;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o20_ushort *)(a4))->v) = 0x5;
        t29 = a4;
        t32 = 0x0;
        for (;;) {
            if ((int)t32 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t31 = t32;
            t31 = (t31 << 2);
            t31 = (t31 + (0xC4 + a4));
            t31 = (*(int *)((t31 + 0x0)));
            t30 = 0x1C71;
            *(unsigned int *)(((int)stk + 0)) = (((int)((int)(FUN_0c179ac0()) % (int)0x5)) + 0x5);
            t30 = (t32 * t30);
            t29 = t30;
            u33 = (float)(*(int *)(((int)stk + 0)));
            (((struct o90_float *)(t31))->v) = ((math_sin_angle16(t29)) * u33);
            t29 = t30;
            (((struct o98_float *)(t31))->v) = ((math_cos_angle16(t29)) * (u33));
            t29 = ((int)((int)(FUN_0c179ac0()) % (int)0xB));
            t29 = (t29 - 5);
            t32 = (t32 + 0x1);
            u33 = (float)t29;
            (((struct o94_float *)(t31))->v) = u33;
        }
        t45 = 0x0;
        t46 = t32;
        for (;;) {
            if ((int)t45 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t46 = t45;
            t46 = (t46 << 2);
            t46 = (t46 + (0xC4 + a4));
            t46 = (*(int *)((t46 + 0x0)));
            math_vec3_accumulate((t46 + 0x6C), (0x90 + t46));
            *(float *)(((int)stk + 4)) = (float)((((struct o9C_int *)(t46))->v));
            *(float *)(((int)stk + 8)) = (float)((((struct oA0_int *)(t46))->v));
            *(float *)(((int)stk + 12)) = (float)((((struct oA4_int *)(t46))->v));
            math_vec3_accumulate((0x90 + t46), (((int)stk + 0) + 0x4));
            t45 = (t45 + 0x1);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
        }
        t61 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t61 - 1);
        if ((int)(short)(t61 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        t66 = (FUN_0c13dd14(a4));
    }
    return t66;
}

int FUN_0c15fb90(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register float F3;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    v0_0 = a4;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_5);
    v0_4 = (((((struct oC4_int *)(v0_0))->v)));
    v0_3 = ((*(int *)(((0xC4 + v0_0) + 0x4))));
    v0_1 = (0x2);
    if ((v0_5 == 0)) goto L_C15FBBA;
    if ((v0_2 == 1)) goto L_C15FBC6;
    if ((v0_2 != 2)) goto L_C15FBAE;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    L_C15FCF4:;
    return v0_2;
    L_C15FBAE:;
    if ((v0_2 != 3)) goto L_C15FBB6;
    return FUN_0c03f346(v0_0, v0_4, v0_3, v0_1);
    L_C15FBB6:;
    goto L_C15FCF4;
    L_C15FBC6:;
    (((struct o80_uint *)(v0_4))->v) = (unsigned short)(((((struct o80_short *)(v0_4))->v)) + 0xF8E4);
    v0_5 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_5);
    w0_0 = (0.100000001f);
    if ((v0_5 == 0)) goto L_C15FBEA;
    if ((v0_2 == 1)) goto L_C15FC1A;
    if (!((v0_2 == 2))) goto L_C15FC4C;
    v0_1 = ((v0_1 - 1));
    goto L_C15FC4C;
    L_C15FC4C:;
    (((struct o84_float *)(v0_3))->v) = (((((struct o84_float *)(v0_3))->v)) + w0_0);
    (((struct o88_float *)(v0_3))->v) = (((((struct o88_float *)(v0_3))->v)) + w0_0);
    (((struct o8C_float *)(v0_3))->v) = (((((struct o8C_float *)(v0_3))->v)) + w0_0);
    v0_4 = *(signed char *)((v0_0 + 0x16));
    v0_2 = (v0_4);
    if ((v0_4 == 0)) goto L_C15FC78;
    if ((v0_2 == 1)) goto L_C15FCA0;
    if (!((v0_2 == 2))) goto L_C15FCD6;
    v0_1 = ((v0_1 - 1));
    goto L_C15FCD6;
    L_C15FCD6:;
    if ((v0_1 != 0)) goto L_C15FCF4;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    goto L_C15FCF4;
    L_C15FCA0:;
    w0_0 = *(float *)0xC15FDDC;
    (((struct o18_float *)(v0_3))->v) = (((((struct o18_float *)(v0_3))->v)) - w0_0);
    (((struct o1C_float *)(v0_3))->v) = (((((struct o1C_float *)(v0_3))->v)) - w0_0);
    (((struct o20_float *)(v0_3))->v) = (((((struct o20_float *)(v0_3))->v)) - w0_0);
    v0_2 = (0x18);
    if ((((((struct o18_float *)(v0_3))->v)) > 0.0f)) goto L_C15FCD6;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned char *)((v0_3 + 0x0)) = 0x0;
    v0_2 = (0x16);
    goto L_C15FCD6;
    L_C15FC78:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C15FCD6;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_2 = (0x16);
    goto L_C15FCD6;
    L_C15FC1A:;
    (((struct o84_float *)(v0_4))->v) = (((((struct o84_float *)(v0_4))->v)) - w0_0);
    (((struct o88_float *)(v0_4))->v) = (((((struct o88_float *)(v0_4))->v)) - w0_0);
    (((struct o8C_float *)(v0_4))->v) = (((((struct o8C_float *)(v0_4))->v)) - w0_0);
    if ((((((struct o84_float *)(v0_4))->v)) > 0.0f)) goto L_C15FC4C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned char *)((v0_4 + 0x0)) = 0x0;
    goto L_C15FC4C;
    L_C15FBEA:;
    (((struct o84_float *)(v0_4))->v) = (((((struct o84_float *)(v0_4))->v)) + 0.333333343f);
    (((struct o88_float *)(v0_4))->v) = (((((struct o88_float *)(v0_4))->v)) + 0.333333343f);
    (((struct o8C_float *)(v0_4))->v) = (((((struct o8C_float *)(v0_4))->v)) + 0.333333343f);
    if ((1.0f > ((((struct o84_float *)(v0_4))->v)))) goto L_C15FC4C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C15FC4C;
    L_C15FBBA:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1;
    goto L_C15FBC6;
}

int FUN_0c014ab0(void)
{
    register int t1;
    register int t3;
    register int t17;
    register int t18;
    register int t22;
    register int t27;
    register int t33;
    register int t35;
    register int t43;
    register int t58;
    int t23;
    int t28;
    int t34;
    int t36;

    if ((*(signed char *)0xC3045F2) != 0) {
        t1 = FUN_0c015b58();
        t58 = t1;
        if (t1 != 0) {
            (((struct o1_uchar *)0xC3045F1)->v) = 0x0;
            if ((*(signed char *)0xC30A404) != 0) {
                t3 = FUN_0c187d88(0xC30A404);
                if (t3 == 6) {
                    *(unsigned char *)0xC20BB54 = 0x1;
                } else {
                    *(unsigned char *)0xC20BB54 = 0x0;
                }
            } else {
                *(unsigned char *)0xC20BB54 = 0x0;
            }
            t58 = (FUN_0c05aab6(0x0, 0x3));
        }
    } else {
        t17 = FUN_0c01ccba();
        if ((short)t17 == 0) {
            t18 = FUN_0c01599c();
            if (t18 != 0) {
                (((struct o1_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F2) + 0x1);
                FUN_0c05aab6(0x0, 0x3);
                t58 = (FUN_0c0159c4(0x0, 0x0, 0xC30A404, 0x6, 0x6));
            } else {
                t22 = FUN_0c01cd2c(0x2000);
                if (((short)t22 == 0) && (t23 = *(signed char *)0xC30EF9E, (unsigned char)t23 != 82)) {
                } else {
                    (((struct o0_uchar *)0xC3045F1)->v) = 0x2;
                    FUN_0c05aab6(0x0, 0x6);
                }
                t27 = FUN_0c01cd2c(0x1000);
                if (((short)t27 == 0) && (t28 = *(signed char *)0xC30EF9E, (unsigned char)t28 != 81)) {
                } else {
                    (((struct o0_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F1) + 0x1);
                    FUN_0c05aab6(0x0, 0x6);
                }
                t33 = FUN_0c01cd2c(0x800);
                if (((short)t33 == 0) && (t34 = *(signed char *)0xC30EF9E, (unsigned char)t34 != 80)) {
                    t35 = FUN_0c01cd2c(0x400);
                    if (((short)t35 == 0) && (t36 = *(signed char *)0xC30EF9E, (unsigned char)t36 != 79)) {
                    } else {
                        (((struct o0_uchar *)0xC3045F1)->v) = 0x4;
                        FUN_0c05aab6(0x0, 0x5);
                    }
                } else {
                    (((struct o0_uchar *)0xC3045F1)->v) = 0x4;
                    FUN_0c05aab6(0x0, 0x5);
                }
                t43 = FUN_0c01ccda();
                t58 = (short)t43;
                if ((short)t43 != 0) {
                    (((struct o0_uchar *)0xC3045F1)->v) = 0x3;
                    t58 = (FUN_0c05aab6(0x0, 0x3));
                }
            }
        } else {
            (((struct o1_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F2) + 0x1);
            FUN_0c05aab6(0x0, 0x3);
            t58 = (FUN_0c0159c4(0x0, 0x0, 0xC30A404, 0x6, 0x6));
        }
    }
    return t58;
}

int FUN_0c042e72(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC5421FA;
    if (t0 != 0) {
        if (t0 != 1) {
            t0 = FUN_0c0d5188();
            t1 = 0x63;
            if (t0 != 0) {
                t1 = 0xA;
            }
            (((struct o0_uchar *)0xC5421F9)->v) = t1;
            (((struct o1_uchar *)0xC5421F9)->v) = 0x0;
            (((struct o2_uchar *)0xC5421F9)->v) = 0x0;
            (((struct o3_uchar *)0xC5421F9)->v) = 0x0;
            return 0x0;
        }
        return ((int (*)(void))(0xC042D1A))();
    }
    FUN_0c042be0();
    return ((int (*)(void))(0xC042D1A))();
}

int FUN_0c05f436(void)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
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
    FUN_0c05f604();
    v0_3 = *(signed char *)0xC46E1BA;
    v0_6 = (v0_3);
    v0_2 = (0x0);
    v0_0 = (0x1);
    v0_1 = (0xC46E1B8);
    if ((v0_3 == 0)) goto L_C05F45E;
    if ((v0_6 == 1)) goto L_C05F4CE;
    L_C05F580:;
    FUN_0c03f40c(0x7, R5);
    return FUN_0c038ec2(0x7);
    L_C05F4CE:;
    v0_9 = *(signed char *)(((v0_1 + 0x3) + 0x0));
    v0_6 = (v0_9);
    v0_3 = (0xC3BD447);
    v0_4 = (0x4);
    v0_7 = ((v0_1 + 0x3));
    v0_8 = (0x1E);
    v0_5 = (0xC46E1A8);
    if ((v0_9 == 0)) goto L_C05F4E8;
    if ((v0_6 == 1)) goto L_C05F4FA;
    v0_6 = (FUN_0c05f63a()) != 0;
    if (v0_6) goto L_C05F580;
    *(unsigned char *)((v0_1 + 0x2)) = v0_2;
    *(unsigned char *)((v0_1 + 0x3)) = v0_2;
    if (((*(int *)((v0_5 + 0x8))) == 0)) goto L_C05F580;
    v0_7 = (v0_2);
    R5 = ((v0_5 + 0x8));
    L_C05F55C:;
    if (!((((((int)v0_0 << (int)v0_7) & (*(int *)((R5 + 0x0)))) & (unsigned char)(*(signed char *)((v0_3 + 0x0)))) == 0))) goto L_C05F56C;
    v0_2 = (int)(v0_7 + 0x1) < (int)v0_4;
    v0_7 = ((v0_7 + 0x1));
    if (v0_2) goto L_C05F55C;
    goto L_C05F580;
    L_C05F56C:;
    (((struct o14_uchar *)(v0_1))->v) = v0_7;
    (((struct o15_uchar *)(v0_1))->v) = ((int)v0_0 << (int)v0_7);
    goto L_C05F580;
    L_C05F4FA:;
    v0_6 = *(signed char *)((v0_1 + 0xD));
    *(unsigned char *)((v0_1 + 0xD)) = (v0_6 - 1);
    if (((int)(signed char)(v0_6 - 1) > (int)v0_8)) goto L_C05F50C;
    *(unsigned char *)((v0_1 + 0x3)) = ((*(signed char *)((v0_1 + 0x3))) + 0x1);
    L_C05F50C:;
    v0_6 = (FUN_0c05f63a()) == 0;
    if (v0_6) goto L_C05F51A;
    *(unsigned char *)((v0_1 + 0xD)) = v0_8;
    L_C05F51A:;
    if (((*(int *)((v0_5 + 0x8))) == 0)) goto L_C05F580;
    v0_7 = (v0_2);
    R5 = ((v0_5 + 0x8));
    L_C05F526:;
    if ((((((int)v0_0 << (int)v0_7) & (*(int *)((R5 + 0x0)))) & (unsigned char)(*(signed char *)((v0_3 + 0x0)))) != 0)) goto L_C05F56C;
    v0_2 = (int)(v0_7 + 0x1) < (int)v0_4;
    v0_7 = ((v0_7 + 0x1));
    if (v0_2) goto L_C05F526;
    goto L_C05F580;
    L_C05F4E8:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) + 0x1);
    *(unsigned char *)((v0_1 + 0xD)) = v0_8;
    *(unsigned char *)((v0_1 + 0xE)) = v0_2;
    goto L_C05F4FA;
    L_C05F45E:;
    v0_3 = (FUN_0c05f63a()) == 0;
    if (v0_3) goto L_C05F474;
    *(unsigned char *)((v0_1 + 0x2)) = v0_0;
    *(unsigned char *)((v0_1 + 0x3)) = v0_2;
    goto L_C05F580;
    L_C05F474:;
    if (((*(signed char *)((v0_1 + 0x3))) != 0)) goto L_C05F480;
    *(unsigned char *)((v0_1 + 0x3)) = ((*(signed char *)((v0_1 + 0x3))) + 0x1);
    L_C05F480:;
    v0_0 = *(signed char *)((v0_1 + 0x16));
    v0_6 = (v0_0);
    if ((v0_0 != 0)) goto L_C05F48C;
    goto L_C05F580;
    L_C05F48C:;
    if ((v0_6 == 1)) goto L_C05F4C6;
    if ((v0_6 == 2)) goto L_C05F4A0;
    if ((v0_6 == 3)) goto L_C05F4B0;
    if ((v0_6 == 4)) goto L_C05F4BA;
    goto L_C05F580;
    L_C05F4BA:;
    FUN_0c043326();
    L_C05F4C0:;
    game_reset_objects();
    L_C05F4C6:;
    FUN_0c05f6fc();
    goto L_C05F580;
    L_C05F4B0:;
    FUN_0c04331a();
    goto L_C05F4C0;
    L_C05F4A0:;
    game_reset_objects();
    FUN_0c05f7a0(0x4);
    goto L_C05F580;
}

int FUN_0c071ae4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c071aa8(a4);
    }
    return FUN_0c07196c(a4);
}

int FUN_0c11e5bc(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    register int t14;

    t14 = 0x0;
    if (((a5 & 0x1) != 0) && (t0 = *(int *)((0xC2A090C + (a4 << 2))), (t0 & 0x1) != 0)) {
        t14 = 0x1;
    }
    t0 = t14;
    if (((a5 & 0x2) != 0) && (t1 = *(int *)((0xC2A090C + (a4 << 2))), (t1 & 0x2) != 0)) {
        t0 = (t14 | 0x2);
    }
    t1 = t0;
    if (((a5 & 0x4) != 0) && (t2 = *(int *)((0xC2A090C + (a4 << 2))), (t2 & 0x4) != 0)) {
        t1 = (t0 | 0x4);
    }
    t0 = t1;
    if (((a5 & 0x8) != 0) && (t3 = *(int *)((0xC2A090C + (a4 << 2))), (t3 & 0x8) != 0)) {
        t0 = (t1 | 0x8);
    }
    t1 = t0;
    if (((a5 & 0x10) != 0) && (t4 = *(int *)((0xC2A090C + (a4 << 2))), (t4 & 0x10) != 0)) {
        t1 = (t0 | 0x10);
    }
    t0 = t1;
    if (((a5 & 0x20) != 0) && (t5 = *(int *)((0xC2A090C + (a4 << 2))), (t5 & 0x20) != 0)) {
        t0 = (t1 | 0x20);
    }
    t1 = t0;
    if (((a5 & 0x40) != 0) && (t6 = *(int *)((0xC2A090C + (a4 << 2))), (t6 & 0x40) != 0)) {
        t1 = (t0 | 0x40);
    }
    t0 = t1;
    if (((a5 & 0x80) != 0) && (t7 = *(int *)((0xC2A090C + (a4 << 2))), (t7 & 0x80) != 0)) {
        t0 = (t1 | 0x80);
    }
    t1 = t0;
    if (((0x8000 & a5) != 0) && (t8 = *(int *)((0xC473D04 + (a4 << 2))), (t8 & 0x40) != 0)) {
        t1 = (t0 | 0x40);
    }
    t0 = t1;
    if (((0x10000 & a5) != 0) && (t9 = *(int *)((0xC473D04 + (a4 << 2))), (t9 & 0x80) != 0)) {
        t0 = (t1 | 0x80);
    }
    t1 = t0;
    if ((0x20000 & a5) != 0) {
        t2 = t0;
        if (((*(int *)((0xC473D04 + (a4 << 2)))) & 0x100) != 0) {
            t2 = (t0 | 0x100);
        }
        t1 = t2;
    }
    t0 = t1;
    if (((0x40000 & a5) != 0) && (t10 = *(int *)((0xC473D04 + (a4 << 2))), (t10 & 0x200) != 0)) {
        t0 = (t1 | 0x200);
    }
    t1 = t0;
    if (((0x4000 & a5) != 0) && (t11 = *(int *)((0xC473D04 + (a4 << 2))), (t11 & 0x20) != 0)) {
        t1 = (t0 | 0x20);
    }
    t0 = t1;
    if (((0x200000 & a5) != 0) && (t12 = *(signed char *)(((((a4 + 0x1) * 0x34) + 0xC2738B8) + 0x10)), t12 == 7)) {
        t0 = (t1 | 0x200000);
    }
    t1 = t0;
    if (((a5 & 0x400000) != 0) && (t13 = *(signed char *)(((((a4 + 0x1) * 0x34) + 0xC2738B8) + 0x10)), t13 == 6)) {
        t1 = (t0 | 0x400000);
    }
    return t1;
}

int FUN_0c1219b6(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 3) {
        } else {
            t0 = *(signed char *)((a4 + 0x15));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        t2 = t0;
                        if (t0 != 3) {
                        } else {
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                            if (((*(short *)((a4 + 0x1E))) & 6) != 0) {
                                (((struct oA8_uchar *)(a4))->v) = 0x1;
                            } else {
                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                            }
                            t0 = *(short *)((a4 + 0x1E));
                            t3 = t0;
                            if ((int)t0 <= 0) {
                                (((struct o15_uchar *)(a4))->v) = 0x1;
                                FUN_0c03733c(a4, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + 0xC201A44))), (*(int *)0xC4B410C));
                                (((struct oA8_uchar *)(a4))->v) = 0x1;
                                t3 = 0xA8;
                            }
                            t2 = t3;
                        }
                        t0 = t2;
                    } else {
                        FUN_0c03733c(a4, 0xE, (*(int *)0xC4B410C));
                        *(unsigned short *)((a4 + 0x1E)) = 0x20;
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        if (((*(short *)((a4 + 0x1E))) & 6) != 0) {
                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                        } else {
                            (((struct oA8_uchar *)(a4))->v) = 0x0;
                        }
                        t2 = *(short *)((a4 + 0x1E));
                        t3 = t2;
                        if ((int)t2 <= 0) {
                            (((struct o15_uchar *)(a4))->v) = 0x1;
                            FUN_0c03733c(a4, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + 0xC201A44))), (*(int *)0xC4B410C));
                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                            t3 = 0xA8;
                        }
                        t0 = t3;
                    }
                    t2 = t0;
                } else {
                    if ((*(short *)((a4 + 0x1C))) != (*(signed char *)0xC4759E8)) {
                        *(unsigned short *)((a4 + 0x1C)) = (*(signed char *)0xC4759E8);
                        t0 = (FUN_0c03733c(a4, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + 0xC201A44))), (*(int *)0xC4B410C)));
                    } else {
                        t3 = *(signed char *)0xC4759EC;
                        t4 = t3;
                        if (t3 != 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t0 = t4;
                    }
                    t2 = t0;
                }
                t0 = t2;
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xFFFFFFFF;
                if ((*(short *)((a4 + 0x1C))) != (*(signed char *)0xC4759E8)) {
                    *(unsigned short *)((a4 + 0x1C)) = (*(signed char *)0xC4759E8);
                    t2 = (FUN_0c03733c(a4, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + 0xC201A44))), (*(int *)0xC4B410C)));
                } else {
                    t3 = *(signed char *)0xC4759EC;
                    t4 = t3;
                    if (t3 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t2 = t4;
                }
                t0 = t2;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            t2 = t1;
            if (t1 != 1) {
            } else {
                if ((*(signed char *)((a4 + 0x3))) == (*(signed char *)0xC4759E8)) {
                    (((struct o44_float *)(a4))->v) = 1.39999998f;
                    (((struct o40_float *)(a4))->v) = 1.39999998f;
                } else {
                    (((struct o44_float *)(a4))->v) = 1.0f;
                    (((struct o40_float *)(a4))->v) = 1.0f;
                }
                t2 = 0x40;
            }
            t1 = t2;
        } else {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o40_float *)(a4))->v) = 1.0f;
            (((struct o48_float *)(a4))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            if ((*(signed char *)((a4 + 0x3))) == (*(signed char *)0xC4759E8)) {
                (((struct o44_float *)(a4))->v) = 1.39999998f;
                (((struct o40_float *)(a4))->v) = 1.39999998f;
            } else {
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
            }
            t1 = 0x40;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c13c4c0(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R10;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_3);
    v0_1 = (0x1E);
    if ((v0_3 == 0)) goto L_C13C4D2;
    if ((v0_2 == 1)) goto L_C13C4E0;
    return FUN_0c03f346(v0_0, R5, R6, v0_1);
    L_C13C4E0:;
    v0_2 = *(int *)((v0_0 + 0x10));
    R5 = (0x1);
    R6 = (v0_2);
    if (((int)(*(signed char *)((v0_2 + 0x15))) > (int)0x1)) goto L_C13C4F4;
    if (!(((int)(*(signed char *)((R6 + 0x14))) <= (int)R5))) goto L_C13C4F4;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C13C540;
    if ((v0_2 == 1)) goto L_C13C57A;
    goto L_C13C620;
    L_C13C4F4:;
    return FUN_0c03f346(v0_0, R5, R6, v0_1);
    L_C13C620:;
    return v0_2;
    L_C13C57A:;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o84_float *)(v0_1))->v) = (((((struct o84_float *)(v0_1))->v)) + ((((((struct o0_float *)0xC2A20F4)->v)) + -1.0f) / 30.0f));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o88_float *)(v0_1))->v) = (((((struct o88_float *)(v0_1))->v)) + ((((((struct o4_float *)0xC2A20F4)->v)) + -1.0f) / 30.0f));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + ((((((struct o8_float *)0xC2A20F4)->v)) + -1.0f) / 30.0f));
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o84_float *)(v0_1))->v) = (((((struct o84_float *)(v0_1))->v)) + ((((((struct oC_float *)0xC2A20F4)->v)) + -1.0f) / 30.0f));
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o88_float *)(v0_1))->v) = (((((struct o88_float *)(v0_1))->v)) + ((((((struct o10_float *)0xC2A20F4)->v)) + -1.0f) / 30.0f));
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + ((((((struct o14_float *)0xC2A20F4)->v)) + -1.0f) / 30.0f));
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C13C620;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    goto L_C13C620;
    L_C13C540:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C13C56E;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = 0x0;
    v0_1 = *(int *)(((0xC4 + v0_0) + 0x4));
    *(unsigned char *)(((*(int *)(((0xC4 + v0_0) + 0x8))) + 0x0)) = R5;
    *(unsigned char *)((v0_1 + 0x0)) = R5;
    L_C13C56E:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + 1.0f);
    v0_2 = (0x2C);
    goto L_C13C620;
    L_C13C4D2:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    goto L_C13C4E0;
}
