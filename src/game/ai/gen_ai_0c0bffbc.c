/* game/ai: functions 0C0BFFBC-0C0C04D0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o48_int { char p[0x48]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c0bb70c(int);
int FUN_0c0bb73e(int, float);
int FUN_0c0bb922(int);
int ai_calc_gap_to_target(int);
int ai_clear_op_state(void);
int FUN_0c179ac0(void);
int FUN_0c0bffbc(int a4);
int FUN_0c0c00a6(int a4, float f4);
int FUN_0c0c01f0(int a4);
int FUN_0c0c0334(int a4, float f4);

int FUN_0c0bffbc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    float u0;
    register float u1;

    t1 = *(signed char *)0xC472462;
    t2 = *(signed char *)0xC542237;
    if (((signed char)t2 == 1) && ((t0 = *(signed char *)0xC54223C, t0 == 1) && (u0 = (((struct o0_float *)0xC0C00F8)->v), u1 = (((struct o2C_float *)(a4))->v), u0 > u1))) {
        (((struct o6C_float *)((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o4_float *)0xC0C00F8)->v));
        (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o8_float *)0xC0C00F8)->v));
        (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((float)(((int)((int)(FUN_0c179ac0()) % (int)0xA0)) - 80) * ((((struct o14_float *)0xC0C00F8)->v)));
    } else {
        t0 = *(int *)((((signed char)t2 << 2) + 0xC25E220));
        t2 = *(signed char *)0xC54223C;
        (((struct o6C_float *)((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC)))->v) = (*(float *)((((((t2 << 1) + t2) << 2) + t0) + 0x0)));
        (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o4_float *)(((((t2 << 1) + t2) << 2) + t0)))->v));
        (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o8_float *)(((((t2 << 1) + t2) << 2) + t0)))->v));
    }
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    ai_clear_op_state();
    t0 = *(signed char *)0xC472462;
    *(unsigned int *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    return (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC);
}

int FUN_0c0c00a6(int a4, float f4)
{
    int stk[3];

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
    register int v0_9;
    v0_3 = a4;
    v0_6 = FUN_0c0bb73e(v0_3, f4);
    v0_7 = *(signed char *)0xC472462;
    v0_4 = (0x48);
    v0_1 = (v0_3);
    v0_2 = (0xC472462);
    v0_5 = (v0_6);
    v0_0 = (0xC471ACC);
    v0_3 = ((((unsigned short)(unsigned char)v0_7 * (unsigned short)0x264) + 0xC471ACC));
    if (((int)(unsigned short)((v0_6 - ((((struct o48_short *)((((unsigned short)(unsigned char)v0_7 * (unsigned short)0x264) + 0xC471ACC)))->v))) + 0x1000) >= (int)0x2000)) goto L_C0C0124;
    v0_5 = ((*(int *)((v0_3 + v0_4))));
    L_C0C0126:;
    *(unsigned short *)(((int)stk + 0)) = (FUN_0c0bb70c(v0_5));
    *(unsigned short *)(((int)stk + 4)) = (FUN_0c0bb70c((0x8000 + v0_5)));
    v0_3 = *(int *)0xC47245C;
    *(unsigned int *)0xC47245C = (v0_3 + 0x2);
    *(unsigned short *)(((int)stk + 8)) = (*(short *)((((v0_3 + 0x2) - 2) + 0x0)));
    v0_9 = *(signed char *)((v0_0 + ((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264)));
    v0_4 = ((unsigned char)v0_9);
    v0_5 = (0xC47245C);
    v0_8 = (0x264);
    v0_3 = (0xC472460);
    v0_6 = (0x0);
    v0_7 = ((ai_calc_gap_to_target(v0_1)));
    if (((unsigned char)v0_9 == 0)) goto L_C0C0170;
    if ((v0_4 == 1)) goto L_C0C0182;
    if (!((v0_4 == 2))) goto L_C0C01E2;
    *(unsigned short *)((v0_3 + 0x0)) = 0x1;
    v0_1 = ai_clear_op_state();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)((v0_5 + 0x0)));
    v0_4 = (v0_1);
    goto L_C0C01E2;
    L_C0C01E2:;
    return v0_4;
    L_C0C0182:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_6;
    v0_5 = *(short *)(((int)stk + 8));
    v0_4 = (v0_5);
    v0_3 = (v0_5);
    v0_6 = ((short)v0_7);
    if (((int)v0_5 >= (int)((short)v0_7 - 20))) goto L_C0C019E;
    (((struct o42C_ushort *)(v0_1))->v) = (((((struct o42C_short *)(v0_1))->v)) | (*(short *)(((int)stk + 0))));
    v0_4 = (0x42C);
    goto L_C0C01E2;
    L_C0C019E:;
    if (((int)v0_3 <= (int)(v0_6 + 0x14))) goto L_C0C01B4;
    v0_0 = *(short *)(((int)stk + 4));
    (((struct o42C_ushort *)(v0_1))->v) = (((((struct o42C_short *)(v0_1))->v)) | v0_0);
    v0_4 = (v0_0);
    goto L_C0C01E2;
    L_C0C01B4:;
    v0_1 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C01E2;
    L_C0C0170:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_6;
    v0_4 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_4 * (unsigned short)v0_8) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_4 * (unsigned short)v0_8) + v0_0) + 0x0))) + 0x1);
    goto L_C0C0182;
    L_C0C0124:;
    *(unsigned int *)((v0_3 + v0_4)) = v0_5;
    goto L_C0C0126;
}

int FUN_0c0c01f0(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
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
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_2 = a4;
    v0_0 = *(int *)0xC47245C;
    *(unsigned int *)0xC47245C = (v0_0 + 0x2);
    *(unsigned short *)(((int)stk + 4)) = (*(short *)((((v0_0 + 0x2) - 2) + 0x0)));
    v0_6 = FUN_0c0bb922(v0_2);
    v0_7 = *(signed char *)0xC472462;
    v0_3 = (0x48);
    v0_5 = (0xC47245C);
    v0_1 = (0xC472462);
    v0_0 = (0xC471ACC);
    v0_4 = (v0_2);
    v0_8 = (v0_6);
    v0_2 = ((((unsigned short)(unsigned char)v0_7 * (unsigned short)0x264) + 0xC471ACC));
    if (((int)(unsigned short)((v0_6 - ((((struct o48_short *)((((unsigned short)(unsigned char)v0_7 * (unsigned short)0x264) + 0xC471ACC)))->v))) + 0x1000) >= (int)0x2000)) goto L_C0C026C;
    v0_8 = ((*(int *)((v0_2 + v0_3))));
    L_C0C026E:;
    *(unsigned short *)(((int)stk + 8)) = (FUN_0c0bb70c(v0_8));
    *(unsigned short *)(((int)stk + 0)) = (FUN_0c0bb70c((0x8000 + v0_8)));
    v0_9 = *(signed char *)((v0_0 + ((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264)));
    v0_3 = ((unsigned char)v0_9);
    v0_6 = (0x264);
    v0_2 = (0xC472460);
    v0_7 = (0x0);
    v0_8 = ((ai_calc_gap_to_target(v0_4)));
    if (((unsigned char)v0_9 == 0)) goto L_C0C02AA;
    if ((v0_3 == 1)) goto L_C0C02BC;
    if (!((v0_3 == 2))) goto L_C0C0324;
    *(unsigned short *)((v0_2 + 0x0)) = 0x1;
    v0_2 = ai_clear_op_state();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)((v0_5 + 0x0)));
    v0_3 = (v0_2);
    goto L_C0C0324;
    L_C0C0324:;
    return v0_3;
    L_C0C02BC:;
    *(unsigned short *)((v0_2 + 0x0)) = v0_7;
    v0_2 = (((short)v0_8 + 0xA));
    if (((int)((short)v0_8 - 10) <= 0)) goto L_C0C02D8;
    (((struct o42C_ushort *)(v0_4))->v) = (((((struct o42C_short *)(v0_4))->v)) | (*(short *)(((int)stk + 8))));
    L_C0C02D8:;
    if (((int)v0_2 >= 0)) goto L_C0C02E6;
    (((struct o42C_ushort *)(v0_4))->v) = (((((struct o42C_short *)(v0_4))->v)) | (*(short *)(((int)stk + 0))));
    L_C0C02E6:;
    v0_2 = *(short *)(((int)stk + 4));
    v0_3 = (0x2C);
    FPUL_ = (v0_2);
    if (((float)v0_2 > ((((struct o2C_float *)(v0_4))->v)))) goto L_C0C0324;
    v0_1 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C0324;
    L_C0C02AA:;
    *(unsigned short *)((v0_2 + 0x0)) = v0_7;
    v0_3 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_3 * (unsigned short)v0_6) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_3 * (unsigned short)v0_6) + v0_0) + 0x0))) + 0x1);
    goto L_C0C02BC;
    L_C0C026C:;
    *(unsigned int *)((v0_2 + v0_3)) = v0_8;
    goto L_C0C026E;
}

int FUN_0c0c0334(int a4, float f4)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t11;
    register int t34;
    register int t35;
    register int t36;
    register int t51;
    register int t61;
    register int t73;
    register int t74;
    register int t75;
    register int t6;
    register int t81;

    t0 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t0 + 0x2);
    t1 = *(short *)((((t0 + 0x2) - 2) + 0x0));
    t2 = FUN_0c0bb73e(a4, f4);
    t3 = *(signed char *)0xC472462;
    if ((int)(unsigned short)((t2 - ((((struct o48_short *)((((unsigned short)(unsigned char)t3 * (unsigned short)0x264) + 0xC471ACC)))->v))) + 0x1000) < (int)0x2000) {
        t6 = ((((struct o48_int *)((((unsigned short)(unsigned char)t3 * (unsigned short)0x264) + 0xC471ACC)))->v));
    } else {
        (((struct o48_uint *)((((unsigned short)(unsigned char)t3 * (unsigned short)0x264) + 0xC471ACC)))->v) = t2;
        t6 = t2;
    }
    *(unsigned short *)(((int)stk + 4)) = (FUN_0c0bb70c(t6));
    *(unsigned short *)(((int)stk + 0)) = (FUN_0c0bb70c((0x8000 + t6)));
    t11 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    if ((unsigned char)t11 != 0) {
        if ((unsigned char)t11 != 1) {
            t81 = (unsigned char)t11;
            if ((unsigned char)t11 != 2) {
            } else {
                (((struct o4_ushort *)0xC47245C)->v) = 0x1;
                t81 = ai_clear_op_state();
                *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
            }
        } else {
            (((struct o4_ushort *)0xC47245C)->v) = 0x0;
            if (((((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v)) != 0) {
                (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | (*(short *)(((int)stk + 4))));
            } else {
                (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | (*(short *)(((int)stk + 0))));
            }
            t34 = *(signed char *)0xC472462;
            t35 = *(short *)(((((unsigned short)(unsigned char)t34 * (unsigned short)0x264) + 0xC471ACC) + 0x18));
            *(unsigned short *)(((((unsigned short)(unsigned char)t34 * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = (t35 - 1);
            if ((unsigned short)(t35 - 1) == 0) {
                t36 = *(signed char *)0xC472462;
                *(unsigned char *)(((((unsigned short)(unsigned char)t36 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t36 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
            }
            t81 = (unsigned short)(t35 - 1);
        }
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t51 = t1;
        if ((short)t1 == 0) {
            t51 = 0x1;
        }
        if ((int)(short)t51 > 0) {
            *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = t51;
            (((struct o26_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0x1;
        } else {
            *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = (-(short)t51);
            (((struct o26_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0x0;
        }
        t61 = *(signed char *)0xC472462;
        *(unsigned char *)(((((unsigned short)(unsigned char)t61 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t61 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        if (((((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v)) != 0) {
            (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | (*(short *)(((int)stk + 4))));
        } else {
            (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | (*(short *)(((int)stk + 0))));
        }
        t73 = *(signed char *)0xC472462;
        t74 = *(short *)(((((unsigned short)(unsigned char)t73 * (unsigned short)0x264) + 0xC471ACC) + 0x18));
        *(unsigned short *)(((((unsigned short)(unsigned char)t73 * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = (t74 - 1);
        if ((unsigned short)(t74 - 1) == 0) {
            t75 = *(signed char *)0xC472462;
            *(unsigned char *)(((((unsigned short)(unsigned char)t75 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t75 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        }
        t81 = (unsigned short)(t74 - 1);
    }
    return t81;
}
