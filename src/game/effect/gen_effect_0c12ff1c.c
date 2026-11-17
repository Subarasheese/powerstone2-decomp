/* game/effect: functions 0C12FF1C-0C13035A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c13009a(int, int, int);
extern int math_atan2_angle16();
int math_vec3_accumulate(int, int);
int FUN_0c17c450(int);
int FUN_0c187798(int, int);
extern float _builtin_sqrtf(float);
int FUN_0c12ff1c(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c13022a(int a4, int a5, int a6, int a7);

int FUN_0c12ff1c(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[3];
    register int t16;

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a7;
    w0_0 = f4;
    w0_1 = f5;
    v0_0 = (v0_1);
    if (((*(signed char *)((v0_1 + 0x14))) == 0)) goto L_C12FF34;
    v0_4 = ((FUN_0c03f346(v0_0, v0_2, a6, v0_3)));
    L_C13008E:;
    return v0_4;
    L_C12FF34:;
    v0_4 = (signed char)(((int (*)(int, int, int, int, float, float))(0xC12FED4))(v0_0, v0_2, a6, v0_3, w0_0, w0_1)) == 0;
    if (v0_4) goto L_C130010;
    if (!(((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x14))) == 0))) goto L_C13004E;
    v0_4 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_4 + 0x1);
    if (((int)(short)(v0_4 + 0x1) > (int)0x3)) goto L_C13004E;
    *(volatile signed char *)((v0_0 + 0x1));
    FUN_0c187798(((int)stk + 0), v0_2);
    (((struct o4C_float *)(v0_0))->v) = ((*(float *)((t16 + 0x0))) - ((((struct o28_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o4_float *)(t16))->v)) - ((((struct o2C_float *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (((((struct o8_float *)(t16))->v)) - ((((struct o30_float *)(v0_0))->v)));
    FUN_0c17c450((v0_0 + 0x4C));
    if ((((((struct o54_float *)(v0_0))->v)) != 0.0f)) goto L_C12FFB2;
    (((struct o54_float *)(v0_0))->v) = 9.99999975e-06f;
    goto L_C12FFB2;
    L_C13004E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    goto L_C13008E;
    L_C12FFB2:;
    w0_0 = (((struct o4C_float *)(v0_0))->v);
    w0_1 = (((struct o54_float *)(v0_0))->v);
    w0_1 = (w0_1 * w0_1);
    w0_1 = w0_1 + w0_0 * w0_0;
    v0_4 = ((int (*)(int, int, int, int, float, float))(math_atan2_angle16))(v0_1, v0_2, 0x0, v0_3, (-((((struct o50_float *)(v0_0))->v))), _builtin_sqrtf(w0_1));
    *(unsigned int *)((v0_0 + 0x34)) = v0_4;
    v0_1 = (0xFA4);
    if (((int)v0_4 <= (int)0xFA4)) goto L_C12FFDC;
    *(unsigned int *)((v0_0 + 0x34)) = v0_1;
    L_C12FFDC:;
    v0_4 = (0x54);
    v0_1 = (0xFFFFF05C);
    if (((int)(*(int *)((v0_0 + 0x34))) >= (int)0xFFFFF05C)) goto L_C12FFE8;
    *(unsigned int *)((v0_0 + 0x34)) = v0_1;
    L_C12FFE8:;
    *(unsigned int *)((v0_0 + 0x38)) = (((int (*)(int, int, int, int, float, float))(math_atan2_angle16))(v0_1, v0_2, 0x0, v0_3, ((((struct o4C_float *)(v0_0))->v)), (*(float *)((v0_0 + v0_4)))));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) * 37.0f);
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) * 37.0f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) * 37.0f);
    L_C130010:;
    if ((((int)((int)(*(short *)((v0_0 + 0x1C))) % (int)0x1E)) != 0)) goto L_C130026;
    FUN_0c07e2f4(v0_0, 0x63);
    L_C130026:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_1))->v) = (((((struct o78_int *)(v0_1))->v)) + 0x1555);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_4 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) < (int)0x384)) goto L_C13008E;
    goto L_C13004E;
}

int FUN_0c13022a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) >= (int)0xA) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0x1555);
                t0 = 0x78;
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            t1 = t0;
        } else {
            t0 = ((*(int *)((a4 + 0x38))) + 0x8000);
            t2 = 0x0;
            for (;;) {
                t0 = (t0 + 0x2000);
                t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
                if ((int)t2 >= 0) {
                    t3 = (t2 & 0x1);
                }
                FUN_0c13009a(a4, t0, t3);
                t2 = (t2 + 0x1);
                if ((int)t2 >= (int)0x7) {
                    break;
                }
            }
            FUN_0c059e60((*(int *)((a4 + 0x10))), 0x21);
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1);
    }
    (((struct oA8_uchar *)(a4))->v) = t1;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x14) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return (short)(t0 + 0x1);
}
