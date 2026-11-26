/* Straight-line functions with calls and guards (batch gen_ib): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3778_int { char p[0x3778]; int v; };
struct o3778_uint { char p[0x3778]; unsigned int v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382C_ushort { char p[0x382C]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_short { char p[0x80]; short v; };
struct o80_ushort { char p[0x80]; unsigned short v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c07c4b0(int, int);
int FUN_0c07d2c4(int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c0cff96(int, int, float);
int FUN_0c0eb630(int, int, int);
int ai_clear_op_state(void);
int ai_script_branch(int, int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0d95f0(int a4, int a5, int a6, int a7);
int FUN_0c15b5b4(int a4, int a5, int a6, int a7);
int FUN_0c084fcc(int a4, int a5, int a6, int a7);
int FUN_0c0d9540(int a4, int a5, int a6, int a7);
int FUN_0c0788fc(int a4, int a5, int a6, int a7);
int FUN_0c06fbd4(int a4, int a5, int a6);
int FUN_0c0c0d20(int a4);
int FUN_0c0d9238(int a4, int a5, int a6, int a7, float f4);
int FUN_0c09a074(int a4, int a5, int a6, int a7);
int FUN_0c099774(int a4, int a5, int a6, int a7);
int FUN_0c0bda64(int a4, int a5);
int FUN_0c077eec(int a4, int a5, int a6, int a7);
int FUN_0c0bddb0(void);
int FUN_0c07960c(int a4, int a5, int a6, int a7);
int FUN_0c0bdb64(int a4, int a5);
int FUN_0c0be324(int a4);
int FUN_0c0be484(void);
int FUN_0c077cc8(int a4, int a5, int a6, int a7);
int FUN_0c06f3e4(int a4, int a5, int a6, int a7);
int FUN_0c076638(int a4, int a5, int a6, int a7);
int FUN_0c0769cc(int a4, int a5, int a6, int a7);
int FUN_0c09a21e(int a4, int a5, int a6, int a7);
int FUN_0c09a434(int a4, int a5, int a6, int a7);
int FUN_0c08be24(int a4, int a5, int a6, int a7);

int FUN_0c0d95f0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, 0x1, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    u0 = *(float *)0xC54109C;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, 0x0, 0x1, a7);
            }
            u1 = (((struct o2C_float *)(a4))->v);
            if (u1 > (u0 + -1000.0f)) {
                t0 = 0xC0D96D4;
                if (!((u0 + 1000.0f) > u1)) {
                    (((struct o14_uchar *)(a4))->v) = 0x0;
                    t0 = 0x14;
                }
                t1 = t0;
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x0;
                t1 = 0x14;
            }
            return t1;
        }
        u1 = (((struct o2C_float *)(a4))->v);
        t0 = 0x2C;
        if (u1 > (u0 + -1000.0f)) {
            t1 = 0xC0D96D4;
            if ((u0 + 1000.0f) > u1) {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct oAC_ushort *)(a4))->v) = 0xF;
                (((struct oA9_uchar *)(a4))->v) = 0x21;
                (((struct o12E_ushort *)(a4))->v) = 0xFCF;
                (((struct o12C_ushort *)(a4))->v) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            t0 = t1;
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0x0;
    (((struct oA9_uchar *)(a4))->v) = 0x0;
    if ((*(signed char *)((a4 + 0x2))) == 0) {
        (((struct o28_float *)(a4))->v) = 570.0f;
        (((struct o2C_float *)(a4))->v) = 3265.0f;
        (((struct o30_float *)(a4))->v) = 0.0f;
    }
    (((struct o12E_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c15b5b4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    u0 = *(float *)0xC15B6A0;
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o18_float *)(t1))->v)));
        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + ((((struct o1C_float *)(t1))->v)));
        (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) + ((((struct o20_float *)(t1))->v)));
        u1 = (((struct o1C_float *)(t1))->v);
        (((struct o1C_float *)(t1))->v) = (u1 + u0);
        if (0.0f > (u1 + u0)) {
            if (!((((((struct o70_float *)(t1))->v))) > ((((struct o2C_float *)(a4))->v)))) {
                u1 = ((((struct o1C_float *)(t1))->v));
                u1 *= -1.0f;
                (((struct o1C_float *)(t1))->v) = u1;
            }
        }
        t0 = (t0 + 0x4);
        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x1800);
        if ((unsigned int)t0 >= (unsigned int)0xC) {
            break;
        }
    }
    return 0x7C;
}

int FUN_0c084fcc(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t4;
    int t5;

    (((struct o3715_uchar *)(a4))->v) = 0x2B;
    FUN_0c081dfc(a4, a5, a6, a7);
    FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x3);
    t3 = (((struct o3768_int *)(a4))->v);
    if (t3 != 0) {
        t4 = FUN_0c0c30a8(t3, 0x0, a4);
        if ((t4 != 0) && (t5 = *(signed char *)((t3 + 0x41C)), (unsigned char)t5 == 0xCA)) {
            (((struct o3778_uint *)(a4))->v) = t3;
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3778_int *)(a4))->v))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3778_int *)(a4))->v))))->v));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(((((struct o3778_int *)(a4))->v))))->v)) + -151.0f);
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            (((struct oB0_float *)(a4))->v) = 1.0f;
            *(unsigned int *)((a4 + 0x10)) = (FUN_0c0eb630(a4, t3, 0x1));
            (((struct o382E_ushort *)(a4))->v) = 0x0;
            (((struct o374A_uchar *)(a4))->v) = 0xA;
            return 0x374A;
        }
        return FUN_0c085d0c(a4);
    }
    return FUN_0c085d0c(a4);
}



int FUN_0c06fbd4(int a4, int a5, int a6)
{
    register float u3;
    register int t11;

    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    u3 = *(float *)0xC06FCF0;
    if (!(u3 > ((((struct o2C_float *)(a4))->v)))) {
        (((struct o2C_float *)(a4))->v) = u3;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t11 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x14);
    if (t11 == 0) {
        return thunk_FUN_0c05abb2(0x50, (a4 + 0x28));
    }
    return t11;
}

int FUN_0c0c0d20(int a4)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3715));
    if ((t0 != 0) && ((t0 != 3) && ((t0 != 1) && ((t0 != 5) && ((t0 != 13) && (t0 != 27)))))) {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t1 = t0;
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x1;
        ai_clear_op_state();
        t0 = (((struct o0_int *)0xC47245C)->v);
        *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = t0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c0d9238(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC287958, f4);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x384;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}



int FUN_0c0bda64(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE));
    t1 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t1 + 0x2);
    if ((int)t0 >= (int)(*(short *)((((t1 + 0x2) - 2) + 0x0)))) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}


int FUN_0c0bddb0(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC472462;
    t1 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t1 + 0x2);
    (((struct o80_ushort *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = (((((struct o80_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) & (~(*(short *)((((t1 + 0x2) - 2) + 0x0)))));
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}


int FUN_0c0bdb64(int a4, int a5)
{
    register int t10;

    if ((*(short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE))) == 0) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t10 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t10;
}

int FUN_0c0be324(int a4)
{
    register int t4;

    *(unsigned short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE)) = (*(signed char *)((0x3715 + ((((struct o3760_int *)(a4))->v)))));
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    ai_clear_op_state();
    t4 = *(signed char *)0xC472462;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)t4 * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    return ((unsigned short)(unsigned char)t4 * (unsigned short)0x264);
}

int FUN_0c0be484(void)
{
    register int t4;

    (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = (unsigned char)(*(signed char *)0xC542242);
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t4 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t4;
}







