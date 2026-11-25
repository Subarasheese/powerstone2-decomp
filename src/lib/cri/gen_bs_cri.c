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


