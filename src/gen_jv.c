/* Straight-line functions with calls and guards (batch gen_jv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03a6c4(void);
int FUN_0c03a70a(void);
int FUN_0c03b3fc(void);
int FUN_0c03c742(void);
int FUN_0c03c780(void);
int FUN_0c03c7ba(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4770();
extern int FUN_0c0c47a4();
extern int FUN_0c0c4b76();
extern int FUN_0c0c4bcc();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
int FUN_0c17c130(int, int, int);
int buMountDisk(int, int, int);
int buUnmount(int);
int vmu_lcd_refresh(int);
int FUN_0c0e2418(int a4, int a5, int a6, int a7);
int FUN_0c125582(int a4);
int FUN_0c150684(int a4, int a5, int a6, int a7);
int FUN_0c03c7ec(int a4);

int FUN_0c0e2418(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if ((unsigned int)t0 < (unsigned int)0xC) {
            switch ((t0 << 1)) {
                case 0:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4770))(a4, a5, a6);
                }
                case 2:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c47a4))(a4, a5, a6);
                }
                case 4:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4b76))(a4, a5, a6);
                }
                case 6:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4bcc))(a4, a5, a6);
                }
                case 8:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
                }
                case 10:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
                }
                case 12:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c52c4))(a4, a5, a6);
                }
                case 14:
                {
                    return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
                }
                default:
                {
                    return FUN_0c0c2a80(a4);
                }
            }
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o41C_uchar *)(a4))->v) = 0xC9;
    FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct o28_float *)(a4))->v) = (*(float *)((0xC288010 + (((*(signed char *)((a4 + 0x2))) << 2) << 2))));
    (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)(((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC288010)))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o8_float *)(((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC288010)))->v));
    *(unsigned int *)((a4 + 0x38)) = (*(int *)(((0xC288010 + (((*(signed char *)((a4 + 0x2))) << 2) << 2)) + 0xC)));
    (((struct o160_float *)(a4))->v) = 0.0f;
    (((struct o420_ushort *)(a4))->v) = 0x0;
    FUN_0c0c212c(a4);
    (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return ((int (*)(int))(FUN_0c0c4770))(a4);
            }
            case 2:
            {
                return ((int (*)(int))(FUN_0c0c47a4))(a4);
            }
            case 4:
            {
                return ((int (*)(int))(FUN_0c0c4b76))(a4);
            }
            case 6:
            {
                return ((int (*)(int))(FUN_0c0c4bcc))(a4);
            }
            case 8:
            {
                return ((int (*)(int))(FUN_0c0c4c1c))(a4);
            }
            case 10:
            {
                return ((int (*)(int))(FUN_0c0c5024))(a4);
            }
            case 12:
            {
                return ((int (*)(int))(FUN_0c0c52c4))(a4);
            }
            case 14:
            {
                return ((int (*)(int))(FUN_0c0c8c08))(a4);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
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

int FUN_0c150684(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        (((struct o41C_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x1;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    FUN_0c17c130((0x90 + t0), (0x90 + t0), (0x9C + t0));
    FUN_0c17c130((t0 + 0x6C), (t0 + 0x6C), (0x90 + t0));
    t1 = *(signed char *)(((0x41C + a4) + 0x1));
    *(unsigned char *)(((0x41C + a4) + 0x1)) = (t1 - 1);
    if ((signed char)(t1 - 1) == 0) {
        *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x4;
        FUN_0c037498(t0, (*(signed char *)(((0x41C + a4) + 0x0))), 0x7, (*(int *)0xC4B40CC));
        t1 = *(signed char *)(((0x41C + a4) + 0x0));
        (((struct o41C_uchar *)(a4))->v) = (t1 + 0x1);
        if ((int)(signed char)(t1 + 0x1) >= (int)0xA) {
            *(unsigned char *)((t0 + 0x0)) = 0x0;
        }
    }
    if ((int)(*(signed char *)(((0x41C + a4) + 0x0))) >= (int)0x5) {
        u0 = (float)(*(signed char *)(((0x41C + a4) + 0x1)));
        u0 = u0 + 4.0f * (((-(float)(*(signed char *)(((0x41C + a4) + 0x0)))) + 15.0f));
        (((struct o14_float *)(t0))->v) = (u0 / 32.0f);
    }
    t1 = *(signed char *)(((0x41C + a4) + 0x1));
    u0 = ((float)(*(signed char *)(((0x41C + a4) + 0x0))) * 4.0f);
    u1 = (((struct o4_float *)((0x41C + a4)))->v);
    (((struct o8C_float *)(t0))->v) = ((u1 + (((u0 - (float)t1) + 4.0f) / 64.0f)) * 0.800000012f);
    (((struct o88_float *)(t0))->v) = ((u1 + (((u0 - (float)t1) + 4.0f) / 64.0f)) * 0.800000012f);
    (((struct o84_float *)(t0))->v) = ((u1 + (((u0 - (float)t1) + 4.0f) / 64.0f)) * 0.800000012f);
    if ((*(signed char *)((t0 + 0x0))) != 0) {
        t0 = *(short *)((a4 + 0x1E));
        t1 = t0;
        if (t0 != 0) {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c03c7ec(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_4 = a4;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)0xC3C9FB8);
    *(unsigned int *)(((int)stk + 4)) = 0xC3C9E10;
    v0_9 = *(signed char *)0xC3C9FCE;
    v0_7 = (v0_9);
    v0_3 = (0x34);
    v0_8 = (0xC3C9FB4);
    v0_5 = (0xC3C9FB8);
    v0_1 = (0xC3C9FB0);
    v0_0 = (0xC3C9FCE);
    v0_2 = (0x1);
    v0_6 = (0x0);
    if ((v0_9 == 0)) goto L_C03C82E;
    if ((v0_7 == 1)) goto L_C03C840;
    if ((v0_7 == 2)) goto L_C03C882;
    if ((v0_7 == 3)) goto L_C03C8B4;
    if ((v0_7 == 4)) goto L_C03C8F0;
    L_C03C944:;
    v0_7 = (0xFFFFFFFF);
    L_C03C946:;
    return v0_7;
    L_C03C8F0:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03C944;
    v0_2 = *(int *)(((((*(int *)(((int)stk + 8))) * v0_3) + (*(int *)(((int)stk + 4)))) + 0x8));
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C03C928;
    v0_2 = FUN_0c03c780();
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C03C928;
    FUN_0c03c742();
    FUN_0c03a6c4();
    vmu_lcd_refresh((*(int *)((v0_5 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_6;
    *(unsigned int *)0xC4B1078 = v0_6;
    L_C03C940:;
    v0_7 = (v0_1);
    goto L_C03C946;
    L_C03C928:;
    FUN_0c03b3fc();
    FUN_0c03a6c4();
    vmu_lcd_refresh((*(int *)((v0_5 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_6;
    *(unsigned int *)0xC4B1078 = v0_6;
    goto L_C03C940;
    L_C03C8B4:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03C944;
    v0_4 = *(int *)((v0_8 + 0x0));
    *(unsigned int *)(((int)stk + 0)) = v0_4;
    if ((v0_4 != (*(int *)(((int)stk + 8))))) goto L_C03C8EA;
    v0_3 = FUN_0c03c7ba((*(int *)(((((*(int *)(((int)stk + 0))) * v0_3) + (*(int *)(((int)stk + 4)))) + 0x0))));
    v0_7 = (v0_3);
    if ((v0_3 == 0)) goto L_C03C8E0;
    if ((v0_7 == -1)) goto L_C03C944;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C03C944;
    L_C03C8E0:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C03C8EA:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C03C944;
    L_C03C882:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03C944;
    v0_4 = *(int *)(((int)stk + 8));
    v0_5 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 0)) = ((v0_4 * v0_3) + v0_5);
    v0_3 = (buMountDisk((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), 0xC3CC820, ((((*(int *)((((v0_4 * v0_3) + v0_5) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C03C944;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C03C8AE:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C03C944;
    L_C03C840:;
    if (((*(int *)((v0_8 + 0x0))) == (*(int *)((v0_5 + 0x0))))) goto L_C03C8AE;
    if (((*(int *)((v0_8 + 0x0))) == -1)) goto L_C03C87C;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C03C858;
    goto L_C03C944;
    L_C03C858:;
    v0_1 = (buUnmount((*(int *)((((*(int *)((v0_8 + 0x0))) * v0_3) + 0xC3C9E10))))) != 0;
    if (v0_1) goto L_C03C944;
    *(unsigned int *)((((*(int *)((v0_8 + 0x0))) * v0_3) + 0xC3C9E14)) = 0x12;
    *(unsigned int *)((v0_8 + 0x0)) = 0xFFFFFFFF;
    L_C03C87C:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C03C944;
    L_C03C82E:;
    *(unsigned int *)0xC4B1078 = v0_2;
    *(unsigned int *)((v0_5 + 0x0)) = v0_4;
    FUN_0c03a70a();
    vmu_lcd_refresh((*(int *)((v0_5 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_2;
    goto L_C03C840;
}
