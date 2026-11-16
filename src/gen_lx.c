/* Straight-line functions with calls and guards (batch gen_lx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C8_int { char p[0x2C8]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o414_int { char p[0x414]; int v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c056b68(int, int, int);
int FUN_0c07e328(int, int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int math_atan2_angle16(int, int, int, int, float, float);
int FUN_0c0c7c46(int a4, int a5, int a6, int a7);
int FUN_0c053da0(int a4);

int FUN_0c0c7c46(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    (((struct o420_ushort *)(a4))->v) = (*(short *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x1A)));
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            if (((((struct o414_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) == 0) {
                FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
            }
        }
    } else {
        t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x134));
        if ((t1 != 0) && ((signed char)t1 != 1)) {
            FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
            if ((*(signed char *)((a4 + 0x41F))) == 0) {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
            } else {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
            }
            FUN_0c07e328(a4, t1);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
    }
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 7) {
        return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
    }
    (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}

int FUN_0c053da0(int a4)
{
    int stk[8];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register float u19;
    register float u20;
    int t26;
    register int t27;
    register int t28;
    register int t1;
    register float u5;
    register float u6;
    int t8;
    register int t41;
    register int t38;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = (((struct o2C8_int *)(a4))->v);
    (((struct o14_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = 0.0f;
    *(unsigned int *)(((int)stk + 4)) = 0xC532498;
    t2 = 0xC532498;
    t3 = 0xC532498;
    t4 = 0x0;
    for (;;) {
        if (((*(signed char *)((t2 + 0x3714))) != 0) && (t8 = *(signed char *)((t2 + 0x375D)), t8 == 0)) {
            u5 = ((((struct o14_float *)(((int)stk + 0)))->v));
            u6 = ((((struct o28_float *)(t3))->v));
            t1 = 0x30;
            t1 = (t1 + t3);
            u5 = (u5 + u6);
            t4 = (t4 + 0x1);
            (((struct o14_float *)(((int)stk + 0)))->v) = u5;
            u5 = ((((struct o8_float *)((((int)stk + 0) + 0x14)))->v));
            u6 = (*(float *)((t1 + 0x0)));
            u5 = (u5 + u6);
            (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = u5;
        }
        t2 = (t2 + 0x3938);
        t3 = (t3 + 0x3938);
        if ((unsigned int)t2 >= (unsigned int)0xC540978) {
            break;
        }
    }
    (((struct o14_float *)(((int)stk + 0)))->v) = (((((struct o14_float *)(((int)stk + 0)))->v)) / (float)t4);
    (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x14)))->v)) / (float)t4);
    (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o14_float *)(((int)stk + 0)))->v)) - ((((struct o34_float *)(t0))->v)));
    u19 = (((struct o3C_float *)(t0))->v);
    u20 = (((struct o8_float *)((((int)stk + 0) + 0x14)))->v);
    (((struct o8_float *)((((int)stk + 0) + 0x8)))->v) = (u20 - u19);
    if ((u20 - u19) == 0.0f) {
        (((struct o8_float *)((((int)stk + 0) + 0x8)))->v) = (*(float *)0xC053ED8);
    }
    t26 = math_atan2_angle16((((int)stk + 0) + 0x14), t2, t3, 0x3938, ((((struct o8_float *)(((int)stk + 0)))->v)), ((((struct o8_float *)((((int)stk + 0) + 0x8)))->v)));
    t27 = *(int *)(((t0 + 0x1C) + 0x10));
    t28 = *(int *)(((t0 + 0x1C) + 0x14));
    if (((int)(unsigned short)((0xFFFF & t26) - t27) >= (int)t28) && ((int)(unsigned short)((0xFFFF & t26) - t27) <= (int)(unsigned short)(0x8000 - t28))) {
        *(unsigned int *)(((t0 + 0x1C) + 0x4)) = (unsigned short)((*(int *)(((t0 + 0x1C) + 0x10))) + (*(int *)(((t0 + 0x1C) + 0x14))));
        t41 = (t0 + 0x1C);
    } else {
        t41 = *(int *)((t0 + 0x30));
        if (((int)(unsigned short)((0xFFFF & t26) - t27) <= (int)(unsigned short)(-t41)) && ((int)(unsigned short)((0xFFFF & t26) - t27) >= (int)(unsigned short)(0x8000 + t41))) {
            t38 = (unsigned short)((*(int *)(((t0 + 0x1C) + 0x10))) - (*(int *)(((t0 + 0x1C) + 0x14))));
        } else {
            t38 = (*(int *)(((t0 + 0x1C) + 0x10)));
        }
        *(unsigned int *)(((t0 + 0x1C) + 0x4)) = t38;
    }
    return (FUN_0c056b68((*(int *)(((int)stk + 0))), t41, t28));
}
