/* game/debug: functions 0C0D052C-0C0D0C9E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c043010(void);
extern int FUN_0c0d06e4();
int FUN_0c0d0928(int a4, float f4);

int FUN_0c0d0928(int a4, float f4)
{
    int stk[2];

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
    register int v0_8;
    register int v0_9;
    v0_1 = a4;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    *(unsigned int *)(((int)stk + 4)) = 0xC472A68;
    v0_2 = (0xC472A7C);
    v0_3 = (0xC2738B8);
    v0_4 = (0x1);
    v0_5 = (0x34);
    v0_1 = (0xC472A68);
    v0_6 = (0x5);
    v0_0 = (0x0);
    L_C0D094E:;
    v0_7 = ((int (*)(int, float))(FUN_0c0d06e4))((*(int *)(((int)stk + 0))), f4);
    v0_1 = (FUN_0c043010()) == 0;
    v0_7 = (v0_7);
    if (v0_1) goto L_C0D096A;
    if (((*(signed char *)((0x10 + ((v0_7 * v0_5) + v0_3)))) == 6)) goto L_C0D094E;
    L_C0D096A:;
    if (((int)(*(signed char *)((((v0_7 * v0_5) + v0_3) + 0x1))) < 0)) goto L_C0D094E;
    if (((int)v0_6 <= 0)) goto L_C0D0998;
    v0_9 = *(int *)(((int)stk + 4));
    v0_1 = (v0_9);
    v0_8 = (v0_4);
    v0_6 = ((v0_6 - 1));
    if (((unsigned int)v0_9 >= (unsigned int)v0_2)) goto L_C0D099A;
    L_C0D0984:;
    if (((*(short *)((v0_1 + 0x0))) != v0_7)) goto L_C0D098E;
    v0_8 = (v0_0);
    L_C0D099A:;
    if ((v0_8 != 1)) goto L_C0D094E;
    *(unsigned short *)((((*(int *)0xC472A7C) << 1) + 0xC472A68)) = v0_7;
    v0_2 = *(int *)0xC472A7C;
    *(unsigned int *)0xC472A7C = (v0_2 + 0x1);
    v0_3 = (v0_7);
    v0_1 = (0xC472A7C);
    if (((int)(v0_2 + 0x1) < (int)0xA)) goto L_C0D09BE;
    *(unsigned int *)((v0_1 + 0x0)) = v0_0;
    L_C0D09BE:;
    return v0_3;
    L_C0D098E:;
    v0_9 = (unsigned int)(v0_1 + 0x2) < (unsigned int)v0_2;
    v0_1 = ((v0_1 + 0x2));
    if (v0_9) goto L_C0D0984;
    goto L_C0D099A;
    L_C0D0998:;
    v0_8 = (v0_4);
    goto L_C0D099A;
}
