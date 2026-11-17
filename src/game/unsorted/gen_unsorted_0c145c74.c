/* game/unsorted: functions 0C145C74-0C147656, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_float { char p[0x41C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int a4, int a5, int a6, int a7);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c145dd2(int, int, int, int);
int FUN_0c14607c(int, int, int, int);
int FUN_0c1463b8(int, int, int, int);
int FUN_0c14672c(int, int, int);
int FUN_0c1468e8(int, int, int);
int FUN_0c146b30(int, int, int, int);
int FUN_0c146fa2(int, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
int FUN_0c187798(int, int, int);
int FUN_0c145c74(int a4, int a5);
int FUN_0c145d1c(int a4, int a5);
int FUN_0c145eb2(int a4, int a5, int a6);
int FUN_0c146408(int a4, int a5, int a6, int a7);
int FUN_0c146fda(int a4);
int FUN_0c147222(int a4, int a5, int a6, float f4);

int FUN_0c145c74(int a4, int a5)
{
    register float u1;
    int t5;
    register int t8;
    register int t10;
    register float u13;
    register float u14;
    register float u15;
    register float t16;
    register int t18;
    register int t21;
    register int t23;

    u1 = *(float *)0xC145DB4;
    if ((*(float *)((a5 + 0x0))) == 0.0f) {
        *(float *)((a5 + 0x0)) = u1;
    }
    t5 = math_atan_angle16(((-((((struct o8_float *)(a5))->v))) / (*(float *)((a5 + 0x0)))));
    t8 = (0xFFFF & t5);
    if (0.0f > (*(float *)((a5 + 0x0)))) {
        t8 = ((0xFFFF & t5) + 0x8000);
    }
    t10 = *(int *)((a4 + 0x4));
    *(unsigned int *)((a4 + 0x4)) = (unsigned short)(t10 + ((unsigned short)(0x4000 + t8) - t10));
    if (((((struct o4_float *)(a5))->v)) == 0.0f) {
        (((struct o4_float *)(a5))->v) = u1;
    }
    u13 = *(float *)((a5 + 0x0));
    u14 = (((struct o8_float *)(a5))->v);
    u15 = (u14 * u14);
    u15 = u15 + u13 * u13;
    t16 = math_signed_sqrt(u15);
    t18 = math_atan_angle16(((-t16) / ((((struct o4_float *)(a5))->v))));
    t21 = t18;
    if (0.0f > ((((struct o4_float *)(a5))->v))) {
        t21 = (t18 + 0x8000);
    }
    t23 = *(int *)((a4 + 0x0));
    *(unsigned int *)((a4 + 0x0)) = (unsigned short)(t23 + ((-(unsigned short)(0x4000 + t21)) - t23));
    return 0x4;
}

int FUN_0c145d1c(int a4, int a5)
{
    int stk[3];
    register float u24;
    register float u25;
    register float u26;
    register float u27;
    register float u29;
    register float u31;

    *(float *)((((int)stk + 0) + 0x0)) = 1.0f;
    (((struct o4_float *)(((int)stk + 0)))->v) = 1.0f;
    (((struct o8_float *)(((int)stk + 0)))->v) = 1.0f;
    if (((unsigned short)((((struct oAC_short *)(a4))->v)) & 0x10) != 0) {
        *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((((int)stk + 0) + 0x0))) * ((((struct o40_float *)(a4))->v)));
        (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) * ((((struct o44_float *)(a4))->v)));
        (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o8_float *)(((int)stk + 0)))->v)) * ((((struct o48_float *)(a4))->v)));
    }
    if (((unsigned short)(*(short *)((a5 + 0x6))) & 0x10) != 0) {
        *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((((int)stk + 0) + 0x0))) * ((((struct o84_float *)(a5))->v)));
        (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) * ((((struct o88_float *)(a5))->v)));
        (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o8_float *)(((int)stk + 0)))->v)) * ((((struct o8C_float *)(a5))->v)));
    }
    u24 = *(float *)((((int)stk + 0) + 0x0));
    u25 = (((struct o4_float *)(((int)stk + 0)))->v);
    u26 = (((struct o8_float *)(((int)stk + 0)))->v);
    if (u24 > u25) {
        u27 = u26;
        if (u24 > u26) {
            u27 = u24;
        }
        u31 = u27;
    } else {
        u29 = u26;
        if (u25 > u26) {
            u29 = u25;
        }
        u31 = u29;
    }
    (((struct o24_float *)(a5))->v) = u31;
    return 0x24;
}

int FUN_0c145eb2(int a4, int a5, int a6)
{
    register float u1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    FUN_0c187798(0x0, a5, a6);
    u1 = *(float *)0xC145F3C;
    t2 = 0xC145F3C;
    t3 = 0x0;
    t4 = 0x0;
    t5 = 0xC2A23CC;
    for (;;) {
        if (!(u1 > (*(float *)((((((t4 << 2) + t4) << 2) + 0xC2A23CC) + 0x0))))) {
            break;
        }
        t2 = (FUN_0c145dd2(a4, a4, a6, t5));
        t5 = (t5 + 0x14);
        t4 = (t4 + 0x1);
        t3 = (t3 | t2);
    }
    return t3;
}

int FUN_0c146408(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)((((struct o0_int *)0xC2A249C)->v)));
        if (t0 == 0) {
            t1 = t0;
            t0 = 0x0;
            for (;;) {
                if ((int)t0 >= (int)((((struct o8_int *)0xC2A249C)->v))) {
                    break;
                }
                t1 = (*(signed char *)((a4 + 0x2)));
                t2 = t1;
                t1 = (*(signed char *)((a4 + 0x1)));
                t1 = (FUN_0c1463b8(t1, t2, (a4 + 0x28), (a4 + 0x34)));
                t0 = (t0 + 0x1);
            }
        }
        t0 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)((((struct o4_int *)0xC2A249C)->v)));
        if (t0 == 0) {
            return FUN_0c14607c((*(signed char *)((a4 + 0x2))), (*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34));
        }
        return t0;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}

int FUN_0c146fda(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R11;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_3 = (v0_2);
    v0_1 = (v0_0);
    if ((v0_2 == 0)) goto L_C147018;
    if ((v0_3 == 1)) goto L_C147052;
    L_C1470DA:;
    return FUN_0c03f346(v0_1, R5, R6, R7);
    L_C147052:;
    v0_2 = (0xC2A261C);
    v0_3 = (0xC5421F8);
    if ((((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)(*(int *)0xC2A2630))) != 0)) goto L_C147072;
    FUN_0c1468e8((*(signed char *)((v0_1 + 0x2))), (*(signed char *)((v0_1 + 0x1))), (v0_1 + 0x28));
    L_C147072:;
    if ((((int)((unsigned int)((((struct o68_int *)(v0_3))->v)) % (unsigned int)(*(int *)((v0_2 + 0x14))))) != 0)) goto L_C147094;
    FUN_0c146b30((*(signed char *)((v0_1 + 0x2))), (*(signed char *)((v0_1 + 0x1))), (v0_1 + 0x28), (0x1 & (*(short *)((v0_1 + 0x1C)))));
    L_C147094:;
    if ((((int)((unsigned int)((((struct o68_int *)(v0_3))->v)) % (unsigned int)(*(int *)((v0_2 + 0x18))))) != 0)) goto L_C1470B0;
    FUN_0c14672c((*(signed char *)((v0_1 + 0x2))), (*(signed char *)((v0_1 + 0x1))), (v0_1 + 0x28));
    L_C1470B0:;
    v0_0 = (v0_2);
    if ((((int)((unsigned int)((((struct o68_int *)(v0_3))->v)) % (unsigned int)(*(int *)((v0_2 + 0x1C))))) != 0)) goto L_C1470DA;
    v0_2 = ((v0_0 + 0x20));
    v0_3 = (0x0);
    L_C1470D4:;
    if (((int)v0_3 < (int)(*(int *)((v0_2 + 0x0))))) goto L_C1470C8;
    goto L_C1470DA;
    L_C1470C8:;
    FUN_0c146fa2((*(signed char *)((v0_1 + 0x1))), (v0_1 + 0x28));
    v0_3 = ((v0_3 + 0x1));
    goto L_C1470D4;
    L_C147018:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x2, 0xB, (*(int *)(((((*(signed char *)((v0_1 + 0x2))) << 2) << 1) + 0xC4B40E0))));
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    (((struct oAC_ushort *)(v0_1))->v) = 0xF;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    *(unsigned short *)((((((struct oC4_int *)(v0_1))->v)) + 0x6)) = 0x21F;
    goto L_C147052;
}

int FUN_0c147222(int a4, int a5, int a6, float f4)
{
    int stk[8];
    register int t0;
    register int t11;
    register int t5;
    register int t8;

    *(unsigned char *)(((int)stk + 24)) = a4;
    *(unsigned char *)(((int)stk + 28)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    *(float *)(((int)stk + 16)) = f4;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t11 = 0x0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 28)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 24)));
        *(unsigned int *)((t0 + 0x4)) = 0xC147164;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 20)));
        (((struct o41C_float *)(t0))->v) = (*(float *)(((int)stk + 16)));
        t5 = *(int *)((t0 + 0x10));
        FUN_0c07e2f4(t0, (*(int *)(((t5 + 0x41C) + 0x4))));
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t8 = *(signed char *)((t0 + 0x2));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t8));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x1, (*(int *)(((t5 + 0x41C) + 0x8))), 0x0, 0x100, (~((int)0x1 << (int)t8)), 0x0, 0x0);
        t11 = t0;
    }
    return t11;
}
