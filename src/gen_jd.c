/* Straight-line functions with calls and guards (batch gen_jd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o3744_uchar { char p[0x3744]; unsigned char v; };
struct o3759_uchar { char p[0x3759]; unsigned char v; };
struct o378C_float { char p[0x378C]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_int { char p[0x8C]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c15b478(int, int, int, int, int, int, int, int);
int FUN_0c15c344(int, int, int);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c13009a(int a4, int a5, int a6);
int FUN_0c06d570(int a4);

int FUN_0c13009a(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t37;
    register float u14;
    register int t21;
    register int t31;
    register float u18;

    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned char *)(((int)stk + 32)) = a6;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t37 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x7;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o14_uchar *)(t0))->v) = 0x0;
        (((struct o15_uchar *)(t0))->v) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t0))->v) = 0x1D;
        *(unsigned int *)((t0 + 0x4)) = 0xC12FF1C;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((a4 + 0x10)));
        FUN_0c187798();
        FUN_0c187798();
        *(unsigned int *)((t0 + 0x38)) = (*(int *)(((int)stk + 36)));
        FUN_0c187798();
        (((struct o4C_float *)(t0))->v) = ((math_sin_angle16((*(int *)((t0 + 0x38))))) * 37.0f);
        (((struct o54_float *)(t0))->v) = ((math_cos_angle16((*(int *)((t0 + 0x38))))) * 37.0f);
        if ((*(signed char *)((0x375A + (*(int *)((a4 + 0x10)))))) == 4) {
            u14 = ((float)((*(signed char *)(((int)stk + 32))) + 0x1) * 10.0f);
            u14 = -u14;
            u18 = u14;
        } else {
            u18 = ((float)(*(signed char *)(((int)stk + 32))) * 10.0f);
        }
        (((struct o50_float *)(t0))->v) = u18;
        *(int *)((int)stk + 28) = 0xF0;
        *(int *)((int)stk + 24) = 0x0;
        t21 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 20) = (~((int)0x1 << (int)t21));
        *(int *)((int)stk + 16) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x14, 0x0, 0x100, (~((int)0x1 << (int)t21)), 0x0, 0xF0);
        FUN_0c07e2f4(t0, 0x63);
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xB;
        (((struct o80_uint *)(((((struct oC4_int *)(t0))->v))))->v) = 0x4000;
        *(int *)((int)stk + 12) = 0xC2A1394;
        *(int *)((int)stk + 8) = 0xC2A1388;
        *(int *)((int)stk + 4) = 0x6F;
        *(int *)((int)stk + 0) = 0x384;
        t31 = *(signed char *)((t0 + 0x1));
        (((struct o20_uchar *)(((int)stk + 0)))->v) = t31;
        t37 = (FUN_0c15b478((*(signed char *)(((int)stk + 32))), (t0 + 0x64), t0, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t31 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x384, 0x6F, 0xC2A1388, 0xC2A1394));
    }
    return t37;
}

int FUN_0c06d570(int a4)
{
    int stk[13];
    register int t0;
    register int t1;
    register int t10;
    register int t19;
    register float u23;
    int t29;
    register int t63;
    register int t64;
    register int t74;
    int t11;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    register int t42;
    register int t43;
    register int t51;
    register int t52;
    register int t53;
    register int t54;
    register int t57;
    register int t58;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t74 = t0;
        if (t0 == 1) {
            (((struct o3759_uchar *)(a4))->v) = 0x0;
            t1 = FUN_0c037bf6(a4);
            if ((unsigned char)t1 != 0) {
                FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
                (((struct o382A_ushort *)(a4))->v) = 0x1;
                t74 = 0x382A;
            } else {
                t74 = (FUN_0c038362(a4));
            }
        }
    } else {
        FUN_0c037bf6(a4);
        t10 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t10 - 1);
        if (((short)(t10 - 1) != 0) && (t11 = *(signed char *)((a4 + 0x3744)), (int)(unsigned char)t11 > 0)) {
            t19 = (int)((int)(*(short *)((a4 + 0x1C))) % (int)0x14);
            t74 = t19;
            if (t19 == 0) {
                FUN_0c187798();
                u23 = (*(float *)(((int)stk + 20)));
                u23 = u23 + 200.0f * ((((struct o378C_float *)(a4))->v));
                *(float *)(((int)stk + 20)) = u23;
                t74 = (FUN_0c15c344(a4, (((int)stk + 12) + 0x4), 0x6));
            }
        } else {
            t29 = *(signed char *)((a4 + 0x2));
            if ((t29 != 2) && (t29 != 3)) {
                if (t29 != 10) {
                    if (t29 != 14) {
                        *(int *)((int)stk + 8) = 0x2;
                        *(int *)((int)stk + 4) = 0x3;
                        t40 = *(signed char *)((a4 + 0x1));
                        *(unsigned int *)(((int)stk + 12)) = t40;
                        t39 = t40;
                        *(int *)((int)stk + 0) = t39;
                        t37 = 0x2;
                        t38 = 0x3;
                        t42 = 0x3;
                        t43 = 0x2;
                    } else {
                        *(int *)((int)stk + 8) = 0xF;
                        *(int *)((int)stk + 4) = 0x0;
                        t40 = *(signed char *)((a4 + 0x1));
                        *(unsigned int *)(((int)stk + 12)) = t40;
                        t39 = t40;
                        *(int *)((int)stk + 0) = t39;
                        t37 = 0xF;
                        t38 = 0x0;
                        t42 = 0x0;
                        t43 = 0xF;
                    }
                    FUN_0c07e79c(a4, t40, t42, t43, t39, t38, t37);
                } else {
                    if ((*(signed char *)((a4 + 0x371C))) != 0) {
                        *(int *)((int)stk + 8) = 0x4;
                        *(int *)((int)stk + 4) = 0x3;
                        t54 = *(signed char *)((a4 + 0x1));
                        *(unsigned int *)(((int)stk + 12)) = t54;
                        t53 = t54;
                        *(int *)((int)stk + 0) = t53;
                        t51 = 0x4;
                        t52 = 0x3;
                        t57 = 0x3;
                        t58 = 0x4;
                    } else {
                        *(int *)((int)stk + 8) = 0xF;
                        *(int *)((int)stk + 4) = 0x0;
                        t54 = *(signed char *)((a4 + 0x1));
                        *(unsigned int *)(((int)stk + 12)) = t54;
                        t53 = t54;
                        *(int *)((int)stk + 0) = t53;
                        t51 = 0xF;
                        t52 = 0x0;
                        t57 = 0x0;
                        t58 = 0xF;
                    }
                    FUN_0c07e79c(a4, t54, t57, t58, t53, t52, t51);
                }
            } else {
                *(int *)((int)stk + 8) = 0x1;
                *(int *)((int)stk + 4) = 0x3;
                t63 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 12)) = t63;
                t64 = t63;
                *(int *)((int)stk + 0) = t64;
                FUN_0c07e79c(a4, t63, 0x3, 0x1, t64, 0x3, 0x1);
            }
            (((struct o382A_ushort *)(a4))->v) = 0x1;
            (((struct o3744_uchar *)(a4))->v) = 0x0;
            (((struct o3759_uchar *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t74 = 0x15;
        }
    }
    return t74;
}
