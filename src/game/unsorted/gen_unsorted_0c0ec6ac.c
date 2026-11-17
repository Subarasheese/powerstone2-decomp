/* game/unsorted: functions 0C0EC6AC-0C0ECE44, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c0582de(int, int);
int FUN_0c0efdda(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0ec6ac(int a4);
int FUN_0c0ec6ce(int a4);
int FUN_0c0ec6ec(int a4, float f4);
int FUN_0c0ec722(int a4);
int FUN_0c0ec848(int a4);
int FUN_0c0eca3c(int a4);

int FUN_0c0ec6ac(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)((*(int *)0xC540E1C)))->v) = 0x1;
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o131_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0ec6ce(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o41C_uchar *)(a4))->v) = 0x5;
        (((struct o132_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0ec6ec(int a4, float f4)
{
    register int t3;

    if ((*(signed char *)(((0x41C + a4) + 0x0))) != 0) {
        (((struct o41C_uchar *)(a4))->v) = ((*(signed char *)(((0x41C + a4) + 0x0))) - 1);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        t3 = 0xBC;
    } else {
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        t3 = 0xAC;
    }
    return t3;
}

int FUN_0c0ec722(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register int R12;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x16));
    v0_3 = (v0_2);
    v0_1 = (0x0);
    if ((v0_2 == 0)) goto L_C0EC734;
    if ((v0_3 == 1)) goto L_C0EC746;
    L_C0EC844:;
    return v0_3;
    L_C0EC746:;
    if (((*(short *)((v0_0 + 0x1E))) == 0)) goto L_C0EC76A;
    if (((int)((((struct o80_int *)(((((struct oC4_int *)(v0_0))->v))))->v)) < (int)0xFFFFF8E4)) goto L_C0EC788;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) - 64);
    L_C0EC78E:;
    v0_2 = (0x16C);
    if ((((((struct o20_short *)(v0_0))->v)) == 0)) goto L_C0EC7DC;
    if (((int)((((struct o80_int *)(((((struct oDC_int *)(v0_0))->v))))->v)) < (int)0xFFFFE000)) goto L_C0EC806;
    v0_3 = (((struct oDC_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) - v0_2);
    v0_3 = (((struct oE0_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) + v0_2);
    L_C0EC810:;
    v0_3 = (0x78);
    if ((((((struct o78_int *)(((((struct oE4_int *)(v0_0))->v))))->v)) == 0)) goto L_C0EC844;
    if (((int)((((struct o78_int *)(((((struct oE4_int *)(v0_0))->v))))->v)) <= 0)) goto L_C0EC83C;
    v0_0 = (((struct oE4_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_0))->v) = (((((struct o78_int *)(v0_0))->v)) - 0xB6);
    v0_3 = (0x78);
    goto L_C0EC844;
    L_C0EC83C:;
    (((struct o78_uint *)(((((struct oE4_int *)(v0_0))->v))))->v) = v0_1;
    v0_3 = (0x78);
    goto L_C0EC844;
    L_C0EC806:;
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) ^ 0x1);
    goto L_C0EC810;
    L_C0EC7DC:;
    if (((int)((((struct o80_int *)(((((struct oDC_int *)(v0_0))->v))))->v)) > (int)0xAAA)) goto L_C0EC806;
    v0_3 = (((struct oDC_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) + v0_2);
    v0_3 = (((struct oE0_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) - v0_2);
    goto L_C0EC810;
    L_C0EC788:;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) ^ 0x1);
    goto L_C0EC78E;
    L_C0EC76A:;
    if (((int)((((struct o80_int *)(((((struct oC4_int *)(v0_0))->v))))->v)) > (int)0x71C)) goto L_C0EC788;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) + 0x40);
    goto L_C0EC78E;
    L_C0EC734:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    (((struct o20_ushort *)(v0_0))->v) = v0_1;
    goto L_C0EC746;
}

int FUN_0c0ec848(int a4)
{
    int stk[3];

    register int R1;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_1 = a4;
    v0_2 = *(signed char *)((v0_1 + 0x16));
    v0_3 = (v0_2);
    v0_0 = (v0_1);
    v0_1 = (0x0);
    v0_4 = (0x14);
    if ((v0_2 == 0)) goto L_C0EC864;
    if ((v0_3 == 1)) goto L_C0EC874;
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    (((struct o16_uchar *)(v0_0))->v) = v0_1;
    v0_3 = (0x16);
    L_C0ECA34:;
    return v0_3;
    L_C0EC874:;
    v0_6 = *(signed char *)((v0_0 + 0x17));
    v0_3 = (v0_6);
    v0_2 = (0x16C);
    v0_5 = (0xB6);
    if ((v0_6 == 0)) goto L_C0EC898;
    if ((v0_3 == 1)) goto L_C0EC8C4;
    if ((v0_3 == 2)) goto L_C0EC8F8;
    if ((v0_3 == 3)) goto L_C0EC92C;
    if ((v0_3 != 4)) goto L_C0EC894;
    v0_2 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0EC9D6;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    L_C0EC9D6:;
    v0_3 = (0x78);
    if ((((((struct o78_int *)(((((struct oE4_int *)(v0_0))->v))))->v)) == 0)) goto L_C0ECA34;
    if (((int)((((struct o78_int *)(((((struct oE4_int *)(v0_0))->v))))->v)) <= 0)) goto L_C0EC9FC;
    v0_0 = (((struct oE4_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_0))->v) = (((((struct o78_int *)(v0_0))->v)) - v0_5);
    v0_3 = (0x78);
    goto L_C0ECA34;
    L_C0EC9FC:;
    (((struct o78_uint *)(((((struct oE4_int *)(v0_0))->v))))->v) = v0_1;
    v0_3 = (0x78);
    goto L_C0ECA34;
    L_C0EC894:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_3 = (0x16);
    goto L_C0ECA34;
    L_C0EC92C:;
    v0_4 = (v0_1);
    if (((int)(*(int *)((v0_0 + 0x34))) > 0)) goto L_C0EC93C;
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) + v0_2);
    L_C0EC93E:;
    if (((int)((((struct o78_int *)(((((struct oE4_int *)(v0_0))->v))))->v)) >= (int)0xE38)) goto L_C0EC95C;
    v0_3 = (((struct oE4_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_3))->v) = (((((struct o78_int *)(v0_3))->v)) + v0_2);
    L_C0EC95E:;
    v0_3 = (0x80);
    v0_5 = (0x3);
    if (((int)((((struct o80_int *)(((((struct oDC_int *)(v0_0))->v))))->v)) > (int)0xAAA)) goto L_C0EC98A;
    v0_3 = (((struct oDC_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) + v0_2);
    v0_3 = (((struct oE0_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) - v0_2);
    v0_3 = (0x80);
    L_C0EC98C:;
    if (((int)v0_4 < (int)v0_5)) goto L_C0ECA34;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    (((struct o20_ushort *)(v0_0))->v) = 0x78;
    FUN_0c187798(v0_1, v0_2, v0_4);
    FUN_0c0582de(((int)stk + 0), (((((struct oE4_int *)(v0_0))->v)) + 0x28));
    v0_3 = ((FUN_0c0efdda(((int)stk + 0), 0x0)));
    goto L_C0ECA34;
    L_C0EC98A:;
    v0_4 = ((v0_4 + 0x1));
    goto L_C0EC98C;
    L_C0EC95C:;
    v0_4 = ((v0_4 + 0x1));
    goto L_C0EC95E;
    L_C0EC93C:;
    v0_4 = ((v0_4 + 0x1));
    goto L_C0EC93E;
    L_C0EC8F8:;
    if (((int)((((struct o80_int *)(((((struct oDC_int *)(v0_0))->v))))->v)) < (int)0xFFFFD8E4)) goto L_C0EC922;
    v0_1 = (((struct oDC_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) - v0_5);
    v0_0 = (((struct oE0_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_0))->v) = (((((struct o80_int *)(v0_0))->v)) + v0_5);
    v0_3 = (0x80);
    goto L_C0ECA34;
    L_C0EC922:;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    v0_3 = (0x17);
    goto L_C0ECA34;
    L_C0EC8C4:;
    v0_4 = *(int *)((v0_0 + 0x34));
    *(unsigned int *)((v0_0 + 0x34)) = (v0_4 - v0_2);
    v0_4 = (int)(v0_4 - v0_2) > (int)0xFFFFE38F;
    v0_5 = (0x1);
    v0_2 = (0xFFFFE38F);
    if (v0_4) goto L_C0EC8D8;
    *(unsigned int *)((v0_0 + 0x34)) = v0_2;
    v0_1 = ((v0_1 + 0x1));
    L_C0EC8D8:;
    if (((int)v0_1 >= (int)v0_5)) goto L_C0EC8E0;
    goto L_C0ECA34;
    L_C0EC8E0:;
    goto L_C0EC922;
    L_C0EC898:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = ((int)((int)(-((((struct o80_int *)(v0_1))->v))) / (int)v0_4));
    v0_1 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_3 = (0x20);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C0EC922;
    goto L_C0ECA34;
    L_C0EC864:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o17_uchar *)(v0_0))->v) = v0_1;
    (((struct o20_ushort *)(v0_0))->v) = v0_4;
    goto L_C0EC874;
}

int FUN_0c0eca3c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x16));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0ECA4C;
    if ((v0_1 == 1)) goto L_C0ECA5E;
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    (((struct o16_uchar *)(v0_0))->v) = 0x0;
    v0_1 = (0x16);
    L_C0ECB32:;
    return v0_1;
    L_C0ECA5E:;
    v0_1 = (0x16C);
    if (((*(short *)((v0_0 + 0x1E))) == 0)) goto L_C0ECA84;
    if (((int)((((struct o80_int *)(((((struct oC4_int *)(v0_0))->v))))->v)) < (int)0xFFFFEAAB)) goto L_C0ECAA2;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) - v0_1);
    L_C0ECAA8:;
    v0_1 = (0x2D8);
    if ((((((struct o20_short *)(v0_0))->v)) == 0)) goto L_C0ECADC;
    if (((int)((((struct o80_int *)(((((struct oDC_int *)(v0_0))->v))))->v)) < (int)0xFFFFE000)) goto L_C0ECB06;
    v0_2 = (((struct oDC_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) - v0_1);
    v0_2 = (((struct oE0_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) + v0_1);
    L_C0ECB10:;
    v0_2 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0x22);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0ECB32;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_1 = (0x16);
    goto L_C0ECB32;
    L_C0ECB06:;
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) ^ 0x1);
    goto L_C0ECB10;
    L_C0ECADC:;
    if (((int)((((struct o80_int *)(((((struct oDC_int *)(v0_0))->v))))->v)) > (int)0xAAA)) goto L_C0ECB06;
    v0_2 = (((struct oDC_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) + v0_1);
    v0_2 = (((struct oE0_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) - v0_1);
    goto L_C0ECB10;
    L_C0ECAA2:;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) ^ 0x1);
    goto L_C0ECAA8;
    L_C0ECA84:;
    if (((int)((((struct o80_int *)(((((struct oC4_int *)(v0_0))->v))))->v)) > (int)0x1555)) goto L_C0ECAA2;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) + v0_1);
    goto L_C0ECAA8;
    L_C0ECA4C:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1;
    (((struct o22_ushort *)(v0_0))->v) = 0xF0;
    goto L_C0ECA5E;
}
