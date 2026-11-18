/* game/menu/option: functions 0C158DC8-0C15A0F2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o34_float { char p[0x34]; float v; };
struct o46C_int { char p[0x46C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_uchar { char p[0x6C]; unsigned char v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o748_float { char p[0x748]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int, int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c15a104(int, int, int, int, int, int, int, int);
int nlCalcPoint(int, int);
int FUN_0c17b1a0(int);
int nlSelectMatrixStack(int);
int FUN_0c17c130(int, int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
int FUN_0c158dc8(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_0c158f5a(int a4, int a5, int a6, int a7);

int FUN_0c158dc8(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[6];

    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_6 = a7;
    *(unsigned char *)(((int)stk + 16)) = v0_6;
    v0_6 = *(signed char *)(((((short)(signed char)v0_0 * (short)0x3938) + 0xC532498) + 0x371A));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((((((struct o46C_int *)((*(int *)0xC4B40CC)))->v)) + 0x0)));
    v0_2 = ((signed char)v0_3);
    v0_5 = (v0_6);
    v0_1 = ((((short)(signed char)v0_0 * (short)0x3938) + 0xC532498));
    v0_7 = ((v0_6 * 0x2D0));
    v0_6 = (((((((signed char)v0_4 << 2) << 1) + (signed char)v0_4) << 2) << 2));
    if (((signed char)v0_3 == 0)) goto L_C158E1E;
    if ((v0_2 == 1)) goto L_C158E2C;
    if ((v0_2 == 2)) goto L_C158E3C;
    if ((v0_2 == 3)) goto L_C158E46;
    if ((v0_2 == 4)) goto L_C158E50;
    L_C158E9C:;
    return v0_2;
    L_C158E50:;
    v0_2 = ((((0x3168 + v0_1) + v0_7) + v0_6));
    L_C158E58:;
    *(int *)((int)stk + 12) = a11;
    *(int *)((int)stk + 8) = a10;
    *(int *)((int)stk + 4) = ((signed char)(a9 >> 0));
    *(int *)((int)stk + 0) = ((short)(a8 >> 0));
    v0_3 = FUN_0c15a104(v0_0, (v0_2 + 0x28), (*(int *)(((int)stk + 20))), ((((*(signed char *)(((int)stk + 16))) << 2) << 2) + 0xC203544), ((short)(a8 >> 0)), ((signed char)(a9 >> 0)), a10, a11);
    v0_2 = (v0_3);
    v0_0 = (v0_3);
    if ((v0_3 == 0)) goto L_C158E9C;
    (((struct o20_ushort *)(v0_0))->v) = (unsigned char)(*(signed char *)((((((struct o118_int *)(v0_1))->v)) + 0x82)));
    *(unsigned int *)((v0_0 + 0x4)) = 0xC158ED4;
    v0_2 = (0x20);
    goto L_C158E9C;
    L_C158E46:;
    v0_2 = ((((0x2BC8 + v0_1) + v0_7) + v0_6));
    goto L_C158E58;
    L_C158E3C:;
    v0_2 = ((((0x2628 + v0_1) + v0_7) + v0_6));
    goto L_C158E58;
    L_C158E2C:;
    v0_2 = ((((v0_5 * 0x10E0) + (0x468 + v0_1)) + v0_6));
    goto L_C158E58;
    L_C158E1E:;
    v0_2 = ((*(int *)(((((signed char)v0_4 << 2) + (0xC4 + v0_1)) + 0x0))));
    goto L_C158E58;
}

