/* game/unsorted: functions 0C1425DC-0C142852, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c1425dc(int a4, int a5);
int FUN_0c142694(int a4, int a5, int a6, int a7);
struct o10_int { char p[0x10]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c1425dc(int a4, int a5)
{
    register int t0;
    register int t14;
    register int t1;
    register int t2;
    register int t3;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t14 = t0;
    if (t0 != 0) {
        t1 = 0xC2024E4;
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            t5 = t1;
            t1 = (t1 + 0x8);
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t3) + 0x0))), (*(int *)((t5 + 0x0))), (*(int *)((t5 + 0x4))), (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x4);
            if ((unsigned int)t2 >= (unsigned int)0x2) {
                break;
            }
        }
        (((struct o7C_uint *)(((((struct oC8_int *)(t0))->v))))->v) = 0x8000;
        (((struct oAC_ushort *)(t0))->v) = 0x20F;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        (((struct oB0_float *)(t0))->v) = 0.0f;
        (((struct oBC_float *)(t0))->v) = 0.0f;
        (((struct oB8_float *)(t0))->v) = 0.0f;
        (((struct oB4_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x4)) = 0xC142694;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA4_uint *)(t0))->v) = (a4 + 0x64);
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = (a5 - 38);
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        t14 = 0x40;
    }
    return t14;
}

int FUN_0c142694(int a4, int a5, int a6, int a7)
{
    int stk[3];

    int v0_0;
    int v0_2;
    int v0_1;
    int v0_3;
    int v0_5;
    int v0_4;
    int v0_7;
    float F2;
    float F3;
    float F4;
    int T_;
    int R12;
    int R10;
    int R9;
    int R3;
    int R2;
    int R1;
    int FPUL_;
    int v0_6;
    v0_1 = a4;
    v0_3 = a6;
    v0_0 = (((struct oC4_int *)(v0_1))->v);
    (((struct o78_uint *)(v0_0))->v) = (((((struct o78_int *)(v0_0))->v)) + 0x1555);
    v0_0 = (((struct oC8_int *)(v0_1))->v);
    (((struct o78_uint *)(v0_0))->v) = (((((struct o78_int *)(v0_0))->v)) - 0x1555);
    v0_5 = *(signed char *)(v0_1 + 0x14);
    v0_2 = (v0_5);
    v0_0 = (v0_1);
    v0_1 = (0xC2024A4);
    v0_4 = (0x0);
    if ((v0_5 == 0)) goto L_C1426D2;
    if ((v0_2 == 1)) goto L_C1426E4;
    if ((v0_2 != 2)) goto L_C1426CE;
    v0_2 = (((struct o1C_short *)(v0_0))->v);
    v0_5 = (((struct o1E_short *)(v0_0))->v);
    (((struct oB4_float *)(v0_0))->v) = (((((struct o4_float *)(((((*(signed char *)(v0_0 + 0x1)) << 2) << 2) + v0_1)))->v)) * ((float)v0_2 / (float)v0_5));
    (((struct oB8_float *)(v0_0))->v) = (((((struct o8_float *)(((((*(signed char *)(v0_0 + 0x1)) << 2) << 2) + v0_1)))->v)) * ((float)v0_2 / (float)v0_5));
    v0_6 = *(signed char *)(v0_0 + 0x1);
    (((struct oBC_float *)(v0_0))->v) = (((((struct oC_float *)((v0_1 + ((v0_6 << 2) << 2))))->v)) * ((float)v0_2 / (float)v0_5));
    v0_7 = (((struct o1C_short *)(v0_0))->v);
    (((struct o1C_ushort *)(v0_0))->v) = (v0_7 - 1);
    v0_2 = ((short)(v0_7 - 1));
    v0_1 = ((v0_1 + ((v0_6 << 2) << 2)));
    FPUL_ = (v0_5);
    if (((int)(short)(v0_7 - 1) > 0)) goto L_C14284A;
    L_C142844:;
    v0_2 = ((FUN_0c03f346(v0_0, v0_4, v0_3, a7)));
    L_C14284A:;
    return v0_2;
    L_C1426CE:;
    goto L_C14284A;
    L_C1426E4:;
    if (((*(signed char *)((((((struct o10_int *)(v0_0))->v)) + 0x18))) != 0)) goto L_C1426F2;
    goto L_C142844;
    L_C1426F2:;
    v0_3 = *(signed char *)(v0_0 + 0x15);
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C142730;
    if ((v0_2 == 1)) goto L_C142746;
    if ((v0_2 == 2)) goto L_C1427D2;
    goto L_C14284A;
    L_C1427D2:;
    v0_1 = (((struct o1C_short *)(v0_0))->v);
    (((struct o1C_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C14284A;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x14)) + 0x1);
    (((struct o1E_ushort *)(v0_0))->v) = 0xF;
    (((struct o1C_ushort *)(v0_0))->v) = 0xF;
    v0_2 = (0xF);
    goto L_C14284A;
    L_C142746:;
    (((struct o1C_ushort *)(v0_0))->v) = (((((struct o1C_short *)(v0_0))->v)) + 0x1);
    v0_2 = (((struct o1C_short *)(v0_0))->v);
    v0_3 = (((struct o1E_short *)(v0_0))->v);
    (((struct oB4_float *)(v0_0))->v) = (((((struct o4_float *)(((((*(signed char *)(v0_0 + 0x1)) << 2) << 2) + v0_1)))->v)) * ((float)v0_2 / (float)v0_3));
    (((struct oB8_float *)(v0_0))->v) = (((((struct o8_float *)(((((*(signed char *)(v0_0 + 0x1)) << 2) << 2) + v0_1)))->v)) * ((float)v0_2 / (float)v0_3));
    (((struct oBC_float *)(v0_0))->v) = (((((struct oC_float *)((v0_1 + (((*(signed char *)(v0_0 + 0x1)) << 2) << 2))))->v)) * ((float)v0_2 / (float)v0_3));
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(v0_0 + 0x1)) * (short)0x3938) + 0xC53255C))) + 0x28), ((int)stk + 0));
    (((struct o2C_float *)(v0_0))->v) = ((*(float *)(((int)stk + 4))) - ((((struct o2C_float *)(((((struct o10_int *)(v0_0))->v))))->v)));
    v0_1 = (((struct o1E_short *)(v0_0))->v);
    v0_2 = (v0_1);
    if (((int)((((struct o1C_short *)(v0_0))->v)) < (int)v0_1)) goto L_C14284A;
    v0_2 = (0xF);
    L_C1427C6:;
    (((struct o1C_ushort *)(v0_0))->v) = v0_2;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    v0_2 = (0x15);
    goto L_C14284A;
    L_C142730:;
    (((struct o1C_ushort *)(v0_0))->v) = (((((struct o1C_short *)(v0_0))->v)) + 0x1);
    v0_1 = (((struct o1C_short *)(v0_0))->v);
    v0_2 = (v0_1);
    if (((int)v0_1 >= (int)0x17)) goto L_C142742;
    goto L_C14284A;
    L_C142742:;
    v0_2 = (v0_4);
    goto L_C1427C6;
    L_C1426D2:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x14)) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_4;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    goto L_C1426E4;
}
