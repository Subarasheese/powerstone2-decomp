/* Straight-line functions with calls and guards (batch gen_xb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c241a(int);
int FUN_0c0f3aec(int a4, int a5, int a6, int a7);

int FUN_0c0f3aec(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_1 = R13;
    v0_3 = *(signed char *)((v0_2 + 0x14));
    v0_0 = *(int *)((v0_2 + 0x10));
    v0_1 = (v0_3);
    R13 = (v0_0);
    v0_0 = (v0_2);
    v0_2 = (0x1);
    if ((v0_3 == 0)) goto L_C0F3B08;
    if ((v0_1 == 1)) goto L_C0F3B14;
    return FUN_0c03f346(v0_0, a5, a6, a7);
    L_C0F3B14:;
    v0_1 = (int)(*(signed char *)((R13 + 0x14))) > (int)v0_2;
    if (v0_1) goto L_C0F3B22;
    v0_1 = (*(int *)((R13 + 0x4))) != 0;
    if (!(v0_1)) goto L_C0F3B22;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F3B42;
    if ((v0_1 == 1)) goto L_C0F3B50;
    if ((v0_1 == 2)) goto L_C0F3B74;
    goto L_C0F3B96;
    L_C0F3B22:;
    return FUN_0c03f346(v0_0, a5, a6, a7);
    L_C0F3B96:;
    return v0_1;
    L_C0F3B74:;
    v0_1 = *(signed char *)((v0_0 + 0x41C));
    v0_1 = *(int *)((((unsigned char)v0_1 << 2) + 0xC288390));
    return ((int (*)(int, int, int, int))(v0_1))(v0_0, a5, a6, a7);
    L_C0F3B50:;
    v0_2 = *(signed char *)((R13 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 != 1)) goto L_C0F3B96;
    v0_2 = *(signed char *)((R13 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 != 5)) goto L_C0F3B96;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_0))->v) = 0x0;
    (((struct o17_uchar *)(v0_0))->v) = 0x0;
    v0_1 = (0x17);
    goto L_C0F3B96;
    L_C0F3B42:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    FUN_0c0c241a(v0_0);
    goto L_C0F3B50;
    L_C0F3B08:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    goto L_C0F3B14;
}
