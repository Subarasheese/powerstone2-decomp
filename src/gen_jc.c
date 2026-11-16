/* Straight-line functions with calls and guards (batch gen_jc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o42C_short { char p[0x42C]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c013b44(int, int, int);
int FUN_0c02b3ba(float, float, float);
int FUN_0c02b502(int);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
extern int FUN_0c03f40c();
int FUN_0c0485f2(int, int, int);
int FUN_0c048a80(int, int);
int FUN_0c048b7a(int, int, int);
int FUN_0c048cc0(int, int, int);
int FUN_0c048fc6(int, int);
int FUN_0c049188(void);
int FUN_0c04930a(int);
int FUN_0c04942c(void);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059c54(int);
int FUN_0c0bb70c(int);
int FUN_0c0bb73e(int);
int FUN_0c0bb994(int);
int FUN_0c0bc25e(void);
int FUN_0c0c212c(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4b76();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
int FUN_0c0d409c(int);
int FUN_0c0d4122(int, int, int);
int FUN_0c104d70(void);
int FUN_0c117944(int, ...);
int FUN_0c1371a0(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c18778c(void);
int FUN_0c187798(int, int, int);
int FUN_0c187d88(int);
int game_reset_objects(void);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c157790(int a4, int a5, int a6, int a7);
int FUN_0c0c10c4(int a4, float f4);
int FUN_0c0e01c6(int a4, int a5, int a6, int a7);
int FUN_0c0135bc(int a4);
int FUN_0c0494a2(void);
int FUN_0c0bfba4(int a4);
int FUN_0c10e7e4(int a4, int a5, int a6, int a7);
int FUN_0c137258(int a4, int a5, int a6, int a7);

int FUN_0c157790(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t24;
    register int t38;
    register int t43;
    register int t44;
    register int t49;
    register int t52;
    register int t55;
    register int t56;
    register int t46;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t56 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x14) {
                FUN_0c0588bc((a4 + 0x40), 0xC2A2810, 0xC2A2804, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x14) {
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2828, 0xC2A281C, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                }
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x4) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A27F4, 0xC2A27E4, (*(short *)((a4 + 0x1C))), 0x4, 0x0);
            }
            t24 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t24 + 0x1);
            t56 = (short)(t24 + 0x1);
            if ((int)(short)(t24 + 0x1) > (int)0x14) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t56 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(volatile int *)((a4 + 0xC4));
        t38 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x14, (*(int *)0xC4B40CC));
        *(volatile int *)((a4 + 0xC4));
        t43 = ((int (*)(void))(FUN_0c187798))();
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x3F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t44 = ((int (*)(int))(FUN_0c187798))(0x1);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = t46;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        *(volatile int *)((a4 + 0xC4));
        t49 = ((int (*)(int))(FUN_0c187798))(t46);
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        t52 = (((struct oC4_int *)(a4))->v);
        t55 = math_atan2_angle16(((((struct o70_float *)(t52))->v)), ((((struct o6C_float *)(t52))->v)));
        (((struct o80_uint *)(t52))->v) = ((t55 - 16384) & 0xFFFF);
        t56 = ((t55 - 16384) & 0xFFFF);
    }
    return t56;
}

int FUN_0c0c10c4(int a4, float f4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_1 = a4;
    v0_0 = *(int *)0xC47245C;
    *(unsigned int *)0xC47245C = (v0_0 + 0x2);
    *(unsigned short *)(((int)stk + 0)) = (*(short *)((((v0_0 + 0x2) - 2) + 0x0)));
    *(unsigned short *)(((int)stk + 4)) = (FUN_0c0bb994(v0_1));
    v0_8 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    v0_3 = ((unsigned char)v0_8);
    v0_4 = (v0_1);
    v0_0 = (0xC471ACC);
    v0_5 = (0xC47245C);
    v0_2 = (0xC472462);
    v0_7 = (0x264);
    v0_1 = (0xC472460);
    v0_6 = (0x0);
    if (((unsigned char)v0_8 == 0)) goto L_C0C1116;
    if ((v0_3 == 1)) goto L_C0C1128;
    if ((v0_3 != 2)) goto L_C0C1112;
    *(unsigned short *)((v0_1 + 0x0)) = 0x1;
    v0_1 = FUN_0c0bc25e();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)((v0_5 + 0x0)));
    v0_3 = (v0_1);
    L_C0C123E:;
    return v0_3;
    L_C0C1112:;
    goto L_C0C123E;
    L_C0C1128:;
    *(unsigned short *)((v0_1 + 0x0)) = v0_6;
    v0_7 = FUN_0c0bb73e(v0_4);
    (((struct o26_ushort *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_0)))->v) = ((int)((int)(short)((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x50)) / (int)0x14));
    v0_6 = (((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_0)))->v);
    v0_3 = (v0_6);
    v0_5 = (v0_7);
    v0_7 = ((0x4000 + v0_7));
    if ((v0_6 == 0)) goto L_C0C117E;
    if ((v0_3 == 1)) goto L_C0C1188;
    if ((v0_3 == 2)) goto L_C0C11C8;
    if (!((v0_3 == 3))) goto L_C0C11EA;
    R10 = ((FUN_0c0bb70c((0xFFFFC000 + v0_5))));
    v0_1 = (v0_7);
    goto L_C0C11E2;
    L_C0C11EA:;
    v0_5 = *(short *)(((int)stk + 4));
    v0_7 = *(short *)(((int)stk + 0));
    v0_3 = (v0_5);
    v0_6 = (v0_5);
    v0_8 = (v0_7);
    if (((int)v0_7 >= (int)(v0_5 - 10))) goto L_C0C1200;
    v0_3 = (0x42C);
    v0_7 = ((((((struct o42C_short *)(v0_4))->v)) | R10));
    L_C0C120C:;
    *(unsigned short *)((v0_4 + v0_3)) = v0_7;
    goto L_C0C123E;
    L_C0C1200:;
    if (((int)v0_8 <= (int)(v0_6 + 0xA))) goto L_C0C1210;
    v0_3 = (0x42C);
    v0_7 = ((((((struct o42C_short *)(v0_4))->v)) | v0_1));
    goto L_C0C120C;
    L_C0C1210:;
    v0_1 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C123E;
    L_C0C11E2:;
    v0_1 = ((FUN_0c0bb70c(v0_1)));
    goto L_C0C11EA;
    L_C0C11C8:;
    v0_3 = ((FUN_0c0bb70c(v0_5)));
    L_C0C11CE:;
    R10 = (v0_3);
    v0_1 = (0x8000);
    L_C0C11D2:;
    v0_1 = ((v0_1 + v0_5));
    goto L_C0C11E2;
    L_C0C1188:;
    R10 = ((FUN_0c0bb70c(v0_7)));
    v0_1 = (0xC000);
    goto L_C0C11D2;
    L_C0C117E:;
    v0_3 = ((FUN_0c0bb70c(v0_5)));
    goto L_C0C11CE;
    L_C0C1116:;
    *(unsigned short *)((v0_1 + 0x0)) = v0_6;
    v0_3 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_3 * (unsigned short)v0_7) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_3 * (unsigned short)v0_7) + v0_0) + 0x0))) + 0x1);
    goto L_C0C1128;
}

int FUN_0c0e01c6(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)0xC54223C) != 1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if ((unsigned int)t0 < (unsigned int)0xC) {
            switch ((t0 << 1)) {
                case 0:
                {
                    return FUN_0c0d409c(a4);
                }
                case 2:
                {
                    return FUN_0c0d4122(a4, (a4 + 0x28), (*(int *)((a4 + 0x38))));
                }
                case 4:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4b76))(a4, a5, a6);
                }
                case 6:
                case 22:
                {
                    return FUN_0c0c2a80(a4);
                }
                case 8:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
                }
                case 10:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
                }
                case 12:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c52c4))(a4, a5, a6);
                }
                case 14:
                {
                    return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
                }
                case 16:
                {
                    return ((int (*)(int, int, int, int))(FUN_0c0c8c36))(a4, a5, a6, a7);
                }
                default:
                {
                    return ((int (*)(int, int, int, int))(0xC0E0170))(a4, a5, a6, a7);
                }
            }
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o41C_uchar *)(a4))->v) = 0xC3;
    (((struct o424_uchar *)(a4))->v) = 0xC;
    FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    t0 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2));
    (((struct o160_float *)(a4))->v) = (float)t0;
    (((struct o420_ushort *)(a4))->v) = (int)(float)t0;
    FUN_0c0c212c(a4);
    (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x2;
    (((struct oAA_uchar *)(a4))->v) = 0x1;
    (((struct oAB_uchar *)(a4))->v) = 0x4;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c0d409c(a4);
            }
            case 2:
            {
                return FUN_0c0d4122(a4, (a4 + 0x28), (*(int *)((a4 + 0x38))));
            }
            case 4:
            {
                return ((int (*)(int))(FUN_0c0c4b76))(a4);
            }
            case 6:
            case 22:
            {
                return FUN_0c0c2a80(a4);
            }
            case 8:
            {
                return ((int (*)(int))(FUN_0c0c4c1c))(a4);
            }
            case 10:
            {
                return ((int (*)(int))(FUN_0c0c5024))(a4);
            }
            case 12:
            {
                return ((int (*)(int))(FUN_0c0c52c4))(a4);
            }
            case 14:
            {
                return ((int (*)(int))(FUN_0c0c8c08))(a4);
            }
            case 16:
            {
                return ((int (*)(int))(FUN_0c0c8c36))(a4);
            }
            default:
            {
                return ((int (*)(int, int, int, int))(0xC0E0170))(a4, a5, a6, a7);
            }
        }
    }
    return t0;
}



int FUN_0c0bfba4(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    int t13;
    register int t14;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t9 = 0xC532498;
    t10 = 0xC532498;
    t11 = 0xC532498;
    t12 = 0x0;
    for (;;) {
        if ((unsigned int)t9 >= (unsigned int)0xC540978) {
            break;
        }
        t13 = 0x3714;
        t14 = (*(signed char *)((t9 + t13)));
        if ((t14 != 0) && ((t13 = 0x160, u0 = 0.0f, u1 = *(float *)((t11 + t13)), u2 = u1, u2 == u0) && (t13 = 0x3719, t0 = a4, t1 = *(signed char *)((t10 + t13)), t2 = (t14 == 0), t14 = t1, t13 = 0x3719, t3 = *(signed char *)((t0 + t13)), t4 = t3, t14 == t4))) {
            t12 = (t12 + 0x1);
        }
        t9 = (t9 + 0x3938);
        t11 = (t11 + 0x3938);
        t10 = (t10 + 0x3938);
    }
    if (t12 != 0) {
        t0 = (int)((int)(FUN_0c179ac0()) % (int)t12);
        t1 = t0;
        t2 = 0xC18760C;
        t3 = 0x0;
        t4 = 0xC532498;
        t9 = 0xC532498;
        t10 = 0xC532498;
        t11 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)0x4) {
                break;
            }
            t1 = 0x3714;
            t13 = (t3 * 0x3938);
            t13 = (t13 + 0xC532498);
            t2 = (*(signed char *)((t13 + t1)));
            if ((t2 != 0) && ((t1 = 0x160, u3 = 0.0f, u4 = *(float *)((t9 + t1)), u5 = u4, u5 == u3) && (t1 = 0x3719, t5 = (t2 == 0), t2 = a4, t6 = *(signed char *)((t10 + t1)), t13 = t6, t1 = 0x3719, t7 = *(signed char *)((t2 + t1)), t8 = t7, t13 == t8))) {
                t13 = t0;
                t14 = t11 == t13;
                t11 = (t11 + 0x1);
                if (t14) {
                    t12 = t4;
                }
            }
            t10 = (t10 + 0x3938);
            t9 = (t9 + 0x3938);
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x3938);
        }
        (((struct o78_uint *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = t12;
        *(volatile signed char *)0xC472462;
        FUN_0c187798(t3, t4, t9);
        (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0x1;
    } else {
        (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0x0;
    }
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t0 = FUN_0c0bc25e();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}

int FUN_0c10e7e4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                u0 = (((((struct o4C_float *)(a4))->v)) * (float)(*(short *)(((0x41C + a4) + 0x4))));
                *(unsigned short *)(((0x41C + a4) + 0x6)) = ((*(short *)(((0x41C + a4) + 0x6))) + (int)((u0 * ((((struct o0_float *)0xC10E9F4)->v))) / (float)(*(short *)(((0x41C + a4) + 0x2)))));
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4_float *)0xC10E9F4)->v)) / (float)(*(short *)(((0x41C + a4) + 0x2)))));
                *(unsigned short *)((a4 + 0x1C)) = ((int)((int)(*(short *)(((0x41C + a4) + 0x6))) / (int)0x64));
                if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x28) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    *(unsigned short *)(((0x41C + a4) + 0x6)) = 0x0;
                }
                t0 = *(short *)(((0x41C + a4) + 0x4));
                *(unsigned short *)(((0x41C + a4) + 0x4)) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    return ((int (*)(int, int, int, int))(0xC10DE56))(a4, a5, a6, a7);
                }
                return (short)(t0 - 1);
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + (int)((((struct o4C_float *)(a4))->v)));
            *(unsigned short *)(((0x41C + a4) + 0x2)) = 0xB4;
            *(unsigned short *)(((0x41C + a4) + 0x4)) = (*(short *)(((0x41C + a4) + 0x2)));
            *(unsigned short *)(((0x41C + a4) + 0x6)) = ((short)(*(short *)((a4 + 0x1C))) * (short)0x64);
            return (FUN_0c117944(0xEA));
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0x4)) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0x6)) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0x4)) = (((int)((int)(FUN_0c179ac0()) % (int)0x14)) + 0x1E);
        (((struct o4C_float *)(a4))->v) = 3.0f;
    }
    t0 = FUN_0c104d70();
    if (t0 != 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t0 = 0x17;
    } else {
        t1 = *(short *)(((0x41C + a4) + 0x4));
        *(unsigned short *)(((0x41C + a4) + 0x4)) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            *(unsigned short *)(((0x41C + a4) + 0x4)) = (((int)((int)(FUN_0c179ac0()) % (int)0x14)) + 0x78);
            FUN_0c117944(0xE9);
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + (int)((((struct o4C_float *)(a4))->v)));
        t1 = *(short *)((a4 + 0x1C));
        t0 = t1;
        if ((int)t1 >= (int)0x28) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t0 = 0x0;
        }
    }
    return t0;
}

int FUN_0c137258(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t4;
    register int t22;
    register float t27;
    register float t31;
    register int t35;
    register int t48;
    register int t75;
    register float t80;
    register float t84;
    register int t88;
    register int t101;
    register int t124;
    int t6;

    if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 26) {
        t124 = (FUN_0c03f346(a4, a5, a6, a7));
    } else {
        t4 = *(signed char *)((a4 + 0x14));
        if (t4 != 0) {
            if (t4 != 1) {
                if (t4 == 2) {
                    if (((*(int *)((a4 + 0x10))) != 0) && (t6 = *(int *)((a4 + 0x10)), t124 = *(signed char *)((0x14 + t6)), t124 != 2)) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t124 = 0x14;
                    }
                } else {
                    t124 = (FUN_0c03f346(a4, a5, a6, a7));
                }
            } else {
                if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o4_int *)0xC2A1830)->v)))) == 0) {
                    t22 = (((struct o8_int *)0xC2A1830)->v);
                    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = ((int)((int)(((int)((int)(FUN_0c179ac0()) % (int)t22)) * 0x168) / (int)t22));
                    t27 = math_sin_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    *(unsigned int *)(((int)stk + 0)) = 0xC2A183C;
                    *(float *)(((int)stk + 16)) = (t27 * ((((struct oC_float *)0xC2A1830)->v)));
                    *(float *)(((int)stk + 20)) = 0.0f;
                    t31 = math_cos_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    *(float *)(((int)stk + 24)) = (t31 * (*(float *)(((*(int *)(((int)stk + 0))) + 0x0))));
                    t35 = FUN_0c1371a0((*(signed char *)((a4 + 0x1))), (((int)stk + 0) + 0x10), a4);
                    if (t35 != 0) {
                        *(unsigned int *)((a4 + 0x10)) = t35;
                    }
                }
                if ((int)(*(signed char *)((0xC5324AD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) <= (int)0x2) {
                    t48 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t48 + 0x1);
                    t124 = (short)(t48 + 0x1);
                    if ((int)(short)(t48 + 0x1) > (int)((((struct o0_int *)0xC2A1830)->v))) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t124 = 0x14;
                    }
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t124 = 0x14;
                }
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o4_int *)0xC2A1830)->v)))) == 0) {
                t75 = (((struct o8_int *)0xC2A1830)->v);
                *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = ((int)((int)(((int)((int)(FUN_0c179ac0()) % (int)t75)) * 0x168) / (int)t75));
                t80 = math_sin_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                *(unsigned int *)(((int)stk + 0)) = 0xC2A183C;
                *(float *)(((int)stk + 16)) = (t80 * ((((struct oC_float *)0xC2A1830)->v)));
                *(float *)(((int)stk + 20)) = 0.0f;
                t84 = math_cos_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                *(float *)(((int)stk + 24)) = (t84 * (*(float *)(((*(int *)(((int)stk + 0))) + 0x0))));
                t88 = FUN_0c1371a0((*(signed char *)((a4 + 0x1))), (((int)stk + 0) + 0x10), a4);
                if (t88 != 0) {
                    *(unsigned int *)((a4 + 0x10)) = t88;
                }
            }
            if ((int)(*(signed char *)((0xC5324AD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) <= (int)0x2) {
                t101 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t101 + 0x1);
                t124 = (short)(t101 + 0x1);
                if ((int)(short)(t101 + 0x1) > (int)((((struct o0_int *)0xC2A1830)->v))) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t124 = 0x14;
                }
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t124 = 0x14;
            }
        }
    }
    return t124;
}
