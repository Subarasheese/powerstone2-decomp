/* Straight-line functions with calls and guards (batch gen_xh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o5C9_uchar { char p[0x5C9]; unsigned char v; };
int FUN_0c117944(int, ...);
int FUN_0c11ea4e(int);
int nlRand(void);
int FUN_0c10befc(int a4);

int FUN_0c10befc(int a4)
{
    int stk[3];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = *(int *)((int)stk + 4);
    v0_0 = *(int *)((int)stk + 8);
    v0_2 = a4;
    v0_0 = v0_2;
    v0_1 = (0xC5421F8);
    v0_2 = (0xC117944);
    v0_2 = (0xC1C37E8);
    v0_3 = (0xC5429C8);
    if (((unsigned int)(*(int *)0xC54229C) <= (unsigned int)(*(int *)0xC1C37E8))) goto L_C10BF32;
    if ((((*(signed char *)0xC542F91) & 1) != 0)) goto L_C10BF32;
    (((struct o5C9_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x5C9))) | 0x1);
    v0_1 = ((v0_1 + 0x79));
    L_C10BF52:;
    v0_2 = v0_1;
    v0_1 = v0_2;
    *(int *)((int)stk + 0) = 0x86;
    FUN_0c117944(0x86, v0_2);
    *(unsigned short *)(((v0_0) + 0x1E)) = 0x1;
    v0_0 = (0x1);
    L_C10C012:;
    return v0_0;
    L_C10BF32:;
    if (((unsigned int)((((struct o100_int *)(v0_1))->v)) <= (unsigned int)(*(int *)((v0_2 + 0x0))))) goto L_C10BF84;
    if ((((*(signed char *)0xC542F91) & 2) != 0)) goto L_C10BF84;
    (((struct o5C9_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x5C9))) | 0x2);
    v0_1 = ((0xD6 + v0_1));
    goto L_C10BF52;
    L_C10BF84:;
    v0_0 = FUN_0c11ea4e(0x127);
    v0_3 = (0xA);
    v0_1 = (0xC179AC0);
    v0_2 = (v0_0);
    if (((int)v0_0 < (int)0x50)) goto L_C10BFB4;
    v0_0 = ((int)((int)(nlRand()) % (int)v0_3)) != 0;
    if (v0_0) goto L_C10BFF8;
    v0_1 = 0x8D;
    v0_1 = 0x8D;
    L_C10C00C:;
    v0_0 = ((FUN_0c117944(v0_1)));
    goto L_C10C012;
    L_C10BFF8:;
    v0_0 = (*(int *)((0xC290C70 + (((int)((int)(nlRand()) % (int)0x9)) << 2))));
    v0_1 = v0_0;
    v0_1 = v0_0;
    goto L_C10C00C;
    L_C10BFB4:;
    if (((int)v0_2 < (int)0x3C)) goto L_C10BFD6;
    v0_0 = ((int)((int)(nlRand()) % (int)v0_3)) != 0;
    if (v0_0) goto L_C10BFF8;
    v0_1 = 0x8B;
    v0_1 = 0x8B;
    goto L_C10C00C;
    L_C10BFD6:;
    if (((int)v0_2 < (int)0x1E)) goto L_C10BFF8;
    v0_0 = ((int)((int)(nlRand()) % (int)v0_3)) != 0;
    if (v0_0) goto L_C10BFF8;
    v0_1 = 0x8A;
    v0_1 = 0x8A;
    goto L_C10C00C;
}
