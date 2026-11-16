/* Straight-line functions with calls and guards (batch gen_at): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c16c328(int);
int math_atan2_angle16(float, float);
float math_signed_sqrt(float);
int FUN_0c16c294(int a4, int a5, int a6, int a7);
int FUN_0c0a0cfc(int a4, int a5, int a6, int a7);
int FUN_0c058716(int a4, int a5);

int FUN_0c16c294(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    FUN_0c16c328(a4);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0xB4;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c0a0cfc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            (((struct o372C_uchar *)(a4))->v) = 0x0;
            return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
        }
        return (unsigned char)t0;
    }
    if ((*(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))))) == 2) {
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 == 0) {
            FUN_0c038362(a4);
            (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
            return 0x3770;
        }
        (((struct o372C_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c058716(int a4, int a5)
{
    int stk[3];
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float t8;
    register float u10;
    int t13;

    *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((a5 + 0x0))) - ((((struct o28_float *)(a4))->v)));
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(a5))->v)) - ((((struct o2C_float *)(a4))->v)));
    u4 = (((struct o30_float *)(a4))->v);
    u5 = (((struct o8_float *)(a5))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u5 - u4);
    u6 = *(float *)((((int)stk + 0) + 0x0));
    u7 = ((u5 - u4) * (u5 - u4));
    u7 = u7 + u6 * u6;
    t8 = math_signed_sqrt(u7);
    u10 = t8;
    if (t8 == 0.0f) {
        u10 = 9.99999997e-07f;
    }
    t13 = math_atan2_angle16((-((((struct o4_float *)(((int)stk + 0)))->v))), u10);
    return (0xFFFF & t13);
}
