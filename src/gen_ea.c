/* Straight-line functions with calls and guards (batch gen_ea): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c01cc56(int, int);
int FUN_0c01cd2c(int);
int FUN_0c02b3ba(float, float, float);
int FUN_0c02b502(int);
int FUN_0c05aab6(int, int);
int FUN_0c05b048(int, int);
int FUN_0c05b05c(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c162f8a(int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c17a4c0(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c187d88(int);
int dbg_printf(int, ...);
int dbg_set_cell_size(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int strncpy(int, int, int);
extern int thunk_FUN_0c03f346();
int FUN_0c01a502(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c051c48(void);
int FUN_0c0c7188(int a4);


int FUN_0c051c48(void)
{
    register int t0;

    if ((*(signed char *)0xC478C03) == 0) {
    } else {
        dbg_set_cell_size(0x8, 0x8);
        FUN_0c17a4c0(0x5, 0xF);
        dbg_printf(0xC1B8D94);
        FUN_0c17a4c0(0x5, 0x10);
        dbg_printf(0xC1B8DA0);
        FUN_0c17a4c0(0x5, 0x12);
        dbg_printf(0xC1B8DAC);
        FUN_0c17a4c0(0x5, 0x13);
        dbg_printf(0xC1B8DB8);
        FUN_0c17a4c0(0x5, 0x15);
        dbg_printf(0xC1B8DC4);
        FUN_0c17a4c0(0x5, 0x16);
        dbg_printf(0xC1B8DD0);
        FUN_0c17a4c0(0x5, 0x18);
        dbg_printf(0xC1B8DDC);
        FUN_0c17a4c0(0x5, 0x19);
        dbg_printf(0xC1B8DE8);
        FUN_0c17a4c0(0x5, 0x1B);
        dbg_printf(0xC1B8DF4);
        FUN_0c17a4c0(0x5, 0x1C);
        dbg_printf(0xC1B8E00);
        FUN_0c17a4c0(0x5, 0x1E);
        dbg_printf(0xC1B8E0C);
        FUN_0c17a4c0(0x5, 0x1F);
        dbg_printf(0xC1B8E18);
        FUN_0c17a4c0(0x5, 0x21);
        dbg_printf(0xC1B8E24);
        FUN_0c17a4c0(0x5, 0x22);
        dbg_printf(0xC1B8E30);
        FUN_0c17a4c0(0x5, 0x26);
        dbg_printf(0xC1B8E3C);
        FUN_0c17a4c0(0xF, 0xD);
        *(volatile signed char *)0xC541105;
        *(volatile signed char *)0xC541104;
        *(volatile signed char *)0xC541103;
        *(volatile signed char *)0xC541102;
        *(volatile signed char *)0xC541101;
        *(volatile signed char *)0xC541100;
        dbg_printf(0xC1B8E48);
        FUN_0c17a4c0(0xF, 0xE);
        *(volatile signed char *)0xC541109;
        *(volatile signed char *)0xC541108;
        *(volatile signed char *)0xC541107;
        *(volatile signed char *)0xC541106;
        dbg_printf(0xC1B8E5C);
        FUN_0c17a4c0(0xF, 0xF);
        *(volatile float *)0xC5411C0;
        *(volatile float *)0xC5411BC;
        *(volatile float *)0xC5411B8;
        dbg_printf(0xC1B8E68);
        FUN_0c17a4c0(0xF, 0x10);
        *(volatile float *)0xC5411CC;
        *(volatile float *)0xC5411C8;
        *(volatile float *)0xC5411C4;
        dbg_printf(0xC1B8E68);
        FUN_0c17a4c0(0xF, 0x11);
        *(volatile float *)0xC5411D8;
        *(volatile float *)0xC5411D4;
        *(volatile float *)0xC5411D0;
        dbg_printf(0xC1B8E68);
        FUN_0c17a4c0(0xF, 0x12);
        *(volatile float *)0xC5411F0;
        *(volatile float *)0xC5411EC;
        *(volatile float *)0xC5411E8;
        dbg_printf(0xC1B8E68);
        FUN_0c17a4c0(0xF, 0x13);
        *(volatile float *)0xC5411FC;
        *(volatile float *)0xC5411F8;
        *(volatile float *)0xC5411F4;
        dbg_printf(0xC1B8E68);
        FUN_0c17a4c0(0xF, 0x14);
        *(volatile float *)0xC541208;
        *(volatile float *)0xC541204;
        *(volatile float *)0xC541200;
        dbg_printf(0xC1B8E68);
        FUN_0c17a4c0(0xF, 0x15);
        *(volatile int *)0xC541298;
        dbg_printf(0xC1B8E74);
        FUN_0c17a4c0(0xF, 0x16);
        *(volatile int *)0xC5412B0;
        dbg_printf(0xC1B8E74);
        FUN_0c17a4c0(0xF, 0x17);
        *(volatile int *)0xC5412E0;
        dbg_printf(0xC1B8E74);
        FUN_0c17a4c0(0xF, 0x18);
        *(volatile int *)0xC54129C;
        dbg_printf(0xC1B8E74);
        FUN_0c17a4c0(0xF, 0x19);
        *(volatile int *)0xC5412B4;
        dbg_printf(0xC1B8E74);
        FUN_0c17a4c0(0xF, 0x1A);
        *(volatile int *)0xC5412E4;
        dbg_printf(0xC1B8E74);
        FUN_0c17a4c0(0xF, 0x1B);
        *(volatile int *)0xC5412A0;
        dbg_printf(0xC1B8E74);
        FUN_0c17a4c0(0xF, 0x1C);
        *(volatile int *)0xC5412B8;
        dbg_printf(0xC1B8E74);
        FUN_0c17a4c0(0xF, 0x1D);
        *(volatile int *)0xC5412E8;
        dbg_printf(0xC1B8E74);
        FUN_0c17a4c0(0xF, 0x1E);
        *(volatile float *)0xC541288;
        dbg_printf(0xC1B8E78);
        FUN_0c17a4c0(0xF, 0x1F);
        *(volatile float *)0xC54128C;
        dbg_printf(0xC1B8E78);
        FUN_0c17a4c0(0xF, 0x21);
        t0 = (((struct o0_int *)0xC54133C)->v);
        *(volatile float *)((t0 + 0x8));
        *(volatile float *)((t0 + 0x4));
        *(volatile float *)((t0 + 0x0));
        dbg_printf(0xC1B8E68);
        FUN_0c17a4c0(0xF, 0x22);
        t0 = (((struct o4_int *)0xC54133C)->v);
        *(volatile float *)((t0 + 0x8));
        *(volatile float *)((t0 + 0x4));
        *(volatile float *)((t0 + 0x0));
        dbg_printf(0xC1B8E68);
        FUN_0c17a4c0(0xF, 0x24);
        *(volatile int *)0xC541110;
        dbg_printf(0xC1B8E7C);
        FUN_0c17a4c0(0xF, 0x26);
        *(volatile int *)0xC5413E8;
        t0 = (dbg_printf(0xC1B8E74));
    }
    return t0;
}

int FUN_0c0c7188(int a4)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t4;
    register int t7;
    register int t8;
    register int t9;
    register int t18;
    register int t21;
    register int t22;
    register int t23;
    register int t26;
    register float u28;
    register float u31;
    register float u34;
    register float u36;
    register float u39;
    register float u41;
    register int t42;
    register float u43;
    register float u46;
    register int t49;
    register int t50;
    register int t51;
    register int t54;
    register float u56;
    register float u59;
    register float u62;
    register float u64;
    register float u67;
    register float u69;
    register int t70;
    register float u72;
    register float u74;
    register int t77;
    register int t78;
    register int t79;
    register int t82;
    register float u84;
    register float u87;
    register float u90;
    register float u92;
    register float u95;
    register float u97;
    register float u100;
    register float u102;
    register float u105;
    register float t108;
    register float t110;
    register float u113;
    register float u114;
    register float u115;
    register float t117;
    register float t119;
    register float u122;
    register float u123;
    register float u124;
    register float u127;
    register float u130;
    register int t133;
    register int t136;
    register int t142;
    register int t145;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = (((struct oC8_int *)(a4))->v);
    (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x2AAB);
    if (((*(int *)0xC542260) & 0x1) != 0) {
        t4 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t4 + 0x1);
        if ((int)(short)(t4 + 0x1) >= (int)0x4) {
            (((struct o20_ushort *)(a4))->v) = 0x0;
        }
        *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x1;
        t7 = (((struct oD8_int *)(a4))->v);
        *(int *)((int)stk + 0) = (0x80 + t7);
        t8 = FUN_0c179ac0();
        t9 = ((~(((~t8) + 0x1) & 0xFFFF)) + 0x1);
        if ((int)t8 >= 0) {
            t9 = (t8 & 0xFFFF);
        }
        (((struct o80_uint *)(t7))->v) = t9;
    } else {
        *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    t18 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t18 + 0x1);
    if ((int)(short)(t18 + 0x1) >= (int)0x14) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    t21 = *(short *)((a4 + 0x1C));
    t22 = (int)((int)t21 / (int)0x4);
    t23 = ((~(((~t21) + 0x1) & 0x3)) + 0x1);
    if ((int)t21 >= 0) {
        t23 = (t21 & 0x3);
    }
    *(unsigned int *)(((int)stk + 4)) = t23;
    t26 = *(int *)(((int)stk + 4));
    u28 = *(float *)((((((t22 << 1) + t22) << 2) + 0xC273394) + 0x0));
    u31 = u28;
    u31 = u31 + (float)t26 * (((((((struct oC_float *)(((((t22 << 1) + t22) << 2) + 0xC273394)))->v)) - u28) / 4.0f));
    (((struct o6C_float *)(((((struct oCC_int *)(a4))->v))))->v) = u31;
    u34 = (((struct o4_float *)(((((t22 << 1) + t22) << 2) + 0xC273394)))->v);
    u36 = u34;
    u36 = u36 + (float)t26 * (((((((struct o4_float *)((((((t22 << 1) + t22) << 2) + 0xC273394) + 0xC)))->v)) - u34) / 4.0f));
    (((struct o70_float *)(((((struct oCC_int *)(a4))->v))))->v) = u36;
    u39 = (((struct o8_float *)(((((t22 << 1) + t22) << 2) + 0xC273394)))->v);
    u41 = u39;
    u41 = u41 + (float)t26 * (((((((struct o8_float *)((((((t22 << 1) + t22) << 2) + 0xC273394) + 0xC)))->v)) - u39) / 4.0f));
    (((struct o74_float *)(((((struct oCC_int *)(a4))->v))))->v) = u41;
    t42 = (((struct oCC_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 4)) = ((t22 << 2) + 0xC2733DC);
    u43 = *(float *)((((t22 << 2) + 0xC2733DC) + 0x0));
    u46 = u43;
    u46 = u46 + (float)t26 * (((((((struct o4_float *)(((t22 << 2) + 0xC2733DC)))->v)) - u43) / 4.0f));
    (((struct o78_uint *)(t42))->v) = ((int)((((u46 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t49 = (int)((int)((*(short *)((a4 + 0x1C))) + 0x7) % (int)0x14);
    t50 = (int)((int)t49 / (int)0x4);
    t51 = ((~(((~t49) + 0x1) & 0x3)) + 0x1);
    if ((int)t49 >= 0) {
        t51 = (t49 & 0x3);
    }
    *(unsigned int *)(((int)stk + 4)) = t51;
    t54 = *(int *)(((int)stk + 4));
    u56 = *(float *)((((((t50 << 1) + t50) << 2) + 0xC273394) + 0x0));
    u59 = u56;
    u59 = u59 + (float)t54 * (((((((struct oC_float *)(((((t50 << 1) + t50) << 2) + 0xC273394)))->v)) - u56) / 4.0f));
    (((struct o6C_float *)(((((struct oD0_int *)(a4))->v))))->v) = u59;
    u62 = (((struct o4_float *)(((((t50 << 1) + t50) << 2) + 0xC273394)))->v);
    u64 = u62;
    u64 = u64 + (float)t54 * (((((((struct o4_float *)((((((t50 << 1) + t50) << 2) + 0xC273394) + 0xC)))->v)) - u62) / 4.0f));
    (((struct o70_float *)(((((struct oD0_int *)(a4))->v))))->v) = u64;
    u67 = (((struct o8_float *)(((((t50 << 1) + t50) << 2) + 0xC273394)))->v);
    u69 = u67;
    u69 = u69 + (float)t54 * (((((((struct o8_float *)((((((t50 << 1) + t50) << 2) + 0xC273394) + 0xC)))->v)) - u67) / 4.0f));
    (((struct o74_float *)(((((struct oD0_int *)(a4))->v))))->v) = u69;
    t70 = (((struct oD0_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 4)) = ((t50 << 2) + 0xC2733DC);
    u72 = *(float *)((((t50 << 2) + 0xC2733DC) + 0x0));
    u74 = u72;
    u74 = u74 + (float)t54 * (((((((struct o4_float *)(((t50 << 2) + 0xC2733DC)))->v)) - u72) / 4.0f));
    (((struct o78_uint *)(t70))->v) = ((int)((((u74 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t77 = (int)((int)((*(short *)((a4 + 0x1C))) + 0xE) % (int)0x14);
    t78 = (int)((int)t77 / (int)0x4);
    t79 = ((~(((~t77) + 0x1) & 0x3)) + 0x1);
    if ((int)t77 >= 0) {
        t79 = (t77 & 0x3);
    }
    *(unsigned int *)(((int)stk + 4)) = t79;
    t82 = *(int *)(((int)stk + 4));
    u84 = *(float *)((((((t78 << 1) + t78) << 2) + 0xC273394) + 0x0));
    u87 = u84;
    u87 = u87 + (float)t82 * (((((((struct oC_float *)(((((t78 << 1) + t78) << 2) + 0xC273394)))->v)) - u84) / 4.0f));
    (((struct o6C_float *)(((((struct oD4_int *)(a4))->v))))->v) = u87;
    u90 = (((struct o4_float *)(((((t78 << 1) + t78) << 2) + 0xC273394)))->v);
    u92 = u90;
    u92 = u92 + (float)t82 * (((((((struct o4_float *)((((((t78 << 1) + t78) << 2) + 0xC273394) + 0xC)))->v)) - u90) / 4.0f));
    (((struct o70_float *)(((((struct oD4_int *)(a4))->v))))->v) = u92;
    u95 = (((struct o8_float *)(((((t78 << 1) + t78) << 2) + 0xC273394)))->v);
    u97 = u95;
    u97 = u97 + (float)t82 * (((((((struct o8_float *)((((((t78 << 1) + t78) << 2) + 0xC273394) + 0xC)))->v)) - u95) / 4.0f));
    (((struct o74_float *)(((((struct oD4_int *)(a4))->v))))->v) = u97;
    u100 = *(float *)((((t78 << 2) + 0xC2733DC) + 0x0));
    u102 = u100;
    u102 = u102 + (float)t82 * (((((((struct o4_float *)(((t78 << 2) + 0xC2733DC)))->v)) - u100) / 4.0f));
    (((struct o78_uint *)(((((struct oD4_int *)(a4))->v))))->v) = ((int)((((u102 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    if ((*(short *)((a4 + 0x1E))) == 0) {
        u105 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
        FUN_0c187798(0xFFFF, ((t78 << 2) + 0xC2733DC), 0xC2733DC);
        t108 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        t110 = math_sin_angle16(((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))) + 0x4000));
        u113 = (t110 * 13.0f);
        u114 = (((t108 * 185.0f)) - u113);
        u115 = (*(float *)(((int)stk + 8)));
        u115 = u115 + u105 * u114;
        *(float *)(((int)stk + 8)) = u115;
        t117 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        t119 = math_cos_angle16(((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))) + 0x4000));
        u122 = (t119 * 13.0f);
        u123 = (((t117 * 185.0f)) - u122);
        u124 = (*(float *)(((int)stk + 16)));
        u124 = u124 + u105 * u123;
        *(float *)(((int)stk + 16)) = u124;
        u127 = 92.0f;
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x16))) == 0) {
            u127 = 80.0f;
        }
        u130 = (*(float *)(((int)stk + 12)));
        u130 = u130 + u127 * u105;
        *(float *)(((int)stk + 12)) = u130;
        FUN_0c162f8a((*(signed char *)((a4 + 0x1))), (((int)stk + 4) + 0x4), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x5);
        t133 = FUN_0c0c213c(a4);
        if (t133 != 0) {
            t145 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
        } else {
            t136 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t136 + 0x1);
            t145 = (short)(t136 + 0x1);
            if ((int)(short)(t136 + 0x1) >= (int)0x5) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t145 = 0x0;
            }
        }
    } else {
        t142 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t142 + 0x1);
        t145 = (short)(t142 + 0x1);
        if ((int)(short)(t142 + 0x1) >= (int)0x5) {
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t145 = 0x0;
        }
    }
    return t145;
}
