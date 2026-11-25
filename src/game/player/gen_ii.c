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


