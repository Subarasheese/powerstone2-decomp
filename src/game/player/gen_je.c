/* Straight-line functions with calls and guards (batch gen_je): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[8]; } Stk8;
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c0373ee(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c5a88(int);
int FUN_0c0cf440(int, int, int);
int FUN_0c15aed8(int, int, int, int);
int FUN_0c1632e0(int, int, int, float);
int FUN_0c1636ae(int, int, int);
int FUN_0c16e0f2(int, int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0d4d24(int a4, int a5, int a6, int a7);
int FUN_0c0c6df8(int a4);


int FUN_0c0c6df8(int a4)
{
    int stk[14];
    register int t5;
    register int t40;
    register float u43;
    int t1;
    register int t59;
    register int t55;
    register int t56;

    { struct mv8 { int w[8]; }; *(struct mv8 *)(((int)stk + 0)) = *(struct mv8 *)(0xC1C7280); }
    if ((((((struct o404_int *)(a4))->v)) == 0) && (t1 = *(signed char *)((a4 + 0x131)), t1 == 0)) {
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x38E);
        t59 = (FUN_0c0c5a88(a4));
    } else {
        math_mat_get_translate((a4 + 0x64), (((int)stk + 0) + 0x2C));
        t5 = *(signed char *)((a4 + 0x41C));
        if ((unsigned char)t5 != 11) {
            if ((unsigned char)t5 != 35) {
                if ((unsigned char)t5 != 107) {
                    if ((unsigned char)t5 == 76) {
                        *(unsigned int *)((a4 + 0x3C)) = 0x0;
                        *(unsigned int *)((a4 + 0x38)) = 0x0;
                        *(unsigned int *)((a4 + 0x34)) = 0x0;
                        t55 = 0xA;
                        t56 = (*(signed char *)((a4 + 0x1)));
                    } else {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                        t55 = 0xB;
                        t56 = (*(signed char *)((a4 + 0x1)));
                    }
                } else {
                    FUN_0c1632e0(0xFFFFFFFF, (a4 + 0x28), 0x3, 0.5f);
                    FUN_0c05aae4(0xD1, (a4 + 0x28));
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                    t55 = 0xB;
                    t56 = (*(signed char *)((a4 + 0x1)));
                }
            } else {
                FUN_0c16e0f2(a4, 0x0);
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                t55 = 0xB;
                t56 = (*(signed char *)((a4 + 0x1)));
            }
        } else {
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x49);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x20)) = *(struct mv3 *)((a4 + 0x28)); }
            *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + ((((struct o4C_float *)(a4))->v)));
            *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 40))) + ((((struct o54_float *)(a4))->v)));
            *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) - 20.0f);
            FUN_0c1636ae((((int)stk + 0) + 0x20), 0x3, (*(signed char *)((a4 + 0x1))));
            t40 = ((int)stk + 0);
            for (;;) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x20)) = *(struct mv3 *)((a4 + 0x28)); }
                *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + (*(float *)((t40 + 0x0))));
                u43 = (((struct o4_float *)(t40))->v);
                t40 = (t40 + 0x8);
                *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 40))) + u43);
                *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) - 20.0f);
                FUN_0c1636ae((((int)stk + 0) + 0x20), 0x0, (*(signed char *)((a4 + 0x1))));
                if ((unsigned int)t40 >= (unsigned int)(((int)stk + 0) + 0x20)) {
                    break;
                }
            }
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t55 = 0xB;
            t56 = (*(signed char *)((a4 + 0x1)));
        }
        t59 = (FUN_0c0c2d56(a4, t55, t56));
    }
    return t59;
}
