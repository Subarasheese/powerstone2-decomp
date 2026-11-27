/* Straight-line functions with calls and guards (batch gen_xp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c11c6dc(int a4, int a5, int a6, int a7);

int FUN_0c11c6dc(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_1 = *(int *)((int)stk + 0);
    v0_1 = *(int *)((int)stk + 4);
    v0_1 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = a7;
    v0_6 = *(signed char *)((v0_1 + 0x14));
    v0_2 = (v0_6);
    v0_0 = (v0_1);
    if ((v0_6 == 0)) goto L_C11C6F6;
    if ((v0_2 == 1)) goto L_C11C734;
    if ((v0_2 == 99)) goto L_C11C79C;
    L_C11C7A6:;
    return v0_2;
    L_C11C79C:;
    return FUN_0c03f346(v0_0, v0_3, v0_4, v0_5);
    L_C11C734:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C11C75C;
    if (((int)v0_1 > (int)0x3B)) goto L_C11C75C;
    v0_1 = 0x0;
    v0_1 = 0x3C;
    FUN_0c058a6e((0xB0 + v0_0), 0xC2A0CA0, 0xC2A0C90, (*(short *)((v0_0 + 0x1C))), 0x3C, 0x0);
    L_C11C75C:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if (((int)v0_2 < (int)0x3D)) goto L_C11C786;
    if (((int)v0_1 > (int)0x78)) goto L_C11C786;
    v0_1 = 0x3C;
    v0_1 = 0x78;
    FUN_0c058a6e((0xB0 + v0_0), 0xC2A0C90, 0xC2A0CA0, (*(short *)((v0_0 + 0x1C))), 0x78, 0x3C);
    L_C11C786:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_2 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) <= (int)0x78)) goto L_C11C7A6;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    v0_2 = (0x14);
    goto L_C11C7A6;
    L_C11C6F6:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(v0_0))->v)), 0x4, 0x16, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0x21F;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x40)) = *(struct mv3 *)(0xC2A0C84); }
    FUN_0c05a080(0x1B, 0x0);
    goto L_C11C734;
}
