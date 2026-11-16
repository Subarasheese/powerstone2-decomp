/* Straight-line functions with calls and guards (batch gen_em): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_short { char p[0x41C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c060074(int, int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c118810(int, int);
int FUN_0c11a4c0(int, int);
int FUN_0c175a4c(void);
int FUN_0c179ac0(void);
int FUN_0c17a360(int);
int FUN_0c17a4c0(int, int);
int FUN_0c17a550(int);
int FUN_0c17c130(int, int, int);
extern int FUN_0c187798();
int dbg_printf(int, ...);
int dbg_set_cell_size(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c175cac(void);
int FUN_0c061686(int a4, int a5, int a6, int a7);
int FUN_0c11ab30(int a4, int a5, int a6, int a7);
int FUN_0c126cdc(int a4, int a5, int a6, int a7, float f4);

int FUN_0c175cac(void)
{
    int stk[9];
    register int t15;
    register int t17;
    register int t25;
    int t37;
    register int t39;
    register int t40;
    register int t41;
    register int t48;
    register int t63;
    register int t74;
    register int t87;
    register int t102;
    register int t156;
    register int t168;
    register int t16;
    register int t18;
    register int t38;
    register int t56;
    register int t180;
    register int t91;
    register int t140;
    register int t141;
    register int t186;

    dbg_set_cell_size(0x10, 0x10);
    FUN_0c17a550(0xFF5FFF5F);
    FUN_0c17a4c0(0x8, 0x1);
    FUN_0c17a360(0xC204BF4);
    FUN_0c17a4c0(0x5, 0x3);
    FUN_0c17a550(0xFFFFFF1F);
    FUN_0c17a360(0xC204C08);
    FUN_0c17a4c0(0x14, 0x3);
    FUN_0c17a360(0xC204C10);
    FUN_0c17a4c0(0x17, 0x1C);
    FUN_0c17a550(0xFF1FFFFF);
    *(int *)((int)stk + 8) = ((*(int *)0xC476010));
    *(int *)((int)stk + 4) = 0xC204C1C;
    dbg_printf(0xC204C1C);
    t15 = dbg_set_cell_size(0x8, 0x8);
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0xC204930;
    t17 = 0xC204930;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 24))) >= (int)((((struct o34_int *)0xC204904)->v))) {
            break;
        }
        t15 = (FUN_0c17a550(0xFFFFFFFF));
        t16 = (*(int *)(((int)stk + 20)));
        t18 = 0x0;
        for (;;) {
            if ((int)t18 >= (int)(*(int *)((t17 + 0x4)))) {
                break;
            }
            *(unsigned int *)(((int)stk + 12)) = ((t18 << 2) << 1);
            t25 = *(int *)((t16 + 0x0));
            *(unsigned int *)(((int)stk + 16)) = (((t18 << 2) << 1) + t25);
            t15 = (*(signed char *)(((((t18 << 2) << 1) + t25) + 0x1)));
            t15 = (FUN_0c17a4c0((int)((float)(*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))) * 1.0f), (int)((float)t15 * 1.0f)));
            t15 = (FUN_0c17a360((*(int *)((((*(int *)((t16 + 0x0))) + (*(int *)(((int)stk + 12)))) + 0x4)))));
            t18 = (t18 + 0x1);
        }
        t17 = (t17 + 0x8);
        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x8);
    }
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    t37 = dbg_set_cell_size(0x10, 0x10);
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 32)) = 0xC476014;
    t39 = t16;
    t40 = t17;
    t41 = t18;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 12))) < (int)((((struct o0_int *)0xC204904)->v))) {
            t37 = (FUN_0c17a550(0xFFFFFFFF));
            t40 = (*(int *)(((int)stk + 12)));
            t40 = (t40 * 0x74);
            t40 = (t40 + 0xC475F28);
            t48 = 0xC;
            if ((*(int *)(((int)stk + 12))) == 0) {
                t48 = 0x12;
            }
            *(unsigned int *)(((int)stk + 24)) = t48;
            t39 = 0x0;
            *(unsigned int *)(((int)stk + 16)) = ((((*(int *)(((int)stk + 12))) << 2) << 1) + 0xC2048F4);
            for (;;) {
                if ((int)t39 < (int)(*(int *)(((*(int *)(((int)stk + 16))) + 0x4)))) {
                    t38 = (*(signed char *)((t40 + 0x0)));
                    if (t39 == t38) {
                        t41 = 0xFFFF3F1F;
                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                        t37 = (FUN_0c17a550(t41));
                    } else {
                        t56 = t38;
                    }
                    t38 = t56;
                    t41 = t39;
                    t41 = (t41 << 2);
                    t63 = *(int *)(((*(int *)(((int)stk + 16))) + 0x0));
                    t41 = (t41 << 1);
                    *(unsigned int *)(((int)stk + 28)) = (t63 + t41);
                    t37 = (*(signed char *)(((t63 + t41) + 0x1)));
                    t37 = (FUN_0c17a4c0((int)((float)(*(signed char *)(((*(int *)(((int)stk + 28))) + 0x0))) * 0.5f), (int)((float)t37 * 0.5f)));
                    t37 = (FUN_0c17a360((*(int *)((((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + t41) + 0x4)))));
                    t74 = *(int *)(((*(int *)(((int)stk + 16))) + 0x0));
                    *(unsigned int *)(((int)stk + 28)) = (t74 + t41);
                    t37 = (*(signed char *)(((t74 + t41) + 0x1)));
                    t37 = (FUN_0c17a4c0((int)((float)((*(signed char *)(((*(int *)(((int)stk + 28))) + 0x0))) + (*(int *)(((int)stk + 24)))) * 0.5f), (int)((float)t37 * 0.5f)));
                    t41 = t39;
                    t41 = (t41 << 2);
                    if ((*(int *)(((int)stk + 12))) != 0) {
                        t38 = (*(int *)((((t40 + 0x34) + t41) + 0x0)));
                        if ((*(int *)((((t40 + 0x4) + t41) + 0x0))) != t38) {
                            t37 = (*(int *)(((int)stk + 20)));
                            t87 = 0xFF1FFF1F;
                            if (t37 != 0) {
                                t87 = 0xFFFFFF1F;
                            }
                            t37 = (FUN_0c17a550(t87));
                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                        } else {
                            t91 = t38;
                        }
                        t37 = t39;
                        t38 = t91;
                        if (t37 != 0) {
                            if ((t37 != 1) && ((t37 != 2) && ((t37 != 3) && (t37 != 4)))) {
                                if (t37 != 5) {
                                    t180 = t38;
                                } else {
                                    t37 = 0xC2A5CC8;
                                    t37 = (FUN_0c17a360((*(int *)((((*(int *)((((t40 + 0x4) + t41) + 0x0))) << 2) + t37)))));
                                }
                            } else {
                                t37 = 0xC476014;
                                t102 = *(int *)((t41 + t37));
                                t37 = 0xC2A5C58;
                                *(int *)((int)stk + 8) = (t102);
                                *(int *)((int)stk + 4) = ((*(int *)((((*(int *)((((t40 + 0x4) + t41) + 0x0))) << 2) + t37))));
                                *(int *)((int)stk + 0) = 0xC204C44;
                                t37 = (dbg_printf(0xC204C44));
                            }
                        } else {
                            t38 = t40;
                            t38 = (t38 + 0x4);
                            t37 = 0xC2A5C98;
                            t38 = (t38 + t41);
                            *(int *)((int)stk + 8) = ((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))));
                            *(int *)((int)stk + 4) = ((*(int *)((((*(int *)((t38 + 0x0))) << 2) + t37))));
                            *(int *)((int)stk + 0) = 0xC204C44;
                            t37 = (dbg_printf(0xC204C44));
                        }
                    } else {
                        t37 = t39;
                        switch (t37) {
                        case 5:
                            *(int *)((int)stk + 8) = (unsigned char)(*(int *)((((t40 + 0x4) + t41) + 0x0)));
                            *(int *)((int)stk + 4) = 0xC204BD4;
                            t37 = (dbg_printf(0xC204BD4));
                            break;
                        case 6:
                            t38 = t40;
                            t38 = (t38 + 0x4);
                            t38 = (t38 + t41);
                            *(int *)((int)stk + 8) = (unsigned char)(*(int *)((t38 + 0x0)));
                            *(int *)((int)stk + 4) = 0xC204BD4;
                            t37 = (dbg_printf(0xC204BD4));
                            break;
                        case 7:
                            t37 = 0xC204950;
                            t168 = *(int *)((((t40 + 0x4) + t41) + 0x0));
                            t37 = (FUN_0c17a360((*(int *)((((((t168 << 1) + t168) << 2) << 1) + t37)))));
                            break;
                        case 8:
                            t37 = t40;
                            t37 = (t37 + 0x4);
                            t37 = (*(int *)((t41 + t37)));
                            if (t37 == 8) {
                                t41 = 0xC204C28;
                                t37 = (FUN_0c17a360(t41));
                            } else {
                                if (t37 != -1) {
                                    *(int *)((int)stk + 8) = (unsigned char)(*(int *)((((t40 + 0x4) + t41) + 0x0)));
                                    *(int *)((int)stk + 4) = 0xC204C3C;
                                    t37 = (dbg_printf(0xC204C3C));
                                } else {
                                    t41 = 0xC204C34;
                                    t37 = (FUN_0c17a360(t41));
                                }
                            }
                            break;
                        case 9:
                            if ((int)(*(int *)((((t40 + 0x4) + t41) + 0x0))) <= (int)0xFFFFD8F1) {
                                t41 = 0xC204C34;
                                t37 = (FUN_0c17a360(t41));
                            } else {
                                t38 = 0xC204BD4;
                                *(int *)((int)stk + 8) = ((*(int *)((((t40 + 0x4) + t41) + 0x0))));
                                t156 = t38;
                                *(int *)((int)stk + 4) = t156;
                                t37 = (dbg_printf(t156));
                            }
                            break;
                        case 10:
                            t37 = 0xC2A5CDC;
                            t37 = (FUN_0c17a360((*(int *)((((*(int *)((((t40 + 0x4) + t41) + 0x0))) << 2) + t37)))));
                            break;
                        default:
                            if (t37 != 11) {
                                *(int *)((int)stk + 8) = (unsigned char)(*(int *)((((t40 + 0x4) + t41) + 0x0)));
                                *(int *)((int)stk + 4) = 0xC204BA8;
                                t140 = 0xC204BA8;
                            } else {
                                t38 = 0xC204BD4;
                                *(int *)((int)stk + 8) = ((*(int *)((((t40 + 0x4) + t41) + 0x0))));
                                t140 = t38;
                                *(int *)((int)stk + 4) = t140;
                                t141 = t38;
                            }
                            t38 = t141;
                            t37 = (dbg_printf(t140));
                            break;
                        }
                    }
                    t38 = t180;
                    if ((*(int *)(((int)stk + 20))) != 0) {
                        t37 = (FUN_0c17a550(0xFFFFFFFF));
                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                    } else {
                        t186 = t38;
                    }
                    t38 = t186;
                    t39 = (t39 + 0x1);
                    continue;
                }
                break;
            }
            t38 = (*(int *)(((int)stk + 12)));
            t38 = (t38 + 0x1);
            *(unsigned int *)(((int)stk + 12)) = t38;
            continue;
        }
        break;
    }
    dbg_set_cell_size(0x8, 0x8);
    return FUN_0c175a4c();
}

int FUN_0c061686(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R1;
    register int R2;
    register int R3;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_1 = a4;
    v0_0 = a5;
    v0_9 = a6;
    v0_6 = a7;
    v0_2 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_0, v0_9);
    v0_2 = ((int (*)(void))(FUN_0c187798))();
    w0_4 = (((struct o8_float *)(v0_6))->v);
    w0_5 = (((struct o8_float *)(v0_9))->v);
    v0_8 = (0xC);
    v0_0 = (v0_0);
    v0_1 = (v0_1);
    v0_2 = ((v0_6 + 0x8));
    v0_3 = ((v0_9 + 0x8));
    v0_7 = ((((int)stk + 0) + 0x24));
    v0_4 = (v0_9);
    v0_5 = (v0_6);
    w0_6 = (0.0f);
    w0_1 = ((((((struct oC_float *)((v0_6 + 0x8)))->v)) + ((((struct oC_float *)((v0_9 + 0x8)))->v))));
    w0_0 = ((w0_4 - w0_5));
    w0_2 = (w0_5);
    w0_3 = (w0_4);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C0616E0;
    w0_0 = (((-w0_3) + w0_2));
    L_C0616E2:;
    *(float *)((v0_7 + 0x0)) = (w0_1 - w0_0);
    w0_4 = (((struct o8_float *)(v0_2))->v);
    w0_5 = (((struct o8_float *)(v0_3))->v);
    w0_0 = (((((struct o14_float *)(v0_2))->v)) + (*(float *)((v0_3 + v0_8))));
    v0_8 = (0x8);
    w0_1 = w0_0;
    w0_0 = (w0_4);
    w0_2 = ((w0_4 - w0_5));
    w0_3 = (w0_5);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C061708;
    w0_6 = ((-w0_0));
    w0_0 = (((-w0_0) + w0_3));
    L_C06170A:;
    *(float *)((v0_7 + v0_8)) = (w0_1 - w0_0);
    w0_4 = (((struct o4_float *)(v0_2))->v);
    w0_5 = (((struct o4_float *)(v0_3))->v);
    v0_8 = (0x4);
    w0_1 = ((((((struct o10_float *)(v0_2))->v)) + ((((struct oC_float *)(v0_3))->v))));
    w0_0 = (w0_4);
    w0_2 = (w0_5);
    w0_3 = ((w0_4 - w0_5));
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C061744;
    w0_6 = ((-w0_0));
    w0_0 = (((-w0_0) + w0_2));
    L_C061746:;
    *(float *)((v0_7 + v0_8)) = (w0_1 - w0_0);
    w0_0 = (0.0f);
    if (!(((*(float *)((v0_7 + 0x0))) > 0.0f))) goto L_C0619FA;
    if ((((((struct o8_float *)(v0_7))->v)) > w0_0)) goto L_C061762;
    goto L_C0619FA;
    L_C0619FA:;
    v0_8 = (0x0);
    L_C0619FC:;
    return v0_8;
    L_C061762:;
    if ((!(0.0f > ((((struct o4_float *)(v0_7))->v))))) goto L_C061770;
    goto L_C0619FA;
    L_C061770:;
    v0_8 = (FUN_0c061284(v0_0, v0_1)) == 0;
    if (v0_8) goto L_C06178E;
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)((v0_4 + 0x4)));
    (((struct o135_uchar *)(v0_1))->v) = (*(signed char *)((v0_5 + 0x4)));
    v0_8 = (0x2);
    goto L_C0619FC;
    L_C06178E:;
    w0_0 = (((struct o4_float *)(v0_7))->v);
    w0_1 = (w0_0);
    if ((!(w0_0 > 9.0f))) goto L_C0617B0;
    if (!((!(w0_1 > (*(float *)((v0_7 + 0x0))))))) goto L_C0618C4;
    if ((!(w0_1 > ((((struct o8_float *)(v0_7))->v))))) goto L_C0617B0;
    goto L_C0618C4;
    L_C0618C4:;
    w0_2 = *(float *)((v0_7 + 0x0));
    w0_0 = (w0_2);
    if ((w0_2 > w0_1)) goto L_C061954;
    if ((w0_0 > ((((struct o8_float *)(v0_7))->v)))) goto L_C061954;
    v0_6 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_6) goto L_C061902;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C0618F0;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C0618F8:;
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - (w0_0 / w0_1));
    L_C0619EE:;
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    L_C0619F6:;
    v0_8 = (0x1);
    goto L_C0619FC;
    L_C0618F0:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C0618F8;
    L_C061902:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C06192C;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C06191C;
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C061920:;
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + w0_0);
    L_C0619AC:;
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    goto L_C0619F6;
    L_C06191C:;
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C061920;
    L_C06192C:;
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C061940;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C061948:;
    *(float *)(((int)stk + 12)) = (w0_0 / w0_1);
    *(float *)(((int)stk + 0)) = (-(w0_0 / w0_1));
    L_C0619E4:;
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    goto L_C0619EE;
    L_C061940:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C061948;
    L_C061954:;
    v0_6 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_6) goto L_C061982;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C061972;
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C061976:;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - w0_0);
    goto L_C0619EE;
    L_C061972:;
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C061976;
    L_C061982:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C0619BA;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C06199E;
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C0619A2:;
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + w0_0);
    goto L_C0619AC;
    L_C06199E:;
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C0619A2;
    L_C0619BA:;
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C0619D0;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((-(*(float *)(((int)stk + 44)))));
    L_C0619D8:;
    *(float *)(((int)stk + 20)) = (w0_0 / w0_1);
    *(float *)(((int)stk + 8)) = (-(w0_0 / w0_1));
    goto L_C0619E4;
    L_C0619D0:;
    w0_1 = ((1.0f + 1.0f));
    w0_0 = ((*(float *)(((int)stk + 44))));
    goto L_C0619D8;
    L_C0617B0:;
    if ((!(((((struct o4_float *)(v0_2))->v)) > ((((struct o4_float *)(v0_3))->v))))) goto L_C061878;
    v0_8 = (FUN_0c0612cc(v0_0, v0_1)) == 0;
    if (v0_8) goto L_C0617D4;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o4_float *)(v0_7))->v)));
    goto L_C0619EE;
    L_C0617D4:;
    v0_8 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_8) goto L_C061812;
    FUN_0c060074(v0_3, v0_2, (((int)stk + 0) + 0x18));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 24))) * (*(float *)((v0_7 + 0x0))));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 32))) * ((((struct o8_float *)(v0_7))->v)));
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    L_C061864:;
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)((v0_4 + 0x4)));
    goto L_C0619F6;
    L_C061812:;
    FUN_0c060074(v0_3, v0_2, (((int)stk + 0) + 0x18));
    *(float *)(((int)stk + 12)) = (((*(float *)(((int)stk + 24))) * (*(float *)((v0_7 + 0x0)))) / (1.0f + 1.0f));
    *(float *)(((int)stk + 20)) = (((*(float *)(((int)stk + 32))) * ((((struct o8_float *)(v0_7))->v))) / (1.0f + 1.0f));
    *(float *)(((int)stk + 0)) = (-(*(float *)(((int)stk + 12))));
    *(float *)(((int)stk + 8)) = (-(*(float *)(((int)stk + 20))));
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0xC), v0_5);
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    goto L_C061864;
    L_C061878:;
    v0_6 = (FUN_0c0612cc(v0_1, v0_0)) == 0;
    if (v0_6) goto L_C061892;
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o4_float *)(v0_7))->v)));
    goto L_C0619AC;
    L_C061892:;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((((struct o4_float *)(v0_7))->v)));
    FUN_0c060c80(v0_1, ((int)stk + 0), v0_4);
    FUN_0c061222(v0_0, v0_1);
    (((struct o135_uchar *)(v0_1))->v) = (*(signed char *)((v0_5 + 0x4)));
    FUN_0c06130a(v0_1, v0_4, v0_3, v0_2);
    goto L_C0619F6;
    L_C061744:;
    w0_0 = (w0_3);
    goto L_C061746;
    L_C061708:;
    w0_0 = (w0_2);
    goto L_C06170A;
    L_C0616E0:;
    w0_0 = (w0_0);
    goto L_C0616E2;
}

int FUN_0c11ab30(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;

    t2 = *(int *)0xC473D00;
    t3 = 0x3;
    if (t2 != 0) {
        t4 = 0x9;
        if (t2 != 1) {
            if (t2 != 2) {
            } else {
                t2 = 0x0;
            }
            t4 = t2;
        }
        t3 = t4;
    }
    if (((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) == ((*(signed char *)((a4 + 0x2))) + 0x1)) && (t0 = *(signed char *)((a4 + 0x14)), (int)t0 < (int)0xA)) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x200);
                t2 = (((struct o41C_short *)(a4))->v);
                t4 = *(signed char *)((a4 + 0x2));
                u0 = ((*(float *)(((((t2 << 1) + t2) << 2) + 0xC29FA30))) + ((((struct o4_float *)((0xC291F10 + (((((((t4 << 1) + t4) + t3) + 0x1) << 1) + ((((t4 << 1) + t4) + t3) + 0x1)) << 2))))->v)));
                u0 = u0 + ((((struct o4_float *)0xC291FC4)->v)) * (math_sin_angle16((*(short *)((a4 + 0x1E)))));
                (((struct o2C_float *)(a4))->v) = u0;
                t2 = (((struct o20_short *)(a4))->v);
                t4 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
                if ((int)t2 >= 0) {
                    t4 = (t2 & 0x1);
                }
                if (t4 == 0) {
                    FUN_0c11a4c0(a4, ((((struct o22_short *)(a4))->v)));
                    (((struct o22_ushort *)(a4))->v) = ((-((((struct o22_short *)(a4))->v))) + 0x1);
                }
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                return 0x20;
            }
            if (t0 == 80) {
                t2 = *(short *)((a4 + 0x1E));
                if (((int)t2 >= 0) && ((int)t2 <= (int)0x1E)) {
                    t2 = *(signed char *)((a4 + 0x2));
                    FUN_0c0588bc((a4 + 0x28), ((((((((t2 << 1) + t2) + t3) + 0x2) << 1) + ((((t2 << 1) + t2) + t3) + 0x2)) << 2) + 0xC291F10), (a4 + 0x4C), (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
                    u0 = (((float)(*(short *)((a4 + 0x1E))) * 180.0f) / 30.0f);
                    u1 = math_sin_angle16(((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    u0 = ((((struct o2C_float *)(a4))->v));
                    u0 = u0 + u1 * ((((struct o8_float *)0xC291FC4)->v));
                    (((struct o2C_float *)(a4))->v) = u0;
                    t2 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t2 + 0x1);
                    return (t2 + 0x1);
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t2 = t0;
            if (t0 == 99) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
                (((struct o14_uchar *)(a4))->v) = 0x50;
                t2 = 0x14;
            }
            return t2;
        }
        if (((*(short *)((a4 + 0x1E))) == 20) && (t1 = *(signed char *)((a4 + 0x2)), t1 == 0)) {
            FUN_0c05a080(0x0, 0x0);
        }
        t0 = *(short *)((a4 + 0x1E));
        if (((int)t0 >= 0) && ((int)t0 <= (int)0x1E)) {
            t0 = *(signed char *)((a4 + 0x2));
            FUN_0c0588bc((a4 + 0x28), ((((((((t0 << 1) + t0) + t3) + 0x1) << 1) + ((((t0 << 1) + t0) + t3) + 0x1)) << 2) + 0xC291F10), (((((((t0 << 1) + t0) + t3) << 1) + (((t0 << 1) + t0) + t3)) << 2) + 0xC291F10), (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
            t0 = (((struct o41C_short *)(a4))->v);
            u0 = *(float *)(((0xC29FA30 + (((t0 << 1) + t0) << 2)) + 0x0));
            u1 = (((float)(*(short *)((a4 + 0x1E))) * 180.0f) / 30.0f);
            u2 = math_sin_angle16(((int)((((u1 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
            u1 = u0;
            u1 = u1 + u2 * ((((struct o0_float *)0xC291FC4)->v));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u1);
            t0 = *(short *)((a4 + 0x1E));
            if (((int)t0 >= 0) && ((int)t0 <= (int)0x1E)) {
                FUN_0c0588bc((a4 + 0x40), (a4 + 0x4C), 0xC2A0C78, (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
            }
        }
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) <= (int)0x1E) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    (((struct o40_float *)(a4))->v) = 0.699999988f;
    (((struct o44_float *)(a4))->v) = 0.699999988f;
    (((struct o48_float *)(a4))->v) = 0.699999988f;
    *(volatile short *)(((0x41C + a4) + 0x0));
    t0 = ((int (*)(void))(FUN_0c187798))();
    FUN_0c118810(a4, ((((struct o41C_short *)(a4))->v)));
    return (((int (*)(void))(FUN_0c187798))());
}

int FUN_0c126cdc(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_2 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = a7;
    w0_0 = f4;
    v0_0 = (v0_2);
    if (((*(signed char *)((0x3715 + (*(int *)((v0_2 + 0x10)))))) == 20)) goto L_C126D22;
    return FUN_0c03f346(v0_0, v0_3, v0_4, v0_5);
    L_C126D22:;
    v0_6 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_6);
    v0_1 = (0x0);
    if ((v0_6 == 0)) goto L_C126D34;
    if ((v0_2 == 1)) goto L_C126D8C;
    return FUN_0c03f346(v0_0, v0_3, v0_4, v0_5);
    L_C126D8C:;
    v0_4 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_4);
    v0_3 = (0xC532498);
    v0_5 = (0xC179AC0);
    v0_5 = (0xC179670);
    v0_5 = (0xC179BF0);
    w0_0 = ((1.0f + 1.0f));
    if ((v0_4 == 0)) goto L_C126DAC;
    if ((v0_2 != 1)) goto L_C126DA8;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    v0_4 = *(short *)((v0_0 + 0x1E));
    v0_2 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C126F14;
    v0_2 = ((v0_2 & 0x7));
    L_C126F1E:;
    if ((v0_2 != 0)) goto L_C126F3A;
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) + 0x1);
    v0_2 = (0xC0);
    if (((int)((((struct o20_short *)(v0_0))->v)) <= (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C126F3A;
    (((struct o20_ushort *)(v0_0))->v) = (*(short *)((v0_0 + v0_2)));
    L_C126F3A:;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    L_C126F8E:;
    if (((int)(*(int *)(((int)stk + 4))) < (int)((((struct o20_short *)(v0_0))->v)))) goto L_C126F3E;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_4 = *(short *)((v0_0 + 0x1C));
    v0_2 = (v0_4);
    if ((v0_4 != 0)) goto L_C127042;
    v0_4 = (v0_1);
    L_C127014:;
    if (((int)v0_4 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C126FA8;
    *(unsigned short *)((v0_0 + 0x1C)) = 0xA;
    v0_2 = (0xA);
    L_C127042:;
    return v0_2;
    L_C126FA8:;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((v0_4 << 2) + (0xC4 + v0_0)) + 0x0)));
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_5 = FUN_0c179ac0();
    v0_2 = (v0_5);
    v0_1 = ((((short)v0_1 * (short)0x3938) + v0_3));
    if (((int)v0_5 < 0)) goto L_C126FDC;
    v0_2 = ((v0_2 & 0xF));
    L_C126FE6:;
    v0_5 = *(int *)(((int)stk + 4));
    v0_1 = *(int *)((v0_1 + 0x38));
    *(int *)((int)stk + 0) = (0x90 + v0_5);
    (((struct o90_float *)(v0_5))->v) = ((math_sin_angle16((v0_1 + ((v0_2 << 8) << 2)))) * w0_0);
    v0_5 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x98 + v0_5);
    w0_1 = math_cos_angle16((v0_1 + ((v0_2 << 8) << 2)));
    (((struct o98_float *)(v0_5))->v) = (w0_1 * w0_0);
    v0_4 = ((v0_4 + 0x1));
    w0_1 = ((w0_1 * w0_0));
    goto L_C127014;
    L_C126FDC:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0xF)) + 0x1));
    goto L_C126FE6;
    L_C126F3E:;
    v0_2 = *(int *)(((((*(int *)(((int)stk + 4))) << 2) + (0xC4 + v0_0)) + 0x0));
    FUN_0c17c130((v0_2 + 0x6C), (v0_2 + 0x6C), (0x90 + v0_2));
    (((struct o78_uint *)(v0_2))->v) = (((((struct o78_int *)(v0_2))->v)) + ((((struct o9C_int *)(v0_2))->v)));
    (((struct o7C_uint *)(v0_2))->v) = (((((struct o7C_int *)(v0_2))->v)) + ((((struct oA0_int *)(v0_2))->v)));
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) + ((((struct oA4_int *)(v0_2))->v)));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    goto L_C126F8E;
    L_C126F14:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x7)) + 0x1));
    goto L_C126F1E;
    L_C126DA8:;
    goto L_C127042;
    L_C126DAC:;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_4 = *(short *)((v0_0 + 0x1C));
    v0_2 = (v0_4);
    if ((v0_4 == 0)) goto L_C126DBC;
    goto L_C127042;
    L_C126DBC:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    w0_1 = (-1.0f);
    w0_2 = (65536.0f);
    w0_3 = (360.0f);
    L_C126EE4:;
    if (((int)(*(int *)(((int)stk + 4))) >= (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C126EF2;
    v0_4 = *(int *)(((((*(int *)(((int)stk + 4))) << 2) + (0xC4 + v0_0)) + 0x0));
    thunk_FUN_0c058310((((((struct oF4_int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_3)))->v)) + 0x28), (v0_4 + 0x6C));
    (((struct o68_uint *)(v0_4))->v) = v0_1;
    v0_2 = (*(int *)(((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_3) + 0x38)));
    *(int *)((int)stk + 0) = v0_2;
    v0_5 = FUN_0c179ac0();
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    v0_2 = (v0_5);
    v0_4 = (v0_4);
    if (((int)v0_5 < 0)) goto L_C126E14;
    v0_2 = ((v0_2 & 0xF));
    L_C126E1E:;
    v0_5 = *(int *)((int)stk + 0);
    *(unsigned int *)(((int)stk + 8)) = (((v0_2 << 8) << 2) + v0_5);
    (((struct o90_float *)(v0_4))->v) = ((math_sin_angle16((((v0_2 << 8) << 2) + v0_5))) * w0_0);
    (((struct o98_float *)(v0_4))->v) = ((math_cos_angle16((*(int *)(((int)stk + 8))))) * w0_0);
    (((struct o94_float *)(v0_4))->v) = w0_1;
    v0_5 = FUN_0c179ac0();
    v0_2 = (v0_5);
    if (((int)v0_5 < 0)) goto L_C126E4A;
    v0_2 = ((v0_2 & 0xF));
    L_C126E54:;
    (((struct o9C_uint *)(v0_4))->v) = (int)(((float)(v0_2 - 8) * w0_2) / w0_3);
    v0_5 = FUN_0c179ac0();
    v0_2 = (v0_5);
    if (((int)v0_5 < 0)) goto L_C126E9C;
    v0_2 = ((v0_2 & 0xF));
    L_C126EA6:;
    (((struct oA0_uint *)(v0_4))->v) = (int)(((float)(v0_2 - 8) * w0_2) / w0_3);
    v0_5 = FUN_0c179ac0();
    v0_2 = (v0_5);
    if (((int)v0_5 < 0)) goto L_C126EC2;
    v0_2 = ((v0_2 & 0xF));
    L_C126ECC:;
    (((struct oA4_uint *)(v0_4))->v) = (int)(((float)(v0_2 - 8) * w0_2) / w0_3);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    FPUL_ = ((int)(((float)(v0_2 - 8) * w0_2) / w0_3));
    goto L_C126EE4;
    L_C126EC2:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0xF)) + 0x1));
    goto L_C126ECC;
    L_C126E9C:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0xF)) + 0x1));
    goto L_C126EA6;
    L_C126E4A:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0xF)) + 0x1));
    goto L_C126E54;
    L_C126E14:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0xF)) + 0x1));
    goto L_C126E1E;
    L_C126EF2:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1E;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    (((struct o20_ushort *)(v0_0))->v) = 0x1;
    v0_2 = (0x20);
    goto L_C127042;
    L_C126D34:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (v0_1);
    L_C126D84:;
    if (((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C126D68;
    goto L_C126D8C;
    L_C126D68:;
    v0_3 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    (((struct o68_uint *)(v0_3))->v) = (((((struct oF4_int *)((*(int *)((v0_0 + 0x10)))))->v)) + 0x28);
    v0_2 = ((v0_2 + 0x1));
    v0_3 = (v0_3);
    goto L_C126D84;
}
