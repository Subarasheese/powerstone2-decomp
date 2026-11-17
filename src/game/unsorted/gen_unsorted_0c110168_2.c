/* game/unsorted: functions 0C110168-0C112910, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058906(int, int, int, int, int, int);
extern int FUN_0c058968();
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c05f22c(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c104e6a(int, int);
int FUN_0c1125a0(int);
int FUN_0c1126b6(void);
int FUN_0c1171f0(int);
int FUN_0c118810(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(int, int, int, int);
extern int FUN_0c187798();
int FUN_0c110b88(int a4);
void FUN_0c111164(int a4, int a5, int a6, int a7);
int FUN_0c1116a8(int a4, int a5, int a6);
int FUN_0c112478(int a4, int a5, int a6, int a7);
int FUN_0c1126de(int a4, int a5, int a6, int a7);

int FUN_0c110b88(int a4)
{
    int stk[4];
    register int t1;
    register int t7;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t18;
    register int t38;
    register int t39;
    register int t41;
    register int t42;
    register int t43;
    register int t20;
    register int t24;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t52;
    register int t73;
    register int t74;
    register int t78;
    register int t56;
    register int t59;
    register float u82;
    register int t83;
    register int t84;
    register int t85;
    register int t92;
    register int t117;
    register int t118;
    register int t148;
    register int t149;
    register int t6;
    register float u86;
    register float u87;
    register int t146;
    register int t153;

    t12 = *(int *)0xC4739A4;
    t1 = *(int *)((t12 + 0x38));
    t7 = t1;
    if (((int)t1 >= 0) && (t6 = *(signed char *)((a4 + 0x14)), t6 != 0)) {
        t7 = *(int *)((a4 + 0x10));
        t12 = *(signed char *)((t7 + 0x14));
        (((struct o14_uchar *)(a4))->v) = t12;
    }
    t9 = *(signed char *)((a4 + 0x14));
    if (t9 != 0) {
        if (t9 == 1) {
            return t9;
        }
        if (t9 == 2) {
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            *(unsigned int *)(((int)stk + 12)) = 0xC29107C;
            t10 = t6;
            t11 = t7;
            t13 = a4;
            t14 = 0xC29107C;
            t15 = 0x0;
            for (;;) {
                t18 = *(int *)((t15 + (((*(int *)(((*(int *)0xC4739A4) + 0x34))) * 0x2C) + 0xC2911EC)));
                t38 = t18;
                t39 = t10;
                t41 = t12;
                t42 = t13;
                t43 = t14;
                if (t18 == 1) {
                    t20 = *(int *)(((*(int *)0xC4739A4) + 0x30));
                    t12 = (*(int *)((t15 + ((t20 * 0x2C) + 0xC2911EC))));
                    t38 = ((t20 * 0x2C) + 0xC2911EC);
                    if (t12 == 0) {
                        *(int *)((int)stk + 4) = 0x0;
                        t12 = (*(int *)0xC4739A4);
                        t13 = 0xC4;
                        t11 = (*(int *)((t12 + 0x3C)));
                        t13 = (t13 + a4);
                        t14 = 0xC29106C;
                        t24 = t11;
                        *(int *)((int)stk + 0) = t24;
                        t12 = (*(int *)(((int)stk + 8)));
                        t13 = (t13 + t12);
                        t12 = 0xC058A6E;
                        t13 = (*(int *)((t13 + 0x0)));
                        t13 = (t13 + 0x14);
                        t38 = (FUN_0c058a6e(t13, t14, (*(int *)(((int)stk + 12))), (*(int *)(((*(int *)0xC4739A4) + 0x38))), t24, 0x0));
                    } else {
                        t39 = t10;
                        t41 = t12;
                        t42 = t13;
                        t43 = t14;
                    }
                }
                t10 = t39;
                t11 = (*(int *)(((int)stk + 8)));
                t12 = t41;
                t13 = t42;
                t14 = t43;
                t15 = (t15 + 0x4);
                t11 = (t11 + 0x4);
                *(unsigned int *)(((int)stk + 8)) = t11;
                if ((unsigned int)t15 >= (unsigned int)0x28) {
                    break;
                }
            }
            return t38;
        }
        if (t9 == 3) {
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            *(unsigned int *)(((int)stk + 12)) = 0xC29107C;
            t47 = t6;
            t48 = t7;
            t49 = 0xC29107C;
            t50 = 0x0;
            for (;;) {
                t52 = *(int *)(((*(int *)0xC4739A4) + 0x34));
                t73 = ((t52 * 0x2C) + 0xC2911EC);
                t74 = t47;
                t78 = t49;
                if ((*(int *)((t50 + ((t52 * 0x2C) + 0xC2911EC)))) == 0) {
                    t56 = *(int *)((t50 + (((*(int *)(((*(int *)0xC4739A4) + 0x30))) * 0x2C) + 0xC2911EC)));
                    t73 = t56;
                    if (t56 == 1) {
                        *(int *)((int)stk + 4) = 0x0;
                        t48 = (*(int *)0xC4739A4);
                        t49 = 0xC29106C;
                        t59 = (*(int *)((t48 + 0x3C)));
                        *(int *)((int)stk + 0) = t59;
                        t73 = (FUN_0c058a6e(((*(int *)((((0xC4 + a4) + (*(int *)(((int)stk + 8)))) + 0x0))) + 0x14), t49, (*(int *)(((int)stk + 12))), (*(int *)(((*(int *)0xC4739A4) + 0x38))), t59, 0x0));
                    } else {
                        t74 = t47;
                        t78 = t49;
                    }
                }
                t47 = t74;
                t48 = (*(int *)(((int)stk + 8)));
                t49 = t78;
                t50 = (t50 + 0x4);
                t48 = (t48 + 0x4);
                *(unsigned int *)(((int)stk + 8)) = t48;
                if ((unsigned int)t50 >= (unsigned int)0x28) {
                    break;
                }
            }
            return t73;
        }
        if (t9 == 4) {
            u82 = *(float *)0xC110EE4;
            t83 = t6;
            t84 = 0x0;
            t85 = 0x0;
            for (;;) {
                if (((((struct o14_float *)((*(int *)((((0xC4 + a4) + t84) + 0x0)))))->v)) > u82) {
                    u87 = ((((struct o0_float *)0xC29106C)->v));
                    t92 = *(int *)((((0xC4 + a4) + t85) + 0x0));
                    u87 = (u87 - ((((struct o10_float *)0xC29106C)->v)));
                    u86 = ((((struct o14_float *)(t92))->v));
                    t83 = (*(int *)(((*(int *)0xC4739A4) + 0x3C)));
                    u87 = (u87 / (float)t83);
                    u86 = (u86 - u87);
                    (((struct o14_float *)(t92))->v) = u86;
                }
                t84 = (t84 + 0x4);
                t85 = (t85 + 0x4);
                if ((unsigned int)t84 >= (unsigned int)0x28) {
                    break;
                }
            }
            if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                return FUN_0c03f346(a4, 0xC29106C, t85, 0xC29106C);
            }
            return 0x14;
        }
        return t9;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0x4, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x2, 0x4, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x3, 0x4, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x4, 0x4, (*(int *)0xC4B410C));
    t117 = *(signed char *)((a4 + 0x2));
    t118 = *(int *)0xC4B410C;
    if (t117 != 0) {
        if (t117 != 1) {
            
            t146 = t118;
        } else {
            FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x5, 0x4, t118);
            FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x6, 0x4, (*(int *)0xC4B410C));
        }
    } else {
        FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x5, 0x4, t118);
        FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x6, 0x4, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x7, 0x4, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0x8, 0x4, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0x9, 0x4, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oE8_int *)(a4))->v)), 0xA, 0x4, (*(int *)0xC4B410C));
    }
    t148 = 0x0;
    for (;;) {
        t149 = *(int *)((((0xC4 + a4) + t148) + 0x0));
        *(unsigned short *)((t149 + 0x6)) = ((*(short *)((t149 + 0x6))) | 0x600);
        *(volatile int *)((((0xC4 + a4) + t148) + 0x0));
        FUN_0c18778c(t148, 0x600, 0xC29107C, t146);
        t148 = (t153 + 0x4);
        if ((unsigned int)t148 >= (unsigned int)0x28) {
            break;
        }
    }
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    return 0x14;
}

void FUN_0c111164(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 20) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= 0) && ((int)t1 <= (int)0x14)) {
                    FUN_0c0588bc((a4 + 0x28), 0xC2912D4, 0xC2912C8, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                    FUN_0c058906((a4 + 0x34), 0xC291304, 0xC2912F8, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                }
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= (int)0xF) && ((int)t1 <= (int)0x28)) {
                    FUN_0c0588bc((a4 + 0x40), 0xC2912EC, 0xC2912E0, (*(short *)((a4 + 0x1C))), 0x28, 0xF);
                    t1 = *(short *)((a4 + 0x1C));
                    if (((int)t1 >= (int)0xF) && ((int)t1 <= (int)0x28)) {
                        *(volatile short *)((a4 + 0x1C));
                        t1 = ((int (*)(int, int, int))(FUN_0c058968))((((((struct oC8_int *)(a4))->v)) + 0x78), 0xC29132C, 0xC291314);
                        t1 = ((int (*)(int, int, int, int, int, int, int, int))(FUN_0c058968))((((((struct oCC_int *)(a4))->v)) + 0x78), 0xC291338, 0xC291320, (*(short *)((a4 + 0x1C))), 0x28, 0xF, 0x28, 0xF);
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) + ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + ((((struct o7C_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        (((struct o6C_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_cos_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_sin_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                if ((int)t1 >= (int)0x28) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                }
                return;
            }
            if (t0 == 21) {
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= 0) && ((int)t1 <= (int)0x14)) {
                    FUN_0c0588bc((a4 + 0x28), 0xC2912D4, 0xC2912C8, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                    FUN_0c058906((a4 + 0x34), 0xC291304, 0xC2912F8, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                }
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= (int)0xF) && ((int)t1 <= (int)0x28)) {
                    FUN_0c0588bc((a4 + 0x40), 0xC2912EC, 0xC2912E0, (*(short *)((a4 + 0x1C))), 0x28, 0xF);
                    t1 = *(short *)((a4 + 0x1C));
                    if (((int)t1 >= (int)0xF) && ((int)t1 <= (int)0x28)) {
                        *(volatile short *)((a4 + 0x1C));
                        t1 = ((int (*)(int, int, int))(FUN_0c058968))((((((struct oC8_int *)(a4))->v)) + 0x78), 0xC29132C, 0xC291314);
                        t1 = ((int (*)(int, int, int, int, int, int, int, int))(FUN_0c058968))((((((struct oCC_int *)(a4))->v)) + 0x78), 0xC291338, 0xC291320, (*(short *)((a4 + 0x1C))), 0x28, 0xF, 0x28, 0xF);
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) + ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + ((((struct o7C_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        (((struct o6C_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_cos_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_sin_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                if ((int)t1 >= (int)0x28) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                }
                return;
            }
            if (t0 == 22) {
                return;
            }
            if (t0 == 30) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= (int)0x14) && ((int)t1 <= (int)0x28)) {
                    FUN_0c0588bc((a4 + 0x28), 0xC2912C8, 0xC2912D4, (*(short *)((a4 + 0x1C))), 0x28, 0x14);
                    FUN_0c058906((a4 + 0x34), 0xC2912F8, 0xC291304, (*(short *)((a4 + 0x1C))), 0x28, 0x14);
                }
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= 0) && ((int)t1 <= (int)0x19)) {
                    FUN_0c0588bc((a4 + 0x40), 0xC2912E0, 0xC2912EC, (*(short *)((a4 + 0x1C))), 0x19, 0x0);
                    t1 = *(short *)((a4 + 0x1C));
                    if (((int)t1 >= 0) && ((int)t1 <= (int)0x19)) {
                        *(volatile short *)((a4 + 0x1C));
                        t1 = ((int (*)(int, int, int))(FUN_0c058968))((((((struct oC8_int *)(a4))->v)) + 0x78), 0xC291314, 0xC29132C);
                        t1 = ((int (*)(int, int, int, int, int, int, int, int))(FUN_0c058968))((((((struct oCC_int *)(a4))->v)) + 0x78), 0xC291320, 0xC291338, (*(short *)((a4 + 0x1C))), 0x19, 0x0, 0x19, 0x0);
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) + ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + ((((struct o7C_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        (((struct o6C_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_cos_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_sin_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x28) {
                    (((struct o14_uchar *)(a4))->v) = 0x1;
                }
                return;
            }
            if (t0 == 31) {
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= (int)0x14) && ((int)t1 <= (int)0x28)) {
                    FUN_0c0588bc((a4 + 0x28), 0xC2912C8, 0xC2912D4, (*(short *)((a4 + 0x1C))), 0x28, 0x14);
                    FUN_0c058906((a4 + 0x34), 0xC2912F8, 0xC291304, (*(short *)((a4 + 0x1C))), 0x28, 0x14);
                }
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= 0) && ((int)t1 <= (int)0x19)) {
                    FUN_0c0588bc((a4 + 0x40), 0xC2912E0, 0xC2912EC, (*(short *)((a4 + 0x1C))), 0x19, 0x0);
                    t1 = *(short *)((a4 + 0x1C));
                    if (((int)t1 >= 0) && ((int)t1 <= (int)0x19)) {
                        *(volatile short *)((a4 + 0x1C));
                        t1 = ((int (*)(int, int, int))(FUN_0c058968))((((((struct oC8_int *)(a4))->v)) + 0x78), 0xC291314, 0xC29132C);
                        t1 = ((int (*)(int, int, int, int, int, int, int, int))(FUN_0c058968))((((((struct oCC_int *)(a4))->v)) + 0x78), 0xC291320, 0xC291338, (*(short *)((a4 + 0x1C))), 0x19, 0x0, 0x19, 0x0);
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) + ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + ((((struct o7C_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        (((struct o6C_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_cos_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_sin_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x28) {
                    (((struct o14_uchar *)(a4))->v) = 0x1;
                }
                return;
            }
            if (t0 == 40) {
                (((struct o14_uchar *)(a4))->v) = 0x1;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                return;
            }
            if (t0 == 50) {
                (((struct o14_uchar *)(a4))->v) = 0x1;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                return;
            }
            if (t0 == 99) {
                FUN_0c03f346(a4, a5, a6, a7);
    return;
            }
            return;
        }
        *(volatile int *)((a4 + 0xC8));
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(0x0, a5, a6);
        *(volatile int *)((a4 + 0xCC));
        t0 = ((int (*)(void))(FUN_0c187798))();
        t0 = *(int *)(((0xC4 + a4) + 0x8));
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
        t0 = *(int *)(((0xC4 + a4) + 0x8));
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct o7C_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
        t0 = *(int *)(((0xC4 + a4) + 0x8));
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
        (((struct o6C_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_cos_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_sin_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, 0xE, (*(int *)0xC4B410C));
    FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x1, 0xE, (*(int *)0xC4B410C));
    FUN_0c037498(((((struct oCC_int *)(a4))->v)), 0x2, 0xE, (*(int *)0xC4B410C));
    t0 = ((int (*)(void))(FUN_0c187798))();
    t0 = ((int (*)(void))(FUN_0c187798))();
    t0 = ((int (*)(void))(FUN_0c187798))();
}

int FUN_0c1116a8(int a4, int a5, int a6)
{
    register int t0;
    register float u0;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    u0 = (((struct o30_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (1.0f / (640.0f / (u0 + 5.0f)));
    (((struct o44_float *)(a4))->v) = (1.0f / (640.0f / (u0 + 5.0f)));
    (((struct o48_float *)(a4))->v) = (1.0f / (640.0f / (u0 + 5.0f)));
    t0 = *(int *)0xC4739A4;
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * ((float)(*(int *)((t0 + 0x38))) / (float)(*(int *)((t0 + 0x3C)))));
    t0 = *(int *)0xC4739A4;
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * ((float)(*(int *)((t0 + 0x38))) / (float)(*(int *)((t0 + 0x3C)))));
    t0 = *(int *)0xC4739A4;
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * ((float)(*(int *)((t0 + 0x38))) / (float)(*(int *)((t0 + 0x3C)))));
    FUN_0c118810(a4, (*(short *)((a4 + 0x1C))));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) / (640.0f / (u0 + 5.0f)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) / (640.0f / (u0 + 5.0f)));
    (((struct o30_float *)(a4))->v) = ((-((((struct o30_float *)(a4))->v))) + -5.0f);
    *(volatile short *)((a4 + 0x1C));
    return (((int (*)(void))(FUN_0c187798))());
}

int FUN_0c112478(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 99) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
                FUN_0c058a6e((0xB0 + a4), 0xC291458, 0xC291468, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x61F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0x3, (*(int *)0xC4B410C));
        t0 = 0xC291478;
        if ((*(signed char *)((a4 + 0x2))) == 1) {
            t0 = 0xC291484;
        }
        FUN_0c17c130((((((struct oC4_int *)(a4))->v)) + 0x6C), 0xC2A0C78, t0);
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
        FUN_0c058a6e((0xB0 + a4), 0xC291468, 0xC291458, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
        t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}

int FUN_0c1126de(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)((a4 + 0x2));
            if ((t1 != 3) && (t1 != 2)) {
                t2 = t1;
                if ((t1 != 0) && (t1 != 1)) {
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = (FUN_0c104e6a((*(short *)((a4 + 0x1C))), 0x1));
                    *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
                    t1 = FUN_0c104d70();
                    if (t1 == 0) {
                        t1 = FUN_0c104db8();
                        t3 = t1;
                        if (t1 != 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x1;
                            *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
                            FUN_0c1125a0((*(short *)((a4 + 0x1C))));
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0x0;
                            t3 = 0x0;
                        }
                        t1 = t3;
                    } else {
                        FUN_0c1125a0((*(short *)((a4 + 0x1C))));
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = 0x0;
                        t1 = 0x0;
                    }
                    t2 = t1;
                }
                t1 = t2;
            } else {
                t2 = FUN_0c05f22c(0x3FCF);
                t3 = t2;
                if (t2 == 0) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t3 = 0x14;
                }
                t1 = t3;
            }
            return t1;
        }
        if (t0 == 2) {
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
            t2 = (short)(t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0xA) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                (((struct o14_uchar *)((*(int *)0xC474C18)))->v) = 0x63;
                *(unsigned int *)0xC474C18 = 0x0;
                if ((*(short *)((a4 + 0x1C))) == 0) {
                    t1 = (((struct o22_short *)(a4))->v);
                    if ((*(signed char *)((a4 + 0x2))) == 0) {
                        FUN_0c05a080(0x1C, 0x0);
                        *(unsigned int *)(((t1 << 2) + 0xC473D04)) = ((*(int *)(((t1 << 2) + 0xC473D04))) | 0x20);
                    } else {
                        FUN_0c05a080(0x1D, 0x0);
                        *(unsigned int *)(((t1 << 2) + 0xC473D04)) = ((*(int *)(((t1 << 2) + 0xC473D04))) & 0xFFFFFFDF);
                    }
                    t1 = 0xC473D04;
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t1 = 0x14;
                }
                t2 = t1;
            }
            return t2;
        }
        if (t0 == 10) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t1 = t0;
        if (t0 == 99) {
            (((struct o14_uchar *)(a4))->v) = 0xA;
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)0xC4B410C;
    switch (t0) {
    case 0:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x10, 0x4, t1);
        t0 = *(int *)0xC4B410C;
        t1 = 0x9;
        if ((*(signed char *)0xC5429A8) == 1) {
            t1 = 0xA;
        }
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), t1, 0x3, t0);
        *(unsigned int *)0xC474C18 = (FUN_0c1126b6());
        *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
        break;
    case 1:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x11, 0x4, t1);
        *(unsigned int *)0xC474C18 = (FUN_0c1126b6());
        *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
        break;
    case 2:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0xA, t1);
        break;
    case 3:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x12, 0x4, t1);
        break;
    }
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 3) && (t0 != 2)) {
        t1 = t0;
        if ((t0 != 0) && (t0 != 1)) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = (FUN_0c104e6a((*(short *)((a4 + 0x1C))), 0x1));
            *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
            t0 = FUN_0c104d70();
            if (t0 == 0) {
                t0 = FUN_0c104db8();
                t2 = t0;
                if (t0 != 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x1;
                    *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
                    FUN_0c1125a0((*(short *)((a4 + 0x1C))));
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    t2 = 0x0;
                }
                t0 = t2;
            } else {
                FUN_0c1125a0((*(short *)((a4 + 0x1C))));
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t0 = 0x0;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c05f22c(0x3FCF);
        t2 = t1;
        if (t1 == 0) {
        } else {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t2 = 0x14;
        }
        t0 = t2;
    }
    return t0;
}
