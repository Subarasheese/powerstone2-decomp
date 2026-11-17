/* game/unsorted: functions 0C15A404-0C15B40E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c15acb0(int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c15a404(int a4, int a5, int a6, int a7);
int FUN_0c15a5aa(int a4, int a5, int a6);
int FUN_0c15a65c(int a4, int a5, int a6, int a7);
int FUN_0c15a808(int a4, int a5, int a6);
int FUN_0c15a8bc(int a4, int a5, int a6, int a7);
int FUN_0c15acfe(int a4, int a5, int a6, int a7);
int FUN_0c15af80(int a4, int a5, int a6);
int FUN_0c15b00c(int a4, int a5, int a6, int a7);

int FUN_0c15a404(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
            t0 = (((struct o4_int *)0xC2A2AB4)->v);
            u0 = ((float)((*(short *)((a4 + 0x1C))) - t0) / (float)(((((struct o8_int *)0xC2A2AB4)->v)) - t0));
            u0 = -u0;
            (((struct oBC_float *)(a4))->v) = (u0 + 1.0f);
            (((struct oB8_float *)(a4))->v) = (u0 + 1.0f);
            (((struct oB4_float *)(a4))->v) = (u0 + 1.0f);
            u0 = (((struct o34_float *)0xC2A2AB4)->v);
            u1 = (((((((struct o38_float *)0xC2A2AB4)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AB4)->v)));
            (((struct o48_float *)(a4))->v) = (u0 + u1);
            (((struct o44_float *)(a4))->v) = (u0 + u1);
            (((struct o40_float *)(a4))->v) = (u0 + u1);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = (((struct o0_int *)0xC2A2AB4)->v);
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t0)) == (t0 - 1)) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t0 = *(short *)((a4 + 0x1C));
            t1 = t0;
            if (t0 == ((((struct o8_int *)0xC2A2AB4)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
    u0 = (((struct o34_float *)0xC2A2AB4)->v);
    u1 = (((((((struct o38_float *)0xC2A2AB4)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AB4)->v)));
    (((struct o48_float *)(a4))->v) = (u0 + u1);
    (((struct o44_float *)(a4))->v) = (u0 + u1);
    (((struct o40_float *)(a4))->v) = (u0 + u1);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = (((struct o0_int *)0xC2A2AB4)->v);
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t0)) == (t0 - 1)) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 != ((((struct o4_int *)0xC2A2AB4)->v))) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c15a5aa(int a4, int a5, int a6)
{
    register int t0;
    register int t8;
    register float u7;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t8 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15A404;
        (((struct oAC_ushort *)(t0))->v) = 0x23F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798();
        FUN_0c187798();
        FUN_0c187798();
        (((struct oBC_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 1.0f;
        (((struct oB4_float *)(t0))->v) = 1.0f;
        u7 = *(float *)0xC2A2AE8;
        (((struct o48_float *)(t0))->v) = u7;
        (((struct o44_float *)(t0))->v) = u7;
        (((struct o40_float *)(t0))->v) = u7;
        t8 = 0x40;
    }
    return t8;
}

int FUN_0c15a65c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
            t0 = (((struct o4_int *)0xC2A2AC0)->v);
            u0 = ((float)((*(short *)((a4 + 0x1C))) - t0) / (float)(((((struct o8_int *)0xC2A2AC0)->v)) - t0));
            u0 = -u0;
            (((struct oBC_float *)(a4))->v) = (u0 + 1.0f);
            (((struct oB8_float *)(a4))->v) = (u0 + 1.0f);
            (((struct oB4_float *)(a4))->v) = (u0 + 1.0f);
            u0 = (((struct o30_float *)0xC2A2AC0)->v);
            u1 = (((((((struct o34_float *)0xC2A2AC0)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AC0)->v)));
            (((struct o48_float *)(a4))->v) = (u0 + u1);
            (((struct o44_float *)(a4))->v) = (u0 + u1);
            (((struct o40_float *)(a4))->v) = (u0 + u1);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = (((struct o0_int *)0xC2A2AC0)->v);
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t0)) == (t0 - 1)) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t0 = *(short *)((a4 + 0x1C));
            t1 = t0;
            if (t0 == ((((struct o8_int *)0xC2A2AC0)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
    u0 = (((struct o30_float *)0xC2A2AC0)->v);
    u1 = (((((((struct o34_float *)0xC2A2AC0)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AC0)->v)));
    (((struct o48_float *)(a4))->v) = (u0 + u1);
    (((struct o44_float *)(a4))->v) = (u0 + u1);
    (((struct o40_float *)(a4))->v) = (u0 + u1);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = (((struct o0_int *)0xC2A2AC0)->v);
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t0)) == (t0 - 1)) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 != ((((struct o4_int *)0xC2A2AC0)->v))) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c15a808(int a4, int a5, int a6)
{
    register int t0;
    register int t8;
    register float u7;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t8 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15A65C;
        (((struct oAC_ushort *)(t0))->v) = 0x23F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798();
        FUN_0c187798();
        FUN_0c187798();
        (((struct oBC_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 1.0f;
        (((struct oB4_float *)(t0))->v) = 1.0f;
        u7 = *(float *)0xC2A2AF0;
        (((struct o48_float *)(t0))->v) = u7;
        (((struct o44_float *)(t0))->v) = u7;
        (((struct o40_float *)(t0))->v) = u7;
        t8 = 0x40;
    }
    return t8;
}

int FUN_0c15a8bc(int a4, int a5, int a6, int a7)
{
    int stk[16];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t10;
    register int t11;
    register float u13;
    register int t16;
    register int t17;
    register float u22;
    register float u23;
    register float u28;
    register float u29;
    register float t32;
    register float u39;
    register float u40;
    register float u41;
    register int t55;
    register int t72;
    register int t73;
    register int t75;
    register int t76;
    register int t78;
    register int t79;
    register float u81;
    register int t84;
    register int t85;
    register float u90;
    register float u91;
    register float u96;
    register float u97;
    register float t100;
    register float u107;
    register float u108;
    register float u109;
    register int t113;
    register int t115;
    register int t116;
    register int t118;
    register int t119;
    register int t121;
    register int t122;
    register float u124;
    register int t127;
    register int t128;
    register float u133;
    register float u134;
    register float u139;
    register float u140;
    register float t143;
    register float u150;
    register float u151;
    register float u152;
    register int t166;
    register int t171;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = (((struct o4_int *)0xC2A2ACC)->v);
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t2)) != (t2 - 1)) {
            } else {
                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x10);
                t4 = FUN_0c179ac0();
                t5 = ((~(((~t4) + 0x1) & 0xF)) + 0x1);
                if ((int)t4 >= 0) {
                    t5 = (t4 & 0xF);
                }
                *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (((t5 << 8) << 2) << 2);
                *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x10) + 0x4);
                t7 = FUN_0c179ac0();
                t8 = ((~(((~t7) + 0x1) & 0xF)) + 0x1);
                if ((int)t7 >= 0) {
                    t8 = (t7 & 0xF);
                }
                *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x4) + 0x0)) = (((t8 << 8) << 2) << 2);
                *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x10) + 0x8);
                t10 = FUN_0c179ac0();
                t11 = ((~(((~t10) + 0x1) & 0xF)) + 0x1);
                if ((int)t10 >= 0) {
                    t11 = (t10 & 0xF);
                }
                *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x8) + 0x0)) = (((t11 << 8) << 2) << 2);
                *(unsigned int *)(((int)stk + 12)) = 0xC2A2AF8;
                u13 = (((struct o2C_float *)0xC2A2ACC)->v);
                t16 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2ACC)->v)));
                t17 = (((struct o8_int *)0xC2A2ACC)->v);
                u22 = ((u13 * (float)t16) / (float)t17);
                u23 = ((((struct o28_float *)(a4))->v));
                u23 = u23 + u22 * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                *(float *)(((int)stk + 52)) = u23;
                u28 = ((u13 * (float)t16) / (float)t17);
                u29 = ((((struct o2C_float *)(a4))->v));
                u29 = u29 + u28 * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
                *(float *)(((int)stk + 56)) = u29;
                t32 = math_sin_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
                u39 = (((struct o30_float *)(a4))->v);
                u40 = (((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) * (float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2ACC)->v))))) / (float)((((struct o8_int *)0xC2A2ACC)->v)));
                u41 = u39;
                u41 = u41 + u40 * t32;
                *(float *)(((int)stk + 60)) = u41;
                *(float *)(((int)stk + 40)) = 0.0f;
                *(float *)(((int)stk + 44)) = 0.0f;
                *(float *)(((int)stk + 48)) = 0.0f;
                FUN_0c187798();
                FUN_0c15a5aa((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x28), (((int)stk + 0) + 0x1C));
            }
            t55 = *(short *)((a4 + 0x1C));
            if (t55 == ((((struct o0_int *)0xC2A2ACC)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t171 = 0x14;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = (t55 + 0x1);
                t171 = (t55 + 0x1);
            }
        } else {
            t171 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x10);
        t72 = FUN_0c179ac0();
        t73 = ((~(((~t72) + 0x1) & 0xF)) + 0x1);
        if ((int)t72 >= 0) {
            t73 = (t72 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (((t73 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x10) + 0x4);
        t75 = FUN_0c179ac0();
        t76 = ((~(((~t75) + 0x1) & 0xF)) + 0x1);
        if ((int)t75 >= 0) {
            t76 = (t75 & 0xF);
        }
        *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x4) + 0x0)) = (((t76 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x10) + 0x8);
        t78 = FUN_0c179ac0();
        t79 = ((~(((~t78) + 0x1) & 0xF)) + 0x1);
        if ((int)t78 >= 0) {
            t79 = (t78 & 0xF);
        }
        *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x8) + 0x0)) = (((t79 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 8)) = 0xC2A2AF8;
        u81 = (((struct o2C_float *)0xC2A2ACC)->v);
        t84 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2ACC)->v)));
        t85 = (((struct o8_int *)0xC2A2ACC)->v);
        u90 = ((u81 * (float)t84) / (float)t85);
        u91 = ((((struct o28_float *)(a4))->v));
        u91 = u91 + u90 * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))));
        *(float *)(((int)stk + 52)) = u91;
        u96 = ((u81 * (float)t84) / (float)t85);
        u97 = ((((struct o2C_float *)(a4))->v));
        u97 = u97 + u96 * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))));
        *(float *)(((int)stk + 56)) = u97;
        t100 = math_sin_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
        u107 = (((struct o30_float *)(a4))->v);
        u108 = (((*(float *)(((*(int *)(((int)stk + 8))) + 0x0))) * (float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2ACC)->v))))) / (float)((((struct o8_int *)0xC2A2ACC)->v)));
        u109 = u107;
        u109 = u109 + u108 * t100;
        *(float *)(((int)stk + 60)) = u109;
        *(float *)(((int)stk + 40)) = 0.0f;
        *(float *)(((int)stk + 44)) = 0.0f;
        *(float *)(((int)stk + 48)) = 0.0f;
        FUN_0c187798();
        FUN_0c15a5aa((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x28), (((int)stk + 0) + 0x1C));
        t113 = (((struct o4_int *)0xC2A2ACC)->v);
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t113)) != (t113 - 1)) {
        } else {
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x10);
            t115 = FUN_0c179ac0();
            t116 = ((~(((~t115) + 0x1) & 0xF)) + 0x1);
            if ((int)t115 >= 0) {
                t116 = (t115 & 0xF);
            }
            *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (((t116 << 8) << 2) << 2);
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x10) + 0x4);
            t118 = FUN_0c179ac0();
            t119 = ((~(((~t118) + 0x1) & 0xF)) + 0x1);
            if ((int)t118 >= 0) {
                t119 = (t118 & 0xF);
            }
            *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x4) + 0x0)) = (((t119 << 8) << 2) << 2);
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x10) + 0x8);
            t121 = FUN_0c179ac0();
            t122 = ((~(((~t121) + 0x1) & 0xF)) + 0x1);
            if ((int)t121 >= 0) {
                t122 = (t121 & 0xF);
            }
            *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x8) + 0x0)) = (((t122 << 8) << 2) << 2);
            *(unsigned int *)(((int)stk + 12)) = 0xC2A2AF8;
            u124 = (((struct o2C_float *)0xC2A2ACC)->v);
            t127 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2ACC)->v)));
            t128 = (((struct o8_int *)0xC2A2ACC)->v);
            u133 = ((u124 * (float)t127) / (float)t128);
            u134 = ((((struct o28_float *)(a4))->v));
            u134 = u134 + u133 * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))));
            *(float *)(((int)stk + 52)) = u134;
            u139 = ((u124 * (float)t127) / (float)t128);
            u140 = ((((struct o2C_float *)(a4))->v));
            u140 = u140 + u139 * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
            *(float *)(((int)stk + 56)) = u140;
            t143 = math_sin_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
            u150 = (((struct o30_float *)(a4))->v);
            u151 = (((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) * (float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2ACC)->v))))) / (float)((((struct o8_int *)0xC2A2ACC)->v)));
            u152 = u150;
            u152 = u152 + u151 * t143;
            *(float *)(((int)stk + 60)) = u152;
            *(float *)(((int)stk + 40)) = 0.0f;
            *(float *)(((int)stk + 44)) = 0.0f;
            *(float *)(((int)stk + 48)) = 0.0f;
            FUN_0c187798();
            FUN_0c15a5aa((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x28), (((int)stk + 0) + 0x1C));
        }
        t166 = *(short *)((a4 + 0x1C));
        if (t166 == ((((struct o0_int *)0xC2A2ACC)->v))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t171 = 0x14;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = (t166 + 0x1);
            t171 = (t166 + 0x1);
        }
    }
    return t171;
}

int FUN_0c15acfe(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t2;
    register int t7;
    register float u24;
    register float u26;
    register float u28;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        *(unsigned int *)(((int)stk + 12)) = 0xC2A2AE4;
        *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0xC);
        t2 = 0x14;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))) {
                break;
            }
            t7 = (*(int *)(((int)stk + 8)));
            *(int *)((int)stk + 0) = t7;
            t2 = (FUN_0c179ac0());
            if ((int)t2 >= 0) {
                t2 = (t2 & 0xF);
            } else {
                t2 = (~t2);
                t2 = (t2 + 0x1);
                t2 = (t2 & 0xF);
                t2 = (~t2);
                t2 = (t2 + 0x1);
            }
            t2 = (t2 << 8);
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((t7 + 0x0)) = t2;
            t2 = (FUN_0c179ac0());
            if ((int)t2 >= 0) {
                t2 = (t2 & 0xF);
            } else {
                t2 = (~t2);
                t2 = (t2 + 0x1);
                t2 = (t2 & 0xF);
                t2 = (~t2);
                t2 = (t2 + 0x1);
            }
            t2 = (t2 << 8);
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x4) + 0x0)) = t2;
            t2 = (FUN_0c179ac0());
            if ((int)t2 >= 0) {
                t2 = (t2 & 0xF);
            } else {
                t2 = (~t2);
                t2 = (t2 + 0x1);
                t2 = (t2 & 0xF);
                t2 = (~t2);
                t2 = (t2 + 0x1);
            }
            t2 = (t2 << 8);
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x8) + 0x0)) = t2;
            t2 = 0x24;
            *(float *)((((int)stk + 4) + t2)) = (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))));
            t2 = 0x28;
            *(float *)((((int)stk + 4) + t2)) = (math_sin_angle16((*(int *)((((((int)stk + 4) + 0xC) + 0x4) + 0x0)))));
            t2 = 0x2C;
            *(float *)((((int)stk + 4) + t2)) = (math_sin_angle16((*(int *)((((((int)stk + 4) + 0xC) + 0x8) + 0x0)))));
            t2 = 0x24;
            u24 = *(float *)((((int)stk + 4) + t2));
            t2 = 0x24;
            *(float *)((((int)stk + 4) + t2)) = (u24 * ((((struct o0_float *)0xC2A2B00)->v)));
            t2 = 0x28;
            u26 = *(float *)((((int)stk + 4) + t2));
            t2 = 0x28;
            *(float *)((((int)stk + 4) + t2)) = (u26 * ((((struct o0_float *)0xC2A2B00)->v)));
            t2 = 0x2C;
            u28 = *(float *)((((int)stk + 4) + t2));
            t2 = 0x2C;
            *(float *)((((int)stk + 4) + t2)) = (u28 * ((((struct o0_float *)0xC2A2B00)->v)));
            t2 = 0x18;
            *(float *)((((int)stk + 4) + t2)) = ((((struct o4_float *)0xC2A2B00)->v));
            t2 = 0x1C;
            *(float *)((((int)stk + 4) + t2)) = ((((struct o4_float *)0xC2A2B00)->v));
            t2 = 0x20;
            *(float *)((((int)stk + 4) + t2)) = ((((struct o4_float *)0xC2A2B00)->v));
            t2 = (FUN_0c15acb0((a4 + 0x28), (((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18)));
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
        }
    }
    return (FUN_0c03f346(a4, a5, a6, a7));
}

int FUN_0c15af80(int a4, int a5, int a6)
{
    register int t0;
    register int t8;
    register float u7;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t8 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15A404;
        (((struct oAC_ushort *)(t0))->v) = 0x23F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798();
        FUN_0c187798();
        FUN_0c187798();
        (((struct oB4_float *)(t0))->v) = 0.0f;
        (((struct oB8_float *)(t0))->v) = 0.0f;
        (((struct oBC_float *)(t0))->v) = 1.0f;
        u7 = *(float *)0xC2A2AE8;
        (((struct o48_float *)(t0))->v) = u7;
        (((struct o44_float *)(t0))->v) = u7;
        (((struct o40_float *)(t0))->v) = u7;
        t8 = 0x40;
    }
    return t8;
}

int FUN_0c15b00c(int a4, int a5, int a6, int a7)
{
    int stk[17];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t10;
    register int t11;
    register float u13;
    register int t16;
    register int t17;
    register float u22;
    register float u23;
    register float u28;
    register float u29;
    register float t32;
    register float u39;
    register float u40;
    register float u41;
    register int t55;
    register int t69;
    register int t70;
    register int t72;
    register int t73;
    register int t75;
    register int t76;
    register float u78;
    register int t81;
    register int t82;
    register float u87;
    register float u88;
    register float u93;
    register float u94;
    register float t97;
    register float u104;
    register float u105;
    register float u106;
    register int t110;
    register int t112;
    register int t113;
    register int t115;
    register int t116;
    register int t118;
    register int t119;
    register float u121;
    register int t124;
    register int t125;
    register float u130;
    register float u131;
    register float u136;
    register float u137;
    register float t140;
    register float u147;
    register float u148;
    register float u149;
    register int t163;
    register int t168;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = (((struct o4_int *)0xC2A2ACC)->v);
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t2)) != (t2 - 1)) {
            } else {
                *(unsigned int *)(((int)stk + 16)) = (((int)stk + 4) + 0x10);
                t4 = FUN_0c179ac0();
                t5 = ((~(((~t4) + 0x1) & 0xF)) + 0x1);
                if ((int)t4 >= 0) {
                    t5 = (t4 & 0xF);
                }
                *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = (((t5 << 8) << 2) << 2);
                *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x10) + 0x4);
                t7 = FUN_0c179ac0();
                t8 = ((~(((~t7) + 0x1) & 0xF)) + 0x1);
                if ((int)t7 >= 0) {
                    t8 = (t7 & 0xF);
                }
                *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0)) = (((t8 << 8) << 2) << 2);
                *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x10) + 0x8);
                t10 = FUN_0c179ac0();
                t11 = ((~(((~t10) + 0x1) & 0xF)) + 0x1);
                if ((int)t10 >= 0) {
                    t11 = (t10 & 0xF);
                }
                *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x8) + 0x0)) = (((t11 << 8) << 2) << 2);
                *(unsigned int *)(((int)stk + 12)) = 0xC2A2AF8;
                u13 = (((struct o2C_float *)0xC2A2ACC)->v);
                t16 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2ACC)->v)));
                t17 = (((struct o8_int *)0xC2A2ACC)->v);
                u22 = (((u13 * (float)t16) / (float)t17) / (1.0f + 1.0f));
                u23 = ((((struct o28_float *)(a4))->v));
                u23 = u23 + u22 * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))));
                *(float *)(((int)stk + 56)) = u23;
                u28 = (((u13 * (float)t16) / (float)t17) / (1.0f + 1.0f));
                u29 = ((((struct o2C_float *)(a4))->v));
                u29 = u29 + u28 * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
                *(float *)(((int)stk + 60)) = u29;
                t32 = math_sin_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
                *(float *)(((int)stk + 0)) = t32;
                u39 = (((struct o30_float *)(a4))->v);
                u40 = (((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) * (float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2ACC)->v))))) / (float)((((struct o8_int *)0xC2A2ACC)->v)));
                u41 = u39;
                u41 = u41 + u40 * t32;
                *(float *)(((int)stk + 64)) = u41;
                *(float *)(((int)stk + 44)) = 0.0f;
                *(float *)(((int)stk + 48)) = 0.0f;
                *(float *)(((int)stk + 52)) = 0.0f;
                FUN_0c187798();
                FUN_0c15af80((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C));
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t55 = *(short *)((a4 + 0x1C));
            if (t55 == ((((struct o0_int *)0xC2A2ACC)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t168 = 0x14;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = (t55 + 0x1);
                t168 = (t55 + 0x1);
            }
        } else {
            t168 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x10);
        t69 = FUN_0c179ac0();
        t70 = ((~(((~t69) + 0x1) & 0xF)) + 0x1);
        if ((int)t69 >= 0) {
            t70 = (t69 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = (((t70 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x10) + 0x4);
        t72 = FUN_0c179ac0();
        t73 = ((~(((~t72) + 0x1) & 0xF)) + 0x1);
        if ((int)t72 >= 0) {
            t73 = (t72 & 0xF);
        }
        *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0)) = (((t73 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x10) + 0x8);
        t75 = FUN_0c179ac0();
        t76 = ((~(((~t75) + 0x1) & 0xF)) + 0x1);
        if ((int)t75 >= 0) {
            t76 = (t75 & 0xF);
        }
        *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x8) + 0x0)) = (((t76 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 16)) = 0xC2A2AF8;
        u78 = (((struct o2C_float *)0xC2A2ACC)->v);
        t81 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2ACC)->v)));
        t82 = (((struct o8_int *)0xC2A2ACC)->v);
        u87 = (((u78 * (float)t81) / (float)t82) / (1.0f + 1.0f));
        u88 = ((((struct o28_float *)(a4))->v));
        u88 = u88 + u87 * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
        *(float *)(((int)stk + 56)) = u88;
        u93 = (((u78 * (float)t81) / (float)t82) / (1.0f + 1.0f));
        u94 = ((((struct o2C_float *)(a4))->v));
        u94 = u94 + u93 * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))));
        *(float *)(((int)stk + 60)) = u94;
        t97 = math_sin_angle16((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
        *(float *)(((int)stk + 0)) = t97;
        u104 = (((struct o30_float *)(a4))->v);
        u105 = (((*(float *)(((*(int *)(((int)stk + 16))) + 0x0))) * (float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2ACC)->v))))) / (float)((((struct o8_int *)0xC2A2ACC)->v)));
        u106 = u104;
        u106 = u106 + u105 * t97;
        *(float *)(((int)stk + 64)) = u106;
        *(float *)(((int)stk + 44)) = 0.0f;
        *(float *)(((int)stk + 48)) = 0.0f;
        *(float *)(((int)stk + 52)) = 0.0f;
        FUN_0c187798();
        FUN_0c15af80((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C));
        t110 = (((struct o4_int *)0xC2A2ACC)->v);
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t110)) != (t110 - 1)) {
        } else {
            *(unsigned int *)(((int)stk + 16)) = (((int)stk + 4) + 0x10);
            t112 = FUN_0c179ac0();
            t113 = ((~(((~t112) + 0x1) & 0xF)) + 0x1);
            if ((int)t112 >= 0) {
                t113 = (t112 & 0xF);
            }
            *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = (((t113 << 8) << 2) << 2);
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x10) + 0x4);
            t115 = FUN_0c179ac0();
            t116 = ((~(((~t115) + 0x1) & 0xF)) + 0x1);
            if ((int)t115 >= 0) {
                t116 = (t115 & 0xF);
            }
            *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0)) = (((t116 << 8) << 2) << 2);
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x10) + 0x8);
            t118 = FUN_0c179ac0();
            t119 = ((~(((~t118) + 0x1) & 0xF)) + 0x1);
            if ((int)t118 >= 0) {
                t119 = (t118 & 0xF);
            }
            *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x8) + 0x0)) = (((t119 << 8) << 2) << 2);
            *(unsigned int *)(((int)stk + 12)) = 0xC2A2AF8;
            u121 = (((struct o2C_float *)0xC2A2ACC)->v);
            t124 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2ACC)->v)));
            t125 = (((struct o8_int *)0xC2A2ACC)->v);
            u130 = (((u121 * (float)t124) / (float)t125) / (1.0f + 1.0f));
            u131 = ((((struct o28_float *)(a4))->v));
            u131 = u131 + u130 * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))));
            *(float *)(((int)stk + 56)) = u131;
            u136 = (((u121 * (float)t124) / (float)t125) / (1.0f + 1.0f));
            u137 = ((((struct o2C_float *)(a4))->v));
            u137 = u137 + u136 * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
            *(float *)(((int)stk + 60)) = u137;
            t140 = math_sin_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
            *(float *)(((int)stk + 0)) = t140;
            u147 = (((struct o30_float *)(a4))->v);
            u148 = (((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) * (float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2ACC)->v))))) / (float)((((struct o8_int *)0xC2A2ACC)->v)));
            u149 = u147;
            u149 = u149 + u148 * t140;
            *(float *)(((int)stk + 64)) = u149;
            *(float *)(((int)stk + 44)) = 0.0f;
            *(float *)(((int)stk + 48)) = 0.0f;
            *(float *)(((int)stk + 52)) = 0.0f;
            FUN_0c187798();
            FUN_0c15af80((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C));
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t163 = *(short *)((a4 + 0x1C));
        if (t163 == ((((struct o0_int *)0xC2A2ACC)->v))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t168 = 0x14;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = (t163 + 0x1);
            t168 = (t163 + 0x1);
        }
    }
    return t168;
}
