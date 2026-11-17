/* game/unsorted: functions 0C02C324-0C02C524, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4_float { char p[0x4]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c012c34(int);
int FUN_0c0185b4(void);
int FUN_0c01c62a(int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c01cd2c(int);
int FUN_0c02c324(void);
int FUN_0c02c35a(int a4);
int FUN_0c02c36e(int a4);

int FUN_0c02c324(void)
{
    register int t5;

    FUN_0c01cb7c();
    FUN_0c01cc56(0x11, 0xC02C35A);
    FUN_0c01cc56(0x1A, 0xC02C36E);
    FUN_0c01cc56(0x36, 0xC02C524);
    FUN_0c01cc56(0x1A, 0xC02C5F8);
    t5 = FUN_0c0185b4();
    *(unsigned char *)0xC30EF5C = 0x0;
    return t5;
}

int FUN_0c02c35a(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t2 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c02c36e(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R11;
    register int R12;
    register int R13;
    register float F3;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_0 = R13;
    v0_3 = *(signed char *)((v0_2 + 0x14));
    v0_1 = (v0_3);
    R13 = (0x0);
    v0_0 = (v0_2);
    F15 = (1.0f);
    if ((v0_3 == 0)) goto L_C02C3BC;
    if ((v0_1 == 1)) goto L_C02C3D4;
    if ((v0_1 != 2)) goto L_C02C390;
    v0_2 = FUN_0c01c62a(v0_0);
    v0_1 = ((signed char)v0_2);
    if (((signed char)v0_2 == 0)) goto L_C02C51A;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o40_float *)(v0_0))->v) = F15;
    (((struct o44_float *)(v0_0))->v) = F15;
    L_C02C4A6:;
    (((struct o1B_uchar *)(v0_0))->v) = R13;
    (((struct o22_ushort *)(v0_0))->v) = R13;
    v0_1 = (0x22);
    L_C02C51A:;
    return v0_1;
    L_C02C390:;
    if ((v0_1 != 3)) goto L_C02C398;
    v0_1 = *(signed char *)0xC309859;
    v0_2 = (v0_1);
    if ((v0_1 != 2)) goto L_C02C4FA;
    v0_1 = (*(signed char *)0xC30985A) == 6;
    if (v0_1) goto L_C02C502;
    L_C02C4FA:;
    if ((v0_2 != 3)) goto L_C02C50C;
    L_C02C502:;
    (((struct o14_uchar *)(v0_0))->v) = R13;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    L_C02C50C:;
    return FUN_0c012c34(v0_0);
    L_C02C398:;
    goto L_C02C51A;
    L_C02C3D4:;
    FUN_0c012c34(v0_0);
    v0_1 = *(signed char *)0xC305416;
    (((struct o28_float *)(v0_0))->v) = (*(float *)((((((v0_1 << 1) + v0_1) << 2) + 0xC20EA24) + 0x0)));
    v0_1 = *(signed char *)0xC305416;
    (((struct o2C_float *)(v0_0))->v) = ((((struct o4_float *)(((((v0_1 << 1) + v0_1) << 2) + 0xC20EA24)))->v));
    v0_2 = (*(signed char *)0xC30985C) == 0;
    v0_1 = (0x2C);
    if (v0_2) goto L_C02C410;
    goto L_C02C51A;
    L_C02C410:;
    v0_2 = (*(short *)0xC30B6FE) == 0;
    if (v0_2) goto L_C02C41C;
    goto L_C02C51A;
    L_C02C41C:;
    v0_2 = FUN_0c01cd2c(0x101);
    v0_1 = ((short)v0_2);
    if (((short)v0_2 != 0)) goto L_C02C42E;
    goto L_C02C51A;
    L_C02C42E:;
    v0_1 = *(signed char *)0xC309859;
    v0_2 = (v0_1);
    if ((v0_1 != 2)) goto L_C02C448;
    v0_1 = (*(signed char *)0xC30985A) != 6;
    if (v0_1) goto L_C02C448;
    v0_3 = *(short *)0xC30EF6C;
    v0_1 = (v0_3);
    if ((v0_3 == 20)) goto L_C02C470;
    L_C02C448:;
    if ((v0_2 != 2)) goto L_C02C458;
    v0_3 = *(signed char *)0xC30985A;
    v0_1 = (v0_3);
    if ((v0_3 == 8)) goto L_C02C470;
    L_C02C458:;
    v0_1 = (v0_2);
    if ((v0_2 != 3)) goto L_C02C51A;
    v0_2 = (*(signed char *)0xC30985A) != 0;
    if (v0_2) goto L_C02C51A;
    v0_2 = *(signed char *)0xC30EF5C;
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C02C51A;
    L_C02C470:;
    v0_2 = (*(signed char *)0xC30A51A) != 0;
    if (v0_2) goto L_C02C51A;
    v0_2 = *(signed char *)0xC30EFA2;
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C02C51A;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C02C4A6;
    L_C02C3BC:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o1B_uchar *)(v0_0))->v) = R13;
    (((struct o22_ushort *)(v0_0))->v) = R13;
    (((struct o40_float *)(v0_0))->v) = F15;
    (((struct o44_float *)(v0_0))->v) = F15;
    goto L_C02C3D4;
}
