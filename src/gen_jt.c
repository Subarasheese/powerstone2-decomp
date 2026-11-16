/* Straight-line functions with calls and guards (batch gen_jt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3760_int { char p[0x3760]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05a292(int, int, int, int, int);
int FUN_0c05a2b8(int, int, int, int, int);
int FUN_0c05a344(void);
int FUN_0c05a396(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c13052c(int, int, int, int, float);
int FUN_0c1760c4(int, int, int);
int FUN_0c181050(void);
int FUN_0c187798(void);
int game_reset_objects(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c130890(int a4, int a5);
int FUN_0c1766e6(void);

int FUN_0c130890(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t37;
    register float u14;
    register float u21;
    register int t27;
    register int t34;
    register int t36;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t37 = t3;
    if (t3 == 0) {
    } else {
        FUN_0c03733c(t3, 0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned short *)((t3 + 0x1C)) = 0x0;
        *(unsigned short *)((t3 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t3))->v) = 0x12C;
        *(unsigned int *)((t3 + 0x4)) = 0xC130640;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c187798();
        *(int *)((int)stk + 12) = (t3 + 0x28);
        u14 = ((((struct o28_float *)(t3))->v));
        u14 = u14 + (math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o0_float *)0xC2A13B8)->v));
        (((struct o28_float *)(t3))->v) = u14;
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + ((((struct o4_float *)0xC2A13B8)->v)));
        *(int *)((int)stk + 12) = (t3 + 0x30);
        u21 = ((((struct o30_float *)(t3))->v));
        u21 = u21 + (math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o8_float *)0xC2A13B8)->v));
        (((struct o30_float *)(t3))->v) = u21;
        *(unsigned int *)((t3 + 0x38)) = (*(int *)((a4 + 0x38)));
        *(unsigned int *)((t3 + 0x3C)) = 0x0;
        FUN_0c187798();
        *(unsigned int *)((t3 + 0x34)) = (0x10000 - (FUN_0c13052c((t3 + 0x4C), (a4 + 0x28), (((((struct o3760_int *)(a4))->v)) + 0x28), (*(int *)((t3 + 0x38))), 30.0f)));
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t27 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t27));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x32, 0x0, 0x100, (~((int)0x1 << (int)t27)), 0x0, 0xF0);
        FUN_0c07e2f4(t3, 0x64);
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x21F;
        t34 = (((struct oC8_int *)(t3))->v);
        (((struct o88_float *)(t34))->v) = 1.0f;
        (((struct o84_float *)(t34))->v) = 1.0f;
        (((struct o8C_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.0f;
        t36 = (((struct oC8_int *)(t3))->v);
        (((struct o20_float *)(t36))->v) = 0.0f;
        (((struct o1C_float *)(t36))->v) = 0.0f;
        (((struct o18_float *)(t36))->v) = 0.0f;
        t37 = 0x18;
    }
    return t37;
}

int FUN_0c1766e6(void)
{
    int t0;
    register int t1;
    register int t2;

    if (((unsigned short)((((struct o0_short *)0xC54288C)->v)) & 0x200) == 0) {
        FUN_0c1760c4(0x1, 0x7, 0xC2A5FDC);
    } else {
        if (((*(signed char *)0xC475F9C) == 6) && (t0 = (((struct o4_short *)0xC54288C)->v), ((unsigned short)t0 & 0x200) != 0)) {
            game_reset_objects();
            if (((((struct o14_int *)0xC475FA0)->v)) == 0) {
                FUN_0c05a292(((((struct o0_int *)0xC475FA0)->v)), ((((struct o4_int *)0xC475FA0)->v)), ((((struct o8_int *)0xC475FA0)->v)), ((((struct oC_int *)0xC475FA0)->v)), (((((struct o10_int *)0xC475FA0)->v))));
            } else {
                t0 = (((struct o14_int *)0xC475FA0)->v);
                if (t0 == 1) {
                    FUN_0c05a2b8(((((struct o0_int *)0xC475FA0)->v)), ((((struct o4_int *)0xC475FA0)->v)), ((((struct o8_int *)0xC475FA0)->v)), ((((struct oC_int *)0xC475FA0)->v)), (((((struct o10_int *)0xC475FA0)->v))));
                } else {
                    if (t0 == 2) {
                        FUN_0c05a344();
                    } else {
                        if (((((struct o14_int *)0xC475FA0)->v)) == 3) {
                            FUN_0c05a396(((((struct o4_int *)0xC475FA0)->v)));
                        } else {
                            FUN_0c05a292(0xC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                        }
                    }
                }
            }
            *(unsigned char *)0xC542237 = ((((struct o0_int *)0xC475FA0)->v));
            t0 = 0x0;
            for (;;) {
                t1 = *(int *)(((0xC475FA0 + t0) + 0x0));
                t2 = (0xC475FD0 + t0);
                t0 = (t0 + 0x4);
                *(unsigned int *)((t2 + 0x0)) = t1;
                if ((unsigned int)t0 >= (unsigned int)0x1C) {
                    break;
                }
            }
            (((struct o10_uint *)0xC476000)->v) = (FUN_0c181050());
        } else {
            t0 = *(int *)0xC2A5C50;
            if ((((((struct o0_int *)0xC476000)->v)) & 0x800) != 0) {
                t1 = *(signed char *)0xC475F9C;
                *(unsigned int *)((0xC476014 + (t1 << 2))) = ((*(int *)((0xC476014 + (t1 << 2)))) - t0);
                if ((int)(*(int *)((0xC476014 + ((*(signed char *)0xC475F9C) << 2)))) < 0) {
                    t1 = *(signed char *)0xC475F9C;
                    *(unsigned int *)((0xC476014 + (t1 << 2))) = ((*(int *)((0xC476014 + (t1 << 2)))) + 0x7F);
                }
            } else {
                if ((((((struct o0_int *)0xC476000)->v)) & 0x400) != 0) {
                    t1 = *(signed char *)0xC475F9C;
                    *(unsigned int *)((0xC476014 + (t1 << 2))) = ((*(int *)((0xC476014 + (t1 << 2)))) + t0);
                    if ((int)(*(int *)((0xC476014 + ((*(signed char *)0xC475F9C) << 2)))) > (int)0x7F) {
                        t0 = *(signed char *)0xC475F9C;
                        *(unsigned int *)((0xC476014 + (t0 << 2))) = ((*(int *)((0xC476014 + (t0 << 2)))) - 0x7F);
                    }
                }
            }
        }
    }
    t0 = (((struct o4_short *)0xC54288C)->v);
    if (((unsigned short)t0 & 0x100) != 0) {
        return game_reset_objects();
    }
    return (unsigned short)t0;
}
