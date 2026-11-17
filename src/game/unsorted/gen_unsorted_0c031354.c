/* game/unsorted: functions 0C031354-0C0313DA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c031354(int a4, int a5, int a6, int a7);

int FUN_0c031354(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (0x1);
    if ((v0_3 == 0)) goto L_C031366;
    if ((v0_1 == 1)) goto L_C031374;
    return FUN_0c03f346(v0_0, v0_2, a6, a7);
    L_C031374:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C031390;
    if ((v0_1 == 1)) goto L_C0313AC;
    if ((v0_1 == 2)) goto L_C0313C2;
    if ((v0_1 == 3)) goto L_C0313C2;
    if (!((v0_1 == 4))) goto L_C0313D6;
    v0_1 = (0x14);
    goto L_C0313C8;
    L_C0313D6:;
    return v0_1;
    L_C0313C8:;
    *(unsigned char *)((v0_0 + v0_1)) = ((*(signed char *)((v0_0 + v0_1))) + 0x1);
    goto L_C0313D6;
    L_C0313C2:;
    v0_1 = (0x15);
    goto L_C0313C8;
    L_C0313AC:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C0313D6;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C0313D6;
    L_C031390:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C0313AC;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C0313AC;
    L_C031366:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C031374;
}
