/* game/effect: functions 0C152F08-0C15314A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o382A_short { char p[0x382A]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_uchar { char p[0x90]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c179ac0(void);
int FUN_0c152f08(int a4);
int FUN_0c152fa4(int a4);

int FUN_0c152f08(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x1, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC152FA4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1D, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        t2 = (((struct oC4_int *)(t0))->v);
        t0 = FUN_0c179ac0();
        t3 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
        if ((int)t0 >= 0) {
            t3 = (t0 & 0xF);
        }
        (((struct o80_uint *)(t2))->v) = (((t3 << 8) << 2) << 2);
        t1 = (((t3 << 8) << 2) << 2);
    }
    return t1;
}

int FUN_0c152fa4(int a4)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_2 = a4;
    v0_3 = *(int *)((v0_2 + 0x10));
    v0_1 = (0x2);
    v0_0 = (v0_2);
    v0_2 = (v0_3);
    if ((((((struct o382A_short *)(v0_3))->v)) == 0)) goto L_C152FD4;
    if (((unsigned char)(*(signed char *)((v0_2 + 0x3743))) != 96)) goto L_C152FD4;
    if (((*(signed char *)((v0_2 + 0xA8))) != 0)) goto L_C152FD8;
    L_C152FD4:;
    (((struct o14_uchar *)(v0_0))->v) = v0_1;
    L_C152FD8:;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_4 = (v0_3);
    v0_2 = (0x0);
    if ((v0_3 == 0)) goto L_C153010;
    if ((v0_4 == 1)) goto L_C15304A;
    if ((v0_4 != 2)) goto L_C152FEE;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C152FEE:;
    L_C153138:;
    return v0_4;
    L_C15304A:;
    v0_4 = (0xC4);
    v0_3 = (v0_2);
    if (((*(signed char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0))) == 0)) goto L_C153114;
    v0_7 = *(int *)((v0_0 + v0_4));
    v0_4 = thunk_FUN_0c058310(((*(int *)(((((*(signed char *)(((0x90 + v0_7) + 0x2))) << 2) + (0xC53255C + ((short)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (v0_0 + 0x28));
    v0_6 = *(signed char *)(((0x90 + v0_7) + 0x0));
    (((struct o90_uchar *)(v0_7))->v) = (v0_6 - 1);
    v0_4 = (v0_4);
    v0_3 = ((v0_3 + 0x1));
    v0_5 = (v0_7);
    v0_7 = ((0x90 + v0_7));
    if (((signed char)(v0_6 - 1) != 0)) goto L_C153114;
    *(unsigned char *)((v0_7 + 0x0)) = v0_1;
    v0_1 = *(signed char *)((v0_7 + 0x1));
    *(unsigned char *)((v0_7 + 0x1)) = (v0_1 + 0x1);
    if (((int)(signed char)(v0_1 + 0x1) >= (int)0x4)) goto L_C1530B0;
    v0_4 = ((FUN_0c037498(v0_5, (*(signed char *)((v0_7 + 0x1))), 0x1D, (*(int *)0xC4B40CC))));
    L_C153114:;
    if ((v0_3 != 0)) goto L_C153138;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    goto L_C153138;
    L_C1530B0:;
    v0_1 = *(signed char *)((v0_7 + 0x3));
    *(unsigned char *)((v0_7 + 0x3)) = (v0_1 - 1);
    v0_4 = ((signed char)(v0_1 - 1));
    if (((signed char)(v0_1 - 1) == 0)) goto L_C153112;
    *(unsigned char *)((v0_7 + 0x1)) = v0_2;
    FUN_0c037498(v0_5, (*(signed char *)((v0_7 + 0x1))), 0x1D, (*(int *)0xC4B40CC));
    *(unsigned int *)(((int)stk + 0)) = ((((struct o80_int *)(v0_5))->v));
    v0_1 = FUN_0c179ac0();
    v0_4 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C1530E4;
    v0_4 = ((v0_4 & 0xF));
    L_C1530EE:;
    (((struct o80_uint *)(v0_5))->v) = (((v0_4 << 8) << 2) << 2);
    v0_4 = (0x80);
    if ((((((struct o80_int *)(v0_5))->v)) != (*(int *)(((int)stk + 0))))) goto L_C153114;
    *(unsigned int *)((v0_5 + v0_4)) = (((*(int *)((v0_5 + v0_4))) + 0x4000) & 0xF000);
    goto L_C153114;
    L_C1530E4:;
    v0_4 = (((~(((~v0_4) + 0x1) & 0xF)) + 0x1));
    goto L_C1530EE;
    L_C153112:;
    *(unsigned char *)((v0_5 + 0x0)) = v0_2;
    goto L_C153114;
    L_C153010:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_3))->v) = 50.0f;
    *(unsigned char *)(((0x90 + v0_3) + 0x1)) = v0_2;
    (((struct o90_uchar *)(v0_3))->v) = v0_1;
    *(unsigned char *)(((0x90 + v0_3) + 0x2)) = (*(signed char *)0xC2A27C3);
    *(unsigned char *)(((0x90 + v0_3) + 0x3)) = 0xD;
    (((struct o8C_float *)(v0_3))->v) = (1.0f + 1.0f);
    (((struct o88_float *)(v0_3))->v) = (1.0f + 1.0f);
    (((struct o84_float *)(v0_3))->v) = (1.0f + 1.0f);
    goto L_C15304A;
}
