/* game/unsorted: functions 0C1670C4-0C1675BE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c1673e0(int a4, int a5, int a6);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c18778c(int);
int FUN_0c187798(void);
int FUN_0c1670c4(int a4, int a5, int a6);
int FUN_0c167196(int a4, int a5, int a6, int a7);
int FUN_0c16757a(int a4, int a5, int a6);

int FUN_0c1670c4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t0 = 0xF;
    }
    t1 = FUN_0c03f444(0x1, 0x0, 0x1);
    t2 = 0x0;
    if (t1 != 0) {
        FUN_0c07e3ae(t1, 0x34);
        FUN_0c064d24(t1, 0x3, 0x9, 0x0, 0x100, (t0), (t0), 0xFFFFFFF0);
        FUN_0c187798();
        FUN_0c187798();
        u0 = (((struct o0_float *)0xC1671D0)->v);
        (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
        (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
        (((struct o50_float *)(t1))->v) = 0.0f;
        u0 = (((struct oC_float *)0xC1671D0)->v);
        (((struct o58_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
        (((struct o5C_float *)(t1))->v) = 0.0f;
        (((struct o60_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
        FUN_0c187798();
        t2 = t1;
    }
    return t2;
}

int FUN_0c167196(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;

    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 == 1) {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A34C4)->v))) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A34F8, 0xC2A34EC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), 0x0);
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3510, 0xC2A3504, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), 0x0);
            }
            t3 = *(short *)((a4 + 0x1C));
            if (((int)t3 >= (int)((((struct o4_int *)0xC2A34C4)->v))) && (t0 = (((struct o0_int *)0xC2A34C4)->v), (int)t3 <= (int)t0)) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A34DC, 0xC2A34CC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), (((((struct o4_int *)0xC2A34C4)->v))));
                FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A34DC, 0xC2A34CC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), (((((struct o4_int *)0xC2A34C4)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t3 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A34C4)->v))) {
                (((struct o14_uchar *)(a4))->v) = 0x3;
                t3 = 0x14;
            }
            return t3;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x53, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x53, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
    t0 = (((struct oC4_int *)(a4))->v);
    t3 = FUN_0c179ac0();
    t4 = ((~(((~t3) + 0x1) & 0x3)) + 0x1);
    if ((int)t3 >= 0) {
        t4 = (t3 & 0x3);
    }
    t3 = (t4 * 0x1E);
    if ((int)(t4 * 0x1E) < 0) {
        t3 = ((t4 * 0x1E) + 0x3);
    }
    (((struct o80_uint *)(t0))->v) = ((int)(((((float)((t3 >> 1) >> 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    *(volatile int *)((a4 + 0xC4));
    FUN_0c18778c(0xC2A34CC);
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
    *(volatile int *)((a4 + 0xC8));
    FUN_0c18778c(t1);
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A34C4)->v))) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A34F8, 0xC2A34EC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), 0x0);
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3510, 0xC2A3504, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o4_int *)0xC2A34C4)->v))) && (t2 = (((struct o0_int *)0xC2A34C4)->v), (int)t0 <= (int)t2)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A34DC, 0xC2A34CC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), (((((struct o4_int *)0xC2A34C4)->v))));
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A34DC, 0xC2A34CC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), (((((struct o4_int *)0xC2A34C4)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A34C4)->v))) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c16757a(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c1670c4(a4, a5, a6);
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x30, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC167426;
        return FUN_0c1673e0((*(signed char *)((t0 + 0x1))), (t0 + 0x28), (t0 + 0x34));
    }
    return t0;
}
