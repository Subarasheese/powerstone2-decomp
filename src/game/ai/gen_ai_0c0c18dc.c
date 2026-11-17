/* game/ai: functions 0C0C18DC-0C0C19E4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o48_short { char p[0x48]; short v; };
int FUN_0c0bb70c(int);
int FUN_0c0bb922(int);
int FUN_0c0bb9f2(int);
int ai_clear_op_state(void);
int FUN_0c0c18dc(int a4);

int FUN_0c0c18dc(int a4)
{
    int stk[3];

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
    v0_3 = a4;
    v0_6 = FUN_0c0bb922(v0_3);
    v0_7 = *(signed char *)0xC472462;
    v0_4 = (0x48);
    v0_1 = (v0_3);
    v0_2 = (0xC472462);
    v0_5 = (v0_6);
    v0_0 = (0xC471ACC);
    v0_3 = ((((unsigned short)(unsigned char)v0_7 * (unsigned short)0x264) + 0xC471ACC));
    if (((int)(unsigned short)((v0_6 - ((((struct o48_short *)((((unsigned short)(unsigned char)v0_7 * (unsigned short)0x264) + 0xC471ACC)))->v))) + 0x1000) >= (int)0x2000)) goto L_C0C1918;
    v0_5 = ((*(int *)((v0_3 + v0_4))));
    L_C0C191A:;
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
    v0_7 = ((FUN_0c0bb9f2(v0_1)));
    if (((unsigned char)v0_9 == 0)) goto L_C0C1964;
    if ((v0_4 == 1)) goto L_C0C1976;
    if (!((v0_4 == 2))) goto L_C0C19D6;
    *(unsigned short *)((v0_3 + 0x0)) = 0x1;
    v0_1 = ai_clear_op_state();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)((v0_5 + 0x0)));
    v0_4 = (v0_1);
    goto L_C0C19D6;
    L_C0C19D6:;
    return v0_4;
    L_C0C1976:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_6;
    v0_5 = *(short *)(((int)stk + 8));
    v0_4 = (v0_5);
    v0_3 = (v0_5);
    v0_6 = ((short)v0_7);
    if (((int)v0_5 >= (int)((short)v0_7 - 20))) goto L_C0C1992;
    (((struct o42C_ushort *)(v0_1))->v) = (((((struct o42C_short *)(v0_1))->v)) | (*(short *)(((int)stk + 0))));
    v0_4 = (0x42C);
    goto L_C0C19D6;
    L_C0C1992:;
    if (((int)v0_3 <= (int)(v0_6 + 0x14))) goto L_C0C19A8;
    v0_0 = *(short *)(((int)stk + 4));
    (((struct o42C_ushort *)(v0_1))->v) = (((((struct o42C_short *)(v0_1))->v)) | v0_0);
    v0_4 = (v0_0);
    goto L_C0C19D6;
    L_C0C19A8:;
    v0_1 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C19D6;
    L_C0C1964:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_6;
    v0_4 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_4 * (unsigned short)v0_8) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_4 * (unsigned short)v0_8) + v0_0) + 0x0))) + 0x1);
    goto L_C0C1976;
    L_C0C1918:;
    *(unsigned int *)((v0_3 + v0_4)) = v0_5;
    goto L_C0C191A;
}
