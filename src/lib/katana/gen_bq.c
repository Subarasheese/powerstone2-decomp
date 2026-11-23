/* Straight-line functions with calls and guards (batch gen_bq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_short { char p[0x10]; short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o36_uchar { char p[0x36]; unsigned char v; };
struct o38_uchar { char p[0x38]; unsigned char v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
int FUN_0c2c14a8(void);
int FUN_0c2f67cc(float, float, float, float, float, float, float);
extern int FUN_0c2f6c38();
int FUN_0c2fbc38(int, int, int);
int clear_file(int, int);
int direntry(int, int);
int direntry_dirty(int, int);
int get_fat(int, int);
int get_vmstime(int, int);
int search_dir(int, int, int);
int search_exec_file(int, int);
int set_vmstime(int, int);
int thunk_FUN_0c2c067e(int);
int vmsfs_diskfree(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
int FUN_0c2f4a04(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int vmsfs_getinfo(int a4, int a5);
int vmsfs_frename(int a4, int a5, int a6);
int vmsfs_fsettime(int a4, int a5, int a6);
int vmsfs_fgetinfo(int a4, int a5, int a6);
int vmsfs_fsetattr(int a4, int a5, int a6, int a7);
int vmsfs_sysdiskfree(int a4);
int FUN_0c103d56(int a4, int a5, int a6);
int vmsfs_fisexist(int a4, int a5);
int FUN_0c2bf2ae(int a4, int a5, int a6);
int vmsfs_xfind(int a4, int a5, int a6);
int vmsfs_fdelete(int a4, int a5);
int vmsfs_fgetsize(int a4, int a5);
int vmsfs_getvolume(int a4, int a5);

int FUN_0c2f4a04(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    if ((*(signed char *)0xC8DFF9E) != 0) {
        (((struct o3C_uchar *)0xC8DFF6C)->v) = 0x0;
    } else {
        if ((*(signed char *)0xC8DFFA4) != 0) {
            if ((*(signed char *)0xC8DFFF1) == 0) {
                (((struct o3C_uchar *)0xC8DFF6C)->v) = 0x1;
            } else {
                (((struct o3C_uchar *)0xC8DFF6C)->v) = 0x0;
                t1 = (((int (*)(int, int, int))(FUN_0c2f6c38))(0xC8DFFA8, a5, a6));
            }
            if ((*(signed char *)0xC8DFF92) != 0) {
                (((struct o24_uchar *)0xC8DFF6C)->v) = 0x3;
                (((struct o25_uchar *)0xC8DFF6C)->v) = 0x5;
                (((struct o29_uchar *)0xC8DFF6C)->v) = 0x0;
                (((struct o28_uchar *)0xC8DFF6C)->v) = 0x1;
            }
            t2 = t1;
            if ((*(signed char *)0xC8DFFA3) == 0) {
                t1 = 0xC8DFFA0;
                if ((*(signed char *)0xC8DFFA0) == 0) {
                    (((struct o20_uchar *)0xC8DFF6C)->v) = 0x0;
                    (((struct o35_uchar *)0xC8DFF6C)->v) = 0x0;
                    t3 = *(signed char *)0xC8DFF72;
                    t4 = t3;
                    if ((*(signed char *)0xC8DFF71) != t3) {
                        (((struct o20_uchar *)0xC8DFF6C)->v) = 0x1;
                        t3 = *(int *)0xC8D67BC;
                        (((struct o14_uint *)0xC8DFF6C)->v) = t3;
                        t4 = t3;
                    }
                    t1 = t4;
                }
                t2 = t1;
            }
            t1 = t2;
        } else {
            t2 = *(signed char *)0xC8DFF6F;
            t3 = *(signed char *)0xC8DFF73;
            if ((unsigned char)t2 != (unsigned char)t3) {
                t4 = (unsigned char)t2;
                t5 = t2;
                if ((int)(unsigned char)t2 < (int)(unsigned char)t3) {
                    t4 = 0x80;
                    t5 = (t2 + 0x80);
                }
                t2 = t4;
                if ((int)((unsigned char)t5 - (unsigned char)t3) >= (int)(unsigned char)(*(signed char *)0xC8DFFBF)) {
                } else {
                    FUN_0c2fbc38((unsigned char)t3, ((unsigned char)t5 - (unsigned char)t3), 0xC8DFF73);
                    t3 = *(signed char *)0xC8D678F;
                    (((struct o0_uchar *)0xC8D678F)->v) = (t3 | 0x80);
                    if ((*(signed char *)0xC8DFFF1) == 0) {
                        (((struct o0_ushort *)0xC8DFF6C)->v) = 0x0;
                        if ((*(signed char *)0xC8DFF92) != 0) {
                            if ((*(signed char *)0xC8DFFA2) == 0) {
                                (((struct o36_uchar *)0xC8DFF6C)->v) = 0x1;
                                (((struct o24_uchar *)0xC8DFF6C)->v) = 0x4;
                                (((struct o25_uchar *)0xC8DFF6C)->v) = 0x9;
                            } else {
                                (((struct o24_uchar *)0xC8DFF6C)->v) = 0x2;
                                (((struct o25_uchar *)0xC8DFF6C)->v) = 0x1;
                            }
                            (((struct o29_uchar *)0xC8DFF6C)->v) = 0x0;
                            (((struct o28_uchar *)0xC8DFF6C)->v) = 0x1;
                            t4 = (t3 | 0x80);
                        } else {
                            t3 = *(signed char *)0xC8DFFA2;
                            t5 = t3;
                            if (t3 == 0) {
                                t3 = (((struct o4_short *)0xC8D680A)->v);
                                (((struct o4_ushort *)0xC8D680A)->v) = (t3 + 0x1);
                                (((struct o36_uchar *)0xC8DFF6C)->v) = 0x1;
                                (((struct o24_uchar *)0xC8DFF6C)->v) = 0x4;
                                (((struct o25_uchar *)0xC8DFF6C)->v) = 0x9;
                                (((struct o29_uchar *)0xC8DFF6C)->v) = 0x1;
                                (((struct o28_uchar *)0xC8DFF6C)->v) = 0x0;
                                t5 = (t3 + 0x1);
                            }
                            t4 = t5;
                        }
                        t3 = t4;
                    } else {
                        if ((*(signed char *)0xC8DFFA2) == 0) {
                            if (((((struct o0_short *)0xC8DFD48)->v)) == 0) {
                                (((struct o4_ushort *)0xC8D680A)->v) = (((((struct o4_short *)0xC8D680A)->v)) + 0x1);
                                (((struct o5_uchar *)0xC8DFD48)->v) = 0x1;
                                (((struct o24_uchar *)0xC8DFF6C)->v) = 0x5;
                                (((struct o25_uchar *)0xC8DFF6C)->v) = 0xD;
                                (((struct o29_uchar *)0xC8DFF6C)->v) = 0x1;
                                (((struct o28_uchar *)0xC8DFF6C)->v) = 0x0;
                            }
                            t4 = (((int (*)(void))(FUN_0c2f6c38))());
                        } else {
                            (((struct o0_ushort *)0xC8DFF6C)->v) = 0x0;
                            t5 = *(signed char *)0xC8DFF92;
                            if (t5 != 0) {
                                (((struct o24_uchar *)0xC8DFF6C)->v) = 0x2;
                                (((struct o25_uchar *)0xC8DFF6C)->v) = 0x1;
                                (((struct o29_uchar *)0xC8DFF6C)->v) = 0x0;
                                (((struct o28_uchar *)0xC8DFF6C)->v) = 0x1;
                            }
                            t4 = t5;
                        }
                        t3 = t4;
                    }
                    t4 = t3;
                    if ((*(signed char *)0xC8DFFA3) == 0) {
                        t3 = 0xC8DFFA0;
                        if ((*(signed char *)0xC8DFFA0) == 0) {
                            (((struct o20_uchar *)0xC8DFF6C)->v) = 0x0;
                            (((struct o35_uchar *)0xC8DFF6C)->v) = 0x0;
                            t5 = *(signed char *)0xC8DFF72;
                            t6 = t5;
                            if ((*(signed char *)0xC8DFF71) != t5) {
                                (((struct o20_uchar *)0xC8DFF6C)->v) = 0x1;
                                t5 = *(int *)0xC8D67BC;
                                (((struct o14_uint *)0xC8DFF6C)->v) = t5;
                                t6 = t5;
                            }
                            t3 = t6;
                        }
                        t4 = t3;
                    }
                    t2 = t4;
                }
                t3 = t2;
            } else {
                (((struct o0_ushort *)0xC8D680A)->v) = (((((struct o0_short *)0xC8D680A)->v)) + 0x1);
                (((struct o7_uchar *)0xC8DFF6C)->v) = (((*(signed char *)0xC8DFF73) + 0x1) & 0x7F);
                (((struct o36_uchar *)0xC8DFF6C)->v) = 0x0;
                t2 = (((struct o0_int *)0xC8DF924)->v);
                (((struct o18_uint *)0xC8DFD48)->v) = t2;
                t4 = 0xC8DF924;
                t5 = t2;
                t2 = 0x1;
                for (;;) {
                    if ((int)(unsigned short)t2 > (int)(unsigned short)((((struct o0_short *)0xC8DFF6C)->v))) {
                        break;
                    }
                    t6 = (((struct o18_int *)0xC8DFD48)->v);
                    (((struct o18_uint *)0xC8DFD48)->v) = (t6 + 0x1);
                    t7 = (((struct o8_int *)0xC8DFD48)->v);
                    (((struct o8_uint *)0xC8DFD48)->v) = (t7 + 0x1);
                    t5 = (*(signed char *)((((t7 + 0x1) - 1) + 0x0)));
                    *(unsigned char *)((((t6 + 0x1) - 0x1) + 0x0)) = t5;
                    (((struct o8_ushort *)0xC8DF924)->v) = (((((struct o8_short *)0xC8DF924)->v)) + 0x1);
                    t4 = 0xC8DF91C;
                    t5 = ((((struct o18_int *)0xC8DFD48)->v));
                    t2 = (t2 + 0x1);
                    if ((unsigned int)t5 > (unsigned int)(*(int *)((t4 + 0x0)))) {
                        (((struct o18_uint *)0xC8DFD48)->v) = 0xC8DE91A;
                    }
                }
                (((struct o0_uint *)0xC8DF924)->v) = ((((struct o18_int *)0xC8DFD48)->v));
                if ((int)(unsigned short)((((struct o8_short *)0xC8DF924)->v)) < (int)0xF00) {
                    t2 = *(signed char *)0xC8DFD4D;
                    if (t2 == 0) {
                        if ((*(signed char *)0xC8DFF92) != 0) {
                            (((struct o24_uchar *)0xC8DFF6C)->v) = 0x2;
                            (((struct o25_uchar *)0xC8DFF6C)->v) = 0x1;
                            (((struct o29_uchar *)0xC8DFF6C)->v) = 0x0;
                            (((struct o28_uchar *)0xC8DFF6C)->v) = 0x1;
                            t4 = t2;
                        } else {
                            if ((((((struct o10_short *)0xC8DFD48)->v)) != (*(short *)0xC8DE914)) && (t0 = *(signed char *)0xC8DFFA3, t0 == 0)) {
                            } else {
                                (((struct o24_uchar *)0xC8DFF6C)->v) = 0x2;
                                (((struct o25_uchar *)0xC8DFF6C)->v) = 0x1;
                                (((struct o29_uchar *)0xC8DFF6C)->v) = 0x0;
                                (((struct o28_uchar *)0xC8DFF6C)->v) = 0x0;
                            }
                            t4 = 0xC8DFD58;
                        }
                        t0 = t4;
                    } else {
                        (((struct o5_uchar *)0xC8DFD48)->v) = 0x0;
                        t0 = (FUN_0c2f67cc(f4, f5, f6, f7, f8, f9, f10));
                    }
                    t2 = t0;
                } else {
                    (((struct o5_uchar *)0xC8DFD48)->v) = 0x0;
                    (((struct o38_uchar *)0xC8DFF6C)->v) = 0x1;
                    if ((*(signed char *)0xC8DFF92) != 0) {
                        (((struct o24_uchar *)0xC8DFF6C)->v) = 0x3;
                        (((struct o25_uchar *)0xC8DFF6C)->v) = 0x5;
                        (((struct o29_uchar *)0xC8DFF6C)->v) = 0x0;
                        (((struct o28_uchar *)0xC8DFF6C)->v) = 0x1;
                    } else {
                        (((struct o24_uchar *)0xC8DFF6C)->v) = 0x3;
                        (((struct o25_uchar *)0xC8DFF6C)->v) = 0x5;
                        (((struct o29_uchar *)0xC8DFF6C)->v) = 0x0;
                        (((struct o28_uchar *)0xC8DFF6C)->v) = 0x0;
                    }
                    t2 = 0xC8DFD4D;
                }
                t0 = t2;
                if ((*(signed char *)0xC8DFFA3) == 0) {
                    t2 = 0xC8DFFA0;
                    if ((*(signed char *)0xC8DFFA0) == 0) {
                        (((struct o20_uchar *)0xC8DFF6C)->v) = 0x0;
                        (((struct o35_uchar *)0xC8DFF6C)->v) = 0x0;
                        t4 = *(signed char *)0xC8DFF72;
                        t5 = t4;
                        if ((*(signed char *)0xC8DFF71) != t4) {
                            (((struct o20_uchar *)0xC8DFF6C)->v) = 0x1;
                            t4 = *(int *)0xC8D67BC;
                            (((struct o14_uint *)0xC8DFF6C)->v) = t4;
                            t5 = t4;
                        }
                        t2 = t5;
                    }
                    t0 = t2;
                }
                t3 = t0;
            }
            t1 = t3;
        }
        t0 = t1;
    }
    return t0;
}

int vmsfs_getinfo(int a4, int a5)
{
    int stk[3];
    register int t48;
    register int t1;
    register int t3;
    register int t38;
    register int t33;
    register int t7;
    register int t11;
    register int t15;
    register int t16;
    register int t17;
    register int t43;
    int t4;
    register int t5;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = (a4 * 0x148);
    t48 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t43 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t38 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(int *)(((int)stk + 0)), t5 = *(signed char *)(((t4 + 0xC8C4604) + 0x8)), t5 != 0)) {
                t7 = thunk_FUN_0c2c067e(a4);
                t33 = 0xFFFFFF03;
                if ((int)t7 >= 0) {
                    t11 = 0x0;
                    for (;;) {
                        if ((int)t11 >= (int)0x20) {
                            break;
                        }
                        t15 = t11;
                        t7 = (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20)));
                        t15 = (t15 + 0x10);
                        t9 = a5;
                        t9 = (t9 + t11);
                        t11 = (t11 + 0x1);
                        *(unsigned char *)((t9 + 0x0)) = ((*(signed char *)((t15 + t7))));
                    }
                    t16 = (((int)stk + 0) + 0x4);
                    t17 = ((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))) + 0x30);
                    for (;;) {
                        if ((unsigned int)t16 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x8)) {
                            break;
                        }
                        t15 = (*(signed char *)((t17 + 0x0)));
                        t17 = (t17 + 0x1);
                        *(unsigned char *)((t16 + 0x0)) = t15;
                        t16 = (t16 + 0x1);
                    }
                    get_vmstime((a5 + 0x30), (((int)stk + 0) + 0x4));
                    (((struct o20_ushort *)(a5))->v) = ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x0))) + 0x1);
                    (((struct o22_ushort *)(a5))->v) = (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x30)));
                    (((struct o26_ushort *)(a5))->v) = (vmsfs_diskfree(a4, 0x0));
                    (((struct o24_ushort *)(a5))->v) = ((((struct o26_short *)(a5))->v));
                    (((struct o28_ushort *)(a5))->v) = (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x38)));
                    (((struct o2A_ushort *)(a5))->v) = (vmsfs_diskfree(a4, 0x1));
                    (((struct o2C_ushort *)(a5))->v) = ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x2C))) + 0x1);
                    (((struct o2E_ushort *)(a5))->v) = (unsigned char)(*(signed char *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))) + 0x4E)));
                    t33 = 0x0;
                }
                t38 = t33;
            }
            t43 = t38;
        }
        t48 = t43;
    }
    return t48;
}



int vmsfs_fgetinfo(int a4, int a5, int a6)
{
    int stk[14];
    register int t34;
    register int t1;
    register int t3;
    register int t6;
    register int t8;
    int t4;
    register int t5;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)(((int)stk + 0)) = ((a4 * 0x148) + 0xC8C4604);
    t34 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t34 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t34 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(int *)(((int)stk + 8)), t5 = *(signed char *)(((t4 + 0xC8C4604) + 0x8)), t5 != 0)) {
                t6 = thunk_FUN_0c2c067e(a4);
                t34 = 0xFFFFFF03;
                if ((int)t6 < 0) {
                } else {
                    t8 = search_dir(a4, (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC));
                    t34 = 0xFFFFFF05;
                    if ((int)t8 < 0) {
                    } else {
                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 52))) * ((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x2C))) + 0x1));
                        *(unsigned short *)((a6 + 0x4)) = (*(int *)(((int)stk + 52)));
                        *(unsigned char *)((a6 + 0x6)) = (*(int *)(((int)stk + 16)));
                        *(unsigned char *)((a6 + 0x7)) = (*(signed char *)(((int)stk + 22)));
                        *(unsigned short *)((a6 + 0x8)) = (*(short *)(((int)stk + 20)));
                        *(unsigned char *)((a6 + 0x6)) = ((((*(int *)(((int)stk + 16))) == 0xCC)) ? 1 : 0);
                        get_vmstime((a6 + 0xA), (((int)stk + 0) + 0x2C));
                        t34 = 0x0;
                    }
                }
            }
        }
    }
    return t34;
}


int vmsfs_sysdiskfree(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t1 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) != 0) {
        t2 = vmsio_isready(a4);
        if (t2 == 0) {
            vmsfs_unmount(a4);
            t2 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t4 = 0xFFFFFF01;
            if ((t3 != 0) && (t0 = *(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x8)), t0 != 0)) {
                t0 = thunk_FUN_0c2c067e(a4);
                t3 = 0xFFFFFF03;
                if ((int)t0 < 0) {
                } else {
                    t5 = t0;
                    t0 = 0x0;
                    t6 = 0x0;
                    for (;;) {
                        t7 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C));
                        t8 = *(int *)((t7 + 0x2C));
                        t9 = *(int *)((t7 + 0x10));
                        if ((int)t6 >= (int)(((int)((unsigned int)((int)((unsigned int)(t9 * (t8 + 0x1)) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t9 * (t8 + 0x1)))) ? 1u : 0u))) >> 1)) {
                            break;
                        }
                        t5 = (get_fat(a4, t6));
                        t5 = (unsigned short)t5;
                        t6 = (t6 + 0x1);
                        if (t5 == 0xFFFC) {
                            t0 = (t0 + 0x1);
                        }
                    }
                    t3 = t0;
                }
                t4 = t3;
            }
            t2 = t4;
        }
        t1 = t2;
    }
    return t1;
}


int vmsfs_fisexist(int a4, int a5)
{
    int stk[12];
    register int t1;
    register int t3;
    register int t5;
    register int t7;

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
            t7 = search_dir(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4));
            if ((int)t7 >= 0) {
                return 0x0;
            }
            return 0xFFFFFF05;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int FUN_0c2bf2ae(int a4, int a5, int a6)
{
    int stk[2];
    register int t3;
    register int t7;
    register int t11;

    *(unsigned short *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    if (a4 == 0) {
        return 0xFFFFFF00;
    }
    if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC8C4606))) != 0) {
        t3 = vmsio_isready((*(int *)((a4 + 0x28))));
        if (t3 == 0) {
            vmsfs_unmount((*(int *)((a4 + 0x28))));
            return 0xFFFFFF01;
        }
        t7 = vmsio_ismount((*(int *)((a4 + 0x28))));
        if (t7 != 0) {
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC8C460C))) == 0) {
                return 0xFFFFFF01;
            }
            t11 = thunk_FUN_0c2c067e((*(int *)((a4 + 0x28))));
            if ((int)t11 < 0) {
                return 0xFFFFFF03;
            }
            *(unsigned short *)((a4 + 0x2)) = (*(short *)(((int)stk + 4)));
            *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((int)stk + 0)));
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int vmsfs_xfind(int a4, int a5, int a6)
{
    int stk[11];
    register int t39;
    register int t1;
    register int t3;
    register int t27;
    register int t21;
    register int t5;
    register int t16;
    register int t11;
    register int t7;
    register int t9;
    register int t33;
    register int t8;

    t39 = 0xFFFFFF01;
    if ((*(signed char *)(((a4 * 0x148) + 0xC8C4606))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t27 = 0xFFFFFF01;
            if (t3 != 0) {
                t21 = 0xFFFFFF01;
                if ((*(signed char *)(((a4 * 0x148) + 0xC8C460C))) == 0) {
                } else {
                    t5 = thunk_FUN_0c2c067e(a4);
                    t16 = 0xFFFFFF03;
                    if ((int)t5 >= 0) {
                        t7 = search_exec_file(a4, ((int)stk + 0));
                        t11 = 0xFFFFFF05;
                        if ((int)t7 >= 0) {
                            t9 = 0x0;
                            for (;;) {
                                if ((int)t9 >= (int)0xC) {
                                    break;
                                }
                                t8 = ((int)stk + 0);
                                t8 = (t8 + 0x10);
                                t7 = t9;
                                t8 = (*(signed char *)((t8 + t7)));
                                t9 = (t9 + 0x1);
                                *(unsigned char *)((a5 + t7)) = t8;
                            }
                            *(unsigned char *)((a5 + 0xC)) = 0x0;
                            t11 = 0x0;
                        }
                        t16 = t11;
                    }
                    t21 = t16;
                }
                t27 = t21;
            }
            t33 = t27;
        }
        t39 = t33;
    }
    return t39;
}

int vmsfs_fdelete(int a4, int a5)
{
    int t0;
    register int t1;

    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
    t1 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = (*(int *)((((((t1 << 2) + t1) << 2) << 2) + 0xC303C54)));
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t1 = vmsio_ismount(a4);
        if ((t1 != 0) && (t0 = *(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x8)), t0 != 0)) {
            t0 = thunk_FUN_0c2c067e(a4);
            if ((int)t0 < 0) {
                return 0xFFFFFF03;
            }
            t0 = FUN_0c2c14a8();
            if ((int)t0 < 0) {
                return 0xFFFFFF0B;
            }
            t0 = clear_file(a4, a5);
            if ((int)t0 >= 0) {
                t1 = write_dir(a4);
                if ((int)t1 < 0) {
                    return t1;
                }
                return write_fat(a4);
            }
            return t0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}


int vmsfs_getvolume(int a4, int a5)
{
    int stk[3];
    register int t1;
    register int t3;
    register int t6;
    register int t11;
    register int t12;
    int t4;
    register int t5;
    register int t9;
    register int t10;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)(((int)stk + 0)) = ((a4 * 0x148) + 0xC8C4604);
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if ((t3 != 0) && (t4 = *(int *)(((int)stk + 8)), t5 = *(signed char *)(((t4 + 0xC8C4604) + 0x8)), t5 != 0)) {
            t6 = thunk_FUN_0c2c067e(a4);
            if ((int)t6 < 0) {
                return 0xFFFFFF03;
            }
            t11 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x20))) + 0x10);
            t12 = 0x0;
            for (;;) {
                if ((int)t12 >= (int)0x20) {
                    break;
                }
                t9 = (*(int *)(((int)stk + 4)));
                t12 = (t12 + 0x1);
                t9 = (t9 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t9;
                t10 = (*(signed char *)((t11 + 0x0)));
                t11 = (t11 + 0x1);
                *(unsigned char *)(((t9 - 0x1) + 0x0)) = t10;
                t9 = (t9 - 0x1);
            }
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}
