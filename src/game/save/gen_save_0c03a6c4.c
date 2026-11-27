/* game/save: functions 0C03A6C4-0C03C95A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA00_uchar { char p[0xA00]; unsigned char v; };
int vmu_defrag_disk(int);
int vmu_load_vmgame_data(int);
int FUN_0c05c538(void);
int FUN_0c0fb680(void);
int FUN_0c0fb6a6(void);
int FUN_0c187a88(int, int, int);
int memset(int, int, int);
int strcpy(int, int);
int syRtcGetDate(int);
int FUN_0c0f2ccc(int);
int FUN_0c0f2d38(int, int, int);
int pdVmsLcdIsReady(int);
int buInit(int, int, int, int);
int FUN_0c2b2456(void);
int buSetCompleteCallback(int);
int buUnmount(int);
int FUN_0c2b27ae(int, int);
int FUN_0c2b289c(int, int);
int buIsExistFile(int, int);
int buGetFileSize(int, int);
int buLoadFile(int, int, int, int);
int buSaveFile(int, int, int, int, int, int);
int buSaveExecFile(int, int, int, int, int, int);
int buRewriteExecFile(int, int, int, int, int);
int buMountDisk(int, int, int);
int buMakeBackupFileImage(int, int);
int buAnalyzeBackupFileImage(int, int);
int FUN_0c03a6c4(void);
int FUN_0c03a70a(void);
int vmu_lcd_refresh(int a4);
int FUN_0c03a7bc(int a4, int a5, int a6, int a7);
int FUN_0c03ac3a(void);
int FUN_0c03ac42(void);
int thunk_FUN_0c2b2456(void);
int FUN_0c03ad28(int a4, int a5);
int FUN_0c03add8(int a4, int a5, int a6, int a7);
int FUN_0c03ae7a(int a4, int a5, int a6, int a7);
int FUN_0c03aeec(int a4, int a5, int a6, int a7);
int FUN_0c03af6a(int a4, int a5, int a6, int a7);
int FUN_0c03afdc(int a4, int a5, int a6, int a7);
int FUN_0c03b05a(int a4, int a5, int a6, int a7);
int FUN_0c03b0cc(int a4, int a5, int a6, int a7);
int FUN_0c03b14a(int a4, int a5, int a6, int a7);
int FUN_0c03b1c8(void);
int FUN_0c03b25a(int a4, int a5, int a6, int a7);
int FUN_0c03b2e8(int a4, int a5, int a6, int a7);
int FUN_0c03b366(int a4, int a5, int a6, int a7);
int FUN_0c03b3fc(void);
int FUN_0c03b40a(void);
int FUN_0c03b424(void);
int FUN_0c03b580(void);
int vmu_write_save_file(int a4);
int FUN_0c03b6ac(int a4);
int FUN_0c03b800(void);
int FUN_0c03b964(void);
int FUN_0c03b99e(int a4);
int FUN_0c03bb4c(void);
int FUN_0c03bd76(void);
int FUN_0c03bf08(int a4);
int FUN_0c03c018(int a4);
int FUN_0c03c210(int a4);
int FUN_0c03c340(int a4);
int FUN_0c03c358(int a4);
void FUN_0c03c4ca(void);
int FUN_0c03c500(void);
int FUN_0c03c568(int a4);
void FUN_0c03c742(void);
int FUN_0c03c780(void);
int FUN_0c03c7ba(int a4);
struct o30_int { char p[0x30]; int v; };


int FUN_0c03a6c4(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0xC20F084;
    t1 = 0xC0;
    t2 = 0xC20F684;
    for (;;) {
        t3 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        t4 = 0x7;
        for (;;) {
            if ((((unsigned int)(unsigned char)t3 << (int)(-t4)) & 0x1) != 0) {
                *(unsigned char *)((t0 + 0x0)) = 0x8;
            } else {
                *(unsigned char *)((t0 + 0x0)) = 0x0;
            }
            t4 = (t4 - 1);
            t0 = (t0 + 0x1);
            if ((int)t4 <= (int)0xFFFFFFFF) {
                break;
            }
        }
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return 0xFFFFFFFF;
}

int FUN_0c03a70a(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0xC20F084;
    t1 = 0xC0;
    t2 = 0xC20F744;
    for (;;) {
        t3 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        t4 = 0x7;
        for (;;) {
            if ((((unsigned int)(unsigned char)t3 << (int)(-t4)) & 0x1) != 0) {
                *(unsigned char *)((t0 + 0x0)) = 0x8;
            } else {
                *(unsigned char *)((t0 + 0x0)) = 0x0;
            }
            t4 = (t4 - 1);
            t0 = (t0 + 0x1);
            if ((int)t4 <= (int)0xFFFFFFFF) {
                break;
            }
        }
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return 0xFFFFFFFF;
}

int vmu_lcd_refresh(int a4)
{
    register int t1;
    register int t3;
    register int t4;

    t1 = pdVmsLcdIsReady((*(int *)((0xC20F804 + (a4 << 2)))));
    if (t1 != 0) {
        t3 = FUN_0c0f2ccc((*(int *)((0xC20F804 + (a4 << 2)))));
        t4 = 0x0;
        if (t3 == 1) {
            t4 = 0x3;
        }
        return FUN_0c0f2d38((*(int *)((0xC20F804 + (a4 << 2)))), 0xC20F084, t4);
    }
    return t1;
}


int FUN_0c03ac3a(void)
{
    return buSetCompleteCallback(0xC03A7BC);
}

int FUN_0c03ac42(void)
{
    register int t3;

    memset(0xC3CBA20, 0x0, 0xA00);
    memset(0xC3CC420, 0x0, 0x200);
    FUN_0c03a6c4();
    (((struct o1E_uchar *)0xC3C9FB0)->v) = 0x0;
    (((struct o20_uchar *)0xC3C9FB0)->v) = 0x0;
    (((struct o21_uchar *)0xC3C9FB0)->v) = 0x0;
    (((struct o22_uchar *)0xC3C9FB0)->v) = 0x0;
    (((struct o23_uchar *)0xC3C9FB0)->v) = 0x0;
    (((struct o24_uchar *)0xC3C9FB0)->v) = 0x0;
    (((struct o4_uint *)0xC3C9FB0)->v) = 0xFFFFFFFF;
    *(unsigned int *)0xC4B1078 = 0x0;
    (((struct o0_uint *)0xC3C9FB0)->v) = 0x0;
    t3 = 0xC3C9E10;
    for (;;) {
        *(unsigned int *)((t3 + 0x4)) = 0x2;
        *(unsigned int *)((t3 + 0x8)) = 0xFFFF0000;
        *(unsigned int *)((t3 + 0xC)) = 0x7A;
        *(unsigned int *)((t3 + 0x14)) = 0x0;
        *(unsigned int *)((t3 + 0x18)) = 0x0;
        *(unsigned int *)((t3 + 0x1C)) = 0x0;
        *(unsigned int *)((t3 + 0x2C)) = 0x0;
        *(unsigned int *)((t3 + 0x30)) = 0x0;
        t3 = (t3 + 0x34);
        if ((unsigned int)t3 >= (unsigned int)0xC3C9FB0) {
            break;
        }
    }
    return buInit(0x7A, 0xFF, 0x0, 0xC03AC3A);
}

int thunk_FUN_0c2b2456(void)
{
    return FUN_0c2b2456();
}










int FUN_0c03b1c8(void)
{

    register int R0;
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
    v0_0 = (0xC3C9E10);
    v0_1 = (0xC3C9FB0);
    v0_2 = (0xC3C9E10);
    if (((unsigned int)0xC3C9E10 >= (unsigned int)0xC3C9FB0)) goto L_C03B1FE;
    L_C03B1D8:;
    if (((*(int *)((v0_0 + 0x4))) != 18)) goto L_C03B1F8;
    if (((*(int *)((v0_0 + 0x8))) != 0xFFFF0000)) goto L_C03B1F8;
    return 0xFFFFFFFF;
    L_C03B1F8:;
    v0_3 = (unsigned int)(v0_0 + 0x34) < (unsigned int)v0_1;
    v0_0 = ((v0_0 + 0x34));
    if (v0_3) goto L_C03B1D8;
    L_C03B1FE:;
    v0_1 = (0x0);
    v0_3 = (0x0);
    L_C03B24A:;
    if (((int)v0_1 < (int)0x8)) goto L_C03B206;
    return v0_3;
    L_C03B206:;
    v0_4 = *(int *)((((v0_1 * 0x34) + v0_2) + 0x4));
    v0_5 = (v0_4);
    v0_6 = (0x34);
    v0_0 = (((v0_1 * 0x34) + v0_2));
    if ((v0_4 == 18)) goto L_C03B220;
    if ((v0_5 != 1)) goto L_C03B248;
    L_C03B220:;
    if (((*(int *)((v0_0 + 0x1C))) != 1)) goto L_C03B248;
    if (((*(int *)((v0_0 + 0x14))) != 2)) goto L_C03B238;
    v0_6 = (0x80);
    if (((int)(*(int *)((v0_0 + 0x2C))) >= (int)0x80)) goto L_C03B240;
    L_C03B248:;
    v0_1 = ((v0_1 + 0x1));
    goto L_C03B24A;
    L_C03B240:;
    v0_3 = ((v0_3 | ((int)0x1 << (int)v0_1)));
    goto L_C03B248;
    L_C03B238:;
    v0_6 = (0x85);
    if (((int)(*(int *)((v0_0 + 0x2C))) < (int)0x85)) goto L_C03B248;
    goto L_C03B240;
}




int FUN_0c03b3fc(void)
{
    FUN_0c0fb680();
    return FUN_0c05c538();
}

int FUN_0c03b40a(void)
{
    FUN_0c0fb6a6();
    return FUN_0c05c538();
}

int FUN_0c03b424(void)
{
    int stk[3];
    register int t5;
    register int t7;
    register int t9;
    register int t10;
    register int t11;
    register int t13;
    register int t14;
    register int t15;
    register int t17;
    register int t18;
    register int t19;
    register int t21;
    register int t22;
    register int t29;
    register int t30;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t37;
    register int t38;
    register int t39;
    register int t41;
    register int t42;
    register int t47;
    register int t8;

    if ((*(short *)0xC3C9FD8) == 0) {
        syRtcGetDate(((int)stk + 0));
        { struct mvb10 { char b[10]; }; *(struct mvb10 *)(0xC3C9FD8) = *(struct mvb10 *)(((int)stk + 0)); }
    }
    t5 = 0xC5429C8;
    t7 = 0xC3C9FE4;
    for (;;) { t8 = *(int *)t5; t5 = (t5 + 4); if ((unsigned int)((0xC5429C8 + 1628)) < (unsigned int)t5) break; *(unsigned int *)t7 = t8; t7 = (t7 + 4); }
    t9 = 0x0;
    for (;;) {
        t10 = *(signed char *)(((0xC54237C + t9) + 0x0));
        t11 = (0xC3CA66D + t9);
        t9 = (t9 + 0x1);
        *(unsigned char *)((t11 + 0x0)) = t10;
        if ((int)t9 >= (int)0x5) {
            break;
        }
    }
    t13 = 0x0;
    for (;;) {
        t14 = *(int *)(((0xC54229C + t13) + 0x0));
        t15 = (0xC3CA640 + t13);
        t13 = (t13 + 0x4);
        *(unsigned int *)((t15 + 0x0)) = t14;
        if ((unsigned int)t13 >= (unsigned int)0x14) {
            break;
        }
    }
    t17 = 0x0;
    for (;;) {
        t18 = *(signed char *)(((0xC542267 + t17) + 0x0));
        t19 = (0xC3CA668 + t17);
        t17 = (t17 + 0x1);
        *(unsigned char *)((t19 + 0x0)) = t18;
        if ((int)t17 >= (int)0x5) {
            break;
        }
    }
    t21 = 0x0;
    for (;;) {
        t22 = 0x0;
        for (;;) {
            *(unsigned char *)((t22 + (0xC3CA654 + (t21 << 2)))) = (*(signed char *)((((0xC542271 + (t21 << 2)) + t22) + 0x0)));
            t22 = (t22 + 0x1);
            if ((int)t22 >= (int)0x4) {
                break;
            }
        }
        t21 = (t21 + 0x1);
        if ((int)t21 >= (int)0x5) {
            break;
        }
    }
    t29 = 0x0;
    for (;;) {
        t30 = *(signed char *)(((0xC542386 + t29) + 0x0));
        t32 = (0xC3CA6A1 + t29);
        t29 = (t29 + 0x1);
        *(unsigned char *)((t32 + 0x0)) = t30;
        if ((int)t29 >= (int)0x5) {
            break;
        }
    }
    t33 = 0x0;
    for (;;) {
        t34 = *(int *)(((0xC5422F8 + t33) + 0x0));
        t35 = (0xC3CA674 + t33);
        t33 = (t33 + 0x4);
        *(unsigned int *)((t35 + 0x0)) = t34;
        if ((unsigned int)t33 >= (unsigned int)0x14) {
            break;
        }
    }
    t37 = 0x0;
    for (;;) {
        t38 = *(signed char *)(((0xC5422C4 + t37) + 0x0));
        t39 = (0xC3CA69C + t37);
        t37 = (t37 + 0x1);
        *(unsigned char *)((t39 + 0x0)) = t38;
        if ((int)t37 >= (int)0x5) {
            break;
        }
    }
    t41 = 0x0;
    for (;;) {
        t42 = 0x0;
        for (;;) {
            *(unsigned char *)((t42 + (0xC3CA688 + (t41 << 2)))) = (*(signed char *)((((0xC5422CE + (t41 << 2)) + t42) + 0x0)));
            t42 = (t42 + 0x1);
            if ((int)t42 >= (int)0x4) {
                break;
            }
        }
        t47 = (0xC3CA688 + (t41 << 2));
        t41 = (t41 + 0x1);
        if ((int)t41 >= (int)0x5) {
            break;
        }
    }
    return t47;
}

int FUN_0c03b580(void)
{
    int stk[24];
    register int t7;

    memset(((int)stk + 0), 0x0, 0x60);
    if ((*(signed char *)0xC5429A8) == 0) {
        strcpy(((int)stk + 0), 0xC20F824);
        strcpy((((int)stk + 0) + 0x12), 0xC20F836);
        t7 = 0xC20F858;
    } else {
        strcpy(((int)stk + 0), 0xC20F868);
        strcpy((((int)stk + 0) + 0x12), 0xC20F87A);
        t7 = 0xC20F89C;
    }
    FUN_0c187a88((((int)stk + 0) + 0x34), t7, 0x10);
    *(unsigned int *)(((int)stk + 68)) = 0xC20F8AC;
    *(unsigned int *)(((int)stk + 72)) = 0xC20F8CC;
    *(unsigned short *)(((int)stk + 76)) = 0x1;
    *(unsigned short *)(((int)stk + 78)) = 0x1;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned short *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0xC3C9FD8;
    *(unsigned int *)(((int)stk + 92)) = 0x6D0;
    return (buMakeBackupFileImage(0xC3CBA20, ((int)stk + 0)));
}

int vmu_write_save_file(int a4)
{
    int stk[9];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (FUN_0c03b580());
    syRtcGetDate((((int)stk + 8) + 0x10));
    *(unsigned short *)(((int)stk + 16)) = (*(short *)(((int)stk + 24)));
    *(unsigned char *)(((int)stk + 18)) = (*(signed char *)(((int)stk + 26)));
    *(unsigned char *)(((int)stk + 19)) = (*(signed char *)(((int)stk + 27)));
    *(unsigned char *)(((int)stk + 20)) = (*(signed char *)(((int)stk + 28)));
    *(unsigned char *)(((int)stk + 21)) = (*(signed char *)(((int)stk + 29)));
    *(unsigned char *)(((int)stk + 22)) = (*(signed char *)(((int)stk + 30)));
    *(unsigned char *)(((int)stk + 23)) = (*(signed char *)(((int)stk + 31)));
    *(int *)((int)stk + 4) = 0x80000000;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0xC);
    return (buSaveFile((*(int *)(((int)stk + 8))), 0xC1B71E8, 0xC3CBA20, (*(int *)(((int)stk + 12))), (((int)stk + 4) + 0xC), 0x80000000));
}

int FUN_0c03b6ac(int a4)
{
    int v0_5;
    int v0_3;

    int v0_1;
    int v0_6;
    int v0_4;
    int v0_0;
    int v0_9;
    int T_;
    int R6;
    int R5;
    int R3;
    int R2;
    int R1;
    int v0_7;
    int s4;
    int v0_8;
    int s0;
    int v0_2;
    v0_7 = a4;
    (*(unsigned int *)&s0) = (*(int *)0xC3C9FB8);
    v0_8 = *(signed char *)0xC3C9FCE;
    v0_5 = (v0_8);
    v0_3 = (0xC3C9E10);
    v0_4 = (0x34);
    v0_6 = (0xC3C9FB4);
    v0_0 = (0xC3C9FCE);
    v0_1 = (0xC3C9FB0);
    v0_2 = (0x1);
    v0_9 = (0xC3C9FB8);
    if ((v0_8 == 0)) goto L_C03B6EA;
    if ((v0_5 == 1)) goto L_C03B6F8;
    if ((v0_5 == 2)) goto L_C03B736;
    if ((v0_5 == 3)) goto L_C03B766;
    if ((v0_5 == 4)) goto L_C03B798;
    L_C03B7BE:;
    v0_5 = (0xFFFFFFFF);
    L_C03B7C0:;
    return v0_5;
    L_C03B798:;
    if (((*(int *)(v0_1)) != 0)) goto L_C03B7BE;
    FUN_0c03a6c4();
    vmu_lcd_refresh((*(int *)(v0_9)));
    *(unsigned char *)(v0_0) = 0x0;
    *(unsigned int *)0xC4B1078 = 0x0;
    v0_5 = ((*(int *)(((((*(int *)(v0_9)) * v0_4) + v0_3) + 0x8))));
    goto L_C03B7C0;
    L_C03B766:;
    if (((*(int *)(v0_1)) != 0)) goto L_C03B7BE;
    if (((*(int *)(v0_6)) != (s0))) goto L_C03B792;
    FUN_0c03b424();
    v0_3 = vmu_write_save_file((*(int *)(((((*(int *)(v0_6)) * v0_4) + v0_3) + 0x0))));
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C03B790;
    if ((v0_5 == -1)) goto L_C03B7BE;
    goto L_C03B7BE;
    L_C03B790:;
    *(unsigned int *)(v0_1) = v0_2;
    L_C03B792:;
    *(unsigned char *)(v0_0) = 0x4;
    goto L_C03B7BE;
    L_C03B736:;
    if (((*(int *)(v0_1)) != 0)) goto L_C03B7BE;
    v0_5 = s0;
    (*(unsigned int *)&s4) = ((v0_5 * v0_4) + v0_3);
    v0_3 = (buMountDisk((*(int *)(((s4) + 0x0))), 0xC3CC820, ((((*(int *)((((v0_5 * v0_4) + v0_3) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C03B7BE;
    *(unsigned int *)(v0_1) = v0_2;
    L_C03B760:;
    *(unsigned char *)(v0_0) = 0x3;
    goto L_C03B7BE;
    L_C03B6F8:;
    if (((*(int *)(v0_6)) == (*(int *)(v0_9)))) goto L_C03B760;
    if (((*(int *)(v0_6)) == -1)) goto L_C03B730;
    if (((*(int *)(v0_1)) != 0)) goto L_C03B7BE;
    v0_1 = (buUnmount((*(int *)(((((*(int *)(v0_6)) * v0_4) + v0_3) + 0x0))))) != 0;
    if (v0_1) goto L_C03B7BE;
    *(unsigned int *)(((((*(int *)(v0_6)) * v0_4) + v0_3) + 0x4)) = 0x12;
    *(unsigned int *)(v0_6) = 0xFFFFFFFF;
    L_C03B730:;
    *(unsigned char *)(v0_0) = 0x2;
    goto L_C03B7BE;
    L_C03B6EA:;
    *(unsigned int *)0xC4B1078 = v0_2;
    *(unsigned int *)(v0_9) = v0_7;
    FUN_0c03a70a();
    vmu_lcd_refresh((*(int *)(v0_9)));
    *(unsigned char *)(v0_0) = v0_2;
    goto L_C03B6F8;
}

int FUN_0c03b800(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(signed char *)0xC5429CC;
    t2 = 0xC3C9FE4;
    t3 = 0xC5429C8;
    for (;;) { t0 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((0xC3C9FE4 + 1628)) < (unsigned int)t2) break; *(unsigned int *)t3 = t0; t3 = (t3 + 4); }
    (((struct o23_uchar *)0xC5429A9)->v) = t1;
    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)(((0xC3CA66D + t0) + 0x0));
        t2 = (0xC54237C + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t1;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((0xC3CA640 + t0) + 0x0));
        t2 = (0xC54229C + t0);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t2 + 0x0)) = t1;
        if ((unsigned int)t0 >= (unsigned int)0x14) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)(((0xC3CA668 + t0) + 0x0));
        t2 = (0xC542267 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t1;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            *(unsigned char *)((t1 + (0xC542271 + (t0 << 2)))) = (*(signed char *)((((0xC3CA654 + (t0 << 2)) + t1) + 0x0)));
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)(((0xC3CA6A1 + t0) + 0x0));
        t2 = (0xC542386 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t1;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((0xC3CA674 + t0) + 0x0));
        t2 = (0xC5422F8 + t0);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t2 + 0x0)) = t1;
        if ((unsigned int)t0 >= (unsigned int)0x14) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)(((0xC3CA69C + t0) + 0x0));
        t2 = (0xC5422C4 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t1;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            *(unsigned char *)((t1 + (0xC5422CE + (t0 << 2)))) = (*(signed char *)((((0xC3CA688 + (t0 << 2)) + t1) + 0x0)));
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    (((struct o0_uchar *)0xC5429A9)->v) = (*(signed char *)0xC5429CC);
    (((struct o4_uchar *)0xC5429A9)->v) = (*(signed char *)0xC5429C8);
    (((struct o5_uchar *)0xC5429A9)->v) = (*(signed char *)0xC5429CA);
    t0 = *(signed char *)0xC542B8A;
    (((struct o9_uchar *)0xC5429A9)->v) = t0;
    return t0;
}

int FUN_0c03b964(void)
{
    int stk[25];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t2;

    t0 = buAnalyzeBackupFileImage((((int)stk + 0) + 0x4), 0xC3CBA20);
    *(unsigned int *)(((int)stk + 0)) = t0;
    if ((t0 == 0) && (t4 = *(int *)(((int)stk + 92)), t2 = *(int *)(((int)stk + 96)), (int)t2 > 0)) {
        t3 = 0x0;
        t5 = 0xC3C9FD8;
        for (;;) {
            t6 = *(signed char *)((t4 + 0x0));
            t4 = (t4 + 0x1);
            t3 = (t3 + 0x1);
            *(unsigned char *)((t5 + 0x0)) = t6;
            t5 = (t5 + 0x1);
            if ((int)t3 >= (int)t2) {
                break;
            }
        }
    }
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c03b99e(int a4)
{
    register int t0;
    register int t3;

    t0 = buGetFileSize(a4, 0xC1B71E8);
    t3 = t0;
    if ((int)t0 >= 0) {
        t3 = (buLoadFile(a4, 0xC1B71E8, 0xC3CBA20, t0));
    }
    return t3;
}


int FUN_0c03bd76(void)
{
    int t1;
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = 0x70;
    t1 = 0x7A;
    t2 = 0x1;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t4 = (t2 + (0xC5429C8 + 0x4C));
        t2 = (t2 + 0x1);
        t3 = (*(signed char *)((0xC3CC420 + (t0))));
        t1 = (t1 - 1);
        t0 = (t0 + 0x1);
        *(unsigned char *)(t4) = t3;
    }
    t1 = (t0 + 0x1);
    t0 = 0x0;
    for (;;) {
        t2 = (0xC542FA0 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)(t2) = (*(signed char *)((0xC3CC420 + t1)));
        t1 = (t1 + 0x1);
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t0 = t1;
    t1 = 0x0;
    for (;;) {
        t4 = *(signed char *)((0xC3CC420 + t0));
        t3 = (0xC542F9C + t1);
        t1 = (t1 + 0x1);
        *(unsigned char *)(t3) = t4;
        t2 = t0;
        t0 = (t0 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    t1 = t0;
    t0 = 0xC;
    for (;;) {
        if (t0 == 0) {
            break;
        }
        t0 = (t0 - 1);
        t1 = (t1 + 0x1);
    }
    t0 = t2;
    t2 = t3;
    t3 = t4;
    t4 = t1;
    t1 = 0x16;
    t5 = 0x81;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t2 = (t5 + (0xC5429C8 + 0x4C));
        t5 = (t5 + 0x1);
        t0 = t4;
        t3 = (*(signed char *)((0xC3CC420 + t0)));
        t1 = (t1 - 1);
        t4 = (t4 + 0x1);
        *(unsigned char *)(t2) = t3;
    }
    t1 = t4;
    t4 = 0xA;
    for (;;) {
        if (t4 == 0) {
            break;
        }
        t4 = (t4 - 1);
        t1 = (t1 + 0x1);
    }
    t4 = t0;
    t0 = t2;
    t2 = t3;
    t3 = t1;
    t1 = 0x9;
    t5 = 0x97;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t0 = (t5 + (0xC5429C8 + 0x4C));
        t5 = (t5 + 0x1);
        t4 = t3;
        t2 = (*(signed char *)((0xC3CC420 + t4)));
        t1 = (t1 - 1);
        t3 = (t3 + 0x1);
        *(unsigned char *)(t0) = t2;
    }
    t1 = t3;
    t3 = 0x7;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t3 = (t3 - 1);
        t1 = (t1 + 0x1);
    }
    t3 = t4;
    t4 = t0;
    t0 = t2;
    t2 = t1;
    t1 = 0xA1;
    t5 = 0xA;
    for (;;) {
        if (t5 == 0) {
            break;
        }
        t4 = (t1 + (0xC5429C8 + 0x4C));
        t1 = (t1 + 0x1);
        t3 = t2;
        t0 = (*(signed char *)((0xC3CC420 + t3)));
        t5 = (t5 - 1);
        t2 = (t2 + 0x1);
        *(unsigned char *)(t4) = t0;
    }
    t1 = t2;
    t2 = 0x6;
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t2 = (t2 - 1);
        t1 = (t1 + 0x1);
    }
    t2 = t3;
    t3 = t4;
    t4 = t0;
    t0 = t1;
    t1 = 0xAB;
    t5 = 0xD;
    for (;;) {
        if (t5 == 0) {
            break;
        }
        t3 = (t1 + (0xC5429C8 + 0x4C));
        t1 = (t1 + 0x1);
        t2 = t0;
        t4 = (*(signed char *)((0xC3CC420 + t2)));
        t5 = (t5 - 1);
        t0 = (t0 + 0x1);
        *(unsigned char *)(t3) = t4;
    }
    t1 = t0;
    t0 = 0x3;
    for (;;) {
        if (t0 == 0) {
            break;
        }
        t0 = (t0 - 1);
        t1 = (t1 + 0x1);
    }
    *(unsigned int *)0xC542B80 = 0x0;
    t0 = t4;
    t2 = t1;
    t1 = 0x0;
    for (;;) {
        t3 = *(signed char *)((0xC3CC420 + t2));
        t2 = (t2 + 0x1);
        t4 = (unsigned char)t3;
        if ((int)t1 < (int)0x7) {
            t5 = (unsigned char)t3;
            t3 = t1;
            for (;;) {
                t0 = t5;
                t3 = (t3 + 0x1);
                t5 = (((t5 << 2) + t0) << 1);
                if ((int)t3 >= (int)0x7) {
                    break;
                }
            }
            t4 = t5;
        }
        t1 = (t1 + 0x1);
        t0 = ((*(int *)0xC542B80) + t4);
        *(unsigned int *)0xC542B80 = t0;
        if ((int)t1 >= (int)0x8) {
            break;
        }
    }
    return 0x1B8;
}

int FUN_0c03bf08(int a4)
{
    int stk[7];
    int t3;
    int t4;
    int t5;
    int t6;
    int t2;
    int t26;
    int t7;
    int t23;

    t3 = 0x0;
    t4 = 0xC230BF8;
    t5 = 0xC3CC420;
    t6 = 0xC3CC420;
    for (;;) {
        t7 = *(signed char *)0xC5429A8;
        if (t7 != 0) {
            if (t7 != 1) {
                *(unsigned char *)(t4) = ((*(signed char *)(t5)));
            } else {
                t2 = (*(signed char *)(t6));
                (((struct oA00_uchar *)(t3 + 0xC2201F8))->v) = t2;
            }
        } else {
            t2 = (t3 + 0xC210BF8);
            *(unsigned char *)(t2) = ((*(signed char *)((0xC3CC420 + t3))));
        }
        t3 = (t3 + 0x1);
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x1);
        t6 = (t6 + 0x1);
        if ((unsigned int)t3 >= (unsigned int)0x200) {
            break;
        }
    }
    syRtcGetDate((((int)stk + 8) + 0x8));
    *(unsigned short *)(((int)stk + 8)) = (*(short *)(((int)stk + 16)));
    *(unsigned char *)(((int)stk + 10)) = (*(signed char *)(((int)stk + 18)));
    *(unsigned char *)(((int)stk + 11)) = (*(signed char *)(((int)stk + 19)));
    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)(((int)stk + 20)));
    *(unsigned char *)(((int)stk + 13)) = (*(signed char *)(((int)stk + 21)));
    *(unsigned char *)(((int)stk + 14)) = (*(signed char *)(((int)stk + 22)));
    *(unsigned char *)(((int)stk + 15)) = (*(signed char *)(((int)stk + 23)));
    t23 = *(signed char *)0xC5429A8;
    if (t23 != 0) {
        if (t23 != 1) {
            t26 = 0xC2301F8;
        } else {
            t26 = 0xC2201F8;
        }
    } else {
        t26 = 0xC2101F8;
    }
    return (buSaveExecFile(a4, 0xC1B71F8, t26, 0x80, (((int)stk + 4) + 0x4), 0x800000FF));
}

int FUN_0c03c018(int a4)
{
    int v0_5;
    int v0_3;
    int v0_1;

    int v0_7;
    int v0_0;
    int v0_4;
    int v0_2;
    int T_;
    int R6;
    int R3;
    int R2;
    int R1;
    int s8;
    int v0_8;
    int s4;
    int s0;
    int v0_9;
    int v0_6;
    v0_4 = a4;
    (*(unsigned int *)&s0) = ((((struct o4_int *)0xC3C9FB4)->v));
    (*(unsigned int *)&s4) = 0xC3C9E10;
    v0_8 = *(signed char *)0xC3C9FCE;
    v0_5 = (v0_8);
    v0_9 = (0xC3C9FB8);
    v0_7 = (0xC3C9FB4);
    v0_3 = (0x34);
    v0_0 = (0xC3C9FCE);
    v0_1 = (0xC3C9FB0);
    v0_6 = (((((struct o0_int *)0xC3C9FB4)->v)));
    v0_2 = (0x1);
    if ((v0_8 == 0)) goto L_C03C066;
    if ((v0_5 == 1)) goto L_C03C078;
    if ((v0_5 == 2)) goto L_C03C0BE;
    if ((v0_5 == 3)) goto L_C03C124;
    if ((v0_5 != 4)) goto L_C03C05A;
    if (((*(int *)(v0_1)) != 0)) goto L_C03C1BE;
    if ((v0_6 != (s0))) goto L_C03C190;
    FUN_0c03bb4c();
    v0_3 = FUN_0c03bf08((*(int *)((((*(int *)(v0_7)) * v0_3) + 0xC3C9E10))));
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C03C18E;
    if ((v0_5 == -1)) goto L_C03C1BE;
    L_C03C1BE:;
    v0_5 = (0xFFFFFFFF);
    L_C03C1C0:;
    return v0_5;
    L_C03C18E:;
    *(unsigned int *)(v0_1) = v0_2;
    L_C03C190:;
    *(unsigned char *)(v0_0) = 0x5;
    goto L_C03C1BE;
    L_C03C05A:;
    if ((v0_5 != 5)) goto L_C03C062;
    if (((*(int *)(v0_1)) != 0)) goto L_C03C1BE;
    FUN_0c03a6c4();
    vmu_lcd_refresh((*(int *)(v0_9)));
    *(unsigned char *)(v0_0) = 0x0;
    *(unsigned int *)0xC4B1078 = 0x0;
    v0_5 = ((*(int *)((0xC3C9E18 + ((*(int *)(v0_9)) * v0_3)))));
    goto L_C03C1C0;
    L_C03C062:;
    goto L_C03C1BE;
    L_C03C124:;
    if (((*(int *)(v0_1)) != 0)) goto L_C03C1BE;
    if ((v0_6 != (s0))) goto L_C03C160;
    v0_5 = s4;
    v0_4 = (0x80);
    v0_7 = (((v0_6 * v0_3) + v0_5));
    if (((int)(*(int *)((((v0_6 * v0_3) + v0_5) + 0x2C))) < (int)0x80)) goto L_C03C160;
    if (((int)((((struct o30_int *)(v0_7))->v)) >= (int)v0_4)) goto L_C03C160;
    v0_3 = vmu_defrag_disk((*(int *)((((v0_6 * v0_3) + (s4)) + 0x0))));
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C03C15E;
    if ((v0_5 == -1)) goto L_C03C1BE;
    goto L_C03C1BE;
    L_C03C15E:;
    *(unsigned int *)(v0_1) = v0_2;
    L_C03C160:;
    *(unsigned char *)(v0_0) = 0x4;
    goto L_C03C1BE;
    L_C03C0BE:;
    if (((*(int *)(v0_1)) == 0)) goto L_C03C0C8;
    goto L_C03C1BE;
    L_C03C0C8:;
    v0_4 = s0;
    v0_5 = s4;
    (*(unsigned int *)&s8) = ((v0_4 * v0_3) + v0_5);
    v0_3 = (buMountDisk((*(int *)(((s8) + 0x0))), 0xC3CC820, ((((*(int *)((((v0_4 * v0_3) + v0_5) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C03C1BE;
    *(unsigned int *)(v0_1) = v0_2;
    L_C03C0EE:;
    *(unsigned char *)(v0_0) = 0x3;
    goto L_C03C1BE;
    L_C03C078:;
    if (((*(int *)(v0_7)) == (*(int *)(v0_9)))) goto L_C03C0EE;
    if (((*(int *)(v0_7)) == -1)) goto L_C03C0B8;
    if (((*(int *)(v0_1)) == 0)) goto L_C03C090;
    goto L_C03C1BE;
    L_C03C090:;
    v0_1 = (buUnmount((*(int *)((((*(int *)(v0_7)) * v0_3) + 0xC3C9E10))))) == 0;
    if (v0_1) goto L_C03C0A8;
    goto L_C03C1BE;
    L_C03C0A8:;
    *(unsigned int *)((((*(int *)(v0_7)) * v0_3) + 0xC3C9E14)) = 0x12;
    *(unsigned int *)(v0_7) = 0xFFFFFFFF;
    L_C03C0B8:;
    *(unsigned char *)(v0_0) = 0x2;
    goto L_C03C1BE;
    L_C03C066:;
    *(unsigned int *)0xC4B1078 = v0_2;
    *(unsigned int *)(v0_9) = v0_4;
    FUN_0c03a70a();
    vmu_lcd_refresh((*(int *)(v0_9)));
    *(unsigned char *)(v0_0) = v0_2;
    goto L_C03C078;
}

int FUN_0c03c210(int a4)
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
    v0_8 = a4;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)0xC3C9FB8);
    *(unsigned int *)(((int)stk + 4)) = 0xC3C9E10;
    v0_9 = *(signed char *)0xC3C9FCE;
    v0_4 = (v0_9);
    v0_3 = (0x34);
    v0_5 = (0xC3C9FB8);
    v0_6 = (0xC3C9FB4);
    v0_0 = (0xC3C9FCE);
    v0_1 = (0xC3C9FB0);
    v0_2 = (0x1);
    v0_7 = (0xC3C9E10);
    if ((v0_9 == 0)) goto L_C03C250;
    if ((v0_4 == 1)) goto L_C03C262;
    if ((v0_4 == 2)) goto L_C03C2A0;
    if ((v0_4 == 3)) goto L_C03C2D2;
    if ((v0_4 == 4)) goto L_C03C300;
    L_C03C32A:;
    v0_4 = (0xFFFFFFFF);
    L_C03C32C:;
    return v0_4;
    L_C03C300:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03C32A;
    FUN_0c03bd76();
    FUN_0c03a6c4();
    vmu_lcd_refresh((*(int *)((v0_5 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    *(unsigned int *)0xC4B1078 = 0x0;
    v0_4 = ((*(int *)(((((*(int *)((v0_5 + 0x0))) * v0_3) + v0_7) + 0x8))));
    goto L_C03C32C;
    L_C03C2D2:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03C32A;
    v0_4 = *(int *)((v0_6 + 0x0));
    v0_5 = (v0_4);
    if ((v0_4 != (*(int *)(((int)stk + 0))))) goto L_C03C2FA;
    v0_3 = vmu_load_vmgame_data((*(int *)((((v0_5 * v0_3) + (*(int *)(((int)stk + 4)))) + 0x0))));
    v0_4 = (v0_3);
    if ((v0_3 == 0)) goto L_C03C2F8;
    if ((v0_4 == -1)) goto L_C03C32A;
    goto L_C03C32A;
    L_C03C2F8:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C03C2FA:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C03C32A;
    L_C03C2A0:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03C32A;
    v0_4 = *(int *)(((int)stk + 0));
    v0_5 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = ((v0_4 * v0_3) + v0_5);
    v0_3 = (buMountDisk((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))), 0xC3CC820, ((((*(int *)((((v0_4 * v0_3) + v0_5) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C03C32A;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C03C2CC:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C03C32A;
    L_C03C262:;
    if (((*(int *)((v0_6 + 0x0))) == (*(int *)((v0_5 + 0x0))))) goto L_C03C2CC;
    if (((*(int *)((v0_6 + 0x0))) == -1)) goto L_C03C29A;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03C32A;
    v0_1 = (buUnmount((*(int *)(((((*(int *)((v0_6 + 0x0))) * v0_3) + v0_7) + 0x0))))) != 0;
    if (v0_1) goto L_C03C32A;
    *(unsigned int *)(((((*(int *)((v0_6 + 0x0))) * v0_3) + v0_7) + 0x4)) = 0x12;
    *(unsigned int *)((v0_6 + 0x0)) = 0xFFFFFFFF;
    L_C03C29A:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C03C32A;
    L_C03C250:;
    *(unsigned int *)0xC4B1078 = v0_2;
    *(unsigned int *)((v0_5 + 0x0)) = v0_8;
    FUN_0c03a70a();
    vmu_lcd_refresh((*(int *)((v0_5 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_2;
    goto L_C03C262;
}

int FUN_0c03c340(int a4)
{
    return (buRewriteExecFile(a4, 0xC1B71F8, 0xC3CC420, 0x5, 0x1));
}

int FUN_0c03c358(int a4)
{
    int v0_5;
    int v0_3;

    int v0_1;
    int v0_6;
    int v0_4;
    int v0_0;
    int v0_9;
    int T_;
    int R6;
    int R5;
    int R3;
    int R2;
    int R1;
    int v0_7;
    int s4;
    int v0_8;
    int s0;
    int v0_2;
    v0_7 = a4;
    (*(unsigned int *)&s0) = (*(int *)0xC3C9FB8);
    v0_8 = *(signed char *)0xC3C9FCE;
    v0_5 = (v0_8);
    v0_3 = (0xC3C9E10);
    v0_4 = (0x34);
    v0_6 = (0xC3C9FB4);
    v0_0 = (0xC3C9FCE);
    v0_1 = (0xC3C9FB0);
    v0_2 = (0x1);
    v0_9 = (0xC3C9FB8);
    if ((v0_8 == 0)) goto L_C03C39A;
    if ((v0_5 == 1)) goto L_C03C3AC;
    if ((v0_5 == 2)) goto L_C03C42C;
    if ((v0_5 == 3)) goto L_C03C45C;
    if ((v0_5 != 4)) goto L_C03C396;
    if (((*(int *)(v0_1)) != 0)) goto L_C03C4B4;
    FUN_0c03a6c4();
    vmu_lcd_refresh((*(int *)(v0_9)));
    *(unsigned char *)(v0_0) = 0x0;
    *(unsigned int *)0xC4B1078 = 0x0;
    v0_5 = ((*(int *)(((((*(int *)(v0_9)) * v0_4) + v0_3) + 0x8))));
    L_C03C4B6:;
    return v0_5;
    L_C03C4B4:;
    v0_5 = (0xFFFFFFFF);
    goto L_C03C4B6;
    L_C03C396:;
    goto L_C03C4B4;
    L_C03C45C:;
    if (((*(int *)(v0_1)) != 0)) goto L_C03C4B4;
    if (((*(int *)(v0_6)) != (s0))) goto L_C03C488;
    FUN_0c03bb4c();
    v0_3 = FUN_0c03c340((*(int *)(((((*(int *)(v0_6)) * v0_4) + v0_3) + 0x0))));
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C03C486;
    if ((v0_5 == -1)) goto L_C03C4B4;
    goto L_C03C4B4;
    L_C03C486:;
    *(unsigned int *)(v0_1) = v0_2;
    L_C03C488:;
    *(unsigned char *)(v0_0) = 0x4;
    goto L_C03C4B4;
    L_C03C42C:;
    if (((*(int *)(v0_1)) != 0)) goto L_C03C4B4;
    v0_5 = s0;
    (*(unsigned int *)&s4) = ((v0_5 * v0_4) + v0_3);
    v0_3 = (buMountDisk((*(int *)(((s4) + 0x0))), 0xC3CC820, ((((*(int *)((((v0_5 * v0_4) + v0_3) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C03C4B4;
    *(unsigned int *)(v0_1) = v0_2;
    L_C03C456:;
    *(unsigned char *)(v0_0) = 0x3;
    goto L_C03C4B4;
    L_C03C3AC:;
    if (((*(int *)(v0_6)) == (*(int *)(v0_9)))) goto L_C03C456;
    if (((*(int *)(v0_6)) == -1)) goto L_C03C3E8;
    if (((*(int *)(v0_1)) == 0)) goto L_C03C3C4;
    goto L_C03C4B4;
    L_C03C3C4:;
    v0_1 = (buUnmount((*(int *)(((((*(int *)(v0_6)) * v0_4) + v0_3) + 0x0))))) != 0;
    if (v0_1) goto L_C03C4B4;
    *(unsigned int *)(((((*(int *)(v0_6)) * v0_4) + v0_3) + 0x4)) = 0x12;
    *(unsigned int *)(v0_6) = 0xFFFFFFFF;
    L_C03C3E8:;
    *(unsigned char *)(v0_0) = 0x2;
    goto L_C03C4B4;
    L_C03C39A:;
    *(unsigned int *)0xC4B1078 = v0_2;
    *(unsigned int *)(v0_9) = v0_7;
    FUN_0c03a70a();
    vmu_lcd_refresh((*(int *)(v0_9)));
    *(unsigned char *)(v0_0) = v0_2;
    goto L_C03C3AC;
}

void FUN_0c03c4ca(void)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0xC83BBD4;
    t2 = 0xC3CA788;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC83BBD4 + 2432)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
}

int FUN_0c03c500(void)
{
    int stk[24];

    memset(((int)stk + 0), 0x0, 0x60);
    strcpy(((int)stk + 0), 0xC20FACC);
    strcpy((((int)stk + 0) + 0x12), 0xC20FADE);
    FUN_0c187a88((((int)stk + 0) + 0x34), 0xC20FB00, 0x10);
    *(unsigned int *)(((int)stk + 68)) = 0xC20FB10;
    *(unsigned int *)(((int)stk + 72)) = 0xC20FB30;
    *(unsigned short *)(((int)stk + 76)) = 0x1;
    *(unsigned short *)(((int)stk + 78)) = 0x1;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned short *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0xC3CA788;
    *(unsigned int *)(((int)stk + 92)) = 0x980;
    return (buMakeBackupFileImage(0xC3CBA20, ((int)stk + 0)));
}

int FUN_0c03c568(int a4)
{
    int stk[9];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (FUN_0c03c500());
    syRtcGetDate((((int)stk + 8) + 0x10));
    *(unsigned short *)(((int)stk + 16)) = (*(short *)(((int)stk + 24)));
    *(unsigned char *)(((int)stk + 18)) = (*(signed char *)(((int)stk + 26)));
    *(unsigned char *)(((int)stk + 19)) = (*(signed char *)(((int)stk + 27)));
    *(unsigned char *)(((int)stk + 20)) = (*(signed char *)(((int)stk + 28)));
    *(unsigned char *)(((int)stk + 21)) = (*(signed char *)(((int)stk + 29)));
    *(unsigned char *)(((int)stk + 22)) = (*(signed char *)(((int)stk + 30)));
    *(unsigned char *)(((int)stk + 23)) = (*(signed char *)(((int)stk + 31)));
    *(int *)((int)stk + 4) = 0x800000FF;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0xC);
    return (buSaveFile((*(int *)(((int)stk + 8))), 0xC1B7208, 0xC3CBA20, (*(int *)(((int)stk + 12))), (((int)stk + 4) + 0xC), 0x800000FF));
}

void FUN_0c03c742(void)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0xC3CA788;
    t2 = 0xC83BBD4;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC3CA788 + 2432)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
}

int FUN_0c03c780(void)
{
    int stk[25];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t2;

    t0 = buAnalyzeBackupFileImage((((int)stk + 0) + 0x4), 0xC3CBA20);
    *(unsigned int *)(((int)stk + 0)) = t0;
    if ((t0 == 0) && (t4 = *(int *)(((int)stk + 92)), t2 = *(int *)(((int)stk + 96)), (int)t2 > 0)) {
        t3 = 0x0;
        t5 = 0xC3CA788;
        for (;;) {
            t6 = *(signed char *)((t4 + 0x0));
            t4 = (t4 + 0x1);
            t3 = (t3 + 0x1);
            *(unsigned char *)((t5 + 0x0)) = t6;
            t5 = (t5 + 0x1);
            if ((int)t3 >= (int)t2) {
                break;
            }
        }
    }
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c03c7ba(int a4)
{
    register int t0;
    register int t3;

    t0 = buGetFileSize(a4, 0xC1B7208);
    t3 = t0;
    if ((int)t0 >= 0) {
        t3 = (buLoadFile(a4, 0xC1B7208, 0xC3CBA20, t0));
    }
    return t3;
}
