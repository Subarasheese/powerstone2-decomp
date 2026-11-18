/* Straight-line functions with calls and guards (batch gen_hv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[5]; } Stk5;
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
int FUN_0c03f444(int, int, int, int);
int FUN_0c0522be(int);
int FUN_0c056be6(int, int, int);
float math_cos_angle16(int);
int math_mat_transform_vector(int, int);
float math_sin_angle16(int);
int nlCalcPoint(int, int);
int nlRotateAY(int);
int nlUnitMatrix(void);
float FUN_0c0ae710(int a4, int a5);
void FUN_0c137a9a(int a4, int a5, int a6, int a7);
void FUN_0c137c7c(int a4, int a5, int a6, int a7);
void FUN_0c1396c4(int a4, int a5, int a6, int a7);
void FUN_0c146fa2(int a4, int a5, int a6, int a7);
void FUN_0c1582e8(int a4, int a5, int a6, int a7);
void FUN_0c15ab94(int a4, int a5, int a6, int a7);
void FUN_0c163f66(int a4, int a5, int a6, int a7);
void FUN_0c060d74(int a4);
void FUN_0c0bbf58(int a4, Stk3 s);
int FUN_0c16d404(int a4, int a5, float f4);
int FUN_0c0ae6dc(int a4, int a5, int a6);
int FUN_0c056ce0(int a4, int a5);
void FUN_0c1585c4(int a4, int a5, int a6, int a7);
void FUN_0c15ae2e(int a4, int a5, int a6, int a7);
void FUN_0c15af18(int a4, int a5, int a6, int a7);
int FUN_0c056e44(int a4, int a5);
void FUN_0c0d0d00(int a4, int a5);
void FUN_0c0e9220(int a4, int a5);
void FUN_0c0dd728(int a4, int a5);
void FUN_0c137f74(int a4, int a5);
void FUN_0c1675dc(int a4, int a5);

float FUN_0c0ae710(int a4, int a5)
{
    register float t3;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(a5) = *(struct mv3 *)(0xC1C655C); }
    (((struct o8_float *)(a5))->v) = (math_cos_angle16((*(int *)((a4 + 0x38)))));
    t3 = math_sin_angle16((*(int *)((a4 + 0x38))));
    *(float *)((a5 + 0x0)) = t3;
    (((struct o4_float *)(a5))->v) = 0.0f;
    return t3;
}

void FUN_0c137a9a(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x4, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1377FE;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c137c7c(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC137AD2;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c1396c4(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13954C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c146fa2(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC146B78;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c1582e8(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC158014;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c15ab94(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15A8BC;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
    }
}

void FUN_0c163f66(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x3, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC163D06;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c060d74(int a4)
{
    if ((*(signed char *)((a4 + 0x126))) == 0) {
        if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 9.0f);
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x178 + a4)) = *(struct mv3 *)((a4 + 0x28)); }
}

void FUN_0c0bbf58(int a4, Stk3 s)
{
    int stk[13];
    register int t0;
    register int t1;

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    t0 = *(int *)0xC472664;
    if ((int)t0 < (int)0x20) {
        *(unsigned int *)(((t0 << 2) + 0xC472464)) = a4;
        t1 = *(int *)0xC472664;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t1 << 1) + t1) << 2) + 0xC4724E4)) = *(struct mv3 *)((((int)stk + 4) + 0x4)); }
        *(unsigned int *)0xC472664 = ((*(int *)0xC472664) + 0x1);
    }
}

int FUN_0c16d404(int a4, int a5, float f4)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC203D54); }
    *(float *)(((int)stk + 16)) = f4;
    nlUnitMatrix();
    nlRotateAY((*(int *)(((*(int *)(((int)stk + 4))) + 0x38))));
    return (nlCalcPoint((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0)))));
}

int FUN_0c0ae6dc(int a4, int a5, int a6)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a6) = *(struct mv3 *)(0xC1C655C); }
    return math_mat_transform_vector(a6, ((*(int *)(((((*(int *)(((a5 << 2) + 0xC1C6574))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28));
}

int FUN_0c056ce0(int a4, int a5)
{
    int stk[32];
    register int t0;
    register int t2;
    register int t3;

    t0 = 0xC1B9634;
    t2 = ((int)stk + 0);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC1B9634 + 128)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)(a4); }
    *(unsigned int *)((((int)stk + 0) + 0x20)) = a5;
    return (FUN_0c056be6(0xC24199C, ((int)stk + 0), ((int)stk + 0)));
}

void FUN_0c1585c4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC158340;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
    }
}

void FUN_0c15ae2e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15ACFE;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
    }
}

void FUN_0c15af18(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15AE60;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
    }
}

int FUN_0c056e44(int a4, int a5)
{
    int stk[5];

    { struct mv5 { int w[5]; }; *(struct mv5 *)(((int)stk + 0)) = *(struct mv5 *)((*(int *)(((a4 << 2) + 0xC241B54)))); }
    *(unsigned char *)(((int)stk + 9)) = ((*(signed char *)(((int)stk + 9))) + a5);
    return (FUN_0c0522be(((int)stk + 0)));
}

void FUN_0c0d0d00(int a4, int a5)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((a4 * 0x3938) + 0xC5324C0)) = *(struct mv3 *)(((((a5 << 1) + a5) << 2) + 0xC541068)); }
}

void FUN_0c0e9220(int a4, int a5)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((a4 * 0x3938) + 0xC5324C0)) = *(struct mv3 *)(((((a5 << 1) + a5) << 2) + 0xC541068)); }
}

void FUN_0c0dd728(int a4, int a5)
{
    (((struct o15_uchar *)(a4))->v) = a5;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(0xC1CA150); }
}

void FUN_0c137f74(int a4, int a5)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a5) = *(struct mv3 *)(((a4 * 0x3938) + 0xC535CA4)); }
}

void FUN_0c1675dc(int a4, int a5)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a5) = *(struct mv3 *)(((a4 * 0x3938) + 0xC535CA4)); }
}
