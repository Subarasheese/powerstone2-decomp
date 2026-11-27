/* Straight-line functions with calls and guards (batch gen_pe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int, int, int);
int FUN_0c1195d4(int a4, int a5, int a6, int a7);

int FUN_0c1195d4(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_3 = *(int *)((int)stk + 8);
    v0_4 = *(int *)((int)stk + 12);
    v0_5 = *(int *)((int)stk + 16);
    v0_1 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = a7;
    v0_2 = *(int *)((v0_1 + 0x10));
    v0_0 = ((0x41C + v0_2));
    v0_1 = (v0_1);
    if (((*(signed char *)((v0_2 + 0x14))) != 80)) goto L_C1195FC;
    (((struct o14_uchar *)(v0_1))->v) = 0x63;
    L_C1195FC:;
    v0_6 = *(signed char *)((v0_1 + 0x14));
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C11963C;
    if ((v0_2 == 1)) goto L_C119656;
    if ((v0_2 != 99)) goto L_C119610;
    return FUN_0c03f346(v0_1, v0_3, v0_4, v0_5);
    L_C119610:;
    L_C11973A:;
    return v0_2;
    L_C119656:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x28)) = *(struct mv3 *)(((*(int *)((v0_1 + 0x10))) + 0x28)); }
    FUN_0c1171f0(v0_1);
    v0_5 = 0xC291DF8;
    v0_4 = 0xC291D70;
    v0_3 = 0xC291DE0;
    v0_6 = (0x0);
    v0_7 = (0x0);
    v0_8 = (0x5);
    L_C11967C:;
    v0_2 = *(short *)((v0_0 + 0x8));
    v0_11 = *(short *)((v0_0 + 0xC));
    v0_9 = ((*(int *)((((v0_7 << 2) + (0xC4 + v0_1)) + 0x0))));
    v0_10 = ((v0_2 - v0_11));
    if (((int)(v0_2 - v0_11) >= 0)) goto L_C119698;
    v0_10 = (v0_6);
    L_C119698:;
    v0_11 = *(short *)((v0_0 + 0xE));
    v0_2 = (v0_11);
    if (((int)(((*(short *)((v0_0 + 0x8))) - (*(short *)((v0_0 + 0xC)))) + v0_7) >= (int)v0_11)) goto L_C119716;
    FUN_0c1173dc(v0_9, (*(int *)((((v0_7 + v0_10) << 2) + 0xC474410))), 0x0, (*(int *)0xC4B410C));
    *(unsigned short *)((v0_9 + 0x6)) = 0x21F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_9)) = *(struct mv3 *)((v0_5)); }
    if ((v0_7 != (*(short *)((v0_0 + 0xC))))) goto L_C1196E4;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((v0_9 + 0x14)) = *(struct mv4 *)(0xC2A0CA0); }
    L_C1196F0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + v0_9)) = *(struct mv3 *)((v0_9 + 0x6C)); }
    v0_2 = v0_6;
    *(int *)((int)stk + 4) = v0_2;
    *(int *)((int)stk + 0) = 0x4;
    v0_2 = ((FUN_0c0588bc((v0_9 + 0x6C), 0xC291DEC, (v0_3), v0_7, 0x4, v0_2)));
    L_C119718:;
    v0_9 = (int)(v0_7 + 0x1) < (int)v0_8;
    v0_7 = ((v0_7 + 0x1));
    if (v0_9) goto L_C11967C;
    goto L_C11973A;
    L_C1196E4:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((v0_9 + 0x14)) = *(struct mv4 *)((v0_4)); }
    goto L_C1196F0;
    L_C119716:;
    *(unsigned char *)((v0_9 + 0x0)) = v0_6;
    goto L_C119718;
    L_C11963C:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    (((struct oAC_ushort *)(v0_1))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    goto L_C119656;
}
