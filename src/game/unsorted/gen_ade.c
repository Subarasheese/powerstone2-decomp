/* Straight-line functions with calls and guards (batch gen_ade): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0dffcc(int a4, int a5, int a6, int a7);

int FUN_0c0dffcc(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R11;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_1 = a5;
    v0_3 = R12;
    v0_4 = R11;
    v0_2 = (*(signed char *)0xC54223C) == 1;
    v0_0 = (v0_0);
    if (v0_2) goto L_C0DFFF0;
    return FUN_0c03f346(v0_0, v0_1, a6, a7);
    L_C0DFFF0:;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0E0000;
    if ((v0_1 == 1)) goto L_C0E0058;
    L_C0E0076:;
    return v0_1;
    L_C0E0058:;
    v0_2 = (*(signed char *)((v0_0 + 0x15))) != 0;
    v0_1 = (0x15);
    if (v0_2) goto L_C0E0076;
    v0_2 = *(signed char *)0xC54098D;
    v0_1 = (v0_2);
    if ((v0_2 != 9)) goto L_C0E0076;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o12E_ushort *)(v0_0))->v) = 0xF;
    v0_1 = (0x12E);
    goto L_C0E0076;
    L_C0E0000:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(((*(int *)0xC540D94) + 0x28)); }
    (((struct o12E_ushort *)(v0_0))->v) = 0x0;
    FUN_0c0d04c4((0xAC + v0_0), (v0_0 + 0x34));
    R12 = (0xC0D04C4);
    v0_1 = (0x0);
    L_C0E0050:;
    v0_2 = (int)v0_1 < (int)((((struct oC0_int *)(v0_0))->v));
    if (v0_2) goto L_C0E0038;
    goto L_C0E0058;
    L_C0E0038:;
    v0_2 = *(int *)((((v0_1 << 2) + (0xC4 + v0_0)) + 0x0));
    FUN_0c0d04c4((v0_2 + 0x6), (v0_2 + 0x78));
    v0_1 = ((v0_1 + 0x1));
    goto L_C0E0050;
}
