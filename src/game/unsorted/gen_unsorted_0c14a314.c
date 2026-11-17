/* game/unsorted: functions 0C14A314-0C14A7AE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c14a314(int a4, int a5);
int FUN_0c14a3a8(int a4, int a5, int a6);
int FUN_0c14a4c0(int a4, int a5);

int FUN_0c14a314(int a4, int a5)
{
    register int t0;
    register int t14;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t14 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x6, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        FUN_0c03744a(((((struct oC8_int *)(t0))->v)), 0x0, 0x6, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned int *)((t0 + 0x4)) = 0xC14A3A8;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((t0 + 0x1C)) = a5;
        t14 = a5;
    }
    return t14;
}

int FUN_0c14a3a8(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R9;
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
    v0_2 = (0x0);
    if ((v0_3 == 0)) goto L_C14A3BA;
    if ((v0_1 == 1)) goto L_C14A3C6;
    L_C14A4AC:;
    return v0_1;
    L_C14A3C6:;
    if (((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x1B))) == 0)) goto L_C14A4A6;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    w0_0 = (1.0f);
    w0_1 = (0.300000012f);
    if ((v0_3 == 0)) goto L_C14A3EE;
    if ((v0_1 == 1)) goto L_C14A3FA;
    if ((v0_1 == 2)) goto L_C14A44C;
    if ((v0_1 == 3)) goto L_C14A482;
    goto L_C14A4AC;
    L_C14A482:;
    w0_0 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_0 - w0_1);
    (((struct o44_float *)(v0_0))->v) = (w0_0 - w0_1);
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - 0.100000001f);
    w0_0 = (((struct oB0_float *)(v0_0))->v);
    v0_1 = (0xB0);
    w0_1 = (w0_0);
    FPUL_ = (0x3DCCCCCD);
    if ((w0_0 > 0.0f)) goto L_C14A4AC;
    L_C14A4A6:;
    return FUN_0c03f346(v0_0, v0_2, a6, R7);
    L_C14A44C:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) + 0x444);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) - 0x444);
    w0_1 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_1 + 0.0700000003f);
    v0_1 = (0x48);
    FPUL_ = (0x3D8F5C29);
    if ((w0_0 > (w0_1 + 0.0700000003f))) goto L_C14A4AC;
    L_C14A478:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C14A4AC;
    L_C14A3FA:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C14A4AC;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oB0_float *)(v0_0))->v) = w0_0;
    (((struct o44_float *)(v0_0))->v) = 4.0f;
    (((struct o40_float *)(v0_0))->v) = 4.0f;
    (((struct o48_float *)(v0_0))->v) = w0_1;
    goto L_C14A478;
    L_C14A3EE:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C14A3FA;
    L_C14A3BA:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_2;
    goto L_C14A3C6;
}

int FUN_0c14a4c0(int a4, int a5)
{
    register int t0;
    register int t15;
    register int t1;
    register int t2;
    register int t3;
    register int t9;

    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t15 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0xC202A68;
        t3 = 0x0;
        for (;;) {
            t9 = *(int *)((((0xC4 + t0) + t3) + 0x0));
            FUN_0c03744a(t9, (*(signed char *)((t2 + 0x0))), (*(signed char *)((t2 + 0x1))), (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            t1 = (t1 + 0x1);
            (((struct o8C_float *)(t9))->v) = 0.0f;
            (((struct o88_float *)(t9))->v) = 0.0f;
            (((struct o84_float *)(t9))->v) = 0.0f;
            (((struct o20_float *)(t9))->v) = 1.0f;
            (((struct o1C_float *)(t9))->v) = 1.0f;
            (((struct o18_float *)(t9))->v) = 1.0f;
            t2 = (t2 + 0x14);
            *(unsigned short *)((t9 + 0x6)) = 0x21F;
            t3 = (t3 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x3) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC14A58A;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        FUN_0c187798();
        (((struct o22_ushort *)(t0))->v) = (a5 - 13);
        t15 = 0x22;
    }
    return t15;
}
