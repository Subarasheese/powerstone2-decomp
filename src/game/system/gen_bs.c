/* Straight-line functions with calls and guards (batch gen_bs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_short { char p[0x14]; short v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o18_int { char p[0x18]; int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2B_uchar { char p[0x2B]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_ushort { char p[0x40]; unsigned short v; };
struct o42_short { char p[0x42]; short v; };
struct o44_short { char p[0x44]; short v; };
struct o48_int { char p[0x48]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o6A_ushort { char p[0x6A]; unsigned short v; };
struct o6C_uchar { char p[0x6C]; unsigned char v; };
struct o6D_uchar { char p[0x6D]; unsigned char v; };
struct o71_uchar { char p[0x71]; unsigned char v; };
struct o72_uchar { char p[0x72]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
int ADXSJD_Create(int, int, int);
int ADXT_Destroy(int);
int FUN_0c010448(void);
int FUN_0c013b9c(int);
int FUN_0c018e74(int);
int FUN_0c01cb7c(void);
int FUN_0c01d094(void);
int FUN_0c01d262(void);
int FUN_0c01d26e(int);
int FUN_0c01d27a(void);
extern int FUN_0c01d294();
int FUN_0c01e992(int, int, int);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c05b05c(int, int);
int vmsfs_read_retry(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c2b488a(int);
int vmsfs_write_retry(int, int, int);
int FUN_0c2c14a8(void);
int FUN_0c2c3148(void);
int FUN_0c2c3394(int);
int FUN_0c2c38aa(int);
int FUN_0c2c38c2(int);
int FUN_0c2f4660(int);
int FUN_0c2fbc38(void);
int SJRBF_Create(int, int, int);
int check_fat_all(int, int, int);
int clear_file(int, int);
int get_fat(int, int, int);
int memset(int, int, int);
int search_dir_by_startfat(int, int, int);
int search_fat(int, int, int);
int search_fat_free(int, int, int);
int search_fat_used(int, int, int);
int set_fat(int, int);
int thunk_FUN_0c2c067e(int, int, int);
int thunk_FUN_0c2c4cb8(int, int, int);
int thunk_FUN_0c2c52e0(int, int);
int thunk_FUN_0c2c59fc(int);
int thunk_FUN_0c2c5bd0(int, int, int);
int vmsfs_unmount(int);
int vmsfs_xfind(int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int, int, int);
int write_fat(int, int, int);
int FUN_0c2f430c(int a4, int a5, int a6);
int ADXT_Create(int a4, int a5, int a6);
int vmsfs_xdefrag(int a4, int a5, int a6, int a7);
int vmsfs_fdelete_ex(int a4, int a5, int a6);
int FUN_0c0116a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int adxt_stat_prep(int a4, int a5, int a6, int a7);
int FUN_0c028494(void);
int FUN_0c2c4054(int a4);

int FUN_0c2f430c(int a4, int a5, int a6)
{
    int stk[7];
    register int t1;
    register int t15;
    register int t16;
    register int t17;
    register int t19;
    register int t30;
    register int t33;
    register int t39;
    register int t75;
    register int t112;
    register int t181;
    register int t211;
    register int t0;
    int t41;
    register int t233;
    int t70;
    register int t71;
    int t113;
    int t206;
    register int t207;

    t1 = a6;
    for (;;) {
        if ((*(signed char *)0xC8DFF74) == (*(signed char *)0xC8DFF71)) {
            break;
        }
        t1 = (*(signed char *)0xC8DFF74);
        t1 = (unsigned char)t1;
        t1 = (t1 << 1);
        *(unsigned int *)(((int)stk + 0)) = t1;
        t0 = ((((struct oA_short *)0xC8DFD4E)->v));
        t1 = (t1 + ((((struct o4_int *)0xC8DFF64)->v)));
        t0 = (t0 - (*(short *)((t1 + 0x0))));
        (((struct oA_ushort *)0xC8DFD4E)->v) = t0;
        t0 = ((((struct o14_short *)0xC8DE900)->v));
        t0 = (t0 - (*(short *)((t1 + 0x0))));
        (((struct o14_ushort *)0xC8DE900)->v) = t0;
        (((struct o18_ushort *)0xC8DE900)->v) = (((((struct o18_short *)0xC8DE900)->v)) - (*(short *)((t1 + 0x0))));
        t0 = (*(int *)(((int)stk + 0)));
        t15 = *(short *)((((((struct o0_int *)0xC8DFF64)->v)) + t0));
        t16 = (((struct o0_int *)0xC8DE900)->v);
        (((struct o8_uint *)0xC8DE900)->v) = ((unsigned short)t15 + t16);
        t17 = *(short *)((t1 + 0x0));
        (((struct o8_uint *)0xC8DE900)->v) = (((unsigned short)t15 + t16) + (unsigned short)t17);
        t0 = 0xC8DE904;
        if ((unsigned int)(((unsigned short)t15 + t16) + (unsigned short)t17) > (unsigned int)(*(int *)((t0 + 0x0)))) {
            t19 = (((struct o8_int *)0xC8DE900)->v);
            (((struct o8_uint *)0xC8DE900)->v) = (t19 - 1);
            (((struct o8_uint *)0xC8DE900)->v) = (((t19 - 1) - (*(int *)((t0 + 0x0)))) + ((((struct o0_int *)0xC8DE900)->v)));
        }
        t0 = ((((struct o4_int *)0xC8DFF64)->v));
        *(unsigned short *)((((unsigned char)(*(signed char *)0xC8DFF74) << 1) + t0)) = 0x0;
        t0 = (*(signed char *)0xC8DFF74);
        t0 = (t0 + 0x1);
        t0 = (t0 & 0x7F);
        (((struct o10_uchar *)0xC8DFF64)->v) = t0;
    }
    *(unsigned char *)0xC8DFFDE = 0x0;
    t30 = *(signed char *)0xC8DFF72;
    t33 = t30;
    if ((int)(unsigned char)t30 < (int)(unsigned char)(*(signed char *)0xC8DFF71)) {
        t33 = (t30 + 0x80);
    }
    if ((int)((unsigned char)t33 - (unsigned char)(*(signed char *)0xC8DFF71)) < (int)(unsigned char)(*(signed char *)0xC8DFFC2)) {
        *(unsigned char *)0xC8DFFDE = 0x1;
    }
    t39 = *(int *)0xC8D67BC;
    *(unsigned int *)(((int)stk + 0)) = ((((struct o18_int *)0xC8DFF64)->v));
    if (((*(signed char *)0xC8DFFA9) == 0) && (t41 = *(signed char *)0xC8DFFAB, t41 == 0)) {
        if ((*(signed char *)0xC8DFFAE) != 0) {
            t233 = 0xC8DFFAE;
            if ((unsigned int)(t39 - ((((struct o1C_int *)0xC8DFF64)->v))) <= (unsigned int)(*(int *)(((int)stk + 0)))) {
            } else {
                (((struct o1C_uint *)0xC8DFF64)->v) = t39;
                if ((*(signed char *)0xC8DFFA1) == 0) {
                    *(unsigned char *)0xC8DFFA1 = 0x1;
                    (((struct o2B_uchar *)0xC8DFF64)->v) = 0x0;
                } else {
                    (((struct o2B_uchar *)0xC8DFF64)->v) = ((*(signed char *)0xC8DFF8F) + 0x1);
                    (((struct o0_ushort *)0xC8D6810)->v) = (((((struct o0_short *)0xC8D6810)->v)) + 0x1);
                }
                if (((*(signed char *)0xC8DFF8E) != 0) && (t70 = *(signed char *)0xC8DFF8E, t71 = *(signed char *)0xC8DFF8F, (unsigned int)t71 >= (unsigned int)t70)) {
                    (((struct o4_uchar *)0xC8D678F)->v) = ((*(signed char *)0xC8D6793) | 0x2);
                    t75 = *(signed char *)0xC8D67BA;
                    (((struct o2B_uchar *)0xC8D678F)->v) = (t75 | 0x10);
                    (((struct o4_uint *)0xC8D6810)->v) = 0x3;
                    t233 = (t75 | 0x10);
                } else {
                    t233 = *(signed char *)0xC8DFFA9;
                    if (t233 != 0) {
                        (((struct o2C_uchar *)0xC8DFF64)->v) = 0xC;
                        (((struct o2D_uchar *)0xC8DFF64)->v) = 0xAF;
                        (((struct o31_uchar *)0xC8DFF64)->v) = 0x1;
                        (((struct o30_uchar *)0xC8DFF64)->v) = 0x1;
                    }
                    if ((*(signed char *)0xC8DFFAB) != 0) {
                        (((struct o2C_uchar *)0xC8DFF64)->v) = 0x6;
                        (((struct o2D_uchar *)0xC8DFF64)->v) = 0x7F;
                        (((struct o31_uchar *)0xC8DFF64)->v) = 0x1;
                        (((struct o30_uchar *)0xC8DFF64)->v) = 0x1;
                    }
                    if ((*(signed char *)0xC8DFFAE) == 0) {
                    } else {
                        (((struct o2C_uchar *)0xC8DFF64)->v) = 0x9;
                        (((struct o2D_uchar *)0xC8DFF64)->v) = 0x43;
                        (((struct o31_uchar *)0xC8DFF64)->v) = 0x1;
                        (((struct o30_uchar *)0xC8DFF64)->v) = 0x1;
                    }
                }
            }
        } else {
            if ((*(signed char *)0xC8DFF8C) != 0) {
                (((struct o29_uchar *)0xC8DFF64)->v) = 0x0;
                if ((unsigned int)((*(int *)0xC8D67BC) - ((((struct o1C_int *)0xC8DFF64)->v))) > (unsigned int)((((struct o18_int *)0xC8DFF64)->v))) {
                    if ((*(signed char *)0xC8DFFA1) == 0) {
                        (((struct o0_uchar *)0xC8DFD4E)->v) = 0x0;
                        *(unsigned char *)0xC8DFFA1 = 0x1;
                        (((struct o2B_uchar *)0xC8DFF64)->v) = 0x0;
                    } else {
                        (((struct o2B_uchar *)0xC8DFF64)->v) = ((*(signed char *)0xC8DFF8F) + 0x1);
                        (((struct o0_ushort *)0xC8D6810)->v) = (((((struct o0_short *)0xC8D6810)->v)) + 0x1);
                    }
                    t112 = *(signed char *)0xC8DFF8E;
                    if (((unsigned char)t112 != 0) && (t113 = *(signed char *)0xC8DFF8F, (int)(unsigned char)t113 >= (int)(unsigned char)t112)) {
                        FUN_0c2f4660(t112);
                        (((struct o0_uchar *)0xC8D678F)->v) = ((*(signed char *)0xC8D678F) | 0x80);
                        FUN_0c2fbc38();
                    } else {
                        (((struct o1C_uint *)0xC8DFF64)->v) = (*(int *)0xC8D67BC);
                        if ((*(signed char *)0xC8DFFA4) != 0) {
                            (((struct o2C_uchar *)0xC8DFF64)->v) = 0x3;
                            (((struct o2D_uchar *)0xC8DFF64)->v) = 0x5;
                        } else {
                            (((struct o2C_uchar *)0xC8DFF64)->v) = 0x2;
                            (((struct o2D_uchar *)0xC8DFF64)->v) = 0x1;
                        }
                        (((struct o31_uchar *)0xC8DFF64)->v) = 0x1;
                        (((struct o30_uchar *)0xC8DFF64)->v) = 0x1;
                    }
                }
            } else {
                if ((*(signed char *)0xC8DFFAA) != 0) {
                    if ((*(signed char *)0xC8DFF8D) == 0) {
                        (((struct o29_uchar *)0xC8DFF64)->v) = 0x1;
                        (((struct o20_uint *)0xC8DFF64)->v) = (*(int *)0xC8D67BC);
                    } else {
                        if ((unsigned int)(t39 - ((((struct o20_int *)0xC8DFF64)->v))) > (unsigned int)(*(int *)(((int)stk + 0)))) {
                            (((struct o29_uchar *)0xC8DFF64)->v) = 0x0;
                            (((struct o0_uchar *)0xC8DFD4E)->v) = 0x0;
                            (((struct o2B_uchar *)0xC8DFF64)->v) = 0x0;
                            *(unsigned char *)0xC8DFFA1 = 0x1;
                            (((struct o1C_uint *)0xC8DFF64)->v) = (*(int *)0xC8D67BC);
                            (((struct o28_uchar *)0xC8DFF64)->v) = 0x1;
                            if ((*(signed char *)0xC8DFFA4) == 0) {
                                (((struct o2C_uchar *)0xC8DFF64)->v) = 0x2;
                                (((struct o2D_uchar *)0xC8DFF64)->v) = 0x1;
                            } else {
                                (((struct o2C_uchar *)0xC8DFF64)->v) = 0x3;
                                (((struct o2D_uchar *)0xC8DFF64)->v) = 0x5;
                            }
                            (((struct o31_uchar *)0xC8DFF64)->v) = 0x1;
                            (((struct o30_uchar *)0xC8DFF64)->v) = 0x1;
                        }
                    }
                }
            }
            t181 = *(signed char *)0xC8D67BA;
            if (((unsigned char)t181 & 32) != 0) {
                (((struct o2C_uchar *)0xC8DFF64)->v) = 0x9;
                (((struct o2D_uchar *)0xC8DFF64)->v) = 0x43;
                (((struct o31_uchar *)0xC8DFF64)->v) = 0x1;
                (((struct o30_uchar *)0xC8DFF64)->v) = 0x1;
                *(unsigned char *)0xC8DFFA1 = 0x0;
                (((struct o1C_uint *)0xC8DFF64)->v) = (*(int *)0xC8D67BC);
            }
            t233 = (unsigned char)t181;
        }
    } else {
        t233 = 0xC8DFF71;
        if ((unsigned int)(t39 - ((((struct o1C_int *)0xC8DFF64)->v))) <= (unsigned int)(*(int *)(((int)stk + 0)))) {
        } else {
            (((struct o1C_uint *)0xC8DFF64)->v) = t39;
            if ((*(signed char *)0xC8DFFA1) == 0) {
                *(unsigned char *)0xC8DFFA1 = 0x1;
                (((struct o2B_uchar *)0xC8DFF64)->v) = 0x0;
            } else {
                (((struct o2B_uchar *)0xC8DFF64)->v) = ((*(signed char *)0xC8DFF8F) + 0x1);
                (((struct o0_ushort *)0xC8D6810)->v) = (((((struct o0_short *)0xC8D6810)->v)) + 0x1);
            }
            if (((*(signed char *)0xC8DFF8E) != 0) && (t206 = *(signed char *)0xC8DFF8E, t207 = *(signed char *)0xC8DFF8F, (unsigned int)t207 >= (unsigned int)t206)) {
                (((struct o4_uchar *)0xC8D678F)->v) = ((*(signed char *)0xC8D6793) | 0x2);
                t211 = *(signed char *)0xC8D67BA;
                (((struct o2B_uchar *)0xC8D678F)->v) = (t211 | 0x10);
                (((struct o4_uint *)0xC8D6810)->v) = 0x3;
                t233 = (t211 | 0x10);
            } else {
                t233 = *(signed char *)0xC8DFFA9;
                if (t233 != 0) {
                    (((struct o2C_uchar *)0xC8DFF64)->v) = 0xC;
                    (((struct o2D_uchar *)0xC8DFF64)->v) = 0xAF;
                    (((struct o31_uchar *)0xC8DFF64)->v) = 0x1;
                    (((struct o30_uchar *)0xC8DFF64)->v) = 0x1;
                }
                if ((*(signed char *)0xC8DFFAB) != 0) {
                    (((struct o2C_uchar *)0xC8DFF64)->v) = 0x6;
                    (((struct o2D_uchar *)0xC8DFF64)->v) = 0x7F;
                    (((struct o31_uchar *)0xC8DFF64)->v) = 0x1;
                    (((struct o30_uchar *)0xC8DFF64)->v) = 0x1;
                }
                if ((*(signed char *)0xC8DFFAE) == 0) {
                } else {
                    (((struct o2C_uchar *)0xC8DFF64)->v) = 0x9;
                    (((struct o2D_uchar *)0xC8DFF64)->v) = 0x43;
                    (((struct o31_uchar *)0xC8DFF64)->v) = 0x1;
                    (((struct o30_uchar *)0xC8DFF64)->v) = 0x1;
                }
            }
        }
    }
    return t233;
}

int ADXT_Create(int a4, int a5, int a6)
{
    int stk[10];

    register int R1;
    register int R3;
    register int R8;
    register int R9;
    register float F2;
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
    register int v0_7;
    register float w0_0;
    v0_5 = a4;
    v0_2 = a5;
    v0_4 = a6;
    *(unsigned int *)(((int)stk + 4)) = (v0_4 - (((v0_2 + 0x1F) & 0xFFFFFFE0) - v0_2));
    v0_3 = (0x8C);
    v0_6 = (((v0_2 + 0x1F) & 0xFFFFFFE0));
    v0_0 = (v0_5);
    v0_1 = (0x0);
    v0_5 = (0x0);
    v0_2 = (0xC30373C);
    v0_4 = (0x8);
    L_C2B434A:;
    if (((*(signed char *)((((v0_5 * v0_3) + v0_2) + 0x0))) == 0)) goto L_C2B435C;
    v0_7 = (int)(v0_5 + 0x1) < (int)v0_4;
    v0_5 = ((v0_5 + 0x1));
    if (v0_7) goto L_C2B434A;
    L_C2B435C:;
    if ((v0_5 == 8)) goto L_C2B442E;
    memset(((v0_5 * v0_3) + v0_2), 0x0, v0_3);
    *(unsigned char *)((((v0_5 * v0_3) + v0_2) + 0x3)) = v0_0;
    *(unsigned int *)((((v0_5 * v0_3) + v0_2) + 0x20)) = (((((((v0_0 << 8) + v0_0) << 2) << 2) << 1) << 1) + v0_6);
    *(unsigned int *)((((v0_5 * v0_3) + v0_2) + 0x24)) = (((((unsigned int)((unsigned int)((unsigned int)(((*(int *)(((int)stk + 4))) - ((((((v0_0 << 8) + v0_0) << 2) << 2) << 1) << 1)) - 36) >> 8) >> 2) >> 1) << 8) << 2) << 1);
    *(unsigned int *)((((v0_5 * v0_3) + v0_2) + 0x28)) = 0x24;
    *(unsigned int *)((((v0_5 * v0_3) + v0_2) + 0x2C)) = v0_6;
    *(unsigned int *)((((v0_5 * v0_3) + v0_2) + 0x30)) = 0x2000;
    *(unsigned int *)((((v0_5 * v0_3) + v0_2) + 0x34)) = 0x2020;
    v0_6 = SJRBF_Create((*(int *)((((v0_5 * v0_3) + v0_2) + 0x20))), (*(int *)((((v0_5 * v0_3) + v0_2) + 0x24))), (*(int *)((((v0_5 * v0_3) + v0_2) + 0x28))));
    *(unsigned int *)((((v0_5 * v0_3) + v0_2) + 0x10)) = v0_6;
    *(unsigned int *)((((v0_5 * v0_3) + v0_2) + 0x14)) = v0_6;
    v0_5 = ((v0_5 * v0_3) + v0_2);
    v0_3 = (0xC2C6360);
    v0_3 = v0_5;
    if ((v0_6 == 0)) goto L_C2B442A;
    v0_6 = (v0_1);
    if (((int)v0_0 <= 0)) goto L_C2B4408;
    L_C2B43C8:;
    *(unsigned int *)(((int)stk + 4)) = (v0_6 << 2);
    *(int *)((int)stk + 0) = ((v0_6 << 2) + (v0_3 + 0x18));
    v0_5 = *(int *)((v0_3 + 0x34));
    v0_7 = *(int *)((v0_3 + 0x30));
    *(unsigned int *)((((v0_6 << 2) + (v0_3 + 0x18)) + 0x0)) = (SJRBF_Create((((v0_5 * v0_6) << 1) + (*(int *)((v0_3 + 0x2C)))), (v0_7 << 1), ((v0_5 - v0_7) << 1)));
    if (((*(int *)((((v0_3 + 0x18) + (*(int *)(((int)stk + 4)))) + 0x0))) == 0)) goto L_C2B442A;
    v0_5 = (int)(v0_6 + 0x1) < (int)v0_0;
    v0_6 = ((v0_6 + 0x1));
    if (v0_5) goto L_C2B43C8;
    L_C2B4408:;
    v0_5 = ADXSJD_Create((*(int *)((v0_3 + 0x14))), v0_0, (v0_3 + 0x18));
    *(unsigned int *)((v0_3 + 0x4)) = v0_5;
    if ((v0_5 == 0)) goto L_C2B442A;
    v0_5 = thunk_FUN_0c2c4cb8((v0_3 + 0x18), v0_0, v0_4);
    *(unsigned int *)((v0_3 + 0xC)) = v0_5;
    if (!((v0_5 != 0))) goto L_C2B442A;
    *(unsigned int *)((v0_3 + 0x38)) = 0x3C;
    v0_2 = *(int *)((v0_3 + 0x24));
    v0_4 = (v0_2);
    if (((int)v0_2 >= 0)) goto L_C2B445A;
    v0_4 = ((v0_4 + 0x7FF));
    goto L_C2B445A;
    L_C2B442A:;
    ADXT_Destroy(v0_3);
    L_C2B442E:;
    v0_0 = (0x0);
    L_C2B44C2:;
    return v0_0;
    L_C2B445A:;
    (((struct o3C_ushort *)(v0_3))->v) = ((int)v0_4 >> 11);
    v0_4 = (((struct o3C_short *)(v0_3))->v);
    w0_0 = *(float *)0xC2B4530;
    (((struct o3E_ushort *)(v0_3))->v) = (int)((float)v0_4 * w0_0);
    (((struct o40_ushort *)(v0_3))->v) = v0_1;
    v0_5 = ((v0_3 + 0x42));
    v0_2 = (v0_1);
    FPUL_ = ((int)((float)v0_4 * w0_0));
    if (((int)v0_0 <= 0)) goto L_C2B4490;
    v0_4 = (0xFFFFFF80);
    L_C2B4486:;
    *(unsigned short *)((v0_5 + 0x0)) = v0_4;
    v0_6 = (int)(v0_2 + 0x1) < (int)v0_0;
    v0_5 = ((v0_5 + 0x2));
    v0_2 = ((v0_2 + 0x1));
    if (v0_6) goto L_C2B4486;
    L_C2B4490:;
    (((struct o6C_uchar *)(v0_3))->v) = 0x1;
    (((struct o54_uint *)(v0_3))->v) = v0_1;
    (((struct o58_uint *)(v0_3))->v) = v0_1;
    (((struct o5C_uint *)(v0_3))->v) = v0_1;
    (((struct o60_ushort *)(v0_3))->v) = v0_1;
    (((struct o64_uint *)(v0_3))->v) = v0_1;
    (((struct o68_ushort *)(v0_3))->v) = v0_1;
    (((struct o6A_ushort *)(v0_3))->v) = v0_1;
    (((struct o6D_uchar *)(v0_3))->v) = 0x1;
    (((struct o72_uchar *)(v0_3))->v) = v0_1;
    (((struct o88_uint *)(v0_3))->v) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = 0x1;
    v0_0 = (v0_3);
    goto L_C2B44C2;
}

int vmsfs_xdefrag(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R2;
    register int R3;
    register int R6;
    register int R9;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_6 = a4;
    v0_3 = a5;
    *(unsigned int *)(((int)stk + 0)) = (v0_6 * 0x148);
    v0_1 = (v0_3);
    v0_2 = (((v0_6 * 0x148) + 0xC8C4604));
    v0_0 = (v0_6);
    if (((*(signed char *)((((v0_6 * 0x148) + 0xC8C4604) + 0x2))) == 0)) goto L_C2C0A5E;
    v0_4 = (vmsio_isready(v0_0)) != 0;
    if (v0_4) goto L_C2C0A48;
    vmsfs_unmount(v0_0);
    L_C2C0A5E:;
    v0_0 = (0xFFFFFF01);
    L_C2C0B62:;
    return v0_0;
    L_C2C0A48:;
    v0_4 = (vmsio_ismount(v0_0)) == 0;
    if (v0_4) goto L_C2C0A5E;
    if (((*(signed char *)((((*(int *)(((int)stk + 0))) + 0xC8C4604) + 0x8))) != 0)) goto L_C2C0A64;
    goto L_C2C0A5E;
    L_C2C0A64:;
    v0_4 = (int)(thunk_FUN_0c2c067e(v0_0, v0_3, R6)) >= 0;
    if (v0_4) goto L_C2C0A74;
    v0_0 = (0xFFFFFF03);
    goto L_C2C0B62;
    L_C2C0A74:;
    if (((*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x38))) == 0)) goto L_C2C0A92;
    v0_4 = vmsfs_xfind(v0_0, (((int)stk + 0) + 0x4));
    v0_6 = (v0_4);
    if ((v0_4 == 0)) goto L_C2C0A92;
    v0_4 = (int)(check_fat_all(v0_0, v0_3, R6)) >= 0;
    if (v0_4) goto L_C2C0A98;
    L_C2C0A92:;
    v0_0 = (0xFFFFFF0B);
    goto L_C2C0B62;
    L_C2C0A98:;
    v0_3 = search_fat_used(v0_0, v0_3, R6);
    v0_4 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C2C0B38;
    v0_3 = search_fat_free(v0_0, (v0_4 + 0x1), R6);
    v0_5 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C2C0B38;
    v0_3 = vmsfs_read_retry(v0_0, v0_4, v0_1);
    v0_6 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C2C0B60;
    v0_3 = vmsfs_write_retry(v0_0, v0_5, v0_1);
    v0_6 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C2C0B60;
    v0_6 = search_fat(v0_0, v0_4, R6);
    v0_3 = (v0_6);
    if (((int)v0_6 <= 0)) goto L_C2C0AE6;
    set_fat(v0_0, v0_3);
    L_C2C0AFA:;
    v0_6 = get_fat(v0_0, v0_4, R6);
    set_fat(v0_0, v0_5);
    set_fat(v0_0, v0_4);
    goto L_C2C0A98;
    L_C2C0AE6:;
    v0_6 = search_dir_by_startfat(v0_0, v0_4, R6);
    v0_6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))(v0_6, 0x2, v0_5, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    goto L_C2C0AFA;
    L_C2C0B60:;
    v0_0 = (v0_6);
    goto L_C2C0B62;
    L_C2C0B38:;
    v0_6 = ((v0_2 + 0x48));
    v0_3 = (0x100);
    R6 = (0x1);
    L_C2C0B46:;
    if (((unsigned int)v0_6 < (unsigned int)((v0_2 + 0x48) + v0_3))) goto L_C2C0B42;
    v0_1 = write_dir(v0_0, v0_3, R6);
    v0_6 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C2C0B60;
    v0_6 = ((write_fat(v0_0, v0_3, R6)));
    goto L_C2C0B60;
    L_C2C0B42:;
    *(unsigned char *)((v0_6 + 0x0)) = R6;
    v0_6 = ((v0_6 + 0x1));
    goto L_C2C0B46;
}


int FUN_0c0116a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC30EF6A;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        return (unsigned char)t0;
                    }
                    t0 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(FUN_0c01d294))(0xC30EF6A, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
                    if (t0 != 0) {
                        if (t0 == 1) {
                            (((struct o0_uchar *)0xC30EF68)->v) = 0x0;
                            (((struct o2_uchar *)0xC30EF68)->v) = 0x0;
                            return 0x0;
                        }
                        if (t0 == -3) {
                            FUN_0c01d26e(t0);
                            return FUN_0c010448();
                        }
                        return t0;
                    }
                    return t0;
                }
                t0 = (((struct o4_short *)0xC30EF68)->v);
                (((struct o4_ushort *)0xC30EF68)->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o2_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF6A) + 0x1);
                    t1 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(FUN_0c01d294))(0xC30EF6A, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
                    if (t1 != 0) {
                        if (t1 == 1) {
                            (((struct o0_uchar *)0xC30EF68)->v) = 0x0;
                            (((struct o2_uchar *)0xC30EF68)->v) = 0x0;
                            return 0x0;
                        }
                        if (t1 == -3) {
                            FUN_0c01d26e(t1);
                            return FUN_0c010448();
                        }
                        return t1;
                    }
                    return t1;
                }
                return (short)(t0 - 1);
            }
            FUN_0c01e9e4();
            FUN_0c01cb7c();
            FUN_0c0573c0(0xFF000000, 0x0, 0x14);
            (((struct o4_ushort *)0xC30EF68)->v) = 0x8C;
            FUN_0c018e74(0x22);
            (((struct o2_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF6A) + 0x1);
            FUN_0c01d094();
            FUN_0c01d27a();
            t0 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o2_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF6A) + 0x1);
                t1 = ((int (*)(void))(FUN_0c01d294))();
                if (t1 != 0) {
                    if (t1 == 1) {
                        (((struct o0_uchar *)0xC30EF68)->v) = 0x0;
                        (((struct o2_uchar *)0xC30EF68)->v) = 0x0;
                        return 0x0;
                    }
                    if (t1 == -3) {
                        FUN_0c01d26e(t1);
                        return FUN_0c010448();
                    }
                    return t1;
                }
                return t1;
            }
            return (short)(t0 - 1);
        }
    } else {
        (((struct o2_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF6A) + 0x1);
        FUN_0c01e9e4();
        memset(0xC30EF7C, 0x0, 0x20);
        FUN_0c01d262();
    }
    t0 = FUN_0c013b9c(0xC30EF7C);
    if ((short)t0 != 1) {
        t1 = (short)t0;
        if ((short)t0 != 2) {
        } else {
            (((struct o0_uchar *)0xC30EF68)->v) = 0x0;
            (((struct o2_uchar *)0xC30EF68)->v) = 0x0;
            t1 = 0x0;
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)0xC30EF6A;
        (((struct o2_uchar *)0xC30EF68)->v) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int adxt_stat_prep(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t1;
    register int t7;
    register int t10;
    register int t65;
    register int t85;
    register int t66;
    register int t67;
    register int t81;
    register int t69;
    register int t70;
    register int t71;
    register int t74;
    register int t80;

    *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x4)));
    t1 = *(int *)((a4 + 0xC));
    *(unsigned int *)(((int)stk + 4)) = (thunk_FUN_0c2c59fc(t1));
    *(unsigned int *)(((int)stk + 8)) = (FUN_0c2c3148());
    if ((int)(*(int *)(((int)stk + 4))) < (int)((((struct o48_int *)(a4))->v))) {
        t7 = FUN_0c2c38c2((*(int *)(((int)stk + 0))));
        if ((int)(*(int *)(((int)stk + 8))) > (int)t7) {
            t10 = FUN_0c2c3394((*(int *)((a4 + 0x4))));
            if (t10 == 3) {
                if ((*(signed char *)((a4 + 0x70))) == 0) {
                    if ((*(signed char *)((a4 + 0x72))) == 0) {
                        thunk_FUN_0c2c52e0(t1, 0x1);
                    }
                    *(unsigned char *)((a4 + 0x1)) = 0x3;
                }
                (((struct o71_uchar *)(a4))->v) = 0x1;
            }
        } else {
            if ((*(signed char *)((a4 + 0x70))) == 0) {
                if ((*(signed char *)((a4 + 0x72))) == 0) {
                    thunk_FUN_0c2c52e0(t1, 0x1);
                }
                *(unsigned char *)((a4 + 0x1)) = 0x3;
            }
            (((struct o71_uchar *)(a4))->v) = 0x1;
        }
    } else {
        if ((*(signed char *)((a4 + 0x70))) == 0) {
            if ((*(signed char *)((a4 + 0x72))) == 0) {
                thunk_FUN_0c2c52e0(t1, 0x1);
            }
            *(unsigned char *)((a4 + 0x1)) = 0x3;
        }
        (((struct o71_uchar *)(a4))->v) = 0x1;
    }
    t65 = FUN_0c2c3394((*(int *)((a4 + 0x4))));
    t85 = t65;
    if (t65 == 3) {
        t66 = FUN_0c2b488a(a4);
        t67 = (((struct o48_int *)(a4))->v);
        t81 = 0x48;
        if ((int)t66 > 0) {
            t69 = (a4 + 0x18);
            t70 = 0x0;
            for (;;) {
                t71 = *(int *)((t69 + 0x0));
                t69 = (t69 + 0x4);
                t74 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t71 + 0x0))) + 0x18)))))(t71, 0x0, ((t67 * t66) << 1), (((int)stk + 0) + 0xC), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                memset((*(int *)(((int)stk + 12))), 0x0, (*(int *)(((int)stk + 16))));
                t80 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t71 + 0x0))) + 0x20)))))(t71, 0x1, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                t70 = (t70 + 0x1);
                if ((int)t70 >= (int)t66) {
                    break;
                }
            }
            t81 = t80;
        }
        t85 = t81;
    }
    return t85;
}

int FUN_0c028494(void)
{
    int stk[36];
    register int t0;
    register int t5;
    register int t16;
    register int t14;

    t0 = FUN_0c022050();
    t16 = t0;
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t16 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    t5 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t5 - 1);
    if ((int)(short)(t5 - 1) < 0) {
        if ((*(int *)0xC30A3F8) != 0) {
            *(unsigned int *)0xC30A3F8 = 0x0;
        }
        FUN_0c05b05c(0x1E, 0x0);
        *(unsigned char *)0xC30EFA5 = 0x0;
        (((struct o0_uchar *)0xC309858)->v) = 0x4;
        (((struct o3_uchar *)0xC309858)->v) = 0x0;
        (((struct o2_uchar *)0xC309858)->v) = 0x0;
        (((struct o1_uchar *)0xC309858)->v) = 0x0;
        (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x7F;
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x3;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x1;
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
        (((struct o6_ushort *)0xC309BCA)->v) = 0x0;
        (((struct o4_ushort *)0xC309BCA)->v) = 0x0;
        (((struct o2_ushort *)0xC309BCA)->v) = 0x0;
        (((struct o0_ushort *)0xC309BCA)->v) = 0x0;
        *(unsigned int *)0xC30A50C = 0x0;
        t14 = 0xC30A510;
        for (;;) {
            *(unsigned char *)((t14 + 0x0)) = 0x0;
            t14 = (t14 + 0x1);
            if ((unsigned int)t14 >= (unsigned int)0xC30A51A) {
                break;
            }
        }
        t16 = (FUN_0c01e992(t14, 0xC30A51A, 0xC30A510));
    }
    return t16;
}

int FUN_0c2c4054(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c2c38aa((*(int *)((a4 + 0x4))));
    if (t0 == 1) {
        t0 = *(int *)((a4 + 0xC));
        t1 = 0x0;
        if (((((struct o42_short *)(a4))->v)) == -128) {
        } else {
            t1 = ((((struct o42_short *)(a4))->v));
        }
        t2 = (thunk_FUN_0c2c5bd0(t0, 0x0, t1));
    } else {
        t0 = 0xFFFFFFF1;
        if (((((struct o42_short *)(a4))->v)) == -128) {
        } else {
            t0 = ((((struct o42_short *)(a4))->v));
        }
        thunk_FUN_0c2c5bd0((*(int *)((a4 + 0xC))), 0x0, t0);
        t0 = 0xF;
        if (((((struct o44_short *)(a4))->v)) == -128) {
        } else {
            t0 = ((((struct o44_short *)(a4))->v));
        }
        t2 = (thunk_FUN_0c2c5bd0((*(int *)((a4 + 0xC))), 0x1, t0));
    }
    return t2;
}
