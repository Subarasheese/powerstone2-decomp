/* game/unsorted: functions 0C16D1EC-0C16D2B4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
extern int FUN_0c03f346();
int FUN_0c059df2(int, int);
int FUN_0c17c130(int, int, int);
float FUN_0c0e2220(int, int);
float FUN_0c17c450(int);
int FUN_0c187798(int, int);
int FUN_0c16d1ec(int a4, int a5, int a6);

int FUN_0c16d1ec(int a4, int a5, int a6)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_4 = *(signed char *)((v0_3 + 0x14));
    v0_5 = (v0_4);
    v0_2 = (v0_3);
    if ((v0_4 == 0)) goto L_C16D208;
    if ((v0_5 == 1)) goto L_C16D216;
    if ((v0_5 == 2)) goto L_C16D2AC;
    L_C16D2AC:;
    return v0_5;
    L_C16D216:;
    if (((*(signed char *)((v0_2 + 0x131))) != 0)) goto L_C16D28E;
    if (((*(signed char *)((v0_2 + 0x132))) != 0)) goto L_C16D28E;
    if ((((((struct o404_int *)(v0_2))->v)) == 0)) goto L_C16D282;
    v0_4 = ((int (*)(int, int, int))(FUN_0c187798))(v0_3, v0_0, v0_1);
    v0_4 = (FUN_0c17c450((((int)stk + 0) + 0xC))) == 0.0f;
    if (v0_4) goto L_C16D282;
    v0_3 = ((int (*)(int, int, int))(FUN_0c187798))(v0_3, v0_0, v0_1);
    v0_3 = (FUN_0c17c450(((int)stk + 0))) == 0.0f;
    if (v0_3) goto L_C16D282;
    v0_3 = !((*(float *)0xC16D2E8) > (FUN_0c0e2220((((int)stk + 0) + 0xC), ((int)stk + 0))));
    if (v0_3) goto L_C16D282;
    FUN_0c059df2((*(signed char *)((v0_2 + 0x1))), 0x4B);
    L_C16D28E:;
    return (((int (*)(int, int, int))(FUN_0c03f346))(v0_2, v0_0, v0_1));
    L_C16D282:;
    v0_3 = *(short *)((v0_2 + 0x1C));
    *(unsigned short *)((v0_2 + 0x1C)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C16D29C;
    goto L_C16D28E;
    L_C16D29C:;
    v0_5 = ((FUN_0c17c130((v0_2 + 0x28), (v0_2 + 0x28), (v0_2 + 0x4C))));
    goto L_C16D2AC;
    L_C16D208:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_2))->v) = 0x1;
    goto L_C16D216;
}
