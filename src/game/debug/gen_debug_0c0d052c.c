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
int nlRand(void);
int nlPuts(int);
int nlLocate(int, int);
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

    nlLocate(0x1E, 0x13);
    nlPuts(0xC1C747C);
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t2 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 16)) = (((t2 << 1) + t2) + 0x1E);
        *(unsigned int *)(((int)stk + 12)) = (0xC47280C + (t2 * 0x38));
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            nlLocate((*(int *)(((int)stk + 16))), (t5 + 0x14));
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
        nlLocate((((t2 << 1) + t2) + 0x1E), (t5 + 0x15));
        *(int *)((int)stk + 4) = (t4);
        *(int *)((int)stk + 0) = 0xC1C7494;
        dbg_printf(0xC1C7494);
        t2 = (t2 + 0x1);
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + t4);
        if ((int)t2 >= (int)0x8) {
            break;
        }
    }
    nlLocate((((t2 << 1) + t2) + 0x1E), (t5 + 0x15));
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
    v0_4 = nlRand();
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

    t3 = nlRand();
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
            t3 = nlRand();
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
                t31 = nlRand();
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
