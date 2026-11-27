/* game/unsorted: functions 0C0EF0CC-0C0EFB26, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c0ef0cc(int);
int FUN_0c0ef102(int);
int FUN_0c0ef162(int, int, int);
int FUN_0c0ef1d8(int, int);
int FUN_0c0ef24a(int);
extern int FUN_0c0ef2e0();
extern int FUN_0c0ef368();
int FUN_0c0ef4aa(int, int, float);
int FUN_0c0ef912(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0ef560(int a4, int a5, int a6, float f4);
int FUN_0c0ef70e(int a4, int a5, int a6, float f4);
int FUN_0c0efa28(int a4, int a5, int a6);



int FUN_0c0efa28(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R11;
    register int R12;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_2 = a6;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_4 = (v0_3);
    v0_1 = (v0_0);
    v0_0 = (0x0);
    if ((v0_3 == 0)) goto L_C0EFA48;
    if ((v0_4 == 1)) goto L_C0EFA5C;
    if ((v0_4 == 2)) goto L_C0EFA74;
    if ((v0_4 == 3)) goto L_C0EFABC;
    FUN_0c0ef1d8(v0_1, a5);
    L_C0EFACC:;
    return FUN_0c0ef0cc(v0_1);
    L_C0EFABC:;
    FUN_0c0ef162(v0_1, 0x0, v0_2);
    L_C0EFAC0:;
    FUN_0c0ef102(v0_1);
    goto L_C0EFACC;
    L_C0EFA74:;
    v0_2 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0EFA8C;
    (((struct o15_uchar *)(v0_1))->v) = 0x63;
    (((struct o16_uchar *)(v0_1))->v) = v0_0;
    goto L_C0EFAC0;
    L_C0EFA8C:;
    FUN_0c0ef912(v0_1);
    goto L_C0EFAC0;
    L_C0EFA5C:;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_1))->v) = v0_0;
    (((struct o12A_ushort *)(v0_1))->v) = 0xF;
    (((struct o12C_ushort *)(v0_1))->v) = 0xFFFFFFEF;
    goto L_C0EFA74;
    L_C0EFA48:;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    *(unsigned short *)((v0_1 + 0x1C)) = 0x1A4;
    (((struct o5C_float *)(v0_1))->v) = -1.0f;
    goto L_C0EFA5C;
}
