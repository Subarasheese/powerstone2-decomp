/* Straight-line functions with calls and guards (batch gen_acf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c13dffc(int);
int FUN_0c13e09e(int a4, int a5, int a6, int a7);

int FUN_0c13e09e(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_2 = a4;
    v0_0 = *(signed char *)((v0_2 + 0x14));
    v0_1 = (v0_0);
    v0_2 = (v0_2);
    if ((v0_0 == 0)) goto L_C13E0B4;
    if ((v0_1 == 1)) goto L_C13E0CC;
    return FUN_0c03f346(v0_2, a5, a6, a7);
    L_C13E0CC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x28)) = *(struct mv3 *)(((*(int *)((v0_2 + 0x10))) + 0x28)); }
    FUN_0c13dffc(v0_2);
    v0_0 = *(short *)((v0_2 + 0x1C));
    *(unsigned short *)((v0_2 + 0x1C)) = (v0_0 - 1);
    if (((int)(short)(v0_0 - 1) <= 0)) goto L_C13E100;
    if (((int)(*(signed char *)(((*(int *)((v0_2 + 0x10))) + 0x14))) > (int)0x1)) goto L_C13E100;
    v0_1 = (0x15);
    if (((int)(*(signed char *)(((*(int *)((v0_2 + 0x10))) + 0x15))) <= 0)) goto L_C13E112;
    L_C13E100:;
    (((struct o14_uchar *)(v0_2))->v) = 0x63;
    v0_1 = (0x14);
    L_C13E112:;
    return v0_1;
    L_C13E0B4:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_2))->v) = 0x0;
    *(unsigned short *)((v0_2 + 0x1C)) = 0x3C;
    (((struct o20_ushort *)(v0_2))->v) = 0x5;
    goto L_C13E0CC;
}
