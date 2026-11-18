/* Straight-line functions with calls and guards (batch gen_cy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037bf6(int);
int FUN_0c059f20(int, int);
int FUN_0c059f78(int, int);
int FUN_0c06a444(int);
int FUN_0c070320(int);
int FUN_0c0752a8(int);
int FUN_0c075328(int, int, float, float);
int FUN_0c07a65c(int);
int FUN_0c07a6aa(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c14f824(int, int, int);
int FUN_0c1512a0(int, int);
int math_atan2_angle16(float, float);
int math_vec3_accumulate(int, int);
int nlSubVector3op(int, int, int);
int FUN_0c0a4456(int a4);
int FUN_0c0a163e(int a4, int a5, int a6);
int FUN_0c077950(int a4, int a5, float f4, float f5);
int FUN_0c0a73d6(int a4);
int FUN_0c0e0170(int a4);
int FUN_0c0e76d6(int a4, int a5, int a6, int a7);
int FUN_0c06b8bc(int a4);
int FUN_0c0a4164(int a4);
int FUN_0c071308(int a4);
int FUN_0c0ab708(int a4);
int FUN_0c0abae0(int a4);
int FUN_0c0b7e34(int a4);

int FUN_0c0a4456(int a4)
{
    int stk[7];
    register int t5;
    register int t10;
    register int t7;
    register int t8;

    nlSubVector3op((((int)stk + 12) + 0x4), (((short)(*(short *)((a4 + 0x1E))) * (short)0x3938) + 0xC5324C0), (a4 + 0x28));
    *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 24)))));
    t5 = FUN_0c037bf6(a4);
    t10 = (unsigned char)t5;
    if ((unsigned char)t5 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(int *)((int)stk + 8) = 0x14;
        *(int *)((int)stk + 4) = 0x2;
        t7 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t7;
        t8 = t7;
        *(int *)((int)stk + 0) = t8;
        FUN_0c07e79c(a4, t7, 0x2, 0x14, t8, 0x2, 0x14);
        (((struct o20_ushort *)(a4))->v) = 0x0;
        t10 = 0x20;
    }
    return t10;
}

int FUN_0c0a163e(int a4, int a5, int a6)
{
    register int t15;

    if (((*(int *)0xC542260) & 3) == 0) {
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (a4 + 0x28), a6);
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    t15 = FUN_0c037bf6(a4);
    if ((unsigned char)t15 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t15;
}

int FUN_0c077950(int a4, int a5, float f4, float f5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c075328(a4, a5, f4, f5);
    if ((signed char)t0 == 0) {
        t1 = FUN_0c0752a8(a4);
        if (t1 != 1) {
            if (t1 != 2) {
                FUN_0c037bf6(a4);
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            return FUN_0c07a6aa(a4);
        }
        return FUN_0c07a65c(a4);
    }
    return (signed char)t0;
}

int FUN_0c0a73d6(int a4)
{
    register float u1;
    register int t16;

    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if ((int)u1 != 1) {
        if ((int)u1 != 25) {
        } else {
            FUN_0c059f78((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
        }
    } else {
        FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
    }
    t16 = FUN_0c037bf6(a4);
    if ((unsigned char)t16 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t16;
}

int FUN_0c0e0170(int a4)
{
    FUN_0c0e2700((a4 + 0x28), 0xD, 0xFFFFFFFF, 0x1);
    FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}

int FUN_0c0e76d6(int a4, int a5, int a6, int a7)
{
    FUN_0c1512a0(0x4, (a4 + 0x28));
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}

int FUN_0c06b8bc(int a4)
{
    register int t1;

    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t1 != 0) {
            FUN_0c06a444(a4);
            (((struct o3717_uchar *)(a4))->v) = 0x6;
            (((struct o3718_uchar *)(a4))->v) = 0x0;
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        return t1;
    }
    return 0x50;
}

int FUN_0c0a4164(int a4)
{
    register int t9;

    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 0) {
        FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
    }
    t9 = FUN_0c037bf6(a4);
    if ((unsigned char)t9 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t9;
}

int FUN_0c071308(int a4)
{
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t1;
}

int FUN_0c0ab708(int a4)
{
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t1;
}

int FUN_0c0abae0(int a4)
{
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t1;
}

int FUN_0c0b7e34(int a4)
{
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t1;
}
