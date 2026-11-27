/* Straight-line functions with calls and guards (batch gen_rc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c03b05a(int, int, int);
int FUN_0c03cbfa(int);
int FUN_0c03df6a(int, int, int);
int FUN_0c03db62(int a4, int a5, int a6);

int FUN_0c03db62(int a4, int a5, int a6)
{

    register int R2;
    register int R3;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = R13;
    v0_5 = R12;
    v0_4 = *(signed char *)((v0_0 + 0x3));
    v0_5 = (v0_4);
    R12 = (0x0);
    R13 = (0x1);
    v0_3 = (v0_0);
    if ((v0_4 == 0)) goto L_C03DB82;
    if ((v0_5 == 1)) goto L_C03DB92;
    if ((v0_5 == 2)) goto L_C03DBD6;
    L_C03DBF0:;
    return v0_5;
    L_C03DBD6:;
    v0_0 = FUN_0c03cbfa((*(int *)((v0_3 + 0x1C))));
    v0_5 = (v0_0);
    if ((v0_0 == 0)) goto L_C03DBE4;
    if ((v0_5 == -1)) goto L_C03DBF0;
    L_C03DBE4:;
    *(unsigned char *)((v0_3 + 0x3)) = R13;
    *(unsigned int *)((v0_3 + 0x1C)) = ((*(int *)((v0_3 + 0x1C))) + 0x1);
    v0_5 = (R13);
    goto L_C03DBF0;
    L_C03DB92:;
    v0_0 = FUN_0c03b05a(v0_0, v0_1, v0_2);
    *(unsigned int *)((v0_3 + 0x18)) = v0_0;
    v0_5 = (v0_0);
    if (((int)v0_0 < 0)) goto L_C03DBF0;
    v0_4 = *(int *)((v0_3 + 0x1C));
    v0_0 = (v0_4);
    v0_1 = (0xFFFFFFFF);
    v0_2 = (0x8);
    if (((int)v0_4 >= (int)0x8)) goto L_C03DBBC;
    L_C03DBA8:;
    v0_4 = (((int)R13 << (int)v0_0) & (*(int *)((v0_3 + 0x18)))) == 0;
    if (v0_4) goto L_C03DBB6;
    v0_1 = (v0_0);
    L_C03DBBC:;
    if (((int)v0_1 >= 0)) goto L_C03DBCE;
    (((struct o0_uchar *)0xC3DC242)->v) = 0x3;
    (((struct o1_uchar *)0xC3DC242)->v) = R12;
    v0_5 = (R12);
    goto L_C03DBF0;
    L_C03DBCE:;
    *(unsigned int *)((v0_3 + 0x1C)) = v0_1;
    *(unsigned char *)((v0_3 + 0x3)) = ((*(signed char *)((v0_3 + 0x3))) + 0x1);
    goto L_C03DBD6;
    L_C03DBB6:;
    v0_4 = (int)(v0_0 + 0x1) < (int)v0_2;
    v0_0 = ((v0_0 + 0x1));
    if (v0_4) goto L_C03DBA8;
    goto L_C03DBBC;
    L_C03DB82:;
    *(unsigned char *)((v0_3 + 0x3)) = ((*(signed char *)((v0_3 + 0x3))) + 0x1);
    FUN_0c03df6a(v0_0, v0_1, v0_2);
    (((struct o20_ushort *)(v0_3))->v) = R12;
    *(unsigned int *)((v0_3 + 0x1C)) = R12;
    goto L_C03DB92;
}
