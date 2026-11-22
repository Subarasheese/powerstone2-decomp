/* Straight-line functions with calls and guards (batch gen_db): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1650_uint { char p[0x1650]; unsigned int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o19C8_uchar { char p[0x19C8]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C8_int { char p[0x2C8]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o377C_int { char p[0x377C]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c042ff8(void);
int FUN_0c056b68(int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059ef6(int, int);
int FUN_0c059f78(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07da48(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c125254(int, int);
int FUN_0c129108(int);
int FUN_0c1293a8(int);
int FUN_0c12fcf4(int, int, int);
int FUN_0c1328b4(int, int);
int FUN_0c13e268(int, int);
int FUN_0c13e824(int, int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c187798(int, int, int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
float nlLength(int, int);
int nlSubVector3op(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c08d3e4(int a4, int a5, int a6);
int FUN_0c0ad1b4(int a4);
int FUN_0c0aa17c(int a4, int a5, int a6);
int FUN_0c052988(int a4);
int FUN_0c09fb92(int a4, int a5, int a6);
int FUN_0c096bd0(int a4);
int FUN_0c096fe8(int a4);
int FUN_0c09cba2(int a4, int a5, int a6);
int FUN_0c097588(int a4, int a5, int a6);
int FUN_0c094784(int a4, int a5, int a6);


int FUN_0c0ad1b4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    *(unsigned int *)((a4 + 0x10)) = ((((struct o377C_int *)(a4))->v));
    FUN_0c07d030(a4, 0x1);
    FUN_0c059e60(a4, 0xA);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)((a4 + 0x375A))) == 1) {
        t0 = *(int *)((a4 + 0x10));
        u0 = (((struct o28_float *)(a4))->v);
        u1 = (((struct o28_float *)(t0))->v);
        *(volatile float *)((t0 + 0x2C));
        *(volatile float *)((a4 + 0x2C));
        u2 = (((struct o30_float *)(t0))->v);
        u3 = (((struct o30_float *)(a4))->v);
        u4 = (u1 - u0);
        if ((u1 - u0) == 0.0f) {
            u4 = 9.99999997e-07f;
        }
        u0 = (u2 - u3);
        if ((u2 - u3) == 0.0f) {
            u0 = 9.99999997e-07f;
        }
        t0 = math_atan_angle16(((-u0) / u4));
        t1 = t0;
        if (0.0f > u4) {
            t1 = (t0 + 0x8000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t1 + 0x4000);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x10, (t0), 0x1, 0x10);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        FUN_0c080320(a4, 1.5f);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t0 = 0x3;
    } else {
        t1 = *(int *)((a4 + 0x10));
        u0 = (((struct o28_float *)(a4))->v);
        u1 = (((struct o28_float *)(t1))->v);
        u2 = (((struct o2C_float *)(t1))->v);
        u3 = (((struct o2C_float *)(a4))->v);
        u4 = (((struct o30_float *)(t1))->v);
        u5 = (((struct o30_float *)(a4))->v);
        u6 = (u1 - u0);
        if ((u1 - u0) == 0.0f) {
            u6 = 9.99999997e-07f;
        }
        u0 = (u2 - u3);
        if ((u2 - u3) == 0.0f) {
            u0 = 9.99999997e-07f;
        }
        u1 = (u4 - u5);
        if ((u4 - u5) == 0.0f) {
            u1 = 9.99999997e-07f;
        }
        t1 = math_atan_angle16(((-u1) / u6));
        t2 = t1;
        if (0.0f > u6) {
            t2 = (t1 + 0x8000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t2 + 0x4000);
        u2 = (u1 * u1);
        u2 = u2 + u6 * u6;
        u1 = math_signed_sqrt(u2);
        math_atan_angle16(((-u1) / u0));
        
        *(unsigned int *)((a4 + 0x34)) = 0x2000;
        u0 = *(float *)0xC0AD458;
        u1 = math_sin_angle16(0x12000);
        u2 = (u1 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o4C_float *)(a4))->v) = (u2 * u0);
        (((struct o50_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * u0);
        u1 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u2 = (u1 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u2 * u0);
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x1, 0x11, (t1), 0x1, 0x11);
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        t0 = ((*(signed char *)((a4 + 0x17))) + 0x1);
    }
    (((struct o17_uchar *)(a4))->v) = t0;
    return 0x17;
}

int FUN_0c0aa17c(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R8;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    FUN_0c037bf6(v0_0, v0_1, v0_2);
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_0 = (v0_0);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C0AA1F2;
    v0_3 = (FUN_0c07ecc6(v0_0, 0x0, 0x0)) == 0;
    if (v0_3) goto L_C0AA1F2;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = v0_1;
    FUN_0c07e79c(v0_0, v0_1, 0x1, 0x12, v0_2, 0x1, 0x12);
    return FUN_0c059e60(v0_0, 0x21);
    L_C0AA1F2:;
    w0_0 = (0.0f);
    if (((*(signed char *)((v0_0 + 0x16))) != 1)) goto L_C0AA260;
    if ((!(0.0f > ((((struct o50_float *)(v0_0))->v))))) goto L_C0AA2A6;
    v0_3 = (FUN_0c07ecc6(v0_0, 0x0, 0x0)) == 0;
    if (v0_3) goto L_C0AA2A6;
    FUN_0c059f78((*(signed char *)((v0_0 + 0x1))), (*(signed char *)((v0_0 + 0x135))));
    (((struct o16_uchar *)(v0_0))->v) = 0x0;
    v0_3 = (0x50);
    if ((!(0.0f > ((((struct o50_float *)(v0_0))->v))))) goto L_C0AA2A6;
    *(float *)((v0_0 + v0_3)) = w0_0;
    L_C0AA2A6:;
    (((struct o1650_uint *)(v0_0))->v) = 0x1555;
    v0_4 = *(short *)((v0_0 + 0x1E));
    v0_3 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C0AA2B6;
    v0_3 = ((v0_3 & 0x1));
    L_C0AA2C0:;
    if ((v0_3 != 0)) goto L_C0AA2D6;
    (((struct o22_ushort *)(v0_0))->v) = (((((struct o22_short *)(v0_0))->v)) ^ 0x1);
    FUN_0c13e268(v0_0, ((((struct o22_short *)(v0_0))->v)));
    L_C0AA2D6:;
    if ((((int)((int)(*(short *)((v0_0 + 0x1E))) % (int)0x28)) != 0)) goto L_C0AA2EC;
    FUN_0c13e824(v0_0, 0x0);
    L_C0AA2EC:;
    if ((((int)((int)((((struct o20_short *)(v0_0))->v)) % (int)0x28)) != 0)) goto L_C0AA302;
    FUN_0c13e824(v0_0, 0x1);
    L_C0AA302:;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x71C);
    FUN_0c07da48(v0_0);
    if ((((unsigned short)((((struct o42C_short *)(v0_0))->v)) & 0x3C00) == 0)) goto L_C0AA356;
    (((struct o3850_uint *)(v0_0))->v) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(v0_0, v0_1, v0_2)));
    (((struct o4C_float *)(v0_0))->v) = ((math_sin_angle16(((((struct o3850_int *)(v0_0))->v)))) * 6.0f);
    w0_0 = math_cos_angle16(((((struct o3850_int *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (w0_0 * 6.0f);
    w0_0 = ((w0_0 * 6.0f));
    L_C0AA35E:;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) + 0x1);
    return 0x20;
    L_C0AA356:;
    (((struct o54_float *)(v0_0))->v) = w0_0;
    (((struct o4C_float *)(v0_0))->v) = w0_0;
    goto L_C0AA35E;
    L_C0AA2B6:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x1)) + 0x1));
    goto L_C0AA2C0;
    L_C0AA260:;
    v0_3 = (FUN_0c07ecc6(v0_0, 0x0, 0x0)) == 0;
    if (v0_3) goto L_C0AA27A;
    v0_3 = (0x50);
    if ((!(0.0f > ((((struct o50_float *)(v0_0))->v))))) goto L_C0AA27A;
    *(float *)((v0_0 + v0_3)) = w0_0;
    L_C0AA27A:;
    if ((((unsigned short)((((struct o430_short *)(v0_0))->v)) & 0x100) == 0)) goto L_C0AA2A6;
    (((struct o50_float *)(v0_0))->v) = 38.6999969f;
    (((struct o5C_float *)(v0_0))->v) = -2.0f;
    FUN_0c059ef6((*(signed char *)((v0_0 + 0x1))), 0x0);
    (((struct o16_uchar *)(v0_0))->v) = 0x1;
    goto L_C0AA2A6;
}

int FUN_0c052988(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct o2C8_int *)(a4))->v);
    if (((unsigned short)(*(short *)0xC542864) & 0x200) != 0) {
        t1 = *(short *)0xC542864;
        if (((unsigned short)t1 & 0x800) != 0) {
            *(unsigned int *)((t0 + 0x20)) = ((*(int *)((t0 + 0x20))) + 0x100);
        } else {
            if (((unsigned short)t1 & 0x400) != 0) {
                *(unsigned int *)((t0 + 0x20)) = ((*(int *)((t0 + 0x20))) - 0x100);
            }
        }
        t1 = *(short *)0xC542864;
        if (((unsigned short)t1 & 0x2000) != 0) {
            *(unsigned int *)((t0 + 0x1C)) = ((*(int *)((t0 + 0x1C))) + 0x100);
        } else {
            if (((unsigned short)t1 & 0x1000) != 0) {
                *(unsigned int *)((t0 + 0x1C)) = ((*(int *)((t0 + 0x1C))) - 0x100);
            }
        }
    }
    u0 = (((struct o0_float *)0xC052B9C)->v);
    if (((unsigned short)(*(short *)0xC542864) & 0x100) != 0) {
        t1 = *(short *)0xC542864;
        if (((unsigned short)t1 & 0x2000) != 0) {
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + u0);
        } else {
            if (((unsigned short)t1 & 0x1000) != 0) {
                (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - u0);
            }
        }
    }
    if (((unsigned short)(*(short *)0xC542864) & 128) != 0) {
        t1 = *(short *)0xC542864;
        if (((unsigned short)t1 & 0x2000) != 0) {
            (((struct o38_float *)(t0))->v) = (((((struct o38_float *)(t0))->v)) + u0);
        } else {
            if (((unsigned short)t1 & 0x1000) != 0) {
                (((struct o38_float *)(t0))->v) = (((((struct o38_float *)(t0))->v)) - u0);
            }
        }
    }
    if (((unsigned short)(*(short *)0xC542864) & 64) != 0) {
        t1 = *(short *)0xC542864;
        if (((unsigned short)t1 & 0x800) != 0) {
            (((struct o34_float *)(t0))->v) = (((((struct o34_float *)(t0))->v)) - u0);
        } else {
            if (((unsigned short)t1 & 0x400) != 0) {
                (((struct o34_float *)(t0))->v) = (((((struct o34_float *)(t0))->v)) + u0);
            }
        }
        t1 = *(short *)0xC542864;
        if (((unsigned short)t1 & 0x2000) != 0) {
            (((struct o3C_float *)(t0))->v) = (((((struct o3C_float *)(t0))->v)) - u0);
        } else {
            if (((unsigned short)t1 & 0x1000) != 0) {
                (((struct o3C_float *)(t0))->v) = (((((struct o3C_float *)(t0))->v)) + u0);
            }
        }
    }
    u0 = (((struct o4_float *)0xC052B9C)->v);
    if (((unsigned short)(*(short *)0xC5428B4) & 0x100) != 0) {
        t1 = *(short *)0xC5428B4;
        if (((unsigned short)t1 & 0x2000) != 0) {
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + u0);
        } else {
            if (((unsigned short)t1 & 0x1000) != 0) {
                (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - u0);
            }
        }
    }
    if (((unsigned short)(*(short *)0xC5428B4) & 128) != 0) {
        t1 = *(short *)0xC5428B4;
        if (((unsigned short)t1 & 0x2000) != 0) {
            (((struct o38_float *)(t0))->v) = (((((struct o38_float *)(t0))->v)) + u0);
        } else {
            if (((unsigned short)t1 & 0x1000) != 0) {
                (((struct o38_float *)(t0))->v) = (((((struct o38_float *)(t0))->v)) - u0);
            }
        }
    }
    if (((unsigned short)(*(short *)0xC5428B4) & 64) != 0) {
        t1 = *(short *)0xC5428B4;
        if (((unsigned short)t1 & 0x800) != 0) {
            (((struct o34_float *)(t0))->v) = (((((struct o34_float *)(t0))->v)) - u0);
        } else {
            if (((unsigned short)t1 & 0x400) != 0) {
                (((struct o34_float *)(t0))->v) = (((((struct o34_float *)(t0))->v)) + u0);
            }
        }
        t1 = *(short *)0xC5428B4;
        if (((unsigned short)t1 & 0x2000) != 0) {
            (((struct o3C_float *)(t0))->v) = (((((struct o3C_float *)(t0))->v)) - u0);
        } else {
            if (((unsigned short)t1 & 0x1000) != 0) {
                (((struct o3C_float *)(t0))->v) = (((((struct o3C_float *)(t0))->v)) + u0);
            }
        }
    }
    return FUN_0c056b68(a4, t0, 0xC542854, 0x1000);
}

int FUN_0c09fb92(int a4, int a5, int a6)
{

    register int R2;
    register int R3;
    register int R7;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register float F2;
    register float F3;
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
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = (unsigned char)(FUN_0c037bf6(v0_1, v0_2, v0_3)) == 0;
    v0_0 = (v0_1);
    if (v0_4) goto L_C09FBDC;
    return FUN_0c085d0c(v0_0, v0_2, v0_3, R7);
    L_C09FBDC:;
    FUN_0c038362(v0_0);
    if ((((((struct o20_short *)(v0_0))->v)) == 0)) goto L_C09FC1E;
    v0_5 = *(int *)((v0_0 + 0x38));
    v0_6 = (((struct o3850_short *)(v0_0))->v);
    v0_4 = (0x20);
    v0_1 = ((unsigned short)(v0_6 - v0_5));
    if (((0x8000 & (unsigned short)(v0_6 - v0_5)) == 0)) goto L_C09FC00;
    v0_5 = (0xFFFF0000);
    v0_1 = ((v0_1 | 0xFFFF0000));
    L_C09FC00:;
    if (((int)(*(short *)((v0_0 + v0_4))) <= 0)) goto L_C09FC16;
    *(unsigned int *)((v0_0 + 0x38)) = (unsigned short)((*(int *)((v0_0 + 0x38))) + ((int)((int)v0_1 / (int)(*(short *)((v0_0 + v0_4))))));
    L_C09FC16:;
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) - 1);
    L_C09FC1E:;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) + 0x1);
    if ((!(((((struct o8C_float *)(((((struct o118_int *)(v0_0))->v))))->v)) > 30.0f))) goto L_C09FC54;
    w0_0 = (((struct o37B8_float *)(v0_0))->v);
    w0_1 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_C09FC54;
    if ((((unsigned short)((((struct o430_short *)(v0_0))->v)) & 0x200) == 0)) goto L_C09FC54;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_4 = (0x16);
    L_C09FD3C:;
    return v0_4;
    L_C09FC54:;
    v0_6 = *(signed char *)((v0_0 + 0x17));
    v0_4 = (v0_6);
    v0_5 = (0x0);
    if ((v0_6 == 0)) goto L_C09FC6A;
    if ((v0_4 == 1)) goto L_C09FC9E;
    if ((v0_4 == 2)) goto L_C09FD00;
    goto L_C09FD3C;
    L_C09FD00:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    v0_4 = (v0_1);
    if (((int)v0_1 < (int)0x5)) goto L_C09FD3C;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_5;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    FUN_0c12fcf4(v0_0, (*(short *)((v0_0 + 0x1E))), 0x0);
    v0_1 = *(short *)((v0_0 + 0x1E));
    v0_4 = (v0_1);
    if (((int)v0_1 < (int)0x2)) goto L_C09FD3C;
    (((struct o19C8_uchar *)(v0_0))->v) = 0x1;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_5;
    v0_4 = (v0_5);
    goto L_C09FD3C;
    L_C09FC9E:;
    v0_4 = ((*(short *)((v0_0 + 0x1C))));
    if (((*(signed char *)((v0_0 + 0x375A))) != 0)) goto L_C09FCAC;
    v0_1 = (0xA);
    L_C09FCAE:;
    if (((int)v0_4 < (int)v0_1)) goto L_C09FD3C;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_5;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_5;
    return FUN_0c12fcf4(v0_0, (*(short *)((v0_0 + 0x1E))), 0x0);
    L_C09FCAC:;
    v0_1 = (0xE);
    goto L_C09FCAE;
    L_C09FC6A:;
    v0_6 = *(short *)((v0_0 + 0x1C));
    v0_4 = (v0_6);
    if (((int)v0_6 < (int)0x3)) goto L_C09FD3C;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_5;
    (((struct o19C8_uchar *)(v0_0))->v) = v0_5;
    L_C09FC94:;
    /* manual: the original passes the object (r4 = r14) and 15 when its byte +0x375A is set, else 11 (r5); the
       generated C dropped the choice and passed a stale value as the object */
    return FUN_0c1328b4(v0_0, (*(signed char *)((v0_0 + 0x375A))) != 0 ? 0xF : 0xB);
}

int FUN_0c096bd0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    *(unsigned int *)((a4 + 0x10)) = ((((struct o377C_int *)(a4))->v));
    FUN_0c07d030(a4, 0x0);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    t0 = *(int *)((a4 + 0x10));
    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o28_float *)(t0))->v);
    u2 = (((struct o2C_float *)(t0))->v);
    u3 = (((struct o2C_float *)(a4))->v);
    u4 = (((struct o30_float *)(t0))->v);
    u5 = (((struct o30_float *)(a4))->v);
    u6 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u6 = 9.99999997e-07f;
    }
    u0 = (u2 - u3);
    if ((u2 - u3) == 0.0f) {
        u0 = 9.99999997e-07f;
    }
    u1 = (u4 - u5);
    if ((u4 - u5) == 0.0f) {
        u1 = 9.99999997e-07f;
    }
    t1 = t0;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        t0 = math_atan_angle16(((-u1) / u6));
        t2 = t0;
        if (0.0f > u6) {
            t2 = (t0 + 0x8000);
        }
        u2 = (u1 * u1);
        u2 = u2 + u6 * u6;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t2 + 0x4000);
        u1 = math_signed_sqrt(u2);
        t0 = math_atan_angle16(((-u1) / u0));
        t2 = t0;
        if (0.0f > u0) {
            t2 = (t0 + 0x8000);
        }
        t1 = (unsigned short)(t2 + 0x4000);
    }
    if (((int)t1 <= (int)0x8000) && ((int)t1 >= (int)0xAAA)) {
        if ((int)t1 < (int)0x1555) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x1, 0x1E, (t0), 0x1, 0x1E);
            t0 = 0x2;
        } else {
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x1, 0x13, (t1), 0x1, 0x13);
            t0 = 0x1;
        }
        *(unsigned short *)((a4 + 0x1E)) = t0;
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x12, (t0), 0x1, 0x12);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c096fe8(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    *(unsigned int *)((a4 + 0x10)) = ((((struct o377C_int *)(a4))->v));
    FUN_0c07d030(a4, 0x0);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    t0 = *(int *)((a4 + 0x10));
    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o28_float *)(t0))->v);
    u2 = (((struct o2C_float *)(t0))->v);
    u3 = (((struct o2C_float *)(a4))->v);
    u4 = (((struct o30_float *)(t0))->v);
    u5 = (((struct o30_float *)(a4))->v);
    u6 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u6 = 9.99999997e-07f;
    }
    u0 = (u2 - u3);
    if ((u2 - u3) == 0.0f) {
        u0 = 9.99999997e-07f;
    }
    u1 = (u4 - u5);
    if ((u4 - u5) == 0.0f) {
        u1 = 9.99999997e-07f;
    }
    t0 = math_atan_angle16(((-u1) / u6));
    t1 = t0;
    if (0.0f > u6) {
        t1 = (t0 + 0x8000);
    }
    u2 = (u1 * u1);
    u2 = u2 + u6 * u6;
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t1 + 0x4000);
    u1 = math_signed_sqrt(u2);
    t0 = math_atan_angle16(((-u1) / u0));
    t1 = t0;
    if (0.0f > u0) {
        t1 = (t0 + 0x8000);
    }
    if (((int)(unsigned short)(t1 + 0x4000) >= (int)0x8000) && ((int)(unsigned short)(t1 + 0x4000) <= (int)0xF555)) {
        if ((int)(unsigned short)(t1 + 0x4000) > (int)0xEAAA) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x1, 0x1F, (t0), 0x1, 0x1F);
            t0 = 0x2;
        } else {
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x1, 0x15, (t1), 0x1, 0x15);
            t0 = 0x1;
        }
        *(unsigned short *)((a4 + 0x1E)) = t0;
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x14, (t0), 0x1, 0x14);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c09cba2(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t3;
    register int t4;
    register float u15;
    register float u16;
    register float u17;
    register float t18;
    register int t20;
    register float u43;
    register float t45;
    register float t47;
    register float u50;
    register float u53;
    register int t56;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
        FUN_0c037bf6(a4, a5, a6);
        t56 = (FUN_0c038362(a4));
    } else {
        *(int *)((int)stk + 8) = 0x11;
        *(int *)((int)stk + 4) = 0x1;
        t3 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t3;
        t4 = t3;
        *(int *)((int)stk + 0) = t4;
        FUN_0c07e79c(a4, t3, 0x1, 0x11, t4, 0x1, 0x11);
        if ((*(int *)((a4 + 0x10))) != 0) {
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (((int)stk + 12) + 0x10));
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (((int)stk + 12) + 0x4));
            nlSubVector3op((((int)stk + 12) + 0x10), (((int)stk + 12) + 0x10), (((int)stk + 12) + 0x4));
            u15 = *(float *)(((int)stk + 28));
            u16 = *(float *)(((int)stk + 36));
            u17 = (u16 * u16);
            u17 = u17 + u15 * u15;
            t18 = math_signed_sqrt(u17);
            t20 = math_atan2_angle16((-(*(float *)(((int)stk + 32)))), t18);
            *(unsigned int *)((a4 + 0x34)) = t20;
            if ((t20 & 0x8000) != 0) {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) | 0xFFFF8000);
            } else {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) & 0x7FFF);
            }
            if ((int)(*(int *)((a4 + 0x34))) > 0) {
                *(unsigned int *)((a4 + 0x34)) = 0x0;
            } else {
                if ((int)(*(int *)((a4 + 0x34))) < (int)0xFFFFD556) {
                    *(unsigned int *)((a4 + 0x34)) = 0xFFFFD556;
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x34)) = 0x0;
        }
        u43 = *(float *)0xC09CDA4;
        t45 = math_cos_angle16((*(int *)((a4 + 0x34))));
        t47 = math_sin_angle16((*(int *)((a4 + 0x34))));
        u50 = (t45 * u43);
        (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u50);
        (((struct o50_float *)(a4))->v) = (-(t47 * u43));
        (((struct o5C_float *)(a4))->v) = 0.0f;
        u53 = (t45 * u43);
        (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u53);
        *(unsigned short *)((a4 + 0x1C)) = 0xC;
        *(unsigned short *)((a4 + 0x1E)) = 0x2;
        (((struct o20_ushort *)(a4))->v) = 0x5;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o1B_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1B))) + 0x1);
        t56 = 0x1B;
    }
    return t56;
}

int FUN_0c097588(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((short)(t0 + 0x1) == 4) {
            FUN_0c07d030(a4, 0x1);
            FUN_0c059e60(a4, 0xB);
            return FUN_0c059e60(a4, 0x21);
        }
        return (short)(t0 + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x18, (t0), 0x1, 0x18);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    FUN_0c07e2f4(a4, 0x64);
    *(unsigned short *)((((((struct oDC_int *)(a4))->v)) + 0x6)) = 0x1F;
    *(unsigned short *)((((((struct oEC_int *)(a4))->v)) + 0x6)) = 0x1F;
    *(unsigned short *)((((((struct oE4_int *)(a4))->v)) + 0x6)) = 0x1F;
    *(unsigned short *)((((((struct oF4_int *)(a4))->v)) + 0x6)) = 0x1F;
    (((struct o88_float *)(((((struct oDC_int *)(a4))->v))))->v) = 5.0f;
    (((struct o88_float *)(((((struct oEC_int *)(a4))->v))))->v) = 5.0f;
    (((struct o88_float *)((*(int *)(((0xC4 + a4) + 0x20)))))->v) = (1.0f / ((((struct o88_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v)));
    (((struct o88_float *)((*(int *)(((0xC4 + a4) + 0x30)))))->v) = (1.0f / ((((struct o88_float *)((*(int *)(((0xC4 + a4) + 0x28)))))->v)));
    FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x0, 0x7, 0x1, 0x12C, 0x62, 0xC25CE74, 0xC25CE80);
    FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x0, 0xB, 0x1, 0x12C, 0x62, 0xC25CE8C, 0xC25CE98);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.100000001f;
    *(unsigned short *)((a4 + 0x1C)) = 0x78;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c094784(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x23, (t0), 0x1, 0x23);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0xA;
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x7);
        FUN_0c1293a8(a4);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x1F, (t0), 0x1, 0x1F);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        FUN_0c037bf6(a4, t2, t0);
        FUN_0c059e60(a4, 0x2);
        FUN_0c059e60(a4, 0x26);
        *(unsigned int *)((a4 + 0x34)) = 0xFFFFC0B7;
        (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
        (((struct o2C_float *)(a4))->v) = ((((struct o5C_float *)(a4))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 30.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        FUN_0c129108(a4);
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}
