/* game/unsorted: functions 0C0EF0CC-0C0EFB26, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c0ef0cc(int);
int FUN_0c0ef102(int);
int FUN_0c0ef162(int, int, int);
int FUN_0c0ef1d8(int, int);
int FUN_0c0ef24a(int);
int FUN_0c0ef70e(int);
int FUN_0c0ef828(int a4, int a5, int a6);

int FUN_0c0ef828(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R11;
    register int R12;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    v0_3 = a6;
    v0_4 = *(signed char *)((v0_1 + 0x15));
    v0_2 = (v0_4);
    v0_0 = (v0_1);
    v0_1 = (0x0);
    if ((v0_4 == 0)) goto L_C0EF854;
    if ((v0_2 == 1)) goto L_C0EF868;
    if ((v0_2 == 2)) goto L_C0EF8D6;
    if ((v0_2 == 3)) goto L_C0EF8FA;
    FUN_0c0ef1d8(v0_0, a5);
    L_C0EF90A:;
    return FUN_0c0ef0cc(v0_0);
    L_C0EF8FA:;
    FUN_0c0ef162(v0_0, 0x0, v0_3);
    FUN_0c0ef102(v0_0);
    goto L_C0EF90A;
    L_C0EF8D6:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0EF8EE;
    (((struct o15_uchar *)(v0_0))->v) = 0x63;
    (((struct o16_uchar *)(v0_0))->v) = v0_1;
    L_C0EF8F2:;
    return FUN_0c0ef102(v0_0);
    L_C0EF8EE:;
    FUN_0c0ef70e(v0_0);
    goto L_C0EF8F2;
    L_C0EF868:;
    v0_3 = *(signed char *)((v0_0 + 0x16));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0EF878;
    if ((v0_2 == 1)) goto L_C0EF88C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_0))->v) = v0_1;
    (((struct o12A_ushort *)(v0_0))->v) = 0xF;
    (((struct o12C_ushort *)(v0_0))->v) = 0xFFFFFFEF;
    L_C0EF8CE:;
    return FUN_0c0ef24a(v0_0);
    L_C0EF88C:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0EF8CE;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o50_float *)(v0_0))->v) = 0.0f;
    goto L_C0EF8CE;
    L_C0EF878:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x1E;
    (((struct o50_float *)(v0_0))->v) = (1.0f + 1.0f);
    goto L_C0EF88C;
    L_C0EF854:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1A4;
    (((struct o5C_float *)(v0_0))->v) = -1.0f;
    goto L_C0EF868;
}
