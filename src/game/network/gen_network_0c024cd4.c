/* game/network: functions 0C024CD4-0C02624E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0159c4(int, int, int, int, int);
int FUN_0c015b58(void);
int FUN_0c018e74(int);
int FUN_0c018fd2(int);
int FUN_0c01a9c0(void);
int FUN_0c01cda2(int, int, int, int, int, int, int);
int FUN_0c01e9e4(void);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0221b0(void);
int FUN_0c0222a4(int, int, int);
int FUN_0c02a94e(void);
int FUN_0c02aa9e(void);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c02b50c(float);
int FUN_0c02b7da(void);
int FUN_0c02bae6(void);
int FUN_0c02c324(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c0573d8(void);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
extern int FUN_0c187798();
int FUN_0c187a88(int, int, int);
int memset(int, int, int);
int FUN_0c187cac(int, int, int, int, int);
int strcpy(int, int);
int strlen(int);
int FUN_0c024cd4(void);
int FUN_0c0253be(void);
int FUN_0c025564(void);
int FUN_0c02568a(int a4, int a5, int a6);
int FUN_0c025c46(int a4, int a5, int a6);
int FUN_0c025eba(void);
int FUN_0c02610c(int a4);


int FUN_0c0253be(void)
{
    int stk[36];
    register int t0;
    register int t6;
    register int t19;
    register int t81;

    t0 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t0 + 0x1);
    if ((short)(t0 + 0x1) == 16) {
        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    }
    if ((int)(*(short *)0xC30EF6C) < (int)0x24) {
        t81 = (FUN_0c02bae6());
    } else {
        *(unsigned short *)0xC30EF6C = 0x24;
        t6 = FUN_0c022050();
        t81 = t6;
        if (t6 == 0) {
        } else {
            FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
            if ((*(signed char *)(((int)stk + 0))) != 99) {
                t81 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4)));
            } else {
                if ((*(signed char *)(((int)stk + 4))) != 1) {
                    t81 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4)));
                } else {
                    FUN_0c1864e0((*(int *)0xC309994), 0xC309BC8, 0x1);
                    FUN_0c1864e0((*(int *)0xC309994), 0xC309BC9, 0x1);
                    FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
                    t19 = *(signed char *)(((int)stk + 0));
                    if (t19 != 0) {
                        if (t19 != 1) {
                            t81 = t19;
                            if (t19 != 2) {
                            } else {
                                (((struct o0_uchar *)0xC30985A)->v) = 0x7;
                                *(unsigned char *)0xC30A34A = 0x2;
                                (((struct o0_ushort *)0xC30540C)->v) = 0x0;
                                FUN_0c018e74(0x47);
                                t81 = (FUN_0c0573d8());
                            }
                        } else {
                            (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x74;
                            *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
                            *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x5;
                            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x3;
                            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = (*(signed char *)((0xC309E0A + ((short)(*(signed char *)0xC30A34B) * (short)0x86))));
                            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x4)) = ((int)((*(short *)((0xC309E0A + ((short)(*(signed char *)0xC30A34B) * (short)0x86)))) & 0xFF00) >> 8);
                            FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
                            (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
                            (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                            (((struct oA_uchar *)0xC30540C)->v) = 0x0;
                            FUN_0c02b7da();
                            FUN_0c01e9e4();
                            FUN_0c02c324();
                            *(unsigned short *)0xC30EF6C = 0x0;
                            t81 = (FUN_0c0573c0(0xFF000000, 0x0, 0x14));
                        }
                    } else {
                        (((struct o0_uchar *)0xC30985A)->v) = 0x7;
                        *(unsigned char *)0xC30A34A = 0x1;
                        (((struct o0_ushort *)0xC30540C)->v) = 0x0;
                        FUN_0c018e74(0x48);
                        t81 = (FUN_0c0573d8());
                    }
                }
            }
        }
    }
    return t81;
}

int FUN_0c025564(void)
{
    int stk[101];
    int t9;
    int t44;
    int t0;
    int t3;
    int t5;

    t0 = *(signed char *)0xC30985D;
    if (t0 == 0) {
        (((struct o1_uchar *)0xC30985C)->v) = ((*(signed char *)0xC30985D) + 0x1);
        t44 = (FUN_0c0159c4(0x0, 0x3A, 0xC309D06, 0x22, 0x0));
    } else {
        if ((signed char)t0 == 1) {
            t3 = FUN_0c015b58();
            t44 = t3;
            if (t3 != 0) {
                (((struct o1_uchar *)0xC30985C)->v) = ((*(signed char *)0xC30985D) + 0x1);
                if ((int)t3 >= 0) {
                    t5 = strlen(0xC309D06);
                    if ((int)t5 >= (int)0x1) {
                        (((struct o10_uchar *)(((int)stk + 4)))->v) = 0x7B;
                        *(unsigned char *)(((((int)stk + 4) + 0x10) + 0x2)) = 0x1;
                        *(unsigned char *)((((((int)stk + 4) + 0x10) + 0x3) + 0x0)) = (strlen(0xC3099A6));
                        FUN_0c187a88(((((int)stk + 4) + 0x10) + 0x4), 0xC3099A6, (*(signed char *)((((((int)stk + 4) + 0x10) + 0x3) + 0x0))));
                        t9 = *(signed char *)((((((int)stk + 4) + 0x10) + 0x3) + 0x0));
                        *(unsigned char *)((((t9 + 0x4) + (((int)stk + 4) + 0x10)) + 0x0)) = (strlen(0xC309D06));
                        FUN_0c187a88((((t9 + 0x4) + (((int)stk + 4) + 0x10)) + 0x1), 0xC309D06, (*(signed char *)((((t9 + 0x4) + (((int)stk + 4) + 0x10)) + 0x0))));
                        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x10) + 0x1);
                        *(unsigned char *)((((((int)stk + 4) + 0x10) + 0x1) + 0x0)) = (((t9 + 0x4) + (*(signed char *)((((t9 + 0x4) + (((int)stk + 4) + 0x10)) + 0x0)))) + 0x1);
                        FUN_0c186740((*(int *)0xC309994), (((int)stk + 4) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))));
                    }
                }
                t44 = (memset(0xC309D06, 0x0, 0x80));
            }
        } else {
            (((struct o0_uchar *)0xC30985C)->v) = 0x0;
            (((struct o1_uchar *)0xC30985C)->v) = 0x0;
            t44 = (signed char)t0;
        }
    }
    return t44;
}


int FUN_0c025c46(int a4, int a5, int a6)
{
    int stk[103];

    int v0_3;
    int v0_4;
    int v0_2;
    int v0_0;
    int v0_5;
    int v0_1;
    int R1;
    int T_;
    int R3;
    int R2;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    if (((*(int *)0xC30A3F8) == 0)) goto L_C025C6C;
    v0_3 = ((FUN_0c02a94e()));
    L_C025DD8:;
    return v0_3;
    L_C025C6C:;
    v0_4 = FUN_0c022050();
    v0_3 = (v0_4);
    v0_2 = (0xC30540C);
    v0_0 = (0x0);
    v0_1 = (0xC30A34A);
    if (!((v0_4 != 0))) goto L_C025D8E;
    FUN_0c0220c4((((int)stk + 12) + 0x8), ((int)stk + 12), (((int)stk + 12) + 0x4));
    v0_4 = *(signed char *)(((int)stk + 20));
    v0_3 = (v0_4);
    if ((v0_4 != 107)) goto L_C025D58;
    if (((*(signed char *)(((int)stk + 16))) != 1)) goto L_C025D58;
    *(unsigned int *)(((int)stk + 24)) = 0xC30AD5C;
    v0_3 = (v0_0);
    v0_4 = (0xC1864E0);
    v0_4 = (0xC309994);
    v0_5 = (0x6);
    goto L_C025CB8;
    L_C025D8E:;
    v0_4 = *(short *)(v0_2);
    *(unsigned short *)(v0_2) = (v0_4 + 0x1);
    if (((int)(short)((v0_4 + 0x1) - 1) >= (int)0x258)) goto L_C025DBA;
    if (((int)(*(short *)(v0_2)) < (int)0x3C)) goto L_C025DD8;
    v0_2 = (FUN_0c021ed2()) != 0;
    if (v0_2) goto L_C025DBA;
    v0_2 = FUN_0c021ee2();
    v0_3 = (v0_2);
    if ((v0_2 == 0)) goto L_C025DD8;
    L_C025DBA:;
    (((struct o0_uchar *)0xC30985A)->v) = 0x4;
    (((struct o1_uchar *)0xC30985A)->v) = v0_0;
    if (((*(signed char *)(v0_1)) != 1)) goto L_C025DCE;
    v0_3 = (0x48);
    L_C025DD0:;
    v0_2 = FUN_0c018fd2(v0_3);
    *(unsigned char *)(v0_1) = v0_0;
    v0_3 = (v0_2);
    goto L_C025DD8;
    L_C025DCE:;
    v0_3 = (0x47);
    goto L_C025DD0;
    L_C025CB8:;
    if (((int)v0_3 < (int)v0_5)) goto L_C025CAC;
    *(unsigned char *)(v0_3 + 0xC30AD5C) = v0_0;
    FUN_0c1864e0((*(int *)(v0_4)), ((int)stk + 12), 0x1);
    v0_3 = (v0_0);
    v0_5 = (0xC309C74);
    L_C025D14:;
    if (((int)v0_3 < (int)(unsigned char)(*(signed char *)(((int)stk + 12))))) goto L_C025D08;
    FUN_0c1864e0((*(int *)(v0_4)), ((int)stk + 12), 0x1);
    v0_3 = (v0_0);
    v0_5 = (0xC309C86);
    L_C025D36:;
    if (((int)v0_3 < (int)(unsigned char)(*(signed char *)(((int)stk + 12))))) goto L_C025D2A;
    v0_3 = ((FUN_0c01cda2(0x3, 0x9, 0x0, 0x0, 0xC1A8C6C, 0xC309C74, 0xC309C86)));
    goto L_C025D8E;
    L_C025D2A:;
    FUN_0c1864e0((*(int *)(v0_4)), (v0_3 + v0_5), 0x1);
    v0_3 = (v0_3 + 0x1);
    goto L_C025D36;
    L_C025D08:;
    FUN_0c1864e0((*(int *)(v0_4)), (v0_3 + v0_5), 0x1);
    v0_3 = (v0_3 + 0x1);
    goto L_C025D14;
    L_C025CAC:;
    FUN_0c1864e0((*(int *)(v0_4)), ((*(int *)(((int)stk + 24))) + v0_3), 0x1);
    v0_3 = (v0_3 + 0x1);
    goto L_C025CB8;
    L_C025D58:;
    if ((v0_3 != 101)) goto L_C025D80;
    if (((*(signed char *)(((int)stk + 16))) != 6)) goto L_C025D80;
    FUN_0c0221b0();
    *(unsigned int *)0xC30A3F8 = 0x1;
    *(unsigned short *)(v0_2) = 0x258;
    *(unsigned char *)(v0_1) = v0_0;
    v0_3 = ((FUN_0c01a9c0()));
    goto L_C025DD8;
    L_C025D80:;
    v0_3 = ((FUN_0c0222a4((((int)stk + 12) + 0x8), ((int)stk + 12), (((int)stk + 12) + 0x4))));
    goto L_C025D8E;
}

int FUN_0c025eba(void)
{
    int stk[3];
    register int t0;
    register int t5;
    register int t6;

    t0 = FUN_0c022050();
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    }
    t5 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t5 + 0x1);
    t6 = (short)(t5 + 0x1);
    if ((int)(short)(t5 + 0x1) >= (int)0x14) {
        (((struct o0_uchar *)0xC309859)->v) = 0x1;
        (((struct o1_uchar *)0xC309859)->v) = 0x0;
        (((struct o2_uchar *)0xC309859)->v) = 0x0;
        *(unsigned char *)0xC305415 = 0x0;
        *(unsigned short *)0xC30EF6C = 0x0;
        t6 = 0x0;
    }
    return t6;
}



