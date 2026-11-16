/* Straight-line functions with calls and guards (batch gen_fi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37A8_float { char p[0x37A8]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f444(int, int, int);
int FUN_0c059dae(int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c070320(int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c07ec9a(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c048cc0(int a4, int a5, int a6);
int FUN_0c080d2a(int a4, int a5, int a6, int a7);
int FUN_0c0915ac(int a4);

int FUN_0c048cc0(int a4, int a5, int a6)
{
    int stk[12];
    register int t0;
    register int t2;
    register int t5;
    register int t10;
    register int t12;
    register int t17;
    register int t13;
    register int t19;
    register int t24;
    register int t20;
    register int t26;
    register int t31;
    register int t27;
    register int t33;
    register int t38;
    register int t34;
    register int t40;
    register int t45;
    register int t41;
    register int t47;
    register int t52;
    register int t48;
    register int t54;
    register int t56;
    register int t90;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t69;
    register float u84;
    register float u88;

    *(unsigned int *)(((int)stk + 4)) = ((a5 * 0x34) + 0xC240A7C);
    t0 = (((int)stk + 0) + 0x8);
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)((((int)stk + 0) + 0x8) + 0x28)) {
            break;
        }
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
    }
    t2 = a6;
    if ((unsigned int)a6 > (unsigned int)0x5F5E0FF) {
        t2 = 0x5F5E0FF;
    }
    t5 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0x989680)) % (unsigned int)0xA);
    t10 = 0x0;
    if ((t5 != 0) || (0x0 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x1C)) = t5;
        if (0x1 == 1) {
            t13 = 0x8;
        }
        t10 = 0x1;
    }
    t12 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0xF4240)) % (unsigned int)0xA);
    t20 = t13;
    t17 = t10;
    if ((t12 != 0) || (t10 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x18)) = t12;
        if ((t10 + 0x1) == 1) {
            t13 = 0x7;
        }
        t20 = t13;
        t17 = (t10 + 0x1);
    }
    t19 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0x186A0)) % (unsigned int)0xA);
    t27 = t20;
    t24 = t17;
    if ((t19 != 0) || (t17 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x14)) = t19;
        if ((t17 + 0x1) == 1) {
            t20 = 0x6;
        }
        t27 = t20;
        t24 = (t17 + 0x1);
    }
    t26 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0x2710)) % (unsigned int)0xA);
    t34 = t27;
    t31 = t24;
    if ((t26 != 0) || (t24 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x10)) = t26;
        if ((t24 + 0x1) == 1) {
            t27 = 0x5;
        }
        t34 = t27;
        t31 = (t24 + 0x1);
    }
    t33 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0x3E8)) % (unsigned int)0xA);
    t41 = t34;
    t38 = t31;
    if ((t33 != 0) || (t31 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0xC)) = t33;
        if ((t31 + 0x1) == 1) {
            t34 = 0x4;
        }
        t41 = t34;
        t38 = (t31 + 0x1);
    }
    t40 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0x64)) % (unsigned int)0xA);
    t48 = t41;
    t45 = t38;
    if ((t40 != 0) || (t38 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x8)) = t40;
        if ((t38 + 0x1) == 1) {
            t41 = 0x3;
        }
        t48 = t41;
        t45 = (t38 + 0x1);
    }
    t47 = (int)((unsigned int)((int)((unsigned int)t2 / (unsigned int)0xA)) % (unsigned int)0xA);
    t54 = t48;
    t52 = t45;
    if ((t47 != 0) || (t45 != 0)) {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = t47;
        if ((t45 + 0x1) == 1) {
            t48 = 0x2;
        }
        t54 = t48;
        t52 = (t45 + 0x1);
    }
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = ((int)((unsigned int)t2 % (unsigned int)0xA));
    if ((t52 + 0x1) == 1) {
        t54 = 0x1;
    }
    t56 = FUN_0c03f444(0x8, 0x0, t54);
    t90 = t56;
    if (t56 != 0) {
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        if ((int)t54 > 0) {
            t57 = 0x32;
            t58 = 0x208;
            t59 = 0x0;
            for (;;) {
                t60 = *(int *)((((0xC4 + t56) + t59) + 0x0));
                FUN_0c037498(t60, 0x0, ((*(int *)(((((int)stk + 0) + 0x8) + t59))) + 0x45), (*(int *)0xC4B410C));
                *(unsigned char *)((t60 + 0x0)) = 0x1;
                *(unsigned short *)((t60 + 0x6)) = 0x1F;
                *(volatile int *)(((int)stk + 4));
                FUN_0c187798();
                (((struct o6C_float *)(t60))->v) = (((((struct o6C_float *)(t60))->v)) + (float)t58);
                (((struct o70_float *)(t60))->v) = (((((struct o70_float *)(t60))->v)) - 15.0f);
                (((struct o74_float *)(t60))->v) = (((((struct o74_float *)(t60))->v)) + (float)t57);
                (((struct o18_float *)(t60))->v) = 0.0f;
                (((struct o1C_float *)(t60))->v) = 1.0f;
                (((struct o20_float *)(t60))->v) = 1.0f;
                (((struct o84_float *)(t60))->v) = (1.0f + 1.0f);
                (((struct o88_float *)(t60))->v) = 1.0f;
                (((struct o8C_float *)(t60))->v) = 6400.0f;
                t69 = *(int *)(((int)stk + 0));
                t58 = (t58 - 20);
                *(unsigned int *)(((int)stk + 0)) = (t69 + 0x1);
                t57 = (t57 + 0x1);
                t59 = (t59 + 0x4);
                if ((int)(t69 + 0x1) >= (int)t54) {
                    break;
                }
            }
        }
        *(unsigned char *)((t56 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t56))->v) = 0x1F;
        (((struct oA9_uchar *)(t56))->v) = 0x21;
        (((struct oA8_uchar *)(t56))->v) = 0x1;
        *(unsigned int *)((t56 + 0x4)) = 0xC048C50;
        u84 = (((struct o0_float *)0xC0490A0)->v);
        (((struct o28_float *)(t56))->v) = (((((struct o28_float *)(t56))->v)) / u84);
        (((struct o2C_float *)(t56))->v) = (((((struct o2C_float *)(t56))->v)) / u84);
        (((struct o30_float *)(t56))->v) = ((((struct o4_float *)0xC0490A0)->v));
        u88 = (((struct o8_float *)0xC0490A0)->v);
        (((struct o44_float *)(t56))->v) = u88;
        (((struct o40_float *)(t56))->v) = u88;
        (((struct o48_float *)(t56))->v) = ((((struct oC_float *)0xC0490A0)->v));
        t90 = 0x48;
    }
    return t90;
}

int FUN_0c080d2a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c07eaf4(a4, a5, a6);
    t2 = *(int *)(((0xC5413E8 + ((short)t0 * (short)0x2F8)) + 0x0));
    t0 = *(signed char *)((a4 + 0x371D));
    if ((t0 != 3) && ((t0 != 5) && (t0 != 6))) {
        if ((*(signed char *)((a4 + 0x3730))) == 4) {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            t3 = *(signed char *)((a4 + 0x2));
            t4 = *(signed char *)(((0x371C + a4) + 0x0));
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((t2 + t1))) * ((((struct o14_float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1))))->v)));
            t3 = *(signed char *)((a4 + 0x2));
            t4 = *(signed char *)(((0x371C + a4) + 0x0));
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((t2 + t1))) * ((((struct o14_float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1))))->v)));
        }
        if ((*(signed char *)((a4 + 0x3721))) == 0) {
            t3 = *(signed char *)((a4 + 0x2));
            t4 = *(signed char *)(((0x371C + a4) + 0x0));
            (((struct o50_float *)(a4))->v) = ((((struct o10_float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1))))->v));
            t3 = *(signed char *)((a4 + 0x2));
            t4 = *(signed char *)(((0x371C + a4) + 0x0));
            (((struct o5C_float *)(a4))->v) = (((((struct o18_float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1))))->v)) * ((((struct o37A8_float *)(a4))->v)));
        } else {
            if (((*(signed char *)((0xC2738C9 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34)))) & 1) == 0) {
                t3 = *(signed char *)((a4 + 0x2));
                t4 = *(signed char *)(((0x371C + a4) + 0x0));
                (((struct o50_float *)(a4))->v) = ((((struct o20_float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1))))->v));
                t3 = *(signed char *)((a4 + 0x2));
                t4 = *(signed char *)(((0x371C + a4) + 0x0));
                t5 = (((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1));
                t3 = 0x24;
                u0 = ((((struct o37A8_float *)(a4))->v));
            } else {
                t4 = *(signed char *)((a4 + 0x2));
                t6 = *(signed char *)(((0x371C + a4) + 0x0));
                (((struct o50_float *)(a4))->v) = ((((struct o28_float *)((((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC259E54) + (((((t6 << 1) + t6) << 2) << 2) << 1))))->v));
                t4 = *(signed char *)((a4 + 0x2));
                t6 = *(signed char *)(((0x371C + a4) + 0x0));
                t5 = (((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC259E54) + (((((t6 << 1) + t6) << 2) << 2) << 1));
                t3 = 0x2C;
                u0 = ((((struct o37A8_float *)(a4))->v));
            }
            (((struct o5C_float *)(a4))->v) = ((*(float *)((t3 + t5))) * u0);
        }
    } else {
        t3 = *(signed char *)((a4 + 0x371D));
        t4 = 0x0;
        if (t3 != 3) {
            t5 = 0x1;
            if (t3 != 5) {
                t6 = 0x2;
                if (t3 != 6) {
                    t6 = t0;
                }
                t5 = t6;
            }
            t4 = t5;
        }
        if ((*(signed char *)((a4 + 0x3730))) == 4) {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = ((((struct o4_float *)((0xC25AA54 + ((t4 << 2) << 2))))->v));
            u0 = ((((struct o8_float *)((0xC25AA54 + ((t4 << 2) << 2))))->v));
            u1 = ((((struct o37A8_float *)(a4))->v));
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((t2 + t1))) * ((((struct oC_float *)((0xC25AA54 + ((t4 << 2) << 2))))->v)));
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((t2 + t1))) * ((((struct oC_float *)((0xC25AA54 + ((t4 << 2) << 2))))->v)));
            (((struct o50_float *)(a4))->v) = ((((struct o4_float *)((0xC25AA54 + ((t4 << 2) << 2))))->v));
            u0 = ((((struct o8_float *)((0xC25AA54 + ((t4 << 2) << 2))))->v));
            u1 = ((((struct o37A8_float *)(a4))->v));
        }
        (((struct o5C_float *)(a4))->v) = (u0 * u1);
    }
    return 0x5C;
}

