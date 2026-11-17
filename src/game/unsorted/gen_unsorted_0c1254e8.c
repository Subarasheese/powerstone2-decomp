/* game/unsorted: functions 0C1254E8-0C1256F2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c1254e8(int a4);
int FUN_0c125582(int a4);

int FUN_0c1254e8(int a4)
{
    register int t0;
    register int t9;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t9 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t1 << 2) + (0xC4 + t0)) + 0x0))), t1, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t1 = (t1 + 0x1);
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC125582;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0x21F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC125582;
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(t0))->v) = (1.0f + 1.0f);
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct oBC_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 1.0f;
        (((struct oB4_float *)(t0))->v) = 1.0f;
        t9 = 0xB4;
    }
    return t9;
}

int FUN_0c125582(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    int R6;
    int R7;
    register int R8;
    register int R10;
    register int R12;
    register int R14;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (0x0);
    R6 = (0x1);
    if ((v0_3 == 0)) goto L_C12559E;
    if ((v0_1 == 1)) goto L_C1255C0;
    if ((v0_1 != 2)) goto L_C12559A;
    return FUN_0c03f346(v0_0, v0_2, R6, R7);
    L_C12559A:;
    L_C1256EE:;
    return v0_1;
    L_C1255C0:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    R7 = (0x2);
    w0_0 = (0.200000003f);
    if ((v0_3 == 0)) goto L_C1255D6;
    if ((v0_1 == 1)) goto L_C12565E;
    goto L_C1256EE;
    L_C12565E:;
    if ((((*(short *)((v0_0 + 0x1C))) & R6) == 0)) goto L_C12566E;
    (((struct o7C_uint *)(((((struct oC8_int *)(v0_0))->v))))->v) = v0_2;
    L_C125678:;
    if ((((*(short *)((v0_0 + 0x1C))) & R7) == 0)) goto L_C125686;
    v0_1 = (0x40);
    w0_1 = ((((((struct o40_float *)(v0_0))->v)) + w0_0));
    L_C12568C:;
    *(float *)((v0_0 + v0_1)) = w0_1;
    (((struct o48_float *)(v0_0))->v) = w0_1;
    w0_1 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_1 + 0.800000012f);
    (((struct o48_float *)(v0_0))->v) = (w0_1 + 0.800000012f);
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) - 0.100000001f);
    (((struct oB4_float *)(v0_0))->v) = (((((struct oB4_float *)(v0_0))->v)) - w0_0);
    w0_0 = (((struct oB4_float *)(v0_0))->v);
    w0_1 = (0.0f);
    w0_2 = (w0_0);
    FPUL_ = (0x3DCCCCCD);
    if ((!(0.0f > w0_0))) goto L_C1256C6;
    (((struct oB4_float *)(v0_0))->v) = w0_1;
    L_C1256C6:;
    w0_0 = (((struct oB4_float *)(v0_0))->v);
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C1256EE;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C1256EE;
    L_C125686:;
    v0_1 = (0x40);
    w0_1 = ((((((struct o40_float *)(v0_0))->v)) - w0_0));
    goto L_C12568C;
    L_C12566E:;
    (((struct o7C_uint *)(((((struct oC8_int *)(v0_0))->v))))->v) = 0x4000;
    goto L_C125678;
    L_C1255D6:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - 50.0f);
    FPUL_ = (0x42480000);
    if ((((*(short *)((v0_0 + 0x1C))) & R6) == 0)) goto L_C125620;
    (((struct o7C_uint *)(((((struct oC8_int *)(v0_0))->v))))->v) = v0_2;
    L_C12562A:;
    if ((((*(short *)((v0_0 + 0x1C))) & R7) == 0)) goto L_C125638;
    v0_1 = (0x40);
    w0_1 = ((((((struct o40_float *)(v0_0))->v)) + w0_0));
    L_C12563E:;
    *(float *)((v0_0 + v0_1)) = w0_1;
    (((struct o48_float *)(v0_0))->v) = w0_1;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C1256EE;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x5;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C1256EE;
    L_C125638:;
    v0_1 = (0x40);
    w0_1 = ((((((struct o40_float *)(v0_0))->v)) - w0_0));
    goto L_C12563E;
    L_C125620:;
    (((struct o7C_uint *)(((((struct oC8_int *)(v0_0))->v))))->v) = 0x4000;
    goto L_C12562A;
    L_C12559E:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + 200.0f);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x8;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_2;
    (((struct oA8_uchar *)(v0_0))->v) = R6;
    FPUL_ = (0x43480000);
    goto L_C1255C0;
}
