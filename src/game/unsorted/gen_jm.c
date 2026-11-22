/* Straight-line functions with calls and guards (batch gen_jm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3746_uchar { char p[0x3746]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o3774_int { char p[0x3774]; int v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o382A_short { char p[0x382A]; short v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o3864_int { char p[0x3864]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c067734(int);
int FUN_0c06f804(int);
int FUN_0c06f83c(int);
int FUN_0c070320(int);
int FUN_0c073fe2(int, int);
int FUN_0c074584(int, int);
int FUN_0c0752a8(int);
int FUN_0c0784c2(int);
int FUN_0c079650(int, int, int, int, float);
int FUN_0c07a65c(int);
int FUN_0c07a6aa(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ebe6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c087e4a(int);
int FUN_0c088000(int);
int FUN_0c0a5e2e(int, int, int, int);
int FUN_0c0a5ee2(int);
int FUN_0c0a6020(int);
int FUN_0c0a606a(int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c14f9d6(int, int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int FUN_0c079a78(int a4);
int FUN_0c06f864(int a4);
int FUN_0c0797bc(int a4);
int FUN_0c079b94(int a4);
int FUN_0c0a608e(int a4, int a5, int a6, int a7);
int FUN_0c0796cc(int a4);
int FUN_0c079740(int a4);
int FUN_0c07985c(int a4);
int FUN_0c079b4e(int a4);
int FUN_0c0798d0(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0a612c(int a4, int a5, int a6, int a7);
int FUN_0c08804c(int a4);

int FUN_0c079a78(int a4)
{
    register int t9;

    FUN_0c0784c2(a4);
    (((struct o3746_uchar *)(a4))->v) = 0x1E;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0x1;
    }
    (((struct o22_ushort *)(a4))->v) = 0x0;
    if (((((struct o3774_int *)(a4))->v)) != 0) {
        t9 = (((((struct o3864_int *)(a4))->v)) - (int)(((float)(*(signed char *)((a4 + 0x373D))) * 737280.0f) / 360.0f));
    } else {
        t9 = ((*(int *)((a4 + 0x38))) - (int)(((float)(*(signed char *)((a4 + 0x373D))) * 737280.0f) / 360.0f));
    }
    (((struct o3850_uint *)(a4))->v) = t9;
    (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) & 0xFFFF);
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC079C24);
    FUN_0c059e60(a4, 0x3F);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c06f864(int a4)
{
    int t0;
    register int t1;

    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t1 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x5, a4);
        if (t1 != 0) {
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(((((struct o3768_int *)(a4))->v))))->v)) + (*(float *)0xC06F968));
            *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((struct o3768_int *)(a4))->v)) + 0x38)));
        }
    }
    t1 = FUN_0c07ebe6(a4);
    if ((t1 == 0) && (t0 = (((struct o3768_int *)(a4))->v), t0 != 0)) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            return FUN_0c06f83c(a4);
        }
        return FUN_0c06f804(a4);
    }
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    FUN_0c085cac(a4, 0x5, 0x7);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 0.00999999978f);
    (((struct o37C0_float *)(a4))->v) = ((((struct o168_float *)(a4))->v));
    return 0x37C0;
}

int FUN_0c0797bc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o3756_uchar *)(a4))->v) = 0x1;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x2F, 0xFFFFFFFF, 0x5, 0x2F);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = (*(float *)0xC0798AC);
        FUN_0c067734(a4);
        t0 = nlRand();
        t2 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
        if ((int)t0 >= 0) {
            t2 = (t0 & 0x3);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC541068 + (((t2 << 1) + t2) << 2))); }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 500.0f);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c079b94(int a4)
{
    register int t5;

    if (((((struct o382A_short *)(a4))->v)) == 0) {
        (((struct o382A_ushort *)(a4))->v) = 0x0;
        return FUN_0c073fe2((((short)(*(signed char *)((a4 + 0x373F))) * (short)0x3938) + 0xC532498), (*(signed char *)((a4 + 0x1))));
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t5 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t5 != 0) {
            if (t5 == 2) {
                return FUN_0c07a6aa(a4);
            }
            (((struct o50_float *)(a4))->v) = 0.0f;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0a608e(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t5;
    register int t6;
    register int t7;
    int t1;

    if (((int)(*(signed char *)((a4 + 0x15))) < (int)0x2) && (t1 = (((struct o3770_int *)(a4))->v), t1 == 0)) {
        FUN_0c085d0c(a4, a5, a6, a7);
        t5 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t5))->v) = 5.0f;
        (((struct o94_float *)(t5))->v) = 5.0f;
        t6 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t6))->v) = 5.0f;
        (((struct o94_float *)(t6))->v) = 5.0f;
        return 0x94;
    }
    t7 = *(signed char *)((a4 + 0x15));
    switch (t7) {
    case 0:
        FUN_0c0a5ee2(a4);
        break;
    case 1:
        FUN_0c0a6020(a4);
        break;
    case 2:
        FUN_0c0a606a(a4);
        break;
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return FUN_0c070320(a4);
}

int FUN_0c0796cc(int a4)
{
    int t0;
    register int t1;

    if ((((((struct o3774_int *)(a4))->v)) != 0) && (t0 = (((struct o3774_int *)(a4))->v), t1 = *(signed char *)((0x41C + t0)), (unsigned char)t1 == 55)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((((struct o3774_int *)(a4))->v)) + 0x28)); }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 5.0f);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x59);
        FUN_0c059e60(a4, 0x4);
        FUN_0c14f9d6((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c079740(int a4)
{
    int t0;
    register int t1;

    if ((((((struct o3774_int *)(a4))->v)) != 0) && (t0 = (((struct o3774_int *)(a4))->v), t1 = *(signed char *)((0x41C + t0)), (unsigned char)t1 == 55)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((((struct o3774_int *)(a4))->v)) + 0x28)); }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 5.0f);
    }
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.5f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c07985c(int a4)
{
    register int t0;

    t0 = FUN_0c0752a8(a4);
    if (t0 != 1) {
        if (t0 != 2) {
            FUN_0c037bf6(a4);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        return FUN_0c07a6aa(a4);
    }
    return FUN_0c07a65c(a4);
}

int FUN_0c079b4e(int a4)
{
    if (!(0.0f > (*(float *)(((((((struct o22_short *)(a4))->v)) << 2) + (*(int *)((0xC25AEA4 + ((*(signed char *)((a4 + 0x373E))) << 2))))))))) {
        return FUN_0c074584(a4, (a4 + 0x22));
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    return 0x4C;
}

int FUN_0c0798d0(int a4, int a5, int a6, int a7, float f4)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x16))) > 0) && (t0 = *(signed char *)((a4 + 0x130)), t0 != 0)) {
        return 0x130;
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c07985c(a4);
                }
                return FUN_0c0797bc(a4);
            }
            return FUN_0c079740(a4);
        }
        return FUN_0c0796cc(a4);
    }
    return FUN_0c079650(a4, a5, a6, a7, f4);
}

int FUN_0c0a612c(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        *(volatile signed char *)((a4 + 0x3728));
        
        return FUN_0c0a608e(a4, a5, a6, a7);
    }
    *(volatile signed char *)((a4 + 0x3728));
    
    return FUN_0c0a5e2e(a4, a5, a6, a7);
}

int FUN_0c08804c(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c088000(a4);
    }
    return FUN_0c087e4a(a4);
}
