/* game/ai: functions 0C0C0F48-0C0C175A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int FUN_0c0bb70c(int);
int FUN_0c0bb73e(int);
int ai_calc_gap_to_target(int);
int ai_clear_op_state(void);
int FUN_0c179ac0(void);
int FUN_0c0c0f48(int a4, float f4);
int FUN_0c0c10c4(int a4, float f4);
int FUN_0c0c1250(int a4, float f4);
int FUN_0c0c14a6(int a4, float f4);

int FUN_0c0c0f48(int a4, float f4)
{
    int stk[2];

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
    register int v0_8;
    register int v0_9;
    v0_5 = a4;
    v0_0 = *(int *)0xC47245C;
    *(unsigned int *)0xC47245C = (v0_0 + 0x2);
    *(unsigned short *)(((int)stk + 0)) = (*(short *)((((v0_0 + 0x2) - 2) + 0x0)));
    *(unsigned short *)(((int)stk + 4)) = (ai_calc_gap_to_target(v0_5));
    v0_7 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    v0_3 = ((unsigned char)v0_7);
    v0_4 = (0xC472460);
    v0_2 = (v0_5);
    v0_1 = (0xC472462);
    v0_0 = (0xC471ACC);
    v0_6 = (0xC47245C);
    v0_5 = (0x264);
    if (((unsigned char)v0_7 == 0)) goto L_C0C0F98;
    if ((v0_3 == 1)) goto L_C0C0FD4;
    if ((v0_3 != 2)) goto L_C0C0F94;
    *(unsigned short *)((v0_4 + 0x0)) = 0x1;
    v0_2 = ai_clear_op_state();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)((v0_6 + 0x0)));
    v0_3 = (v0_2);
    L_C0C10B2:;
    return v0_3;
    L_C0C0F94:;
    goto L_C0C10B2;
    L_C0C0FD4:;
    *(unsigned short *)((v0_4 + 0x0)) = 0x0;
    v0_3 = ((((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0)))->v)) == 0;
    v0_6 = ((FUN_0c0bb73e(v0_2)));
    if (v0_3) goto L_C0C100A;
    FUN_0c0bb70c((0x4000 + v0_6));
    v0_4 = ((FUN_0c0bb70c((0x5555 + v0_6))));
    v0_5 = (0x2AAA);
    L_C0C101E:;
    v0_7 = *(short *)(((int)stk + 4));
    v0_8 = *(short *)(((int)stk + 0));
    v0_9 = (FUN_0c0bb70c((v0_5 + v0_6)));
    v0_3 = (v0_7);
    v0_5 = (v0_8);
    v0_6 = (v0_7);
    v0_9 = v0_9;
    if (((int)v0_8 >= (int)(v0_7 - 10))) goto L_C0C103C;
    v0_3 = (0x42C);
    v0_5 = ((((((struct o42C_short *)(v0_2))->v)) | v0_9));
    L_C0C1048:;
    *(unsigned short *)((v0_2 + v0_3)) = v0_5;
    goto L_C0C10B2;
    L_C0C103C:;
    if (((int)v0_5 <= (int)(v0_6 + 0xA))) goto L_C0C1084;
    v0_3 = (0x42C);
    v0_5 = ((((((struct o42C_short *)(v0_2))->v)) | v0_4));
    goto L_C0C1048;
    L_C0C1084:;
    v0_1 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C10B2;
    L_C0C100A:;
    FUN_0c0bb70c((0xC000 + v0_6));
    v0_4 = ((FUN_0c0bb70c((0xAAAA + v0_6))));
    v0_5 = (0xD555);
    goto L_C0C101E;
    L_C0C0F98:;
    *(unsigned short *)((v0_4 + 0x0)) = 0x0;
    v0_7 = *(signed char *)((v0_1 + 0x0));
    v0_6 = FUN_0c179ac0();
    v0_3 = (v0_6);
    v0_5 = (((((unsigned short)(unsigned char)v0_7 * (unsigned short)v0_5) + v0_0) + 0x26));
    if (((int)v0_6 < 0)) goto L_C0C0FB6;
    v0_3 = ((v0_3 & 0x1));
    L_C0C0FC0:;
    *(unsigned short *)((v0_5 + 0x0)) = v0_3;
    v0_3 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_3 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_3 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C0FD4;
    L_C0C0FB6:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x1)) + 0x1));
    goto L_C0C0FC0;
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
    *(unsigned short *)(((int)stk + 4)) = (ai_calc_gap_to_target(v0_1));
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
    v0_1 = ai_clear_op_state();
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

int FUN_0c0c1250(int a4, float f4)
{
    int stk[2];

    register int R1;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_8 = a4;
    v0_0 = *(int *)0xC47245C;
    *(unsigned int *)0xC47245C = (v0_0 + 0x2);
    *(unsigned short *)(((int)stk + 4)) = (*(short *)((((v0_0 + 0x2) - 2) + 0x0)));
    v0_6 = *(short *)(((int)stk + 4));
    v0_9 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    v0_2 = ((unsigned char)v0_9);
    v0_5 = ((short)(ai_calc_gap_to_target(v0_8)));
    v0_4 = (0xC47245C);
    v0_1 = (0xC472462);
    v0_0 = (0xC471ACC);
    v0_3 = (v0_8);
    v0_7 = (0x264);
    v0_8 = (0xC472460);
    v0_10 = (0x0);
    v0_6 = (v0_6);
    if (((unsigned char)v0_9 == 0)) goto L_C0C12BC;
    if ((v0_2 == 1)) goto L_C0C1344;
    if ((v0_2 == 2)) goto L_C0C1364;
    if ((v0_2 != 3)) goto L_C0C12A8;
    *(unsigned short *)((v0_8 + 0x0)) = v0_10;
    L_C0C1464:;
    v0_1 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    L_C0C1492:;
    return v0_2;
    L_C0C12A8:;
    if ((v0_2 != 4)) goto L_C0C12B0;
    *(unsigned short *)((v0_8 + 0x0)) = v0_10;
    v0_2 = ((((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0)))->v)) == 0;
    v0_4 = ((FUN_0c0bb73e(v0_3)));
    if (v0_2) goto L_C0C1404;
    v0_7 = FUN_0c0bb70c((0x6000 + v0_4));
    v0_2 = ((FUN_0c0bb70c((0x2000 + v0_4))));
    v0_7 = (v0_7);
    L_C0C1416:;
    v0_8 = (v0_2);
    if (((int)v0_6 >= (int)(v0_5 - 10))) goto L_C0C1444;
    v0_2 = (0x42C);
    v0_0 = ((((((struct o42C_short *)(v0_3))->v)) | v0_8));
    L_C0C1450:;
    *(unsigned short *)((v0_3 + v0_2)) = v0_0;
    goto L_C0C1492;
    L_C0C1444:;
    if (((int)v0_6 <= (int)(v0_5 + 0xA))) goto L_C0C1454;
    v0_2 = (0x42C);
    v0_0 = ((((((struct o42C_short *)(v0_3))->v)) | v0_7));
    goto L_C0C1450;
    L_C0C1454:;
    (((struct o42C_ushort *)(v0_3))->v) = (((((struct o42C_short *)(v0_3))->v)) | (FUN_0c0bb70c(v0_4)));
    v0_2 = (0x42C);
    goto L_C0C1464;
    L_C0C1404:;
    v0_7 = FUN_0c0bb70c((0xA000 + v0_4));
    v0_2 = ((FUN_0c0bb70c((0xE000 + v0_4))));
    v0_7 = (v0_7);
    goto L_C0C1416;
    L_C0C12B0:;
    if ((v0_2 != 5)) goto L_C0C12B8;
    *(unsigned short *)((v0_8 + 0x0)) = 0x1;
    v0_2 = ai_clear_op_state();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)((v0_4 + 0x0)));
    v0_2 = (v0_2);
    goto L_C0C1492;
    L_C0C12B8:;
    goto L_C0C1492;
    L_C0C1364:;
    *(unsigned short *)((v0_8 + 0x0)) = v0_10;
    v0_2 = ((((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0)))->v)) == 0;
    v0_4 = ((FUN_0c0bb73e(v0_3)));
    if (v0_2) goto L_C0C1398;
    v0_7 = FUN_0c0bb70c((0x6000 + v0_4));
    v0_2 = ((FUN_0c0bb70c((0x2000 + v0_4))));
    v0_7 = (v0_7);
    L_C0C13AA:;
    v0_8 = (v0_2);
    if (((int)v0_6 >= (int)(v0_5 - 10))) goto L_C0C13BC;
    (((struct o42C_ushort *)(v0_3))->v) = (((((struct o42C_short *)(v0_3))->v)) | v0_8);
    v0_2 = (0x42C);
    L_C0C13BC:;
    if (((int)v0_6 <= (int)(v0_5 + 0xA))) goto L_C0C1464;
    (((struct o42C_ushort *)(v0_3))->v) = (((((struct o42C_short *)(v0_3))->v)) | v0_7);
    v0_2 = (0x42C);
    goto L_C0C1464;
    L_C0C1398:;
    v0_7 = FUN_0c0bb70c((0xA000 + v0_4));
    v0_2 = ((FUN_0c0bb70c((0xE000 + v0_4))));
    v0_7 = (v0_7);
    goto L_C0C13AA;
    L_C0C1344:;
    *(unsigned short *)((v0_8 + 0x0)) = v0_10;
    v0_2 = *(signed char *)((v0_1 + 0x0));
    v0_3 = *(short *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)v0_7) + v0_0) + 0x18));
    *(unsigned short *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)v0_7) + v0_0) + 0x18)) = (v0_3 - 1);
    v0_2 = ((unsigned short)(v0_3 - 1));
    if (((unsigned short)(v0_3 - 1) == 0)) goto L_C0C1360;
    goto L_C0C1492;
    L_C0C1360:;
    goto L_C0C1464;
    L_C0C12BC:;
    *(unsigned short *)((v0_8 + 0x0)) = v0_10;
    v0_2 = *(signed char *)((v0_1 + 0x0));
    *(int *)((int)stk + 0) = (0x26 + (((unsigned short)(unsigned char)v0_2 * (unsigned short)v0_7) + v0_0));
    v0_4 = FUN_0c179ac0();
    *(unsigned int *)(((int)stk + 0)) = (0x26 + (((unsigned short)(unsigned char)v0_2 * (unsigned short)v0_7) + v0_0));
    v0_2 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C0C1308;
    v0_2 = ((v0_2 & 0x1));
    L_C0C1312:;
    *(unsigned short *)(((*(int *)((int)stk + 0)) + 0x0)) = v0_2;
    *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x18)) = 0x1;
    v0_3 = *(signed char *)((v0_3 + 0x3715));
    v0_2 = (v0_3);
    v0_7 = (0x264);
    if ((v0_3 == 21)) goto L_C0C1332;
    goto L_C0C1464;
    L_C0C1332:;
    *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)v0_7) + v0_0) + 0x0)) = 0x4;
    goto L_C0C1492;
    L_C0C1308:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x1)) + 0x1));
    goto L_C0C1312;
}

int FUN_0c0c14a6(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t0 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t0 + 0x2);
    t1 = *(short *)((((t0 + 0x2) - 2) + 0x0));
    t0 = ai_calc_gap_to_target(a4);
    t2 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    if ((unsigned char)t2 != 0) {
        if ((unsigned char)t2 != 1) {
            if ((unsigned char)t2 != 2) {
                if ((unsigned char)t2 == 3) {
                    (((struct o4_ushort *)0xC47245C)->v) = 0x0;
                    t3 = *(signed char *)0xC472462;
                    *(unsigned char *)(((((unsigned short)(unsigned char)t3 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t3 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
                    t3 = (unsigned char)t2;
                } else {
                    if ((unsigned char)t2 == 4) {
                        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
                        t4 = FUN_0c0bb73e(a4);
                        (((struct o26_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((int)((int)(short)((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x50)) / (int)0x14));
                        t5 = (((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v);
                        if (t5 != 0) {
                            if (t5 != 1) {
                                if (t5 != 2) {
                                    if (t5 != 3) {
                                    } else {
                                        t5 = FUN_0c0bb70c((0xFFFFE000 + t4));
                                        t6 = (FUN_0c0bb70c((0x6000 + t4)));
                                        t7 = t5;
                                    }
                                    t5 = t6;
                                    t6 = t7;
                                } else {
                                    t7 = FUN_0c0bb70c(t4);
                                    t5 = (FUN_0c0bb70c((0x8000 + t4)));
                                    t6 = t7;
                                }
                                t7 = t5;
                                t5 = t6;
                            } else {
                                t6 = FUN_0c0bb70c((0x2000 + t4));
                                t7 = (FUN_0c0bb70c((0xA000 + t4)));
                                t5 = t6;
                            }
                            t6 = t7;
                            t7 = t5;
                        } else {
                            t5 = FUN_0c0bb70c(t4);
                            t6 = (FUN_0c0bb70c((0x8000 + t4)));
                            t7 = t5;
                        }
                        if ((int)(short)t1 < (int)((short)t0 - 10)) {
                            (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t7);
                        } else {
                            if ((int)(short)t1 > (int)((short)t0 + 0xA)) {
                                (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t6);
                            } else {
                                (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | (FUN_0c0bb70c(t4)));
                                t4 = *(signed char *)0xC472462;
                                *(unsigned char *)(((((unsigned short)(unsigned char)t4 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t4 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
                            }
                        }
                        t4 = 0x42C;
                    } else {
                        t5 = (unsigned char)t2;
                        if ((unsigned char)t2 == 5) {
                            (((struct o4_ushort *)0xC47245C)->v) = 0x1;
                            t2 = ai_clear_op_state();
                            *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
                            t5 = t2;
                        }
                        t4 = t5;
                    }
                    t3 = t4;
                }
                t2 = t3;
            } else {
                (((struct o4_ushort *)0xC47245C)->v) = 0x0;
                t3 = FUN_0c0bb73e(a4);
                (((struct o26_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((int)((int)(short)((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x50)) / (int)0x14));
                t4 = (((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v);
                if (t4 != 0) {
                    if (t4 != 1) {
                        if (t4 != 2) {
                            t5 = t4;
                            if (t4 != 3) {
                            } else {
                                t4 = FUN_0c0bb70c((0xFFFFE000 + t3));
                                t6 = FUN_0c0bb70c((0x6000 + t3));
                                t5 = t6;
                                t7 = t6;
                                t6 = t4;
                            }
                            t4 = t5;
                            t5 = t7;
                            t7 = t6;
                        } else {
                            t6 = FUN_0c0bb70c(t3);
                            t8 = FUN_0c0bb70c((0x8000 + t3));
                            t4 = t8;
                            t5 = t8;
                            t7 = t6;
                        }
                        t6 = t4;
                        t4 = t5;
                        t5 = t7;
                    } else {
                        t7 = FUN_0c0bb70c((0x2000 + t3));
                        t8 = FUN_0c0bb70c((0xA000 + t3));
                        t6 = t8;
                        t4 = t8;
                        t5 = t7;
                    }
                    t7 = t6;
                    t6 = t4;
                    t4 = t5;
                } else {
                    t5 = FUN_0c0bb70c(t3);
                    t8 = FUN_0c0bb70c((0x8000 + t3));
                    t7 = t8;
                    t6 = t8;
                    t4 = t5;
                }
                t3 = t7;
                if ((int)(short)t1 < (int)((short)t0 - 10)) {
                    (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t4);
                    t3 = 0x42C;
                }
                t4 = t3;
                if ((int)(short)t1 > (int)((short)t0 + 0xA)) {
                    (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t6);
                    t4 = 0x42C;
                }
                t0 = *(signed char *)0xC472462;
                *(unsigned char *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
                t2 = t4;
            }
            t0 = t2;
        } else {
            (((struct o4_ushort *)0xC47245C)->v) = 0x0;
            t1 = *(signed char *)0xC472462;
            t2 = *(short *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x18));
            *(unsigned short *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = (t2 - 1);
            if ((unsigned short)(t2 - 1) != 0) {
            } else {
                t1 = *(signed char *)0xC472462;
                *(unsigned char *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
            }
            t0 = (unsigned short)(t2 - 1);
        }
        t1 = t0;
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = 0x1;
        t0 = *(signed char *)((a4 + 0x3715));
        if (t0 != 21) {
            t2 = *(signed char *)0xC472462;
            *(unsigned char *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        } else {
            *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = 0x4;
        }
        t1 = t0;
    }
    return t1;
}
