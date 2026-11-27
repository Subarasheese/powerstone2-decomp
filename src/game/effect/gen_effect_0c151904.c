/* game/effect: functions 0C151904-0C1524CE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_short { char p[0x7C]; short v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int nlRand(void);
int FUN_0c187798(int);
int memset(int, int, int);
int FUN_0c151904(int a4, int a5);
void FUN_0c1519ae(void);
int FUN_0c151cae(int a4, int a5, int a6, int a7);
int FUN_0c151fd2(int a4);
int FUN_0c152246(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);


void FUN_0c1519ae(void)
{
    
}


int FUN_0c151fd2(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R8;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_3 = a4;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_3 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (v0_3 + 0x28));
    v0_4 = *(signed char *)((v0_3 + 0x14));
    v0_1 = (v0_4);
    v0_0 = (v0_3);
    v0_2 = (0x4);
    if ((v0_4 == 0)) goto L_C152010;
    if ((v0_1 == 1)) goto L_C15202C;
    if ((v0_1 != 2)) goto L_C152004;
    L_C15211A:;
    return FUN_0c03f346(v0_0, v0_2, R6, R7);
    L_C152004:;
    if ((v0_1 != 3)) goto L_C15200C;
    goto L_C15211A;
    L_C15200C:;
    L_C152124:;
    return v0_1;
    L_C15202C:;
    v0_3 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_3 - 1);
    v0_1 = (0x20);
    if (((short)(v0_3 - 1) != 0)) goto L_C152056;
    *(unsigned short *)((v0_0 + v0_1)) = v0_2;
    (((struct o22_ushort *)(v0_0))->v) = (((((struct o22_short *)(v0_0))->v)) ^ 0x1);
    FUN_0c03744a(((((struct oC4_int *)(v0_0))->v)), ((((struct o22_short *)(v0_0))->v)), 0x10, (*(int *)0xC4B40CC));
    L_C152056:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C152094;
    if ((v0_1 == 1)) goto L_C1520C6;
    if ((v0_1 == 2)) goto L_C1520EE;
    goto L_C152124;
    L_C1520EE:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C152102;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C152102:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    (((struct o14_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = ((float)v0_2 / 16.0f);
    v0_1 = (0x14);
    FPUL_ = (v0_2);
    goto L_C152124;
    L_C1520C6:;
    (((struct o14_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = 1.0f;
    v0_2 = *(signed char *)((0xC535BAD + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938)));
    v0_1 = (v0_2);
    if ((v0_2 == 17)) goto L_C152124;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x10;
    v0_1 = (0x10);
    goto L_C152124;
    L_C152094:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    w0_0 = (8.0f);
    FPUL_ = ((short)(v0_1 + 0x1));
    if ((8.0f > (float)(short)(v0_1 + 0x1))) goto L_C1520B0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C1520B0:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    (((struct o14_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = ((float)v0_2 / w0_0);
    v0_1 = (0x14);
    FPUL_ = (v0_2);
    goto L_C152124;
    L_C152010:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x0;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x78;
    (((struct o20_ushort *)(v0_0))->v) = v0_2;
    (((struct o22_ushort *)(v0_0))->v) = 0x0;
    v0_3 = (0x0);
    goto L_C15202C;
}



