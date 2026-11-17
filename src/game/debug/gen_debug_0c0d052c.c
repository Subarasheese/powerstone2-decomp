/* game/debug: functions 0C0D052C-0C0D0C9E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o160_float { char p[0x160]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c043010(void);
int FUN_0c0c2928(int, int, int, int, int, int, int);
int FUN_0c0d01f2(int);
int FUN_0c0d0238(void);
int FUN_0c0d0928(int);
int FUN_0c179ac0(void);
int FUN_0c17a360(int);
int FUN_0c17a4c0(int, int);
int dbg_printf(int, ...);
int FUN_0c0d052c(void);
int FUN_0c0d05f2(void);
void FUN_0c0d06cc(void);
int FUN_0c0d06e4(int a4, float f4);
int FUN_0c0d09ec(int a4);
int FUN_0c0d0ac6(float f4);
int FUN_0c0d0b60(int a4, int a5, int a6, int a7, int a8, int a9, float f4);

int FUN_0c0d052c(void)
{
    int stk[6];
    register int t2;
    register int t4;
    register int t5;
    register int t8;

    FUN_0c17a4c0(0x1E, 0x13);
    FUN_0c17a360(0xC1C747C);
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t2 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 16)) = (((t2 << 1) + t2) + 0x1E);
        *(unsigned int *)(((int)stk + 12)) = (0xC47280C + (t2 * 0x38));
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            FUN_0c17a4c0((*(int *)(((int)stk + 16))), (t5 + 0x14));
            t8 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((int)stk + 20)) = (((t5 << 2) << 1) + t8);
            *(int *)((int)stk + 4) = ((*(int *)(((((t5 << 2) << 1) + t8) + 0x4))));
            *(int *)((int)stk + 0) = 0xC1C7494;
            dbg_printf(0xC1C7494);
            t5 = (t5 + 0x1);
            t4 = (t4 + (*(int *)(((*(int *)(((int)stk + 20))) + 0x4))));
            if ((int)t5 >= (int)0x7) {
                break;
            }
        }
        FUN_0c17a4c0((((t2 << 1) + t2) + 0x1E), (t5 + 0x15));
        *(int *)((int)stk + 4) = (t4);
        *(int *)((int)stk + 0) = 0xC1C7494;
        dbg_printf(0xC1C7494);
        t2 = (t2 + 0x1);
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + t4);
        if ((int)t2 >= (int)0x8) {
            break;
        }
    }
    FUN_0c17a4c0((((t2 << 1) + t2) + 0x1E), (t5 + 0x15));
    *(int *)((int)stk + 4) = ((*(int *)(((int)stk + 8))));
    *(int *)((int)stk + 0) = 0xC1C7494;
    return (dbg_printf(0xC1C7494));
}

int FUN_0c0d05f2(void)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t9;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t26;
    register int t29;
    register int t31;
    register int t6;
    int t7;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 0)) = ((t1 * 0x38) + 0xC47280C);
        t2 = 0x1;
        for (;;) {
            t3 = 0x0;
            t4 = t0;
            for (;;) {
                if (((*(signed char *)((((t3 * 0x34) + 0xC2738B8) + 0x10))) == t1) && ((t6 = *(signed char *)((((t3 * 0x34) + 0xC2738B8) + 0x3)), t6 == t2) && (t7 = *(signed char *)((t3 + 0xC543024)), t7 != 0))) {
                    t9 = (t0 << 1);
                    t0 = (t0 + 0x1);
                    *(unsigned short *)((0xC47266C + t9)) = t3;
                }
                t3 = (t3 + 0x1);
                if ((int)t3 > (int)0x79) {
                    break;
                }
            }
            t17 = ((((t2 - 1) << 2) << 1) + (*(int *)(((int)stk + 0))));
            t2 = (t2 + 0x1);
            *(unsigned int *)((t17 + 0x0)) = ((t4 << 1) + 0xC47266C);
            *(unsigned int *)((t17 + 0x4)) = (t0 - t4);
            if ((int)t2 > (int)0x7) {
                break;
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x7) {
            break;
        }
    }
    t18 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC472A3C + (t18 << 2))) = 0x0;
        t19 = ((t18 * 0x38) + 0xC47280C);
        t20 = 0x0;
        for (;;) {
            t20 = (t20 + 0x1);
            *(unsigned int *)((((t18 << 2) + 0xC472A3C) + 0x0)) = ((*(int *)((((t18 << 2) + 0xC472A3C) + 0x0))) + (*(int *)((t19 + 0x4))));
            t19 = (t19 + 0x8);
            if ((int)t20 >= (int)0x7) {
                break;
            }
        }
        t26 = (t18 << 2);
        t18 = (t18 + 0x1);
        if ((int)t18 >= (int)0x7) {
            break;
        }
    }
    *(unsigned int *)0xC472A64 = 0x0;
    t29 = 0xC472A3C;
    for (;;) {
        t31 = *(int *)((t29 + 0x0));
        t29 = (t29 + 0x4);
        *(unsigned int *)0xC472A64 = ((*(int *)0xC472A64) + t31);
        if ((unsigned int)t29 >= (unsigned int)0xC472A58) {
            break;
        }
    }
    return t26;
}

void FUN_0c0d06cc(void)
{
    register int t0;

    t0 = 0xC472A68;
    for (;;) {
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x2);
        if ((unsigned int)t0 >= (unsigned int)0xC472A7C) {
            break;
        }
    }
    *(unsigned int *)0xC472A7C = 0x0;
}

int FUN_0c0d06e4(int a4, float f4)
{
    int stk[10];
    register int t1;
    register float u2;
    register int t4;
    register int t5;
    register float u6;
    register float u7;
    register float u8;
    register int t9;
    register int t10;
    register int t11;
    register float u13;
    register int t14;
    register int t15;
    register float u16;
    register float u17;
    register int t21;
    register int t22;
    register int t24;
    register int t27;
    register int t28;
    register int t30;
    register float u32;
    register float u33;
    register int t41;
    register float u42;
    register int t44;
    register int t45;
    register int t46;
    register float u47;
    register float u48;
    register int t49;
    register float u50;
    register int t51;
    register float u53;
    register int t55;
    register int t56;
    register float u57;
    register float u58;
    register int t62;
    register int t63;
    register int t65;
    register int t67;
    register int t68;
    register float u70;
    register float u71;
    register int t87;
    register int t25;
    register int t26;
    register int t29;
    register float u31;
    register int t66;
    register float u69;
    register float u79;
    register int t80;
    register float u81;

    (((struct o8_float *)(((int)stk + 0)))->v) = (*(float *)((a4 + 0x0)));
    t1 = *(int *)0xC472A3C;
    u2 = (((struct o8_float *)(((int)stk + 0)))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u2 * (float)t1);
    t4 = 0x4;
    t5 = a4;
    u6 = (0.0f + ((u2 * (float)t1)));
    for (;;) {
        u7 = *(float *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        u8 = *(float *)((a4 + t4));
        t9 = t4;
        t10 = (t4 + (((int)stk + 0) + 0x8));
        t4 = (t4 + 0x4);
        *(float *)((t10 + 0x0)) = (u8 - u7);
        t11 = *(int *)((0xC472A3C + t9));
        *(float *)((t10 + 0x0)) = ((u8 - u7) * (float)t11);
        u6 = (u6 + (((u8 - u7) * (float)t11)));
        if ((unsigned int)t4 >= (unsigned int)0x1C) {
            break;
        }
    }
    u13 = (((struct o8_float *)(((int)stk + 0)))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u13 / u6);
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x8) + 0x4);
    t14 = ((((int)stk + 0) + 0x8) + 0x4);
    t15 = (((int)stk + 0) + 0x8);
    u16 = ((u8 - u7) * (float)t11);
    u17 = (u13 / u6);
    for (;;) {
        if ((unsigned int)t14 >= (unsigned int)((((int)stk + 0) + 0x8) + 0x1C)) {
            break;
        }
        u17 = (*(float *)((t14 + 0x0)));
        u17 = (u17 / u6);
        *(float *)((t14 + 0x0)) = u17;
        u16 = (*(float *)((t14 + 0x0)));
        u17 = (*(float *)((t15 + 0x0)));
        t15 = (t15 + 0x4);
        u16 = (u16 + u17);
        *(float *)((t14 + 0x0)) = u16;
        t14 = (t14 + 0x4);
    }
    t21 = FUN_0c179ac0();
    t22 = ((~(((~t21) + 0x1) & 0x3FF)) + 0x1);
    if ((int)t21 >= 0) {
        t22 = (t21 & 0x3FF);
    }
    t24 = t22;
    t27 = 0x3FF;
    t28 = 0x0;
    t30 = t29;
    u32 = ((float)t22 + 1.0f);
    u33 = f4;
    for (;;) {
        if ((int)t28 >= (int)0x7) {
            break;
        }
        t24 = t28;
        t24 = (t24 << 2);
        u31 = 0.0f;
        u32 = (*(float *)(((((int)stk + 0) + 0x8) + t24)));
        if (u32 != u31) {
            if ((int)t28 > 0) {
                t25 = t28;
                t26 = t28;
                t25 = (t25 - 1);
                t27 = ((int)stk + 0);
                t26 = (t26 << 2);
                t25 = (t25 << 2);
                t27 = (t27 + 0x8);
                t25 = (t25 + t27);
                t26 = (t26 + t27);
                u32 = (*(float *)((t25 + 0x0)));
                u31 = (*(float *)((t26 + 0x0)));
                if (u31 != u32) {
                    t24 = t28;
                    t24 = (t24 << 2);
                    u33 = (*(float *)(((((int)stk + 0) + 0x8) + t24)));
                    t30 = t28;
                    if (!(u33 > (((float)t22 + 1.0f) / 1024.0f))) {
                        t28 = (t28 + 0x1);
                        continue;
                    }
                    break;
                }
                t28 = (t28 + 0x1);
                continue;
            }
            t24 = t28;
            t24 = (t24 << 2);
            u33 = (*(float *)(((((int)stk + 0) + 0x8) + t24)));
            t30 = t28;
            if (!(u33 > (((float)t22 + 1.0f) / 1024.0f))) {
                t28 = (t28 + 0x1);
                continue;
            }
            break;
        }
        t28 = (t28 + 0x1);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = (*(float *)0xC1C740C);
    *(unsigned int *)(((int)stk + 4)) = (t30 * 0x38);
    t41 = *(int *)((((t30 * 0x38) + 0xC47280C) + 0x4));
    u42 = (((struct o8_float *)(((int)stk + 0)))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u42 * (float)t41);
    t44 = 0x4;
    t45 = (((t30 * 0x38) + 0xC47280C) + 0x8);
    t46 = 0x0;
    u47 = (0.0f + ((u42 * (float)t41)));
    for (;;) {
        u48 = *(float *)((t44 + 0xC1C740C));
        t49 = (t44 + (((int)stk + 0) + 0x8));
        t44 = (t44 + 0x4);
        u50 = *(float *)((t46 + 0xC1C740C));
        *(float *)((t49 + 0x0)) = (u48 - u50);
        t51 = *(int *)((t45 + 0x4));
        t45 = (t45 + 0x8);
        u47 = (u47 + (((u48 - u50) * (float)t51)));
        *(float *)((t49 + 0x0)) = ((u48 - u50) * (float)t51);
        t46 = (t46 + 0x4);
        if ((unsigned int)t44 >= (unsigned int)0x1C) {
            break;
        }
    }
    u53 = (((struct o8_float *)(((int)stk + 0)))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u53 / u47);
    t55 = (*(int *)(((int)stk + 0)));
    t56 = (((int)stk + 0) + 0x8);
    u57 = ((u48 - u50) * (float)t51);
    u58 = (u53 / u47);
    for (;;) {
        if ((unsigned int)t55 >= (unsigned int)((((int)stk + 0) + 0x8) + 0x1C)) {
            break;
        }
        u58 = (*(float *)((t55 + 0x0)));
        u58 = (u58 / u47);
        *(float *)((t55 + 0x0)) = u58;
        u57 = (*(float *)((t55 + 0x0)));
        u58 = (*(float *)((t56 + 0x0)));
        t56 = (t56 + 0x4);
        u57 = (u57 + u58);
        *(float *)((t55 + 0x0)) = u57;
        t55 = (t55 + 0x4);
    }
    t62 = FUN_0c179ac0();
    t63 = ((~(((~t62) + 0x1) & 0x3FF)) + 0x1);
    if ((int)t62 >= 0) {
        t63 = (t62 & 0x3FF);
    }
    t65 = 0x0;
    t67 = t66;
    t68 = 0x1C;
    u70 = ((float)t63 + 1.0f);
    u71 = f4;
    for (;;) {
        if ((int)t65 >= (int)0x7) {
            break;
        }
        t67 = t65;
        t67 = (t67 << 2);
        t67 = (t67 + (((int)stk + 0) + 0x8));
        u70 = 0.0f;
        u69 = (*(float *)((t67 + 0x0)));
        if ((u69 != u70) && (((int)t65 <= 0) || (u79 = *(float *)((t67 + 0x0)), t80 = (u69 == u70), u69 = u79, u81 = *(float *)(((((t65 - 1) << 2) + (((int)stk + 0) + 0x8)) + 0x0)), u70 = u81, u69 != u70))) {
            u71 = (*(float *)((t67 + 0x0)));
            t68 = t65;
            if (!(u71 > (((float)t63 + 1.0f) / 1024.0f))) {
                t65 = (t65 + 0x1);
                continue;
            }
            break;
        }
        t65 = (t65 + 0x1);
    }
    t87 = *(int *)(((int)stk + 4));
    return (*(short *)(((((int)((int)(FUN_0c179ac0()) % (int)(*(int *)((((t87 + 0xC47280C) + ((t68 << 2) << 1)) + 0x4))))) << 1) + (*(int *)((((t87 + 0xC47280C) + ((t68 << 2) << 1)) + 0x0))))));
}

int FUN_0c0d09ec(int a4)
{

    register int R1;
    register int R2;
    int R3;
    register int R13;
    register float F1;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    v0_2 = a4;
    v0_4 = FUN_0c179ac0();
    v0_3 = (v0_4);
    v0_0 = (0x0);
    v0_1 = (v0_2);
    R3 = (0x3FF);
    if (((int)v0_4 < 0)) goto L_C0D0A06;
    v0_3 = ((v0_3 & R3));
    L_C0D0A10:;
    v0_2 = (v0_0);
    v0_4 = ((*(int *)0xC5410EC));
    v0_5 = (0xC540978);
    w0_0 = ((((float)v0_3 + 1.0f) / (*(float *)0xC0D0AEC)));
    FPUL_ = (v0_3);
    L_C0D0A5A:;
    if (!(((int)v0_2 < (int)v0_4))) goto L_C0D0A5E;
    v0_3 = (((v0_2 << 1) + (0x74C + v0_5)));
    if ((v0_2 == (v0_4 - 1))) goto L_C0D0A4E;
    FPUL_ = (v0_4);
    if ((!(((float)(v0_2 + 0x1) / (float)v0_4) > w0_0))) goto L_C0D0A58;
    goto L_C0D0A4E;
    L_C0D0A5E:;
    v0_2 = (0xC532498);
    v0_4 = (0x3938);
    if (((*(signed char *)(((((*(int *)((v0_1 + 0x0))) * 0x3938) + 0xC532498) + 0x3714))) == 0)) goto L_C0D0A94;
    if ((!(((((struct o160_float *)((((*(int *)((v0_1 + 0x0))) * v0_4) + v0_2)))->v)) > 0.0f))) goto L_C0D0A94;
    if (((*(signed char *)((0x3720 + (((*(int *)((v0_1 + 0x0))) * v0_4) + v0_2)))) != 1)) goto L_C0D0A9A;
    L_C0D0A94:;
    *(unsigned int *)((v0_1 + 0x0)) = 0xFFFFFFFF;
    R13 = (v0_0);
    L_C0D0A9A:;
    v0_2 = (FUN_0c043010()) == 0;
    if (v0_2) goto L_C0D0AB8;
    if (((*(signed char *)((0xC2738C8 + (R13 * 0x34)))) != 6)) goto L_C0D0AB8;
    *(unsigned int *)((v0_1 + 0x0)) = 0xFFFFFFFF;
    R13 = (v0_0);
    L_C0D0AB8:;
    return R13;
    L_C0D0A4E:;
    v0_2 = *(signed char *)((v0_3 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (*(signed char *)((v0_3 + 0x1)));
    R13 = (v0_2);
    goto L_C0D0A5E;
    L_C0D0A58:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C0D0A5A;
    L_C0D0A06:;
    v0_3 = (((~(((~v0_3) + 0x1) & R3)) + 0x1));
    goto L_C0D0A10;
}

int FUN_0c0d0ac6(float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t3 = FUN_0c179ac0();
    t4 = ((~(((~t3) + 0x1) & 0x3FF)) + 0x1);
    if ((int)t3 >= 0) {
        t4 = (t3 & 0x3FF);
    }
    u2 = *(float *)0xC0D0BB4;
    t3 = 0xC0D0BB4;
    t5 = 0x0;
    t6 = t0;
    t0 = t1;
    u3 = 1.0f;
    u4 = ((float)t4 + 1.0f);
    u5 = f4;
    for (;;) {
        if ((unsigned int)t5 >= (unsigned int)0x4) {
            break;
        }
        t3 = t5;
        t6 = 0xC1C74A8;
        t3 = (t3 << 2);
        u4 = (*(float *)((t6 + t3)));
        u3 = 0.0f;
        if ((u4 != u3) && (((int)t5 <= 0) || (u0 = *(float *)((t6 + t3)), t2 = (u4 == u3), u4 = u0, u1 = *(float *)(((((t5 - 1) << 2) + t6) + 0x0)), u3 = u1, u4 != u3))) {
            u5 = (*(float *)((t6 + t3)));
            t0 = (*(int *)((0xC1C7498 + t3)));
            if (!(u5 > (((float)t4 + 1.0f) / u2))) {
                t5 = (t5 + 0x1);
                continue;
            }
            break;
        }
        t5 = (t5 + 0x1);
    }
    return t0;
}

int FUN_0c0d0b60(int a4, int a5, int a6, int a7, int a8, int a9, float f4)
{
    int stk[6];
    register int t3;
    register int t4;
    register int t51;
    register int t31;
    register int t32;
    register int t42;
    register int t107;
    register int t109;
    register int t111;
    register int t91;
    register int t93;
    int t94;
    int t2;
    int t30;

    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a7;
    *(unsigned int *)(((int)stk + 12)) = 0xFFFFFFFF;
    if (a4 == 1) {
        t91 = 0x0;
        t93 = 0x0;
        t94 = (FUN_0c0d0ac6(f4));
    } else {
        t93 = 0x0;
        t42 = 0x0;
        if ((a6 != 0) && (t2 = *(signed char *)0xC540F9A, (int)t2 > 0)) {
            t3 = FUN_0c179ac0();
            t4 = ((~(((~t3) + 0x1) & 0xFF)) + 0x1);
            if ((int)t3 >= 0) {
                t4 = (t3 & 0xFF);
            }
            t93 = 0x0;
            t42 = 0x0;
            if ((float)(*(short *)0xC540FA2) > (((float)t4 / 256.0f) * 100.0f)) {
                t93 = (FUN_0c0d0238());
                t42 = 0xC1;
            }
        }
        t91 = 0x0;
        t94 = t42;
        if (t42 == 0) {
            t91 = 0x0;
            t51 = t42;
            if (((*(signed char *)0xC5429CB) != 0) && (t30 = (((struct o0_int *)0xC5410EC)->v), (int)t30 > 0)) {
                t31 = FUN_0c179ac0();
                t32 = ((~(((~t31) + 0x1) & 0x3FF)) + 0x1);
                if ((int)t31 >= 0) {
                    t32 = (t31 & 0x3FF);
                }
                t91 = 0x0;
                if ((*(float *)((0xC1C73FC + (((((((struct o4_int *)0xC5410EC)->v)) - 1) & 0x4) << 2)))) > (((float)t32 / 1024.0f) * 100.0f)) {
                    t42 = FUN_0c0d09ec(((int)stk + 12));
                    t91 = 0x0;
                    if (t42 != 0) {
                        t91 = 0x1;
                    }
                }
                t51 = t42;
            }
            t94 = t51;
            if (t51 == 0) {
                t94 = (FUN_0c0d0928(a9));
            }
        }
    }
    t107 = (*(int *)(((int)stk + 12)));
    *(int *)((int)stk + 8) = t107;
    *(int *)((int)stk + 4) = a8;
    t109 = (*(int *)(((int)stk + 16)));
    *(int *)((int)stk + 0) = t109;
    t111 = FUN_0c0c2928(t94, t93, (*(int *)(((int)stk + 20))), t91, t109, a8, t107);
    if ((t111 == 0) && (t94 == 0xC1)) {
        FUN_0c0d01f2(t93);
    }
    return t111;
}
