/* Straight-line functions with calls and guards (batch gen_ake): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
int FUN_0c0ed268(int a4);

int FUN_0c0ed268(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x16));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0ED278;
    if ((v0_1 == 1)) goto L_C0ED286;
    (((struct o15_uchar *)(v0_0))->v) = 0x4;
    (((struct o16_uchar *)(v0_0))->v) = 0x0;
    v0_1 = (0x16);
    L_C0ED2AA:;
    return v0_1;
    L_C0ED286:;
    v0_2 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0x22);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0ED2AA;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_1 = (0x16);
    goto L_C0ED2AA;
    L_C0ED278:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o22_ushort *)(v0_0))->v) = 0x12C;
    goto L_C0ED286;
}
