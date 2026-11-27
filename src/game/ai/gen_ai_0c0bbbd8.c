/* game/ai: functions 0C0BBBD8-0C0BD4AC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o404_int { char p[0x404]; int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o42E_short { char p[0x42E]; short v; };
struct o42E_ushort { char p[0x42E]; unsigned short v; };
struct o430_ushort { char p[0x430]; unsigned short v; };
struct o432_ushort { char p[0x432]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_short { char p[0x7C]; short v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_short { char p[0x7E]; short v; };
struct o80_short { char p[0x80]; short v; };
struct o8_float { char p[0x8]; float v; };
float FUN_0c064d9c(int);
void FUN_0c0bc420(int);
int FUN_0c0bd4ac(int);
float math_signed_sqrt(float);
int nlRand(void);
int FUN_0c187798(int, int, int);
int memset(int, int, int);
int FUN_0c0bbbd8(int a4);
int FUN_0c0bbc72(int a4);
int FUN_0c0bbcbe(int a4);
int FUN_0c0bbcc4(int a4);
int FUN_0c0bbcf6(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0bbe96(int a4);
int FUN_0c0bbee6(int a4);
int FUN_0c0bbf58(int a4);
int FUN_0c0bbf8e(void);
int FUN_0c0bc104(int a4);
void FUN_0c0bc154(void);
int FUN_0c0bc15c(void);
void FUN_0c0bc25a(void);
int ai_clear_op_state(void);
int FUN_0c0bc2c0(int a4, int a5, int a6);

int FUN_0c0bbbd8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t2 = 0x2710;
    t3 = 0xC532498;
    for (;;) {
        if ((t3 != a4) && ((t0 = *(signed char *)((t3 + 0x3714)), t1 = t0, t1 != 0) && (u0 = (((struct o160_float *)(t3))->v), u0 > 0.0f))) {
            u1 = ((((struct o30_float *)(t3))->v));
            u1 = (u1 - ((((struct o30_float *)(a4))->v)));
            u2 = ((((struct o28_float *)(t3))->v));
            u2 = (u2 - ((((struct o28_float *)(a4))->v)));
            u3 = u2;
            u4 = (u1 * u1);
            u4 = u4 + u3 * u2;
            u1 = u4;
            u3 = (math_signed_sqrt(u4));
            t1 = (int)u3;
            t1 = (unsigned short)t1;
            if ((int)((unsigned short)t2) > (int)t1) {
                u3 = (math_signed_sqrt(u1));
                t2 = (int)u3;
            } else {
                t5 = t1;
            }
        } else {
            t5 = t1;
        }
        t3 = (t3 + 0x3938);
        t1 = t5;
        if ((unsigned int)t3 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t2;
}

int FUN_0c0bbc72(int a4)
{
    register int t0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u7;

    t0 = *(signed char *)0xC472462;
    u1 = (((struct o4C_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u2 = (((struct o54_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u3 = (((struct o28_float *)(a4))->v);
    u4 = (((struct o30_float *)(a4))->v);
    u7 = ((u2 - u4) * (u2 - u4));
    u7 = u7 + ((u1 - u3)) * ((u1 - u3));
    return (int)(math_signed_sqrt(u7));
}

int FUN_0c0bbcbe(int a4)
{
    return ((((struct o376C_int *)(a4))->v));
}

int FUN_0c0bbcc4(int a4)
{
    int t1;
    register int t2;

    if ((((((struct o3768_int *)(a4))->v)) != 0) && (t1 = (((struct o3768_int *)(a4))->v), t2 = *(signed char *)((t1 + 0x41C)), (unsigned char)t2 != 0xC2)) {
        return ((((struct o3768_int *)(a4))->v));
    }
    return 0x0;
}


int FUN_0c0bbe96(int a4)
{
    register int t3;
    register int t4;
    int t0;
    register int t1;
    register int t2;
    register float u5;
    register float u6;
    register int t7;
    register float u8;
    register int t9;

    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((((t3 * 0x3938) + 0xC532498) != a4) && ((t0 = 0x3714, t7 = *(signed char *)((((t3 * 0x3938) + 0xC532498) + t0)), t1 = t7, t1 != 0) && ((t0 = 0x160, u6 = 0.0f, u8 = *(float *)((((t3 * 0x3938) + 0xC532498) + t0)), u5 = u8, u5 > u6) && (t0 = 0x371A, t9 = *(signed char *)((((t3 * 0x3938) + 0xC532498) + t0)), t1 = t9, t1 != 0)))) {
            t2 = 0x1;
            t2 = ((int)t2 << (int)t3);
            t4 = (t4 | t2);
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x4) {
            break;
        }
    }
    return t4;
}

int FUN_0c0bbee6(int a4)
{
    register int t2;
    register int t3;
    int t0;
    register int t1;
    register float u4;
    register float u5;
    register int t6;
    register float u7;
    register int t8;

    t2 = 0xC532498;
    t3 = 0x0;
    for (;;) {
        if ((t2 != a4) && ((t0 = 0x3714, t6 = *(signed char *)((t2 + t0)), t1 = t6, t1 != 0) && ((t0 = 0x160, u5 = 0.0f, u7 = *(float *)((t2 + t0)), u4 = u7, u4 > u5) && (t0 = 0x3715, t8 = *(signed char *)((t2 + t0)), t0 = t8, t0 == 14)))) {
            t3 = t2;
        }
        t2 = (t2 + 0x3938);
        if ((unsigned int)t2 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t3;
}



int FUN_0c0bc104(int a4)
{
    (((struct o42E_ushort *)(a4))->v) = ((((struct o42C_short *)(a4))->v));
    (((struct o42C_ushort *)(a4))->v) = 0x0;
    (((struct o0_uchar *)0xC472462)->v) = (*(signed char *)((a4 + 0x1)));
    (((struct o1_uchar *)0xC472462)->v) = (*(signed char *)((a4 + 0x2)));
    FUN_0c0bc420(a4);
    FUN_0c0bd4ac(a4);
    (((struct o430_ushort *)(a4))->v) = ((~((((struct o42E_short *)(a4))->v))) & ((((struct o42C_short *)(a4))->v)));
    (((struct o432_ushort *)(a4))->v) = ((~((((struct o42C_short *)(a4))->v))) & ((((struct o42E_short *)(a4))->v)));
    return 0x432;
}

void FUN_0c0bc154(void)
{
    *(unsigned int *)0xC472664 = 0x0;
}

int FUN_0c0bc15c(void)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)0xC472462;
    *(unsigned int *)(((((unsigned short)((((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) << 2) + (0x1C4 + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC))) + 0x0)) = (*(int *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x8)));
    t0 = *(signed char *)0xC472462;
    *(unsigned int *)(((((unsigned short)((((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) << 2) + (0x174 + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC))) + 0x0)) = ((((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v));
    t0 = *(signed char *)0xC472462;
    t1 = (((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u0 = (((struct o6C_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    *(float *)(((((((unsigned short)t1 << 1) + (unsigned short)t1) << 2) + (0x84 + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC))) + 0x0)) = u0;
    t0 = *(signed char *)0xC472462;
    t1 = (((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u0 = (((struct o70_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    (((struct o4_float *)((((((unsigned short)t1 << 1) + (unsigned short)t1) << 2) + (0x84 + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))))->v) = u0;
    t0 = *(signed char *)0xC472462;
    t1 = (((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u0 = (((struct o74_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    (((struct o8_float *)((((((unsigned short)t1 << 1) + (unsigned short)t1) << 2) + (0x84 + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))))->v) = u0;
    t0 = *(signed char *)0xC472462;
    *(unsigned short *)(((((unsigned short)((((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) << 1) + (0x23C + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC))) + 0x0)) = ((((struct o80_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v));
    t0 = *(signed char *)0xC472462;
    *(unsigned short *)(((((unsigned short)((((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) << 1) + (0x214 + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC))) + 0x0)) = ((((struct o7E_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v));
    t0 = *(signed char *)0xC472462;
    (((struct o7C_ushort *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = (((((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) + 0x1);
    return 0x7C;
}

void FUN_0c0bc25a(void)
{
    
}

int ai_clear_op_state(void)
{
    *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = 0x0;
    *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x1)) = 0x0;
    *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x2)) = 0x0;
    *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x3)) = 0x0;
    return 0x0;
}

int FUN_0c0bc2c0(int a4, int a5, int a6)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_3 = a4;
    v0_4 = a5;
    v0_5 = a6;
    *(unsigned char *)(((int)stk + 4)) = v0_4;
    *(unsigned char *)(((int)stk + 0)) = v0_5;
    v0_1 = (v0_3);
    v0_0 = (0xC472463);
    if (((*(signed char *)((v0_3 + 0x371A))) != 0)) goto L_C0BC2FC;
    v0_2 = (FUN_0c0bbe96(v0_1)) != 0;
    if (v0_2) goto L_C0BC2F0;
    v0_4 = (0xC25DABC);
    v0_3 = (((unsigned char)(*(signed char *)((v0_0 + 0x0))) << 2));
    L_C0BC2F8:;
    v0_3 = ((*(int *)((v0_3 + v0_4))));
    L_C0BC306:;
    v0_2 = *(signed char *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = ((unsigned char)v0_2 << 2);
    v0_2 = *(int *)(((*(int *)((v0_3 + ((unsigned char)v0_2 << 2)))) + ((unsigned char)(*(signed char *)(((int)stk + 0))) << 2)));
    v0_6 = *(signed char *)((v0_2 + 0x0));
    v0_2 = ((v0_2 + 0x1));
    v0_3 = (0x0);
    v0_4 = ((unsigned char)v0_6);
    v0_5 = (v0_6);
    v0_7 = (0xC5421F8);
    if (((int)(unsigned char)v0_6 <= 0)) goto L_C0BC344;
    L_C0BC324:;
    if (((int)(unsigned char)(*(signed char *)((v0_2 + (unsigned char)v0_3))) <= (int)(unsigned char)(*(signed char *)(((v0_7 + 0x4A) + 0x0))))) goto L_C0BC33C;
    v0_2 = ((v0_2 + (unsigned char)v0_5));
    L_C0BC344:;
    v0_4 = (0x0);
    v0_5 = ((unsigned char)v0_3);
    if (((int)(unsigned char)v0_3 <= 0)) goto L_C0BC35A;
    L_C0BC34C:;
    v0_3 = (int)(unsigned char)(v0_4 + 0x1) < (int)v0_5;
    v0_2 = (((v0_2 + 0x1) + (unsigned char)(*(signed char *)((v0_2 + 0x0)))));
    v0_4 = ((v0_4 + 0x1));
    if (v0_3) goto L_C0BC34C;
    L_C0BC35A:;
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((v0_2 + 0x0)));
    v0_3 = *(signed char *)0xC472462;
    v0_2 = *(signed char *)(((v0_2 + 0x1) + (short)((int)((int)(nlRand()) % (int)(unsigned char)(*(signed char *)(((int)stk + 0)))))));
    *(unsigned short *)(((0xC471AF4 + ((unsigned short)(unsigned char)v0_3 * (unsigned short)0x264)) + 0x0)) = (unsigned char)v0_2;
    v0_2 = (v0_2);
    if (((*(signed char *)((v0_1 + 0x371A))) != 0)) goto L_C0BC3E0;
    v0_1 = (FUN_0c0bbe96(v0_1)) != 0;
    if (v0_1) goto L_C0BC3A4;
    v0_4 = (0xC25D9FC);
    v0_3 = (((unsigned char)(*(signed char *)((v0_0 + 0x0))) << 2));
    L_C0BC3AC:;
    v0_3 = ((*(int *)((v0_3 + v0_4))));
    L_C0BC3EA:;
    v0_0 = *(int *)(((*(int *)((v0_3 + (*(int *)(((int)stk + 8)))))) + ((unsigned char)v0_2 << 2)));
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = v0_0;
    return v0_0;
    L_C0BC3A4:;
    v0_4 = (0xC25DA7C);
    v0_3 = (((unsigned char)(*(signed char *)((v0_0 + 0x0))) << 2));
    goto L_C0BC3AC;
    L_C0BC3E0:;
    v0_3 = ((*(int *)((((unsigned char)(*(signed char *)((v0_0 + 0x0))) << 2) + 0xC25DA3C))));
    goto L_C0BC3EA;
    L_C0BC33C:;
    v0_6 = (int)(unsigned char)(v0_3 + 0x1) < (int)v0_4;
    v0_3 = ((v0_3 + 0x1));
    if (v0_6) goto L_C0BC324;
    goto L_C0BC344;
    L_C0BC2F0:;
    v0_4 = (0xC25DB3C);
    v0_3 = (((unsigned char)(*(signed char *)((v0_0 + 0x0))) << 2));
    goto L_C0BC2F8;
    L_C0BC2FC:;
    v0_3 = ((*(int *)((((unsigned char)(*(signed char *)((v0_0 + 0x0))) << 2) + 0xC25DAFC))));
    goto L_C0BC306;
}


