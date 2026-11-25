/* game/ai: functions 0C0C1D6C-0C0C2082, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o48_short { char p[0x48]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
int FUN_0c0bb70c(int);
int FUN_0c0bb73e(int, float);
int FUN_0c0bb922(int);
int ai_calc_angle_to_target(int);
int ai_clear_op_state(void);
int FUN_0c0c1d6c(int a4, float f4);
int FUN_0c0c1f52(int a4);
int FUN_0c0c2006(int a4, float f4);
struct o4_int { char p[0x4]; int v; };


int FUN_0c0c1d6c(int a4, float f4)
{
    int v0_2;
    int stk[4];

    int v0_0;
    int v0_5;
    int v0_1;
    int v0_3;
    int v0_4;
    int v0_8;
    int T_;
    int R3;
    int R1;
    int qe0;
    int v0_9;
    int v0_7;
    int v0_6;
    v0_5 = a4;
    v0_6 = FUN_0c0bb73e(v0_5, f4);
    v0_7 = *(signed char *)0xC472462;
    v0_2 = (0x48);
    v0_3 = (v0_5);
    v0_4 = (v0_6);
    v0_0 = (0xC471ACC);
    v0_1 = (0xC472462);
    v0_5 = ((((unsigned short)(unsigned char)v0_7 * (unsigned short)0x264) + 0xC471ACC));
    if (((int)(unsigned short)((v0_6 - ((((struct o48_short *)((((unsigned short)(unsigned char)v0_7 * (unsigned short)0x264) + 0xC471ACC)))->v))) + 0x1000) >= (int)0x2000)) goto L_C0C1DAA;
    v0_4 = ((*(int *)((v0_5 + v0_2))));
    L_C0C1DAC:;
    *(unsigned short *)(((int)stk + 8)) = (FUN_0c0bb70c(v0_4));
    *(unsigned short *)(((int)stk + 12)) = (FUN_0c0bb70c((0x8000 + v0_4)));
    v0_5 = *(int *)0xC47245C;
    *(unsigned int *)0xC47245C = (v0_5 + 0x2);
    v0_2 = (0x78);
    v0_4 = (0xC47245C);
    v0_5 = ((*(short *)((((v0_5 + 0x2) - 2) + 0x0))));
    v0_7 = (0x1);
    v0_6 = (0xC472460);
    if (!((((((struct o78_int *)((((unsigned short)(unsigned char)(*(signed char *)(v0_1)) * (unsigned short)0x264) + v0_0)))->v)) != 0))) goto L_C0C1F2C;
    v0_9 = *(signed char *)(v0_1);
    v0_8 = ((((unsigned short)(unsigned char)v0_9 * (unsigned short)0x264) + v0_0));
    if (((*(signed char *)(((*(int *)(((((unsigned short)(unsigned char)v0_9 * (unsigned short)0x264) + v0_0) + v0_2))) + 0x0))) != 0)) goto L_C0C1E0C;
    if (((*(signed char *)(((*(int *)((v0_8 + v0_2))) + 0x3714))) != 0)) goto L_C0C1E08;
    goto L_C0C1F2C;
    L_C0C1F2C:;
    *(unsigned short *)(v0_6) = v0_7;
    v0_2 = ai_clear_op_state();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)(v0_1)) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)(v0_4));
    v0_2 = (v0_2);
    L_C0C1F42:;
    return v0_2;
    L_C0C1E08:;
    L_C0C1E2C:;
    v0_8 = *(signed char *)(v0_8);
    v0_2 = ((unsigned char)v0_8);
    v0_9 = (0x0);
    if (((unsigned char)v0_8 == 0)) goto L_C0C1E42;
    if ((v0_2 == 1)) goto L_C0C1ECC;
    if ((v0_2 == 2)) goto L_C0C1F2C;
    goto L_C0C1F42;
    L_C0C1ECC:;
    *(unsigned short *)(v0_6) = v0_9;
    if ((((((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)(v0_1)) * (unsigned short)0x264) + v0_0)))->v)) == 0)) goto L_C0C1EF4;
    (((struct o42C_ushort *)(v0_3))->v) = (((((struct o42C_short *)(v0_3))->v)) | (*(short *)(((int)stk + 8))));
    L_C0C1F02:;
    v0_2 = *(signed char *)(v0_1);
    v0_3 = *(short *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x18));
    *(unsigned short *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x18)) = (v0_3 - 1);
    v0_2 = ((unsigned short)(v0_3 - 1));
    v0_4 = (0x264);
    if (((unsigned short)(v0_3 - 1) != 0)) goto L_C0C1F42;
    v0_1 = *(signed char *)(v0_1);
    qe0 = (((((unsigned short)(unsigned char)v0_1 * (unsigned short)v0_4) + v0_0) + 0x0));
    *(unsigned char *)qe0 = ((*(signed char *)qe0) + 0x1);
    goto L_C0C1F42;
    L_C0C1EF4:;
    (((struct o42C_ushort *)(v0_3))->v) = (((((struct o42C_short *)(v0_3))->v)) | (*(short *)(((int)stk + 12))));
    goto L_C0C1F02;
    L_C0C1E42:;
    *(unsigned short *)(v0_6) = v0_9;
    if (((short)v0_5 != 0)) goto L_C0C1E4C;
    v0_5 = (v0_7);
    L_C0C1E4C:;
    v0_8 = ((short)v0_5);
    if (((int)(short)v0_5 <= 0)) goto L_C0C1E9C;
    *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)(v0_1)) * (unsigned short)0x264) + v0_0) + 0x18)) = v0_5;
    (((struct o26_ushort *)((((unsigned short)(unsigned char)(*(signed char *)(v0_1)) * (unsigned short)0x264) + v0_0)))->v) = v0_7;
    L_C0C1EBA:;
    v0_2 = *(signed char *)(v0_1);
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C1ECC;
    L_C0C1E9C:;
    *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)(v0_1)) * (unsigned short)0x264) + v0_0) + 0x18)) = (-v0_8);
    (((struct o26_ushort *)((((unsigned short)(unsigned char)(*(signed char *)(v0_1)) * (unsigned short)0x264) + v0_0)))->v) = v0_9;
    goto L_C0C1EBA;
    L_C0C1E0C:;
    v0_2 = (((struct o78_int *)(v0_8))->v);
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    if ((((((struct o4_int *)(v0_2))->v)) != 0)) goto L_C0C1E1E;
    goto L_C0C1F2C;
    L_C0C1E1E:;
    if (((*(signed char *)(((*(int *)(((int)stk + 4))) + 0xA8))) != 0)) goto L_C0C1E2C;
    goto L_C0C1F2C;
    L_C0C1DAA:;
    *(unsigned int *)((v0_5 + v0_2)) = v0_4;
    goto L_C0C1DAC;
}

int FUN_0c0c1f52(int a4)
{

    register int R1;
    register int R2;
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
    v0_5 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    v0_1 = ((unsigned char)v0_5);
    v0_2 = (0xC472462);
    v0_0 = (0xC471ACC);
    v0_4 = (0x264);
    v0_6 = (0xC472460);
    v0_7 = (0x0);
    if (((unsigned char)v0_5 == 0)) goto L_C0C1F7E;
    if ((v0_1 == 1)) goto L_C0C1F92;
    if ((v0_1 == 2)) goto L_C0C1FE4;
    L_C0C1FFE:;
    return v0_1;
    L_C0C1FE4:;
    *(unsigned short *)((v0_6 + 0x0)) = 0x1;
    ai_clear_op_state();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)0xC47245C);
    v0_1 = (0xC47245C);
    goto L_C0C1FFE;
    L_C0C1F92:;
    *(unsigned short *)((v0_6 + 0x0)) = v0_7;
    v0_1 = *(signed char *)((v0_2 + 0x0));
    v0_5 = *(short *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)v0_4) + v0_0) + 0x18));
    *(unsigned short *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)v0_4) + v0_0) + 0x18)) = (v0_5 - 1);
    v0_1 = ((unsigned short)(v0_5 - 1));
    if (((unsigned short)(v0_5 - 1) == 0)) goto L_C0C1FB6;
    v0_3 = ai_calc_angle_to_target(v0_3);
    v0_1 = (v0_3);
    if (((int)v0_3 < (int)0x2000)) goto L_C0C1FFE;
    L_C0C1FB6:;
    v0_2 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C1FFE;
    L_C0C1F7E:;
    *(unsigned short *)((v0_6 + 0x0)) = v0_7;
    *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)v0_4) + v0_0) + 0x18)) = 0xA;
    v0_1 = (0xA);
    goto L_C0C1FB6;
}

int FUN_0c0c2006(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c0bb73e(a4, f4);
    t1 = FUN_0c0bb922(a4);
    if ((int)(t0 - t1) > 0) {
        if ((int)(t0 - t1) <= (int)0x4000) {
            t2 = (FUN_0c0bb70c((0x5555 + t1)));
        } else {
            t2 = (FUN_0c0bb70c(t0));
        }
        t3 = t2;
    } else {
        t2 = (0xFFFFAAAB + t1);
        if ((int)(t1 - t0) > (int)0x4000) {
            t2 = t0;
        }
        t3 = (FUN_0c0bb70c(t2));
    }
    (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t3);
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    ai_clear_op_state();
    t0 = *(signed char *)0xC472462;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)t0 * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    return ((unsigned short)(unsigned char)t0 * (unsigned short)0x264);
}
