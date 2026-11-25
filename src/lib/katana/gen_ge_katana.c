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


