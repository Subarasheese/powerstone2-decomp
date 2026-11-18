/* Straight-line functions with calls and guards (batch gen_hh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o41C_float { char p[0x41C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int memset(int, int, int);
extern int nlSubVector3op();
int FUN_0c04c8d4(int a4);
int FUN_0c14e8d0(int a4, int a5, int a6, int a7);

int FUN_0c04c8d4(int a4)
{
    int stk[9];
    register int t8;
    register float u17;
    register float u23;
    register int t24;
    register int t27;
    register int t32;
    register int t35;
    register int t37;
    register int t26;
    register float u28;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(((((short)(*(signed char *)0xC5421DC) * (short)0x2F8) + 0xC5410FC) + 0xC8)); }
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 20.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((((short)(*(signed char *)0xC5421DC) * (short)0x2F8) + 0xC5410FC) + 0xF8)); }
    t8 = ((int (*)(int, int, int, Stk3))(nlSubVector3op))((((int)stk + 0) + 0x18), ((int)stk + 0), (((int)stk + 0) + 0xC), *(Stk3 *)(((int)stk + 0)));
    if ((*(float *)(((int)stk + 32))) == 0.0f) {
        *(float *)(((int)stk + 32)) = 9.99999975e-06f;
    }
    u17 = (*(float *)(((int)stk + 16)));
    u17 = u17 + (((*(float *)(((int)stk + 28))) / (*(float *)(((int)stk + 32))))) * (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 28)) = u17;
    u23 = (*(float *)(((int)stk + 12)));
    u23 = u23 + (((*(float *)(((int)stk + 24))) / (*(float *)(((int)stk + 32))))) * (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 24)) = u23;
    *(float *)(((int)stk + 32)) = 10.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((int)stk + 0) + 0x18)); }
    t24 = (a4 + 0x28);
    t27 = 0x0;
    for (;;) {
        if ((int)t27 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t24 = 0xC4;
        t26 = t27;
        t26 = (t26 << 2);
        t24 = (t24 + a4);
        t24 = (t24 + t26);
        t24 = (*(int *)((t24 + 0x0)));
        t32 = ((int (*)(int, int, int))(nlSubVector3op))((((int)stk + 0) + 0x18), 0xC1B7E58, (a4 + 0x28));
        u28 = (*(float *)((t26 + 0xC1B7E34)));
        math_vec3_mul_xyz((((int)stk + 0) + 0x18), u28, u28, u28);
        t24 = (t24 + 0x6C);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t24) = *(struct mv3 *)((((int)stk + 0) + 0x18)); }
        t27 = (t27 + 0x1);
    }
    t35 = *(signed char *)0xC541F44;
    t37 = (unsigned char)t35;
    if ((int)(unsigned char)t35 >= (int)0xC) {
        t37 = (FUN_0c03f346(a4));
    }
    return t37;
}

int FUN_0c14e8d0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x1, 0x8, a7);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x4)) = 0xC14EB84;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC202C6C); }
        t2 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))), 0x0, t2, (*(int *)0xC4B410C));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))) + 0x6)) = 0xF;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))) + 0x6C)) = *(struct mv3 *)(((((t2 << 1) + t2) << 2) + 0xC202C90)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))) + 0x78)) = *(struct mv3 *)(((((t2 << 1) + t2) << 2) + 0xC202CCC)); }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x6) {
                break;
            }
        }
        t2 = 0x48;
        t3 = 0x18;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t3) + 0x0))), 0x0, 0x3, (*(int *)0xC4B410C));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t3) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t3) + 0x0))) + 0x6)) = 0xF;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + t0) + t3) + 0x0))) + 0x6C)) = *(struct mv3 *)((t2 + 0xC202C90)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + t0) + t3) + 0x0))) + 0x78)) = *(struct mv3 *)((t2 + 0xC202CCC)); }
            t3 = (t3 + 0x4);
            t2 = (t2 + 0xC);
            if ((unsigned int)t3 >= (unsigned int)0x20) {
                break;
            }
        }
        memset((t0 + 0x41C), 0x0, 0x14);
        *(unsigned char *)(((t0 + 0x41C) + 0x5)) = 0x1;
        (((struct o41C_float *)(t0))->v) = 0.0f;
        t1 = 0x1;
    }
    return t1;
}
