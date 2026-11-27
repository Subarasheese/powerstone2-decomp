/* Straight-line functions with calls and guards (batch gen_aga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c0573cc(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c028370(int a4, int a5);

int FUN_0c028370(int a4, int a5)
{
    int stk[37];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_3 = a5;
    v0_1 = FUN_0c022050();
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C02844C;
    FUN_0c0220c4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
    v0_4 = *(signed char *)(((int)stk + 8));
    v0_1 = (0x0);
    v0_2 = (0xC30985A);
    v0_0 = ((*(int *)0xC309994));
    v0_3 = (v0_4);
    if ((v0_4 != 101)) goto L_C02842A;
    if (((*(signed char *)(((int)stk + 4))) != 2)) goto L_C0283FC;
    FUN_0c1864e0(v0_0, ((int)stk + 0), 0x1);
    v0_3 = *(signed char *)(((int)stk + 0));
    v0_0 = (v0_3);
    if ((v0_3 != 1)) goto L_C02844C;
    (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x76;
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x1;
    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
    *(unsigned char *)((v0_2 + 0x0)) = 0x2;
    *(unsigned char *)0xC30985B = v0_1;
    *(unsigned short *)0xC30EF6C = v0_1;
    v0_1 = (((int)stk + 0) + 0x14);
    v0_0 = ((FUN_0c0573cc(0xFF000000, 0x0, 0x14)));
    v0_1 = v0_1;
    L_C02844C:;
    return v0_0;
    L_C0283FC:;
    if ((v0_3 != 101)) goto L_C02842A;
    if (((*(signed char *)(((int)stk + 4))) != 4)) goto L_C02842A;
    FUN_0c1864e0(v0_0, ((int)stk + 0), 0x1);
    v0_3 = *(signed char *)(((int)stk + 0));
    v0_0 = (v0_3);
    if ((v0_3 != 1)) goto L_C028422;
    *(unsigned char *)((v0_2 + 0x0)) = 0x7;
    *(unsigned short *)0xC30EF6C = v0_1;
    goto L_C02844C;
    L_C028422:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) - 1);
    goto L_C02844C;
    L_C02842A:;
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C02843C;
    v0_0 = ((FUN_0c02aa9e()));
    goto L_C02844C;
    L_C02843C:;
    v0_0 = ((FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4))));
    goto L_C02844C;
}
