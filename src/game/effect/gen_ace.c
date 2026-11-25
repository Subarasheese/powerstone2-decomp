/* Straight-line functions with calls and guards (batch gen_ace): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c12fed4(int);
int FUN_0c17c450(int);
extern float _builtin_sqrtf(float);
extern int math_atan2_angle16();
int math_vec3_accumulate(int, int);
int FUN_0c12ff1c(int a4, int a5, int a6, int a7);

int FUN_0c12ff1c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t2;
    register int t38;
    register int t8;
    register float u20;
    register float u21;
    register float u23;
    register int t24;
    register int t47;
    register int t49;
    register int t55;

    if ((*(signed char *)((a4 + 0x14))) != 0) {
        t55 = (FUN_0c03f346(a4, a5, a6, a7));
    } else {
        t2 = FUN_0c12fed4(a4);
        t38 = 0;
        if ((signed char)t2 != 0) {
            if ((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14))) != 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            } else {
                t8 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t8 + 0x1);
                if ((int)(short)(t8 + 0x1) <= (int)0x3) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC535CA4)); }
                    (((struct o4C_float *)(a4))->v) = ((*(float *)((((int)stk + 0) + 0x0))) - ((((struct o28_float *)(a4))->v)));
                    (((struct o50_float *)(a4))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) - ((((struct o2C_float *)(a4))->v)));
                    (((struct o54_float *)(a4))->v) = (((((struct o8_float *)(((int)stk + 0)))->v)) - ((((struct o30_float *)(a4))->v)));
                    FUN_0c17c450((a4 + 0x4C));
                    if (((((struct o54_float *)(a4))->v)) == 0.0f) {
                        (((struct o54_float *)(a4))->v) = 9.99999975e-06f;
                    }
                    u20 = (((struct o4C_float *)(a4))->v);
                    u21 = (((struct o54_float *)(a4))->v);
                    u23 = (u21 * u21);
                    u23 = u23 + u20 * u20;
                    t24 = ((int (*)(float, float))(math_atan2_angle16))((-((((struct o50_float *)(a4))->v))), _builtin_sqrtf(u23));
                    *(unsigned int *)((a4 + 0x34)) = t24;
                    if ((int)t24 > (int)0xFA4) {
                        *(unsigned int *)((a4 + 0x34)) = 0xFA4;
                    }
                    if ((int)(*(int *)((a4 + 0x34))) < (int)0xFFFFF05C) {
                        *(unsigned int *)((a4 + 0x34)) = 0xFFFFF05C;
                    }
                    *(unsigned int *)((a4 + 0x38)) = (((int (*)(int, float, float))(math_atan2_angle16))(0xFFFFF05C, ((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v))));
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * 37.0f);
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 37.0f);
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * 37.0f);
                    t38 = 1;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
            }
        } else {
            t38 = 1;
        }
        if (t38) {
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x1E)) == 0) {
                FUN_0c07e2f4(a4, 0x63);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t47 = (((struct oC4_int *)(a4))->v);
            (((struct o78_uint *)(t47))->v) = (((((struct o78_int *)(t47))->v)) + 0x1555);
            t49 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t49 + 0x1);
            t55 = (short)(t49 + 0x1);
            if ((int)(short)(t49 + 0x1) >= (int)0x384) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t55 = 0x14;
            }
        } else {
            t55 = 0x14;
        }
    }
    return t55;
}
