/* game/unsorted: functions 0C15A260-0C15A32A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c15a104(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);

int FUN_0c15a260(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[5];

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
    v0_0 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_6 = a7;
    *(unsigned int *)(((int)stk + 16)) = v0_6;
    v0_6 = *(signed char *)(((((short)(signed char)v0_0 * (short)0x3938) + 0xC532498) + 0x371A));
    v0_2 = ((signed char)v0_3);
    v0_5 = ((v0_6 * 0x2D0));
    v0_1 = ((((short)(signed char)v0_0 * (short)0x3938) + 0xC532498));
    v0_7 = (v0_6);
    v0_6 = (((((((signed char)v0_4 << 2) << 1) + (signed char)v0_4) << 2) << 2));
    if (((signed char)v0_3 == 0)) goto L_C15A2AA;
    if ((v0_2 == 1)) goto L_C15A2B8;
    if ((v0_2 == 2)) goto L_C15A2C8;
    if ((v0_2 == 3)) goto L_C15A2D2;
    if ((v0_2 == 4)) goto L_C15A2DC;
    L_C15A31E:;
    return v0_2;
    L_C15A2DC:;
    v0_2 = ((((0x3168 + v0_1) + v0_5) + v0_6));
    L_C15A2E4:;
    *(int *)((int)stk + 12) = a11;
    *(int *)((int)stk + 8) = a10;
    *(int *)((int)stk + 4) = ((signed char)(a9 >> 0));
    *(int *)((int)stk + 0) = ((short)(a8 >> 0));
    v0_3 = FUN_0c15a104(v0_0, (v0_2 + 0x28), (*(int *)(((int)stk + 16))), 0xC203694, ((short)(a8 >> 0)), ((signed char)(a9 >> 0)), a10, a11);
    v0_2 = (v0_3);
    v0_0 = (v0_3);
    if ((v0_3 == 0)) goto L_C15A31E;
    (((struct o20_ushort *)(v0_0))->v) = (unsigned char)(*(signed char *)((((((struct o118_int *)(v0_1))->v)) + 0x82)));
    *(unsigned int *)((v0_0 + 0x4)) = 0xC15A350;
    v0_2 = (0x20);
    goto L_C15A31E;
    L_C15A2D2:;
    v0_2 = ((((0x2BC8 + v0_1) + v0_5) + v0_6));
    goto L_C15A2E4;
    L_C15A2C8:;
    v0_2 = ((((0x2628 + v0_1) + v0_5) + v0_6));
    goto L_C15A2E4;
    L_C15A2B8:;
    v0_2 = ((((v0_7 * 0x10E0) + (0x468 + v0_1)) + v0_6));
    goto L_C15A2E4;
    L_C15A2AA:;
    v0_2 = ((*(int *)(((((signed char)v0_4 << 2) + (0xC4 + v0_1)) + 0x0))));
    goto L_C15A2E4;
}
