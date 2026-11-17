/* game/unsorted: functions 0C1675DC-0C167F6A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c167764(int a4, int a5, int a6, int a7);
int FUN_0c167a28(int a4, int a5, int a6, int a7);

int FUN_0c167764(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t8;
    register int t16;
    register int t18;
    register int t29;
    register int t37;
    register int t41;
    register int t42;
    register int t49;
    register int t66;
    register int t67;
    register int t68;
    register int t70;
    register int t81;
    register int t83;
    register int t91;
    register int t93;
    register int t103;
    register int t110;
    register int t114;
    register int t115;
    register int t122;
    register int t127;
    int t39;
    int t112;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t127 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o8_int *)0xC2A3554)->v)))) == 0) {
                *(volatile int *)((a4 + 0xC4));
                t6 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
                *(volatile int *)((a4 + 0xC4));
                t8 = ((int (*)(void))(FUN_0c187798))();
                *(volatile int *)((a4 + 0xC4));
                FUN_0c18778c();
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x52, (*(int *)0xC4B40CC));
                *(volatile int *)((a4 + 0xC4));
                t16 = ((int (*)(void))(FUN_0c187798))();
                *(volatile int *)((a4 + 0xC4));
                t18 = ((int (*)(void))(FUN_0c187798))();
                *(volatile int *)((a4 + 0xC4));
                FUN_0c18778c();
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3);
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)(((((struct o8_int *)0xC2A3554)->v)) << 2)) {
                t29 = (((struct o8_int *)0xC2A3554)->v);
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A35A4, 0xC2A3598, (*(short *)((a4 + 0x1C))), (t29 << 2), 0x0);
            }
            t37 = *(short *)((a4 + 0x1C));
            if (((int)t37 >= (int)((((struct o4_int *)0xC2A3554)->v))) && (t39 = (((struct o0_int *)0xC2A3554)->v), (int)t37 <= (int)t39)) {
                t41 = ((((struct o4_int *)0xC2A3554)->v));
                t42 = (((struct o8_int *)0xC2A3554)->v);
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3570, 0xC2A3560, (*(short *)((a4 + 0x1C))), (t42 << 2), t41);
            }
            t49 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t49 + 0x1);
            t127 = (short)(t49 + 0x1);
            if ((int)(short)(t49 + 0x1) > (int)(((((struct o8_int *)0xC2A3554)->v)) << 2)) {
                (((struct o14_uchar *)(a4))->v) = 0x3;
                t127 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x4, 0x52, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        t66 = (((struct oC4_int *)(a4))->v);
        t67 = FUN_0c179ac0();
        t68 = ((~(((~t67) + 0x1) & 0x3)) + 0x1);
        if ((int)t67 >= 0) {
            t68 = (t67 & 0x3);
        }
        t70 = (t68 * 0x1E);
        if ((int)(t68 * 0x1E) < 0) {
            t70 = ((t68 * 0x1E) + 0x3);
        }
        (((struct o80_uint *)(t66))->v) = ((int)(((((float)((t70 >> 1) >> 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o8_int *)0xC2A3554)->v)))) == 0) {
            *(volatile int *)((a4 + 0xC4));
            t81 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)((a4 + 0xC4));
            t83 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)((a4 + 0xC4));
            FUN_0c18778c();
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x52, (*(int *)0xC4B40CC));
            *(volatile int *)((a4 + 0xC4));
            t91 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)((a4 + 0xC4));
            t93 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)((a4 + 0xC4));
            FUN_0c18778c();
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)(((((struct o8_int *)0xC2A3554)->v)) << 2)) {
            t103 = (((struct o8_int *)0xC2A3554)->v);
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A35A4, 0xC2A3598, (*(short *)((a4 + 0x1C))), (t103 << 2), 0x0);
        }
        t110 = *(short *)((a4 + 0x1C));
        if (((int)t110 >= (int)((((struct o4_int *)0xC2A3554)->v))) && (t112 = (((struct o0_int *)0xC2A3554)->v), (int)t110 <= (int)t112)) {
            t114 = ((((struct o4_int *)0xC2A3554)->v));
            t115 = (((struct o8_int *)0xC2A3554)->v);
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3570, 0xC2A3560, (*(short *)((a4 + 0x1C))), (t115 << 2), t114);
        }
        t122 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t122 + 0x1);
        t127 = (short)(t122 + 0x1);
        if ((int)(short)(t122 + 0x1) > (int)(((((struct o8_int *)0xC2A3554)->v)) << 2)) {
            (((struct o14_uchar *)(a4))->v) = 0x3;
            t127 = 0x14;
        }
    }
    return t127;
}

int FUN_0c167a28(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t0 = 0xF;
    }
    if (a7 != 0) {
        t1 = FUN_0c03f444(0x1, 0x0, 0x1);
        t2 = 0x0;
        if (t1 != 0) {
            FUN_0c07e3ae(t1, 0x36);
            FUN_0c064d24(t1, 0x3, 0x9, 0x0, 0x100, (t0), (t0), 0xFFFFFFF0);
            FUN_0c187798();
            FUN_0c187798();
            (((struct o4C_float *)(t1))->v) = (10.0f * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (10.0f * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            FUN_0c187798();
            t2 = t1;
        }
        t0 = t2;
    } else {
        t1 = FUN_0c03f444(0x5, 0x0, 0x1);
        t2 = 0x0;
        if (t1 != 0) {
            FUN_0c187798();
            FUN_0c187798();
            u0 = *(float *)0xC167B70;
            (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            FUN_0c187798();
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}
