/* game/unsorted: functions 0C0EB110-0C0EB1EC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0eb110(int a4);

int FUN_0c0eb110(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_3);
    v0_1 = (0x0);
    if ((v0_3 == 0)) goto L_C0EB122;
    if ((v0_2 == 1)) goto L_C0EB146;
    return FUN_0c03f346(v0_0, v0_1, R6, R7);
    L_C0EB146:;
    R6 = (0xC540978);
    R7 = ((*(signed char *)0xC54098D));
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C0EB194;
    if (((int)R7 < (int)0x4)) goto L_C0EB180;
    v0_2 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_2 + 0x1);
    if (((int)(short)(v0_2 + 0x1) < (int)0x3C)) goto L_C0EB180;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) ^ 0x1);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) ^ 0x1);
    L_C0EB180:;
    v0_3 = *(signed char *)((R6 + 0x15));
    v0_2 = (0x15);
    v0_1 = (v0_3);
    if (((int)v0_3 < (int)0x7)) goto L_C0EB1E8;
    if (((int)v0_1 <= (int)0xE)) goto L_C0EB1D8;
    L_C0EB1E8:;
    return v0_2;
    L_C0EB1D8:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    goto L_C0EB1E8;
    L_C0EB194:;
    if (((int)R7 < (int)0x9)) goto L_C0EB1C8;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    v0_2 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_2 + 0x1);
    if (((int)(short)(v0_2 + 0x1) < (int)0x3C)) goto L_C0EB1C8;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) ^ 0x1);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) ^ 0x1);
    L_C0EB1C8:;
    v0_3 = *(signed char *)((R6 + 0x15));
    v0_2 = (0x15);
    v0_1 = (v0_3);
    if (((int)v0_3 < (int)0xC)) goto L_C0EB1E8;
    if (((int)v0_1 > (int)0xE)) goto L_C0EB1E8;
    goto L_C0EB1D8;
    L_C0EB122:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0x1;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = v0_1;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    goto L_C0EB146;
}
