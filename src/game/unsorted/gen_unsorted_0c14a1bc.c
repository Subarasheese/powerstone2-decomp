/* game/unsorted: functions 0C14A1BC-0C14A308, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c14a1bc(int a4);
int FUN_0c14a23c(int a4, int a5, int a6);


int FUN_0c14a23c(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R10;
    register int R12;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (0x1);
    if ((v0_3 == 0)) goto L_C14A24E;
    if ((v0_1 == 1)) goto L_C14A260;
    L_C14A304:;
    return v0_1;
    L_C14A260:;
    if (((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x1B))) == 0)) goto L_C14A2FE;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C14A282;
    if ((v0_1 == 1)) goto L_C14A290;
    if ((v0_1 == 2)) goto L_C14A2AA;
    if ((v0_1 == 3)) goto L_C14A2E8;
    goto L_C14A304;
    L_C14A2E8:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - 0.0500000007f);
    w0_0 = (((struct oB0_float *)(v0_0))->v);
    v0_1 = (0xB0);
    w0_1 = (w0_0);
    FPUL_ = (0x3D4CCCCD);
    if ((w0_0 > 0.0f)) goto L_C14A304;
    L_C14A2FE:;
    return FUN_0c03f346(v0_0, v0_2, a6, R7);
    L_C14A2AA:;
    v0_1 = (0x1B);
    if (((int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x1B))) <= (int)v0_2)) goto L_C14A304;
    L_C14A2B4:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C14A304;
    L_C14A290:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) + 0.0166666675f);
    v0_1 = (0xB0);
    w0_0 = (1.0f);
    FPUL_ = (0x3C888889);
    if ((1.0f > ((((struct oB0_float *)(v0_0))->v)))) goto L_C14A304;
    *(float *)((v0_0 + v0_1)) = w0_0;
    goto L_C14A2B4;
    L_C14A282:;
    (((struct oB0_float *)(v0_0))->v) = 0.0f;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C14A290;
    L_C14A24E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    goto L_C14A260;
}


