/* Straight-line functions with calls and guards (batch gen_th): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c145d1c(int, int);
int FUN_0c145f1a(int a4, int a5, int a6, int a7);

int FUN_0c145f1a(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R12;
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
    if ((v0_6 == 0)) goto L_C145F40;
    if ((v0_2 == 1)) goto L_C145F98;
    return FUN_0c03f346(v0_0, v0_3, v0_4, v0_5);
    L_C145F98:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    v0_2 = (0xA);
    v0_1 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C145FC8;
    if (((int)v0_1 > (int)0xA)) goto L_C145FC8;
    v0_1 = 0x0;
    v0_3 = v0_2;
    v0_1 = v0_3;
    FUN_0c0588bc((((((struct oC4_int *)(v0_0))->v)) + 0x84), 0xC2A23A0, 0xC2A2394, (*(short *)((v0_0 + 0x1C))), v0_3, 0x0);
    L_C145FC8:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) + 0x800);
    v0_3 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_3);
    if (((int)v0_3 < (int)v0_2)) goto L_C145FFE;
    if (((int)v0_1 > (int)0x14)) goto L_C145FFE;
    v0_2 = v0_2;
    v0_1 = v0_2;
    v0_1 = 0x14;
    FUN_0c058a6e((((((struct oC4_int *)(v0_0))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((v0_0 + 0x1C))), 0x14, v0_2);
    L_C145FFE:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned short *)((v0_1 + 0x6)) = ((*(short *)((v0_1 + 0x6))) | 0x1000);
    FUN_0c145d1c(v0_0, ((((struct oC4_int *)(v0_0))->v)));
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_2 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) <= (int)0x14)) goto L_C146038;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    L_C146038:;
    return v0_2;
    L_C145F40:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(v0_0))->v)), 0x0, 0xC, (*(int *)(((((*(signed char *)((v0_0 + 0x2))) << 2) << 1) + 0xC4B40E0))));
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x21F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x84)) = *(struct mv3 *)(0xC2A2394); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(v0_0))->v)) + 0x14)) = *(struct mv4 *)(0xC2A23BC); }
    goto L_C145F98;
}
