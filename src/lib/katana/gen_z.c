/* Straight-line functions with calls and guards (batch gen_z): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_short { char p[0x28]; short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2B_uchar { char p[0x2B]; unsigned char v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o38_short { char p[0x38]; short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3F_uchar { char p[0x3F]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o70_float { char p[0x70]; float v; };
struct o70_uchar { char p[0x70]; unsigned char v; };
struct o74_float { char p[0x74]; float v; };
struct o74_uchar { char p[0x74]; unsigned char v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o814_uint { char p[0x814]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oC18_int { char p[0xC18]; int v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int FUN_0c102556(int, int);
int FUN_0c1826a0(int, int, int, int);
int FUN_0c184ddc(void);
int FUN_0c184f9a(int, int, int, int);
int FUN_0c184fd0(int, int);
int FUN_0c18778c(int, int, int, int);
int FUN_0c18c9fc(int, ...);
int FUN_0c19c8e4(int, int);
int FUN_0c19c906(int, int);
int FUN_0c19d250(int, int);
int FUN_0c19ef06(int, int, int, int);
int FUN_0c1a027c(int);
int FUN_0c1a02cc(int, int, int);
int FUN_0c1a2184(int, int);
int FUN_0c1a21f4(void);
int FUN_0c2af1e0(void);
int FUN_0c2af91c(int, int, int, int);
int FUN_0c2b176e(int, int);
int FUN_0c2ba2d8(void);
int FUN_0c2bd8b4(int, int, int);
int FUN_0c2c1016(int);
int FUN_0c2c14a8(void);
int FUN_0c2d53e8(void);
int FUN_0c2d540e(void);
int FUN_0c2d5434(void);
int FUN_0c2d54ce(void);
int FUN_0c2d550a(int);
int FUN_0c2d578e(void);
int FUN_0c2d65ae(int);
int FUN_0c2d6658(void);
int FUN_0c2d71b2(int, int, int, int, int, int, int, int);
int FUN_0c2d8590(int, int);
int FUN_0c2d85e4(int, int);
int FUN_0c2d868a(int, int);
int FUN_0c2dc160(int);
int FUN_0c2dc178(int);
int FUN_0c2dc1ae(int, ...);
int FUN_0c2e7f3c(void);
int FUN_0c2ebc72(int, int);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2eeb84(int, int);
int FUN_0c2eedc6(void);
int FUN_0c2eeef8(void);
int FUN_0c2ef3c8(void);
int FUN_0c2ef504(void);
int FUN_0c2ef634(int, int, int, int, int, int);
int FUN_0c2ef6e2(void);
int FUN_0c2ef822(void);
int FUN_0c2ef8b4(void);
int FUN_0c2ef936(int);
int FUN_0c2ef958(void);
int FUN_0c2efa6e(void);
int FUN_0c2f84a8(int);
int FUN_0c2fe21e(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int check_fat_xross(int, int);
int check_file_correct(int, int);
int close_file_handle(int);
int gdFsCreateDirhn(int, int);
int get_fat(int, int, int);
int get_vmstime(int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int kmytex_FBFreeEntry(int);
int memset(int, int, int);
int mwRnaSetBitPerSmpl(int, int);
int mwRnaSetNumChan(int, int, int, int, int, int, int);
int mwRnaSetSfreq(int, int);
int mwlRnaAlloc(void);
int mwlRnaSetInitMember(int);
int nlCalcPoint44(int, int);
int nlLineCalcColor(int, int);
int nlLineClipNear(int, int);
int nlLineSendHeader(int);
int nlMultiMatrix8(int);
int nlMultiPushedMatrix(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int open_file_handle(void);
int search_dir(int, int, int);
int search_fat(int, int);
int search_fat_free_xross(int);
int set_fat(int, int);
int thunk_FUN_0c2c067e(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat(int, int, int, int);
int write_dir(int a4, int a5, int a6, int a7);
int FUN_0c19dc10(int a4, int a5, int a6, int a7, int a8);
int FUN_0c181e30(int a4, int a5);
int FUN_0c185080(int a4, int a5, int a6);
int FBfree(int a4, int a5);
int FUN_0c2af4f0(int a4, int a5, int a6, int a7, int a8);
int FUN_0c2d7df8(int a4, int a5);
int FUN_0c19f462(int a4, int a5, int a6);
int vmsfs_fwrite1(int a4, int a5);
int FUN_0c2e3dca(int a4);
int FUN_0c2f7f50(void);
int vmsfs_getinfo(int a4, int a5);
int FUN_0c181778(int a4, int a5, int a6, int a7);
int vmsfs_diskfree(int a4, int a5);
int FUN_0c2fe108(int a4, int a5);
int kmSetBackGroundRenderState(int a4);
int FUN_0c2d4768(int a4, int a5);
int vmsfs_fopen(int a4, int a5, int a6);
int FUN_0c2ef3e4(void);
int FUN_0c2b1830(int a4, int a5);
int mwRnaCreate_8c1f1d9c(int a4, int a5, int a6, int a7);
int FUN_0c2fb572(int a4);
int FUN_0c19225c(int a4, int a5, int a6);

int write_dir(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register int t2;
    register int t4;
    register int t7;
    register int t12;
    register int t13;
    register int t18;
    register int t26;
    register int t30;
    register int t3;
    register int t5;
    register int t6;

    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C));
    t2 = *(int *)((t0 + 0x14));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((t0 + 0x18)));
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t4 = 0x0;
    t7 = (unsigned short)t2;
    for (;;) {
        if ((int)t4 >= (int)(*(int *)(((int)stk + 4)))) {
            if ((*(int *)(((int)stk + 8))) != 0) {
                t12 = write_fat(a4, t0, a6, a7);
                if ((int)t12 >= 0) {
                    t13 = FUN_0c2c1016(a4);
                    if ((int)t13 < 0) {
                        return t13;
                    }
                    return 0x0;
                }
                return t12;
            }
            return 0x0;
        }
        if ((*(signed char *)((((((a4 * 0x148) + 0xC8C4604) + 0x48) + t4) + 0x0))) != 0) {
            *(unsigned int *)(((int)stk + 0)) = ((t4 << 8) << 1);
            for (;;) {
                t18 = FUN_0c2bd8b4(a4, t7, ((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x28))) + (*(int *)(((int)stk + 0)))));
                if (t18 == 0) {
                    break;
                }
                if (t18 != 0xFFFFFF01) {
                    *(unsigned int *)(((int)stk + 8)) = 0x1;
                    t5 = (unsigned short)(((int (*)(int, int))(get_fat))(a4, t7));
                    set_fat(a4, t7);
                    t6 = (FUN_0c102556(a4, 0xFFFC));
                    if ((int)t6 < 0) {
                        return 0xFFFFFF04;
                    }
                    set_fat(a4, t6);
                    if (t4 == 0) {
                        t26 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x4A, t6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                    } else {
                        set_fat(a4, t3);
                    }
                    t3 = t7;
                    t7 = t6;
                    continue;
                }
                return t18;
            }
            t30 = ((int (*)(int, int))(get_fat))(a4, t7);
            t3 = t7;
            *(unsigned char *)((((((a4 * 0x148) + 0xC8C4604) + 0x48) + t4) + 0x0)) = 0x0;
            t5 = (unsigned short)t30;
            t7 = t5;
            t4 = (t4 + 0x1);
            continue;
        }
        t3 = t7;
        t5 = (unsigned short)(((int (*)(int, int, int, int))(get_fat))(a4, t7, a6, a7));
        t7 = t5;
        t4 = (t4 + 0x1);
    }
}

int FUN_0c19dc10(int a4, int a5, int a6, int a7, int a8)
{
    int stk[1];

    register int R1;
    register int R2;
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
    v0_5 = a4;
    v0_0 = a5;
    v0_2 = a6;
    v0_1 = a7;
    *(unsigned char *)(((int)stk + 0)) = v0_2;
    v0_4 = (v0_0);
    v0_0 = (v0_1);
    v0_1 = (((unsigned char)v0_1 - 2));
    v0_2 = (v0_5);
    if (((*(int *)((v0_5 + 0x0))) != 0)) goto L_C19DC42;
    v0_3 = FUN_0c1a027c(0x1);
    *(unsigned int *)((v0_2 + 0x0)) = v0_3;
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C19DD26;
    L_C19DC42:;
    v0_2 = *(int *)((v0_2 + 0x0));
    v0_7 = *(short *)((v0_2 + 0x4));
    v0_8 = *(int *)((v0_2 + 0x0));
    *(unsigned char *)(((v0_8 + (unsigned short)v0_7) + 0x0)) = (*(signed char *)(((int)stk + 0)));
    *(unsigned char *)((((v0_8 + (unsigned short)v0_7) + 0x1) + 0x0)) = v0_0;
    v0_6 = *(signed char *)(((int)stk + 0));
    v0_5 = ((unsigned char)v0_6);
    v0_3 = (v0_2);
    v0_2 = ((((v0_8 + (unsigned short)v0_7) + 0x1) + 0x1));
    v0_7 = (((v0_8 + (unsigned short)v0_7) + 0x1));
    if (((unsigned char)v0_6 == 1)) goto L_C19DC80;
    if ((v0_5 == 2)) goto L_C19DC90;
    if ((v0_5 == 3)) goto L_C19DC9C;
    if ((v0_5 == 5)) goto L_C19DCE6;
    if ((v0_5 == 7)) goto L_C19DCF2;
    if ((v0_5 == 8)) goto L_C19DCF2;
    if ((v0_5 == 4)) goto L_C19DCF2;
    if ((v0_5 == 6)) goto L_C19DCF2;
    L_C19DCF2:;
    v0_4 = (0xC1A02CC);
    L_C19DD16:;
    v0_4 = (int)(short)v0_1 > 0;
    v0_1 = ((v0_1 - 1));
    if (v0_4) goto L_C19DCF8;
    v0_1 = *(short *)((v0_3 + 0x4));
    *(unsigned short *)((v0_3 + 0x4)) = (v0_1 + (unsigned char)v0_0);
    v0_5 = ((v0_1 + (unsigned char)v0_0));
    L_C19DD26:;
    return v0_5;
    L_C19DCF8:;
    v0_4 = (short)(FUN_0c1a02cc(a8, 0xC8B5F58, 0x1)) == 1;
    v0_5 = v0_2;
    v0_2 = ((v0_2 + 0x1));
    v0_5 = v0_5;
    if (v0_4) goto L_C19DD0E;
    v0_4 = (0xFFFFFFFF);
    L_C19DD14:;
    *(unsigned char *)((v0_5 + 0x0)) = v0_4;
    goto L_C19DD16;
    L_C19DD0E:;
    v0_4 = ((unsigned char)(*(signed char *)0xC8B5F58));
    goto L_C19DD14;
    L_C19DCE6:;
    v0_5 = ((FUN_0c19c8e4(v0_2, (*(int *)((v0_4 + 0xC))))));
    L_C19DCEE:;
    v0_1 = ((v0_1 - 4));
    v0_2 = (v0_5);
    goto L_C19DCF2;
    L_C19DC9C:;
    v0_6 = (unsigned short)(*(short *)((v0_4 + 0x8))) != 0xC223;
    v0_1 = ((v0_1 - 2));
    v0_2 = ((FUN_0c19c906(v0_2, (*(short *)((v0_4 + 0x8))))));
    v0_5 = (0x0);
    if (v0_6) goto L_C19DCCC;
    *(unsigned char *)((v0_7 + 0x0)) = 0x5;
    *(unsigned char *)((v0_2 + 0x0)) = (*(signed char *)((v0_4 + 0x14)));
    v0_2 = ((v0_2 + 0x1));
    if (((unsigned char)v0_0 != 4)) goto L_C19DCCA;
    v0_0 = ((v0_0 + 0x1));
    L_C19DCCA:;
    v0_1 = (v0_5);
    L_C19DCCC:;
    if (((unsigned short)(*(short *)((v0_4 + 0x8))) != 0xC023)) goto L_C19DCF2;
    *(unsigned char *)((v0_7 + 0x0)) = 0x4;
    if (((unsigned char)v0_0 != 5)) goto L_C19DCE2;
    v0_0 = ((v0_0 - 1));
    L_C19DCE2:;
    v0_1 = (v0_5);
    goto L_C19DCF2;
    L_C19DC90:;
    v0_5 = ((FUN_0c19c8e4(v0_2, (*(int *)((v0_4 + 0x4))))));
    goto L_C19DCEE;
    L_C19DC80:;
    v0_1 = ((v0_1 - 2));
    v0_2 = ((FUN_0c19c906(v0_2, (*(short *)((v0_4 + 0x2))))));
    goto L_C19DCF2;
}

int FUN_0c181e30(int a4, int a5)
{
    int stk[9];
    register int t10;
    register int t12;
    register int t16;
    register int t17;
    register int t20;
    register float u25;
    register float u26;
    register float u29;
    register float u30;
    register float u33;
    register float u34;
    register float u35;
    register float u38;
    register float u40;
    register float u42;
    register int t47;
    register int t48;
    register int t11;
    register int t13;
    register int t14;

    t16 = nlLineSendHeader(a5);
    nlPushMatrix(0xC2A6250);
    nlMultiMatrix8(((((struct oC_int *)0xC868794)->v)));
    if ((0x2 & a5) != 0) {
        nlMultiMatrix8(((((struct o0_int *)0xC868794)->v)));
    }
    t10 = (nlMultiPushedMatrix());
    t12 = t11;
    t17 = a4;
    for (;;) {
        if ((*(int *)((t17 + 0x0))) == 0) {
            break;
        }
        t13 = (*(int *)((t17 + 0x0)));
        t17 = (t17 + 0x4);
        t12 = 0x0;
        t20 = *(int *)((t17 + 0x0));
        t17 = (t17 + 0x4);
        *(unsigned int *)(((int)stk + 0)) = t20;
        t14 = t12;
        for (;;) {
            if ((unsigned int)t14 >= (unsigned int)t13) {
                break;
            }
            t12 = t17;
            t10 = (nlCalcPoint44(t12, (((int)stk + 0) + 0x14)));
            t12 = t17;
            t12 = (t12 + 0xC);
            t10 = (nlCalcPoint44(t12, (((int)stk + 0) + 0x4)));
            t12 = ((int)stk + 0);
            t12 = (t12 + 0x14);
            t10 = (nlLineClipNear(t12, (((int)stk + 0) + 0x4)));
            if (t10 != 0) {
                t12 = ((int)stk + 0);
                t12 = (t12 + 0x14);
                t10 = (nlLineCalcColor(t12, (((int)stk + 0) + 0x4)));
                if (t10 != 0) {
                    t10 = 0x1C;
                    u25 = *(float *)((((int)stk + 0) + t10));
                    t10 = 0x14;
                    t12 = 0xC86CE60;
                    u26 = *(float *)((((int)stk + 0) + t10));
                    t10 = 0x14;
                    u29 = (*(float *)((t12 + 0x0)));
                    u29 = u29 + ((1.0f / u25)) * u26;
                    *(float *)((((int)stk + 0) + t10)) = u29;
                    t10 = 0x18;
                    u30 = *(float *)((((int)stk + 0) + t10));
                    t10 = 0x18;
                    u33 = (*(float *)0xC86CE64);
                    u33 = u33 + ((1.0f / u25)) * u30;
                    *(float *)((((int)stk + 0) + t10)) = u33;
                    t10 = 0xC;
                    u34 = *(float *)((((int)stk + 0) + t10));
                    t10 = 0x4;
                    u35 = *(float *)((((int)stk + 0) + t10));
                    t10 = 0x4;
                    u38 = (*(float *)((t12 + 0x0)));
                    u38 = u38 + ((1.0f / u34)) * u35;
                    *(float *)((((int)stk + 0) + t10)) = u38;
                    t10 = 0x8;
                    u40 = *(float *)((((int)stk + 0) + t10));
                    t10 = 0x8;
                    u42 = (*(float *)0xC86CE64);
                    u42 = u42 + ((1.0f / u34)) * u40;
                    *(float *)((((int)stk + 0) + t10)) = u42;
                    t12 = t16;
                    t10 = (FUN_0c1826a0(t12, (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x4), ((int)stk + 0)));
                    t16 = t10;
                }
            }
            t14 = (t14 + 0x1);
            t17 = (t17 + 0xC);
        }
        t17 = (t17 + 0xC);
    }
    nlPopMatrix(0x1);
    t47 = *(int *)0xC83CFDC;
    t48 = t47;
    if ((a5 & 0x1) != 0) {
        t48 = (t47 + 0x8);
    }
    *(unsigned int *)((t48 + 0x0)) = (((*(int *)((t48 + 0x0))) & 0xFC000000) | (t16 & 0x3FFFFFF));
    return 0x1;
}


int FBfree(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t12;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t47;
    register int t17;
    register int t18;
    register int t34;
    register int t36;
    register int t37;
    int t9;
    int t38;

    *(unsigned short *)(((int)stk + 4)) = a4;
    t0 = *(short *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 0)) = (0xC304140 + ((t0 << 2) << 2));
    kmytex_FBDeQueueEntry((*(int *)(((int)stk + 0))), ((0xC304140 + ((t0 << 2) << 2)) + 0x4), a5);
    t4 = *(int *)(((0xC304140 + ((t0 << 2) << 2)) + 0x8));
    t12 = 0x0;
    if (t4 != 0) {
        t5 = 0x0;
        for (;;) {
            t7 = *(int *)((a5 + 0xC));
            t8 = *(int *)((t4 + 0xC));
            if ((t8 != ((*(int *)((a5 + 0x10))) + t7)) && (t9 = *(int *)((t4 + 0x10)), t7 != (t9 + t8))) {
                t4 = (*(int *)((t4 + 0x8)));
            } else {
                t5 = t4;
                t4 = 0x0;
            }
            if (t4 == 0) {
                break;
            }
        }
        t12 = t5;
    }
    t47 = a5;
    if (t12 != 0) {
        t17 = t12;
        t18 = a5;
        for (;;) {
            if ((*(int *)((t17 + 0xC))) == ((*(int *)((t18 + 0xC))) + (*(int *)((t18 + 0x10))))) {
                *(unsigned int *)((t17 + 0xC)) = (*(int *)((t18 + 0xC)));
                *(unsigned int *)((t17 + 0x10)) = ((*(int *)((t17 + 0x10))) + (*(int *)((t18 + 0x10))));
            } else {
                *(unsigned int *)((t17 + 0x10)) = ((*(int *)((t17 + 0x10))) + (*(int *)((t18 + 0x10))));
            }
            kmytex_FBFreeEntry(t18);
            kmytex_FBDeQueueEntry(((0xC304140 + ((t0 << 2) << 2)) + 0x8), ((0xC304140 + ((t0 << 2) << 2)) + 0xC), t17);
            t18 = t17;
            t34 = *(int *)(((0xC304140 + ((t0 << 2) << 2)) + 0x8));
            t17 = 0x0;
            if (t34 != 0) {
                for (;;) {
                    t36 = *(int *)((t18 + 0xC));
                    t37 = *(int *)((t34 + 0xC));
                    if ((t37 != ((*(int *)((t18 + 0x10))) + t36)) && (t38 = *(int *)((t34 + 0x10)), t36 != (t38 + t37))) {
                        t34 = (*(int *)((t34 + 0x8)));
                    } else {
                        t17 = t34;
                        t34 = 0x0;
                    }
                    if (t34 == 0) {
                        break;
                    }
                }
            }
            if (t17 == 0) {
                break;
            }
        }
        t47 = t18;
    }
    *(unsigned int *)(((int)stk + 0)) = (0xC304140 + ((t0 << 2) << 2));
    kmytex_FBEnQueueTop(((*(int *)(((int)stk + 0))) + 0x8), ((0xC304140 + ((t0 << 2) << 2)) + 0xC), t47);
    return 0x0;
}

int FUN_0c2af4f0(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)0xC3036E4;
    if ((t1 != 0) && (t0 = (((struct o38_short *)(t1))->v), t0 == 1)) {
        return 0x0;
    }
    if ((a5 & 31) != 0) {
        return 0xFFFFFFF2;
    }
    t0 = FUN_0c2ba2d8();
    t1 = ((int (*)(void))((*(int *)((t0 + 0x0)))))();
    t1 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xC3036E4 = a5;
    (((struct o38_ushort *)(a5))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC3036E4) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0xC3036E4) + 0x0)) = a4;
    *(unsigned int *)((((*(int *)0xC3036E4) + 0x10) + 0x0)) = (gdFsCreateDirhn(a7, a6));
    *(unsigned int *)(((*(int *)0xC3036E4) + 0xC)) = t0;
    *(unsigned int *)(((*(int *)0xC3036E4) + 0x1C)) = 0x0;
    (((struct o3A_ushort *)((*(int *)0xC3036E4)))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC3036E4) + 0x24)) = 0x0;
    *(unsigned int *)(((*(int *)0xC3036E4) + 0x34)) = 0x0;
    *(unsigned int *)(((*(int *)0xC3036E4) + 0x3C)) = a8;
    t0 = 0x3A;
    t2 = ((*(int *)0xC3036E4) + 0x1080);
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((*(int *)(((*(int *)0xC3036E4) + 0x0))) + 0x1)) {
            break;
        }
        t0 = 0x4C;
        *(unsigned short *)((t2 + t0)) = 0x0;
        t3 = (t3 + 0x1);
        *(unsigned int *)((t2 + 0x0)) = (*(int *)0xC3036E4);
        t2 = (t2 + 0x54);
    }
    t0 = *(int *)0xC3036E4;
    *(unsigned int *)((t0 + 0x14)) = (0x1080 + t0);
    t0 = *(int *)0xC3036E4;
    *(unsigned int *)((t0 + 0x18)) = ((0x1080 + t0) + 0x54);
    FUN_0c2af91c((*(int *)(((*(int *)0xC3036E4) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    return FUN_0c2af1e0();
}


int FUN_0c19f462(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t5;
    register int t8;
    register int t15;
    register int t16;
    register int t21;
    register int t23;
    register int t28;
    register int t36;
    register int t39;
    register int t42;
    register int t6;
    int t7;

    *(unsigned int *)(((int)stk + 8)) = a6;
    t5 = *(short *)((a5 + 0x2));
    t1 = *(int *)((a4 + 0x30));
    if ((*(signed char *)((a5 + 0x1))) == (*(signed char *)((a4 + 0x1)))) {
        for (;;) {
            if ((int)t5 > 0) {
                t8 = FUN_0c19d250(((int)stk + 4), (((int)stk + 4) + 0x4));
                if ((short)t8 == -1) {
                    return 0x0;
                }
                t5 = (t5 - (unsigned char)(*(signed char *)(((int)stk + 5))));
                if ((int)t5 >= 0) {
                    t15 = *(signed char *)(((int)stk + 4));
                    t6 = 0x8;
                    t16 = (((struct o28_short *)(t1))->v);
                    t7 = 0x1;
                    t21 = (unsigned char)t15;
                    if ((int)(unsigned char)t15 >= (int)t6) {
                        t21 = 0x0;
                        if (((int)(unsigned char)t15 >= (int)0x80) && ((int)(unsigned char)t15 < (int)0x90)) {
                            t21 = ((unsigned char)t15 - 120);
                        }
                    }
                    if ((t16 & ((int)t7 << (int)t21)) == 0) {
                        t23 = *(signed char *)(((int)stk + 4));
                        t28 = (unsigned char)t23;
                        if ((int)(unsigned char)t23 < (int)t6) {
                        } else {
                            t28 = 0x0;
                            if (((int)(unsigned char)t23 >= (int)0x80) && ((int)(unsigned char)t23 < (int)0x90)) {
                                t28 = ((unsigned char)t23 - 120);
                            }
                        }
                        (((struct o28_ushort *)(t1))->v) = (((((struct o28_short *)(t1))->v)) | ((int)t7 << (int)t28));
                    }
                    *(int *)((int)stk + 0) = ((0x0));
                    t36 = FUN_0c19ef06((((int)stk + 0) + 0x8), t1, t1, (((int)stk + 0) + 0x4));
                    if ((short)t36 == -1) {
                        break;
                    }
                    if ((short)t36 == 4) {
                        t39 = *(signed char *)(((int)stk + 4));
                        t42 = (unsigned char)t39;
                        if ((int)(unsigned char)t39 >= (int)t6) {
                            t42 = 0x0;
                            if (((int)(unsigned char)t39 >= (int)0x80) && ((int)(unsigned char)t39 < (int)0x90)) {
                                t42 = ((unsigned char)t39 - 120);
                            }
                        }
                        t7 = ((int)t7 << (int)t42);
                        t7 = (~t7);
                        (((struct o28_ushort *)(t1))->v) = (((((struct o28_short *)(t1))->v)) & t7);
                    }
                    continue;
                }
                break;
            }
            return 0x0;
        }
    }
    return 0xFFFFFFFF;
}


int FUN_0c2e3dca(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if (((unsigned char)(*(signed char *)0xC8D677E) & 0x8) != 0) {
        if (((unsigned char)(*(signed char *)0xC8D67BA) & 0x8) == 0) {
            (((struct o0_uchar *)0xC8D646D)->v) = 0x2;
        }
        if (((unsigned char)(*(signed char *)0xC8D677B) & 64) != 0) {
            *(unsigned char *)0xC8D6593 = 0x6;
            (((struct o2B_uchar *)0xC8D646D)->v) = 0x5;
            t1 = *(signed char *)0xC8D677D;
            t2 = (unsigned char)t1;
            if (((unsigned char)t1 & 4) != 0) {
                (((struct o4_uchar *)0xC8D6779)->v) = ((*(signed char *)0xC8D677D) & 0xFB);
                t1 = *(signed char *)0xC8D677D;
                (((struct o4_uchar *)0xC8D6779)->v) = (t1 & 0xFE);
                t2 = (t1 & 0xFE);
            }
            t1 = t2;
        } else {
            if ((((unsigned char)(*(signed char *)0xC8D6793) & 0x80) == 0) && (t0 = *(signed char *)0xC8D6795, ((unsigned char)t0 & 32) == 0)) {
                if (((unsigned char)(*(signed char *)0xC8D6455) & 0x80) != 0) {
                    FUN_0c2eeb84(0x190, 0x0);
                    (((struct o0_uchar *)0xC8D6779)->v) = ((*(signed char *)0xC8D6779) | 0x40);
                    t0 = (FUN_0c2ec410(0xC8D6490, 0x190));
                } else {
                    t2 = FUN_0c2d578e();
                    *(unsigned char *)0xC8D660C = 0x8;
                    t0 = t2;
                }
                t2 = t0;
            } else {
                (((struct o0_uchar *)0xC8D67D3)->v) = 0x1;
                (((struct o1E_uchar *)0xC8D67D3)->v) = 0xFF;
                t0 = FUN_0c2ebc72(0x80, 0xC8D6440);
                *(unsigned char *)0xC8D660C = 0x6;
                t2 = t0;
            }
            (((struct o2B_uchar *)0xC8D646D)->v) = 0x6;
            t1 = t2;
        }
        t0 = t1;
    } else {
        FUN_0c2e7f3c();
        t1 = *(signed char *)0xC8D677D;
        if (((unsigned char)t1 & 4) != 0) {
            (((struct o4_uchar *)0xC8D6779)->v) = ((*(signed char *)0xC8D677D) & 0xFB);
            t2 = *(signed char *)0xC8D677D;
            (((struct o4_uchar *)0xC8D6779)->v) = (t2 & 0xFE);
            (((struct o2B_uchar *)0xC8D646D)->v) = 0x1;
            t0 = (t2 & 0xFE);
        } else {
            (((struct o2B_uchar *)0xC8D646D)->v) = 0x0;
            t0 = (unsigned char)t1;
        }
    }
    return t0;
}

int FUN_0c2f7f50(void)
{
    register int t0;
    register int t1;

    for (;;) {
        if ((int)(unsigned short)((((struct oE_short *)0xC8DF920)->v)) <= 0) {
            t0 = 0x0;
            return t0;
        }
        if ((*(signed char *)0xC8E001D) != 0) {
            t1 = (((struct o0_int *)0xC8DF920)->v);
            (((struct o0_uint *)0xC8DF920)->v) = (t1 + 0x1);
            t0 = (FUN_0c2f84a8((*(signed char *)((((t1 + 0x1) - 1) + 0x0)))));
            t0 = (unsigned char)t0;
            *(unsigned short *)0xC8E0AF0 = t0;
        } else {
            t1 = (((struct o0_int *)0xC8DF920)->v);
            (((struct o0_uint *)0xC8DF920)->v) = (t1 + 0x1);
            *(unsigned short *)0xC8E0AF0 = (unsigned char)(*(signed char *)((((t1 + 0x1) - 1) + 0x0)));
        }
        t0 = 0xC8DF91C;
        if ((unsigned int)((((struct o0_int *)0xC8DF920)->v)) > (unsigned int)(*(int *)((t0 + 0x0)))) {
            (((struct o0_uint *)0xC8DF920)->v) = 0xC8DE91A;
        }
        (((struct oE_ushort *)0xC8DF920)->v) = (((((struct oE_short *)0xC8DF920)->v)) - 1);
        (((struct oC_ushort *)0xC8DF920)->v) = (((((struct oC_short *)0xC8DF920)->v)) - 1);
        *(unsigned short *)0xC8E0AEE = (((unsigned int)(unsigned short)(*(short *)0xC8E0AF0) << (int)(unsigned char)(*(signed char *)0xC8E0AD9)) | (*(short *)0xC8E0AEE));
        (((struct o0_uchar *)0xC8E0AD9)->v) = ((*(signed char *)0xC8E0AD9) + 0x8);
        if ((int)(unsigned char)(*(signed char *)0xC8E0AD9) >= (int)(unsigned short)(*(short *)0xC8E0ADE)) {
            break;
        }
    }
    *(unsigned short *)0xC8E099C = ((*(short *)0xC8E0AE2) & (*(short *)0xC8E0AEE));
    (((struct o0_uchar *)0xC8E0AD9)->v) = ((*(signed char *)0xC8E0AD9) - (*(short *)0xC8E0ADE));
    *(unsigned short *)0xC8E0AEE = ((unsigned int)(unsigned short)(*(short *)0xC8E0AF0) << (int)(-(0x8 - (unsigned char)(*(signed char *)0xC8E0AD9))));
    return 0x1;
}


int FUN_0c181778(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R3;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_1 = a4;
    v0_0 = a5;
    v0_5 = a6;
    v0_2 = a7;
    v0_6 = *(signed char *)((v0_1 + 0x9));
    v0_3 = ((v0_6 & 0x3));
    v0_4 = ((*(int *)((v0_1 + 0xC))));
    if (((v0_6 & 0x3) == 0)) goto L_C181796;
    if ((v0_3 == 1)) goto L_C18179A;
    if ((v0_3 == 2)) goto L_C18179E;
    L_C1817A0:;
    v0_6 = *(signed char *)((v0_1 + 0x8));
    v0_3 = (v0_6);
    if ((v0_6 == 0)) goto L_C1817B6;
    if ((v0_3 == 1)) goto L_C1817BA;
    if ((v0_3 == 2)) goto L_C1817BE;
    if ((v0_3 == 3)) goto L_C1817BE;
    L_C1817C0:;
    v0_3 = (v0_0);
    v0_6 = ((v0_1 + 0x33));
    v0_5 = ((((short)v0_5 << 2) + v0_1));
    if ((v0_0 == 0)) goto L_C1817FE;
    if ((v0_3 == 1)) goto L_C18180A;
    if ((v0_3 == 2)) goto L_C18180E;
    if ((v0_3 == 3)) goto L_C181826;
    if ((v0_3 == 4)) goto L_C18182A;
    if ((v0_3 == 5)) goto L_C18182E;
    if ((v0_3 == 6)) goto L_C181836;
    if ((v0_3 == 7)) goto L_C18183E;
    if ((v0_3 == 8)) goto L_C181846;
    if ((v0_3 == 9)) goto L_C181852;
    if ((v0_3 == 10)) goto L_C181878;
    v0_3 = (0xFFFFFFFF);
    L_C181886:;
    return v0_3;
    L_C181878:;
    v0_3 = ((v0_1 + 0x1E));
    L_C18187E:;
    v0_3 = ((unsigned char)(*(signed char *)((v0_3 + 0x0))));
    goto L_C181886;
    L_C181852:;
    if (((unsigned char)(*(signed char *)((v0_1 + 0x1F))) == 0)) goto L_C181860;
    v0_3 = (0x0);
    goto L_C181886;
    L_C181860:;
    v0_1 = *(short *)((v0_1 + 0x16));
    v0_0 = (((unsigned int)((unsigned int)((unsigned int)(unsigned short)v0_1 >> 2) >> 2) >> 2));
    if ((((unsigned int)((unsigned int)((unsigned int)(unsigned short)v0_1 >> 2) >> 2) >> 2) != 0)) goto L_C181874;
    v0_3 = (0x1);
    goto L_C181886;
    L_C181874:;
    v0_3 = (v0_0);
    goto L_C181886;
    L_C181846:;
    v0_3 = (((int)((unsigned char)(*(signed char *)((v0_6 + 0x0))) & 0xF0) >> 4));
    goto L_C181886;
    L_C18183E:;
    v0_3 = (((unsigned char)(*(signed char *)((v0_6 + 0x0))) & 0xF));
    goto L_C181886;
    L_C181836:;
    v0_3 = ((v0_5 + 0x32));
    goto L_C18187E;
    L_C18182E:;
    v0_3 = ((v0_5 + 0x31));
    goto L_C18187E;
    L_C18182A:;
    v0_3 = (R14);
    goto L_C181886;
    L_C181826:;
    v0_3 = (v0_4);
    goto L_C181886;
    L_C18180E:;
    v0_3 = (((int)((int)((int)((int)((v0_4 << 2) << 1) / (int)v0_2)) / (int)R14)));
    goto L_C181886;
    L_C18180A:;
    v0_3 = (v0_2);
    goto L_C181886;
    L_C1817FE:;
    v0_3 = ((unsigned short)((((struct o2A_short *)(v0_1))->v)));
    goto L_C181886;
    L_C1817BE:;
    v0_2 = (0x4);
    goto L_C1817C0;
    L_C1817BA:;
    v0_2 = (0x8);
    goto L_C1817C0;
    L_C1817B6:;
    v0_2 = (0x10);
    goto L_C1817C0;
    L_C18179E:;
    R14 = (0x4);
    goto L_C1817A0;
    L_C18179A:;
    R14 = (0x2);
    goto L_C1817A0;
    L_C181796:;
    R14 = (0x1);
    goto L_C1817A0;
}


int FUN_0c2fe108(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R10;
    int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_2 = a5;
    *(unsigned char *)(((int)stk + 4)) = v0_2;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    v0_2 = *(int *)0xC8D65AC;
    v0_3 = (v0_2);
    v0_1 = (0x0);
    R13 = (v0_0);
    if ((v0_2 == 64)) goto L_C2FE138;
    if ((v0_3 == 0x80)) goto L_C2FE144;
    if ((v0_3 == 0x200)) goto L_C2FE14A;
    L_C2FE20A:;
    v0_3 = (0x0);
    L_C2FE210:;
    return v0_3;
    L_C2FE14A:;
    v0_4 = (0x16);
    v0_3 = (0xC302DE0);
    L_C2FE14E:;
    v0_0 = (v0_1);
    v0_2 = ((unsigned char)v0_4);
    if (((int)(unsigned char)v0_4 <= 0)) goto L_C2FE1A8;
    v0_4 = (0xC8D65A9);
    L_C2FE158:;
    if (((unsigned char)(*(signed char *)((v0_4 + 0x0))) != (*(int *)((((((unsigned char)v0_0 << 2) << 1) + v0_3) + 0x0))))) goto L_C2FE1A0;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((((((unsigned char)v0_0 << 2) << 1) + v0_3) + 0x4)));
    L_C2FE1A8:;
    if ((v0_2 == (unsigned char)v0_0)) goto L_C2FE20A;
    if (!(((*(signed char *)(((int)stk + 4))) == 0))) goto L_C2FE1B4;
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 0))) << 1) & R13);
    goto L_C2FE1D0;
    L_C2FE1B4:;
    if (((*(int *)(((int)stk + 0))) == 0)) goto L_C2FE1D0;
    v0_0 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned int)v0_0 >> 1);
    if (((((unsigned int)v0_0 >> 1) & R13) == 0)) goto L_C2FE1B4;
    L_C2FE1D0:;
    if (((*(int *)(((int)stk + 0))) == 0)) goto L_C2FE20A;
    v0_0 = (v0_1);
    if (((int)v0_2 <= 0)) goto L_C2FE204;
    v0_4 = (0xC8D65AA);
    L_C2FE1DE:;
    if (((*(int *)(((int)stk + 0))) != (*(int *)((((((unsigned char)v0_0 << 2) << 1) + v0_3) + 0x4))))) goto L_C2FE1FC;
    *(unsigned char *)((v0_4 + 0x0)) = (*(int *)((((((unsigned char)v0_0 << 2) << 1) + v0_3) + 0x0)));
    L_C2FE204:;
    if ((v0_2 != (unsigned char)v0_0)) goto L_C2FE20E;
    goto L_C2FE20A;
    L_C2FE20E:;
    v0_3 = (0x1);
    goto L_C2FE210;
    L_C2FE1FC:;
    v0_1 = (int)(unsigned char)(v0_0 + 0x1) < (int)v0_2;
    v0_0 = ((v0_0 + 0x1));
    if (v0_1) goto L_C2FE1DE;
    goto L_C2FE204;
    L_C2FE1A0:;
    v0_5 = (int)(unsigned char)(v0_0 + 0x1) < (int)v0_2;
    v0_0 = ((v0_0 + 0x1));
    if (v0_5) goto L_C2FE158;
    goto L_C2FE1A8;
    L_C2FE144:;
    v0_4 = (0xE);
    v0_3 = (0xC302D70);
    goto L_C2FE14E;
    L_C2FE138:;
    v0_4 = (0x7);
    R13 = ((FUN_0c2fe21e(R13)));
    v0_3 = (0xC302D38);
    goto L_C2FE14E;
}

int kmSetBackGroundRenderState(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    (((struct o0_uint *)0xC8BFFD0)->v) = ((((struct o90_int *)(a4))->v));
    (((struct o4_uint *)0xC8BFFD0)->v) = ((((struct o94_int *)(a4))->v));
    (((struct o8_uint *)0xC8BFFD0)->v) = ((((struct o98_int *)(a4))->v));
    (((struct oC_uint *)0xC8BFFD0)->v) = ((((struct o9C_int *)(a4))->v));
    u0 = (((struct o70_float *)(a4))->v);
    u1 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u0 = (((struct o74_float *)(a4))->v);
    u2 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u2 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u0 = (((struct o78_float *)(a4))->v);
    u3 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u3 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u0 = (((struct o7C_float *)(a4))->v);
    u4 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u4 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    (((struct o10_uint *)0xC8BFFD0)->v) = (((((((int)u1 & 0xFF) << 16) << 8) | (((int)u2 & 0xFF) << 16)) | (((int)u3 & 0xFF) << 8)) | ((int)u4 & 0xFF));
    u0 = (((struct o80_float *)(a4))->v);
    u1 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u0 = (((struct o84_float *)(a4))->v);
    u2 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u2 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u0 = (((struct o88_float *)(a4))->v);
    u3 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u3 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u0 = (((struct o8C_float *)(a4))->v);
    u4 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u4 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    (((struct o14_uint *)0xC8BFFD0)->v) = (((((((int)u1 & 0xFF) << 16) << 8) | (((int)u2 & 0xFF) << 16)) | (((int)u3 & 0xFF) << 8)) | ((int)u4 & 0xFF));
    return 0x0;
}

int FUN_0c2d4768(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t3;
    register int t4;
    register int t15;
    register int t18;
    register int t22;
    register int t27;

    *(unsigned short *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = FUN_0c2d6658();
    if ((unsigned char)t0 == 0) {
        t3 = *(short *)(((int)stk + 0));
        t4 = *(int *)0xC8D25F0;
        if ((0x40 & ((unsigned int)(unsigned short)t3 >> 8)) != 0) {
            (((struct o74_uchar *)(t4))->v) = ((*(signed char *)(((t4 + 0x74) + 0x0))) | 0x40);
        } else {
            (((struct o74_uchar *)(t4))->v) = ((*(signed char *)(((t4 + 0x74) + 0x0))) & 0xBF);
        }
        *(volatile int *)0xC8D25F0;
        FUN_0c1a2184(((unsigned int)(unsigned short)t3 >> 8), t4);
        (((struct o70_uchar *)((*(int *)0xC8D25F0)))->v) = (*(signed char *)(((int)stk + 0)));
        t15 = *(int *)0xC8D25F0;
        (((struct o74_uchar *)(t15))->v) = ((*(signed char *)(((t15 + 0x74) + 0x0))) | 0x80);
        FUN_0c2ec410(0xC8D2698, 0x32);
        for (;;) {
            t18 = *(int *)0xC8D25F0;
            if (((*(signed char *)(((t18 + 0x74) + 0x0))) & 128) == 0) {
                (((struct o74_uchar *)(t18))->v) = ((*(signed char *)(((t18 + 0x74) + 0x0))) & 0xBF);
                t22 = *(int *)0xC8D25F0;
                if ((unsigned char)(*(signed char *)(((int)stk + 4))) == 1) {
                    return (unsigned char)(*(signed char *)((t22 + 0x60)));
                }
                return (((unsigned char)(*(signed char *)((t22 + 0x64))) << 8) | (unsigned char)(*(signed char *)(((0x60 + t22) + 0x0))));
            }
            t27 = FUN_0c2ec430((*(int *)0xC8D2698));
            if ((signed char)t27 != 0) {
                break;
            }
        }
        FUN_0c2d65ae(0x514);
    }
    return 0x0;
}


int FUN_0c2ef3e4(void)
{
    int stk[4];
    int t4;
    int t34;
    int t42;
    int t50;
    int t58;
    int t66;
    int t74;

    *(unsigned char *)0xC8D83D9 = (*(signed char *)0xC8D26F6);
    if ((unsigned char)(*(signed char *)0xC8D83D9) == 0xFF) {
        *(unsigned char *)0xC8D7091 = 0x0;
        FUN_0c2ef504();
        *(unsigned char *)0xC8D26F6 = 0x0;
        return 0x46;
    }
    *(unsigned char *)0xC8D26F6 = 0x0;
    if ((((unsigned char)(*(signed char *)0xC8D26F5) & 0x40) == 0) && (t4 = *(signed char *)0xC8D83D9, ((unsigned char)t4 & 0x40) != 0)) {
        if ((*(signed char *)0xC8D83DA) != (*(signed char *)0xC8D2722)) {
            FUN_0c2ef936((*(signed char *)0xC8D2722));
        }
        if ((*(signed char *)0xC8D83DC) != (*(signed char *)0xC8D2724)) {
            FUN_0c2efa6e();
        }
    }
    if ((((unsigned char)(*(signed char *)0xC8D26F5) & 0x1) == 0) && (t34 = *(signed char *)0xC8D83D9, ((unsigned char)t34 & 0x1) != 0)) {
        FUN_0c2ef6e2();
    }
    if ((((unsigned char)(*(signed char *)0xC8D26F5) & 0x2) == 0) && (t42 = *(signed char *)0xC8D83D9, ((unsigned char)t42 & 0x2) != 0)) {
        FUN_0c2ef822();
    }
    if ((((unsigned char)(*(signed char *)0xC8D26F5) & 0x8) == 0) && (t50 = *(signed char *)0xC8D83D9, ((unsigned char)t50 & 0x8) != 0)) {
        FUN_0c2d71b2(0x8, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
    }
    if ((((unsigned char)(*(signed char *)0xC8D26F5) & 0x10) == 0) && (t58 = *(signed char *)0xC8D83D9, ((unsigned char)t58 & 0x10) != 0)) {
        FUN_0c2ef634(0x10, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    }
    if ((((unsigned char)(*(signed char *)0xC8D26F5) & 0x20) == 0) && (t66 = *(signed char *)0xC8D83D9, ((unsigned char)t66 & 0x20) != 0)) {
        FUN_0c2ef8b4();
    }
    if ((((unsigned char)(*(signed char *)0xC8D26F5) & 0x80) == 0) && (t74 = *(signed char *)0xC8D83D9, ((unsigned char)t74 & 0x80) != 0)) {
        return FUN_0c2ef958();
    }
    return 0x45;
}


int mwRnaCreate_8c1f1d9c(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_5 = a4;
    v0_3 = a5;
    v0_0 = (v0_5);
    v0_1 = (0xC2DC1AE);
    v0_4 = (v0_3);
    if (((int)v0_3 < (int)0x1)) goto L_C2C4CD8;
    if (((int)v0_4 <= (int)0x2)) goto L_C2C4CE2;
    L_C2C4CD8:;
    *(int *)((int)stk + 0) = 0xC2FFE38;
    FUN_0c2dc1ae(0xC2FFE38);
    L_C2C4CFE:;
    v0_0 = (0x0);
    L_C2C4DB6:;
    return v0_0;
    L_C2C4CE2:;
    if ((v0_0 == 0)) goto L_C2C4CF6;
    v0_1 = (0x0);
    v0_5 = (v0_0);
    v0_3 = (0x0);
    if (((int)v0_4 <= 0)) goto L_C2C4D0A;
    L_C2C4CF0:;
    if (!(((*(int *)((v0_5 + 0x0))) != 0))) goto L_C2C4CF6;
    v0_2 = (int)(v0_3 + 0x1) < (int)v0_4;
    v0_5 = ((v0_5 + 0x4));
    v0_3 = ((v0_3 + 0x1));
    if (v0_2) goto L_C2C4CF0;
    goto L_C2C4D0A;
    L_C2C4CF6:;
    *(int *)((int)stk + 0) = 0xC2FFE68;
    FUN_0c2dc1ae(0xC2FFE68);
    v0_2 = (0xC2FFE68);
    goto L_C2C4CFE;
    L_C2C4D0A:;
    FUN_0c2dc160(((int)stk + 4));
    v0_3 = mwlRnaAlloc();
    v0_2 = (v0_3);
    if ((v0_3 != 0)) goto L_C2C4D44;
    *(int *)((int)stk + 0) = 0xC2FFE94;
    FUN_0c2dc1ae(0xC2FFE94);
    L_C2C4DAE:;
    FUN_0c2dc178(((int)stk + 4));
    v0_0 = (v0_2);
    goto L_C2C4DB6;
    L_C2C4D44:;
    *(unsigned char *)((v0_2 + 0x3)) = v0_4;
    *(unsigned char *)((v0_2 + 0x2)) = v0_4;
    v0_5 = (v0_1);
    v0_3 = (v0_1);
    if (((int)v0_4 <= 0)) goto L_C2C4D66;
    L_C2C4D52:;
    *(unsigned int *)((((v0_2 + 0x10) + v0_5) + 0x0)) = (*(int *)((v0_0 + v0_5)));
    v0_6 = (int)(v0_3 + 0x1) < (int)v0_4;
    v0_5 = ((v0_5 + 0x4));
    v0_3 = ((v0_3 + 0x1));
    if (v0_6) goto L_C2C4D52;
    L_C2C4D66:;
    v0_0 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC303DA0) + 0x14)))))(v0_4, v0_3, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    *(unsigned int *)((v0_2 + 0x38)) = v0_0;
    if ((v0_0 != 0)) goto L_C2C4D84;
    *(int *)((int)stk + 0) = 0xC2FFEC4;
    FUN_0c2dc1ae(0xC2FFEC4);
    v0_2 = (v0_1);
    goto L_C2C4DAE;
    L_C2C4D84:;
    mwlRnaSetInitMember(v0_2);
    mwRnaSetBitPerSmpl(v0_2, 0x10);
    mwRnaSetSfreq(v0_2, 0xAC44);
    mwRnaSetNumChan(v0_2, (unsigned char)(*(signed char *)((v0_2 + 0x3))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    v0_0 = *(int *)((v0_2 + 0x38));
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    *(unsigned int *)((v0_2 + 0x28)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x18)))))(v0_0, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
    *(unsigned char *)((v0_2 + 0x0)) = 0x1;
    goto L_C2C4DAE;
}

int FUN_0c2fb572(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t1 = a4;
    t2 = 0x0;
    t3 = 0x1F4;
    for (;;) {
        if ((signed char)t2 != 0) {
            return t0;
        }
        t4 = (unsigned short)t3 == 0;
        t3 = (t3 - 1);
        if (t4) {
            break;
        }
        t4 = 0xC8D7057;
        t0 = (*(signed char *)((t4 + 0x0)));
        t0 = (unsigned char)t0;
        t5 = 0xC8D7058;
        t6 = 0x1;
        if (t0 != 2) {
            if (t0 == 8) {
                t0 = (FUN_0c2ef3c8());
                t0 = (unsigned short)t0;
                if (t0 != 0) {
                    t6 = 0xC2EEDC6;
                    t0 = (FUN_0c2eedc6());
                    if ((*(short *)((t5 + 0x0))) != 0) {
                        t1 = 0x2;
                        *(unsigned char *)((t4 + 0x0)) = t1;
                    } else {
                        t0 = (FUN_0c2eeef8());
                    }
                } else {
                    t0 = (FUN_0c2d5434());
                    t0 = (signed char)t0;
                    if (t0 != 0) {
                        t4 = 0xC2D540E;
                        t0 = (FUN_0c2d540e());
                        t7 = 0xC2D540E;
                    } else {
                        t7 = t4;
                    }
                    t2 = t6;
                    t4 = t7;
                }
            } else {
                t2 = t6;
            }
        } else {
            t0 = (FUN_0c2d54ce());
            t0 = (signed char)t0;
            if (t0 != 0) {
                t6 = 0xC8D705C;
                t1 = (*(int *)((t6 + 0x0)));
                t1 = (t1 + 0x1);
                *(unsigned int *)((t6 + 0x0)) = t1;
                t1 = (t1 - 1);
                t1 = (*(signed char *)((t1 + 0x0)));
                t0 = (FUN_0c2d550a(t1));
                t7 = (*(short *)((t5 + 0x0)));
                t7 = (t7 - 1);
                *(unsigned short *)((t5 + 0x0)) = t7;
                if ((*(short *)((t5 + 0x0))) == 0) {
                    t0 = (FUN_0c2eeef8());
                    t1 = 0x8;
                    *(unsigned char *)((t4 + 0x0)) = t1;
                }
            } else {
                t0 = (FUN_0c2d5434());
                t0 = (signed char)t0;
                if (t0 == 0) {
                    t4 = 0xC2D53E8;
                    t0 = (FUN_0c2d53e8());
                    t5 = 0xC2D53E8;
                } else {
                    t5 = t4;
                }
                t2 = t6;
                t4 = t5;
            }
        }
    }
    return (FUN_0c2d65ae(0x1428));
}

int FUN_0c19225c(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t35;
    register int t1;
    register int t3;
    register int t5;
    register int t6;
    register int t10;
    register int t12;
    register int t17;
    register int t20;
    register int t33;
    register int t7;
    register int t8;
    register int t9;
    register int t29;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned short *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t0 = *(int *)0xC2A6430;
    t35 = t0;
    if ((t0 & 8) != 0) {
        t1 = *(short *)(((int)stk + 16));
        *(int *)((int)stk + 8) = (unsigned short)t1;
        t3 = (*(int *)(((int)stk + 12)));
        *(int *)((int)stk + 4) = t3;
        *(int *)((int)stk + 0) = 0xC20A670;
        t5 = (FUN_0c18c9fc(0xC20A670, t3, (unsigned short)t1));
        t6 = 0x0;
        for (;;) {
            t10 = (unsigned short)t1;
            if ((int)(unsigned short)t1 > (int)0x40) {
                t10 = 0x40;
            }
            if ((int)t6 >= (int)t10) {
                break;
            }
            t12 = t6;
            *(int *)((int)stk + 8) = t12;
            *(int *)((int)stk + 4) = 0xC20A680;
            t5 = (FUN_0c18c9fc(0xC20A680, t12));
            t8 = t6;
            *(unsigned int *)(((int)stk + 12)) = t8;
            t7 = 0x0;
            t9 = (*(int *)(((int)stk + 12)));
            t8 = (t8 + (*(int *)(((int)stk + 20))));
            for (;;) {
                if ((int)t9 > (int)(unsigned short)t1) {
                    *(int *)((int)stk + 8) = 0xC20A68C;
                    t5 = (FUN_0c18c9fc(0xC20A68C));
                } else {
                    t17 = *(signed char *)((t8 + 0x0));
                    *(int *)((int)stk + 8) = (unsigned char)t17;
                    *(int *)((int)stk + 4) = 0xC20A690;
                    t5 = (FUN_0c18c9fc(0xC20A690, (unsigned char)t17));
                }
                t7 = (t7 + 0x1);
                t8 = (t8 + 0x1);
                t9 = (t9 + 0x1);
                if ((int)t7 >= (int)0x10) {
                    break;
                }
            }
            t20 = t6;
            *(int *)((int)stk + 8) = t20;
            *(int *)((int)stk + 4) = 0xC20A698;
            t5 = (FUN_0c18c9fc(0xC20A698, t20));
            *(unsigned int *)(((int)stk + 16)) = 0x0;
            t8 = (*(int *)(((int)stk + 12)));
            t7 = (*(int *)(((int)stk + 12)));
            t8 = (t8 + (*(int *)(((int)stk + 20))));
            for (;;) {
                if ((int)t7 > (int)(unsigned short)t1) {
                    *(int *)((int)stk + 8) = 0xC20A69C;
                    t5 = (FUN_0c18c9fc(0xC20A69C));
                } else {
                    t9 = (*(signed char *)((t8 + 0x0)));
                    t9 = (unsigned char)t9;
                    if (((int)t9 > (int)0x20) && ((int)t9 < (int)0x7F)) {
                        t29 = t9;
                        *(int *)((int)stk + 8) = t29;
                    } else {
                        *(int *)((int)stk + 8) = 0x2E;
                        t29 = 0x2E;
                    }
                    *(int *)((int)stk + 4) = 0xC20A6A0;
                    t5 = (FUN_0c18c9fc(0xC20A6A0, t29));
                }
                t33 = *(int *)(((int)stk + 16));
                t8 = (t8 + 0x1);
                *(unsigned int *)(((int)stk + 16)) = (t33 + 0x1);
                t7 = (t7 + 0x1);
                if ((int)(t33 + 0x1) >= (int)0x10) {
                    break;
                }
            }
            *(int *)((int)stk + 8) = 0xC20A6A4;
            t5 = (FUN_0c18c9fc(0xC20A6A4));
            t6 = (t6 + 0x10);
        }
        t35 = t5;
    }
    return t35;
}
