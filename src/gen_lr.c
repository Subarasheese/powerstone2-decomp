/* Straight-line functions with calls and guards (batch gen_lr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c073566(int, int);
int FUN_0c07bdd0(int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c12ebe4(int, int);
int FUN_0c14fed8(int, int, float, float);
int FUN_0c15aed8(int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c09e6f0(int a4);
int FUN_0c143814(int a4, int a5, int a6);


int FUN_0c143814(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)(((a6 << 2) + 0xC2A2330));
    FUN_0c179ac0();
    u0 = (((struct o8_float *)0xC143958)->v);
    u1 = (((struct o10_float *)0xC143958)->v);
    t1 = t0;
    t2 = (-(int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x1E)) * ((((struct o0_float *)0xC143958)->v))) / ((((struct o4_float *)0xC143958)->v))));
    t3 = t0;
    for (;;) {
        t5 = FUN_0c037320((*(int *)((t1 + 0x0))), (*(int *)((((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40DC) + 0x4))));
        t6 = FUN_0c03f444(0x5, 0x0, t5);
        t4 = t6;
        if (t6 != 0) {
            FUN_0c03733c(t6, (*(int *)((t3 + 0x0))), (*(int *)((((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40DC) + 0x4))));
            *(unsigned int *)((t6 + 0x4)) = 0xC143932;
            *(unsigned char *)((t6 + 0x1)) = 0xFFFFFFFF;
            (((struct oAC_ushort *)(t6))->v) = 0x1F;
            (((struct oA9_uchar *)(t6))->v) = 0x21;
            u2 = (((struct o4_float *)(t3))->v);
            (((struct o48_float *)(t6))->v) = u2;
            (((struct o44_float *)(t6))->v) = u2;
            (((struct o40_float *)(t6))->v) = u2;
            FUN_0c187798();
            (((struct o2C_float *)(t6))->v) = (((((struct o2C_float *)(t6))->v)) + ((((struct o8_float *)(t3))->v)));
            (((struct o4C_float *)(t6))->v) = ((math_cos_angle16(t2)) * u1);
            (((struct o54_float *)(t6))->v) = ((math_sin_angle16(t2)) * u1);
            (((struct o50_float *)(t6))->v) = u0;
            t5 = FUN_0c15aed8((t6 + 0x28));
            *(unsigned int *)((t6 + 0x38)) = t2;
            t4 = t5;
        }
        t1 = (t1 + 0xC);
        t2 = (t2 + 0x1555);
        t3 = (t3 + 0xC);
        if ((unsigned int)t1 >= (unsigned int)(t0 + 0x48)) {
            break;
        }
    }
    return t4;
}
