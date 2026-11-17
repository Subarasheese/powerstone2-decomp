/* game/unsorted: functions 0C127068-0C127290, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c12764c(int, int);
extern int FUN_0c187798();
int FUN_0c127068(int a4);
int FUN_0c12711e(int a4);

int FUN_0c127068(int a4)
{
    register int t0;
    register int t15;
    register int t1;
    register float u12;

    t0 = FUN_0c03f444(0x1, 0x0, 0x2);
    t15 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t1 << 2) + (0xC4 + t0)) + 0x0))), t1, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t1 = (t1 + 0x1);
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC12711E;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 300.0f);
        u12 = (((struct o0_float *)0xC1271B8)->v);
        (((struct o48_float *)(t0))->v) = u12;
        (((struct o44_float *)(t0))->v) = u12;
        (((struct o40_float *)(t0))->v) = u12;
        (((struct o70_float *)(((((struct oC8_int *)(t0))->v))))->v) = ((((struct o4_float *)0xC1271B8)->v));
        t15 = 0x70;
    }
    return t15;
}

int FUN_0c12711e(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R10;
    register int R12;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_2 = a4;
    v0_0 = (v0_2);
    if (((*(signed char *)((0x3715 + (*(int *)((v0_2 + 0x10)))))) == 20)) goto L_C127138;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C127138:;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (0x0);
    R5 = (0x1);
    if ((v0_3 == 0)) goto L_C12714C;
    if ((v0_1 == 1)) goto L_C127160;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C127160:;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    if ((((*(short *)((v0_0 + 0x1E))) & R5) == 0)) goto L_C127176;
    (((struct o7C_uint *)(((((struct oC8_int *)(v0_0))->v))))->v) = v0_2;
    L_C127180:;
    w0_0 = (0.200000003f);
    if ((((*(short *)((v0_0 + 0x1E))) & 2) == 0)) goto L_C1271C8;
    v0_1 = (0x40);
    w0_0 = ((((((struct o40_float *)(v0_0))->v)) + w0_0));
    L_C1271CE:;
    *(float *)((v0_0 + v0_1)) = w0_0;
    (((struct o48_float *)(v0_0))->v) = w0_0;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    v0_2 = (0x3);
    if ((v0_3 == 0)) goto L_C1271EA;
    if ((v0_1 == 1)) goto L_C127232;
    if (!((v0_1 == 2))) goto L_C12728A;
    w0_0 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_0 + 0.5f);
    (((struct o48_float *)(v0_0))->v) = (w0_0 + 0.5f);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    FPUL_ = (0x3F000000);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C12728A;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C12728A;
    L_C12728A:;
    return v0_1;
    L_C127232:;
    (((struct o70_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = 0.0f;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C12728A;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    v0_1 = (v0_2);
    goto L_C12728A;
    L_C1271EA:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - 30.0f);
    w0_0 = (((struct o2C_float *)(v0_0))->v);
    v0_1 = (0x2C);
    w0_1 = (w0_0);
    FPUL_ = (0x41F00000);
    if ((w0_0 > ((((struct o2C_float *)((*(int *)((v0_0 + 0x10)))))->v)))) goto L_C12728A;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o168_float *)(v0_0))->v) = ((((struct o2C_float *)((*(int *)((v0_0 + 0x10)))))->v));
    FUN_0c12764c(v0_0, 0x0);
    return FUN_0c059e9a((*(int *)((v0_0 + 0x10))), 0x20, (v0_0 + 0x28));
    L_C1271C8:;
    v0_1 = (0x40);
    w0_0 = ((((((struct o40_float *)(v0_0))->v)) - w0_0));
    goto L_C1271CE;
    L_C127176:;
    (((struct o7C_uint *)(((((struct oC8_int *)(v0_0))->v))))->v) = 0x4000;
    goto L_C127180;
    L_C12714C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = R5;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_2;
    goto L_C127160;
}
