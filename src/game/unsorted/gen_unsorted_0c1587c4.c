/* game/unsorted: functions 0C1587C4-0C158C90, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c1587c4(int a4, int a5, int a6, int a7);
int FUN_0c158824(int a4);

int FUN_0c1587c4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c158824(int a4)
{
    int stk[15];
    register int t1;
    register int t2;
    register int t46;
    register int t6;
    register int t7;
    register int t9;
    register int t10;
    register int t12;
    register int t13;
    register float u15;
    register float u19;
    register float u23;
    register float u27;
    register float u28;
    register float u32;
    register float u36;
    register float u40;
    register float u43;

    t1 = FUN_0c037320(0x23, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t46 = t2;
    if (t2 == 0) {
    } else {
        FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x2, 0x23, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC1587C4;
        (((struct oAC_ushort *)(t2))->v) = 0x3F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct o48_float *)(t2))->v) = 0.600000024f;
        (((struct o44_float *)(t2))->v) = 0.600000024f;
        (((struct o40_float *)(t2))->v) = 0.600000024f;
        t6 = FUN_0c179ac0();
        t7 = ((~(((~t6) + 0x1) & 0xF)) + 0x1);
        if ((int)t6 >= 0) {
            t7 = (t6 & 0xF);
        }
        *(unsigned int *)((((int)stk + 0) + 0x0)) = (((t7 << 8) << 2) << 2);
        t9 = FUN_0c179ac0();
        t10 = ((~(((~t9) + 0x1) & 0xF)) + 0x1);
        if ((int)t9 >= 0) {
            t10 = (t9 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (((t10 << 8) << 2) << 2);
        t12 = FUN_0c179ac0();
        t13 = ((~(((~t12) + 0x1) & 0xF)) + 0x1);
        if ((int)t12 >= 0) {
            t13 = (t12 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = (((t13 << 8) << 2) << 2);
        u15 = (((struct o0_float *)0xC158A30)->v);
        u19 = ((((struct o28_float *)(a4))->v));
        u19 = u19 + u15 * (math_cos_angle16((*(int *)((((int)stk + 0) + 0x0)))));
        (((struct o28_float *)(t2))->v) = u19;
        u23 = ((((struct o2C_float *)(a4))->v));
        u23 = u23 + u15 * (math_sin_angle16((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))));
        (((struct o2C_float *)(t2))->v) = u23;
        u27 = ((((struct o30_float *)(a4))->v));
        u27 = u27 + u15 * (math_sin_angle16((*(int *)(((((int)stk + 0) + 0x8) + 0x0)))));
        (((struct o30_float *)(t2))->v) = u27;
        u28 = (((struct oC_float *)0xC158A30)->v);
        u32 = ((((struct o28_float *)(a4))->v));
        u32 = u32 + u28 * (math_cos_angle16((*(int *)((((int)stk + 0) + 0x0)))));
        (((struct o18_float *)(((int)stk + 0)))->v) = u32;
        u36 = ((((struct o2C_float *)(a4))->v));
        u36 = u36 + u28 * (math_sin_angle16((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))));
        (((struct o4_float *)((((int)stk + 0) + 0x18)))->v) = u36;
        u40 = ((((struct o30_float *)(a4))->v));
        u40 = u40 + u28 * (math_sin_angle16((*(int *)(((((int)stk + 0) + 0x8) + 0x0)))));
        (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = u40;
        FUN_0c0e2390((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x18), (t2 + 0x28));
        u43 = (((struct o14_float *)0xC158A30)->v);
        (((struct o4C_float *)(t2))->v) = (((((struct o24_float *)(((int)stk + 0)))->v)) / u43);
        (((struct o50_float *)(t2))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x24)))->v)) / u43);
        (((struct o54_float *)(t2))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x24)))->v)) / u43);
        t46 = 0x54;
    }
    return t46;
}
