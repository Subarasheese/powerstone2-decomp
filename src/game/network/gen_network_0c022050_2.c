/* game/network: functions 0C022050-0C02354E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o194_uchar { char p[0x194]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
int FUN_0c01e988(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c187a88(int, int, int);
int strcpy(int, int);
int FUN_0c02297c(void);
int FUN_0c022c30(void);

int FUN_0c02297c(void)
{
    int stk[36];
    register int t0;
    register int t102;
    register int t2;
    register int t51;
    register int t69;
    register int t80;
    register int t83;
    int t3;
    register int t98;
    int t52;
    register int t95;
    int t65;
    register int t92;
    int t74;

    t0 = FUN_0c022050();
    t102 = t0;
    if (t0 != 0) {
        FUN_0c0220c4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
        t2 = *(signed char *)(((int)stk + 12));
        if ((t2 == 97) && (t3 = *(signed char *)(((int)stk + 4)), t3 == 10)) {
            if ((*(signed char *)0xC309E08) != 0) {
                (((struct o0_uchar *)0xC30A506)->v) = 0x3;
            } else {
                (((struct o0_uchar *)0xC30A506)->v) = 0x0;
            }
            (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x71;
            *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x10) + 0x1);
            *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x18;
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0xA;
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = (*(signed char *)0xC30A506);
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x4)) = (*(signed char *)0xC309BCA);
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x5)) = (*(signed char *)0xC309BCC);
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x6)) = (*(signed char *)0xC309BCE);
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x7)) = (*(signed char *)0xC309BD0);
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x8)) = (*(int *)0xC30A50C);
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x9)) = ((int)((*(int *)0xC30A50C) & 0xFF00) >> 8);
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0xA)) = (short)((unsigned int)((*(int *)0xC30A50C) & 0xFF0000) >> 16);
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0xB)) = ((unsigned int)((unsigned int)((*(int *)0xC30A50C) & 0xFF000000) >> 16) >> 8);
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0xC)) = (*(int *)0xC30A508);
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0xD)) = ((int)((*(int *)0xC30A508) & 0xFF00) >> 8);
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0xE)) = (*(signed char *)0xC30A510);
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0xF)) = (*(signed char *)0xC30A511);
            (((struct o10_uchar *)((((int)stk + 0) + 0x10)))->v) = (*(signed char *)0xC30A512);
            (((struct o11_uchar *)((((int)stk + 0) + 0x10)))->v) = (*(signed char *)0xC30A513);
            (((struct o12_uchar *)((((int)stk + 0) + 0x10)))->v) = (*(signed char *)0xC30A514);
            (((struct o13_uchar *)((((int)stk + 0) + 0x10)))->v) = (*(signed char *)0xC30A515);
            (((struct o14_uchar *)((((int)stk + 0) + 0x10)))->v) = (*(signed char *)0xC30A516);
            (((struct o15_uchar *)((((int)stk + 0) + 0x10)))->v) = (*(signed char *)0xC30A517);
            (((struct o16_uchar *)((((int)stk + 0) + 0x10)))->v) = (*(signed char *)0xC30A518);
            (((struct o17_uchar *)((((int)stk + 0) + 0x10)))->v) = (*(signed char *)0xC30A519);
            FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
            t98 = (strcpy(0xC3053B8, 0xC1A8ADC));
        } else {
            t51 = *(int *)0xC309994;
            if ((t2 == 111) && (t52 = *(signed char *)(((int)stk + 4)), t52 == 2)) {
                FUN_0c1864e0(t51, 0xC30A3F2, 0x1);
                (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x7E;
                *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x10) + 0x1);
                *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x3;
                *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x1;
                FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
                t95 = (strcpy(0xC3053B8, 0xC1A8AA8));
            } else {
                if ((t2 == 110) && (t65 = *(signed char *)(((int)stk + 4)), t65 == 1)) {
                    FUN_0c1864e0(t51, (((int)stk + 0) + 0x8), 0x1);
                    t69 = 0x0;
                    for (;;) {
                        if ((int)t69 >= (int)(unsigned char)(*(signed char *)(((int)stk + 8)))) {
                            break;
                        }
                        FUN_0c1864e0((*(int *)0xC309994), (t69 + 0xC30AC5C), 0x1);
                        t69 = (t69 + 0x1);
                    }
                    *(unsigned char *)((t69 + 0xC30AC5C)) = 0x0;
                    (((struct o0_uchar *)0xC309859)->v) = 0xB;
                    (((struct o1_uchar *)0xC309859)->v) = 0x0;
                    t92 = (strcpy(0xC3053B8, 0xC1A8AC0));
                } else {
                    if ((t2 == 111) && (t74 = *(signed char *)(((int)stk + 4)), t74 == 1)) {
                        FUN_0c1864e0(t51, 0xC309BC6, 0x1);
                        FUN_0c1864e0((*(int *)0xC309994), 0xC309BC8, 0x1);
                        FUN_0c1864e0((*(int *)0xC309994), 0xC309BC9, 0x1);
                        *(unsigned int *)(((int)stk + 0)) = 0x0;
                        t80 = 0xC30999E;
                        for (;;) {
                            FUN_0c1864e0((*(int *)0xC309994), t80, 0x1);
                            t83 = *(int *)(((int)stk + 0));
                            *(unsigned int *)(((int)stk + 0)) = (t83 + 0x1);
                            t80 = (t80 + 0x1);
                            if ((int)(t83 + 0x1) >= (int)0x6) {
                                break;
                            }
                        }
                        (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x7E;
                        *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x10) + 0x1);
                        *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x3;
                        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x1;
                        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
                        *(unsigned short *)0xC30EF6C = 0x0;
                        (((struct o1_uchar *)0xC309859)->v) = 0x3;
                        t92 = (strcpy(0xC3053B8, 0xC1A8ACC));
                    } else {
                        t92 = (FUN_0c0222a4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4)));
                    }
                }
                t95 = t92;
            }
            t98 = t95;
        }
        t102 = t98;
    }
    return t102;
}

int FUN_0c022c30(void)
{
    int stk[197];
    register int t2;
    register int t247;
    register int t4;
    register int t5;
    register int t34;
    register int t183;
    register int t188;
    register int t257;
    int t6;
    register int t239;
    int t38;
    register int t235;
    register int t231;
    register int t227;
    register int t223;
    register int t219;
    register int t215;
    register int t211;
    register int t207;
    register int t203;
    register int t199;
    register int t195;
    int t181;

    if ((int)(*(short *)0xC30EF6C) > 0) {
        *(unsigned short *)0xC30EF6C = ((*(short *)0xC30EF6C) - 1);
        t257 = 0xFFFFFCEC;
    } else {
        t2 = FUN_0c022050();
        t247 = t2;
        if (t2 == 0) {
        } else {
            FUN_0c0220c4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4), ((int)stk + 0));
            t4 = *(signed char *)(((int)stk + 12));
            t5 = *(int *)0xC309994;
            if ((t4 == 110) && (t6 = *(signed char *)(((int)stk + 0)), t6 == 1)) {
                FUN_0c1864e0(t5, (((int)stk + 0) + 0x4), 0x1);
                t34 = 0x0;
                for (;;) {
                    if ((int)t34 >= (int)(unsigned char)(*(signed char *)(((int)stk + 4)))) {
                        break;
                    }
                    FUN_0c1864e0((*(int *)0xC309994), (t34 + 0xC30AC5C), 0x1);
                    t34 = (t34 + 0x1);
                }
                *(unsigned char *)((t34 + 0xC30AC5C)) = 0x0;
                t239 = 0xC30AC5C;
            } else {
                if ((t4 == 97) && (t38 = *(signed char *)(((int)stk + 0)), t38 == 13)) {
                    FUN_0c01e988();
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x71;
                    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x14) + 0x1);
                    *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0xFE;
                    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0xD;
                    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x3);
                    *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x3) + 0x0)) = 0xFA;
                    FUN_0c187a88(((((int)stk + 0) + 0x14) + 0x4), 0xC30AB2E, (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))));
                    strcpy(0xC3053B8, 0xC1A8AF0);
                    (((struct o194_uchar *)(((int)stk + 0)))->v) = 0x72;
                    *(unsigned int *)(((int)stk + 8)) = ((0x194 + ((int)stk + 0)) + 0x1);
                    *(unsigned char *)((((0x194 + ((int)stk + 0)) + 0x1) + 0x0)) = 0x9;
                    *(unsigned char *)(((0x194 + ((int)stk + 0)) + 0x2)) = 0x6;
                    FUN_0c187a88(((0x194 + ((int)stk + 0)) + 0x3), 0xC30999E, 0x6);
                    t235 = (FUN_0c186740((*(int *)0xC309994), (0x194 + ((int)stk + 0)), (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0)))));
                } else {
                    if (t4 != 98) {
                        t231 = (FUN_0c0222a4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4), ((int)stk + 0)));
                    } else {
                        if ((*(signed char *)(((int)stk + 0))) == 6) {
                            FUN_0c1864e0(t5, 0xC309BD4, 0x1);
                            FUN_0c1864e0((*(int *)0xC309994), 0xC309BD5, 0x1);
                            FUN_0c1864e0((*(int *)0xC309994), 0xC309BD6, 0x1);
                            FUN_0c1864e0((*(int *)0xC309994), 0xC309BD7, 0x1);
                            FUN_0c1864e0((*(int *)0xC309994), 0xC309BD8, 0x1);
                            FUN_0c1864e0((*(int *)0xC309994), 0xC309BD9, 0x1);
                            FUN_0c1864e0((*(int *)0xC309994), 0xC309BDA, 0x1);
                            FUN_0c1864e0((*(int *)0xC309994), 0xC309BDB, 0x1);
                            (((struct o194_uchar *)(((int)stk + 0)))->v) = 0x72;
                            *(unsigned int *)(((int)stk + 8)) = ((0x194 + ((int)stk + 0)) + 0x1);
                            *(unsigned char *)((((0x194 + ((int)stk + 0)) + 0x1) + 0x0)) = 0x9;
                            *(unsigned char *)(((0x194 + ((int)stk + 0)) + 0x2)) = 0x7;
                            FUN_0c187a88(((0x194 + ((int)stk + 0)) + 0x3), 0xC30999E, 0x6);
                            FUN_0c186740((*(int *)0xC309994), (0x194 + ((int)stk + 0)), (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))));
                            t227 = (strcpy(0xC3053B8, 0xC1A8B00));
                        } else {
                            if (t4 != 98) {
                                t223 = (FUN_0c0222a4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4), ((int)stk + 0)));
                            } else {
                                if ((*(signed char *)(((int)stk + 0))) == 7) {
                                    FUN_0c1864e0(t5, 0xC309BE0, 0x1);
                                    FUN_0c1864e0((*(int *)0xC309994), 0xC309BE1, 0x1);
                                    FUN_0c1864e0((*(int *)0xC309994), 0xC309BE2, 0x1);
                                    FUN_0c1864e0((*(int *)0xC309994), 0xC309BE3, 0x1);
                                    (((struct o194_uchar *)(((int)stk + 0)))->v) = 0x72;
                                    *(unsigned int *)(((int)stk + 8)) = ((0x194 + ((int)stk + 0)) + 0x1);
                                    *(unsigned char *)((((0x194 + ((int)stk + 0)) + 0x1) + 0x0)) = 0x9;
                                    *(unsigned char *)(((0x194 + ((int)stk + 0)) + 0x2)) = 0x2;
                                    FUN_0c187a88(((0x194 + ((int)stk + 0)) + 0x3), 0xC30999E, 0x6);
                                    FUN_0c186740((*(int *)0xC309994), (0x194 + ((int)stk + 0)), (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))));
                                    t219 = (strcpy(0xC3053B8, 0xC1A8B24));
                                } else {
                                    if (t4 != 98) {
                                        t215 = (FUN_0c0222a4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4), ((int)stk + 0)));
                                    } else {
                                        if ((*(signed char *)(((int)stk + 0))) == 2) {
                                            FUN_0c1864e0(t5, 0xC309BE4, 0x1);
                                            (((struct o194_uchar *)(((int)stk + 0)))->v) = 0x72;
                                            *(unsigned int *)(((int)stk + 8)) = ((0x194 + ((int)stk + 0)) + 0x1);
                                            *(unsigned char *)((((0x194 + ((int)stk + 0)) + 0x1) + 0x0)) = 0x9;
                                            *(unsigned char *)(((0x194 + ((int)stk + 0)) + 0x2)) = 0x4;
                                            FUN_0c187a88(((0x194 + ((int)stk + 0)) + 0x3), 0xC30999E, 0x6);
                                            FUN_0c186740((*(int *)0xC309994), (0x194 + ((int)stk + 0)), (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))));
                                            t211 = (strcpy(0xC3053B8, 0xC1A8B48));
                                        } else {
                                            if (t4 != 98) {
                                                t207 = (FUN_0c0222a4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4), ((int)stk + 0)));
                                            } else {
                                                if ((*(signed char *)(((int)stk + 0))) == 4) {
                                                    FUN_0c1864e0(t5, 0xC309BE8, 0x1);
                                                    FUN_0c1864e0((*(int *)0xC309994), 0xC309BE9, 0x1);
                                                    FUN_0c1864e0((*(int *)0xC309994), 0xC309BEA, 0x1);
                                                    FUN_0c1864e0((*(int *)0xC309994), 0xC309BEB, 0x1);
                                                    (((struct o194_uchar *)(((int)stk + 0)))->v) = 0x72;
                                                    *(unsigned int *)(((int)stk + 8)) = ((0x194 + ((int)stk + 0)) + 0x1);
                                                    *(unsigned char *)((((0x194 + ((int)stk + 0)) + 0x1) + 0x0)) = 0x9;
                                                    *(unsigned char *)(((0x194 + ((int)stk + 0)) + 0x2)) = 0x3;
                                                    FUN_0c187a88(((0x194 + ((int)stk + 0)) + 0x3), 0xC30999E, 0x6);
                                                    FUN_0c186740((*(int *)0xC309994), (0x194 + ((int)stk + 0)), (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))));
                                                    t203 = (strcpy(0xC3053B8, 0xC1A8B70));
                                                } else {
                                                    if (t4 != 98) {
                                                        t199 = (FUN_0c0222a4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4), ((int)stk + 0)));
                                                    } else {
                                                        if ((*(signed char *)(((int)stk + 0))) == 3) {
                                                            FUN_0c1864e0(t5, 0xC309C6C, 0x1);
                                                            FUN_0c1864e0((*(int *)0xC309994), 0xC309C6D, 0x1);
                                                            FUN_0c1864e0((*(int *)0xC309994), 0xC309C6E, 0x1);
                                                            FUN_0c1864e0((*(int *)0xC309994), 0xC309C6F, 0x1);
                                                            FUN_0c1864e0((*(int *)0xC309994), 0xC309C70, 0x1);
                                                            FUN_0c1864e0((*(int *)0xC309994), 0xC309C71, 0x1);
                                                            (((struct o194_uchar *)(((int)stk + 0)))->v) = 0x72;
                                                            *(unsigned int *)(((int)stk + 8)) = ((0x194 + ((int)stk + 0)) + 0x1);
                                                            *(unsigned char *)((((0x194 + ((int)stk + 0)) + 0x1) + 0x0)) = 0x9;
                                                            *(unsigned char *)(((0x194 + ((int)stk + 0)) + 0x2)) = 0x5;
                                                            FUN_0c187a88(((0x194 + ((int)stk + 0)) + 0x3), 0xC30999E, 0x6);
                                                            FUN_0c186740((*(int *)0xC309994), (0x194 + ((int)stk + 0)), (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))));
                                                            t195 = (strcpy(0xC3053B8, 0xC1A8B9C));
                                                        } else {
                                                            if ((t4 == 98) && (t181 = *(signed char *)(((int)stk + 0)), t181 == 5)) {
                                                                FUN_0c1864e0(t5, (((int)stk + 0) + 0x4), 0x1);
                                                                t183 = 0x0;
                                                                for (;;) {
                                                                    if ((int)t183 >= (int)(unsigned char)(*(signed char *)(((int)stk + 4)))) {
                                                                        break;
                                                                    }
                                                                    FUN_0c1864e0((*(int *)0xC309994), (t183 + 0xC309BEC), 0x1);
                                                                    t183 = (t183 + 0x1);
                                                                }
                                                                *(unsigned char *)((t183 + 0xC309BEC)) = 0x0;
                                                                (((struct o0_uchar *)0xC30985A)->v) = 0x4;
                                                                t188 = 0x12C;
                                                                if ((*(signed char *)0xC30AF89) == 0) {
                                                                    t188 = 0x258;
                                                                }
                                                                (((struct o0_ushort *)0xC30540C)->v) = t188;
                                                                (((struct o0_uchar *)0xC30A51A)->v) = 0x0;
                                                                (((struct o2_ushort *)0xC30A51A)->v) = 0x0;
                                                                (((struct o1_uchar *)0xC30A51A)->v) = 0x1;
                                                                (((struct o1F_uchar *)0xC30540C)->v) = 0x1;
                                                                (((struct o5_uchar *)0xC30985A)->v) = 0x0;
                                                                *(unsigned int *)0xC30AF8C = 0x0;
                                                                (((struct o0_uchar *)0xC30AF8A)->v) = 0x1;
                                                                t195 = (strcpy(0xC3053B8, 0xC1A8BC8));
                                                            } else {
                                                                t195 = (FUN_0c0222a4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4), ((int)stk + 0)));
                                                            }
                                                        }
                                                        t199 = t195;
                                                    }
                                                    t203 = t199;
                                                }
                                                t207 = t203;
                                            }
                                            t211 = t207;
                                        }
                                        t215 = t211;
                                    }
                                    t219 = t215;
                                }
                                t223 = t219;
                            }
                            t227 = t223;
                        }
                        t231 = t227;
                    }
                    t235 = t231;
                }
                t239 = t235;
            }
            t247 = t239;
        }
        t257 = t247;
    }
    return t257;
}
