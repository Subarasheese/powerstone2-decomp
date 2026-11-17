/* game/unsorted: functions 0C0E2A8C-0C0E2CB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c0e2a8c(int a4, int a5, int a6, int a7);
int FUN_0c0e2b30(int a4);

int FUN_0c0e2a8c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(signed char *)0xC54223C) == 2) {
        t0 = *(signed char *)((a4 + 0x14));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        }
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u0 + 0.266666681f);
            (((struct o48_float *)(a4))->v) = (u0 + 0.266666681f);
            (((struct o44_float *)(a4))->v) = (u0 + 0.266666681f);
            t0 = 0x40;
            if (!(1.0f > ((((struct o40_float *)(a4))->v)))) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            return t0;
        }
        FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 - 0.0857142881f);
        (((struct o48_float *)(a4))->v) = (u0 - 0.0857142881f);
        (((struct o44_float *)(a4))->v) = (u0 - 0.0857142881f);
        if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        return 0x40;
    }
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
}

int FUN_0c0e2b30(int a4)
{
    int stk[4];
    register int t1;
    register int t2;
    register int t28;
    register int t5;
    register int t6;
    register int t8;
    register int t9;
    register float t13;
    register float u15;
    register float u17;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t1 = FUN_0c037320(0x76, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t28 = t2;
    if (t2 == 0) {
    } else {
        FUN_0c03733c(t2, 0x76, (*(int *)0xC4B410C));
        *(unsigned int *)((t2 + 0x4)) = 0xC0E2A8C;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = 0x31;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct o48_float *)(t2))->v) = 0.0f;
        (((struct o44_float *)(t2))->v) = 0.0f;
        (((struct o40_float *)(t2))->v) = 0.0f;
        t5 = FUN_0c179ac0();
        t6 = ((~(((~t5) + 0x1) & 0x3F)) + 0x1);
        if ((int)t5 >= 0) {
            t6 = (t5 & 0x3F);
        }
        t8 = FUN_0c179ac0();
        t9 = ((~(((~t8) + 0x1) & 0x3F)) + 0x1);
        if ((int)t8 >= 0) {
            t9 = (t8 & 0x3F);
        }
        *(float *)(((int)stk + 8)) = ((math_sin_angle16((0xFFFFFC00 + (((t6 << 2) << 2) << 2)))) * 300.0f);
        t13 = math_cos_angle16((0xFFFFFC00 + (((t6 << 2) << 2) << 2)));
        u15 = (t13 * 300.0f);
        *(float *)(((int)stk + 12)) = (u15 * (math_cos_angle16((0xFFFFE000 + ((t9 << 8) << 1)))));
        u17 = (t13 * 300.0f);
        *(float *)(((int)stk + 4)) = (u17 * (math_sin_angle16((0xFFFFE000 + ((t9 << 8) << 1)))));
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        (((struct o30_float *)(t2))->v) = (((((struct o30_float *)(t2))->v)) + 200.0f);
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) - 50.0f);
        FUN_0c17c130((t2 + 0x28), (t2 + 0x28), (((int)stk + 0) + 0x4));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) / -35.0f);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) / -35.0f);
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) / -35.0f);
        FUN_0c187798();
        (((struct o7C_uint *)(((((struct oC4_int *)(t2))->v))))->v) = 0xFFFFC000;
        t28 = 0x7C;
    }
    return t28;
}
