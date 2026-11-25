/* Straight-line functions with calls and guards (batch gen_aby): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
extern int FUN_0c0cff96();
int FUN_0c0d04c4(int, int);
int FUN_0c0d1e00(int a4);

int FUN_0c0d1e00(int a4)
{

    register int R2;
    register int R3;
    register int R11;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_2 = R13;
    v0_3 = R12;
    v0_4 = R11;
    v0_1 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_1);
    v0_0 = (v0_0);
    if ((v0_1 == 0)) goto L_C0D1E1C;
    if ((v0_2 == 1)) goto L_C0D1E5A;
    L_C0D1E9E:;
    return v0_2;
    L_C0D1E5A:;
    v0_1 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_1);
    R12 = (0xC0CFF96);
    R13 = (0xC1C7AA0);
    if ((v0_1 == 0)) goto L_C0D1E6E;
    if ((v0_2 == 1)) goto L_C0D1E72;
    v0_1 = ((int (*)(int, int))(FUN_0c0cff96))((*(int *)((((((struct oC4_int *)(v0_0))->v)) + 0x8))), (R13 + 0x30));
    v0_2 = (v0_1);
    L_C0D1E8E:;
    v0_1 = (*(signed char *)0xC54223C) == 0;
    if (v0_1) goto L_C0D1E9E;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (0x15);
    goto L_C0D1E9E;
    L_C0D1E72:;
    v0_1 = ((R13 + 0x18));
    L_C0D1E76:;
    v0_1 = ((int (*)(int, int))(FUN_0c0cff96))((*(int *)((((((struct oC4_int *)(v0_0))->v)) + 0x8))), v0_1);
    v0_2 = (v0_1);
    goto L_C0D1E8E;
    L_C0D1E6E:;
    v0_1 = (R13);
    goto L_C0D1E76;
    L_C0D1E1C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    FUN_0c0d04c4((0xAC + v0_0), (v0_0 + 0x34));
    R11 = (0xC0D04C4);
    R13 = (0x0);
    L_C0D1E52:;
    v0_1 = (int)R13 < (int)((((struct oC0_int *)(v0_0))->v));
    if (v0_1) goto L_C0D1E3A;
    goto L_C0D1E5A;
    L_C0D1E3A:;
    v0_1 = *(int *)((((R13 << 2) + (0xC4 + v0_0)) + 0x0));
    FUN_0c0d04c4((v0_1 + 0x6), (v0_1 + 0x78));
    R13 = ((R13 + 0x1));
    goto L_C0D1E52;
}
