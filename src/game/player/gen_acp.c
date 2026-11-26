/* Straight-line functions with calls and guards (batch gen_acp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o3752_uchar { char p[0x3752]; unsigned char v; };
struct o383E_short { char p[0x383E]; short v; };
int FUN_0c042fe0(void);
int FUN_0c07d38a(int);
int FUN_0c07e2c4(int);
int FUN_0c06bf38(int a4, int a5, int a6, int a7);

int FUN_0c06bf38(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = R14;
    v0_2 = *(signed char *)((v0_0 + 0x3715));
    R14 = (v0_0);
    v0_0 = (v0_2);
    if ((v0_2 == 7)) goto L_C06BF5A;
    if ((v0_0 == 26)) goto L_C06BF5A;
    v0_1 = FUN_0c07e2c4(R14);
    v0_0 = (v0_1);
    if ((v0_1 != 0)) goto L_C06BFAE;
    L_C06BF5A:;
    v0_0 = ((((struct o383E_short *)(R14))->v)) == 0;
    if (v0_0) goto L_C06BF96;
    v0_0 = (*(signed char *)((R14 + 0x3715))) == 26;
    if (v0_0) goto L_C06BF96;
    v0_0 = (FUN_0c042fe0()) == 0;
    if (v0_0) goto L_C06BF96;
    v0_0 = (FUN_0c07d38a(R14)) == 0;
    if (v0_0) goto L_C06BF9C;
    v0_1 = *(signed char *)((R14 + 0x3715));
    v0_0 = (v0_1);
    if ((v0_1 != 38)) goto L_C06BFAE;
    (((struct o2C_float *)(R14))->v) = (((((struct o2C_float *)(R14))->v)) + 1.0f);
    return 0x2C;
    L_C06BFAE:;
    return v0_0;
    L_C06BF9C:;
    v0_0 = *(int *)((((*(signed char *)((R14 + 0x3715))) << 2) + 0xC259094));
    return ((int (*)(int, int, int, int))(v0_0))(R14, a5, a6, a7);
    L_C06BF96:;
    (((struct o3752_uchar *)(R14))->v) = 0x0;
    goto L_C06BF9C;
}
