/* Straight-line functions with calls and guards (batch gen_iw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1A0_uint { char p[0x1A0]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int);
int FUN_0c179ac0(void);
int math_atan2_angle16(int, int, int, int, float, float);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0f8298(int a4);
int FUN_0c053128(int a4, int a5, int a6, int a7);

int FUN_0c0f8298(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = (*(short *)((0xC1FB370 + ((*(signed char *)((a4 + 0x2))) << 1))));
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            u0 = (((struct oBC_float *)(a4))->v);
            (((struct oB8_float *)(a4))->v) = u0;
            (((struct oB4_float *)(a4))->v) = u0;
            (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0500000007f);
            t1 = 0xBC;
            if (!(((((struct oBC_float *)(a4))->v)) > 0.0f)) {
                (((struct oBC_float *)(a4))->v) = 0.0f;
                (((struct oB8_float *)(a4))->v) = 0.0f;
                (((struct oB4_float *)(a4))->v) = 0.0f;
                t3 = FUN_0c179ac0();
                t4 = ((~(((~t3) + 0x1) & 0x1)) + 0x1);
                if ((int)t3 >= 0) {
                    t4 = (t3 & 0x1);
                }
                *(unsigned short *)((a4 + 0x1C)) = ((short)(t4 + 0x1) * (short)(*(short *)((0xC1FB378 + ((*(signed char *)((a4 + 0x2))) << 1)))));
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t1 = 0x15;
            }
            t2 = t1;
        }
        t1 = t2;
    } else {
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
        t3 = (short)(t2 - 1);
        if ((int)(short)(t2 - 1) > 0) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct oBC_float *)(a4))->v) = 1.0f;
            (((struct oB8_float *)(a4))->v) = 1.0f;
            (((struct oB4_float *)(a4))->v) = 1.0f;
            t2 = FUN_0c179ac0();
            t4 = ((~(((~t2) + 0x1) & 0x1F)) + 0x1);
            if ((int)t2 >= 0) {
                t4 = (t2 & 0x1F);
            }
            (((struct o28_float *)(a4))->v) = ((float)(t4 - 16) * 20.0f);
            t2 = FUN_0c179ac0();
            t4 = ((~(((~t2) + 0x1) & 0x1F)) + 0x1);
            if ((int)t2 >= 0) {
                t4 = (t2 & 0x1F);
            }
            (((struct o2C_float *)(a4))->v) = ((float)t4 * 5.0f);
            u0 = 200.0f;
            u0 = u0 + 1000.0f * (float)(-(*(signed char *)((a4 + 0x2))));
            (((struct o30_float *)(a4))->v) = u0;
            if (((*(short *)((a4 + 0x1E))) & 3) == 0) {
                t2 = 0x2;
                if (((*(signed char *)((a4 + 0x2))) == 0) && (t0 = *(short *)((a4 + 0x1E)), (t0 & 4) != 0)) {
                    t2 = 0x1;
                }
                thunk_FUN_0c05abb2(t2, 0x0);
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            t3 = (t0 + 0x1);
        }
        t1 = t3;
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0xE) {
        return FUN_0c03f346(a4);
    }
    return t1;
}

int FUN_0c053128(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t3;
    register int t52;
    register int t5;
    register int t6;
    register int t7;
    register int t19;
    register float u22;
    register float u23;
    int t28;
    register int t29;
    register int t30;
    register int t35;
    register int t38;
    register int t40;
    register int t4;
    register float u8;
    register float u9;
    int t39;

    t0 = *(signed char *)0xC542237;
    t3 = *(int *)((((*(signed char *)0xC54223C) << 2) + ((((t0 << 1) + t0) << 2) + 0xC1BF61C)));
    *(unsigned int *)(((int)stk + 0)) = t3;
    t52 = t3;
    if (t3 != -1) {
        (((struct o18_float *)(((int)stk + 0)))->v) = 0.0f;
        (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = 0.0f;
        *(unsigned int *)(((int)stk + 8)) = 0xC532498;
        t5 = 0xC532498;
        t6 = 0xC532498;
        t7 = 0x0;
        for (;;) {
            if ((*(signed char *)((t5 + 0x3714))) != 0) {
                u8 = ((((struct o18_float *)(((int)stk + 0)))->v));
                u9 = ((((struct o28_float *)(t6))->v));
                t4 = 0x30;
                t4 = (t4 + t6);
                u8 = (u8 + u9);
                t7 = (t7 + 0x1);
                (((struct o18_float *)(((int)stk + 0)))->v) = u8;
                u8 = ((((struct o8_float *)((((int)stk + 0) + 0x18)))->v));
                u9 = (*(float *)((t4 + 0x0)));
                u8 = (u8 + u9);
                (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = u8;
            }
            t5 = (t5 + 0x3938);
            t6 = (t6 + 0x3938);
            if ((unsigned int)t5 >= (unsigned int)0xC540978) {
                break;
            }
        }
        (((struct o18_float *)(((int)stk + 0)))->v) = (((((struct o18_float *)(((int)stk + 0)))->v)) / (float)t7);
        (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x18)))->v)) / (float)t7);
        t19 = *(int *)(((int)stk + 0));
        (((struct oC_float *)(((int)stk + 0)))->v) = (((((struct o18_float *)(((int)stk + 0)))->v)) - (*(float *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0x0))));
        u22 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v);
        u23 = (((struct o8_float *)(((((t19 << 2) + t19) << 2) + 0xC1BF52C)))->v);
        (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = (u22 - u23);
        if ((u22 - u23) == 0.0f) {
            (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = 9.99999997e-07f;
        }
        t28 = math_atan2_angle16((((int)stk + 0) + 0x18), ((((t19 << 2) + t19) << 2) + 0xC1BF52C), t6, 0x3938, ((((struct oC_float *)(((int)stk + 0)))->v)), ((((struct o8_float *)((((int)stk + 0) + 0xC)))->v)));
        *(unsigned int *)(((int)stk + 0)) = ((((t19 << 2) + t19) << 2) + 0xC1BF52C);
        t29 = *(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0xC));
        t30 = *(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0x10));
        if (((int)(unsigned short)((0xFFFF & t28) - t29) >= (int)t30) && ((int)(unsigned short)((0xFFFF & t28) - t29) <= (int)(unsigned short)((-t30) + 0x8000))) {
            (((struct o1A0_uint *)(a4))->v) = (unsigned short)((*(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0xC))) + (*(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0x10))));
        } else {
            t35 = *(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0x10));
            if (((int)(unsigned short)((0xFFFF & t28) - t29) <= (int)(unsigned short)(-t35)) && ((int)(unsigned short)((0xFFFF & t28) - t29) >= (int)(unsigned short)(0x8000 + t35))) {
                (((struct o1A0_uint *)(a4))->v) = (unsigned short)((*(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0xC))) - (*(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0x10))));
            } else {
                t38 = *(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0x10));
                *(unsigned short *)(((int)stk + 0)) = t38;
                if (((int)(unsigned short)((0xFFFF & t28) - t29) > (int)(unsigned short)((-t38) + 0x8000)) && (t39 = *(short *)(((int)stk + 0)), (int)(unsigned short)((0xFFFF & t28) - t29) < (int)(unsigned short)(t39 + 0x8000))) {
                    *(unsigned int *)(((int)stk + 4)) = ((((t19 << 2) + t19) << 2) + 0xC1BF52C);
                    t40 = *(int *)((((((t19 << 2) + t19) << 2) + 0xC1BF52C) + 0xC));
                    (((struct o1A0_uint *)(a4))->v) = (((t40 - (0xFFFF & t28)) + t40) + 0x8000);
                } else {
                    (((struct o1A0_uint *)(a4))->v) = (0xFFFF & t28);
                }
            }
        }
        t52 = 0x1A0;
    }
    return t52;
}
