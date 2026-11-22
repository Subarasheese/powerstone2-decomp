/* Straight-line functions with calls and guards (batch gen_iv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3774_int { char p[0x3774]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c073fe2(int, int);
int FUN_0c076424(int);
int FUN_0c07a6aa(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0768f6(int a4);
int FUN_0c07657e(int a4);
int FUN_0c077c28(int a4, int a5, int a6, int a7);

int FUN_0c0768f6(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 1) {
        if (t0 != 2) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o37A0_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            t0 = FUN_0c037bf6(a4);
            if ((unsigned char)t0 != 0) {
                FUN_0c085cac(a4, 0x10, 0x7);
                t0 = *(int *)(((0x118 + a4) + 0x4));
                t1 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t0))->v) = 1.0f;
                (((struct o9C_float *)(t0))->v) = 1.0f;
                (((struct oA0_float *)(t1))->v) = 1.0f;
                (((struct o9C_float *)(t1))->v) = 1.0f;
                t0 = *(int *)(((0x118 + a4) + 0x4));
                t1 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t0))->v) = 1.0f;
                (((struct o98_float *)(t1))->v) = 1.0f;
                (((struct o94_float *)(t0))->v) = 1.0f;
                (((struct o94_float *)(t1))->v) = 1.0f;
                return 0x94;
            }
            return FUN_0c038362(a4);
        }
        return FUN_0c07a6aa(a4);
    }
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o37A0_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        FUN_0c085cac(a4, 0x10, 0x7);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        return 0x94;
    }
    return FUN_0c038362(a4);
}

int FUN_0c07657e(int a4)
{
    register int t0;
    register float u0;

    (((struct o374B_uchar *)(a4))->v) = 0x2;
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0x11) && ((int)t0 <= (int)0x3C)) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x5D1);
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + 3.56999993f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        (((struct o28_float *)(a4))->v) = u0;
        u0 = ((((struct o30_float *)(a4))->v));
        u0 = u0 + 3.56999993f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        (((struct o30_float *)(a4))->v) = u0;
    }
    FUN_0c076424(a4);
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085cac(a4, 0x10, 0x0);
    }
    return (unsigned char)t0;
}

int FUN_0c077c28(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    (((struct o3756_uchar *)(a4))->v) = 0x1;
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    if (((((struct o3774_int *)(a4))->v)) != 0) {
        t1 = (((struct o3774_int *)(a4))->v);
        if (((*(signed char *)((t1 + 0x0))) == 9) && (t0 = *(signed char *)((t1 + 0x41D)), t0 == 9)) {
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3774_int *)(a4))->v))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3774_int *)(a4))->v))))->v));
            (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)(((((struct o3774_int *)(a4))->v))))->v));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                return FUN_0c085d0c(a4, a5, a6, a7);
            }
            return (short)(t0 - 1);
        }
        return FUN_0c073fe2((((short)(*(signed char *)((a4 + 0x373F))) * (short)0x3938) + 0xC532498), (*(signed char *)((a4 + 0x1))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    return (short)(t0 - 1);
}
