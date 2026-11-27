/* Straight-line functions with calls and guards (batch gen_ads): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c01a9c0(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0221b0(void);
int FUN_0c0222a4(int, int, int);
int FUN_0c1864e0(int, int, int);
int strcpy(int, int, int);
int FUN_0c024cd4(int a4, int a5);

int FUN_0c024cd4(int a4, int a5)
{
    int v0_0;
    int stk[35];

    int v0_1;
    int qa0;
    int v0_2;
    int v0_3;
    int v0_4;
    int R6;
    int T_;
    int R3;
    int R2;
    int R1;
    qa0 = 0xC309994;
    v0_0 = a4;
    v0_1 = a5;
    v0_0 = FUN_0c022050();
    v0_1 = (v0_0);
    if ((v0_0 != 0)) goto L_C024CF4;
    L_C024E64:;
    return v0_1;
    L_C024CF4:;
    FUN_0c0220c4((((int)stk + 0) + 0x8), ((int)stk + 0), (((int)stk + 0) + 0x4));
    v0_1 = *(signed char *)(((int)stk + 8));
    v0_0 = (v0_1);
    if (!((v0_1 == 100))) goto L_C024E34;
    if (((*(signed char *)(((int)stk + 4))) == 1)) goto L_C024D1C;
    goto L_C024E34;
    L_C024E34:;
    if ((v0_0 != 101)) goto L_C024E56;
    if (((*(signed char *)(((int)stk + 4))) != 6)) goto L_C024E56;
    FUN_0c0221b0();
    (((struct o4_uint *)0xC30A3F4)->v) = 0x1;
    v0_1 = ((FUN_0c01a9c0()));
    goto L_C024E64;
    L_C024E56:;
    v0_1 = ((FUN_0c0222a4((((int)stk + 0) + 0x8), ((int)stk + 0), (((int)stk + 0) + 0x4))));
    goto L_C024E64;
    L_C024D1C:;
    FUN_0c1864e0((*(int *)qa0), (((short)(*(signed char *)0xC30A349) * (short)0x86) + 0xC309E0A), 0x1);
    FUN_0c1864e0((*(int *)qa0), ((((short)(*(signed char *)0xC30A349) * (short)0x86) + 0xC309E0A) + 0x1), 0x1);
    FUN_0c1864e0((*(int *)qa0), ((((short)(*(signed char *)0xC30A349) * (short)0x86) + 0xC309E0A) + 0x2), 0x1);
    FUN_0c1864e0((*(int *)qa0), ((((short)(*(signed char *)0xC30A349) * (short)0x86) + 0xC309E0A) + 0x4), 0x1);
    FUN_0c1864e0((*(int *)qa0), ((((short)(*(signed char *)0xC30A349) * (short)0x86) + 0xC309E0A) + 0x5), 0x1);
    FUN_0c1864e0((*(int *)qa0), ((int)stk + 0), 0x1);
    v0_0 = (0x0);
    v0_1 = (0xC309E0A);
    v0_2 = (0xC1864E0);
    v0_4 = (0xC309994);
    v0_2 = (0xC30A349);
    v0_3 = (0x0);
    L_C024DA0:;
    if (((int)v0_0 < (int)(unsigned char)(*(signed char *)(((int)stk + 0))))) goto L_C024D8A;
    *(unsigned char *)(((v0_0 + ((((short)(*(signed char *)(v0_2)) * (short)0x86) + v0_1) + 0x6)) + 0x0)) = v0_3;
    *(unsigned char *)0xC30A348 = ((*(signed char *)0xC30A348) + 0x1);
    *(unsigned char *)(v0_2) = ((*(signed char *)(v0_2)) + 0x1);
    v0_0 = (0xC30985A);
    if (((int)(*(signed char *)0xC30A348) > (int)((((struct o0_short *)0xC30A3F4)->v)))) goto L_C024DDC;
    if (!(((int)(*(signed char *)(v0_2)) <= (int)0x9))) goto L_C024DDC;
    *(unsigned char *)(v0_0) = ((*(signed char *)(v0_0)) - 1);
    goto L_C024DEE;
    L_C024DDC:;
    *(unsigned char *)(v0_0) = ((*(signed char *)(v0_0)) + 0x1);
    *(unsigned char *)0xC305416 = v0_3;
    L_C024DEE:;
    v0_1 = ((strcpy(0xC3053B8, 0xC1A8C30, R6)));
    goto L_C024E64;
    L_C024D8A:;
    FUN_0c1864e0((*(int *)(v0_4)), (((((short)(*(signed char *)(v0_2)) * (short)0x86) + v0_1) + 0x6) + v0_0), 0x1);
    v0_0 = (v0_0 + 0x1);
    goto L_C024DA0;
}
