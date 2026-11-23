/* Straight-line functions with calls and guards (batch gen_ge): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o3F_uchar { char p[0x3F]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c030412(int);
int FUN_0c030436(void);
int FUN_0c030442(int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
extern int FUN_0c03b05a();
int FUN_0c03cbfa(int);
int FUN_0c03df6a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c05ffa4(int, int, int);
int FUN_0c060180(int, int, int);
int FUN_0c0601da(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c150160(int, int, float, float, float, float);
int FUN_0c169524(int, int, int);
int FUN_0c176b90(int);
int FUN_0c17e260(int);
int FUN_0c187a88(int, int, int);
int FUN_0c191554(void);
int FUN_0c191d9e(void);
int FUN_0c191dae(void);
int FUN_0c191f7c(void);
int FUN_0c192f54(int, int);
int FUN_0c193be4(void);
int FUN_0c193c1e(int);
int FUN_0c1a21f4(void);
int FUN_0c1a3438(int, int);
int FUN_0c1a357c(int, int, int);
int FUN_0c1a3890(void);
int FUN_0c2c14a8(void);
int FUN_0c2d8590(int, int);
int FUN_0c2d868a(int, int);
int FUN_0c2db8f4(int, int, int);
int _div64(int, int, int, int);
int _power(int, int, int);
int direntry(int, int);
int direntry_dirty(int, int);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int fmcalccrc(int, int);
int get_vmstime(int, int);
int math_mat_get_translate(int, int);
int mult64(int, int, int, int);
int rsfts(int, int, int);
int search_dir(int, int, int);
int set_vmstime(int, int);
int strlen(int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c2c067e(int);
int thunk_FUN_0c2c2156(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int FUN_0c2d7df8(int a4, int a5);
int vmsfs_fsettime(int a4, int a5, int a6);
int vmsfs_frename(int a4, int a5, int a6);
int vmsfs_fsetattr(int a4, int a5, int a6, int a7);
int FUN_0c0304e8(int a4, int a5);
int calcnpw(int a4, int a5, int a6, int a7);
int fmMngAddData(int a4);
int FUN_0c103d56(int a4, int a5, int a6);
int FUN_0c1848e8(void);
int FUN_0c0f5264(int a4);
int FUN_0c13f734(int a4, int a5);
int FUN_0c0de650(int a4, int a5);
int FUN_0c035ca4(int a4, int a5);
int FUN_0c0efb30(int a4, int a5);
int FUN_0c13e620(int a4, int a5);
void FUN_0c0313e0(int a4, int a5, int a6);
void FUN_0c0497d8(int a4, int a5, int a6, int a7);
void FUN_0c0de442(int a4, int a5, int a6);
int FUN_0c11c80c(int a4, int a5, int a6, int a7);
int FUN_0c2d85e4(int a4, int a5);
int FUN_0c03dd5c(int a4);
void FUN_0c11dbdc(int a4, int a5, int a6, int a7);
int FUN_0c065cb0(int a4);
int vmsfs_fgetsize(int a4, int a5);
int FUN_0c03db62(int a4, int a5, int a6, int a7);
int FUN_0c129260(int a4);
int FUN_0c169922(int a4, int a5);

int FUN_0c2d7df8(int a4, int a5)
{
    int stk[8];
    register int t6;
    register int t55;
    register int t8;
    register int t10;
    register int t12;
    register int t13;
    register int t30;
    register int t31;
    register int t36;
    register int t64;

    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = (((int)stk + 0) + 0x4);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x0;
    if ((*(int *)((a4 + 0x8))) != 0) {
        t6 = *(short *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x2));
        t55 = t6;
        if (t6 != 0) {
            *(volatile int *)((a4 + 0x8));
            t8 = FUN_0c1a21f4();
            if ((unsigned char)t8 != 0) {
                t10 = *(int *)((a4 + 0xC));
                t12 = *(signed char *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x0));
                t13 = 0x0;
                for (;;) {
                    if ((int)(unsigned short)t13 >= (int)(unsigned short)(*(short *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x2)))) {
                        break;
                    }
                    FUN_0c2d85e4(a4, ((unsigned short)t13 + (((t10 + 0x78) + (short)((short)(unsigned char)t12 * (short)0x8C)) + 0x4)));
                    t13 = (t13 + 0x1);
                }
            }
            *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x0))) * (short)0x8C) + ((*(int *)((a4 + 0xC))) + 0x78)) + 0x0)) = (unsigned char)(*(signed char *)(((int)stk + 0)));
            t30 = *(int *)((a4 + 0xC));
            t31 = (((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v);
            *(unsigned int *)(((int)stk + 0)) = t31;
            *(unsigned short *)(((((short)((short)(unsigned char)(*(signed char *)((t31 + 0x0))) * (short)0x8C) + (t30 + 0x78)) + 0x2) + 0x0)) = (FUN_0c2d868a(a4, (*(short *)((t31 + 0x2)))));
            t36 = (((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v);
            *(unsigned char *)((t36 + 0x0)) = ((*(signed char *)((t36 + 0x0))) + 0x1);
            if ((unsigned char)(*(signed char *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x0))) == 8) {
                *(unsigned char *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x0)) = 0x0;
            }
            *(unsigned short *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x2)) = 0x0;
            (((struct o3F_uchar *)((*(int *)((a4 + 0xC)))))->v) = (*(signed char *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x0)));
            *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = ((*(signed char *)(((((int)stk + 0) + 0x4) + 0x0))) | 0x1);
            t55 = (FUN_0c2d8590(a4, (((int)stk + 0) + 0x4)));
        }
        t64 = t55;
    }
    return t64;
}

int vmsfs_fsettime(int a4, int a5, int a6)
{
    int stk[16];
    register int t0;
    register int t36;
    register int t3;
    register int t5;
    register int t30;
    register int t8;
    register int t27;
    register int t10;
    register int t24;
    register int t12;
    register int t22;
    register int t13;
    register int t17;
    register int t18;
    register int t33;
    int t6;
    register int t7;
    register int t16;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC303C60)));
    t36 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t30 = 0xFFFFFF01;
            if ((t5 != 0) && (t6 = *(int *)(((int)stk + 8)), t7 = *(signed char *)(((t6 + 0xC8C4604) + 0x8)), t7 != 0)) {
                t8 = thunk_FUN_0c2c067e(a4);
                t27 = 0xFFFFFF03;
                if ((int)t8 >= 0) {
                    *(volatile int *)(((int)stk + 0));
                    t10 = FUN_0c2c14a8();
                    t24 = 0xFFFFFF0B;
                    if ((int)t10 >= 0) {
                        t12 = search_dir(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0xC));
                        t22 = 0xFFFFFF05;
                        if ((int)t12 >= 0) {
                            t13 = direntry(a4, t12);
                            set_vmstime((((int)stk + 0) + 0x38), (*(int *)(((int)stk + 4))));
                            t17 = (t13 + 0x10);
                            t18 = (((int)stk + 0) + 0x38);
                            for (;;) {
                                if ((unsigned int)t17 >= (unsigned int)(t13 + 0x18)) {
                                    break;
                                }
                                t16 = (*(signed char *)((t18 + 0x0)));
                                t18 = (t18 + 0x1);
                                *(unsigned char *)((t17 + 0x0)) = t16;
                                t17 = (t17 + 0x1);
                            }
                            direntry_dirty(a4, t12);
                            t22 = (write_dir(a4));
                        }
                        t24 = t22;
                    }
                    t27 = t24;
                }
                t30 = t27;
            }
            t33 = t30;
        }
        t36 = t33;
    }
    return t36;
}

int vmsfs_frename(int a4, int a5, int a6)
{
    int stk[14];
    register int t0;
    register int t33;
    register int t3;
    register int t5;
    register int t29;
    register int t8;
    register int t27;
    register int t10;
    register int t25;
    register int t12;
    register int t24;
    register int t14;
    register int t23;
    register int t15;
    register int t18;
    register int t19;
    register int t31;
    int t6;
    register int t7;
    register int t17;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC303C58)));
    t33 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t31 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t29 = 0xFFFFFF01;
            if ((t5 != 0) && (t6 = *(int *)(((int)stk + 8)), t7 = *(signed char *)(((t6 + 0xC8C4604) + 0x8)), t7 != 0)) {
                t8 = thunk_FUN_0c2c067e(a4);
                t27 = 0xFFFFFF03;
                if ((int)t8 >= 0) {
                    *(volatile int *)(((int)stk + 0));
                    t10 = FUN_0c2c14a8();
                    t25 = 0xFFFFFF0B;
                    if ((int)t10 >= 0) {
                        t12 = search_dir(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0xC));
                        t24 = 0xFFFFFF05;
                        if ((int)t12 >= 0) {
                            t14 = search_dir(a4, (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC));
                            t23 = 0xFFFFFF06;
                            if ((int)t14 < 0) {
                                t15 = direntry(a4, t12);
                                t18 = (t15 + 0x4);
                                t19 = (*(int *)(((int)stk + 4)));
                                for (;;) {
                                    if ((unsigned int)t18 >= (unsigned int)(t15 + 0x10)) {
                                        break;
                                    }
                                    t17 = (*(signed char *)((t19 + 0x0)));
                                    t19 = (t19 + 0x1);
                                    *(unsigned char *)((t18 + 0x0)) = t17;
                                    t18 = (t18 + 0x1);
                                }
                                direntry_dirty(a4, t12);
                                t23 = (write_dir(a4));
                            }
                            t24 = t23;
                        }
                        t25 = t24;
                    }
                    t27 = t25;
                }
                t29 = t27;
            }
            t31 = t29;
        }
        t33 = t31;
    }
    return t33;
}

int vmsfs_fsetattr(int a4, int a5, int a6, int a7)
{
    int stk[15];
    register int t0;
    register int t44;
    register int t3;
    register int t5;
    register int t8;
    register int t10;
    register int t12;
    register int t13;
    register int t18;
    int t6;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned short *)(((int)stk + 8)) = a6;
    *(unsigned char *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((int)stk + 12)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC303C60)));
    t44 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t44 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t44 = 0xFFFFFF01;
            if ((t5 != 0) && (t6 = *(int *)(((int)stk + 12)), t7 = *(signed char *)(((t6 + 0xC8C4604) + 0x8)), t7 != 0)) {
                t8 = thunk_FUN_0c2c067e(a4);
                t44 = 0xFFFFFF03;
                if ((int)t8 < 0) {
                } else {
                    *(volatile int *)(((int)stk + 0));
                    t10 = FUN_0c2c14a8();
                    t44 = 0xFFFFFF0B;
                    if ((int)t10 < 0) {
                    } else {
                        t12 = search_dir(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10));
                        t44 = 0xFFFFFF05;
                        if ((int)t12 < 0) {
                        } else {
                            t13 = direntry(a4, t12);
                            if ((*(int *)0xC2FFC34) != 0) {
                                t18 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))(t13, 0x1A, (*(short *)(((((int)stk + 0) + 0x8) + 0x0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            }
                            *(unsigned char *)((t13 + 0x1)) = (*(signed char *)(((int)stk + 4)));
                            direntry_dirty(a4, t12);
                            t44 = (write_dir(a4));
                        }
                    }
                }
            }
        }
    }
    return t44;
}

int FUN_0c0304e8(int a4, int a5)
{
    int stk[1];

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
    v0_4 = a4;
    v0_5 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    v0_1 = (FUN_0c030412(v0_4)) == 0;
    v0_0 = (v0_4);
    if (v0_1) goto L_C0305B4;
    v0_2 = (0xC5429A8);
    if (((*(signed char *)0xC5429B0) != 0)) goto L_C030514;
    if (((*(signed char *)0xC3BD444) != 0)) goto L_C0305B4;
    L_C030514:;
    v0_3 = (0x4);
    v0_1 = (0x0);
    if (((*(signed char *)((v0_2 + 0xC))) != 4)) goto L_C030540;
    v0_4 = (v0_1);
    v0_5 = (0x1);
    v0_6 = (v0_1);
    v0_7 = (0xC3BD444);
    L_C030538:;
    if (((int)v0_4 < (int)v0_3)) goto L_C030528;
    if (((int)v0_6 > (int)v0_5)) goto L_C0305B4;
    L_C030540:;
    v0_5 = (0x2);
    if (((*(signed char *)((v0_2 + 0x9))) != 0)) goto L_C03056E;
    *(volatile int *)(((int)stk + 0));
    *(volatile int *)((v0_0 + 0x78));
    v0_2 = (FUN_0c030436()) == 0;
    if (v0_2) goto L_C0305B4;
    FUN_0c030442(v0_0);
    (((struct o7C_uint *)(v0_0))->v) = v0_5;
    *(unsigned char *)(((v0_0 + 0x1) + 0x3)) = v0_1;
    *(unsigned char *)(((v0_0 + 0x1) + 0x2)) = v0_1;
    *(unsigned char *)(((v0_0 + 0x1) + 0x1)) = v0_1;
    *(unsigned char *)(((v0_0 + 0x1) + 0x0)) = v0_1;
    L_C0305B0:;
    v0_0 = (0x1);
    L_C0305B6:;
    return v0_0;
    L_C0305B4:;
    v0_0 = (0x0);
    goto L_C0305B6;
    L_C03056E:;
    *(volatile int *)(((int)stk + 0));
    *(volatile int *)((v0_0 + 0x78));
    v0_0 = (FUN_0c030436()) == 0;
    if (v0_0) goto L_C0305B4;
    if (((*(signed char *)((v0_2 + 0xE))) == 0)) goto L_C030584;
    v0_2 = (v0_3);
    L_C030586:;
    v0_3 = (v0_1);
    v0_0 = (0xC541CDC);
    if (((int)v0_2 <= 0)) goto L_C0305B0;
    v0_6 = (0x98);
    L_C030590:;
    FUN_0c030442(v0_0);
    (((struct o7C_uint *)(v0_0))->v) = v0_5;
    *(unsigned char *)(((v0_0 + 0x1) + 0x3)) = v0_1;
    *(unsigned char *)(((v0_0 + 0x1) + 0x2)) = v0_1;
    *(unsigned char *)(((v0_0 + 0x1) + 0x1)) = v0_1;
    *(unsigned char *)(((v0_0 + 0x1) + 0x0)) = v0_1;
    v0_7 = (int)(v0_3 + 0x1) < (int)v0_2;
    v0_4 = (v0_0 + 0x1);
    v0_3 = ((v0_3 + 0x1));
    v0_0 = ((v0_0 + v0_6));
    v0_4 = v0_4;
    if (v0_7) goto L_C030590;
    goto L_C0305B0;
    L_C030584:;
    v0_2 = (v0_5);
    goto L_C030586;
    L_C030528:;
    v0_8 = (((int)v0_5 << (int)v0_4) & (unsigned char)(*(signed char *)((v0_7 + 0x0)))) == 0;
    v0_4 = ((v0_4 + 0x1));
    if (v0_8) goto L_C030538;
    v0_6 = ((v0_6 + 0x1));
    goto L_C030538;
}

int calcnpw(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t10;
    register int t12;
    register int t16;
    register int t14;
    register int t19;
    register int t20;

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(unsigned short *)(((int)stk + 16)) = 0x8;
    if ((int)a6 > 0) {
        _power(a6, ((int)stk + 0), (((int)stk + 0) + 0x14));
        _div64(((int)stk + 0), (((int)stk + 0) + 0x14), (*(short *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    } else {
        _power((-a6), ((int)stk + 0), (((int)stk + 0) + 0x14));
        mult64(((int)stk + 0), (((int)stk + 0) + 0x14), (*(short *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    }
    t10 = *(short *)(((int)stk + 0));
    *(volatile short *)(((int)stk + 16));
    t12 = FUN_0c1a3890();
    FUN_0c1a357c((((int)stk + 0) + 0x14), 0x9, (0x42 - (short)(0x3F - t10)));
    t16 = 0x8;
    if ((int)0x8 >= (int)(short)t12) {
        t14 = 0x8;
        for (;;) {
            t14 = (short)t14;
            *(unsigned char *)(((((int)stk + 0) + 0x14) + t14)) = (*(signed char *)(((((short)t14 - (short)t12) + (((int)stk + 0) + 0x14)) + 0x0)));
            t14 = (t14 - 1);
            if ((int)(short)t14 < (int)(short)t12) {
                break;
            }
        }
        t16 = t14;
    }
    if ((int)(short)t16 >= 0) {
        t19 = t16;
        t20 = (((short)t16 + (((int)stk + 0) + 0x14)) + 0x1);
        for (;;) {
            t19 = (t19 - 1);
            *(unsigned char *)(((t20 - 0x1) + 0x0)) = 0x0;
            t20 = (t20 - 0x1);
            if ((int)(short)t19 < 0) {
                break;
            }
        }
    }
    rsfts((((int)stk + 0) + 0x14), 0x9, ((0x3F - t10) - ((t12 << 2) << 1)));
    *(unsigned short *)(((int)stk + 0)) = 0x3F;
    FUN_0c1a3438((((int)stk + 0) + 0x14), 0x40);
    return (FUN_0c187a88((*(int *)(((int)stk + 12))), (((int)stk + 0) + 0x14), 0x8));
}

int fmMngAddData(int a4)
{
    register int t0;
    register int t3;
    register int t4;

    t0 = 0xFFFFFFFA;
    if ((*(short *)((a4 + 0x2))) == 0) {
        (((struct o34_ushort *)(a4))->v) = (*(int *)((a4 + 0x28)));
        thunk_FUN_0c2c2156((*(int *)((a4 + 0x30))), ((a4 + 0x34) + 0x2), 0x3C);
        (((struct o3E_ushort *)((a4 + 0x34)))->v) = (fmcalccrc(0x3E, (a4 + 0x34)));
        fmMngMcpy4((a4 + 0x34), ((*(int *)((a4 + 0xC))) + (((((*(int *)((a4 + 0x28))) + 0x1) << 2) << 2) << 2)), 0x40);
        t0 = 0xFFFFFFF6;
        if ((int)(*(int *)((a4 + 0x10))) >= (int)(*(int *)((a4 + 0x14)))) {
        } else {
            t0 = *(int *)((a4 + 0x14));
            fmMngNum2Bit(((*(int *)((a4 + 0x10))) + 0x1), ((*(int *)((a4 + 0xC))) + ((((t0 + 0x1) << 2) << 2) << 2)), (*(int *)((a4 + 0x18))));
            t3 = FUN_0c2db8f4(((*(int *)((a4 + 0x4))) + ((((t0 + 0x1) << 2) << 2) << 2)), ((*(int *)((a4 + 0xC))) + ((((t0 + 0x1) << 2) << 2) << 2)), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
            t0 = 0xFFFFFFFE;
            if (t3 == ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2)) {
                t3 = *(int *)((a4 + 0x10));
                *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + 0x1);
                t4 = FUN_0c2db8f4(((*(int *)((a4 + 0x4))) + ((((t3 + 0x1) << 2) << 2) << 2)), (a4 + 0x34), 0x40);
                t3 = 0x0;
                if (t4 != 64) {
                    t3 = 0xFFFFFFFE;
                }
                t0 = t3;
            }
        }
    }
    return t0;
}

int FUN_0c103d56(int a4, int a5, int a6)
{
    int stk[15];
    register int t1;
    register int t3;
    register int t5;
    register int t7;
    register int t9;
    register int t12;
    register int t13;
    register int t11;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    if ((*(signed char *)(((a4 * 0x148) + 0xC8C4606))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            if ((*(signed char *)(((a4 * 0x148) + 0xC8C460C))) == 0) {
                return 0xFFFFFF01;
            }
            t5 = thunk_FUN_0c2c067e(a4);
            if ((int)t5 < 0) {
                return 0xFFFFFF03;
            }
            *(volatile int *)(((int)stk + 0));
            t7 = FUN_0c2c14a8();
            if ((int)t7 < 0) {
                return 0xFFFFFF0B;
            }
            t9 = search_dir(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10));
            if ((int)t9 < 0) {
                return 0xFFFFFF05;
            }
            t12 = (((int)stk + 0) + 0x8);
            t13 = ((direntry(a4, t9)) + 0x10);
            for (;;) {
                if ((unsigned int)t12 >= (unsigned int)((((int)stk + 0) + 0x8) + 0x8)) {
                    break;
                }
                t11 = (*(signed char *)((t13 + 0x0)));
                t13 = (t13 + 0x1);
                *(unsigned char *)((t12 + 0x0)) = t11;
                t12 = (t12 + 0x1);
            }
            get_vmstime((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x8));
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int FUN_0c1848e8(void)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t23;

    (((struct o8_uint *)0xC2A62B8)->v) = 0x0;
    (((struct o0_uint *)0xC2A62B8)->v) = 0x7;
    t0 = 0x3;
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)(((0xC8B1620 + t0) + 0x0));
        t0 = (t0 - 1);
        t1 = (t1 << 8);
        t1 = (t1 | (unsigned char)t2);
        if ((int)t0 < 0) {
            break;
        }
    }
    t4 = 0x3;
    t5 = 0x0;
    for (;;) {
        t6 = *(signed char *)(((0xC8B161C + t4) + 0x0));
        t4 = (t4 - 1);
        t5 = (t5 << 8);
        t5 = (t5 | (unsigned char)t6);
        if ((int)t4 < 0) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 0)) = 0xFFFFFF;
    if (((((struct o1C_int *)0xC2A62B8)->v)) != 0) {
        (((struct o1C_uint *)0xC2A62B8)->v) = 0x0;
        FUN_0c191dae();
        FUN_0c193c1e(t1);
        *(volatile int *)(((int)stk + 0));
        FUN_0c193be4();
        FUN_0c191d9e();
    }
    FUN_0c191554();
    t23 = strlen(0xC89BC38);
    if (t23 != 0) {
        FUN_0c192f54(0xC89BC38, 0xC89B60C);
    }
    if (((((struct o14_int *)0xC2A62B8)->v)) != 0) {
        FUN_0c191f7c();
        (((struct o14_uint *)0xC2A62B8)->v) = 0x0;
    }
    (((struct oC_uint *)0xC2A62B8)->v) = 0x0;
    (((struct o4_uint *)0xC2A62B8)->v) = 0x0;
    (((struct o8_uint *)0xC2A62B8)->v) = 0x0;
    (((struct o0_uint *)0xC2A62B8)->v) = 0x0;
    return 0x0;
}

int FUN_0c0f5264(int a4)
{
    int stk[9];
    register float u2;
    register float u3;
    register int t4;
    register int t14;

    math_mat_get_translate((((((struct oC4_int *)(a4))->v)) + 0x28), ((int)stk + 0));
    u2 = (((struct o0_float *)0xC0F5344)->v);
    u3 = (((struct o4_float *)0xC0F5344)->v);
    t4 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(((int)stk + 0)); }
        *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + ((float)t4 + ((((struct oC_float *)0xC0F5344)->v))));
        *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + ((((struct o10_float *)0xC0F5344)->v)));
        *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) - u2);
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 16)) = 1.0f;
        *(float *)(((int)stk + 20)) = ((((struct o54_float *)(a4))->v));
        t14 = FUN_0c150160((((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC), ((((struct o1C_float *)0xC0F5344)->v)), ((((struct o18_float *)0xC0F5344)->v)), ((((struct o14_float *)0xC0F5344)->v)), u3);
        t4 = (t4 + 0x6F);
        if ((int)t4 >= (int)0x456) {
            break;
        }
    }
    return t14;
}

int FUN_0c13f734(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t14;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t14 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13F7E4;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x20F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC2A222C))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o2C_float *)(t3))->v) = ((((struct o2C_float *)(a4))->v));
        t14 = 0x2C;
    }
    return t14;
}

int FUN_0c0de650(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c037320(0x14, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x14, (*(int *)0xC4B410C));
        *(unsigned int *)((t1 + 0x4)) = 0xC0DE528;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t1 + 0x3)) = a5;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        FUN_0c07e420(t1, 0x5);
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        FUN_0c064d24(t1, 0x2, 0xC, 0x0, 0x100, 0xF, 0x0, 0xFFFFFFFF);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a4); }
        u0 = ((((struct o2C_float *)(t1))->v));
        u0 = u0 + 20.0f * ((float)((((a5 << 2) << 2) - a5) + 0x78));
        (((struct o2C_float *)(t1))->v) = u0;
        t0 = 0x2C;
    }
    return t0;
}

int FUN_0c035ca4(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = (FUN_0c176b90(a5));
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)((a4 + 0xC)))) {
            break;
        }
        t3 = a4;
        t3 = (t3 + 0x10);
        t3 = (t3 + (((t2 << 2) << 2) << 1));
        t4 = 0x0;
        t5 = (((t2 << 2) << 2) << 1);
        for (;;) {
            if ((int)t4 >= (int)(*(int *)((t3 + 0x18)))) {
                break;
            }
            t5 = (*(int *)((t3 + 0x1C)));
            t6 = (t4 * 0x3C);
            t5 = (t5 + t6);
            if ((*(int *)((t5 + 0x0))) != 0) {
                t5 = 0xC17E260;
                t0 = (FUN_0c17e260((*(int *)((((*(int *)((t3 + 0x1C))) + t6) + 0x0)))));
                t1 = (t1 + t0);
            } else {
                t6 = t5;
            }
            t4 = (t4 + 0x1);
            t5 = t6;
        }
        t2 = (t2 + 0x1);
    }
    return t1;
}

int FUN_0c0efb30(int a4, int a5)
{
    register int t2;
    register int t3;

    t2 = FUN_0c037320((*(int *)(((a5 << 2) + 0xC1CD264))), (*(int *)0xC4B410C));
    t3 = FUN_0c03f444(0x2, 0x0, t2);
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((a5 << 2) + 0xC1CD264))), (*(int *)0xC4B410C));
        *(unsigned int *)((t3 + 0x4)) = 0xC0EFAD4;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned char *)((t3 + 0x2)) = a5;
        FUN_0c07e420(t3, 0x2);
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        FUN_0c064d24(t3, 0x2, 0x12, 0x0, 0x40, 0x0, 0x0, 0xF0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)(a4); }
        (((struct oAA_uchar *)(t3))->v) = 0x1;
        (((struct oAB_uchar *)(t3))->v) = 0x1;
    }
    return t3;
}

int FUN_0c13e620(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t12;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t12 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13E518;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        (((struct oA8_uchar *)(t3))->v) = 0x0;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t3))->v)), 0x0, 0x5, (*(int *)((((*(signed char *)((t3 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        *(unsigned int *)((t3 + 0x10)) = a4;
        t12 = 0xA8;
    }
    return t12;
}

void FUN_0c0313e0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    u0 = *(float *)0xC031508;
    if ((unsigned int)0xC1A92A0 < (unsigned int)0xC1A93D4) {
        t0 = 0xC1A92A0;
        t1 = 0xC1A92A0;
        for (;;) {
            t2 = *(signed char *)((t1 + 0x19));
            t3 = (int)((unsigned int)((int)((unsigned int)t2 + (unsigned int)0x0)) + ((((int)0x0 > (int)t2)) ? 1u : 0u));
            t2 = FUN_0c037320((t3 >> 1), (*(int *)0xC4B40D0));
            if ((int)t2 >= 0) {
                t4 = FUN_0c03f444(0x8, 0x0, t2);
                t2 = t4;
                if (t4 != 0) {
                    FUN_0c03733c(t2, (t3 >> 1), (*(int *)0xC4B40D0));
                    *(unsigned int *)((t2 + 0x4)) = 0xC031354;
                    (((struct oAC_ushort *)(t2))->v) = 0x1F;
                    (((struct oA9_uchar *)(t2))->v) = 0x21;
                    *(unsigned char *)((t2 + 0x2)) = 0x0;
                    (((struct o48_float *)(t2))->v) = u0;
                    (((struct o44_float *)(t2))->v) = u0;
                    (((struct o40_float *)(t2))->v) = u0;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(t0); }
                }
                t1 = (t1 + 0x1C);
                t0 = (t0 + 0x1C);
                if ((unsigned int)t1 >= (unsigned int)0xC1A93D4) {
                    break;
                }
                continue;
            }
            break;
        }
    }
}

void FUN_0c0497d8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    t0 = 0xC532498;
    t1 = 0x0;
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
        t2 = (*(signed char *)((t0 + (0x3714))));
        t0 = (t0 + 0x3938);
        if (t2 != 0) {
            t1 = (t1 + 0x1);
        }
    }
    t0 = 0x0;
    if (t1 != 1) {
        t2 = 0x1;
        if (t1 != 2) {
            t3 = 0x3;
            if (t1 != 3) {
                t3 = 0x6;
            }
            t2 = t3;
        }
        t0 = t2;
    }
    t2 = 0xC1B7C64;
    t3 = t0;
    t4 = t0;
    t5 = t1;
    t1 = 0x0;
    t6 = ((((t0 << 1) + t0) << 2) + 0xC1B7C64);
    t0 = 0xC532498;
    t7 = 0xC532498;
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
        t2 = (*(signed char *)((t0 + 0x3714)));
        t8 = t3;
        if (t2 != 0) {
            t5 = 0x1D;
            t1 = 0x0;
            t4 = t7;
            FUN_0c085cac(t4, t5, t1, a7);
            t3 = 0xC187798;
            t9 = t7;
            t2 = t6;
            t9 = (t9 + 0x28);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t9) = *(struct mv3 *)(t2); }
            t6 = (t6 + 0xC);
            *(unsigned int *)((t7 + 0x38)) = 0x8000;
            t8 = 0xC187798;
        } else {
            t9 = t4;
            t10 = t5;
            t11 = t1;
        }
        t0 = (t0 + 0x3938);
        t3 = t8;
        t4 = t9;
        t5 = t10;
        t1 = t11;
        t7 = (t7 + 0x3938);
    }
}

void FUN_0c0de442(int a4, int a5, int a6)
{
    int stk[8];
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    t0 = *(int *)(((int)stk + 20));
    t1 = *(int *)0xC4B410C;
    *(unsigned int *)(((int)stk + 16)) = (t0 << 2);
    t3 = FUN_0c037320((*(int *)(((t0 << 2) + 0xC1CA2AC))), t1);
    t4 = FUN_0c03f444(0x1, 0x0, t3);
    if (t4 != 0) {
        FUN_0c03733c(t4, (*(int *)(((*(int *)(((int)stk + 16))) + 0xC1CA2AC))), (*(int *)0xC4B410C));
        *(unsigned int *)((t4 + 0x4)) = 0xC0DE19C;
        *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t4))->v) = 0xF;
        (((struct oA9_uchar *)(t4))->v) = 0x21;
        *(unsigned char *)((t4 + 0x2)) = (*(signed char *)(((int)stk + 20)));
        *(unsigned char *)((t4 + 0x3)) = (*(signed char *)(((int)stk + 28)));
        FUN_0c07e420(t4, 0x4);
        (((struct o48_float *)(t4))->v) = 1.0f;
        (((struct o44_float *)(t4))->v) = 1.0f;
        (((struct o40_float *)(t4))->v) = 1.0f;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t4, 0x2, (*(int *)(((*(int *)(((int)stk + 16))) + 0xC1CA2B4))), 0x1, 0x100, 0x0, 0x0, 0x0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 24)))); }
    }
}

int FUN_0c11c80c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 99) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= 0) && ((int)t0 <= (int)0xF0)) {
            FUN_0c0588bc((a4 + 0x40), 0xC292308, 0xC2922FC, (*(short *)((a4 + 0x1C))), 0xF0, 0x0);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0xF0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return 0x14;
        }
        return (short)(t0 + 0x1);
    }
    FUN_0c03733c(a4, 0x34, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x21F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0xB0 + a4)) = *(struct mv4 *)(0xC2A0CA0); }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= 0) && ((int)t0 <= (int)0xF0)) {
        FUN_0c0588bc((a4 + 0x40), 0xC292308, 0xC2922FC, (*(short *)((a4 + 0x1C))), 0xF0, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0xF0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    return (short)(t0 + 0x1);
}

int FUN_0c2d85e4(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t6;

    if ((*(int *)((a4 + 0x8))) == 0) {
        return 0x0;
    }
    *(volatile signed char *)((a5 + 0x0));
    *(volatile signed char *)((a5 + 0x0));
    
    *(volatile signed char *)((a5 + 0x0));
    *(volatile signed char *)((a5 + 0x0));
    *(volatile signed char *)((a5 + 0x0));
    *(volatile signed char *)((a5 + 0x0));
    *(volatile signed char *)((a5 + 0x0));
    *(volatile int *)((a4 + 0x8));
    t6 = FUN_0c1a21f4();
    if (t6 != 1) {
        if (t6 != 3) {
            if (t6 != 5) {
                if (t6 != 7) {
                } else {
                    *(unsigned char *)((t0 + 0x0)) = ((*(signed char *)((t0 + 0x0))) & 0x7F);
                    t6 = t0;
                }
                t0 = t6;
            } else {
                *(unsigned char *)((t1 + 0x0)) = ((*(signed char *)((t1 + 0x0))) | 0x80);
                t0 = t1;
            }
            t1 = t0;
        } else {
            if ((unsigned char)t2 != 0) {
                *(unsigned char *)((t0 + 0x0)) = ((*(signed char *)((t0 + 0x0))) | 0x80);
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        if ((unsigned char)t4 != 0) {
        } else {
            *(unsigned char *)((t1 + 0x0)) = ((*(signed char *)((t1 + 0x0))) | 0x80);
        }
        t0 = t1;
    }
    return (*(signed char *)((t0 + 0x0)));
}

int FUN_0c03dd5c(int a4)
{
    register int t0;
    register int t1;

    (((struct o0_uchar *)0xC3DC264)->v) = 0x0;
    (((struct o1_uchar *)0xC3DC264)->v) = 0x1;
    t0 = FUN_0c037320((*(int *)(((((signed char)a4 << 2) << 2) + 0xC1B7244))), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)((((((signed char)a4 << 2) << 2) + 0xC1B7238) + 0xC))), (*(int *)0xC4B410C));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t1))->v)) + 0x6C)) = *(struct mv3 *)(((((signed char)a4 << 2) << 2) + 0xC1B7238)); }
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC03DC8C;
        *(unsigned char *)((t1 + 0x2)) = a4;
        (((struct o30_float *)(t1))->v) = 0.0f;
        (((struct o2C_float *)(t1))->v) = 0.0f;
        (((struct o28_float *)(t1))->v) = 0.0f;
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        t0 = 0x28;
    }
    return t0;
}

void FUN_0c11dbdc(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 != 10) {
                switch (t0) {
                case 20:
                    (((struct o14_uchar *)(a4))->v) = 0x0;
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    break;
                case 30:
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                    break;
                case 99:
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                    break;
                }
                return;
            }
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03733c(a4, 0x15, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A0C84); }
}

int FUN_0c065cb0(int a4)
{
    int stk[9];
    register int t7;
    register int t8;
    register int t10;
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t21;
    register int t19;

    t7 = a4;
    for (;;) {
        if (t7 == 0) {
            break;
        }
        t0 = 0x125;
        t6 = 0x184;
        t8 = *(signed char *)((t7 + t0));
        t0 = (*(signed char *)((t7 + 0x1)));
        t6 = (t6 + t7);
        t2 = 0xC05FFA4;
        t6 = (t6 + 0x140);
        t10 = t0;
        t0 = 0x124;
        t0 = (FUN_0c05ffa4((*(signed char *)((t7 + t0))), t10, t8));
        t5 = t0;
        t0 = (*(signed char *)((t5 + 0x3)));
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t3 = t0;
        t4 = 0x0;
        if ((int)t3 > 0) {
            for (;;) {
                t0 = (*(signed char *)((t5 + 0x0)));
                if ((t0 & 3) != 0) {
                    t2 = 0xC18778C;
                    t1 = t5;
                    t0 = 0x20;
                    { struct mv8 { int w[8]; }; *(struct mv8 *)(t6) = *(struct mv8 *)(t1); }
                    t0 = (*(signed char *)((t6 + 0x2)));
                    t2 = 0xC060180;
                    t0 = (FUN_0c060180(t7, (t6 + 0x8), t0));
                    t1 = 0xC0601DA;
                    t0 = (FUN_0c0601da((t7 + 0x40), t6));
                    t2 = (*(int *)(((int)stk + 0)));
                    t6 = (t6 + 0x20);
                    t2 = (t2 + 0x1);
                    *(unsigned int *)(((int)stk + 0)) = t2;
                    t19 = t2;
                }
                t2 = t19;
                t4 = (t4 + 0x1);
                t5 = (t5 + 0x20);
                if ((int)t4 >= (int)t3) {
                    break;
                }
            }
            t21 = t2;
        }
        t1 = 0x184;
        t2 = t21;
        t0 = (*(int *)(((int)stk + 0)));
        t1 = (t1 + t7);
        t1 = (t1 + 0x140);
        *(unsigned char *)((t1 + 0x3)) = t0;
        t7 = (*(int *)((t7 + 0xC)));
    }
    return t0;
}

int vmsfs_fgetsize(int a4, int a5)
{
    int stk[12];
    register int t1;
    register int t3;
    register int t5;
    register int t7;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a5;
    if ((*(signed char *)(((a4 * 0x148) + 0xC8C4606))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            if ((*(signed char *)(((a4 * 0x148) + 0xC8C460C))) == 0) {
                return 0xFFFFFF01;
            }
            t5 = thunk_FUN_0c2c067e(a4);
            if ((int)t5 < 0) {
                return 0xFFFFFF03;
            }
            *(volatile int *)(((int)stk + 0));
            t7 = FUN_0c2c14a8();
            if ((int)t7 < 0) {
                return 0xFFFFFF0B;
            }
            t9 = search_dir(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4));
            if ((int)t9 < 0) {
                return 0xFFFFFF05;
            }
            return (*(int *)(((int)stk + 44)));
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int FUN_0c03db62(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = FUN_0c03cbfa((*(int *)((a4 + 0x1C))));
                t2 = t0;
                if ((t0 == 0) || (t0 != -1)) {
                    *(unsigned char *)((a4 + 0x3)) = 0x1;
                    *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0x1C))) + 0x1);
                    t2 = 0x1;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = ((int (*)(int, int, int, int))(FUN_0c03b05a))(a4, a5, a6, a7);
            *(unsigned int *)((a4 + 0x18)) = t1;
            t2 = t1;
            if ((int)t1 >= 0) {
                t1 = *(int *)((a4 + 0x1C));
                if ((int)t1 < (int)0x8) {
                    t3 = t1;
                    for (;;) {
                        if ((((int)0x1 << (int)t3) & (*(int *)((a4 + 0x18)))) != 0) {
                            break;
                        }
                        t3 = (t3 + 0x1);
                        if ((int)t3 >= (int)0x8) {
                            if ((int)0xFFFFFFFF < 0) {
                                t3 = 0xC3DC240;
                                *(unsigned char *)((t3 + 0x2)) = 0x3;
                                *(unsigned char *)((t3 + 0x3)) = 0x0;
                                return 0x0;
                            }
                            *(unsigned int *)((a4 + 0x1C)) = 0xFFFFFFFF;
                            *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
                            t3 = (*(int *)((a4 + 0x1C)));
                            t1 = FUN_0c03cbfa(t3);
                            if ((t1 != 0) && (t1 == -1)) {
                                return t1;
                            }
                            *(unsigned char *)((a4 + 0x3)) = 0x1;
                            *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0x1C))) + 0x1);
                            return 0x1;
                        }
                    }
                    t1 = t3;
                } else {
                    t1 = 0xFFFFFFFF;
                }
                if ((int)t1 < 0) {
                    (((struct o0_uchar *)0xC3DC242)->v) = 0x3;
                    (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                    t3 = 0x0;
                } else {
                    *(unsigned int *)((a4 + 0x1C)) = t1;
                    *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
                    t1 = FUN_0c03cbfa((*(int *)((a4 + 0x1C))));
                    t4 = t1;
                    if ((t1 == 0) || (t1 != -1)) {
                        *(unsigned char *)((a4 + 0x3)) = 0x1;
                        *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0x1C))) + 0x1);
                        t4 = 0x1;
                    }
                    t3 = t4;
                }
                t2 = t3;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        FUN_0c03df6a(a4, a5, a6, a7);
        (((struct o20_ushort *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x1C)) = 0x0;
        t0 = ((int (*)(void))(FUN_0c03b05a))();
        *(unsigned int *)((a4 + 0x18)) = t0;
        t2 = t0;
        if ((int)t0 >= 0) {
            t0 = *(int *)((a4 + 0x1C));
            if ((int)t0 < (int)0x8) {
                t3 = t0;
                for (;;) {
                    if ((((int)0x1 << (int)t3) & (*(int *)((a4 + 0x18)))) != 0) {
                        break;
                    }
                    t3 = (t3 + 0x1);
                    if ((int)t3 >= (int)0x8) {
                        if ((int)0xFFFFFFFF < 0) {
                            t3 = 0xC3DC240;
                            *(unsigned char *)((t3 + 0x2)) = 0x3;
                            *(unsigned char *)((t3 + 0x3)) = 0x0;
                            return 0x0;
                        }
                        *(unsigned int *)((a4 + 0x1C)) = 0xFFFFFFFF;
                        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
                        t3 = (*(int *)((a4 + 0x1C)));
                        t0 = FUN_0c03cbfa(t3);
                        if ((t0 != 0) && (t0 == -1)) {
                            return t0;
                        }
                        *(unsigned char *)((a4 + 0x3)) = 0x1;
                        *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0x1C))) + 0x1);
                        return 0x1;
                    }
                }
                t0 = t3;
            } else {
                t0 = 0xFFFFFFFF;
            }
            if ((int)t0 < 0) {
                (((struct o0_uchar *)0xC3DC242)->v) = 0x3;
                (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                t3 = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x1C)) = t0;
                *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
                t0 = FUN_0c03cbfa((*(int *)((a4 + 0x1C))));
                t4 = t0;
                if ((t0 == 0) || (t0 != -1)) {
                    *(unsigned char *)((a4 + 0x3)) = 0x1;
                    *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0x1C))) + 0x1);
                    t4 = 0x1;
                }
                t3 = t4;
            }
            t2 = t3;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c129260(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xD, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC1292F8;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0xD, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)0xC2A0FB0) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t1 + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(a4))->v)) + (*(float *)0xC12939C));
        t0 = 0x2C;
    }
    return t0;
}

int FUN_0c169922(int a4, int a5)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x39, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x1, 0x0, t1);
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x39, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x4)) = 0xC1697B8;
        *(unsigned char *)((t2 + 0x2)) = a5;
        thunk_FUN_0c058310((((((struct oCC_int *)(a4))->v)) + 0x28), (t2 + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o48_float *)(t2))->v) = 0.0f;
        (((struct o44_float *)(t2))->v) = 0.0f;
        (((struct o40_float *)(t2))->v) = 0.0f;
        *(unsigned int *)((t2 + 0x10)) = a4;
        return FUN_0c169524(t2, 0x29, 0x61);
    }
    return t2;
}
