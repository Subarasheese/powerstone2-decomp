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
