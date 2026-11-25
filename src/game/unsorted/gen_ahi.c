/* Straight-line functions with calls and guards (batch gen_ahi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0ef1d8(int a4);

int FUN_0c0ef1d8(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R11;
    register int R12;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x16));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0EF1FC;
    if ((v0_1 == 1)) goto L_C0EF21C;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    L_C0EF246:;
    return v0_1;
    L_C0EF21C:;
    (((struct oA8_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0xA8))) ^ 0x1);
    v0_2 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0x20);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0EF246;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_1 = (0x16);
    goto L_C0EF246;
    L_C0EF1FC:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o20_ushort *)(v0_0))->v) = 0x3C;
    (((struct o5C_float *)(v0_0))->v) = -1.0f;
    (((struct o12A_ushort *)(v0_0))->v) = 0x0;
    (((struct o12C_ushort *)(v0_0))->v) = 0x0;
    goto L_C0EF21C;
}
