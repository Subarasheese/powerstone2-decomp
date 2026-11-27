/* game/effect: functions 0C13E90C-0C140EE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_float { char p[0xC8]; float v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_float { char p[0xCC]; float v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlVoidUnitVector(int);
int FUN_0c187798(void);
int FUN_0c13eece(int a4, int a5);
int FUN_0c13ef5a(int a4, int a5, int a6, int a7);
int FUN_0c13f398(int a4);
int FUN_0c13f5dc(int a4, int a5);
int FUN_0c13f734(int a4, int a5);
int FUN_0c13f908(int a4, int a5);
int FUN_0c13fa88(int a4, int a5);
int FUN_0c13fc40(int a4, int a5);
int FUN_0c13ff3c(int a4, int a5);
int FUN_0c13ffc4(int a4, int a5, int a6);
int FUN_0c140130(int a4);
int FUN_0c1402c4(int a4);
int FUN_0c140b18(int a4, int a5);


int FUN_0c13ef5a(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register int R11;
    register int R12;
    register float F2;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_0 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    v0_6 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_6);
    v0_5 = (0x1);
    v0_0 = (v0_0);
    if ((v0_6 == 0)) goto L_C13EFAC;
    if ((v0_1 == 1)) goto L_C13EFEA;
    v0_1 = ((((int (*)(int, int, int, int))(FUN_0c03f346))(v0_0, v0_2, v0_3, v0_4)));
    L_C13F0E4:;
    return v0_1;
    L_C13EFEA:;
    if (((int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x14))) >= (int)0x2)) goto L_C13F002;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (!(((int)(short)(v0_1 - 1) > 0))) goto L_C13F002;
    if (((int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x15))) <= (int)v0_5)) goto L_C13F036;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)((*(int *)((v0_0 + 0x10)))))->v)) + 1.0f);
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)((*(int *)((v0_0 + 0x10)))))->v)) + 1.0f);
    v0_1 = (0x48);
    w0_0 = ((((((struct o48_float *)((*(int *)((v0_0 + 0x10)))))->v)) + 1.0f));
    goto L_C13F042;
    L_C13F002:;
    v0_1 = ((((int (*)(int, int, int, int))(FUN_0c03f346))(v0_0, v0_2, v0_3, v0_4)));
    goto L_C13F0E4;
    L_C13F042:;
    *(float *)((v0_0 + v0_1)) = w0_0;
    *(float *)(((int)stk + 0)) = (((((struct oC8_float *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8) + 0xC5410FC)))->v)) - ((((struct o28_float *)((*(int *)((v0_0 + 0x10)))))->v)));
    *(float *)(((int)stk + 4)) = (((((struct oCC_float *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8) + 0xC5410FC)))->v)) - ((((struct o2C_float *)((*(int *)((v0_0 + 0x10)))))->v)));
    *(float *)(((int)stk + 8)) = (((((struct oD0_float *)((0xC5410FC + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8))))->v)) - ((((struct o30_float *)((*(int *)((v0_0 + 0x10)))))->v)));
    nlVoidUnitVector(((int)stk + 0));
    w0_0 = ((((struct o28_float *)((*(int *)((v0_0 + 0x10)))))->v));
    w0_0 = w0_0 + 100.0f * (*(float *)(((int)stk + 0)));
    (((struct o28_float *)(v0_0))->v) = w0_0;
    w0_0 = ((((struct o2C_float *)((*(int *)((v0_0 + 0x10)))))->v));
    w0_0 = w0_0 + 100.0f * (*(float *)(((int)stk + 4)));
    (((struct o2C_float *)(v0_0))->v) = w0_0;
    w0_0 = ((((struct o30_float *)((*(int *)((v0_0 + 0x10)))))->v));
    w0_0 = w0_0 + 100.0f * (*(float *)(((int)stk + 8)));
    (((struct o30_float *)(v0_0))->v) = w0_0;
    v0_0 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_0))->v) = (((((struct o80_int *)(v0_0))->v)) + 0x11C7);
    v0_1 = (0x80);
    w0_0 = (100.0f);
    goto L_C13F0E4;
    L_C13F036:;
    (((struct o48_float *)(v0_0))->v) = 0.0f;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    v0_1 = (0x40);
    w0_0 = (0.0f);
    goto L_C13F042;
    L_C13EFAC:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x4B0;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    (((struct oAC_ushort *)(v0_0))->v) = 0x31;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    FUN_0c037498(((((struct oC4_int *)(v0_0))->v)), 0x0, 0xC, (*(int *)((((*(signed char *)((v0_0 + 0x1))) << 2) + 0xC4B40FC))));
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_5;
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0xF;
    goto L_C13EFEA;
}
















