/* Straight-line functions with calls and guards (batch gen_ii): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1D10_int { char p[0x1D10]; int v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o382C_ushort { char p[0x382C]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o814_uint { char p[0x814]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC18_int { char p[0xC18]; int v; };
int FUN_0c02b536(int);
int FUN_0c02b570(void);
int FUN_0c037bf6(int, int, int);
int FUN_0c067672(int);
int FUN_0c07daea(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c181bb0(int, int, int);
int FUN_0c184ddc(void);
int FUN_0c184f9a(int, int, int, int, int);
int FUN_0c184fd0(int, int);
int FUN_0c2d2050(int, int, int, int, int);
int FUN_0c2d2d8c(int);
int FUN_0c2d2e74(int);
int FUN_0c2e5ea0(int);
int FUN_0c2e638e(void);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int, int, int);
int FUN_0c2f8d7c(int, int, int, int, int, int);
int FUN_0c2f94d4(int);
int math_vec3_accumulate(int, int);
int memset(int, int, int);
int nlLineSetThickness(float);
int nlUnitMatrix(void);
extern int strcpy();
int strlen(int);
int FUN_0c172204(int a4);
int FUN_0c2e5800(void);
int FUN_0c02b692(int a4, int a5, int a6);
int FUN_0c0ba628(int a4, int a5, int a6);
int FUN_0c2f8b40(int a4);
int FUN_0c185080(int a4, int a5, int a6);

int FUN_0c172204(int a4)
{
    int stk[7];
    register int t0;
    register float u5;
    register int t13;
    register int t14;
    register int t15;
    register int t19;
    register float u25;
    register float u33;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    nlUnitMatrix();
    nlLineSetThickness(10.0f);
    u5 = -100.0f;
    if ((*(short *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1C))) == 0) {
        u5 = 100.0f;
    }
    *(float *)(((int)stk + 24)) = u5;
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        *(float *)(((int)stk + 16)) = -180.0f;
    } else {
        *(float *)(((int)stk + 16)) = 20.0f;
    }
    *(float *)(((int)stk + 20)) = 200.0f;
    t13 = 0x10;
    t14 = (*(int *)((((*(signed char *)(((0x371E + (((short)t0 * (short)0x3938) + 0xC532498)) + 0x0))) << 2) + ((((FUN_0c067672((((short)t0 * (short)0x3938) + 0xC532498))) * 0x58) + 0xC28865C) + ((short)(*(signed char *)(((0x371A + (((short)t0 * (short)0x3938) + 0xC532498)) + 0x0))) * (short)0x2C)))));
    for (;;) {
        t15 = 0x10;
        for (;;) {
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 16))) + 3.0f);
            *(float *)(((int)stk + 8)) = (*(float *)(((int)stk + 20)));
            *(float *)(((int)stk + 12)) = (*(float *)(((int)stk + 24)));
            t19 = *(short *)((t14 + 0x0));
            t14 = (t14 + 0x2);
            FUN_0c181bb0((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4), ((((((unsigned short)t19 & 0xF800) << 8) | ((((0x7E0 & (unsigned short)t19) << 2) << 2) << 1)) | ((((unsigned short)t19 & 0x1F) << 2) << 1)) | 0xFF000000));
            u25 = 12.0f;
            if ((*(short *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1C))) == 0) {
                u25 = 9.0f;
            }
            t15 = (t15 - 0x1);
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u25);
            if (t15 == 0) {
                break;
            }
        }
        if ((*(signed char *)(((int)stk + 0))) == 0) {
            *(float *)(((int)stk + 16)) = -180.0f;
        } else {
            *(float *)(((int)stk + 16)) = 20.0f;
        }
        u33 = 10.0f;
        if ((*(short *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1C))) == 0) {
            u33 = 6.80000019f;
        }
        t13 = (t13 - 0x1);
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - u33);
        if (t13 == 0) {
            break;
        }
    }
    return 0x14;
}

int FUN_0c2e5800(void)
{
    int stk[4];
    register int t11;
    register int t37;
    register int t22;
    register int t29;
    register int t42;
    register int t44;
    register int t67;

    FUN_0c2e732c();
    FUN_0c2e732c();
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    FUN_0c2e638e();
    for (;;) {
        *(unsigned int *)(((int)stk + 12)) = (((*(int *)(((int)stk + 12))) << 2) << 2);
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + (unsigned char)(FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))))));
        FUN_0c2e638e();
        t11 = *(signed char *)(((*(int *)0xC304178) + 0x0));
        if (((unsigned char)t11 != (unsigned char)(*(signed char *)0xC8D6526)) && (((unsigned char)t11 != 61) && ((unsigned char)t11 != 84))) continue;
        break;
    }
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) & 0xFFFFFFFE);
    if ((unsigned char)(*(signed char *)(((*(int *)0xC304178) + 0x0))) != 61) {
        t37 = 0x1;
        if ((unsigned char)(*(signed char *)(((*(int *)0xC304178) + 0x0))) == 84) {
            FUN_0c2e638e();
            t22 = FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))));
            FUN_0c2e638e();
            t37 = t22;
            if ((*(signed char *)(((*(int *)0xC304178) + 0x0))) != (*(signed char *)0xC8D6526)) {
                t29 = FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))));
                FUN_0c2e638e();
                t37 = (((t22 << 2) << 2) + t29);
            }
        }
        t42 = t37;
        if ((unsigned char)t37 == 0xFF) {
            t42 = (t37 - 1);
        }
        if ((int)0x1 <= (int)(unsigned char)t42) {
            t44 = 0x1;
            for (;;) {
                FUN_0c2e76c8((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), 0x10, 0x8, ((int)stk + 0));
                FUN_0c2e7200(0xC3011CC);
                FUN_0c2e7200(((int)stk + 0));
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x4);
                if ((int)(unsigned char)t44 > 0) {
                    if (((int)((int)(unsigned char)t44 % (int)0x8)) == 0) {
                        FUN_0c2e732c();
                    }
                }
                t44 = (t44 + 0x1);
                if ((int)(unsigned char)t44 > (int)(unsigned char)t42) {
                    break;
                }
            }
        }
    } else {
        FUN_0c2e638e();
        t67 = 0x0;
        for (;;) {
            t67 = (t67 << 2);
            t67 = (t67 << 2);
            t67 = (t67 + (unsigned char)(FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))))));
            FUN_0c2e638e();
            if ((*(signed char *)(((*(int *)0xC304178) + 0x0))) == (*(signed char *)0xC8D6526)) {
                break;
            }
        }
        *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = t67;
    }
    return (FUN_0c2e732c());
}

int FUN_0c02b692(int a4, int a5, int a6)
{
    int stk[13];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t10;
    register int t14;
    register int t42;
    register int t21;
    register int t22;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register int t33;
    register int t35;
    register int t37;
    register int t38;
    register int t47;
    register int t49;
    register int t18;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)0xC30B70C;
    t3 = ((int (*)(int, int, int))(strcpy))(((t0 + 0x102C) + ((((((struct o1D10_int *)(t0))->v)) << 2) << 1)), a4, a6);
    t4 = *(int *)0xC30B70C;
    t5 = (((struct o1D10_int *)(t4))->v);
    t6 = ((int (*)(int, int))(strcpy))(((t4 + 0x11BC) + (((t5 << 2) << 2) + t5)), a5);
    if ((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
        t10 = (strlen(a5));
        *(int *)((int)stk + 0) = t10;
        *(unsigned int *)(((int)stk + 4)) = (((strlen(a6)) + t10) + 0xD);
        t18 = ((-(strlen(a5))) + 0x33);
    } else {
        t14 = (strlen(a5));
        *(int *)((int)stk + 0) = t14;
        *(unsigned int *)(((int)stk + 4)) = (((strlen(a6)) + t14) + 0x1);
        t18 = ((-(strlen(a5))) + 0x3F);
    }
    t42 = a6;
    if ((int)(*(int *)(((int)stk + 4))) > (int)0x40) {
        t21 = a6;
        t22 = 0x0;
        for (;;) {
            t24 = FUN_0c02b536((*(signed char *)((t21 + 0x0))));
            if (t24 == 0) {
                if ((int)(t22 + 0x1) < (int)t18) {
                    t25 = *(signed char *)((t21 + 0x0));
                    t21 = (t21 + 0x1);
                    t26 = t22;
                    t22 = (t22 + 0x1);
                    *(unsigned char *)(((((int)stk + 4) + 0x4) + t26)) = t25;
                    t27 = *(signed char *)((t21 + 0x0));
                    t21 = (t21 + 0x1);
                    t28 = t22;
                    t22 = (t22 + 0x1);
                    *(unsigned char *)(((((int)stk + 4) + 0x4) + t28)) = t27;
                    if ((int)t22 >= (int)t18) {
                        break;
                    }
                    continue;
                }
                break;
            }
            t29 = *(signed char *)((t21 + 0x0));
            t21 = (t21 + 0x1);
            t30 = t22;
            t22 = (t22 + 0x1);
            *(unsigned char *)(((((int)stk + 4) + 0x4) + t30)) = t29;
            if ((int)t22 >= (int)t18) {
                break;
            }
        }
        *(unsigned char *)(((((int)stk + 4) + 0x4) + t22)) = 0x0;
        t33 = *(int *)0xC30B70C;
        t35 = ((int (*)(int, int))(strcpy))(((t33 + 0x150E) + (((((struct o1D10_int *)(t33))->v)) * 0x29)), (((int)stk + 4) + 0x4));
        FUN_0c02b570();
        t37 = *(int *)0xC30B70C;
        t38 = (((struct o1D10_int *)(t37))->v);
        *(unsigned char *)((((((t38 << 2) << 2) + t38) + (t37 + 0x11BC)) + 0x0)) = 0x0;
        t42 = t21;
    }
    t47 = *(int *)0xC30B70C;
    t49 = ((int (*)(int, int))(strcpy))(((t47 + 0x150E) + (((((struct o1D10_int *)(t47))->v)) * 0x29)), t42);
    return (FUN_0c02b570());
}

int FUN_0c0ba628(int a4, int a5, int a6)
{
    register int t0;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x1, 0x14, (t0), 0x1, 0x14);
            t0 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 8.0f;
            (((struct o94_float *)(t0))->v) = 8.0f;
            t0 = (((struct o11C_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 8.0f;
            (((struct o94_float *)(t0))->v) = 8.0f;
            FUN_0c080320(a4, 1.29999995f);
        }
    } else {
        t0 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t0 != 0) {
            return FUN_0c085cac(a4, 0x5, 0x7);
        }
    }
    (((struct o382C_ushort *)(a4))->v) = 0x0;
    (((struct o3749_uchar *)(a4))->v) = 0x1;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 != 1) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x1, 0x11, (t0), 0x1, 0x11);
            FUN_0c07daea(a4);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c2f8b40(int a4)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t14;
    register int t21;
    register int t38;
    register int t7;
    int t8;
    register int t9;
    int t10;
    register int t16;
    int t17;
    register int t18;
    int t19;

    *(unsigned char *)(((int)stk + 8)) = a4;
    if ((((((struct o0_int *)0xC8D65E4)->v)) & 128) != 0) {
        t1 = *(signed char *)0xC8D6475;
        t2 = *(signed char *)0xC8D6476;
        t3 = *(signed char *)0xC8D6472;
        t4 = *(signed char *)0xC8D6474;
        t6 = *(signed char *)0xC8D6477;
        t14 = (t6 & 0xF7);
        if (((((unsigned char)(*(signed char *)0xC8D645B) & 0x3) == 0) && ((t7 = *(signed char *)0xC8D644E, ((unsigned char)t7 & 128) != 0) && (t8 = *(signed char *)0xC8D6464, ((unsigned char)t8 & 8) != 0))) || ((t9 = *(signed char *)0xC8D644E, ((unsigned char)t9 & 128) == 0) && (t10 = *(signed char *)0xC8D6464, ((unsigned char)t10 & 128) != 0))) {
            t14 = (t6 | 0x8);
        }
        t21 = (((((unsigned char)t1 << 8) + ((unsigned char)t2 << 16)) + (((unsigned char)t3 << 16) << 8)) + (unsigned char)t4);
        if (((((unsigned char)(*(signed char *)0xC8D645B) & 0x3) == 0) && ((t16 = *(signed char *)0xC8D644E, ((unsigned char)t16 & 128) != 0) && (t17 = *(signed char *)0xC8D6464, ((unsigned char)t17 & 0xF) == 1))) || ((t18 = *(signed char *)0xC8D644E, ((unsigned char)t18 & 128) == 0) && (t19 = *(signed char *)0xC8D6464, ((unsigned char)t19 & 0xF0) == 16))) {
            t21 = ((((((unsigned char)t1 << 8) + ((unsigned char)t2 << 16)) + (((unsigned char)t3 << 16) << 8)) + (unsigned char)t4) & 0xFFFFFFFE);
        }
        FUN_0c2d2d8c(t14);
        FUN_0c2d2e74(t21);
    }
    if ((*(signed char *)(((int)stk + 8))) != 0) {
        *(int *)((int)stk + 4) = 0x1;
        *(int *)((int)stk + 0) = 0xC8E00EF;
        FUN_0c2f8d7c(0xC8E00E8, 0xC8E00EC, 0xC8E00ED, 0xC8E00EE, 0xC8E00EF, 0x1);
    }
    (((struct oA_uchar *)0xC8D65E4)->v) = (FUN_0c2f94d4((*(signed char *)0xC8E00ED)));
    t38 = (*(signed char *)0xC8E00EF);
    *(int *)((int)stk + 4) = t38;
    return (FUN_0c2d2050((*(int *)0xC8E00E8), (*(signed char *)0xC8E00EC), (*(signed char *)0xC8E00ED), (*(signed char *)0xC8E00EE), t38));
}

int FUN_0c185080(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t4;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;
    register int t12;
    register int t13;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t23;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 4)) = 0xC8A2430;
    memset(0xC8A2430, 0x0, 0x800);
    t2 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t2 + 0x1);
    *(unsigned char *)((((t2 + 0x1) - 0x1) + 0x0)) = ((int)(((((struct oC18_int *)(((short)((short)t0 * (short)0xC24) + 0xC89C310)))->v)) & 0xFF00) >> 8);
    t4 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t4 + 0x1);
    *(unsigned char *)((((t4 + 0x1) - 0x1) + 0x0)) = (*(signed char *)((((short)((short)t0 * (short)0xC24) + 0xC89C310) + 0xC18)));
    t6 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t6 + 0x1);
    *(unsigned char *)((((t6 + 0x1) - 0x1) + 0x0)) = 0x1;
    t7 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t7 + 0x1);
    *(unsigned char *)((((t7 + 0x1) - 0x1) + 0x0)) = 0x0;
    t8 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t8 + 0x1);
    *(unsigned char *)((((t8 + 0x1) - 0x1) + 0x0)) = 0x0;
    t9 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t9 + 0x1);
    *(unsigned char *)((((t9 + 0x1) - 0x1) + 0x0)) = 0x1;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x6);
    *(unsigned int *)(((int)stk + 8)) = (0x818 + ((short)((short)t0 * (short)0xC24) + 0xC89C310));
    t11 = 0x1;
    for (;;) {
        t12 = FUN_0c184fd0(((int)stk + 4), (((int)stk + 4) + 0x4));
        if (t12 == 0) {
            break;
        }
        t11 = 0x0;
    }
    if (t11 != 0) {
        *(unsigned int *)(((int)stk + 8)) = 0xC89BF10;
        for (;;) {
            t13 = FUN_0c184fd0(((int)stk + 4), (((int)stk + 4) + 0x4));
            if (t13 == 0) {
                break;
            }
        }
    }
    t15 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t15 + 0x1);
    *(unsigned char *)((((t15 + 0x1) - 0x1) + 0x0)) = 0x0;
    t16 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t16 + 0x1);
    *(unsigned char *)((((t16 + 0x1) - 0x1) + 0x0)) = 0x0;
    t17 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t17 + 0x1);
    *(unsigned char *)((((t17 + 0x1) - 0x1) + 0x0)) = 0x1;
    t18 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t18 + 0x1);
    *(unsigned char *)((((t18 + 0x1) - 0x1) + 0x0)) = 0x0;
    t19 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t19 + 0x1);
    *(unsigned char *)((((t19 + 0x1) - 0x1) + 0x0)) = 0x1;
    memset((((short)((short)t0 * (short)0xC24) + 0xC89C310) + 0xE), 0x0, 0x800);
    *(unsigned int *)((((short)((short)t0 * (short)0xC24) + 0xC89C310) + 0x4)) = 0x1;
    (((struct o814_uint *)(((short)((short)t0 * (short)0xC24) + 0xC89C310)))->v) = ((FUN_0c184ddc()) + (*(int *)(((int)stk + 16))));
    t23 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (t23 - 0xC8A2430);
    return (FUN_0c184f9a((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 20))), 0x3500, 0xC8A2430, (t23 - 0xC8A2430)));
}
