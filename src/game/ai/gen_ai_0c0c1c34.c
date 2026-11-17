/* game/ai: functions 0C0C1C34-0C0C1D44, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o26_short { char p[0x26]; short v; };
struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
int FUN_0c0bb70c(int);
int FUN_0c0bb73e(int, float);
int ai_clear_op_state(void);
int FUN_0c179ac0(void);
int FUN_0c0c1c34(int a4, float f4);

int FUN_0c0c1c34(int a4, float f4)
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
    v0_0 = a4;
    v0_1 = FUN_0c0bb73e(v0_0, f4);
    *(unsigned short *)(((int)stk + 0)) = (FUN_0c0bb70c((0x4000 + v0_1)));
    *(unsigned short *)(((int)stk + 4)) = (FUN_0c0bb70c((0xFFFFC000 + v0_1)));
    v0_7 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    v0_1 = ((unsigned char)v0_7);
    v0_2 = (0x0);
    v0_3 = (v0_0);
    v0_5 = (0xC472460);
    v0_0 = (0xC471ACC);
    v0_4 = (0xC472462);
    v0_6 = (0x264);
    if (((unsigned char)v0_7 == 0)) goto L_C0C1C8E;
    if ((v0_1 == 1)) goto L_C0C1CD0;
    if ((v0_1 == 2)) goto L_C0C1CCC;
    if ((v0_1 == 3)) goto L_C0C1CD0;
    if ((v0_1 == 4)) goto L_C0C1D18;
    L_C0C1D32:;
    return v0_1;
    L_C0C1D18:;
    *(unsigned short *)((v0_5 + 0x0)) = 0x1;
    ai_clear_op_state();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_4 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)0xC47245C);
    v0_1 = (0xC47245C);
    goto L_C0C1D32;
    L_C0C1CD0:;
    *(unsigned short *)((v0_5 + 0x0)) = v0_2;
    if ((((((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)((v0_4 + 0x0))) * (unsigned short)0x264) + v0_0)))->v)) == 0)) goto L_C0C1CF4;
    (((struct o42C_ushort *)(v0_3))->v) = (((((struct o42C_short *)(v0_3))->v)) | (*(short *)(((int)stk + 0))));
    v0_1 = (0x42C);
    L_C0C1D02:;
    v0_2 = *(signed char *)((v0_4 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C1D32;
    L_C0C1CF4:;
    v0_1 = *(short *)(((int)stk + 4));
    (((struct o42C_ushort *)(v0_3))->v) = (((((struct o42C_short *)(v0_3))->v)) | v0_1);
    v0_1 = (v0_1);
    goto L_C0C1D02;
    L_C0C1CCC:;
    *(unsigned short *)((v0_5 + 0x0)) = v0_2;
    goto L_C0C1D02;
    L_C0C1C8E:;
    *(unsigned short *)((v0_5 + 0x0)) = v0_2;
    v0_8 = *(signed char *)((v0_4 + 0x0));
    v0_7 = FUN_0c179ac0();
    v0_1 = (v0_7);
    v0_6 = (((((unsigned short)(unsigned char)v0_8 * (unsigned short)v0_6) + v0_0) + 0x26));
    if (((int)v0_7 < 0)) goto L_C0C1CAA;
    v0_1 = ((v0_1 & 0x1));
    L_C0C1CB4:;
    *(unsigned short *)((v0_6 + 0x0)) = v0_1;
    v0_1 = *(signed char *)((v0_4 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C1CD0;
    L_C0C1CAA:;
    v0_1 = (((~(((~v0_1) + 0x1) & 0x1)) + 0x1));
    goto L_C0C1CB4;
}
