/* Straight-line functions with calls and guards (batch gen_aed): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c16a40c(int);
float nlLength(int, int);
int FUN_0c16a6e0(int a4);

int FUN_0c16a6e0(int a4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R5;
    register int R6;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register float F3;
    register float F4;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_2 = *(int *)((int)stk + 0);
    v0_1 = a4;
    v0_2 = (((short)(*(signed char *)((v0_1 + 0x1))) * (short)0x3938) + 0xC532498);
    v0_3 = *(signed char *)((v0_1 + 0x16));
    v0_0 = (v0_3);
    v0_1 = (v0_1);
    if ((v0_3 == 0)) goto L_C16A70A;
    if ((v0_0 == 1)) goto L_C16A762;
    if ((v0_0 == 2)) goto L_C16A786;
    (((struct o15_uchar *)(v0_1))->v) = 0x2;
    (((struct o16_uchar *)(v0_1))->v) = 0x0;
    v0_0 = (0x16);
    L_C16A7DC:;
    return v0_0;
    L_C16A786:;
    FUN_0c16a40c(v0_1);
    v0_3 = *(signed char *)((v0_1 + 0x2));
    v0_0 = (v0_3);
    if ((v0_3 == 0)) goto L_C16A798;
    if ((v0_0 == 1)) goto L_C16A798;
    (((struct o16_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x16))) + 0x1);
    v0_0 = (0x16);
    goto L_C16A7DC;
    L_C16A798:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((v0_2) + 0x380C)); }
    w0_0 = nlLength((v0_1 + 0x28), (((int)stk + 0) + 0x4));
    v0_0 = (0xC16A810);
    w0_1 = (w0_0);
    if ((w0_0 > (*(float *)0xC16A810))) goto L_C16A7DC;
    L_C16A7BC:;
    (((struct o16_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x16))) + 0x1);
    v0_0 = (0x16);
    goto L_C16A7DC;
    L_C16A762:;
    FUN_0c16a40c(v0_1);
    v0_0 = (0x20);
    if ((((((struct o20_short *)(v0_1))->v)) == 0)) goto L_C16A774;
    *(unsigned short *)((v0_1 + v0_0)) = ((*(short *)((v0_1 + v0_0))) - 1);
    L_C16A774:;
    if (((int)(*(short *)((v0_1 + v0_0))) > 0)) goto L_C16A7DC;
    v0_2 = *(signed char *)0xC542235;
    v0_0 = (v0_2);
    if ((v0_2 == 2)) goto L_C16A7BC;
    goto L_C16A7DC;
    L_C16A70A:;
    (((struct o16_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x16))) + 0x1);
    v0_2 = *(signed char *)((v0_1 + 0x2));
    v0_0 = (v0_2);
    if ((v0_2 == 0)) goto L_C16A720;
    if ((v0_0 == 1)) goto L_C16A724;
    v0_0 = (0xB4);
    L_C16A75E:;
    (((struct o20_ushort *)(v0_1))->v) = v0_0;
    goto L_C16A762;
    L_C16A724:;
    v0_0 = (0x3C);
    goto L_C16A75E;
    L_C16A720:;
    v0_0 = (0x5A);
    goto L_C16A75E;
}
