/* Straight-line functions with calls and guards (batch gen_bp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o194_uchar { char p[0x194]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_short { char p[0x40]; short v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o72_uchar { char p[0x72]; unsigned char v; };
struct o74_int { char p[0x74]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int ADXAMP_SetSfreq(int, int);
int ADXRNA_SetStmHdInfo(int, int);
int ADXSJD_EntryTrapFunc(int, int, int);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_GetSpsdInfo(int);
int ADXSJD_SetMaxDecSmpl(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXSTM_EntryEosFunc(int, int, int);
int ADXSTM_SetEos(int, int);
int ADXT_GetStat(int);
int ADXT_Stop(int);
int FUN_0c01e988(int, int);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c2c30aa(int, int, int, int, int, int, int);
int FUN_0c2c31a4(void);
int FUN_0c2c3394(int);
int FUN_0c2c3892(int);
int FUN_0c2c389e(int);
int FUN_0c2c38aa(int);
int FUN_0c2c38b6(int);
int FUN_0c2c38c2(int);
int FUN_0c2c38da(int);
int FUN_0c2c38f2(int);
int FUN_0c2c3922(int);
int FUN_0c2c4054(int);
int FUN_0c2ee708(void);
int FUN_0c2f6bcc(void);
int FUN_0c2fbc38(int, int, int);
int FUN_0c2fbc3e(void);
int FUN_0c2fbc44(int, int, int);
int FUN_0c2fbc4a(int);
int direntry(int, int);
int get_vmstime(int, int);
int mwRnaAdjustBuf(int);
int mwlSbGetStreamParam(int, int, int);
int set_file_info(int, int, int, int);
int strcpy(int, int);
int thunk_FUN_0c2c067e(int, int, int, int);
int thunk_FUN_0c2c5202(int, int);
int thunk_FUN_0c2c52e0(int, int);
int thunk_FUN_0c2c5a3c(int, int);
int thunk_FUN_0c2c5ae2(int, int);
int thunk_FUN_0c2c5b3a(int, int);
int thunk_FUN_0c2c5b74(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c022c30(void);
int FUN_0c2f67cc(int a4, int a5, int a6, int a7);
int adxt_stat_decinfo(int a4);
int vmsfs_findnext_ex(int a4, int a5, int a6);
int vmsfs_findfirst_ex(int a4, int a5, int a6);
int FUN_0c2f58e0(void);
void FUN_0c2f5750(int a4, int a5, int a6);
int FUN_0c2b4a4a(int a4, int a5);
int FUN_0c2dc7fc(int a4);


int FUN_0c2f67cc(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t3;
    register int t65;
    register int t75;
    register int t166;
    register int t1;
    int t2;
    register int t4;
    register int t6;
    int t128;
    register int t139;
    int t140;
    int R1000;
    int R1004;
    int R1008;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    t3 = *(signed char *)0xC8DFF9E;
    if (t3 == 0) {
        for (;;) {
            if ((((((struct oC_short *)0xC8DFD3C)->v)) != 0) && (t2 = 0xF00, t6 = (((struct o8_short *)0xC8DF924)->v), t3 = t6, t3 = (unsigned short)t3, (int)t3 < (int)t2)) {
                t3 = 0xC8DFD4D;
                t1 = (*(signed char *)((t3 + 0x0)));
                if (t1 == 0) {
                    t4 = ((((struct o4_int *)0xC8DFD3C)->v));
                    t4 = (t4 + 0x1);
                    (((struct o4_uint *)0xC8DFD3C)->v) = t4;
                    t4 = (t4 - 1);
                    t3 = ((((struct o4_int *)0xC8DFD3C)->v));
                    t2 = (*(signed char *)0xC8DFF73);
                    t4 = (*(signed char *)((t4 + 0x0)));
                    R1004 = t3;
                    t2 = (unsigned char)t2;
                    t3 = (unsigned char)t4;
                    R1000 = ((((struct o0_int *)0xC8DFD3C)->v));
                    R1008 = 0xC8DF930;
                    if (t3 != t2) {
                        t1 = (unsigned char)t4;
                        if ((int)t1 < (int)t2) {
                            t4 = (t4 + 0x80);
                        }
                        t4 = (unsigned char)t4;
                        t4 = (t4 - t2);
                        t3 = (*(signed char *)0xC8DFFBF);
                        t3 = (unsigned char)t3;
                        if ((int)t4 < (int)t3) {
                            t2 = 0xC8DFD4D;
                            *(unsigned char *)((t2 + 0x0)) = 0x1;
                            t3 = ((((struct o4_int *)0xC8DFD3C)->v));
                            t3 = (t3 - 1);
                            (((struct o4_uint *)0xC8DFD3C)->v) = t3;
                        } else {
                            t1 = (R1004);
                            t2 = (R1000);
                            if ((unsigned int)t1 > (unsigned int)t2) {
                                t3 = (R1008);
                                (((struct o4_uint *)0xC8DFD3C)->v) = t3;
                            }
                            t4 = ((((struct o4_int *)0xC8DFD3C)->v));
                            t4 = (t4 + 0x1);
                            (((struct o4_uint *)0xC8DFD3C)->v) = t4;
                            t4 = (t4 - 1);
                            t3 = ((((struct o0_int *)0xC8DFD3C)->v));
                            t4 = (*(signed char *)((t4 + 0x0)));
                            t4 = (unsigned char)t4;
                            if ((unsigned int)((((struct o4_int *)0xC8DFD3C)->v)) > (unsigned int)t3) {
                                (((struct o4_uint *)0xC8DFD3C)->v) = 0xC8DF930;
                            }
                            t3 = ((((struct o4_int *)0xC8DFD3C)->v));
                            t3 = (t3 + 0x1);
                            (((struct o4_uint *)0xC8DFD3C)->v) = t3;
                            t3 = (t3 - 1);
                            (((struct oE_ushort *)0xC8DFD3C)->v) = (unsigned char)(*(signed char *)((t3 + 0x0)));
                            t3 = ((((struct o0_int *)0xC8DFD3C)->v));
                            t2 = ((((struct o4_int *)0xC8DFD3C)->v));
                            t4 = (t4 << 8);
                            if ((unsigned int)t2 > (unsigned int)t3) {
                                (((struct o4_uint *)0xC8DFD3C)->v) = 0xC8DF930;
                            }
                            t3 = ((((struct oE_short *)0xC8DFD3C)->v));
                            t3 = (t3 | t4);
                            (((struct oE_ushort *)0xC8DFD3C)->v) = t3;
                            t3 = ((((struct oC_short *)0xC8DFD3C)->v));
                            t3 = (t3 - (((((struct oE_short *)0xC8DFD3C)->v)) + 0x3));
                            (((struct oC_ushort *)0xC8DFD3C)->v) = t3;
                            t3 = ((((struct o4_int *)0xC8DFD3C)->v));
                            t3 = (t3 + (unsigned short)((((struct oE_short *)0xC8DFD3C)->v)));
                            t2 = t3;
                            (((struct o4_uint *)0xC8DFD3C)->v) = t3;
                            if ((unsigned int)t2 > (unsigned int)((((struct o0_int *)0xC8DFD3C)->v))) {
                                t1 = ((((struct o4_int *)0xC8DFD3C)->v));
                                t1 = (t1 - 1);
                                (((struct o4_uint *)0xC8DFD3C)->v) = t1;
                                t3 = ((((struct o0_int *)0xC8DFD3C)->v));
                                t1 = (t1 - t3);
                                t1 = (t1 + 0xC8DF930);
                                (((struct o4_uint *)0xC8DFD3C)->v) = t1;
                            }
                        }
                    } else {
                        t3 = (R1000);
                        if ((unsigned int)(R1004) > (unsigned int)t3) {
                            (((struct o4_uint *)0xC8DFD3C)->v) = (R1008);
                        }
                        t3 = ((((struct oC_short *)0xC8DFD3C)->v));
                        t3 = (t3 - 1);
                        (((struct oC_ushort *)0xC8DFD3C)->v) = t3;
                        t4 = ((((struct o4_int *)0xC8DFD3C)->v));
                        t4 = (t4 + 0x1);
                        (((struct o4_uint *)0xC8DFD3C)->v) = t4;
                        t4 = (t4 - 1);
                        t3 = ((((struct o0_int *)0xC8DFD3C)->v));
                        t4 = (*(signed char *)((t4 + 0x0)));
                        t4 = (unsigned char)t4;
                        if ((unsigned int)((((struct o4_int *)0xC8DFD3C)->v)) > (unsigned int)t3) {
                            (((struct o4_uint *)0xC8DFD3C)->v) = 0xC8DF930;
                        }
                        t3 = ((((struct oC_short *)0xC8DFD3C)->v));
                        t3 = (t3 - 1);
                        (((struct oC_ushort *)0xC8DFD3C)->v) = t3;
                        t65 = (((struct o4_int *)0xC8DFD3C)->v);
                        (((struct o4_uint *)0xC8DFD3C)->v) = (t65 + 0x1);
                        t3 = (*(signed char *)((((t65 + 0x1) - 1) + 0x0)));
                        t3 = (unsigned char)t3;
                        (((struct oE_ushort *)0xC8DFD3C)->v) = t3;
                        t2 = ((((struct o4_int *)0xC8DFD3C)->v));
                        t4 = (t4 << 8);
                        if ((unsigned int)t2 > (unsigned int)((((struct o0_int *)0xC8DFD3C)->v))) {
                            (((struct o4_uint *)0xC8DFD3C)->v) = 0xC8DF930;
                        }
                        (((struct oC_ushort *)0xC8DFD3C)->v) = (((((struct oC_short *)0xC8DFD3C)->v)) - 1);
                        t3 = ((((struct oE_short *)0xC8DFD3C)->v));
                        t3 = (t3 | t4);
                        (((struct oE_ushort *)0xC8DFD3C)->v) = t3;
                        t1 = (*(signed char *)0xC8DFF73);
                        t1 = (t1 + 0x1);
                        t1 = (t1 & 0x7F);
                        (((struct o0_uchar *)0xC8DFF73)->v) = t1;
                        t3 = ((((struct o0_int *)0xC8DF924)->v));
                        (((struct o24_uint *)0xC8DFD3C)->v) = t3;
                        t4 = 0x1;
                        for (;;) {
                            t3 = (unsigned short)t4;
                            if ((int)t3 > (int)(unsigned short)((((struct oE_short *)0xC8DFD3C)->v))) {
                                break;
                            }
                            t75 = (((struct o24_int *)0xC8DFD3C)->v);
                            (((struct o24_uint *)0xC8DFD3C)->v) = (t75 + 0x1);
                            t3 = ((((struct o4_int *)0xC8DFD3C)->v));
                            t3 = (t3 + 0x1);
                            (((struct o4_uint *)0xC8DFD3C)->v) = t3;
                            t3 = (t3 - 1);
                            t2 = (*(signed char *)((t3 + 0x0)));
                            *(unsigned char *)((((t75 + 0x1) - 0x1) + 0x0)) = t2;
                            t3 = ((((struct o0_int *)0xC8DFD3C)->v));
                            if ((unsigned int)((((struct o4_int *)0xC8DFD3C)->v)) > (unsigned int)t3) {
                                (((struct o4_uint *)0xC8DFD3C)->v) = 0xC8DF930;
                            }
                            t3 = ((((struct oC_short *)0xC8DFD3C)->v));
                            t3 = (t3 - 1);
                            (((struct oC_ushort *)0xC8DFD3C)->v) = t3;
                            (((struct o8_ushort *)0xC8DF924)->v) = (((((struct o8_short *)0xC8DF924)->v)) + 0x1);
                            t1 = 0xC8DF91C;
                            t2 = ((((struct o24_int *)0xC8DFD3C)->v));
                            t3 = (*(int *)((t1 + 0x0)));
                            t4 = (t4 + 0x1);
                            if ((unsigned int)t2 > (unsigned int)t3) {
                                (((struct o24_uint *)0xC8DFD3C)->v) = 0xC8DE91A;
                            }
                        }
                        t3 = 0xC8DF924;
                        *(unsigned int *)((t3 + 0x0)) = ((((struct o24_int *)0xC8DFD3C)->v));
                    }
                    continue;
                }
                break;
            }
            break;
        }
        if ((*(signed char *)0xC8DFD4D) == 0) {
            if ((*(signed char *)0xC8DFFA4) == 0) {
                if ((int)(unsigned short)((((struct o8_short *)0xC8DF924)->v)) < (int)0xF00) {
                    t166 = 0xC8DFF92;
                    if (((*(signed char *)0xC8DFF93) != 0) && (t128 = *(signed char *)0xC8DFF92, t128 != 0)) {
                    } else {
                        if ((((((struct o1C_short *)0xC8DFD3C)->v)) != (*(short *)0xC8DE914)) && ((t139 = *(signed char *)0xC8DFFA3, t139 == 0) && (t140 = *(signed char *)0xC8DFFDE, t140 != 0))) {
                        } else {
                            (((struct o1D_uchar *)0xC8DFF73)->v) = 0x2;
                            (((struct o1E_uchar *)0xC8DFF73)->v) = 0x1;
                            (((struct o22_uchar *)0xC8DFF73)->v) = 0x0;
                            (((struct o21_uchar *)0xC8DFF73)->v) = 0x0;
                        }
                        t166 = 0xC8DE914;
                    }
                } else {
                    (((struct o31_uchar *)0xC8DFF73)->v) = 0x1;
                    (((struct o1D_uchar *)0xC8DFF73)->v) = 0x3;
                    (((struct o1E_uchar *)0xC8DFF73)->v) = 0x5;
                    (((struct o22_uchar *)0xC8DFF73)->v) = 0x0;
                    (((struct o21_uchar *)0xC8DFF73)->v) = 0x0;
                    t166 = 0x3;
                }
            } else {
                t166 = t1;
            }
        } else {
            (((struct o31_uchar *)0xC8DFF73)->v) = 0x0;
            *(unsigned char *)0xC8D678F = ((*(signed char *)0xC8D678F) | 0x80);
            t166 = FUN_0c2fbc38(0xC8DFFA4, 0xC8DFD48, 0xC8DFD4A);
            (((struct o1D_uchar *)0xC8DFF73)->v) = 0x5;
            (((struct o1E_uchar *)0xC8DFF73)->v) = 0xD;
            (((struct o22_uchar *)0xC8DFF73)->v) = 0x1;
            (((struct o21_uchar *)0xC8DFF73)->v) = 0x0;
        }
    }
    return t166;
}


int vmsfs_findnext_ex(int a4, int a5, int a6)
{
    int stk[13];

    register int R2;
    register int R3;
    register int R7;
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
    v0_6 = a5;
    v0_7 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    *(unsigned int *)(((int)stk + 4)) = (v0_5 * 0x148);
    v0_1 = (v0_5);
    v0_2 = (((v0_5 * 0x148) + 0xC8C4604));
    v0_0 = (v0_7);
    if (((*(signed char *)((((v0_5 * 0x148) + 0xC8C4604) + 0x2))) == 0)) goto L_C2BFD42;
    v0_3 = (vmsio_isready(v0_1)) != 0;
    if (v0_3) goto L_C2BFD2C;
    vmsfs_unmount(v0_1);
    L_C2BFD42:;
    v0_1 = (0xFFFFFF01);
    L_C2BFE24:;
    return v0_1;
    L_C2BFD2C:;
    v0_3 = (vmsio_ismount(v0_1)) == 0;
    if (v0_3) goto L_C2BFD42;
    if (((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC8C4604) + 0x8))) != 0)) goto L_C2BFD48;
    goto L_C2BFD42;
    L_C2BFD48:;
    v0_3 = (int)(thunk_FUN_0c2c067e(v0_1, v0_6, v0_7, R7)) >= 0;
    if (v0_3) goto L_C2BFD58;
    v0_1 = (0xFFFFFF03);
    goto L_C2BFE24;
    L_C2BFD58:;
    v0_6 = *(int *)((v0_2 + 0x18));
    v0_5 = (direntry(v0_1, (*(int *)((v0_2 + 0x18)))));
    v0_3 = (0x0);
    v0_4 = (0x0);
    v0_1 = (0x1);
    v0_5 = v0_5;
    v0_6 = (v0_6);
    L_C2BFDB4:;
    if (!(((int)v0_6 < (int)(*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x30)))))) goto L_C2BFDBC;
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) + 0x1);
    v0_8 = *(signed char *)((v0_5 + 0x0));
    v0_7 = ((unsigned char)v0_8);
    R7 = (v0_8);
    if (((unsigned char)v0_8 == 51)) goto L_C2BFD82;
    if ((v0_7 != 0xCC)) goto L_C2BFDB0;
    goto L_C2BFD82;
    L_C2BFDBC:;
    if ((v0_4 != 0)) goto L_C2BFDC6;
    v0_1 = (0xFFFFFF05);
    goto L_C2BFE24;
    L_C2BFDC6:;
    v0_6 = *(int *)(((int)stk + 0));
    v0_4 = ((v0_6 + 0xC));
    v0_6 = (v0_6);
    v0_7 = ((v0_5 + 0x4));
    L_C2BFDD8:;
    if (((unsigned int)v0_6 < (unsigned int)v0_4)) goto L_C2BFDD2;
    *(unsigned char *)((v0_4 + 0x0)) = v0_3;
    set_file_info(v0_5, (((int)stk + 0) + 0x8), v0_7, R7);
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)(((int)stk + 48))) * ((*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x2C))) + 0x1));
    *(unsigned short *)((v0_0 + 0x4)) = (*(int *)(((int)stk + 48)));
    *(unsigned char *)((v0_0 + 0x6)) = (*(signed char *)(((int)stk + 12)));
    *(unsigned char *)((v0_0 + 0x7)) = (*(signed char *)(((int)stk + 18)));
    *(unsigned short *)((v0_0 + 0x8)) = (*(short *)(((int)stk + 16)));
    if (((*(int *)(((int)stk + 12))) != 0xCC)) goto L_C2BFE12;
    v0_1 = (v0_1);
    L_C2BFE14:;
    *(unsigned char *)((v0_0 + 0x6)) = v0_1;
    get_vmstime((v0_0 + 0xA), (((int)stk + 0) + 0x28));
    v0_1 = (0x0);
    goto L_C2BFE24;
    L_C2BFE12:;
    v0_1 = (v0_3);
    goto L_C2BFE14;
    L_C2BFDD2:;
    *(unsigned char *)((v0_6 + 0x0)) = (*(signed char *)((v0_7 + 0x0)));
    v0_6 = ((v0_6 + 0x1));
    v0_7 = ((v0_7 + 0x1));
    goto L_C2BFDD8;
    L_C2BFD82:;
    v0_4 = (v0_1);
    goto L_C2BFDBC;
    L_C2BFDB0:;
    v0_5 = ((v0_5 + 0x20));
    v0_6 = ((v0_6 + 0x1));
    goto L_C2BFDB4;
}

int vmsfs_findfirst_ex(int a4, int a5, int a6)
{
    int stk[13];

    register int R2;
    register int R3;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    int R1000;
    int R1004;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    v0_5 = a4;
    v0_3 = a5;
    v0_6 = a6;
    R1000 = v0_3;
    R1004 = (v0_5 * 0x148);
    v0_1 = (v0_5);
    v0_0 = (v0_6);
    v0_2 = (((v0_5 * 0x148) + 0xC8C4604));
    if (((*(signed char *)((((v0_5 * 0x148) + 0xC8C4604) + 0x2))) == 0)) goto L_C2BFC02;
    v0_4 = (vmsio_isready(v0_1)) != 0;
    if (v0_4) goto L_C2BFBEC;
    vmsfs_unmount(v0_1);
    L_C2BFC02:;
    v0_1 = (0xFFFFFF01);
    L_C2BFCE4:;
    return v0_1;
    L_C2BFBEC:;
    v0_4 = (vmsio_ismount(v0_1)) == 0;
    if (v0_4) goto L_C2BFC02;
    if (((*(signed char *)((((R1004) + 0xC8C4604) + 0x8))) != 0)) goto L_C2BFC08;
    goto L_C2BFC02;
    L_C2BFC08:;
    v0_3 = (int)(thunk_FUN_0c2c067e(v0_1, v0_3, v0_6, R7)) >= 0;
    if (v0_3) goto L_C2BFC18;
    v0_1 = (0xFFFFFF03);
    goto L_C2BFCE4;
    L_C2BFC18:;
    *(unsigned int *)((v0_2 + 0x18)) = 0x0;
    v0_3 = (direntry(v0_1, 0x0));
    v0_4 = (0x0);
    v0_1 = (0x1);
    v0_5 = v0_3;
    v0_3 = (0x0);
    R7 = (0x0);
    L_C2BFC4C:;
    if (!(((int)v0_3 < (int)(*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x30)))))) goto L_C2BFC54;
    v0_6 = *(signed char *)((v0_5 + 0x0));
    v0_7 = ((unsigned char)v0_6);
    if (((unsigned char)v0_6 == 51)) goto L_C2BFC3E;
    if ((v0_7 != 0xCC)) goto L_C2BFC42;
    goto L_C2BFC3E;
    L_C2BFC54:;
    if ((R7 != 0)) goto L_C2BFC5E;
    v0_1 = (0xFFFFFF05);
    goto L_C2BFCE4;
    L_C2BFC5E:;
    v0_3 = R1000;
    v0_7 = ((v0_3 + 0xC));
    v0_3 = (v0_3);
    v0_6 = ((v0_5 + 0x4));
    L_C2BFC92:;
    if (((unsigned int)v0_3 < (unsigned int)v0_7)) goto L_C2BFC8C;
    *(unsigned char *)((v0_7 + 0x0)) = v0_4;
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) + 0x1);
    set_file_info(v0_5, (((int)stk + 0) + 0x8), v0_6, R7);
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)(((int)stk + 48))) * ((*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x2C))) + 0x1));
    *(unsigned short *)((v0_0 + 0x4)) = (*(int *)(((int)stk + 48)));
    *(unsigned char *)((v0_0 + 0x6)) = (*(signed char *)(((int)stk + 12)));
    *(unsigned char *)((v0_0 + 0x7)) = (*(signed char *)(((int)stk + 18)));
    *(unsigned short *)((v0_0 + 0x8)) = (*(short *)(((int)stk + 16)));
    if (((*(int *)(((int)stk + 12))) != 0xCC)) goto L_C2BFCD2;
    v0_1 = (v0_1);
    L_C2BFCD4:;
    *(unsigned char *)((v0_0 + 0x6)) = v0_1;
    get_vmstime((v0_0 + 0xA), (((int)stk + 0) + 0x28));
    v0_1 = (0x0);
    goto L_C2BFCE4;
    L_C2BFCD2:;
    v0_1 = (v0_4);
    goto L_C2BFCD4;
    L_C2BFC8C:;
    *(unsigned char *)((v0_3 + 0x0)) = (*(signed char *)((v0_6 + 0x0)));
    v0_3 = ((v0_3 + 0x1));
    v0_6 = ((v0_6 + 0x1));
    goto L_C2BFC92;
    L_C2BFC3E:;
    R7 = (v0_1);
    goto L_C2BFC54;
    L_C2BFC42:;
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) + 0x1);
    v0_5 = ((v0_5 + 0x20));
    v0_3 = ((v0_3 + 0x1));
    goto L_C2BFC4C;
}

int FUN_0c2f58e0(void)
{
    int t0;
    int t2;
    register int t3;
    register int t4;

    FUN_0c2ee708();
    *(unsigned short *)0xC8D6812 = ((*(short *)0xC8D6812) + 0x1);
    if ((*(signed char *)0xC8DFFA3) == 0) {
        *(unsigned char *)0xC8D678F = ((*(signed char *)0xC8D678F) | 0x80);
        FUN_0c2fbc3e();
    }
    (((struct o32_uchar *)0xC8DFF71)->v) = 0x0;
    t3 = *(signed char *)0xC8DFF70;
    if ((*(signed char *)0xC8DFFA1) == 0) {
        (((struct o1_uchar *)0xC8DFF71)->v) = t3;
        (((struct o0_uchar *)0xC8DFF71)->v) = (*(signed char *)0xC8DFF70);
        (((struct o1B_uchar *)0xC8DFF71)->v) = 0x0;
        t4 = 0xC8DFF8C;
        if (((*(signed char *)0xC8DFF93) != 0) && (t0 = *(signed char *)0xC8DFF92, t0 != 0)) {
            FUN_0c2f6bcc();
            if ((*(signed char *)0xC8DFFA4) == 0) {
                (((struct o1F_uchar *)0xC8DFF71)->v) = 0x2;
                (((struct o20_uchar *)0xC8DFF71)->v) = 0x1;
            } else {
                (((struct o1F_uchar *)0xC8DFF71)->v) = 0x3;
                (((struct o20_uchar *)0xC8DFF71)->v) = 0x5;
            }
            (((struct o24_uchar *)0xC8DFF71)->v) = 0x0;
            (((struct o23_uchar *)0xC8DFF71)->v) = 0x1;
            t4 = 0xC8DFF91;
        }
        t0 = t4;
    } else {
        if (((*(signed char *)0xC8DFF93) == 0) && (t0 = *(signed char *)0xC8DFF92, t0 != 0)) {
            (((struct o1_uchar *)0xC8DFF71)->v) = t3;
            (((struct o0_uchar *)0xC8DFF71)->v) = (*(signed char *)0xC8DFF70);
            (((struct o30_uchar *)0xC8DFF71)->v) = 0x0;
            (((struct o1B_uchar *)0xC8DFF71)->v) = 0x0;
            t0 = 0xC8DFF93;
        } else {
            (((struct o0_uchar *)0xC8DFF71)->v) = t3;
            t3 = 0xC8DFF93;
            if (((*(signed char *)0xC8DFF93) != 0) && (t2 = *(signed char *)0xC8DFF92, t2 != 0)) {
                FUN_0c2f6bcc();
                if ((*(signed char *)0xC8DFFA4) == 0) {
                    (((struct o1F_uchar *)0xC8DFF71)->v) = 0x2;
                    (((struct o20_uchar *)0xC8DFF71)->v) = 0x1;
                } else {
                    (((struct o1F_uchar *)0xC8DFF71)->v) = 0x3;
                    (((struct o20_uchar *)0xC8DFF71)->v) = 0x5;
                }
                (((struct o24_uchar *)0xC8DFF71)->v) = 0x0;
                (((struct o23_uchar *)0xC8DFF71)->v) = 0x1;
                t3 = 0xC8DFF91;
            }
            t0 = t3;
        }
    }
    return t0;
}

void FUN_0c2f5750(int a4, int a5, int a6)
{
    int stk[1];
    register int t6;
    register int t7;
    register int t11;
    register int t12;
    register int t18;
    register int t19;

    if ((*(signed char *)0xC8DFFF3) != 0) {
        if ((*(signed char *)0xC8DFFAF) != 0) {
            *(unsigned char *)0xC8DFFAF = 0x0;
            *(unsigned char *)(((int)stk + 0)) = 0x1;
            (((struct oC_uint *)0xC8DFD50)->v) = ((((struct o0_int *)0xC8DFD50)->v));
            t6 = 0xC8DFD50;
            t7 = 0x1;
            for (;;) {
                t11 = (int)(unsigned short)t7 < (int)(unsigned short)((((struct o0_short *)0xC8DFF6C)->v));
                t7 = (t7 + 0x1);
                if (t11) {
                    t12 = *(signed char *)(((int)stk + 0));
                    *(unsigned char *)(((int)stk + 0)) = (t12 + 0x1);
                    t6 = ((((struct oC_int *)0xC8DFD50)->v));
                    t6 = (t6 + 0x1);
                    (((struct oC_uint *)0xC8DFD50)->v) = t6;
                    t6 = (t6 - 1);
                    if ((unsigned char)((t12 + 0x1) - 1) != (unsigned char)(*(signed char *)((t6 + 0x0)))) {
                        break;
                    }
                    continue;
                }
                break;
            }
            if ((unsigned short)((t7 - 1) + 0xFFFF) == (unsigned short)(*(short *)0xC8DFFF6)) {
                t18 = *(signed char *)(((int)stk + 0));
                *(unsigned char *)(((int)stk + 0)) = (t18 - 1);
                t19 = (((struct oC_int *)0xC8DFD50)->v);
                (((struct oC_uint *)0xC8DFD50)->v) = (t19 - 1);
                if ((unsigned char)(t18 - 1) == (unsigned char)(*(signed char *)(((t19 - 1) + 0x0)))) {
                    FUN_0c2fbc44((unsigned short)((t7 - 1) + 0xFFFF), 0xC8DFF6C, a6);
    return;
                }
                FUN_0c2fbc4a(0x3);
    return;
            }
            FUN_0c2fbc4a(0x3);
    return;
        }
        if ((unsigned char)(*(signed char *)0xC8DFF93) == 1) {
            (((struct o24_uchar *)0xC8DFF6C)->v) = 0xD;
            (((struct o25_uchar *)0xC8DFF6C)->v) = 0xE3;
        }
        return;
    }
}

int FUN_0c2b4a4a(int a4, int a5)
{
    int t0;

    t0 = ADXT_GetStat(a4);
    (((struct o72_uchar *)(a4))->v) = a5;
    if ((t0 != 3) && (t0 != 4)) {
        return t0;
    }
    if (a5 == 1) {
        thunk_FUN_0c2c52e0((*(int *)((a4 + 0xC))), 0x0);
        t0 = 0x7A120;
        for (;;) {
            t0 = (t0 - 0x1);
            if (t0 == 0) {
                break;
            }
        }
        return mwRnaAdjustBuf((*(int *)((a4 + 0xC))));
    }
    return thunk_FUN_0c2c52e0((*(int *)((a4 + 0xC))), 0x1);
}

int FUN_0c2dc7fc(int a4)
{
    register int t0;
    register int t15;

    t0 = mwlSbGetStreamParam(a4, 0x5, 0x0);
    t15 = 0xFFFFFC41;
    if ((int)t0 <= 0) {
    } else {
        t15 = 0x0;
        if ((int)t0 >= (int)0x7F) {
        } else {
            t15 = ((int)((int)(0x80 - ((((int)((unsigned int)((int)((unsigned int)(0x7F - t0) + (unsigned int)0x0)) + ((((int)0x0 > (int)(0x7F - t0))) ? 1u : 0u))) >> 1) * 0x3BF)) / (int)0xFF));
        }
    }
    *(unsigned int *)((a4 + 0x3C)) = t15;
    return t15;
}
