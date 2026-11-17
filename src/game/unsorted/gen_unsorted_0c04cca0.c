/* game/unsorted: functions 0C04CCA0-0C04D6E0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c05ab12(int, int);
int FUN_0c0cff96(int, int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c04cca0(int a4);
int FUN_0c04ceb0(void);
int FUN_0c04d0d4(int a4);
int FUN_0c04d484(int a4);
int FUN_0c04d664(float f4);

int FUN_0c04cca0(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o30_float *)(a4))->v) = -3000.0f;
        FUN_0c04d0d4(a4);
        FUN_0c04d484(a4);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o58_float *)(a4))->v) = ((((struct o6C_float *)(((((struct oD0_int *)(a4))->v))))->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o6C_float *)(((((struct oD4_int *)(a4))->v))))->v));
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        (((struct o1A_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC1B7EAC);
    t0 = (((struct oD8_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x16);
    (((struct o7C_uint *)((*(int *)(((0xC4 + a4) + 0x10)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x14)))))->v));
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x24);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if (((short)(t0 + 0x1) & 3) == 0) {
        FUN_0c04d664((((float)(*(short *)((a4 + 0x1C))) / 90.0f) + (1.0f + 1.0f)));
    }
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        FUN_0c05ab12(0xD0, (a4 + 0x28));
        (((struct o20_ushort *)(a4))->v) = (((int)((int)(FUN_0c179ac0()) % (int)0x18)) + 0x10);
    }
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
    if ((int)(*(int *)((((*(signed char *)((a4 + 0x19))) << 2) + 0xC1B7ED0))) < (int)((((struct o22_short *)(a4))->v))) {
        FUN_0c05ab12(0xD1, (a4 + 0x28));
        (((struct o19_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x19))) + 0x1);
    }
    if ((*(short *)((a4 + 0x1C))) == (*(int *)((0xC1B7EC4 + ((*(short *)((a4 + 0x1E))) << 2))))) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        thunk_FUN_0c05abb2(0x46, 0x0);
    }
    u0 = (((struct o4_float *)0xC04CF48)->v);
    u1 = 3.0f;
    u1 = u1 + ((((struct o0_float *)0xC04CF48)->v)) * (((float)(*(short *)((a4 + 0x1C))) / 300.0f));
    u2 = u1;
    if (u1 > u0) {
        u2 = u0;
    }
    t0 = (((struct oD0_int *)(a4))->v);
    u0 = ((((struct o58_float *)(a4))->v));
    u0 = u0 + u2 * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
    (((struct o6C_float *)(t0))->v) = u0;
    t0 = (((struct oD4_int *)(a4))->v);
    u0 = ((((struct o5C_float *)(a4))->v));
    u0 = u0 + u2 * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 14)));
    (((struct o6C_float *)(t0))->v) = u0;
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 > (int)0x78) {
        t0 = (((struct oD8_int *)(a4))->v);
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0xF);
        t0 = (((struct oD4_int *)(a4))->v);
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 30);
        t1 = 0x78;
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F44) > (int)0xE) {
        return FUN_0c03f346(a4);
    }
    return t1;
}

int FUN_0c04ceb0(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x1, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x1, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04CCA0;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c04d0d4(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xB, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0xB, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04CEFA;
        *(unsigned int *)((t1 + 0x10)) = a4;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c04d484(int a4)
{
    register int t0;
    register int t1;
    register int t5;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x5, 0x0, 0x1);
        t5 = t1;
        if (t1 != 0) {
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), t0, 0xE, (*(int *)0xC4B40CC));
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            (((struct oAC_ushort *)(t1))->v) = 0xF;
            (((struct oA9_uchar *)(t1))->v) = 0x80;
            *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t1 + 0x4)) = 0xC04D126;
            *(unsigned char *)((t1 + 0x2)) = t0;
            *(unsigned int *)((t1 + 0x10)) = a4;
            t5 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t5;
}

int FUN_0c04d664(float f4)
{
    register int t0;
    register int t8;
    register int t4;
    register int t5;
    register float u7;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t8 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x3F;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        t4 = FUN_0c179ac0();
        t5 = ((~(((~t4) + 0x1) & 0x1F)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0x1F);
        }
        u7 = *(float *)0xC04D758;
        (((struct o48_float *)(t0))->v) = (f4 * (((float)t5 / u7) + 1.0f));
        (((struct o44_float *)(t0))->v) = (f4 * (((float)t5 / u7) + 1.0f));
        (((struct o40_float *)(t0))->v) = (f4 * (((float)t5 / u7) + 1.0f));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04D514;
        t8 = 0xFFFFFFFF;
    }
    return t8;
}
