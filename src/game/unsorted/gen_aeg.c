/* Straight-line functions with calls and guards (batch gen_aeg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c158f5a(int, int, int, int);
int FUN_0c15a350(int a4, int a5, int a6, int a7);

int FUN_0c15a350(int a4, int a5, int a6, int a7)
{

    register int R0;
    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_4 = *(signed char *)(((((short)v0_1 * (short)0x3938) + 0xC532498) + 0x15));
    v0_1 = ((((short)v0_1 * (short)0x3938) + 0xC532498));
    v0_2 = (0xC532498);
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C15A36E;
    if ((v0_3 != 2)) goto L_C15A3B4;
    L_C15A36E:;
    v0_4 = (0x3938);
    if (((*(signed char *)((0x15 + (((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_2)))) == 2)) goto L_C15A3BA;
    v0_4 = *(signed char *)(((((short)(*(signed char *)((v0_0 + 0x1))) * (short)v0_4) + v0_2) + 0x3715));
    v0_3 = (v0_4);
    if ((v0_4 == 7)) goto L_C15A3BA;
    if ((v0_3 == 26)) goto L_C15A3BA;
    if ((v0_3 == 12)) goto L_C15A3BA;
    if ((v0_3 == 19)) goto L_C15A3BA;
    if ((v0_3 == 20)) goto L_C15A3BA;
    L_C15A3B4:;
    return FUN_0c03f346(v0_0, v0_2, v0_3, a7);
    L_C15A3BA:;
    if ((((((struct o20_short *)(v0_0))->v)) == (unsigned char)(*(signed char *)((((((struct o118_int *)(v0_1))->v)) + 0x82))))) goto L_C15A3E8;
    v0_2 = (0x8);
    if (((int)(*(short *)((v0_0 + 0x1E))) <= (int)0x8)) goto L_C15A3E8;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_2;
    (((struct o20_ushort *)(v0_0))->v) = (unsigned char)(*(signed char *)((((((struct o118_int *)(v0_1))->v)) + 0x82)));
    L_C15A3E8:;
    return FUN_0c158f5a(v0_0, v0_2, v0_3, a7);
}
