/* game/unsorted: functions 0C0D9914-0C0D99EA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0d9914(int a4, int a5, int a6, int a7);

int FUN_0c0d9914(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_1 = (0x1);
    if (((int)(*(signed char *)0xC54223C) <= (int)0x1)) goto L_C0D9924;
    return FUN_0c03f346(v0_0, v0_1, a6, a7);
    L_C0D9924:;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0D9944;
    if ((v0_2 == 1)) goto L_C0D9954;
    if ((v0_2 == 2)) goto L_C0D9964;
    if ((v0_2 == 3)) goto L_C0D998A;
    if ((v0_2 == 4)) goto L_C0D999C;
    if (!((v0_2 == 5))) goto L_C0D99E6;
    v0_1 = (0x666);
    if (((*(signed char *)((v0_0 + 0x2))) == 0)) goto L_C0D99C6;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_2))->v) = (((((struct o7C_int *)(v0_2))->v)) + v0_1);
    goto L_C0D99D2;
    L_C0D99E6:;
    return v0_2;
    L_C0D99D2:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((short)(v0_1 - 1) != 0)) goto L_C0D99E6;
    L_C0D99DE:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    goto L_C0D99E6;
    L_C0D99C6:;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_2))->v) = (((((struct o7C_int *)(v0_2))->v)) - v0_1);
    goto L_C0D99D2;
    L_C0D999C:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((short)(v0_1 - 1) != 0)) goto L_C0D99E6;
    v0_2 = (0xA);
    L_C0D99AA:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    goto L_C0D99DE;
    L_C0D998A:;
    v0_2 = (0xC472AAC);
    if (((int)((((struct o0_int *)0xC472AA8)->v)) < (int)((((struct o4_int *)0xC472AA8)->v)))) goto L_C0D99E6;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1E;
    goto L_C0D99DE;
    L_C0D9964:;
    v0_1 = (0x16C);
    if (((*(signed char *)((v0_0 + 0x2))) == 0)) goto L_C0D997C;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_2))->v) = (((((struct o7C_int *)(v0_2))->v)) - v0_1);
    goto L_C0D99D2;
    L_C0D997C:;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_2))->v) = (((((struct o7C_int *)(v0_2))->v)) + v0_1);
    goto L_C0D99D2;
    L_C0D9954:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((short)(v0_1 - 1) != 0)) goto L_C0D99E6;
    v0_2 = (0x2D);
    goto L_C0D99AA;
    L_C0D9944:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    *(unsigned short *)((v0_0 + 0x1C)) = 0xC03;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0D9954;
}
