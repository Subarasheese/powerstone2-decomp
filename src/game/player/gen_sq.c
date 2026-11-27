/* Straight-line functions with calls and guards (batch gen_sq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3733_uchar { char p[0x3733]; unsigned char v; };
struct o3734_uchar { char p[0x3734]; unsigned char v; };
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f172(int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c09ebd4(int);
int FUN_0c069a92(int a4);

int FUN_0c069a92(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R8;
    register int R9;
    register int R11;
    register int R12;
    register int R13;
    register int R14;
    register float F1;
    register float F8;
    register float F10;
    register float F14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_1 = R14;
    v0_2 = R13;
    v0_3 = (*(signed char *)((v0_0 + 0x3732))) != 0;
    R13 = (0xC085CAC);
    R14 = (v0_0);
    if (v0_3) goto L_C069B18;
    v0_0 = (int)(*(signed char *)((R14 + 0x3737))) > (int)(unsigned char)(*(signed char *)((R14 + 0x3735)));
    if (v0_0) goto L_C069B18;
    v0_1 = FUN_0c09ebd4(R14);
    v0_0 = (v0_1);
    if (((signed char)v0_1 == 0)) goto L_C069AD8;
    v0_1 = (*(signed char *)((R14 + 0x130))) == 0;
    if (v0_1) goto L_C069ACE;
    (((struct o3734_uchar *)(R14))->v) = v0_0;
    L_C069AD8:;
    v0_0 = (FUN_0c07f172(R14)) == 0;
    if (v0_0) goto L_C069B18;
    v0_0 = (0x6);
    L_C069AE4:;
    v0_1 = (0x7);
    L_C069B50:;
    v0_0 = FUN_0c085cac(R14, v0_1, v0_0, R7);
    v0_1 = (v0_0);
    L_C069B54:;
    return v0_1;
    L_C069B18:;
    v0_0 = *(signed char *)((R14 + 0x3732));
    v0_1 = (v0_0);
    if ((v0_0 == 0)) goto L_C069B28;
    if ((v0_1 == 1)) goto L_C069B28;
    goto L_C069B54;
    L_C069B28:;
    v0_2 = FUN_0c07ecc6(R14, 0x0, 0x0);
    v0_1 = (v0_2);
    v0_0 = (v0_2);
    if ((v0_2 == 0)) goto L_C069B54;
    v0_1 = (v0_0);
    if ((v0_0 == 1)) goto L_C069B54;
    (((struct o3717_uchar *)(R14))->v) = 0x6;
    (((struct o3718_uchar *)(R14))->v) = 0x0;
    v0_1 = (0x6);
    v0_0 = (0x0);
    goto L_C069B50;
    L_C069ACE:;
    (((struct o3733_uchar *)(R14))->v) = (v0_0 - 1);
    v0_0 = (0x0);
    goto L_C069AE4;
}
