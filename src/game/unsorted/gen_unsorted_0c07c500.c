/* game/unsorted: functions 0C07C500-0C07C5A0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
int FUN_0c065b96(int, int, int, int, float);
int FUN_0c067784(void);
int FUN_0c07eaf4(int, int, int, int);
int FUN_0c07c500(int a4);
int FUN_0c07c50e(int a4, int a5, int a6);

int FUN_0c07c500(int a4)
{
    (((struct o3714_uchar *)(a4))->v) = 0x0;
    (((struct o3840_ushort *)(a4))->v) = 0x0;
    return FUN_0c067784();
}

int FUN_0c07c50e(int a4, int a5, int a6)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R8;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_3 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_4 = *(signed char *)((v0_3 + 0x3721));
    v0_0 = (v0_3);
    v0_3 = (v0_4);
    if (((unsigned char)v0_4 == 0)) goto L_C07C538;
    if (((unsigned char)v0_3 == 0)) goto L_C07C594;
    if ((((*(signed char *)((0xC2738CD + ((unsigned short)(unsigned char)v0_3 * (unsigned short)0x34)))) & 1) != 0)) goto L_C07C594;
    L_C07C538:;
    if (((*(signed char *)((v0_0 + 0x371D))) != 0)) goto L_C07C594;
    if (((*(signed char *)((v0_0 + 0x3726))) != 0)) goto L_C07C594;
    if ((((unsigned short)((((struct o430_short *)(v0_0))->v)) & 0x100) == 0)) goto L_C07C594;
    if ((((unsigned short)((((struct o42C_short *)(v0_0))->v)) & 0x3C00) == 0)) goto L_C07C594;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_3 = *(int *)((0xC5413E8 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8)));
    v0_1 = FUN_0c07eaf4(v0_0, v0_1, v0_2, ((int)stk + 4));
    v0_1 = (FUN_0c065b96(v0_0, (v0_3 + v0_1), 0x4000, ((int)stk + 4), 0.0f)) == 0;
    if (v0_1) goto L_C07C594;
    (((struct o3850_uint *)(v0_0))->v) = (*(int *)(((int)stk + 4)));
    v0_0 = (0x1);
    L_C07C596:;
    return v0_0;
    L_C07C594:;
    v0_0 = (0x0);
    goto L_C07C596;
}
