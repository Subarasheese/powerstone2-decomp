/* game/unsorted: functions 0C145C74-0C147656, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c145d1c(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c18778c(void);
int FUN_0c187798(void);
int FUN_0c145f1a(int a4, int a5, int a6, int a7);
int FUN_0c1464ce(int a4, int a5, int a6, int a7);
int FUN_0c14676e(int a4, int a5, int a6, int a7);
int FUN_0c14692a(int a4, int a5, int a6, int a7);
int FUN_0c146b78(int a4, int a5, int a6, int a7);
int FUN_0c147164(int a4, int a5, int a6, int a7);

int FUN_0c145f1a(int a4, int a5, int a6, int a7)
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
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0xC, (*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        *(volatile int *)((a4 + 0xC4));
        FUN_0c187798();
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= 0) && ((int)t0 <= (int)0xA)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A23A0, 0xC2A2394, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x800);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0xA) && ((int)t0 <= (int)0x14)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1000);
    FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x14) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c1464ce(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= 0) && ((int)t0 <= (int)0x1)) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A23A0, 0xC2A2394, (*(short *)((a4 + 0x1C))), 0x1, 0x0);
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)0xA) && ((int)t0 <= (int)0x14)) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1000);
            FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x14) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    t0 = (*(int *)((0xC4B40E0 + (((*(signed char *)((a4 + 0x2))) << 2) << 1))));
    t1 = FUN_0c179ac0();
    t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1);
    }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (t2 + 0x3), 0xB, t0);
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x23F;
    *(volatile int *)((a4 + 0xC4));
    FUN_0c187798();
    *(volatile int *)((a4 + 0xC4));
    FUN_0c18778c();
    t0 = FUN_0c179ac0();
    t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0xF);
    }
    FUN_0c179ac0();
    u0 = (((float)t1 * 360.0f) / 16.0f);
    u1 = ((u0 * 65536.0f) / 360.0f);
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF))) * 10.0f);
    (((struct o50_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xA)) + 14.0f);
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF))) * 10.0f);
    (((struct o5C_float *)(a4))->v) = -1.0f;
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= 0) && ((int)t0 <= (int)0x1)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A23A0, 0xC2A2394, (*(short *)((a4 + 0x1C))), 0x1, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0xA) && ((int)t0 <= (int)0x14)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = (((struct oC4_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1000);
    FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x14) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c14676e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t4 = *(short *)((a4 + 0x1C));
        if (((int)t4 >= (int)((((struct oC_int *)0xC2A24D8)->v))) && (t0 = (((struct o10_int *)0xC2A24D8)->v), (int)t4 <= (int)t0)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A24B4, 0xC2A24A8, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A24D8)->v))), (((((struct oC_int *)0xC2A24D8)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC2A24D8)->v))) && (t1 = (((struct o18_int *)0xC2A24D8)->v), (int)t0 <= (int)t1)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A24D8)->v))), (((((struct o14_int *)0xC2A24D8)->v))));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0xB, (*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        *(volatile int *)((a4 + 0xC4));
        FUN_0c187798();
        (((struct o70_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o0_float *)0xC2A24D8)->v));
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A24D8)->v))) && (t2 = (((struct o10_int *)0xC2A24D8)->v), (int)t0 <= (int)t2)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A24B4, 0xC2A24A8, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A24D8)->v))), (((((struct oC_int *)0xC2A24D8)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC2A24D8)->v))) && (t3 = (((struct o18_int *)0xC2A24D8)->v), (int)t0 <= (int)t3)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A24D8)->v))), (((((struct o14_int *)0xC2A24D8)->v))));
        }
    }
    t0 = (((struct oC4_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1000);
    FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o18_int *)0xC2A24D8)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c14692a(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    register float u0;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t4 = *(short *)((a4 + 0x1C));
        if (((int)t4 >= (int)((((struct o4_int *)0xC2A251C)->v))) && (t0 = (((struct o8_int *)0xC2A251C)->v), (int)t4 <= (int)t0)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2510, 0xC2A2504, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A251C)->v))), (((((struct o4_int *)0xC2A251C)->v))));
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct o14_int *)0xC2A251C)->v)));
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - ((((struct o14_int *)0xC2A251C)->v)));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A251C)->v))) && (t1 = (((struct o10_int *)0xC2A251C)->v), (int)t0 <= (int)t1)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A251C)->v))), (((((struct oC_int *)0xC2A251C)->v))));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0xB, (*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        *(volatile int *)((a4 + 0xC4));
        FUN_0c187798();
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = FUN_0c179ac0();
        t4 = ((~(((~t1) + 0x1) & 0x7)) + 0x1);
        if ((int)t1 >= 0) {
            t4 = (t1 & 0x7);
        }
        u0 = (((float)t4 * 360.0f) / 8.0f);
        (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o4_int *)0xC2A251C)->v))) && (t2 = (((struct o8_int *)0xC2A251C)->v), (int)t0 <= (int)t2)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2510, 0xC2A2504, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A251C)->v))), (((((struct o4_int *)0xC2A251C)->v))));
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct o14_int *)0xC2A251C)->v)));
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - ((((struct o14_int *)0xC2A251C)->v)));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A251C)->v))) && (t3 = (((struct o10_int *)0xC2A251C)->v), (int)t0 <= (int)t3)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A251C)->v))), (((((struct oC_int *)0xC2A251C)->v))));
        }
    }
    t0 = (((struct oC4_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1000);
    FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A251C)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c146b78(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t0;
    register int t2;
    register int t4;
    register int t13;
    register int t15;
    register int t29;
    register int t33;
    register int t35;
    register int t43;
    register int t47;
    register int t49;
    register int t57;
    register int t61;
    register int t63;
    register int t74;
    register int t78;
    register float u96;
    register float u97;
    register float t98;
    register float u99;
    register int t102;
    register float u105;
    register int t108;
    register float t112;
    register float u114;
    register float u121;
    register float t123;
    register int t132;
    register int t136;
    register float t139;
    register float u140;
    register int t143;
    register float u148;
    register float u149;
    register float t151;
    register float u161;
    register float u162;
    register float u163;
    register int t165;
    register int t167;
    register int t176;
    register int t178;
    register int t192;
    register int t196;
    register int t198;
    register int t206;
    register int t210;
    register int t212;
    register int t220;
    register int t224;
    register int t226;
    register int t237;
    register int t241;
    register int t247;
    int t31;
    int t45;
    int t59;
    int t194;
    int t208;
    int t222;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            *(volatile int *)((a4 + 0xC4));
            t2 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
            *(volatile int *)((a4 + 0xC4));
            t4 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)((a4 + 0xC4));
            FUN_0c18778c();
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x7, (*(int *)0xC4B40CC));
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x63F;
            *(volatile int *)((a4 + 0xC4));
            t13 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)((a4 + 0xC4));
            t15 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)((a4 + 0xC4));
            FUN_0c18778c();
            if (((((struct o10_int *)0xC2A2538)->v)) != 0) {
                if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o10_int *)0xC2A2538)->v)))) == 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                }
            } else {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
            t29 = *(short *)((a4 + 0x1C));
            if (((int)t29 >= (int)((((struct o0_int *)0xC2A2538)->v))) && (t31 = (((struct o4_int *)0xC2A2538)->v), (int)t29 <= (int)t31)) {
                t33 = ((((struct o0_int *)0xC2A2538)->v));
                *(int *)((int)stk + 4) = t33;
                t35 = ((((struct o4_int *)0xC2A2538)->v));
                *(int *)((int)stk + 0) = t35;
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2598, 0xC2A258C, (*(short *)((a4 + 0x1C))), t35, t33);
            }
            t43 = *(short *)((a4 + 0x1C));
            if (((int)t43 >= (int)((((struct o20_int *)0xC2A2538)->v))) && (t45 = (((struct o24_int *)0xC2A2538)->v), (int)t43 <= (int)t45)) {
                t47 = ((((struct o20_int *)0xC2A2538)->v));
                *(int *)((int)stk + 4) = t47;
                t49 = ((((struct o24_int *)0xC2A2538)->v));
                *(int *)((int)stk + 0) = t49;
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25B4, 0xC2A25A4, (*(short *)((a4 + 0x1C))), t49, t47);
            }
            t57 = *(short *)((a4 + 0x1C));
            if (((int)t57 >= (int)((((struct o8_int *)0xC2A2538)->v))) && (t59 = (((struct oC_int *)0xC2A2538)->v), (int)t57 <= (int)t59)) {
                t61 = ((((struct o8_int *)0xC2A2538)->v));
                *(int *)((int)stk + 4) = t61;
                t63 = ((((struct oC_int *)0xC2A2538)->v));
                *(int *)((int)stk + 0) = t63;
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25D4, 0xC2A25C4, (*(short *)((a4 + 0x1C))), t63, t61);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t74 = (((struct oC4_int *)(a4))->v);
            *(unsigned short *)((t74 + 0x6)) = ((*(short *)((t74 + 0x6))) | 0x1000);
            FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
            t78 = *(short *)((a4 + 0x1E));
            t247 = t78;
            if ((int)t78 > (int)0x9) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                t247 = 0xA8;
            }
        } else {
            t247 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        u96 = (((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o14_int *)0xC2A2538)->v)))) * 360.0f) / (float)((((struct o14_int *)0xC2A2538)->v)));
        u97 = ((u96 * 65536.0f) / 360.0f);
        *(unsigned int *)((a4 + 0x38)) = ((int)(u97 + 0.5f) & 0xFFFF);
        t98 = math_sin_angle16(((int)(u97 + 0.5f) & 0xFFFF));
        *(unsigned int *)(((int)stk + 8)) = 0xC2A2560;
        u99 = (((struct o28_float *)0xC2A2538)->v);
        t102 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o18_int *)0xC2A2538)->v)));
        *(unsigned int *)(((int)stk + 12)) = 0xC2A2570;
        u105 = (((float)t102 * ((((struct o38_float *)0xC2A2538)->v))) / (float)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o4C_float *)(a4))->v) = (t98 * (u99 + u105));
        t108 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o50_float *)(a4))->v) = ((((((struct o0_float *)0xC2A2578)->v)) * (float)t108) / (float)((((struct o18_int *)0xC2A2538)->v)));
        t112 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u114 = *(float *)(((*(int *)(((int)stk + 8))) + 0x0));
        u121 = (((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o18_int *)0xC2A2538)->v)))) * (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)))) / (float)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o54_float *)(a4))->v) = (t112 * (u114 + u121));
        t123 = math_sin_angle16((*(int *)((a4 + 0x38))));
        *(unsigned int *)(((int)stk + 8)) = 0xC2A256C;
        (((struct o58_float *)(a4))->v) = (t123 * ((((struct o34_float *)0xC2A2538)->v)));
        (((struct o5C_float *)(a4))->v) = ((((((struct o4_float *)0xC2A2578)->v)) * (float)t108) / (float)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o60_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
        *(volatile int *)((a4 + 0xC4));
        t132 = ((int (*)(void))(FUN_0c187798))();
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        *(volatile int *)((a4 + 0xC8));
        t136 = ((int (*)(void))(FUN_0c187798))();
        (((struct o20_ushort *)(a4))->v) = ((((struct oC_int *)0xC2A2578)->v));
        *(int *)((int)stk + 4) = (a4 + 0x28);
        t139 = math_sin_angle16((*(int *)((a4 + 0x38))));
        *(unsigned int *)(((int)stk + 12)) = 0xC2A2574;
        u140 = (((struct o3C_float *)0xC2A2538)->v);
        t143 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o1C_int *)0xC2A2538)->v)));
        *(unsigned int *)(((int)stk + 8)) = 0xC2A2580;
        u148 = (u140 + ((((float)t143 * ((((struct o8_float *)0xC2A2578)->v))) / (float)((((struct o1C_int *)0xC2A2538)->v)))));
        u149 = ((((struct o28_float *)(a4))->v));
        u149 = u149 + u148 * t139;
        (((struct o28_float *)(a4))->v) = u149;
        *(int *)((int)stk + 4) = (a4 + 0x30);
        t151 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u161 = (((struct o30_float *)(a4))->v);
        u162 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) + ((((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o1C_int *)0xC2A2538)->v)))) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)))) / (float)((((struct o1C_int *)0xC2A2538)->v)))));
        u163 = u161;
        u163 = u163 + u162 * t151;
        (((struct o30_float *)(a4))->v) = u163;
        *(volatile int *)((a4 + 0xC4));
        t165 = ((int (*)(void))(FUN_0c187798))();
        *(volatile int *)((a4 + 0xC4));
        t167 = ((int (*)(void))(FUN_0c187798))();
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x7, (*(int *)0xC4B40CC));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x63F;
        *(volatile int *)((a4 + 0xC4));
        t176 = ((int (*)(void))(FUN_0c187798))();
        *(volatile int *)((a4 + 0xC4));
        t178 = ((int (*)(void))(FUN_0c187798))();
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        if (((((struct o10_int *)0xC2A2538)->v)) != 0) {
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o10_int *)0xC2A2538)->v)))) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
        t192 = *(short *)((a4 + 0x1C));
        if (((int)t192 >= (int)((((struct o0_int *)0xC2A2538)->v))) && (t194 = (((struct o4_int *)0xC2A2538)->v), (int)t192 <= (int)t194)) {
            t196 = ((((struct o0_int *)0xC2A2538)->v));
            *(int *)((int)stk + 4) = t196;
            t198 = ((((struct o4_int *)0xC2A2538)->v));
            *(int *)((int)stk + 0) = t198;
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2598, 0xC2A258C, (*(short *)((a4 + 0x1C))), t198, t196);
        }
        t206 = *(short *)((a4 + 0x1C));
        if (((int)t206 >= (int)((((struct o20_int *)0xC2A2538)->v))) && (t208 = (((struct o24_int *)0xC2A2538)->v), (int)t206 <= (int)t208)) {
            t210 = ((((struct o20_int *)0xC2A2538)->v));
            *(int *)((int)stk + 4) = t210;
            t212 = ((((struct o24_int *)0xC2A2538)->v));
            *(int *)((int)stk + 0) = t212;
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25B4, 0xC2A25A4, (*(short *)((a4 + 0x1C))), t212, t210);
        }
        t220 = *(short *)((a4 + 0x1C));
        if (((int)t220 >= (int)((((struct o8_int *)0xC2A2538)->v))) && (t222 = (((struct oC_int *)0xC2A2538)->v), (int)t220 <= (int)t222)) {
            t224 = ((((struct o8_int *)0xC2A2538)->v));
            *(int *)((int)stk + 4) = t224;
            t226 = ((((struct oC_int *)0xC2A2538)->v));
            *(int *)((int)stk + 0) = t226;
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25D4, 0xC2A25C4, (*(short *)((a4 + 0x1C))), t226, t224);
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        t237 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t237 + 0x6)) = ((*(short *)((t237 + 0x6))) | 0x1000);
        FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
        t241 = *(short *)((a4 + 0x1E));
        t247 = t241;
        if ((int)t241 > (int)0x9) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t247 = 0xA8;
        }
    }
    return t247;
}

int FUN_0c147164(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t5;
    register int t12;
    register int t22;
    register int t30;
    register int t37;
    register int t41;
    register int t23;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t41 = t0;
            if (t0 != 99) {
            } else {
                t41 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            t5 = ((int (*)(int, int, int))(FUN_0c187798))((0x41C + a4), a5, a6);
            FUN_0c058adc(((int)stk + 8), ((int)stk + 8), (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532E38));
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x10;
            FUN_0c0588bc((a4 + 0x28), (((((struct oD0_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x84), (((int)stk + 0) + 0x8), (*(short *)((a4 + 0x1C))), 0x10, 0x0);
            t12 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t12 + 0x1);
            t41 = (short)(t12 + 0x1);
            if ((int)(short)(t12 + 0x1) > (int)0x1E) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t41 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        t22 = ((int (*)(int, int, int))(FUN_0c187798))((0x41C + a4), a5, a6);
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * (*(float *)((t23 + 0x0))));
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * (*(float *)((t23 + 0x0))));
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * (*(float *)((t23 + 0x0))));
        t30 = ((int (*)(int))(FUN_0c187798))(t23);
        FUN_0c058adc(((int)stk + 8), ((int)stk + 8), (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532E38));
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x10;
        FUN_0c0588bc((a4 + 0x28), (((((struct oD0_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x84), (((int)stk + 0) + 0x8), (*(short *)((a4 + 0x1C))), 0x10, 0x0);
        t37 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t37 + 0x1);
        t41 = (short)(t37 + 0x1);
        if ((int)(short)(t37 + 0x1) > (int)0x1E) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t41 = 0x14;
        }
    }
    return t41;
}
