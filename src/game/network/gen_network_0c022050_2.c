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

