/* game/unsorted: functions 0C145C74-0C147656, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o41C_float { char p[0x41C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c145c74(int, int);
int FUN_0c145d1c(int, int);
int FUN_0c145eb2(int, int, int);
int FUN_0c1470ea(int, int, int, float);
int FUN_0c147222(int, int, int, float);
float FUN_0c179b10(float);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
int FUN_0c1472dc(int a4, int a5, int a6);

int FUN_0c1472dc(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t3;
    register int t5;
    register int t6;
    register int t13;
    register int t16;
    int t18;
    register int t20;
    register int t27;
    register int t28;
    register int t29;
    register int t31;
    register int t44;
    register int t48;
    register int t65;
    register int t71;
    register int t72;
    register int t92;
    register int t96;
    register float t100;
    register int t118;
    register int t127;
    register int t128;
    register int t132;
    register int t138;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    FUN_0c058adc((((int)stk + 8) + 0x14), (((int)stk + 8) + 0x14), ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x9A0));
    t3 = ((int (*)(void))(FUN_0c187798))();
    if ((int)(*(signed char *)((a4 + 0x14))) <= (int)0x2) {
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x3C;
        t5 = *(short *)((a4 + 0x1C));
        *(unsigned int *)(((int)stk + 12)) = (0xC4 + a4);
        t6 = *(int *)(((0xC4 + a4) + 0x8));
        *(unsigned int *)(((int)stk + 8)) = t6;
        FUN_0c0588bc(((*(int *)(((*(int *)(((int)stk + 12))) + 0xC))) + 0x6C), ((*(int *)(((int)stk + 8))) + 0x6C), (t6 + 0x84), t5, 0x3C, 0x0);
    } else {
        *(volatile int *)(((0xC4 + a4) + 0x8));
        *(volatile int *)(((0xC4 + a4) + 0xC));
        t13 = ((int (*)(int))(FUN_0c187798))((0xC4 + a4));
    }
    t16 = (((struct oD0_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = t16;
    t18 = FUN_0c145eb2(((*(int *)(((int)stk + 8))) + 0x84), (t16 + 0x6C), (a4 + 0x28));
    if (t18 == 0) {
        t20 = ((int (*)(int))(FUN_0c187798))(((((struct oD0_int *)(a4))->v)));
    }
    (((struct o88_float *)(((((struct oD0_int *)(a4))->v))))->v) = 0.0f;
    FUN_0c0e2390((((int)stk + 8) + 0x14), (((((struct oD0_int *)(a4))->v)) + 0x84), (((int)stk + 8) + 0x14));
    FUN_0c145c74((a4 + 0x34), (((int)stk + 8) + 0x14));
    t27 = *(signed char *)((a4 + 0x14));
    if (t27 != 0) {
        if (t27 != 1) {
            if (t27 != 2) {
                if (t27 == 3) {
                    t28 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t28 - 1);
                    if ((int)(short)(t28 - 1) >= 0) {
                        t29 = (((struct oC4_int *)(a4))->v);
                        (((struct o8C_float *)(t29))->v) = (((((struct o8C_float *)(t29))->v)) - 0.0799999982f);
                        t31 = (((struct oC4_int *)(a4))->v);
                        (((struct o74_float *)(t31))->v) = (((((struct o74_float *)(t31))->v)) + 320.0f);
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                        FUN_0c059e60((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x26);
                    }
                    t44 = (((struct oC4_int *)(a4))->v);
                    *(unsigned short *)((t44 + 0x6)) = ((*(short *)((t44 + 0x6))) | 0x1000);
                    t138 = (FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v))));
                } else {
                    if (t27 == 4) {
                        t48 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t48 + 0x1);
                        t138 = (short)(t48 + 0x1);
                        if ((int)(short)(t48 + 0x1) > (int)0x28) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t138 = 0x14;
                        }
                    } else {
                        t138 = t27;
                        if (t27 == 5) {
                            t138 = (FUN_0c03f346(a4));
                        }
                    }
                }
            } else {
                t65 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t65))->v) = (((((struct o80_int *)(t65))->v)) + 0x1800);
                FUN_0c0e2390((((int)stk + 8) + 0x14), (((((struct oD0_int *)(a4))->v)) + 0x84), (a4 + 0x28));
                (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((FUN_0c0e2340((((int)stk + 8) + 0x14))) / 4000.0f);
                t71 = *(short *)((a4 + 0x1C));
                t72 = ((~(((~t71) + 0x1) & 0x7)) + 0x1);
                if ((int)t71 >= 0) {
                    t72 = (t71 & 0x7);
                }
                if (t72 == 0) {
                    FUN_0c147222((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x2))), a4, ((((struct o41C_float *)(a4))->v)));
                }
                if (((0x1 & t18) == 0) && ((t18 & 0x2) == 0)) {
                } else {
                    FUN_0c1470ea((*(signed char *)((a4 + 0x2))), (*(signed char *)((a4 + 0x1))), (((((struct oD0_int *)(a4))->v)) + 0x84), ((((struct o41C_float *)(a4))->v)));
                }
                t92 = (((struct oC4_int *)(a4))->v);
                *(unsigned short *)((t92 + 0x6)) = ((*(short *)((t92 + 0x6))) | 0x1000);
                FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
                t96 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t96 + 0x1);
                t138 = (short)(t96 + 0x1);
                if ((int)(short)(t96 + 0x1) > (int)0x3C) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t100 = FUN_0c179b10((((((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v)) / 0.0799999982f));
                    *(unsigned short *)((a4 + 0x1C)) = (int)t100;
                    t138 = (int)t100;
                }
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            t138 = 0xC4;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        t118 = ((int (*)(void))(FUN_0c187798))();
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x3, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        *(volatile int *)((a4 + 0xC4));
        t127 = ((int (*)(void))(FUN_0c187798))();
        t128 = (((struct oC4_int *)(a4))->v);
        (((struct o84_float *)(t128))->v) = (((((struct o84_float *)(t128))->v)) * ((((struct o41C_float *)(a4))->v)));
        t132 = (((struct oC4_int *)(a4))->v);
        (((struct o88_float *)(t132))->v) = (((((struct o88_float *)(t132))->v)) * ((((struct o41C_float *)(a4))->v)));
        FUN_0c059e60((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x25);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        t138 = 0xC4;
    }
    return t138;
}
