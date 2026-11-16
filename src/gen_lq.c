/* Straight-line functions with calls and guards (batch gen_lq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int);
int FUN_0c187798(int, int, int);
int math_atan_angle16(float);
float math_signed_sqrt(float);
int FUN_0c134780(int a4, int a5, int a6);
int FUN_0c1118ac(int a4, int a5, int a6);

int FUN_0c134780(int a4, int a5, int a6)
{
    int stk[4];
    int t14;
    register int t16;
    register int t18;
    register int t20;
    register int t22;
    register int t23;
    register float u26;
    register float u27;
    register float u28;
    register float t29;
    register int t31;
    register int t33;
    register int t35;
    register int t37;
    register int t39;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(a4, a5, a6);
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) - ((((struct o28_float *)(a4))->v)));
    (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o2C_float *)(a4))->v)));
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o30_float *)(a4))->v)));
    if (((((struct o4_float *)(((int)stk + 0)))->v)) == 0.0f) {
        (((struct o4_float *)(((int)stk + 0)))->v) = 9.99999997e-07f;
    }
    t14 = math_atan_angle16(((-((((struct o8_float *)((((int)stk + 0) + 0x4)))->v))) / ((((struct o4_float *)(((int)stk + 0)))->v))));
    t16 = (0xFFFF & t14);
    if (0.0f > ((((struct o4_float *)(((int)stk + 0)))->v))) {
        t16 = ((0xFFFF & t14) + 0x8000);
    }
    t18 = *(int *)((a4 + 0x38));
    t20 = (unsigned short)((unsigned short)(0x4000 + t16) - t18);
    if (((unsigned short)((unsigned short)(0x4000 + t16) - t18) & 0x8000) != 0) {
        t20 = ((unsigned short)((unsigned short)(0x4000 + t16) - t18) | 0xFFFF0000);
    }
    t22 = *(int *)(((int)stk + 0));
    t23 = (-(int)(((float)t22 * 65536.0f) / 360.0f));
    if ((int)t20 > 0) {
        t23 = (int)(((float)t22 * 65536.0f) / 360.0f);
    }
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + t23);
    u26 = (((struct o8_float *)((((int)stk + 0) + 0x4)))->v);
    u27 = (((struct o4_float *)(((int)stk + 0)))->v);
    u28 = (u26 * u26);
    u28 = u28 + u27 * u27;
    t29 = math_signed_sqrt(u28);
    t31 = math_atan_angle16(((-t29) / ((((struct o4_float *)((((int)stk + 0) + 0x4)))->v))));
    t33 = t31;
    if (0.0f > ((((struct o4_float *)((((int)stk + 0) + 0x4)))->v))) {
        t33 = (t31 + 0x8000);
    }
    t35 = *(int *)((a4 + 0x34));
    t37 = (unsigned short)((-(unsigned short)(0x4000 + t33)) - t35);
    if ((0x8000 & (unsigned short)((-(unsigned short)(0x4000 + t33)) - t35)) != 0) {
        t37 = ((unsigned short)((-(unsigned short)(0x4000 + t33)) - t35) | 0xFFFF0000);
    }
    t39 = (-(int)(((float)t22 * 65536.0f) / 360.0f));
    if ((int)t37 > 0) {
        t39 = (int)(((float)t22 * 65536.0f) / 360.0f);
    }
    *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + t39);
    return 0x4;
}

int FUN_0c1118ac(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)0xC4739A4;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    t2 = FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0);
                    if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                        return FUN_0c03f346(a4);
                    }
                    return t2;
                }
                return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
            }
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x61F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    t0 = 0x0;
    if ((int)(*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) >= 0) {
        t0 = (*(int *)((((*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) << 2) + 0xC474410)));
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    FUN_0c187798(0xC473C74, t0, a6);
    FUN_0c1171f0(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(volatile int *)0xC4B410C;
    return FUN_0c1173dc(((((struct oC4_int *)(a4))->v)), t0);
}
