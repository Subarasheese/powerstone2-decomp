/* Straight-line functions with calls and guards (batch gen_im): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o382A_short { char p[0x382A]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_uchar { char p[0x90]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2aa2(int, int);
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
extern int FUN_0c0decfc();
int FUN_0c0df09c(int);
int FUN_0c1614c8(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c0caaf0(int a4, int a5, int a6, int a7, int a8);
int FUN_0c15a65c(int a4, int a5, int a6, int a7);
int FUN_0c0df0ca(int a4, int a5, int a6, int a7);
int FUN_0c152fa4(int a4);
int FUN_0c15a404(int a4, int a5, int a6, int a7);

int FUN_0c0caaf0(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t58;
    register int t6;
    register int t7;
    register int t28;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 20)) = (t0 * 0x34);
    (((struct o18_uchar *)(((int)stk + 0)))->v) = (*(signed char *)((((t0 * 0x34) + 0xC2738B8) + 0x1)));
    t2 = *(signed char *)(((int)stk + 24));
    t3 = (((struct oC_int *)0xC4B40CC)->v);
    *(unsigned int *)(((int)stk + 16)) = t2;
    t4 = FUN_0c037320(t2, t3);
    t58 = 0x0;
    if ((int)t4 < 0) {
    } else {
        t6 = FUN_0c037320(0x27, ((((struct o0_int *)0xC4B40CC)->v)));
        t58 = 0x0;
        if ((int)t6 < 0) {
        } else {
            t7 = FUN_0c03f444(0x9, 0x0, (t4 + t6));
            t58 = 0x0;
            if (t7 == 0) {
            } else {
                FUN_0c03733c(t7, (*(int *)(((int)stk + 16))), ((((struct oC_int *)0xC4B40CC)->v)));
                FUN_0c03744a(((((struct oD0_int *)(t7))->v)), 0x0, 0x27, ((((struct o0_int *)0xC4B40CC)->v)));
                (((struct o68_uint *)((*(int *)(((0xC4 + t7) + 0xC)))))->v) = (((((struct oC4_int *)(t7))->v)) + 0x28);
                *(unsigned int *)((t7 + 0x4)) = 0xC0CA928;
                (((struct oAC_ushort *)(t7))->v) = 0x21F;
                (((struct oA9_uchar *)(t7))->v) = 0x40;
                FUN_0c0c25c4(t7);
                (((struct o41D_uchar *)(t7))->v) = 0x0;
                (((struct o41C_uchar *)(t7))->v) = (*(int *)(((int)stk + 0)));
                (((struct o424_uchar *)(t7))->v) = (*(int *)(((int)stk + 8)));
                (((struct o1B_uchar *)(t7))->v) = (*(int *)(((int)stk + 4)));
                FUN_0c0c2ab6(t7, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t7 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
                (((struct o12C_ushort *)(t7))->v) = 0x0;
                (((struct o420_ushort *)(t7))->v) = (*(short *)(((0xC2738B8 + (*(int *)(((int)stk + 20)))) + 0x1A)));
                FUN_0c0c212c(t7);
                *(volatile int *)(((int)stk + 12));
                FUN_0c187798();
                (((struct oB4_float *)(t7))->v) = 1.0f;
                (((struct oB8_float *)(t7))->v) = 1.0f;
                (((struct oBC_float *)(t7))->v) = 1.0f;
                t28 = *(signed char *)((t7 + 0x41C));
                if ((unsigned char)t28 != 8) {
                    if ((unsigned char)t28 != 9) {
                        if ((unsigned char)t28 != 10) {
                        } else {
                            (((struct o22_ushort *)(t7))->v) = 0x1E0;
                        }
                    } else {
                        (((struct o22_ushort *)(t7))->v) = 0x168;
                    }
                } else {
                    (((struct o22_ushort *)(t7))->v) = 0x12C;
                }
                *(unsigned char *)((((((struct oC8_int *)(t7))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oCC_int *)(t7))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oD0_int *)(t7))->v)) + 0x0)) = 0x0;
                FUN_0c0c2aa2(t7, a8);
                FUN_0c1614c8(t7, 0x0);
                t58 = t7;
            }
        }
    }
    return t58;
}

int FUN_0c15a65c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
            t0 = (((struct o4_int *)0xC2A2AC0)->v);
            u0 = ((float)((*(short *)((a4 + 0x1C))) - t0) / (float)(((((struct o8_int *)0xC2A2AC0)->v)) - t0));
            u0 = -u0;
            (((struct oBC_float *)(a4))->v) = (u0 + 1.0f);
            (((struct oB8_float *)(a4))->v) = (u0 + 1.0f);
            (((struct oB4_float *)(a4))->v) = (u0 + 1.0f);
            u0 = (((struct o30_float *)0xC2A2AC0)->v);
            u1 = (((((((struct o34_float *)0xC2A2AC0)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AC0)->v)));
            (((struct o48_float *)(a4))->v) = (u0 + u1);
            (((struct o44_float *)(a4))->v) = (u0 + u1);
            (((struct o40_float *)(a4))->v) = (u0 + u1);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = (((struct o0_int *)0xC2A2AC0)->v);
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t0)) == (t0 - 1)) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t0 = *(short *)((a4 + 0x1C));
            t1 = t0;
            if (t0 == ((((struct o8_int *)0xC2A2AC0)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
    u0 = (((struct o30_float *)0xC2A2AC0)->v);
    u1 = (((((((struct o34_float *)0xC2A2AC0)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AC0)->v)));
    (((struct o48_float *)(a4))->v) = (u0 + u1);
    (((struct o44_float *)(a4))->v) = (u0 + u1);
    (((struct o40_float *)(a4))->v) = (u0 + u1);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = (((struct o0_int *)0xC2A2AC0)->v);
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t0)) == (t0 - 1)) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 != ((((struct o4_int *)0xC2A2AC0)->v))) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c0df0ca(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)0xC54223C) != 0) {
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
                case 16:
                {
                    return ((int (*)(int, int, int))(FUN_0c0decfc))(a4, a5, a6);
                }
                case 18:
                {
                    return ((int (*)(int, int, int, int))(0xC0DF050))(a4, a5, a6, a7);
                }
                case 20:
                {
                    return FUN_0c0df09c(a4);
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
    (((struct o41C_uchar *)(a4))->v) = 0xC5;
    FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct o28_float *)(a4))->v) = (*(float *)((0xC287F5C + (((*(signed char *)((a4 + 0x2))) << 2) << 2))));
    (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)(((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC287F5C)))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o8_float *)(((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC287F5C)))->v));
    *(unsigned int *)((a4 + 0x38)) = (*(int *)(((0xC287F5C + (((*(signed char *)((a4 + 0x2))) << 2) << 2)) + 0xC)));
    t0 = *(short *)0xC27603A;
    (((struct o160_float *)(a4))->v) = (float)t0;
    (((struct o420_ushort *)(a4))->v) = (int)(float)t0;
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
            case 16:
            {
                return ((int (*)(int))(FUN_0c0decfc))(a4);
            }
            case 18:
            {
                return ((int (*)(int, int, int, int))(0xC0DF050))(a4, a5, a6, a7);
            }
            case 20:
            {
                return FUN_0c0df09c(a4);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}

int FUN_0c152fa4(int a4)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_2 = a4;
    v0_3 = *(int *)((v0_2 + 0x10));
    v0_1 = (0x2);
    v0_0 = (v0_2);
    v0_2 = (v0_3);
    if ((((((struct o382A_short *)(v0_3))->v)) == 0)) goto L_C152FD4;
    if (((unsigned char)(*(signed char *)((v0_2 + 0x3743))) != 96)) goto L_C152FD4;
    if (((*(signed char *)((v0_2 + 0xA8))) != 0)) goto L_C152FD8;
    L_C152FD4:;
    (((struct o14_uchar *)(v0_0))->v) = v0_1;
    L_C152FD8:;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_4 = (v0_3);
    v0_2 = (0x0);
    if ((v0_3 == 0)) goto L_C153010;
    if ((v0_4 == 1)) goto L_C15304A;
    if ((v0_4 != 2)) goto L_C152FEE;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C152FEE:;
    L_C153138:;
    return v0_4;
    L_C15304A:;
    v0_4 = (0xC4);
    v0_3 = (v0_2);
    if (((*(signed char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0))) == 0)) goto L_C153114;
    v0_7 = *(int *)((v0_0 + v0_4));
    v0_4 = thunk_FUN_0c058310(((*(int *)(((((*(signed char *)(((0x90 + v0_7) + 0x2))) << 2) + (0xC53255C + ((short)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (v0_0 + 0x28));
    v0_6 = *(signed char *)(((0x90 + v0_7) + 0x0));
    (((struct o90_uchar *)(v0_7))->v) = (v0_6 - 1);
    v0_4 = (v0_4);
    v0_3 = ((v0_3 + 0x1));
    v0_5 = (v0_7);
    v0_7 = ((0x90 + v0_7));
    if (((signed char)(v0_6 - 1) != 0)) goto L_C153114;
    *(unsigned char *)((v0_7 + 0x0)) = v0_1;
    v0_1 = *(signed char *)((v0_7 + 0x1));
    *(unsigned char *)((v0_7 + 0x1)) = (v0_1 + 0x1);
    if (((int)(signed char)(v0_1 + 0x1) >= (int)0x4)) goto L_C1530B0;
    v0_4 = ((FUN_0c037498(v0_5, (*(signed char *)((v0_7 + 0x1))), 0x1D, (*(int *)0xC4B40CC))));
    L_C153114:;
    if ((v0_3 != 0)) goto L_C153138;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    goto L_C153138;
    L_C1530B0:;
    v0_1 = *(signed char *)((v0_7 + 0x3));
    *(unsigned char *)((v0_7 + 0x3)) = (v0_1 - 1);
    v0_4 = ((signed char)(v0_1 - 1));
    if (((signed char)(v0_1 - 1) == 0)) goto L_C153112;
    *(unsigned char *)((v0_7 + 0x1)) = v0_2;
    FUN_0c037498(v0_5, (*(signed char *)((v0_7 + 0x1))), 0x1D, (*(int *)0xC4B40CC));
    *(unsigned int *)(((int)stk + 0)) = ((((struct o80_int *)(v0_5))->v));
    v0_1 = FUN_0c179ac0();
    v0_4 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C1530E4;
    v0_4 = ((v0_4 & 0xF));
    L_C1530EE:;
    (((struct o80_uint *)(v0_5))->v) = (((v0_4 << 8) << 2) << 2);
    v0_4 = (0x80);
    if ((((((struct o80_int *)(v0_5))->v)) != (*(int *)(((int)stk + 0))))) goto L_C153114;
    *(unsigned int *)((v0_5 + v0_4)) = (((*(int *)((v0_5 + v0_4))) + 0x4000) & 0xF000);
    goto L_C153114;
    L_C1530E4:;
    v0_4 = (((~(((~v0_4) + 0x1) & 0xF)) + 0x1));
    goto L_C1530EE;
    L_C153112:;
    *(unsigned char *)((v0_5 + 0x0)) = v0_2;
    goto L_C153114;
    L_C153010:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_3))->v) = 50.0f;
    *(unsigned char *)(((0x90 + v0_3) + 0x1)) = v0_2;
    (((struct o90_uchar *)(v0_3))->v) = v0_1;
    *(unsigned char *)(((0x90 + v0_3) + 0x2)) = (*(signed char *)0xC2A27C3);
    *(unsigned char *)(((0x90 + v0_3) + 0x3)) = 0xD;
    (((struct o8C_float *)(v0_3))->v) = (1.0f + 1.0f);
    (((struct o88_float *)(v0_3))->v) = (1.0f + 1.0f);
    (((struct o84_float *)(v0_3))->v) = (1.0f + 1.0f);
    goto L_C15304A;
}

int FUN_0c15a404(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
            t0 = (((struct o4_int *)0xC2A2AB4)->v);
            u0 = ((float)((*(short *)((a4 + 0x1C))) - t0) / (float)(((((struct o8_int *)0xC2A2AB4)->v)) - t0));
            u0 = -u0;
            (((struct oBC_float *)(a4))->v) = (u0 + 1.0f);
            (((struct oB8_float *)(a4))->v) = (u0 + 1.0f);
            (((struct oB4_float *)(a4))->v) = (u0 + 1.0f);
            u0 = (((struct o34_float *)0xC2A2AB4)->v);
            u1 = (((((((struct o38_float *)0xC2A2AB4)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AB4)->v)));
            (((struct o48_float *)(a4))->v) = (u0 + u1);
            (((struct o44_float *)(a4))->v) = (u0 + u1);
            (((struct o40_float *)(a4))->v) = (u0 + u1);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = (((struct o0_int *)0xC2A2AB4)->v);
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t0)) == (t0 - 1)) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t0 = *(short *)((a4 + 0x1C));
            t1 = t0;
            if (t0 == ((((struct o8_int *)0xC2A2AB4)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
    u0 = (((struct o34_float *)0xC2A2AB4)->v);
    u1 = (((((((struct o38_float *)0xC2A2AB4)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AB4)->v)));
    (((struct o48_float *)(a4))->v) = (u0 + u1);
    (((struct o44_float *)(a4))->v) = (u0 + u1);
    (((struct o40_float *)(a4))->v) = (u0 + u1);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = (((struct o0_int *)0xC2A2AB4)->v);
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t0)) == (t0 - 1)) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 != ((((struct o4_int *)0xC2A2AB4)->v))) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
