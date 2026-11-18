/* Straight-line functions with calls and guards (batch gen_gg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o38E6_ushort { char p[0x38E6]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o42C_short { char p[0x42C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o78_uchar { char p[0x78]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c036de8(int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int, int, int);
int FUN_0c03e5f4(int, float);
int FUN_0c03e642(int, int, int, int, float);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f258(int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c059c16(int, int);
int FUN_0c059c54(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c07e420(int, int);
int FUN_0c08d170(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0d04b4(int);
int FUN_0c120362(void);
int FUN_0c120504(int, int, int, int);
int FUN_0c124da6(int, int);
int FUN_0c125254(int, int);
int FUN_0c150160(int, int, float, float, float, float);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c16be0a(int, int, int, int);
int FUN_0c176b90(int);
int FUN_0c17c450(int);
int FUN_0c17e0f0(int);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c1a2184(void);
int FUN_0c2d562a(int, int);
int math_mat_get_translate(int, int);
int math_vec3_accumulate(int, int);
int memset(int, int, int);
int nlObjPutSetLightDirectionV(int);
int nlRand(void);
int thunk_FUN_0c03e08c(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c138a00(int a4, int a5, int a6, int a7);
int FUN_0c14a314(int a4, int a5, int a6, int a7);
int FUN_0c03e7b6(void);
int FUN_0c0efdda(int a4, int a5, int a6, int a7);
int FUN_0c0f4f28(int a4);
int FUN_0c126c4c(int a4, int a5, int a6, int a7);
int FUN_0c0ced88(int a4, int a5, int a6, int a7);
void FUN_0c0d0dd8(int a4);
int FUN_0c13eece(int a4, int a5, int a6, int a7);
int FUN_0c14f0c2(int a4, int a5, int a6, int a7);
int FUN_0c15af80(int a4, int a5, int a6, int a7);
int FUN_0c163a70(int a4, int a5, int a6, int a7);
int FUN_0c0cb38a(int a4, int a5, int a6, int a7);
int FUN_0c0f0c5e(int a4, int a5, int a6, int a7);
int FUN_0c128088(int a4);
int FUN_0c15a5aa(int a4, int a5, int a6, int a7);
int FUN_0c15a808(int a4, int a5, int a6, int a7);
int FUN_0c16c0c6(int a4);
int FUN_0c08d658(int a4, int a5, int a6);
int FUN_0c0cb266(int a4, int a5, int a6, int a7);
int FUN_0c08d360(int a4, int a5, int a6);
int FUN_0c0e6dd8(int a4, int a5, int a6, int a7);
int FUN_0c150e52(int a4, int a5, int a6, int a7);
int FUN_0c1371a0(int a4, int a5, int a6, int a7);
int FUN_0c035e46(int a4, int a5);
int FUN_0c0a3bd6(int a4);
int FUN_0c119c18(int a4, int a5, int a6, int a7);
int FUN_0c14f960(int a4, int a5);
void FUN_0c03f950(void);
void FUN_0c03f64c(void);
void FUN_0c03f7ce(void);
int FUN_0c15173c(int a4, int a5, int a6, int a7);
int FUN_0c0f0ad8(int a4, int a5, int a6, int a7);
int FUN_0c03faf8(void);
int FUN_0c03fc28(void);
int FUN_0c03e2d2(int a4, int a5, int a6, int a7);
void FUN_0c1535b0(int a4, int a5, int a6, int a7);
int FUN_0c2d328c(int a4, int a5);
void FUN_0c150be8(int a4, int a5, int a6, int a7);
int FUN_0c11ef66(void);

int FUN_0c138a00(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t11;
    register int t4;
    register int t8;

    *(unsigned char *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 24)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x4, a7);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 28)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13831C;
        *(unsigned short *)((t0 + 0x1E)) = (*(short *)(((int)stk + 24)));
        FUN_0c07e2f4(t0, 0x33);
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t4 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t4));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t4)), 0x0, 0xF0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 20)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
        t8 = nlRand();
        t11 = ((~(((~t8) + 0x1) & 0x1)) + 0x1);
        if ((int)t8 >= 0) {
            t11 = (t8 & 0x1);
        }
        *(unsigned char *)((t0 + 0x2)) = t11;
    }
    return t11;
}

int FUN_0c14a314(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t13;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t13 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x6, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        FUN_0c03744a(((((struct oC8_int *)(t0))->v)), 0x0, 0x6, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned int *)((t0 + 0x4)) = 0xC14A3A8;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC202A44); }
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((t0 + 0x1C)) = a5;
        t13 = a5;
    }
    return t13;
}

int FUN_0c03e7b6(void)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t7;

    t0 = *(signed char *)0xC542237;
    t3 = *(signed char *)((((*(signed char *)0xC54223C) + (0xC1B75BC + ((t0 << 1) + t0))) + 0x0));
    FUN_0c03e642(0x0, (*(int *)((((((t3 << 2) + t3) << 2) + 0xC1B742C) + 0x0))), (((((t3 << 2) + t3) << 2) + 0xC1B742C) + 0x4), (*(int *)((((((t3 << 2) + t3) << 2) + 0xC1B742C) + 0x10))), 1.0f);
    t7 = *(signed char *)0xC542237;
    FUN_0c03e5f4(0x0, (*(float *)(((((*(signed char *)0xC54223C) << 2) + (0xC1B7684 + (((t7 << 1) + t7) << 2))) + 0x0))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((((t3 << 2) + t3) << 2) + 0xC1B742C) + 0x4)); }
    FUN_0c17c450(((int)stk + 0));
    nlObjPutSetLightDirectionV(((int)stk + 0));
    return (FUN_0c03e642(0x6, (*(int *)((((((t3 << 2) + t3) << 2) + 0xC1B742C) + 0x0))), (((((t3 << 2) + t3) << 2) + 0xC1B742C) + 0x4), (*(int *)((((((t3 << 2) + t3) << 2) + 0xC1B742C) + 0x10))), 1.0f));
}

int FUN_0c0efdda(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0xE0, (*(int *)0xC4B410C));
        *(unsigned int *)((t0 + 0x4)) = 0xC0EFC04;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x2)) = a5;
        FUN_0c07e420(t0, 0x6);
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c064d24(t0, 0x2, 0x10, 0x0, 0x100, 0xFFFFFFAF, 0x0, 0x0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
    }
    return t0;
}

int FUN_0c0f4f28(int a4)
{
    int stk[10];
    register float u2;
    register float u3;
    register int t4;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a4;
    math_mat_get_translate((((((struct oC4_int *)(a4))->v)) + 0x28), (((int)stk + 0) + 0x4));
    u2 = (((struct o0_float *)0xC0F503C)->v);
    u3 = (((struct o4_float *)0xC0F503C)->v);
    t4 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)((((int)stk + 0) + 0x4)); }
        *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + ((float)t4 + u2));
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = 1.0f;
        t9 = FUN_0c150160((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), ((((struct o14_float *)0xC0F503C)->v)), ((((struct o10_float *)0xC0F503C)->v)), ((((struct oC_float *)0xC0F503C)->v)), u3);
        t4 = (t4 + 0x6F);
        if ((int)t4 >= (int)0x456) {
            break;
        }
    }
    return t9;
}

int FUN_0c126c4c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t9;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x1, 0x4, a7);
    t9 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t1 << 2) + (0xC4 + t0)) + 0x0))), (t1 + 0x1), 0xE, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t1 = (t1 + 0x1);
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC126CDC;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC201B8C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(0xC201B98); }
        *(unsigned short *)((t0 + 0x1C)) = 0x50;
        t9 = 0x50;
    }
    return t9;
}

int FUN_0c0ced88(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = FUN_0c03f444(0x9, 0x0, 0x0, a7);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0CED40;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x40;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct o41C_uchar *)(t0))->v) = 0xCB;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1C)) = ((((struct o24_short *)(a4))->v));
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct o41D_uchar *)(t0))->v) = 0x2;
        (((struct o422_uchar *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned char *)((t0 + 0x2)) = a5;
        (((struct o48_float *)(t0))->v) = 0.5f;
        (((struct o44_float *)(t0))->v) = 0.5f;
        (((struct o40_float *)(t0))->v) = 0.5f;
        FUN_0c064d5a(t0, 0xC278A84);
        (((struct o12E_ushort *)(t0))->v) = 0x0;
        (((struct o12C_ushort *)(t0))->v) = 0x0;
        t3 = 0x12C;
    }
    return t3;
}

void FUN_0c0d0dd8(int a4)
{
    int stk[3];
    register int t12;
    register int t13;
    register int t18;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1C74B8)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1C74C4)));
    *(unsigned short *)0xC540996 = 0x0;
    if ((*(signed char *)0xC54098D) != 13) {
        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    }
    t12 = *(signed char *)0xC542237;
    t13 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t12 << 2) << 1) + t12) << 2) + 0xC286D34) + (((t13 << 1) + t13) << 2)));
    FUN_0c03ea04(0x2, 0x0);
    t18 = *(signed char *)0xC54223C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC5410B8) = *(struct mv3 *)(((((t18 << 1) + t18) << 2) + 0xC1C74D0)); }
}

int FUN_0c13eece(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t9;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned int *)((t0 + 0x38)) = a5;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13EDEE;
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)((a4 + 0x40)); }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x31;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        t9 = 0xA8;
    }
    return t9;
}

int FUN_0c14f0c2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t8;
    register int t4;
    register int t5;
    register float u7;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t8 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x3, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC14F04C;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct oAC_ushort *)(t0))->v) = 0x38;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
        t4 = nlRand();
        t5 = ((~(((~t4) + 0x1) & 0x3F)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0x3F);
        }
        *(unsigned int *)((t0 + 0x3C)) = ((t5 << 8) << 2);
        u7 = *(float *)(((a4 << 2) + 0xC202D20));
        (((struct o48_float *)(t0))->v) = u7;
        (((struct o44_float *)(t0))->v) = u7;
        (((struct o40_float *)(t0))->v) = u7;
        t8 = 0x40;
    }
    return t8;
}

int FUN_0c15af80(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t5;
    register float u4;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t5 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15A404;
        (((struct oAC_ushort *)(t0))->v) = 0x23F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x58)) = *(struct mv3 *)(a6); }
        (((struct oB4_float *)(t0))->v) = 0.0f;
        (((struct oB8_float *)(t0))->v) = 0.0f;
        (((struct oBC_float *)(t0))->v) = 1.0f;
        u4 = *(float *)0xC2A2AE8;
        (((struct o48_float *)(t0))->v) = u4;
        (((struct o44_float *)(t0))->v) = u4;
        (((struct o40_float *)(t0))->v) = u4;
        t5 = 0x40;
    }
    return t5;
}

int FUN_0c163a70(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t11;

    t0 = FUN_0c03f444(0x1, 0x0, 0x4, a7);
    t11 = 0x0;
    if (t0 != 0) {
        switch (a7) {
        case 0:
            FUN_0c07e3ae(t0, 0x4D);
            break;
        case 1:
            FUN_0c07e3ae(t0, 0x4E);
            break;
        case 2:
            FUN_0c07e3ae(t0, 0x4F);
            break;
        }
        FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)a4)), (~((int)0x1 << (int)a4)), 0xFFFFFEF0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(a6); }
        t11 = t0;
    }
    return t11;
}

int FUN_0c0cb38a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;

    t0 = FUN_0c03f444(0x2, 0x0, 0x0, a7);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0CB310;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x40;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 0.100000001f;
        FUN_0c064d5a(t0, 0xC278958);
        (((struct o12E_ushort *)(t0))->v) = 0xF0;
        (((struct o12A_ushort *)(t0))->v) = 0x0;
        (((struct o12C_ushort *)(t0))->v) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        (((struct o38E6_ushort *)(a4))->v) = ((((struct o24_short *)(t0))->v));
        t4 = 0x38E6;
    }
    return t4;
}

int FUN_0c0f0c5e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0xE2, (*(int *)0xC4B410C));
        *(unsigned int *)((t0 + 0x4)) = 0xC0F0B3E;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c07e420(t0, 0x8);
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c064d24(t0, 0x2, 0x15, 0x0, 0x100, 0xFFFFFFAF, 0x0, 0x0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
    }
    return t0;
}

int FUN_0c128088(int a4)
{
    register int t0;
    register int t5;

    t0 = FUN_0c03f258(0x1, 0x1);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC128112;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        FUN_0c07e2f4(t0, 0x68);
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        t5 = (FUN_0c064d24(t0, 0x1, 0x43, 0x1, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0x0));
    }
    return t5;
}

int FUN_0c15a5aa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t5;
    register float u4;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t5 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15A404;
        (((struct oAC_ushort *)(t0))->v) = 0x23F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x58)) = *(struct mv3 *)(a6); }
        (((struct oBC_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 1.0f;
        (((struct oB4_float *)(t0))->v) = 1.0f;
        u4 = *(float *)0xC2A2AE8;
        (((struct o48_float *)(t0))->v) = u4;
        (((struct o44_float *)(t0))->v) = u4;
        (((struct o40_float *)(t0))->v) = u4;
        t5 = 0x40;
    }
    return t5;
}

int FUN_0c15a808(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t5;
    register float u4;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t5 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15A65C;
        (((struct oAC_ushort *)(t0))->v) = 0x23F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x58)) = *(struct mv3 *)(a6); }
        (((struct oBC_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 1.0f;
        (((struct oB4_float *)(t0))->v) = 1.0f;
        u4 = *(float *)0xC2A2AF0;
        (((struct o48_float *)(t0))->v) = u4;
        (((struct o44_float *)(t0))->v) = u4;
        (((struct o40_float *)(t0))->v) = u4;
        t5 = 0x40;
    }
    return t5;
}

int FUN_0c16c0c6(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_2 = R13;
    v0_1 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_1);
    v0_0 = (v0_0);
    if ((v0_1 == 0)) goto L_C16C0DE;
    if ((v0_2 == 1)) goto L_C16C0E6;
    L_C16C144:;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C16C0E6:;
    v0_1 = (*(signed char *)((v0_0 + 0x2))) != 1;
    if (v0_1) goto L_C16C106;
    v0_1 = FUN_0c16be0a((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x1);
    R13 = (v0_1);
    if ((v0_1 != 0)) goto L_C16C11C;
    goto L_C16C144;
    L_C16C11C:;
    FUN_0c03744a(((((struct oC4_int *)(R13))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
    *(unsigned char *)((R13 + 0x1)) = (*(signed char *)((v0_0 + 0x1)));
    *(unsigned int *)((R13 + 0x4)) = 0xC16BF02;
    *(unsigned short *)((R13 + 0x1C)) = 0x3C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R13 + 0x40)) = *(struct mv3 *)(0xC2A3930); }
    goto L_C16C144;
    L_C16C106:;
    v0_1 = FUN_0c16be0a((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x0);
    R13 = (v0_1);
    if ((v0_1 == 0)) goto L_C16C144;
    goto L_C16C11C;
    L_C16C0DE:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C16C0E6;
}

int FUN_0c08d658(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & 0xFFFFFFF0);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c037bf6(a4, a5, a6);
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = *(short *)((a4 + 0x1C));
    if ((short)t0 != 0) {
        t1 = t0;
        if ((int)(short)t0 < (int)0x32) {
            t0 = 0x42C;
            if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x200) == 0) {
                FUN_0c08d170(a4);
                FUN_0c124da6(a4, 0x0);
                FUN_0c125254(a4, 0x2);
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37DC + a4)) = *(struct mv3 *)((a4 + 0x28)); }
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                (((struct o15_uchar *)(a4))->v) = 0x2;
                t0 = 0x15;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        FUN_0c08d170(a4);
        FUN_0c124da6(a4, 0x0);
        FUN_0c125254(a4, 0x2);
        *(unsigned short *)((a4 + 0x1C)) = 0x19;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37DC + a4)) = *(struct mv3 *)((a4 + 0x28)); }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        (((struct o15_uchar *)(a4))->v) = 0x2;
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c0cb266(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;

    t0 = FUN_0c03f444(0x9, 0x0, 0x0, a7);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0CB12E;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x40;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct o41C_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x41C)));
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct o41D_uchar *)(t0))->v) = 0x1;
        (((struct o422_uchar *)(t0))->v) = 0x0;
        *(unsigned char *)((t0 + 0x2)) = a5;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c0c2ab6(t0, 0x0);
        (((struct o12A_ushort *)(t0))->v) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        t4 = 0x0;
    }
    return t4;
}

int FUN_0c08d360(int a4, int a5, int a6)
{
    register int t20;

    FUN_0c037bf6(a4, a5, a6);
    t20 = 0x8C;
    if (!((*(float *)0xC08D44C) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        if ((*(signed char *)((a4 + 0x375A))) == 1) {
            FUN_0c125254(a4, 0x3);
        }
        FUN_0c07d030(a4, 0x1);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
        FUN_0c08d170(a4);
        FUN_0c124da6(a4, 0x0);
        *(unsigned short *)((a4 + 0x1C)) = 0x19;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37DC + a4)) = *(struct mv3 *)((a4 + 0x28)); }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        *(unsigned short *)((a4 + 0x1E)) = 0x5;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t20 = 0x15;
    }
    return t20;
}

int FUN_0c0e6dd8(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t10;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t10 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x49, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oC8_int *)(t0))->v)), 0x0, 0x49, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC0E6D4E;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x28)); }
        (((struct o2C_float *)(t0))->v) = -150.0f;
        t10 = 0x2C;
    }
    return t10;
}

int FUN_0c150e52(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    { struct mvb12 { char b[12]; }; *(struct mvb12 *)((((int)stk + 0) + 0xC)) = *(struct mvb12 *)(0xC203390); }
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t7 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x1, 0x1F, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned int *)((t0 + 0x4)) = 0xC150D74;
        (((struct oAC_ushort *)(t0))->v) = 0x31;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        t7 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t7;
    }
    return t7;
}

int FUN_0c1371a0(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;

    *(unsigned char *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t0 = FUN_0c03f444(0x1, 0x0, 0x3, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 24)));
        *(unsigned int *)((t0 + 0x4)) = 0xC136FF4;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 20)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oCC_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(0xC2A1738); }
        FUN_0c07e3ae(t0, 0x31);
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, 0x0, 0x0, 0xF0);
        return t0;
    }
    return 0x0;
}

int FUN_0c035e46(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = (FUN_0c176b90(a5));
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)((a4 + 0xC)))) {
            break;
        }
        t3 = a4;
        t3 = (t3 + 0x10);
        t3 = (t3 + (((t2 << 2) << 2) << 1));
        t4 = 0x0;
        t5 = (((t2 << 2) << 2) << 1);
        for (;;) {
            if ((int)t4 >= (int)(*(int *)((t3 + 0x18)))) {
                break;
            }
            t5 = (*(int *)((t3 + 0x1C)));
            t6 = (t4 * 0x3C);
            t5 = (t5 + t6);
            if ((*(int *)((t5 + 0x0))) != 0) {
                t5 = 0xC17E0F0;
                t0 = (FUN_0c17e0f0((*(int *)((((*(int *)((t3 + 0x1C))) + t6) + 0x0)))));
                t1 = (t1 + t0);
            } else {
                t6 = t5;
            }
            t4 = (t4 + 0x1);
            t5 = t6;
        }
        t2 = (t2 + 0x1);
    }
    return t1;
}

int FUN_0c0a3bd6(int a4)
{
    register float u0;
    register int t7;

    u0 = (((struct o0_float *)0xC0A3CDC)->v);
    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x11);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(0xC25D238); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)(0xC25D238); }
        (((struct o50_float *)(a4))->v) = u0;
        t7 = 0x50;
    } else {
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x3);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(0xC25D238); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)(0xC25D238); }
        (((struct o50_float *)(a4))->v) = u0;
        (((struct o5C_float *)(a4))->v) = ((((struct oC_float *)0xC0A3CDC)->v));
        t7 = 0x5C;
    }
    return t7;
}

int FUN_0c119c18(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 20) {
            if (t0 != 30) {
                if (t0 != 99) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            return 0xA8;
        }
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        return 0xA8;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03733c(a4, 0xF, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x40F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC291E58); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0xB0 + a4)) = *(struct mv4 *)(0xC2A0CA0); }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    return 0xA8;
}

int FUN_0c14f960(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC542260;
    t1 = FUN_0c1502e8(a4, 0x1, 0x1, a5, 0x0, (((((t0 & 0x3) << 1) + (t0 & 0x3)) << 2) + 0xC202E38));
    t0 = t1;
    if (t1 != 0) {
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(t1))->v)) + 0x14)) = *(struct mv4 *)(0xC202D64); }
        (((struct o4_float *)((0x41C + t1)))->v) = (((float)((int)((int)(nlRand()) % (int)0xB)) / (*(float *)0xC14FA40)) + (1.0f + 1.0f));
        *(unsigned short *)((t1 + 0x1E)) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

void FUN_0c03f950(void)
{
    register int t0;
    register int t1;
    register int t6;

    t0 = 0xC40BF80;
    t1 = 0xC409280;
    for (;;) {
        memset(t1, 0x0, 0x90);
        *(unsigned char *)((t1 + 0x0)) = (*(signed char *)0xC1B7A22);
        *(unsigned short *)((t1 + 0x6)) = ((((struct o4_short *)0xC1B7A1C)->v));
        (((struct o24_float *)(t1))->v) = ((((struct o0_float *)0xC1B7A1C)->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(0xC1B7A10); }
        t6 = t1;
        t1 = (t1 + 0x90);
        *(unsigned int *)((t0 + 0x0)) = t6;
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC40BF80) {
            break;
        }
    }
    *(unsigned int *)0xC40C0C0 = 0x50;
}

void FUN_0c03f64c(void)
{
    register int t0;
    register int t1;
    register int t6;

    t0 = 0xC3F8878;
    t1 = 0xC3F3478;
    for (;;) {
        memset(t1, 0x0, 0xA8);
        *(unsigned char *)((t1 + 0x0)) = (*(signed char *)0xC1B7A22);
        *(unsigned short *)((t1 + 0x6)) = ((((struct o4_short *)0xC1B7A1C)->v));
        (((struct o24_float *)(t1))->v) = ((((struct o0_float *)0xC1B7A1C)->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(0xC1B7A10); }
        t6 = t1;
        t1 = (t1 + 0xA8);
        *(unsigned int *)((t0 + 0x0)) = t6;
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC3F8878) {
            break;
        }
    }
    *(unsigned int *)0xC3F8A78 = 0x80;
}

void FUN_0c03f7ce(void)
{
    register int t0;
    register int t1;
    register int t6;

    t0 = 0xC4091FC;
    t1 = 0xC3F8A7C;
    for (;;) {
        memset(t1, 0x0, 0x83C);
        *(unsigned char *)((t1 + 0x0)) = (*(signed char *)0xC1B7A22);
        *(unsigned short *)((t1 + 0x6)) = ((((struct o4_short *)0xC1B7A1C)->v));
        (((struct o24_float *)(t1))->v) = ((((struct o0_float *)0xC1B7A1C)->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(0xC1B7A10); }
        t6 = t1;
        t1 = (t1 + 0x83C);
        *(unsigned int *)((t0 + 0x0)) = t6;
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC4091FC) {
            break;
        }
    }
    *(unsigned int *)0xC40927C = 0x20;
}

int FUN_0c15173c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t6 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC151802;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = a5;
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0xB, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        t6 = 0xF;
    }
    return t6;
}

int FUN_0c0f0ad8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0xE1, (*(int *)0xC4B410C));
        *(unsigned int *)((t0 + 0x4)) = 0xC0F09E8;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
    }
    return t0;
}

int FUN_0c03faf8(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0xC40D644;
    t1 = 0xC40C0C4;
    for (;;) {
        memset(t1, 0x0, 0xAC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x18)) = *(struct mv3 *)(0xC1B7A24); }
        t3 = t1;
        t1 = (t1 + 0xAC);
        (((struct o64_ushort *)(t3))->v) = (*(short *)0xC1B7A30);
        *(unsigned int *)((t0 + 0x0)) = t3;
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC40D644) {
            break;
        }
    }
    *(unsigned int *)0xC40D6C4 = 0x20;
    return 0x64;
}

int FUN_0c03fc28(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0xC40DC28;
    t1 = 0xC40D6C8;
    for (;;) {
        memset(t1, 0x0, 0xAC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x18)) = *(struct mv3 *)(0xC1B7A24); }
        t3 = t1;
        t1 = (t1 + 0xAC);
        (((struct o64_ushort *)(t3))->v) = (*(short *)0xC1B7A30);
        *(unsigned int *)((t0 + 0x0)) = t3;
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC40DC28) {
            break;
        }
    }
    *(unsigned int *)0xC40DC48 = 0x8;
    return 0x64;
}

int FUN_0c03e2d2(int a4, int a5, int a6, int a7)
{
    int stk[71];
    register int t1;
    register int t5;

    *(unsigned int *)(((int)stk + 16)) = a4;
    t1 = (int)((unsigned int)(*(int *)0xC542B84) / (unsigned int)0x3C);
    *(unsigned int *)(((int)stk + 24)) = t1;
    *(int *)((int)stk + 12) = (((int)((unsigned int)t1 % (unsigned int)0x3C)));
    t5 = (int)((unsigned int)(*(int *)(((int)stk + 24))) / (unsigned int)0x3C);
    *(unsigned int *)(((int)stk + 20)) = t5;
    *(int *)((int)stk + 8) = (((int)((unsigned int)t5 % (unsigned int)0x3C)));
    *(int *)((int)stk + 4) = (((int)((unsigned int)(*(int *)(((int)stk + 20))) / (unsigned int)0x3C)));
    *(int *)((int)stk + 0) = 0xC1B7304;
    FUN_0c187cac((((int)stk + 0) + 0x1C), a5, a6, a7, 0xC1B7304);
    return (thunk_FUN_0c03e08c((*(int *)(((int)stk + 16))), (((int)stk + 0) + 0x1C)));
}

void FUN_0c1535b0(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(int *)(((int)stk + 4))), 0x26, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC153178;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x28)); }
        *(unsigned int *)((t0 + 0x38)) = (*(int *)(((*(int *)(((int)stk + 0))) + 0x38)));
    }
}

int FUN_0c2d328c(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t15;
    register int t2;
    register int t5;
    register int t11;

    t0 = *(signed char *)0xC8D25F7;
    t15 = t0;
    if ((t0 & 2) != 0) {
        t2 = *(signed char *)0xC8D25F7;
        t15 = (unsigned char)(t2 & 0x1);
        if ((unsigned char)(t2 & 0x1) != 0) {
            *(unsigned char *)(((int)stk + 0)) = (-((((((*(signed char *)(((((((struct o0_int *)0xC8D25F0)->v)) + 0x78) + 0x0))) & 4) == 0)) ? 1 : 0) - 1));
            t5 = (((struct o0_int *)0xC8D25F0)->v);
            (((struct o78_uchar *)(t5))->v) = ((*(signed char *)(((t5 + 0x78) + 0x0))) & 0xFB);
            FUN_0c2d562a(a4, a5);
            *(volatile int *)0xC8D25F0;
            *(volatile signed char *)(((int)stk + 0));
            FUN_0c1a2184();
            t11 = *(signed char *)0xC8D25F7;
            (((struct o7_uchar *)0xC8D25F0)->v) = (t11 & 0xFE);
            t15 = (t11 & 0xFE);
        }
    }
    return t15;
}

void FUN_0c150be8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0xC, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC150AAE;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = a5;
    }
}

int FUN_0c11ef66(void)
{
    int stk[7];

    (((struct o0_uchar *)0xC4750AD)->v) = ((*(signed char *)0xC4750AD) + 0x1);
    (((struct o1_uchar *)0xC4750AD)->v) = 0x0;
    FUN_0c03eff6();
    FUN_0c036de8(0x12);
    FUN_0c03ea04(0xD, 0x0);
    FUN_0c059c54(0x12);
    FUN_0c120362();
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC201834); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC201840); }
    return (FUN_0c120504(0x0, 0x9D, (((int)stk + 0) + 0xC), ((int)stk + 0)));
}
