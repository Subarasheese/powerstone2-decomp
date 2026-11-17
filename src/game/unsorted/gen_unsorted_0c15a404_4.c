/* game/unsorted: functions 0C15A404-0C15B40E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c15ae2e(int);
int FUN_0c15b320(int, int);
int FUN_0c187798(int, int);
int FUN_0c15b366(int a4, int a5, int a6, int a7, float f4);

int FUN_0c15b366(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = *(signed char *)((v0_1 + 0x14));
    v0_4 = (v0_3);
    v0_0 = (v0_1);
    w0_0 = (200.0f);
    if ((v0_3 == 0)) goto L_C15B38A;
    if ((v0_4 == 1)) goto L_C15B3AC;
    if ((v0_4 == 2)) goto L_C15B3BA;
    if ((v0_4 == 3)) goto L_C15B3E4;
    v0_4 = ((FUN_0c03f346(v0_0, v0_2, a6, a7)));
    L_C15B406:;
    return v0_4;
    L_C15B3E4:;
    if (((*(short *)((v0_0 + 0x1C))) != ((((struct o4_int *)0xC2A2AAC)->v)))) goto L_C15B3F8;
    L_C15B3EE:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    goto L_C15B406;
    L_C15B3F8:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_4 = ((v0_1 + 0x1));
    goto L_C15B406;
    L_C15B3BA:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x0;
    FUN_0c187798(v0_1, v0_2);
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + f4);
    FUN_0c15b320(((int)stk + 0), (v0_0 + 0x4C));
    goto L_C15B3E4;
    L_C15B3AC:;
    if (((*(short *)((v0_0 + 0x1C))) == ((((struct o0_int *)0xC2A2AAC)->v)))) goto L_C15B3EE;
    goto L_C15B3F8;
    L_C15B38A:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    FUN_0c187798(v0_1, v0_2);
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + f4);
    FUN_0c15ae2e(((int)stk + 0));
    goto L_C15B3AC;
}
