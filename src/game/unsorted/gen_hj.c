/* Straight-line functions with calls and guards (batch gen_hj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int);
int FUN_0c05aae4(int, int);
extern int FUN_0c150010();
int FUN_0c16328c(int, int, int, float);
int FUN_0c1632e0(int, int, int, float);
extern float FUN_0c17c450();
int nlAddVector3op(int, int, int);
float nlInnerProduct(int, int);
int FUN_0c162fd0(int a4, int a5, int a6);

int FUN_0c162fd0(int a4, int a5, int a6)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_4 = *(signed char *)((v0_2 + 0x14));
    v0_3 = (v0_4);
    v0_2 = (v0_2);
    if ((v0_4 == 0)) goto L_C162FEA;
    if ((v0_3 == 1)) goto L_C162FF8;
    L_C16310C:;
    return v0_3;
    L_C162FF8:;
    w0_0 = (0.5f);
    if (((*(signed char *)((v0_2 + 0x131))) != 0)) goto L_C16300C;
    if (!(((*(signed char *)((v0_2 + 0x132))) == 0))) goto L_C16300C;
    v0_3 = (0x404);
    if ((((((struct o404_int *)(v0_2))->v)) == 0)) goto L_C16308C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((0x178 + v0_2)); }
    v0_3 = (((float (*)(int))(FUN_0c17c450))((((int)stk + 0) + 0xC))) == 0.0f;
    if (v0_3) goto L_C16308C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_2 + 0x4C)); }
    v0_3 = (((float (*)(int, Stk3))(FUN_0c17c450))(((int)stk + 0), *(Stk3 *)(((int)stk + 0)))) == 0.0f;
    if (v0_3) goto L_C16308C;
    v0_3 = !(-0.5f > (nlInnerProduct((((int)stk + 0) + 0xC), ((int)stk + 0))));
    if (v0_3) goto L_C16308C;
    FUN_0c1632e0((*(signed char *)((v0_2 + 0x1))), (v0_2 + 0x28), 0x2, w0_0);
    FUN_0c05aae4(0xD1, (v0_2 + 0x28));
    goto L_C1630BA;
    L_C16300C:;
    FUN_0c16328c((*(signed char *)((v0_2 + 0x1))), (v0_2 + 0x28), 0x2, w0_0);
    L_C1630BA:;
    v0_3 = ((FUN_0c03f346(v0_2, v0_0, v0_1)));
    goto L_C16310C;
    L_C16308C:;
    if ((((*(short *)((v0_2 + 0x1C))) & 2) != 0)) goto L_C1630AE;
    if (((int)(*(int *)0xC532488) <= (int)0x14)) goto L_C1630AE;
    v0_3 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((v0_2 + 0x28), v0_0, v0_1, 1.0f, 1.0f, 1.0f, 1.0f);
    L_C1630AE:;
    v0_3 = *(short *)((v0_2 + 0x1C));
    *(unsigned short *)((v0_2 + 0x1C)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C1630FC;
    goto L_C1630BA;
    L_C1630FC:;
    v0_3 = ((nlAddVector3op((v0_2 + 0x28), (v0_2 + 0x28), (v0_2 + 0x4C))));
    goto L_C16310C;
    L_C162FEA:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_2))->v) = 0x1;
    goto L_C162FF8;
}
