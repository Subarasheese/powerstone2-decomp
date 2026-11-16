/* Straight-line functions with calls and guards (batch gen_pf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o3726_uchar { char p[0x3726]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o41F_uchar { char p[0x41F]; unsigned char v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c016244(void);
int FUN_0c016252(int);
int FUN_0c01626a(void);
int FUN_0c016278(void);
int FUN_0c016a88(int, int, int, int, int, int, int, int);
int FUN_0c017a2e(void);
int FUN_0c017be8(void);
int FUN_0c017c96(void);
int FUN_0c017d4c(void);
int FUN_0c037bf6(int);
int FUN_0c03ea04(int, int);
int FUN_0c059c16(int, int);
int FUN_0c074602(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0c241a(int, int, int, float);
int FUN_0c0c2c30(int);
int FUN_0c0d04b4(int);
int FUN_0c187798(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c07a208(int a4);
int FUN_0c0dcaac(int a4);
int FUN_0c0f1360(int a4);
int FUN_0c0f6188(int a4);
int FUN_0c0f57c4(int a4);
int FUN_0c0f5ebc(int a4);
int FUN_0c016978(void);
int FUN_0c016930(void);
int FUN_0c0171f0(void);
void FUN_0c0c3054(int a4, int a5, int a6, float f4);

int FUN_0c07a208(int a4)
{
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
    FUN_0c074602(a4);
    (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) / 10.0f);
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x30, 0xFFFFFFFF, 0x4, 0x30);
    FUN_0c037bf6(a4);
    (((struct o372C_uchar *)(a4))->v) = 0x0;
    (((struct o3726_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x78;
    *(unsigned short *)((a4 + 0x1E)) = 0x3;
    FUN_0c187798(0x0);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c0dcaac(int a4)
{
    register int t13;
    register int t14;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1C984C)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1C9858)));
    *(unsigned short *)0xC540996 = 0x0;
    if ((*(signed char *)0xC54098D) != 14) {
        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    }
    t13 = *(signed char *)0xC542237;
    t14 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t13 << 2) << 1) + t13) << 2) + 0xC286D34) + (((t14 << 1) + t14) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int FUN_0c0f1360(int a4)
{
    register int t13;
    register int t14;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CD2CC)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CD2D8)));
    *(unsigned short *)0xC540996 = 0x0;
    if ((*(signed char *)0xC54098D) != 4) {
        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    }
    t13 = *(signed char *)0xC542237;
    t14 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t13 << 2) << 1) + t13) << 2) + 0xC286D34) + (((t14 << 1) + t14) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int FUN_0c0f6188(int a4)
{
    register int t13;
    register int t14;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CE58C)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CE590)));
    *(unsigned short *)0xC540996 = 0x0;
    if ((*(signed char *)0xC54098D) != 4) {
        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    }
    t13 = *(signed char *)0xC542237;
    t14 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t13 << 2) << 1) + t13) << 2) + 0xC286D34) + (((t14 << 1) + t14) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int FUN_0c0f57c4(int a4)
{
    register int t13;
    register int t14;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CE33C)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CE340)));
    *(unsigned short *)0xC540996 = 0x0;
    if ((*(signed char *)0xC54098D) != 4) {
        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    }
    t13 = *(signed char *)0xC542237;
    t14 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t13 << 2) << 1) + t13) << 2) + 0xC286D34) + (((t14 << 1) + t14) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int FUN_0c0f5ebc(int a4)
{
    register int t13;
    register int t14;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CE4C0)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CE4C4)));
    *(unsigned short *)0xC540996 = 0x0;
    if ((*(signed char *)0xC54098D) != 4) {
        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    }
    t13 = *(signed char *)0xC542237;
    t14 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t13 << 2) << 1) + t13) << 2) + 0xC286D34) + (((t14 << 1) + t14) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int FUN_0c016978(void)
{
    int stk[1];
    register int t1;
    register int t2;

    t1 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
    if (((unsigned char)t1 & 3) == 0) {
        t2 = FUN_0c01626a();
        if (t2 == 0) {
            FUN_0c016278();
            FUN_0c016252(0x0);
        } else {
            if ((*(signed char *)0xC304C24) != 0) {
                FUN_0c016a88(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            }
            FUN_0c016278();
            FUN_0c016252(0x3);
        }
        FUN_0c017be8();
        return FUN_0c017a2e();
    }
    return (unsigned char)t1;
}

int FUN_0c016930(void)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t11;

    t1 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
    if (((unsigned char)t1 & 1) == 0) {
        t2 = FUN_0c01626a();
        if (t2 != 0) {
            if ((*(signed char *)0xC304C24) != 0) {
                FUN_0c016a88(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            }
            FUN_0c016278();
            t11 = FUN_0c016244();
            if ((int)t11 < (int)0x2) {
                FUN_0c016252(0x3);
            }
            FUN_0c017be8();
            return FUN_0c017a2e();
        }
        return t2;
    }
    return (unsigned char)t1;
}

int FUN_0c0171f0(void)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t13;

    t1 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
    if (((unsigned char)t1 & 3) == 0) {
        t2 = FUN_0c01626a();
        if (t2 == 0) {
            FUN_0c016278();
            t13 = 0x0;
        } else {
            if ((*(signed char *)0xC304C24) != 0) {
                FUN_0c016a88(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            }
            FUN_0c016278();
            t13 = 0x3;
        }
        FUN_0c016252(t13);
        FUN_0c017d4c();
        return FUN_0c017c96();
    }
    return (unsigned char)t1;
}

void FUN_0c0c3054(int a4, int a5, int a6, float f4)
{
    if (a4 != 0) {
        if ((*(signed char *)((a4 + 0x0))) == 9) {
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o41D_uchar *)(a4))->v) = 0x8;
            (((struct o41F_uchar *)(a4))->v) = a6;
            *(unsigned char *)((a4 + 0x1)) = a5;
            FUN_0c0c241a(a4, a5, a6, f4);
            FUN_0c0c2c30(a4);
    return;
        }
        return;
    }
}
