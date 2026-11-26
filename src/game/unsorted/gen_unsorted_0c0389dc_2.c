/* game/unsorted: functions 0C0389DC-0C0392BC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o114_int { char p[0x114]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o3858_int { char p[0x3858]; int v; };
struct o385C_int { char p[0x385C]; int v; };
struct o3860_int { char p[0x3860]; int v; };
struct o64_short { char p[0x64]; short v; };
struct o8_short { char p[0x8]; short v; };
struct oA4_int { char p[0xA4]; int v; };
struct oAC_short { char p[0xAC]; short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c0389dc(int, int, int, int);
int FUN_0c038a3a(int, int);
int FUN_0c038b42(int, int);
float math_mat_row0_length(int);
float math_mat_row1_length(int);
float math_mat_row2_length(int);
int nlStoreMatrix(int);
int FUN_0c17b1a0(int);
int nlSelectMatrixStack(int);
int nlMultiMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleV(int);
int nlSetTranslate(int);
int nlTranslateV(int);
int nlUnitMatrix(void);
int FUN_0c038c1c(int a4);
int FUN_0c038d8a(int a4);
int FUN_0c038f70(void);
int FUN_0c039010(int a4);

int FUN_0c038c1c(int a4)
{
    int stk[8];
    register int t29;
    register int t39;
    register int t47;
    register int t60;
    register int t56;
    register int t57;
    register int t59;
    register int t46;

    *(unsigned int *)(((int)stk + 0)) = (*(signed char *)0xC5421DC);
    nlSelectMatrixStack(0x1);
    if (((unsigned short)((((struct oAC_short *)(a4))->v)) & 0x13F) != 0) {
        nlUnitMatrix();
        if (((unsigned short)((((struct oAC_short *)(a4))->v)) & 32) != 0) {
            FUN_0c0389dc((((((struct oAC_short *)(a4))->v)) & 0xFFFFFFFE), (a4 + 0x28), (a4 + 0x34), (a4 + 0x40));
            nlStoreMatrix((a4 + 0x64));
            FUN_0c17b1a0((((*(int *)(((int)stk + 0))) * 0x2F8) + 0xC541174));
            nlSetTranslate((a4 + 0x28));
            nlMultiMatrix((a4 + 0x64));
        } else {
            if (((((struct oA4_int *)(a4))->v)) != 0) {
                FUN_0c17b1a0(((((struct oA4_int *)(a4))->v)));
            }
            FUN_0c0389dc(((((struct oAC_short *)(a4))->v)), (a4 + 0x28), (a4 + 0x34), (a4 + 0x40));
        }
        nlStoreMatrix((a4 + 0x64));
    }
    if (((((struct o114_int *)(a4))->v)) != 0) {
        t29 = (((struct o118_int *)(a4))->v);
        FUN_0c17b1a0((a4 + 0x64));
        FUN_0c0389dc(((((struct o64_short *)(t29))->v)), t29, (t29 + 0xC), (t29 + 0x18));
        nlStoreMatrix((t29 + 0x24));
    }
    t39 = (((struct oC0_int *)(a4))->v);
    if ((int)t39 > 0) {
        FUN_0c038a3a(a4, ((((struct oC4_int *)(a4))->v)));
    }
    t47 = 0x1;
    for (;;) {
        if ((int)t47 >= (int)((((struct o114_int *)(a4))->v))) {
            break;
        }
        t46 = t47;
        t46 = (t46 << 2);
        t46 = (t46 + (0x118 + a4));
        t46 = (*(int *)((t46 + 0x0)));
        FUN_0c17b1a0((((((struct oC4_int *)(a4))->v)) + 0x28));
        FUN_0c0389dc(((((struct o64_short *)(t46))->v)), t46, (t46 + 0xC), (t46 + 0x18));
        nlStoreMatrix((t46 + 0x24));
        t47 = (t47 + 0x1);
    }
    t60 = 0x114;
    if ((int)0x1 < (int)t39) {
        t56 = 0x4;
        t57 = 0x1;
        for (;;) {
            t59 = FUN_0c038a3a(a4, (*(int *)((((0xC4 + a4) + t56) + 0x0))));
            t57 = (t57 + 0x1);
            t56 = (t56 + 0x4);
            if ((int)t57 >= (int)t39) {
                break;
            }
        }
        t60 = t59;
    }
    return t60;
}

int FUN_0c038d8a(int a4)
{
    int stk[6];
    register int t28;
    register int t33;
    register int t29;
    register int t30;
    register int t32;

    *(unsigned int *)(((int)stk + 0)) = (*(signed char *)0xC5421DC);
    nlSelectMatrixStack(0x1);
    if (((unsigned short)((((struct oAC_short *)(a4))->v)) & 0x13F) != 0) {
        nlUnitMatrix();
        if (((unsigned short)((((struct oAC_short *)(a4))->v)) & 32) != 0) {
            FUN_0c0389dc((((((struct oAC_short *)(a4))->v)) & 0xFFFFFFFE), (a4 + 0x28), (a4 + 0x34), (a4 + 0x40));
            nlStoreMatrix((a4 + 0x64));
            FUN_0c17b1a0((((*(int *)(((int)stk + 0))) * 0x2F8) + 0xC541174));
            nlSetTranslate((a4 + 0x28));
            nlMultiMatrix((a4 + 0x64));
        } else {
            if (((((struct oA4_int *)(a4))->v)) != 0) {
                FUN_0c17b1a0(((((struct oA4_int *)(a4))->v)));
            }
            FUN_0c0389dc(((((struct oAC_short *)(a4))->v)), (a4 + 0x28), (a4 + 0x34), (a4 + 0x40));
        }
        nlStoreMatrix((a4 + 0x64));
    }
    t28 = (((struct oC0_int *)(a4))->v);
    t33 = 0xC0;
    if ((int)t28 > 0) {
        t29 = 0x0;
        t30 = 0x0;
        for (;;) {
            t32 = FUN_0c038b42(a4, (*(int *)((((0xC4 + a4) + t29) + 0x0))));
            t30 = (t30 + 0x1);
            t29 = (t29 + 0x4);
            if ((int)t30 >= (int)t28) {
                break;
            }
        }
        t33 = t32;
    }
    return t33;
}

int FUN_0c038f70(void)
{
    int stk[5];
    register int t16;
    register int t21;
    register int t17;
    register int t18;
    register int t20;

    nlSelectMatrixStack(0x1);
    if (((unsigned short)((((struct o8_short *)0xC540A1C)->v)) & 0x13F) != 0) {
        nlUnitMatrix();
        if (((((struct o0_int *)0xC540A1C)->v)) != 0) {
            FUN_0c17b1a0(((((struct o0_int *)0xC540A1C)->v)));
        }
        FUN_0c0389dc(((((struct o8_short *)0xC540A1C)->v)), 0xC5409A0, 0xC5409AC, 0xC5409B8);
        nlStoreMatrix(0xC5409DC);
    }
    t16 = (((struct o1C_int *)0xC540A1C)->v);
    t21 = 0xC0;
    if ((int)t16 > 0) {
        t17 = 0x0;
        t18 = 0x0;
        for (;;) {
            t20 = FUN_0c038a3a(0xC540978, (*(int *)(((0xC540A3C + t18) + 0x0))));
            t17 = (t17 + 0x1);
            t18 = (t18 + 0x4);
            if ((int)t17 >= (int)t16) {
                break;
            }
        }
        t21 = t20;
    }
    return t21;
}

