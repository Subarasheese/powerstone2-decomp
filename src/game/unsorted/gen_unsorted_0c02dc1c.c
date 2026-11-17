/* game/unsorted: functions 0C02DC1C-0C02EC54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02e078(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c02f874(int, int, int);
int FUN_0c03ee04(int);
int math_mat_get_translate(int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int FUN_0c17b1a0(int);
int nlSelectMatrixStack(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleV(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitMatrix(void);
int FUN_0c17c6f0(int, float, float, float);
int FUN_0c17e390(int);
int nlObjPutWorldMatrixMode(void);
int FUN_0c0dcc80(float, float, float);
int FUN_0c17e740(int, int, int, float, float, float);
extern int FUN_0c187798();
int FUN_0c02dc1c(int a4, int a5);
int FUN_0c02dca4(int a4, int a5, int a6);
void FUN_0c02e14a(int a4);
int FUN_0c02e842(void);
int FUN_0c02e898(void);
int FUN_0c02e978(float f4, float f5);

int FUN_0c02dc1c(int a4, int a5)
{
    register float u0;
    register float u1;
    register float u2;
    register float u5;
    register float u3;

    u0 = *(float *)(((a5 << 2) + 0xC1A8FF0));
    u1 = (((struct o168_float *)(a4))->v);
    u2 = (((struct o2C_float *)(a4))->v);
    u5 = 0.0f;
    if (0.0f > (u2 - u1)) {
    } else {
        u3 = (u2 - u1);
        if ((u2 - u1) > 6000.0f) {
            u3 = 6000.0f;
        }
        u5 = u3;
    }
    nlUnitMatrix();
    nlTranslate(((((struct o28_float *)(a4))->v)), ((((struct o168_float *)(a4))->v)), ((((struct o30_float *)(a4))->v)));
    nlScale((((6000.0f - u5) / 6000.0f) * u0), u0, (((6000.0f - u5) / 6000.0f) * u0));
    return FUN_0c17e390((*(int *)0xC542458));
}

int FUN_0c02dca4(int a4, int a5, int a6)
{
    int stk[16];
    register int t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u17;
    register float u20;

    FUN_0c187798(a4, a5, a6);
    if (!(((((struct o17C_float *)(a4))->v)) > 0.0f)) {
        *(float *)(((int)stk + 32)) = ((((struct o168_float *)(a4))->v));
    }
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x38)));
    FUN_0c17b1a0((a4 + 0x64));
    nlInvertMatrix(0x0);
    t9 = 0x0;
    u10 = 1000000.0f;
    u11 = 1000000.0f;
    u12 = -1000000.0f;
    u13 = -1000000.0f;
    for (;;) {
        math_mat_get_translate(((*(int *)((((0xC4 + a4) + t9) + 0x0))) + 0x28), (((int)stk + 0) + 0x28));
        nlCalcPoint((((int)stk + 0) + 0x28), (((int)stk + 0) + 0x34));
        u17 = *(float *)(((int)stk + 52));
        if (u17 > u12) {
            u12 = u17;
        }
        if (u10 > u17) {
            u10 = u17;
        }
        u20 = *(float *)(((int)stk + 60));
        if (u20 > u13) {
            u13 = u20;
        }
        t9 = (t9 + 0x4);
        if (u11 > u20) {
            u11 = u20;
        }
        if ((unsigned int)t9 >= (unsigned int)0x4C) {
            break;
        }
    }
    *(float *)(((int)stk + 16)) = ((u10 + u12) / (1.0f + 1.0f));
    *(float *)(((int)stk + 24)) = ((u11 + u13) / (1.0f + 1.0f));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 4)) = ((u12 - (*(float *)(((int)stk + 16)))) * 1.29999995f);
    *(float *)(((int)stk + 12)) = ((u13 - (*(float *)(((int)stk + 24)))) * 1.29999995f);
    *(float *)(((int)stk + 8)) = 1.0f;
    if (15.0f > (*(float *)(((int)stk + 4)))) {
        *(float *)(((int)stk + 4)) = 15.0f;
    }
    if (15.0f > (*(float *)(((int)stk + 12)))) {
        *(float *)(((int)stk + 12)) = 15.0f;
    }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) / 100.0f);
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) / 100.0f);
    nlUnitMatrix();
    nlTranslateV((((int)stk + 0) + 0x1C));
    nlRotateAY((*(int *)(((int)stk + 0))));
    nlScaleV((((int)stk + 0) + 0x4));
    nlTranslateV((((int)stk + 0) + 0x10));
    return (FUN_0c17e390((*(int *)0xC542458)));
}

void FUN_0c02e14a(int a4)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F4;
    register float F5;
    register float F6;
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
    v0_6 = a4;
    nlSelectMatrixStack(0x1);
    v0_0 = (0x0);
    v0_1 = (0x0);
    v0_2 = (0xC1A9030);
    v0_3 = (0xC1A9030);
    L_C02E26A:;
    v0_4 = *(int *)((v0_3 + (v0_0 << 2)));
    v0_7 = (v0_4);
    if ((v0_4 == -1)) goto L_C02E27A;
    v0_4 = ((*(int *)((0xC532434 + ((*(int *)((v0_2 + 0x0))) << 2)))));
    v0_6 = (0xC532434);
    L_C02E262:;
    if ((v0_4 != 0)) goto L_C02E1B0;
    v0_0 = ((v0_0 + 0x1));
    v0_2 = ((v0_2 + 0x4));
    goto L_C02E26A;
    L_C02E1B0:;
    v0_5 = ((0xA8 + v0_4));
    if (((*(signed char *)(((0xA8 + v0_4) + 0x0))) == 0)) goto L_C02E260;
    FUN_0c03ee04((*(signed char *)((v0_5 + 0x1))));
    v0_6 = (0x200);
    if ((((unsigned short)(*(short *)((v0_5 + 0x4))) & 0x200) == 0)) goto L_C02E1DC;
    FUN_0c17e740(v0_6, R5, R6, ((((struct oC_float *)(v0_5))->v)), ((((struct o10_float *)(v0_5))->v)), ((((struct o14_float *)(v0_5))->v)));
    L_C02E1DC:;
    *(unsigned int *)(((int)stk + 4)) = (v0_5 + 0x1C);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    L_C02E212:;
    if (((int)(*(int *)(((int)stk + 0))) < (int)(*(int *)((v0_5 + 0x18))))) goto L_C02E1E6;
    if (((*(signed char *)((v0_5 + 0x2))) == 0)) goto L_C02E260;
    v0_8 = *(signed char *)((v0_5 + 0x2));
    v0_7 = (v0_8);
    v0_6 = (((*(int *)0xC542260) & 0x1));
    if ((v0_8 == 1)) goto L_C02E23C;
    if ((v0_7 == 2)) goto L_C02E248;
    if (!((v0_7 == 3))) goto L_C02E260;
    if ((v0_6 != 1)) goto L_C02E260;
    goto L_C02E258;
    L_C02E260:;
    v0_4 = ((*(int *)((v0_4 + 0xC))));
    goto L_C02E262;
    L_C02E258:;
    FUN_0c02dc1c(v0_4, (*(signed char *)((v0_5 + 0x3))));
    goto L_C02E260;
    L_C02E248:;
    if ((v0_6 == 0)) goto L_C02E258;
    goto L_C02E260;
    L_C02E23C:;
    FUN_0c02dc1c(v0_4, (*(signed char *)((v0_5 + 0x3))));
    goto L_C02E260;
    L_C02E1E6:;
    v0_6 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    v0_7 = (v0_6);
    if (((*(int *)((v0_6 + 0xC))) == 0)) goto L_C02E200;
    v0_6 = (0xC20EA8C);
    if (((*(int *)0xC20EA8C) == 3)) goto L_C02E200;
    FUN_0c02f874(v0_4, v0_7, R6);
    L_C02E200:;
    FUN_0c02e078(v0_4, v0_7, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    goto L_C02E212;
    L_C02E27A:;
}

int FUN_0c02e842(void)
{
    register int t3;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;

    nlSelectMatrixStack(0x2);
    nlObjPutWorldMatrixMode();
    nlSelectMatrixStack(0x1);
    t3 = *(int *)0xC20EA90;
    u5 = (((struct o8_float *)(((0xEC + ((t3 * 0x2F8) + 0xC5410FC)) + 0xC)))->v);
    u6 = (((struct o4_float *)(((0xEC + ((t3 * 0x2F8) + 0xC5410FC)) + 0xC)))->v);
    u7 = (((struct o4_float *)(((0xBC + ((t3 * 0x2F8) + 0xC5410FC)) + 0xC)))->v);
    u8 = (((struct oC_float *)((0xEC + ((t3 * 0x2F8) + 0xC5410FC))))->v);
    u9 = (((struct oC_float *)((0xBC + ((t3 * 0x2F8) + 0xC5410FC))))->v);
    return FUN_0c0dcc80((u8 - u9), (u6 - u7), (u5 - ((((struct o8_float *)(((0xBC + ((t3 * 0x2F8) + 0xC5410FC)) + 0xC)))->v))));
}

int FUN_0c02e898(void)
{
    nlSelectMatrixStack(0x3);
    nlUnitMatrix();
    FUN_0c17c6f0(0x1D28, 1.33333337f, 0.300000012f, 12000.0f);
    return nlSelectMatrixStack(0x1);
}

int FUN_0c02e978(float f4, float f5)
{
    nlSelectMatrixStack(0x3);
    nlUnitMatrix();
    nlTranslate((f4 / ((((struct o4_float *)0xC02EA20)->v))), (f5 / ((((struct o0_float *)0xC02EA20)->v))), 0.0f);
    FUN_0c17c6f0(0x1D28, ((((struct o14_float *)0xC02EA20)->v)), ((((struct o10_float *)0xC02EA20)->v)), ((((struct oC_float *)0xC02EA20)->v)));
    nlSelectMatrixStack(0x2);
    return FUN_0c17b1a0((((*(int *)0xC20EA90) * 0x2F8) + 0xC541134));
}
