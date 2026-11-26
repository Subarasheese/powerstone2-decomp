/* Straight-line functions with calls and guards (batch gen_aca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c03b3fc(void);
int FUN_0c03da82(int, int, int, int);
int FUN_0c03dd5c(int);
int FUN_0c03de10(int, int);
extern int FUN_0c03df6a();
int FUN_0c03dfa6(void);
int FUN_0c03d7f8(int a4, int a5, int a6, int a7);

int FUN_0c03d7f8(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_3 = a5;
    v0_4 = FUN_0c03da82(v0_2, v0_3, a6, a7);
    v0_1 = ((signed char)v0_4);
    v0_0 = (v0_2);
    if (((signed char)v0_4 != 0)) goto L_C03D85A;
    v0_4 = *(signed char *)((v0_0 + 0x3));
    v0_1 = (v0_4);
    if ((v0_4 == 0)) goto L_C03D814;
    if ((v0_1 == 1)) goto L_C03D832;
    L_C03D85A:;
    return v0_1;
    L_C03D832:;
    v0_1 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((short)(v0_1 - 1) == 0)) goto L_C03D84A;
    v0_0 = FUN_0c03dfa6();
    v0_1 = (v0_0);
    if ((v0_0 == 0)) goto L_C03D85A;
    L_C03D84A:;
    FUN_0c03b3fc();
    v0_0 = ((int (*)(void))(FUN_0c03df6a))();
    *(unsigned char *)0xC3DC241 = 0x6;
    v0_1 = (v0_0);
    goto L_C03D85A;
    L_C03D814:;
    *(unsigned char *)((v0_0 + 0x3)) = ((*(signed char *)((v0_0 + 0x3))) + 0x1);
    v0_1 = ((int (*)(int, int))(FUN_0c03df6a))(v0_2, v0_3);
    FUN_0c03dd5c(0x0);
    FUN_0c03dd5c(0x1);
    FUN_0c03de10(0x0, 0x5);
    (((struct o20_ushort *)(v0_0))->v) = 0x258;
    goto L_C03D832;
}
