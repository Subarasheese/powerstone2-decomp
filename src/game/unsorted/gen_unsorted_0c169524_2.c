/* game/unsorted: functions 0C169524-0C16AC2C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058542(int, int, float);
int FUN_0c058716(int, int);
int FUN_0c059e0e(int, int, int);
int FUN_0c064f80(int);
int FUN_0c16328c(int, int, int, float);
int FUN_0c1636ae(int, int, int);
int FUN_0c169568(int, int, int);
int FUN_0c169706(int, int);
int FUN_0c169922(int, int);
int FUN_0c169dbc(int, int);
int FUN_0c169f4a(int, int, int);
int FUN_0c16a360(int, int);
int FUN_0c16a40c(int);
int FUN_0c16a464(int, int);
int FUN_0c16a53e(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c1697b8(int a4, int a5, int a6, int a7);
int FUN_0c1699b8(int a4, int a5, int a6, int a7);
int FUN_0c16a7e4(int a4);
int FUN_0c16a968(int a4);
int FUN_0c16ab9e(int a4, int a5);



int FUN_0c16a7e4(int a4)
{
    int stk[3];
    register int t0;
    register int t14;
    register int t20;
    register int t15;
    register int t37;
    register int t43;
    register int t38;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            FUN_0c16a464(a4, 0x0);
            (((struct o15_uchar *)(a4))->v) = 0x1;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            return FUN_0c16a53e(a4, 0x0);
        }
        if ((*(signed char *)((a4 + 0x17))) == 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            (((struct o22_ushort *)(a4))->v) = 0x5;
            FUN_0c16a464(a4, 0x1);
            FUN_0c16a53e(a4, 0x1);
            FUN_0c169922(a4, 0x0);
            FUN_0c169706(a4, 0x0);
            FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x73, (a4 + 0x28));
        }
        FUN_0c16a40c(a4);
        t14 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t14 - 1);
        t20 = 0x22;
        if ((int)(short)(t14 - 1) <= 0) {
            t15 = *(signed char *)((a4 + 0x18));
            (((struct o18_uchar *)(a4))->v) = (t15 - 1);
            if ((int)(signed char)(t15 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            (((struct o17_uchar *)(a4))->v) = 0x0;
            t20 = 0x17;
        }
        return t20;
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = 0x3;
    if ((*(signed char *)((a4 + 0x17))) == 0) {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0x5;
        FUN_0c16a464(a4, 0x1);
        FUN_0c16a53e(a4, 0x1);
        FUN_0c169922(a4, 0x0);
        FUN_0c169706(a4, 0x0);
        FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x73, (a4 + 0x28));
    }
    FUN_0c16a40c(a4);
    t37 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t37 - 1);
    t43 = 0x22;
    if ((int)(short)(t37 - 1) <= 0) {
        t38 = *(signed char *)((a4 + 0x18));
        (((struct o18_uchar *)(a4))->v) = (t38 - 1);
        if ((int)(signed char)(t38 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t43 = 0x17;
    }
    return t43;
}

int FUN_0c16a968(int a4)
{

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    v0_2 = *(signed char *)((v0_1 + 0x16));
    v0_0 = (v0_2);
    v0_1 = (v0_1);
    if ((v0_2 == 0)) goto L_C16A97E;
    if ((v0_0 == 1)) goto L_C16A992;
    FUN_0c16a464(v0_1, 0x0);
    (((struct o15_uchar *)(v0_1))->v) = 0x1;
    (((struct o16_uchar *)(v0_1))->v) = 0x0;
    return FUN_0c16a53e(v0_1, 0x0);
    L_C16A992:;
    v0_2 = *(signed char *)((v0_1 + 0x17));
    v0_0 = (v0_2);
    if ((v0_2 == 0)) goto L_C16A9A2;
    if ((v0_0 == 1)) goto L_C16A9D8;
    v0_2 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_2 - 1);
    v0_0 = (0x22);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C16AA46;
    (((struct o16_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x16))) + 0x1);
    v0_0 = (0x16);
    L_C16AA46:;
    return v0_0;
    L_C16A9D8:;
    v0_2 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_2 - 1);
    v0_0 = (0x22);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C16AA46;
    FUN_0c16a360(v0_1, 0x1);
    FUN_0c169706(v0_1, 0x3);
    FUN_0c059e0e((*(signed char *)((v0_1 + 0x1))), 0x75, (v0_1 + 0x28));
    (((struct o17_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x17))) + 0x1);
    (((struct o22_ushort *)(v0_1))->v) = 0xA;
    v0_0 = (0x22);
    goto L_C16AA46;
    L_C16A9A2:;
    (((struct o17_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x17))) + 0x1);
    (((struct o22_ushort *)(v0_1))->v) = 0x3C;
    FUN_0c16a464(v0_1, 0x1);
    FUN_0c16a53e(v0_1, 0x1);
    FUN_0c16a360(v0_1, 0x0);
    FUN_0c169706(v0_1, 0x2);
    FUN_0c059e0e((*(signed char *)((v0_1 + 0x1))), 0x75, (v0_1 + 0x28));
    goto L_C16A9D8;
    L_C16A97E:;
    (((struct o16_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x16))) + 0x1);
    (((struct o17_uchar *)(v0_1))->v) = 0x0;
    (((struct o18_uchar *)(v0_1))->v) = 0x3;
    goto L_C16A992;
}

