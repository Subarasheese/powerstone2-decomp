/* game/hit: functions 0C066CD8-0C067898, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o114_int { char p[0x114]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o1650_uint { char p[0x1650]; unsigned int v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o371E_uchar { char p[0x371E]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o372B_uchar { char p[0x372B]; unsigned char v; };
struct o3742_uchar { char p[0x3742]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o3752_uchar { char p[0x3752]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o375C_uchar { char p[0x375C]; unsigned char v; };
struct o375D_uchar { char p[0x375D]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o37BC_float { char p[0x37BC]; float v; };
struct o37F4_float { char p[0x37F4]; float v; };
struct o37FC_float { char p[0x37FC]; float v; };
struct o381E_ushort { char p[0x381E]; unsigned short v; };
struct o3820_ushort { char p[0x3820]; unsigned short v; };
struct o382A_short { char p[0x382A]; short v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o3838_ushort { char p[0x3838]; unsigned short v; };
struct o383E_ushort { char p[0x383E]; unsigned short v; };
struct o38DD_uchar { char p[0x38DD]; unsigned char v; };
struct o38DE_uchar { char p[0x38DE]; unsigned char v; };
struct o38DF_uchar { char p[0x38DF]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c0392bc(int);
int FUN_0c039fbc(void);
int FUN_0c03e6b2(int, int);
int FUN_0c067008(int);
int FUN_0c0674f4(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c133aec(int);
int FUN_0c0eb0c0(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c066cd8(int a4);
void FUN_0c066f38(int a4);
void FUN_0c066fbe(int a4);
int FUN_0c067294(int a4, int a5, int a6);
void FUN_0c0673ca(int a4);
int FUN_0c0673ea(int a4);
int FUN_0c067438(int a4);
int FUN_0c067672(int a4);
int FUN_0c0676ce(int a4);
int FUN_0c067734(int a4);
int FUN_0c067784(void);
int FUN_0c06780e(int a4);
int FUN_0c06785c(void);

int FUN_0c066cd8(int a4)
{
    int stk[3];
    register int t2;
    register int t4;
    register int t6;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t13;
    register int t17;
    register int t23;
    register int t27;
    register int t28;
    register int t33;
    register int t35;
    register int t36;
    register int t37;
    register int t41;
    register int t42;
    register int t43;
    register int t45;
    register int t48;
    register int t49;
    register int t50;
    register float u61;
    register int t62;
    register int t63;
    register int t0;
    register int t1;
    register int t7;

    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t0 = 0xC4;
        t1 = t2;
        t1 = (t1 << 2);
        t0 = (t0 + a4);
        t0 = (t0 + t1);
        t4 = *(int *)((t0 + 0x0));
        t0 = 0xC4;
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        t0 = (t0 + a4);
        t1 = (t1 + t0);
        t2 = (t2 + 0x1);
        *(unsigned short *)(((*(int *)((t1 + 0x0))) + 0x6)) = 0xF;
    }
    *(unsigned int *)(((int)stk + 8)) = ((0x444 + a4) + 0x1C);
    t6 = 0xC0;
    t8 = 0x0;
    t9 = 0x0;
    t10 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 0)) = (t9 * 0x10E0);
        t11 = 0x0;
        for (;;) {
            if ((int)t11 >= (int)(*(int *)(((((0x444 + a4) + 0x4) + (t9 << 2)) + 0x0)))) {
                break;
            }
            t13 = *(int *)(((int)stk + 0));
            t7 = t11;
            t7 = (t7 << 2);
            t7 = (t7 << 1);
            t7 = (t7 + t11);
            t7 = (t7 << 2);
            t7 = (t7 << 2);
            *(unsigned int *)(((int)stk + 4)) = t7;
            *(unsigned char *)((((((0x444 + a4) + 0x24) + t13) + t7) + 0x0)) = 0x1;
            t7 = (*(int *)(((int)stk + 4)));
            t6 = 0xF;
            t11 = (t11 + 0x1);
            *(unsigned short *)((((((0x444 + a4) + 0x24) + (*(int *)(((int)stk + 0)))) + t7) + 0x6)) = t6;
        }
        *(unsigned int *)(((int)stk + 0)) = (t9 * 0x2D0);
        t17 = 0x0;
        for (;;) {
            if ((int)t17 >= (int)(*(int *)(((((0x444 + a4) + 0xC) + (t9 << 2)) + 0x0)))) {
                break;
            }
            t7 = 0x21E4;
            t7 = (t7 + (0x444 + a4));
            t7 = (t7 + (*(int *)(((int)stk + 0))));
            t7 = (t7 + (((((t17 << 2) << 1) + t17) << 2) << 2));
            *(unsigned int *)(((int)stk + 4)) = (((((t17 << 2) << 1) + t17) << 2) << 2);
            *(unsigned char *)((t7 + 0x0)) = 0x1;
            t7 = (*(int *)(((int)stk + 4)));
            t6 = 0xF;
            t17 = (t17 + 0x1);
            *(unsigned short *)(((((0x21E4 + (0x444 + a4)) + (*(int *)(((int)stk + 0)))) + t7) + 0x6)) = t6;
        }
        t23 = 0x0;
        for (;;) {
            if ((int)t23 >= (int)(*(int *)(((((0x444 + a4) + 0x14) + (t9 << 2)) + 0x0)))) {
                break;
            }
            t7 = t23;
            *(unsigned int *)(((int)stk + 0)) = (((((t23 << 2) << 1) + t7) << 2) << 2);
            *(unsigned char *)(((((0x2784 + (0x444 + a4)) + t8) + (((((t23 << 2) << 1) + t7) << 2) << 2)) + 0x0)) = 0x1;
            t6 = 0xF;
            t23 = (t23 + 0x1);
            *(unsigned short *)(((((0x2784 + (0x444 + a4)) + t8) + (*(int *)(((int)stk + 0)))) + 0x6)) = t6;
        }
        t27 = t23;
        t28 = 0x0;
        for (;;) {
            if ((int)t28 >= (int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))) {
                break;
            }
            t27 = t28;
            t27 = (t27 << 2);
            t27 = (t27 << 1);
            t27 = (t27 + t28);
            t27 = (t27 << 2);
            t27 = (t27 << 2);
            *(unsigned char *)(((((0x2D24 + (0x444 + a4)) + t10) + t27) + 0x0)) = 0x1;
            t6 = 0xF;
            t28 = (t28 + 0x1);
            *(unsigned short *)(((((0x2D24 + (0x444 + a4)) + t10) + t27) + 0x6)) = t6;
        }
        t33 = *(int *)(((int)stk + 8));
        t9 = (t9 + 0x1);
        t10 = (t10 + 0x2D0);
        *(unsigned int *)(((int)stk + 8)) = (t33 + 0x4);
        t8 = (t8 + 0x2D0);
        if ((int)t9 < (int)0x2) continue;
        break;
    }
    t35 = (t33 + 0x4);
    t36 = 0x0;
    t37 = 0x1;
    for (;;) {
        if ((int)t36 >= (int)((((struct o114_int *)(a4))->v))) {
            break;
        }
        t35 = 0x118;
        t37 = t36;
        t37 = (t37 << 2);
        t35 = (t35 + a4);
        t35 = (t35 + t37);
        t36 = (t36 + 0x1);
        (((struct o64_ushort *)((*(int *)((t35 + 0x0)))))->v) = 0xF;
        t37 = (t37 + (0x118 + a4));
        t35 = (*(int *)((t37 + 0x0)));
        (((struct o88_float *)(t35))->v) = 1.0f;
    }
    t41 = t7;
    t42 = t35;
    t43 = 0x0;
    for (;;) {
        if ((int)t43 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t42 = 0xC4;
        t42 = (t42 + a4);
        t45 = *(int *)((((t43 << 2) + t42) + 0x0));
        t41 = 0x2;
        t42 = (*(signed char *)((0xC258F58 + t43)));
        t41 = (t41 + t45);
        t43 = (t43 + 0x1);
        *(unsigned char *)((t41 + 0x0)) = t42;
    }
    t48 = t41;
    t49 = t42;
    t50 = 0x0;
    for (;;) {
        if ((int)t50 >= (int)((((struct o114_int *)(a4))->v))) {
            break;
        }
        t49 = t50;
        t49 = (t49 << 2);
        t49 = (t49 + (0x118 + a4));
        t48 = (*(int *)((t49 + 0x0)));
        t50 = (t50 + 0x1);
        (((struct o88_float *)(t48))->v) = ((*(float *)((((*(signed char *)(((0x371A + a4) + 0x0))) << 2) + ((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC1C59CC)))));
    }
    u61 = *(float *)(((((*(signed char *)(((0x371A + a4) + 0x0))) << 2) + (0xC1C594C + (((*(signed char *)((a4 + 0x2))) << 2) << 1))) + 0x0));
    (((struct o48_float *)(a4))->v) = u61;
    (((struct o44_float *)(a4))->v) = u61;
    (((struct o40_float *)(a4))->v) = u61;
    (((struct o378C_float *)(a4))->v) = u61;
    t62 = *(signed char *)((a4 + 0x2));
    t63 = t62;
    if (t62 == 9) {
        (((struct o1650_uint *)(a4))->v) = 0x0;
        t63 = 0x1650;
    }
    return t63;
}

void FUN_0c066f38(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t6 = ((0x2784 + (a4 + 0x444)) + 0x90);
    t7 = ((0x2784 + (a4 + 0x444)) + 0x1B0);
    for (;;) { t0 = *(int *)t6; t6 = (t6 + 4); if ((unsigned int)((((0x2784 + (a4 + 0x444)) + 0x90) + 144)) < (unsigned int)t6) break; *(unsigned int *)t7 = t0; t7 = (t7 + 4); }
    t0 = ((0x2784 + (a4 + 0x444)) + 0x120);
    t6 = (0x2784 + (a4 + 0x444));
    for (;;) { t1 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((((0x2784 + (a4 + 0x444)) + 0x120) + 144)) < (unsigned int)t0) break; *(unsigned int *)t6 = t1; t6 = (t6 + 4); }
    t0 = ((0x2784 + (a4 + 0x444)) + 0x120);
    t1 = ((0x2784 + (a4 + 0x444)) + 0x90);
    for (;;) { t2 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((((0x2784 + (a4 + 0x444)) + 0x120) + 144)) < (unsigned int)t0) break; *(unsigned int *)t1 = t2; t1 = (t1 + 4); }
    t0 = ((0x2D24 + (a4 + 0x444)) + 0x120);
    t1 = ((0x2D24 + (a4 + 0x444)) + 0x1B0);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((((0x2D24 + (a4 + 0x444)) + 0x120) + 144)) < (unsigned int)t0) break; *(unsigned int *)t1 = t3; t1 = (t1 + 4); }
    t0 = (0x2D24 + (a4 + 0x444));
    t1 = ((0x2D24 + (a4 + 0x444)) + 0x120);
    for (;;) { t4 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)(((0x2D24 + (a4 + 0x444)) + 144)) < (unsigned int)t0) break; *(unsigned int *)t1 = t4; t1 = (t1 + 4); }
    t0 = ((0x2D24 + (a4 + 0x444)) + 0x90);
    t1 = (0x2D24 + (a4 + 0x444));
    for (;;) { t5 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((((0x2D24 + (a4 + 0x444)) + 0x90) + 144)) < (unsigned int)t0) break; *(unsigned int *)t1 = t5; t1 = (t1 + 4); }
    *(unsigned int *)(((a4 + 0x444) + 0x14)) = 0x4;
    *(unsigned int *)(((a4 + 0x444) + 0x1C)) = 0x4;
}

void FUN_0c066fbe(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t2 = ((0x2784 + (a4 + 0x444)) + 0x120);
    t3 = ((0x2784 + (a4 + 0x444)) + 0x1B0);
    for (;;) { t0 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((((0x2784 + (a4 + 0x444)) + 0x120) + 144)) < (unsigned int)t2) break; *(unsigned int *)t3 = t0; t3 = (t3 + 4); }
    t0 = ((0x2D24 + (a4 + 0x444)) + 0x120);
    t2 = ((0x2D24 + (a4 + 0x444)) + 0x1B0);
    for (;;) { t1 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((((0x2D24 + (a4 + 0x444)) + 0x120) + 144)) < (unsigned int)t0) break; *(unsigned int *)t2 = t1; t2 = (t2 + 4); }
    *(unsigned int *)(((a4 + 0x444) + 0x14)) = 0x4;
    *(unsigned int *)(((a4 + 0x444) + 0x1C)) = 0x4;
}


void FUN_0c0673ca(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = ((0x386C + a4) + t0);
        t2 = ((0x386C + a4) + t0);
        t0 = (t0 + 0x8);
        *(unsigned char *)((t2 + 0x0)) = 0x0;
        *(unsigned int *)((t1 + 0x4)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0x30) {
            break;
        }
    }
}

int FUN_0c0673ea(int a4)
{
    register int t0;
    register int t2;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)((((0x389C + a4) + t0) + 0x0)) = 0x0;
        t2 = ((0x389C + a4) + t0);
        t0 = (t0 + 0x8);
        *(unsigned short *)((t2 + 0x6)) = 0x0;
        *(unsigned short *)((t2 + 0x4)) = 0x0;
        *(unsigned short *)((t2 + 0x2)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0x30) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c067438(int a4)
{
    (((struct o372B_uchar *)(a4))->v) = 0x0;
    (((struct o37B0_float *)(a4))->v) = 1.0f;
    (((struct o3756_uchar *)(a4))->v) = 0x0;
    *(unsigned char *)(((0x3749 + a4) + 0x2)) = 0x0;
    *(unsigned char *)(((0x3749 + a4) + 0x1)) = 0x0;
    (((struct o3749_uchar *)(a4))->v) = 0x0;
    (((struct o3743_uchar *)(a4))->v) = 0x0;
    (((struct o382A_ushort *)(a4))->v) = 0x0;
    (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x371F)));
    FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
    (((struct o3820_ushort *)(a4))->v) = 0x0;
    (((struct o381E_ushort *)(a4))->v) = 0x0;
    (((struct o37BC_float *)(a4))->v) = (*(float *)((0xC25AFA8 + ((*(signed char *)((a4 + 0x2))) << 2))));
    (((struct o3838_ushort *)(a4))->v) = 0x0;
    (((struct o3742_uchar *)(a4))->v) = 0x0;
    FUN_0c0673ea(a4);
    (((struct o3721_uchar *)(a4))->v) = 0x0;
    (((struct o376C_uint *)(a4))->v) = 0x0;
    (((struct o3757_uchar *)(a4))->v) = 0x0;
    (((struct o383E_ushort *)(a4))->v) = 0x0;
    (((struct o3752_uchar *)(a4))->v) = 0x0;
    (((struct o37F4_float *)(a4))->v) = 0.0f;
    (((struct o37FC_float *)(a4))->v) = 0.0f;
    (((struct o371D_uchar *)(a4))->v) = 0x0;
    (((struct o375C_uchar *)(a4))->v) = 0x0;
    (((struct o375D_uchar *)(a4))->v) = 0x0;
    (((struct o38DF_uchar *)(a4))->v) = 0x0;
    (((struct o38DE_uchar *)(a4))->v) = 0x0;
    (((struct o38DD_uchar *)(a4))->v) = 0x0;
    return 0x38DD;
}

int FUN_0c067672(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(signed char *)0xC541F62;
    t2 = t0;
    if ((unsigned char)t1 != 0) {
        if (((unsigned char)t1 != 1) && (((unsigned char)t1 != 4) && (((unsigned char)t1 != 2) && (((unsigned char)t1 != 5) && ((unsigned char)t1 != 6))))) {
            t3 = t0;
            if ((unsigned char)t1 != 3) {
            } else {
                t1 = *(signed char *)((a4 + 0x2));
                t4 = 0x10;
                if (t1 != 1) {
                    t5 = 0x11;
                    if (t1 != 6) {
                        t5 = 0x12;
                        if (t1 != 7) {
                            t5 = t0;
                        }
                    }
                    t4 = t5;
                }
                t3 = t4;
            }
            t1 = t3;
        } else {
            t3 = *(signed char *)((a4 + 0x2));
            t4 = 0x11;
            if (t3 != 6) {
                t5 = t0;
                if (t3 == 7) {
                    t5 = 0x12;
                }
                t4 = t5;
            }
            t1 = t4;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c0676ce(int a4)
{
    register int t3;

    t3 = *(int *)((((*(signed char *)(((0x371E + (((short)(signed char)a4 * (short)0x3938) + 0xC532498)) + 0x0))) << 2) + ((((FUN_0c067672((((short)(signed char)a4 * (short)0x3938) + 0xC532498))) * 0x58) + 0xC28865C) + ((short)(*(signed char *)(((0x371A + (((short)(signed char)a4 * (short)0x3938) + 0xC532498)) + 0x0))) * (short)0x2C))));
    return FUN_0c0eb0c0(((*(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x1))) << 8), t3, 0x100);
}

int FUN_0c067734(int a4)
{
    register int t7;

    if (((((struct o382A_short *)(a4))->v)) == 0) {
        (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x371F)));
    }
    FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o3756_uchar *)(a4))->v) = 0x0;
    (((struct o37B0_float *)(a4))->v) = 1.0f;
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    t7 = (((struct o11C_int *)(a4))->v);
    *(unsigned int *)((t7 + 0x14)) = 0x0;
    *(unsigned int *)((t7 + 0x10)) = 0x0;
    *(unsigned int *)((t7 + 0xC)) = 0x0;
    (((struct o446_uchar *)(a4))->v) = 0x0;
    (((struct o447_uchar *)(a4))->v) = 0x0;
    (((struct o445_uchar *)(a4))->v) = 0x0;
    return FUN_0c066cd8(a4);
}

int FUN_0c067784(void)
{

    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_0 = (0xC532498);
    v0_1 = (0x3938);
    v0_3 = (0xC532498);
    v0_4 = (0x0);
    v0_2 = (0xC540978);
    L_C06779E:;
    *(unsigned int *)((v0_3 + 0xC)) = v0_4;
    *(unsigned int *)((v0_3 + 0x8)) = v0_4;
    v0_5 = (unsigned int)(v0_3 + v0_1) < (unsigned int)v0_2;
    v0_3 = ((v0_3 + v0_1));
    if (v0_5) goto L_C06779E;
    *(unsigned int *)0xC532434 = v0_4;
    v0_5 = (0xC532434);
    v0_6 = ((0xE4E0 + v0_0));
    v0_2 = (v0_4);
    v0_7 = (0x4);
    L_C0677B6:;
    v0_8 = (0x3714);
    v0_3 = (((v0_2 * v0_1) + v0_0));
    if (((*(signed char *)((((v0_2 * v0_1) + v0_0) + 0x3714))) == 0)) goto L_C0677FC;
    if (((*(int *)((v0_5 + 0x0))) != 0)) goto L_C0677CC;
    *(unsigned int *)((v0_5 + 0x0)) = v0_3;
    L_C0677CC:;
    v0_8 = ((((v0_2 + 0x1) * v0_1) + v0_0));
    v0_9 = ((v0_0 + (v0_2 * v0_1)));
    v0_3 = ((((v0_2 + 0x1) * v0_1) + v0_0));
    v0_4 = ((((v0_2 + 0x1) * v0_1) + v0_0));
    if (((unsigned int)(((v0_2 + 0x1) * v0_1) + v0_0) >= (unsigned int)v0_6)) goto L_C0677FC;
    L_C0677E6:;
    v0_8 = (0x3714);
    if (((*(signed char *)((v0_3 + 0x3714))) == 0)) goto L_C0677F4;
    *(unsigned int *)((v0_9 + 0xC)) = v0_4;
    *(unsigned int *)((v0_4 + 0x8)) = v0_9;
    L_C0677FC:;
    v0_3 = (int)(v0_2 + 0x1) < (int)v0_7;
    v0_2 = ((v0_2 + 0x1));
    if (v0_3) goto L_C0677B6;
    return v0_8;
    L_C0677F4:;
    v0_10 = (unsigned int)(v0_3 + v0_1) < (unsigned int)v0_6;
    v0_3 = ((v0_3 + v0_1));
    v0_4 = ((v0_4 + v0_1));
    if (v0_10) goto L_C0677E6;
    goto L_C0677FC;
}

int FUN_0c06780e(int a4)
{
    register int t0;
    register int t1;
    register int t4;

    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        if ((((int)0x1 << (int)t0) & a4) != 0) {
            t1 = 0x1;
        }
        t4 = ((t0 * 0x3938) + 0xC532498);
        t0 = (t0 + 0x1);
        (((struct o3714_uchar *)(t4))->v) = t1;
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return FUN_0c067784();
}

int FUN_0c06785c(void)
{
    int stk[5];
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            FUN_0c067008(t0);
            FUN_0c0674f4(t0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return FUN_0c039fbc();
}
