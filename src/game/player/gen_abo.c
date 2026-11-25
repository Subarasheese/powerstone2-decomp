/* Straight-line functions with calls and guards (batch gen_abo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o375A_uchar { char p[0x375A]; unsigned char v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o430_short { char p[0x430]; short v; };
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c09c9c8(int);
int FUN_0c09ca20(int a4, int a5);

int FUN_0c09ca20(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R3;
    register int R6;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = *(int *)((int)stk + 0);
    v0_2 = *(int *)((int)stk + 4);
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = v0_0;
    v0_2 = (0x38F8 + v0_3);
    v0_0 = (v0_3);
    if (((*(signed char *)((v0_3 + 0x371A))) == 0)) goto L_C09CABC;
    if ((0.0f > ((((struct o37B8_float *)(v0_0))->v)))) goto L_C09CABC;
    v0_4 = FUN_0c09c9c8(v0_0);
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C09CABC;
    if ((v0_3 == 3)) goto L_C09CA60;
    if (((int)(*(int *)(((v0_2) + 0x0))) >= (int)0x2)) goto L_C09CABC;
    L_C09CA60:;
    if (((v0_1) != 1)) goto L_C09CA6E;
    if ((v0_3 != 0)) goto L_C09CABC;
    L_C09CA78:;
    v0_1 = (FUN_0c07ecc6(v0_0, 0x0, 0x0)) != 0;
    if (v0_1) goto L_C09CA88;
    v0_3 = ((v0_3 + 0x3));
    L_C09CA88:;
    (((struct o375A_uchar *)(v0_0))->v) = (v0_3 - 1);
    if ((v0_3 != 1)) goto L_C09CAAE;
    if ((((unsigned short)((((struct o430_short *)(v0_0))->v)) & 0x200) == 0)) goto L_C09CAA8;
    v0_1 = (0x0);
    L_C09CAAA:;
    (((struct o3731_uchar *)(v0_0))->v) = v0_1;
    L_C09CAAE:;
    FUN_0c085cac(v0_0, 0x1A, 0x0);
    v0_0 = (0x1);
    L_C09CABE:;
    return v0_0;
    L_C09CAA8:;
    v0_1 = (0x2);
    goto L_C09CAAA;
    L_C09CABC:;
    v0_0 = (0x0);
    goto L_C09CABE;
    L_C09CA6E:;
    if (((v0_1) != 2)) goto L_C09CA78;
    if ((v0_3 == 0)) goto L_C09CABC;
    goto L_C09CA78;
}
