/* Straight-line functions with calls and guards (batch gen_ahg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0d704c(int a4, int a5, int a6);

int FUN_0c0d704c(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_4 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_3 = R13;
    v0_2 = *(signed char *)((v0_4 + 0x15));
    v0_3 = (v0_2);
    R13 = (0x0);
    v0_4 = (v0_4);
    if ((v0_2 == 0)) goto L_C0D7066;
    if ((v0_3 == 1)) goto L_C0D70B0;
    L_C0D70E0:;
    return v0_3;
    L_C0D70B0:;
    v0_0 = *(short *)((v0_4 + 0x1C));
    *(unsigned short *)((v0_4 + 0x1C)) = (v0_0 - 1);
    v0_3 = ((short)(v0_0 - 1));
    if (((int)(short)(v0_0 - 1) > 0)) goto L_C0D70E0;
    FUN_0c0c2d56(v0_4, 0x0, (*(signed char *)((v0_4 + 0x1))));
    (((struct oA8_uchar *)(v0_4))->v) = 0x0;
    *(unsigned short *)(((0x12A + v0_4) + 0x2)) = R13;
    *(unsigned short *)(((0x12A + v0_4) + 0x4)) = R13;
    (((struct o12A_ushort *)(v0_4))->v) = R13;
    *(unsigned short *)((v0_4 + 0x1C)) = 0x3C;
    v0_3 = (0x3C);
    goto L_C0D70E0;
    L_C0D7066:;
    *(unsigned short *)((v0_4 + 0x1C)) = 0x12C;
    (((struct oA8_uchar *)(v0_4))->v) = R13;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x28)) = *(struct mv3 *)(v0_0); }
    *(unsigned int *)((v0_4 + 0x38)) = v0_1;
    (((struct o15_uchar *)(v0_4))->v) = ((*(signed char *)((v0_4 + 0x15))) + 0x1);
    *(unsigned int *)((v0_4 + 0x3C)) = R13;
    *(unsigned int *)((v0_4 + 0x34)) = R13;
    (((struct oA4_uint *)(v0_4))->v) = R13;
    FUN_0c0c2ab6(v0_4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((v0_4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + v0_4) + 0x2)) = R13;
    *(unsigned short *)(((0x12A + v0_4) + 0x4)) = R13;
    (((struct o12A_ushort *)(v0_4))->v) = R13;
    goto L_C0D70B0;
}
