/* game/save: functions 0C03CD64-0C03D090, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int FUN_0c03a6c4(void);
int FUN_0c03a70a(void);
int vmu_lcd_refresh(int);
int FUN_0c03b3fc(void);
int buUnmount(int);
int buGetFileSize(int, int);
int buLoadFile(int, int, int, int);
int buMountDisk(int, int, int);
int buAnalyzeBackupFileImage(int, int);
int FUN_0c03cd64(void);
int FUN_0c03ce22(void);
int FUN_0c03ce84(int a4);
int FUN_0c03ceb6(int a4);

int FUN_0c03cd64(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((t0 + 0xC3CB888));
        t3 = *(signed char *)(((0xC542A14 + t0) + 0x0));
        t4 = ((unsigned char)t3 + t2);
        if ((int)((unsigned char)t3 + t2) < 0) {
            t4 = 0x0;
        }
        t2 = t4;
        if ((int)t4 > (int)0x63) {
            t2 = 0x63;
        }
        t1 = (0xC542A14 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = t2;
        if ((int)t0 >= (int)0xC0) {
            break;
        }
    }
    t0 = t1;
    t1 = 0x0;
    for (;;) {
        if ((*(signed char *)(((0xC3CB948 + t1) + 0x0))) != 0) {
            t0 = (*(int *)((((t1 << 2) + 0xC542B90) + 0x0)));
            t0 = (t0 | 0x800);
            *(unsigned int *)((((t1 << 2) + 0xC542B90) + 0x0)) = t0;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0xC0) {
            break;
        }
    }
    t0 = *(int *)0xC3CBA08;
    t1 = (((struct o0_int *)0xC542B80)->v);
    t2 = (t1 + t0);
    if ((int)(t1 + t0) < 0) {
        t2 = 0x0;
    }
    t0 = t2;
    if ((int)t2 > (int)0x5F5E09C) {
        t0 = 0x5F5E09C;
    }
    (((struct o0_uint *)0xC542B80)->v) = t0;
    t0 = *(signed char *)0xC3CBA1A;
    t1 = *(signed char *)0xC542B8A;
    t2 = t1;
    if ((int)t1 < (int)t0) {
        t2 = t0;
    }
    (((struct oA_uchar *)0xC542B80)->v) = t2;
    *(unsigned char *)0xC5429B2 = t2;
    t0 = *(signed char *)0xC3CBA1B;
    t1 = *(signed char *)0xC542B8B;
    t2 = t1;
    if ((int)t1 < (int)t0) {
        t2 = t0;
    }
    (((struct oB_uchar *)0xC542B80)->v) = t2;
    t0 = *(signed char *)0xC3CBA1C;
    t1 = *(signed char *)0xC542B8C;
    t2 = t1;
    if ((int)t1 < (int)t0) {
        t2 = t0;
    }
    (((struct oC_uchar *)0xC542B80)->v) = t2;
    return 0x1C4;
}

int FUN_0c03ce22(void)
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
        t5 = 0xC3CB888;
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

int FUN_0c03ce84(int a4)
{
    register int t0;
    register int t3;

    t0 = buGetFileSize(a4, 0xC1B7228);
    t3 = t0;
    if ((int)t0 >= 0) {
        t3 = (buLoadFile(a4, 0xC1B7228, 0xC3CBA20, t0));
    }
    return t3;
}

int FUN_0c03ceb6(int a4)
{
    int v0_5;
    int v0_3;

    int v0_4;
    int v0_7;
    int v0_1;
    int v0_0;
    int v0_2;
    int T_;
    int R6;
    int R5;
    int R3;
    int R2;
    int R1;
    int v0_8;
    int v0_9;
    int s4;
    int s0;
    int v0_6;
    v0_8 = a4;
    (*(unsigned int *)&s4) = (*(int *)0xC3C9FB8);
    v0_9 = *(signed char *)0xC3C9FCE;
    v0_7 = (v0_9);
    v0_3 = (0x34);
    v0_1 = (0xC3C9FB0);
    v0_5 = (0xC3C9FB4);
    v0_4 = (0xC3C9FB8);
    v0_0 = (0xC3C9FCE);
    v0_2 = (0x1);
    v0_6 = (0xC3C9E10);
    if ((v0_9 == 0)) goto L_C03CEF8;
    if ((v0_7 == 1)) goto L_C03CF0A;
    if ((v0_7 == 2)) goto L_C03CF50;
    if ((v0_7 == 3)) goto L_C03CFC8;
    if ((v0_7 != 4)) goto L_C03CEF4;
    if (((*(int *)(v0_1)) != 0)) goto L_C03D07A;
    v0_5 = (0x0);
    if (((*(int *)(((((s4) * v0_3) + v0_6) + 0x8))) != 0)) goto L_C03D054;
    v0_2 = FUN_0c03ce22();
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C03D038;
    FUN_0c03cd64();
    L_C03D03E:;
    FUN_0c03a6c4();
    vmu_lcd_refresh((*(int *)(v0_4)));
    *(unsigned char *)(v0_0) = v0_5;
    *(unsigned int *)0xC4B1078 = v0_5;
    v0_7 = (v0_1);
    L_C03D07C:;
    return v0_7;
    L_C03D038:;
    FUN_0c03b3fc();
    goto L_C03D03E;
    L_C03D054:;
    FUN_0c03b3fc();
    FUN_0c03a6c4();
    vmu_lcd_refresh((*(int *)(v0_4)));
    *(unsigned char *)(v0_0) = v0_5;
    *(unsigned int *)0xC4B1078 = v0_5;
    v0_7 = ((*(int *)((0xC3C9E18 + ((*(int *)(v0_4)) * v0_3)))));
    goto L_C03D07C;
    L_C03D07A:;
    v0_7 = (0xFFFFFFFF);
    goto L_C03D07C;
    L_C03CEF4:;
    goto L_C03D07A;
    L_C03CFC8:;
    if (((*(int *)(v0_1)) != 0)) goto L_C03D07A;
    v0_5 = *(int *)(v0_5);
    (*(unsigned int *)&s0) = v0_5;
    v0_4 = (0x4);
    if ((v0_5 != (s4))) goto L_C03D00C;
    v0_3 = FUN_0c03ce84((*(int *)(((((s0) * v0_3) + v0_6) + 0x0))));
    v0_7 = (v0_3);
    if ((v0_3 == 0)) goto L_C03D004;
    if ((v0_7 == 0xFFFFFF05)) goto L_C03D008;
    if ((v0_7 == 0xFFFFFF03)) goto L_C03D008;
    if ((v0_7 == 0xFFFFFF01)) goto L_C03D008;
    goto L_C03D07A;
    L_C03D008:;
    *(unsigned char *)(v0_0) = v0_4;
    goto L_C03D07A;
    L_C03D004:;
    *(unsigned int *)(v0_1) = v0_2;
    L_C03D00C:;
    *(unsigned char *)(v0_0) = v0_4;
    goto L_C03D07A;
    L_C03CF50:;
    if (((*(int *)(v0_1)) == 0)) goto L_C03CF5A;
    goto L_C03D07A;
    L_C03CF5A:;
    v0_4 = s4;
    (*(unsigned int *)&s0) = ((v0_4 * v0_3) + v0_6);
    v0_3 = (buMountDisk((*(int *)(((s0) + 0x0))), 0xC3CC820, ((((*(int *)((((v0_4 * v0_3) + v0_6) + 0xC))) << 8) << 1) + 0x20))) == 0;
    if (v0_3) goto L_C03CF80;
    goto L_C03D07A;
    L_C03CF80:;
    *(unsigned int *)(v0_1) = v0_2;
    L_C03CF82:;
    *(unsigned char *)(v0_0) = 0x3;
    goto L_C03D07A;
    L_C03CF0A:;
    if (((*(int *)(v0_5)) == (*(int *)(v0_4)))) goto L_C03CF82;
    if (((*(int *)(v0_5)) == -1)) goto L_C03CF4A;
    if (((*(int *)(v0_1)) == 0)) goto L_C03CF22;
    goto L_C03D07A;
    L_C03CF22:;
    v0_1 = (buUnmount((*(int *)((((*(int *)(v0_5)) * v0_3) + 0xC3C9E10))))) == 0;
    if (v0_1) goto L_C03CF3A;
    goto L_C03D07A;
    L_C03CF3A:;
    *(unsigned int *)((((*(int *)(v0_5)) * v0_3) + 0xC3C9E14)) = 0x12;
    *(unsigned int *)(v0_5) = 0xFFFFFFFF;
    L_C03CF4A:;
    *(unsigned char *)(v0_0) = 0x2;
    goto L_C03D07A;
    L_C03CEF8:;
    *(unsigned int *)0xC4B1078 = v0_2;
    *(unsigned int *)(v0_4) = v0_8;
    FUN_0c03a70a();
    vmu_lcd_refresh((*(int *)(v0_4)));
    *(unsigned char *)(v0_0) = v0_2;
    goto L_C03CF0A;
}
