/* game/unsorted: functions 0C083620-0C0838CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3780_float { char p[0x3780]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o384C_uint { char p[0x384C]; unsigned int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o50_short { char p[0x50]; short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c07c4b0(int, int);
int FUN_0c07d6cc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c083620(int a4, int a5, int a6, int a7);

int FUN_0c083620(int a4, int a5, int a6, int a7)
{
    int stk[6];
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t14;
    register int t16;
    register int t17;
    register int t23;
    register int t24;
    register int t30;
    register int t31;
    register int t37;
    register int t39;
    register int t43;
    register int t44;
    register int t47;
    register int t49;
    register int t53;
    register int t54;
    register int t55;
    register float u63;
    register int t64;
    register int t65;
    register int t67;
    register int t68;
    register int t69;
    register int t74;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x15;
    FUN_0c081dfc(a4, a5, a6, a7);
    FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x5);
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d6cc(a4));
    t4 = *(signed char *)(((int)stk + 12));
    t5 = *(signed char *)(((t4 - 1) + 0xC1C5DB0));
    (((struct o374A_uchar *)(a4))->v) = 0x1;
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    if ((t4 != 10) && (t4 != 11)) {
        t6 = *(signed char *)((a4 + 0x2));
        t7 = *(signed char *)(((0x371C + a4) + 0x0));
        *(unsigned short *)((a4 + 0x1C)) = ((((struct o50_short *)((((((((t6 << 1) + t6) << 2) << 2) << 2) + 0xC259E54) + (((((t7 << 1) + t7) << 2) << 2) << 1))))->v));
        t14 = *(short *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8));
        t16 = *(signed char *)((a4 + 0x2));
        t17 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((unsigned short)(t14 + (((((signed char)t5 << 8) << 2) << 2) << 1)))) * ((((struct o48_float *)((((((((t16 << 1) + t16) << 2) << 2) << 2) + 0xC259E54) + (((((t17 << 1) + t17) << 2) << 2) << 1))))->v)));
        t23 = *(signed char *)((a4 + 0x2));
        t24 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((unsigned short)(t14 + (((((signed char)t5 << 8) << 2) << 2) << 1)))) * ((((struct o48_float *)((((((((t23 << 1) + t23) << 2) << 2) << 2) + 0xC259E54) + (((((t24 << 1) + t24) << 2) << 2) << 1))))->v)));
        t30 = *(signed char *)((a4 + 0x2));
        t31 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o58_float *)(a4))->v) = ((math_sin_angle16((unsigned short)(t14 + (((((signed char)t5 << 8) << 2) << 2) << 1)))) * ((((struct o4C_float *)((((((((t30 << 1) + t30) << 2) << 2) << 2) + 0xC259E54) + (((((t31 << 1) + t31) << 2) << 2) << 1))))->v)));
        t37 = *(signed char *)((a4 + 0x2));
        t39 = *(signed char *)((a4 + 0x371C));
        (((struct o60_float *)(a4))->v) = ((math_cos_angle16((unsigned short)(t14 + (((((signed char)t5 << 8) << 2) << 2) << 1)))) * ((((struct o4C_float *)(((0xC259E54 + (((((t37 << 1) + t37) << 2) << 2) << 2)) + (((((t39 << 1) + t39) << 2) << 2) << 1))))->v)));
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        t43 = *(int *)((a4 + 0x38));
        t44 = (unsigned short)((t43 - (unsigned short)(t14 + (((((signed char)t5 << 8) << 2) << 2) << 1))) + 0x1000);
        if ((int)(unsigned short)((t43 - (unsigned short)(t14 + (((((signed char)t5 << 8) << 2) << 2) << 1))) + 0x1000) < 0) {
            t44 = ((unsigned short)((t43 - (unsigned short)(t14 + (((((signed char)t5 << 8) << 2) << 2) << 1))) + 0x1000) + 0x1FFF);
        }
        *(unsigned char *)(((int)stk + 16)) = ((int)t44 >> 13);
        t47 = *(signed char *)((0xC1C5DA8 + (signed char)((int)t44 >> 13)));
        *(unsigned int *)(((int)stk + 12)) = (unsigned char)t47;
        *(int *)((int)stk + 8) = (unsigned char)t47;
        *(int *)((int)stk + 4) = 0x0;
        t49 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 20)) = t49;
        *(int *)((int)stk + 0) = t49;
        FUN_0c07e79c(a4, (*(int *)(((int)stk + 20))), 0x0, (*(int *)(((int)stk + 12))), t49, 0x0, (unsigned char)t47);
        t53 = *(int *)(((0x118 + a4) + 0x4));
        t54 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t53))->v) = 1.0f;
        (((struct o9C_float *)(t53))->v) = 1.0f;
        (((struct oA0_float *)(t54))->v) = 1.0f;
        (((struct o9C_float *)(t54))->v) = 1.0f;
        t55 = *(int *)(((0x118 + a4) + 0x4));
        t74 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t55))->v) = 1.0f;
        (((struct o98_float *)(t74))->v) = 1.0f;
        (((struct o94_float *)(t55))->v) = 1.0f;
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o3850_uint *)(a4))->v) = (FUN_0c07d6cc(a4));
        if (t4 == 10) {
            (((struct o384C_uint *)(a4))->v) = 0x4000;
        } else {
            (((struct o384C_uint *)(a4))->v) = 0xC000;
        }
        u63 = ((math_sin_angle16(0x222)) * ((((struct o3780_float *)(a4))->v)));
        (((struct o3790_float *)(a4))->v) = (u63 * (1.0f + 1.0f));
        (((struct o15_uchar *)(a4))->v) = 0x1;
        *(int *)((int)stk + 8) = 0x13;
        *(int *)((int)stk + 4) = 0x0;
        t64 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t64;
        t65 = t64;
        *(int *)((int)stk + 0) = t65;
        FUN_0c07e79c(a4, t64, 0x0, 0x13, t65, 0x0, 0x13);
        t67 = *(int *)(((0x118 + a4) + 0x4));
        t68 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t67))->v) = 1.0f;
        (((struct o9C_float *)(t67))->v) = 1.0f;
        (((struct oA0_float *)(t68))->v) = 1.0f;
        (((struct o9C_float *)(t68))->v) = 1.0f;
        t69 = *(int *)(((0x118 + a4) + 0x4));
        t74 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t69))->v) = 1.0f;
        (((struct o98_float *)(t74))->v) = 1.0f;
        (((struct o94_float *)(t69))->v) = 1.0f;
    }
    (((struct o94_float *)(t74))->v) = 1.0f;
    return 0x94;
}
