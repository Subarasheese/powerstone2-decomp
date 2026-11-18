/* game/unsorted: functions 0C0F0AD8-0C0F0CE8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c187798(void);
int FUN_0c0f0ad8(int a4);
int FUN_0c0f0b3e(int a4, int a5, int a6);
int FUN_0c0f0c5e(int a4);


int FUN_0c0f0b3e(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R10;
    register int R12;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F0B4E;
    if ((v0_1 == 1)) goto L_C0F0B68;
    return FUN_0c03f346(v0_0, R5, a6, R7);
    L_C0F0B68:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F0B7C;
    if ((v0_1 == 1)) goto L_C0F0B88;
    if (!((v0_1 == 2))) goto L_C0F0C5A;
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0F0C14;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0F0C14;
    L_C0F0C5A:;
    return v0_1;
    L_C0F0C14:;
    w0_0 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_0 + 0.150000006f);
    (((struct o40_float *)(v0_0))->v) = (w0_0 + 0.150000006f);
    w0_0 = *(float *)0xC0F0CF4;
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) - w0_0);
    (((struct oBC_float *)(v0_0))->v) = (((((struct oBC_float *)(v0_0))->v)) - w0_0);
    w0_0 = (((struct oBC_float *)(v0_0))->v);
    w0_1 = (w0_0);
    w0_1 = (0.0f);
    FPUL_ = (0x3E19999A);
    if ((w0_0 > 0.0f)) goto L_C0F0C46;
    (((struct oBC_float *)(v0_0))->v) = w0_1;
    L_C0F0C46:;
    w0_0 = (((struct oBC_float *)(v0_0))->v);
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    v0_1 = (0xB4);
    goto L_C0F0C5A;
    L_C0F0B88:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0F0BBE;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x14;
    (((struct o12A_ushort *)(v0_0))->v) = 0x0;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oB4_float *)(v0_0))->v) = 1.0f;
    (((struct oB8_float *)(v0_0))->v) = 1.0f;
    (((struct oBC_float *)(v0_0))->v) = 1.0f;
    L_C0F0BBE:;
    w0_0 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_0 + 0.166666672f);
    (((struct o44_float *)(v0_0))->v) = (w0_0 + 0.166666672f);
    (((struct o40_float *)(v0_0))->v) = (w0_0 + 0.166666672f);
    v0_1 = (0x40);
    FPUL_ = (0x3E2AAAAB);
    goto L_C0F0C5A;
    L_C0F0B7C:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x1E;
    goto L_C0F0B88;
    L_C0F0B4E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct o2C_float *)(v0_0))->v) = 8000.0f;
    *(unsigned int *)((v0_0 + 0x38)) = 0x4000;
    goto L_C0F0B68;
}



