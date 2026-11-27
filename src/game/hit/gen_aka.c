/* Straight-line functions with calls and guards (batch gen_aka): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40C_uint { char p[0x40C]; unsigned int v; };
struct o410_uint { char p[0x410]; unsigned int v; };
int FUN_0c064b5a(int, int);
int FUN_0c064bd8(int, int);
int FUN_0c064c4a(int, int);
int FUN_0c064cbc(int a4, int a5, int a6, float f4);

int FUN_0c064cbc(int a4, int a5, int a6, float f4)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_0 = a5;
    v0_2 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    v0_3 = *(signed char *)((v0_2 + 0x1));
    v0_0 = (v0_3);
    v0_1 = (v0_1);
    v0_2 = (v0_2);
    if ((v0_3 == 0)) goto L_C064CDC;
    if ((v0_0 == 1)) goto L_C064CEC;
    if ((v0_0 == 2)) goto L_C064D04;
    L_C064D1A:;
    return v0_0;
    L_C064D04:;
    v0_3 = FUN_0c064bd8(v0_1, (v0_2 + 0x8));
    v0_0 = (v0_3);
    if ((v0_3 == 0)) goto L_C064D1A;
    L_C064D10:;
    (((struct o40C_uint *)(v0_1))->v) = (*(int *)(((int)stk + 0)));
    (((struct o410_uint *)(v0_1))->v) = v0_2;
    v0_0 = (0x410);
    goto L_C064D1A;
    L_C064CEC:;
    v0_3 = FUN_0c064b5a(v0_1, (v0_2 + 0x8));
    v0_0 = (v0_3);
    if ((v0_3 == 0)) goto L_C064D1A;
    goto L_C064D10;
    L_C064CDC:;
    v0_3 = FUN_0c064c4a(v0_1, (v0_2 + 0x8));
    v0_0 = (v0_3);
    if ((v0_3 != 0)) goto L_C064D10;
    goto L_C064D1A;
}
