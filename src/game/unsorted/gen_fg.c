/* Straight-line functions with calls and guards (batch gen_fg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int math_atan2_angle16(int, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c157790(int a4, int a5, int a6, int a7);
int FUN_0c127bfc(int a4, int a5);
int FUN_0c0e2b30(int a4);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_ushort { char p[0x6]; unsigned short v; };


int FUN_0c157790(int a4, int a5, int a6, int a7)
{
    int stk[5];
    int t50;
    int t24;
    int t46;
    int t0;
    int t49;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            t50 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            if ((int)((((struct o1C_short *)(a4))->v)) <= (int)0x14) {
                FUN_0c0588bc((a4 + 0x40), 0xC2A2810, 0xC2A2804, ((((struct o1C_short *)(a4))->v)), 0x14, 0x0);
                if ((int)((((struct o1C_short *)(a4))->v)) <= (int)0x14) {
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2828, 0xC2A281C, ((((struct o1C_short *)(a4))->v)), 0x14, 0x0);
                }
            }
            if ((int)((((struct o1C_short *)(a4))->v)) <= (int)0x4) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A27F4, 0xC2A27E4, ((((struct o1C_short *)(a4))->v)), 0x4, 0x0);
            }
            t24 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t24 + 0x1);
            t50 = (short)(t24 + 0x1);
            if ((int)(short)(t24 + 0x1) > (int)0x14) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                t50 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)); }
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x14, (*(int *)0xC4B40CC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((int)stk + 8)); }
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x3F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x40) = *(struct mv3 *)(0xC2A2804); }
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A281C); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A27E4); }
        t46 = (((struct oC4_int *)(a4))->v);
        t49 = math_atan2_angle16(0x1, ((((struct o70_float *)(t46))->v)), ((((struct o6C_float *)(t46))->v)));
        (((struct o80_uint *)(t46))->v) = ((t49 - 16384) & 0xFFFF);
        t50 = ((t49 - 16384) & 0xFFFF);
    }
    return t50;
}

int FUN_0c127bfc(int a4, int a5)
{
    int t2;
    int t4;
    int t0;
    int t1;
    int t3;
    float u0;

    t1 = FUN_0c037320(0x9, (*(int *)((((*(signed char *)(a4 + 0x1)) << 2) + 0xC4B40FC))));
    t2 = FUN_0c03f444(0x1, 0x0, t1);
    t1 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x9, (*(int *)((((*(signed char *)(a4 + 0x1)) << 2) + 0xC4B40FC))));
        t3 = 0x0;
        t4 = t0;
        for (;;) {
            if ((int)t3 >= (int)((((struct oC0_int *)(t2))->v))) {
                break;
            }
            t4 = (t3 << 2);
            t0 = (*(int *)((((0xC4 + t2) + t4) + 0x0)));
            (((struct o6_ushort *)(t0))->v) = 0x1F;
            t3 = (t3 + 0x1);
            if ((a5 & 0x1) != 0) {
                t4 = (t4 + (0xC4 + t2));
                (((struct o80_uint *)((*(int *)(t4))))->v) = 0x2000;
            } else {
                t0 = (0xC4 + t2);
                t4 = (t4 + t0);
                (((struct o80_uint *)((*(int *)(t4))))->v) = 0xFFFFE000;
            }
        }
        (((struct o1_uchar *)(t2))->v) = (*(signed char *)(a4 + 0x1));
        (((struct o10_uint *)(t2))->v) = a4;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct o4_uint *)(t2))->v) = 0xC127D88;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC53256C))) + 0x28), (t2 + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t2 + 0x34) = *(struct mv3 *)(a4 + 0x34); }
        (((struct o38_uint *)(t2))->v) = (((((struct o38_int *)(t2))->v)) + (*(int *)(((a5 << 2) + 0xC2A0F50))));
        (((struct o34_uint *)(t2))->v) = (((((struct o34_int *)(t2))->v)) + (*(int *)(((a5 << 2) + 0xC2A0F64))));
        u0 = *(float *)0xC127DE4;
        (((struct o4C_float *)(t2))->v) = ((math_cos_angle16(((-((((struct o38_int *)(t2))->v))) + 0x14000))) * u0);
        (((struct o54_float *)(t2))->v) = ((math_sin_angle16(((-((((struct o38_int *)(t2))->v))) + 0x14000))) * u0);
        (((struct o50_float *)(t2))->v) = ((math_sin_angle16((-((((struct o34_int *)(t2))->v))))) * u0);
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        (((struct o58_float *)(t2))->v) = u0;
        FUN_0c07e2f4(t2, 0x66);
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        t1 = (FUN_0c064d24(t2, 0x1, 0x42, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)(t2 + 0x1)))), 0x0, 0xFFFFFFF0));
    }
    return t1;
}

int FUN_0c0e2b30(int a4)
{
    int t2;
    int t5;
    int stk[4];
    int t8;
    int qe1;
    int qe0;
    int t26;
    int t6;
    float t13;
    int t1;
    int t9;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t1 = FUN_0c037320(0x76, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t26 = t2;
    if (t2 == 0) {
    } else {
        FUN_0c03733c(t2, 0x76, (*(int *)0xC4B410C));
        (((struct o4_uint *)(t2))->v) = 0xC0E2A8C;
        (((struct o1_uchar *)(t2))->v) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = 0x31;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct o48_float *)(t2))->v) = 0.0f;
        (((struct o44_float *)(t2))->v) = 0.0f;
        (((struct o40_float *)(t2))->v) = 0.0f;
        t5 = nlRand();
        t6 = ((~(((~t5) + 0x1) & 0x3F)) + 0x1);
        if ((int)t5 >= 0) {
            t6 = (t5 & 0x3F);
        }
        t8 = nlRand();
        t9 = ((~(((~t8) + 0x1) & 0x3F)) + 0x1);
        if ((int)t8 >= 0) {
            t9 = (t8 & 0x3F);
        }
        qe0 = (0xFFFFFC00 + (((t6 << 2) << 2) << 2));
        *(float *)(((int)stk + 8)) = ((math_sin_angle16(qe0)) * 300.0f);
        t13 = math_cos_angle16(qe0);
        qe1 = (0xFFFFE000 + ((t9 << 8) << 1));
        *(float *)(((int)stk + 12)) = ((t13 * 300.0f) * (math_cos_angle16(qe1)));
        *(float *)(((int)stk + 4)) = ((t13 * 300.0f) * (math_sin_angle16(qe1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t2 + 0x28) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        (((struct o30_float *)(t2))->v) = (((((struct o30_float *)(t2))->v)) + 200.0f);
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) - 50.0f);
        nlAddVector3op((t2 + 0x28), (t2 + 0x28), (((int)stk + 0) + 0x4));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) / -35.0f);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) / -35.0f);
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) / -35.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t2 + 0x4C) = *(struct mv3 *)((((int)stk + 0) + 0x4)); }
        (((struct o7C_uint *)(((((struct oC4_int *)(t2))->v))))->v) = 0xFFFFC000;
        t26 = 0x7C;
    }
    return t26;
}
