/* game/unsorted: functions 0C094AD4-0C095114, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c094c48(int a4, int a5, int a6, int a7);
int FUN_0c094fd8(int a4, int a5, int a6, int a7);

int FUN_0c094c48(int a4, int a5, int a6, int a7)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    v0_1 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = a7;
    (((struct o2C_float *)(v0_1))->v) = (((((struct o2C_float *)(v0_1))->v)) + -0.100000001f);
    v0_0 = (v0_1);
    FPUL_ = (0xBDCCCCCD);
    if (((*(short *)((v0_1 + 0x1C))) == 0)) goto L_C094C86;
    v0_1 = (unsigned char)(FUN_0c037bf6(v0_0, v0_3, v0_4)) != 0;
    if (v0_1) goto L_C094CB2;
    v0_2 = ((FUN_0c038362(v0_0)));
    L_C094E12:;
    return v0_2;
    L_C094CB2:;
    v0_2 = ((FUN_0c085d0c(v0_0, v0_3, v0_4, v0_5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28))));
    goto L_C094E12;
    L_C094C86:;
    v0_2 = (0x3770);
    if ((((((struct o3770_int *)(v0_0))->v)) == 0)) goto L_C094CB2;
    v0_1 = *(int *)((v0_0 + v0_2));
    (((struct o3830_ushort *)(v0_1))->v) = (((((struct o12E_short *)(v0_1))->v)) ^ 0xF);
    (((struct o374B_uchar *)(((((struct o3770_int *)(v0_0))->v))))->v) = 0x1;
    v0_2 = (unsigned char)(FUN_0c037bf6(v0_0, v0_3, v0_4)) == 0;
    v0_1 = (0x1);
    if (v0_2) goto L_C094CBC;
    goto L_C094CB2;
    L_C094CBC:;
    FUN_0c038362(v0_0);
    v0_2 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_2 - 1);
    if (((short)(v0_2 - 1) != 0)) goto L_C094CD6;
    (((struct o445_uchar *)(((((struct o3770_int *)(v0_0))->v))))->v) = v0_1;
    L_C094CD6:;
    w0_0 = (((struct o8C_float *)(((((struct o118_int *)(v0_0))->v))))->v);
    v0_2 = ((int)w0_0);
    v0_3 = (0xC14F238);
    v0_3 = (0xC073566);
    v0_3 = (0xC059E60);
    v0_3 = (0xC0584AA);
    v0_3 = (0xC059DAE);
    FPUL_ = ((int)w0_0);
    if (((int)w0_0 == 35)) goto L_C094D56;
    if ((v0_2 == 47)) goto L_C094D4C;
    if ((v0_2 == 59)) goto L_C094D10;
    if ((v0_2 == 71)) goto L_C094D4C;
    if ((v0_2 == 83)) goto L_C094D56;
    if ((v0_2 == 95)) goto L_C094D8C;
    if ((v0_2 == 118)) goto L_C094DC8;
    if ((v0_2 == 125)) goto L_C094DD2;
    goto L_C094E12;
    L_C094DD2:;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), ((int)stk + 0));
    FUN_0c14f238(((int)stk + 0), (v0_0 + 0x34), (*(signed char *)((v0_0 + 0x1))), 0x1);
    FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(v0_0))->v)) + 0x1))), 0x3);
    FUN_0c073566(v0_0, 0x32);
    FUN_0c07363a(v0_0, 0x32);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    v0_2 = (v0_1);
    goto L_C094E12;
    L_C094DC8:;
    v0_2 = ((FUN_0c059e60(v0_0, 0x2)));
    goto L_C094E12;
    L_C094D8C:;
    FUN_0c059e60(v0_0, 0x0);
    L_C094D92:;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), ((int)stk + 0));
    FUN_0c14f238(((int)stk + 0), (v0_0 + 0x34), (*(signed char *)((v0_0 + 0x1))), 0x1);
    FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(v0_0))->v)) + 0x1))), 0x2);
    v0_3 = (0x31);
    L_C094DC0:;
    v0_2 = ((FUN_0c073566(v0_0, v0_3)));
    goto L_C094E12;
    L_C094D56:;
    FUN_0c059e60(v0_0, 0x0);
    L_C094D5C:;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), ((int)stk + 0));
    FUN_0c14f238(((int)stk + 0), (v0_0 + 0x34), (*(signed char *)((v0_0 + 0x1))), 0x1);
    FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(v0_0))->v)) + 0x1))), 0x2);
    v0_3 = (0x30);
    goto L_C094DC0;
    L_C094D4C:;
    FUN_0c059e60(v0_0, 0x0);
    goto L_C094D92;
    L_C094D10:;
    FUN_0c059e60(v0_0, 0x0);
    goto L_C094D5C;
}

int FUN_0c094fd8(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t3;
    register int t9;
    register int t12;
    register float u18;
    register int t46;

    if (((((struct o3770_int *)(a4))->v)) != 0) {
        if ((*(short *)((a4 + 0x1C))) != 0) {
            t3 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t3 == 0) {
                t46 = (FUN_0c038362(a4));
            } else {
                t46 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            }
        } else {
            (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
            t9 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t9 != 0) {
                t46 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            } else {
                FUN_0c038362(a4);
                t12 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t12 - 1);
                if ((short)(t12 - 1) == 0) {
                    (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
                }
                u18 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
                t46 = (int)u18;
                if ((int)u18 == 34) {
                    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532598))) + 0x28), ((int)stk + 0));
                    FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
                    FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x3);
                    FUN_0c073566(a4, 0x33);
                    FUN_0c07363a(a4, 0x35);
                    *(unsigned short *)((a4 + 0x1C)) = 0x1;
                    t46 = 0x1;
                }
            }
        }
    } else {
        t46 = (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    return t46;
}
