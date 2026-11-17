/* game/unsorted: functions 0C137F74-0C138C30, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c137f8e(int a4, int a5, int a6, int a7);
int FUN_0c138a00(int a4, int a5, int a6, int a7);

int FUN_0c137f8e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    int t5;
    int t6;
    register int t7;
    register float u0;

    if ((*(signed char *)((0x3715 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))) != 26) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    t7 = *(signed char *)((a4 + 0x14));
    if (t7 != 0) {
        if (t7 == 1) {
            t7 = *(short *)((a4 + 0x1C));
            if (((int)t7 >= (int)((((struct o4_int *)0xC2A19CC)->v))) && (t0 = (((struct o8_int *)0xC2A19CC)->v), (int)t7 <= (int)t0)) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
            } else {
                t0 = t7;
            }
            if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                t7 = ((int (*)(int))(FUN_0c187798))(t0);
            } else {
                t7 = ((int (*)(int))(FUN_0c187798))(t0);
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o14_int *)0xC2A19CC)->v))) && (t1 = (((struct o0_int *)0xC2A19CC)->v), (int)t0 <= (int)t1)) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A19CC)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x25);
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x24);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    t0 = ((int (*)(int))(FUN_0c187798))(0x1F);
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = t2;
    *(volatile int *)((a4 + 0xC4));
    t0 = ((int (*)(int))(FUN_0c187798))(t2);
    *(volatile int *)((a4 + 0xC4));
    t0 = ((int (*)(int, int))(FUN_0c187798))(0x0, 0xC2A19B4);
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = t3;
    *(volatile int *)((a4 + 0xC8));
    t0 = ((int (*)(int))(FUN_0c187798))(t3);
    *(volatile int *)((a4 + 0xC8));
    t0 = ((int (*)(int, int))(FUN_0c187798))(0x0, t4);
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = ((math_sin_angle16(((((struct o20_int *)0xC2A19CC)->v)))) * ((((struct o28_float *)0xC2A19CC)->v)));
    (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct oC8_int *)(a4))->v);
    u0 = ((math_sin_angle16((-((((struct o20_int *)0xC2A19CC)->v))))) * ((((struct o28_float *)0xC2A19CC)->v)));
    (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = ((math_sin_angle16(((((struct o24_int *)0xC2A19CC)->v)))) * ((((struct o2C_float *)0xC2A19CC)->v)));
    (((struct o78_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct oC8_int *)(a4))->v);
    u0 = ((math_sin_angle16((-((((struct o24_int *)0xC2A19CC)->v))))) * ((((struct o2C_float *)0xC2A19CC)->v)));
    (((struct o78_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o4_int *)0xC2A19CC)->v))) && (t5 = (((struct o8_int *)0xC2A19CC)->v), (int)t0 <= (int)t5)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
    } else {
        t1 = t0;
    }
    if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
        t0 = ((int (*)(int))(FUN_0c187798))(t1);
    } else {
        t0 = ((int (*)(int))(FUN_0c187798))(t1);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o14_int *)0xC2A19CC)->v))) && (t6 = (((struct o0_int *)0xC2A19CC)->v), (int)t0 <= (int)t6)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A19CC)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c138a00(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t13;
    register int t4;
    register int t10;

    *(unsigned char *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 24)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x4);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 28)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13831C;
        *(unsigned short *)((t0 + 0x1E)) = (*(short *)(((int)stk + 24)));
        FUN_0c07e2f4(t0, 0x33);
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t4 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t4));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t4)), 0x0, 0xF0);
        *(volatile int *)(((int)stk + 20));
        FUN_0c187798();
        *(volatile int *)(((int)stk + 16));
        FUN_0c187798();
        t10 = FUN_0c179ac0();
        t13 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
        if ((int)t10 >= 0) {
            t13 = (t10 & 0x1);
        }
        *(unsigned char *)((t0 + 0x2)) = t13;
    }
    return t13;
}
