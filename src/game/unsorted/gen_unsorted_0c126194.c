/* game/unsorted: functions 0C126194-0C12634A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c126194(int a4);
int FUN_0c126220(int a4, int a5, int a6);


int FUN_0c126220(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R10;
    register int R12;
    register int R13;
    register int R14;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C126238;
    if ((v0_1 == 1)) goto L_C126246;
    if ((v0_1 != 2)) goto L_C126234;
    return FUN_0c03f346(v0_0, R5, a6, R7);
    L_C126234:;
    L_C126346:;
    return v0_1;
    L_C126246:;
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) + 0.100000001f);
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    R5 = (0x6);
    w0_0 = (0.100000001f);
    if ((v0_2 == 0)) goto L_C12626C;
    if ((v0_1 == 1)) goto L_C12627A;
    if ((v0_1 == 2)) goto L_C1262C8;
    if ((v0_1 == 3)) goto L_C1262EE;
    goto L_C126346;
    L_C1262EE:;
    (((struct oB4_float *)(v0_0))->v) = (((((struct oB4_float *)(v0_0))->v)) - 0.0500000007f);
    w0_1 = (((struct oB4_float *)(v0_0))->v);
    v0_1 = (0xB4);
    w0_2 = (w0_1);
    w0_2 = (0.0f);
    FPUL_ = (0x3D4CCCCD);
    if ((!(0.0f > w0_1))) goto L_C126306;
    *(float *)((v0_0 + v0_1)) = w0_2;
    L_C126306:;
    w0_1 = *(float *)((v0_0 + v0_1));
    *(float *)((v0_0 + (v0_1 + 0x8))) = w0_1;
    *(float *)((v0_0 + ((v0_1 + 0x8) - 4))) = w0_1;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) - w0_0);
    v0_1 = (0x40);
    w0_1 = (0.200000003f);
    if ((!(0.200000003f > ((((struct o40_float *)(v0_0))->v))))) goto L_C126326;
    *(float *)((v0_0 + v0_1)) = w0_1;
    L_C126326:;
    w0_2 = (((struct o44_float *)(v0_0))->v);
    (((struct o44_float *)(v0_0))->v) = (w0_2 - w0_0);
    v0_1 = (0x44);
    if ((!(w0_1 > (w0_2 - w0_0)))) goto L_C126346;
    *(float *)((v0_0 + v0_1)) = w0_1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C126346;
    L_C1262C8:;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) - w0_0);
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) + w0_0);
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C126346;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C126346;
    L_C12627A:;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) + w0_0);
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C126346;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = R5;
    v0_1 = (R5);
    goto L_C126346;
    L_C12626C:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = R5;
    goto L_C12627A;
    L_C126238:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    goto L_C126246;
}


