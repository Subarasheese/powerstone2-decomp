/* game/effect: functions 0C14F6A0-0C151288, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_float { char p[0x420]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c150d1e(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(int, float);
int FUN_0c187798(int, int, int);
int FUN_0c14f6a0(int a4, int a5, int a6, float f4);
int FUN_0c14f734(int a4, int a5, int a6, int a7);
int FUN_0c14f9d6(int a4, int a5, int a6);
int FUN_0c14fc70(int a4, int a5, int a6);
int FUN_0c14fed8(int a4, int a5, int a6, float f4, float f5);
int FUN_0c150010(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c150160(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c1501f2(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c150684(int a4, int a5, int a6, int a7);
int FUN_0c1507f4(int a4, int a5, int a6, int a7);
int FUN_0c150a2c(int a4, int a5, int a6, int a7);
int obj_step_pos_vel_acc(int a4);
int FUN_0c150aae(int a4, int a5, int a6, int a7);
int FUN_0c150c68(int a4, int a5, int a6, int a7);
int FUN_0c150d74(int a4, int a5, int a6, int a7);
int FUN_0c150ed4(int a4);
int FUN_0c150f3c(int a4);
int FUN_0c150faa(int a4);

int FUN_0c14f6a0(int a4, int a5, int a6, float f4)
{
    int stk[7];
    register int t1;
    register int t3;
    register int t14;
    register int t6;

    *(unsigned char *)(((int)stk + 12)) = a5;
    *(float *)(((int)stk + 8)) = f4;
    FUN_0c187798(a4, a5, a6);
    t1 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = 0x0;
    t3 = FUN_0c1502e8(0x2, 0x1, 0x1, (((int)stk + 0) + 0x10), 0x0, (((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC2030D8));
    t14 = t3;
    if (t3 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
        t6 = *(signed char *)(((int)stk + 12));
        (((struct o18_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((0xC202D84 + (((t6 << 1) + t6) << 2)) + 0x0)));
        (((struct o1C_float *)(((((struct oC4_int *)(t3))->v))))->v) = ((((struct o4_float *)((0xC202D84 + (((t6 << 1) + t6) << 2))))->v));
        (((struct o20_float *)(((((struct oC4_int *)(t3))->v))))->v) = ((((struct o8_float *)((0xC202D84 + (((t6 << 1) + t6) << 2))))->v));
        (((struct o4_float *)((0x41C + t3)))->v) = (*(float *)(((int)stk + 8)));
        *(unsigned short *)((t3 + 0x1E)) = 0x0;
        t14 = 0x0;
    }
    return t14;
}

int FUN_0c14f734(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t2;
    register int t23;
    register int t4;
    register int t8;
    register int t10;
    register float u14;
    register int t18;

    t2 = (int)((int)(unsigned short)a6 % (int)(*(signed char *)((0xC20324C + (*(signed char *)((0xC53249A + ((short)(signed char)a7 * (short)0x3938))))))));
    t23 = t2;
    if (t2 == 0) {
        FUN_0c187798(a4, a5, a6);
        t4 = *(int *)0xC542260;
        FUN_0c17c130(((int)stk + 8), ((int)stk + 8), (((((0x7 & ((unsigned int)t4 >> 1)) << 1) + (0x7 & ((unsigned int)t4 >> 1))) << 2) + 0xC20318C));
        t8 = *(int *)0xC542260;
        *(int *)((int)stk + 4) = (((((t8 & 0x3) << 1) + (t8 & 0x3)) << 2) + 0xC2031EC);
        *(int *)((int)stk + 0) = 0xC202D30;
        t10 = FUN_0c1502e8(0x2, 0x1, 0x1, (((int)stk + 0) + 0x8), 0xC202D30, (((((t8 & 0x3) << 1) + (t8 & 0x3)) << 2) + 0xC2031EC));
        t23 = t10;
        if (t10 != 0) {
            if ((unsigned short)a6 == 0) {
                (((struct o420_float *)(t10))->v) = 3.0f;
            } else {
                (((struct o420_float *)(t10))->v) = ((float)(unsigned short)a6 / (1.0f + 1.0f));
                if (((float)(unsigned short)a6 / (1.0f + 1.0f)) > (1.0f + 1.0f)) {
                    (((struct o420_float *)(t10))->v) = (1.0f + 1.0f);
                }
                u14 = (1.0f + 1.0f);
            }
            *(volatile int *)((t10 + 0xC4));
            FUN_0c18778c(t10, u14);
            *(unsigned short *)((t18 + 0x1E)) = 0x0;
            t23 = 0x0;
        }
    }
    return t23;
}

int FUN_0c14f9d6(int a4, int a5, int a6)
{
    int stk[28];
    int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t8;
    register int t12;
    register int t14;
    register int t16;
    register int t21;
    int t17;
    register float u19;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 12)) = (((*(int *)0xC542260) & 0x2) << 1);
    t2 = *(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x2));
    t3 = 0xC;
    if ((t2 != 4) && ((t2 != 5) && (t2 != 9))) {
        t3 = 0x0;
    }
    t4 = *(signed char *)(((int)stk + 12));
    t6 = 0x0;
    t7 = ((((((signed char)t3 + t4) << 1) + ((signed char)t3 + t4)) << 2) + 0xC202EF8);
    t8 = (((int)stk + 8) + 0x8);
    for (;;) {
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798(t3, a5, a6);
        FUN_0c17c130(t8, t8, t7);
        t6 = (t6 + 0x1);
        t7 = (t7 + 0xC);
        t8 = (t8 + 0xC);
        if ((int)(signed char)t6 >= (int)0x8) {
            break;
        }
    }
    t12 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t12 & 0x7) << 1) + (t12 & 0x7)) << 2) + 0xC2030D8);
    t14 = *(signed char *)(((int)stk + 12));
    *(int *)((int)stk + 0) = ((((t14 << 1) + t14) << 2) + 0xC202E68);
    t16 = FUN_0c1502e8(a4, 0x8, 0x2, (((int)stk + 0) + 0x10), ((((t14 << 1) + t14) << 2) + 0xC202E68), (((((t12 & 0x7) << 1) + (t12 & 0x7)) << 2) + 0xC2030D8));
    t21 = t16;
    if (t16 != 0) {
        t17 = *(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x2));
        u19 = 1.20000005f;
        if ((t17 != 4) && ((t17 != 5) && (t17 != 9))) {
            u19 = 1.0f;
        }
        (((struct o10_float *)((0x41C + t16)))->v) = u19;
        *(unsigned short *)((t16 + 0x1C)) = (*(signed char *)((0x135 + (((short)(signed char)a4 * (short)0x3938) + 0xC532498))));
        *(unsigned short *)((t16 + 0x1E)) = 0x0;
        t21 = 0x0;
    }
    return t21;
}

int FUN_0c14fc70(int a4, int a5, int a6)
{
    int stk[34];
    register int t0;
    register int t2;
    register float u4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    register int t10;
    register float t13;
    register float u15;
    register float u16;
    register float u19;
    register float u20;
    register float u22;
    register float t23;
    register float u25;
    register float u28;
    register float u29;
    register float u30;
    register int t37;
    register int t39;
    register int t48;
    register int t43;
    register float u45;
    register int t53;
    register int t50;
    register int t51;

    *(unsigned char *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    t0 = *(signed char *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 12)) = (((short)t0 * (short)0x3938) + 0xC532498);
    t2 = *(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38));
    u4 = *(float *)((0xC203018 + ((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x2))) << 2)));
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 12) + 0x1C) + 0x60);
    *(unsigned int *)(((int)stk + 32)) = (((int)stk + 12) + 0x1C);
    *(unsigned int *)(((int)stk + 36)) = 0xC2030D8;
    *(unsigned int *)(((int)stk + 16)) = 0x2;
    t5 = a4;
    t6 = a5;
    t7 = a6;
    t8 = 0xC203058;
    for (;;) {
        t10 = (*(int *)(((int)stk + 32)));
        for (;;) {
            *(volatile int *)(((int)stk + 20));
            FUN_0c187798(t5, t6, t7);
            t5 = (t2 + 0x4000);
            t13 = math_sin_angle16(t5);
            u15 = (((((struct o4_float *)(t8))->v)) * u4);
            u16 = ((u15 * 5.0f) / 8.0f);
            *(float *)(((int)stk + 8)) = (t13 * u16);
            t5 = (t2 + 0x4000);
            u19 = *(float *)((t10 + 0x0));
            u20 = ((math_cos_angle16(t5)) * (*(float *)((t8 + 0x0))));
            u22 = (u20 * u4);
            *(float *)((t10 + 0x0)) = (u19 + (((t13 * u16)) - u22));
            *(int *)((int)stk + 8) = (0x8 + t10);
            t5 = (t2 + 0x4000);
            t23 = math_cos_angle16(t5);
            *(float *)(((int)stk + 4)) = t23;
            u25 = (((((struct o4_float *)(t8))->v)) * u4);
            *(float *)(((int)stk + 0)) = ((u25 * 5.0f) / 8.0f);
            t5 = (t2 + 0x4000);
            u28 = ((math_sin_angle16(t5)) * (*(float *)((t8 + 0x0))));
            u29 = ((u25 * 5.0f) / 8.0f);
            u30 = (u28 * u4);
            u30 = u30 + u29 * t23;
            (((struct o8_float *)(t10))->v) = (((((struct o8_float *)(t10))->v)) + u30);
            (((struct o4_float *)(t10))->v) = (((((struct o4_float *)(t10))->v)) + 16.0f);
            t10 = (t10 + 0xC);
            t8 = (t8 + 0x8);
            if ((unsigned int)t10 >= (unsigned int)(*(int *)(((int)stk + 28)))) {
                break;
            }
        }
        t6 = 0x8;
        t37 = (*(int *)(((int)stk + 36)));
        *(int *)((int)stk + 8) = t37;
        t7 = 0x2;
        *(int *)((int)stk + 4) = 0xC202E68;
        t5 = (*(signed char *)(((int)stk + 24)));
        t39 = FUN_0c1502e8(t5, t6, t7, (((int)stk + 12) + 0x1C), 0xC202E68, t37);
        t5 = t39;
        t48 = t39;
        if (t39 != 0) {
            t6 = (*(int *)(((int)stk + 12)));
            t7 = 0x41C;
            t43 = *(signed char *)((t6 + 0x2));
            t7 = (t7 + t5);
            t6 = t43;
            u45 = 1.20000005f;
            if ((t43 != 4) && ((t6 != 5) && (t6 != 9))) {
                u45 = 1.0f;
            }
            (((struct o10_float *)(t7))->v) = u45;
            *(unsigned short *)((t5 + 0x1C)) = (*(signed char *)((0x135 + (*(int *)(((int)stk + 12))))));
            *(unsigned short *)((t5 + 0x1E)) = 0x0;
            t48 = 0x0;
            t50 = t6;
            t51 = t7;
        }
        t53 = *(int *)(((int)stk + 16));
        t6 = t50;
        t7 = t51;
        *(unsigned int *)(((int)stk + 16)) = (t53 - 1);
        if ((t53 - 1) != 0) continue;
        break;
    }
    return t48;
}

int FUN_0c14fed8(int a4, int a5, int a6, float f4, float f5)
{
    int stk[32];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register float u11;
    register float u14;
    register float u15;
    register float u17;
    register float t18;
    register float u19;
    register float u22;
    register float u23;
    register float u24;
    register float u25;
    register int t32;
    register int t34;
    register int t35;
    register int t38;
    register int t36;

    *(unsigned char *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    t1 = *(int *)((((short)(*(signed char *)(((int)stk + 16))) * (short)0x3938) + 0xC5324D0));
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 8) + 0x18) + 0x60);
    *(unsigned int *)(((int)stk + 24)) = (((int)stk + 8) + 0x18);
    *(unsigned int *)(((int)stk + 28)) = 0xC2030D8;
    *(unsigned int *)(((int)stk + 8)) = 0x2;
    t2 = a4;
    t3 = a5;
    t4 = 0xC203058;
    for (;;) {
        t6 = (*(int *)(((int)stk + 24)));
        for (;;) {
            *(volatile int *)(((int)stk + 12));
            FUN_0c187798(t2, t3, a6);
            t2 = (t1 + 0x4000);
            u11 = ((math_sin_angle16(t2)) * ((((struct o4_float *)(t4))->v)));
            t2 = (t1 + 0x4000);
            u14 = *(float *)((t6 + 0x0));
            u15 = ((math_cos_angle16(t2)) * (*(float *)((t4 + 0x0))));
            u17 = (u15 * f5);
            *(float *)((t6 + 0x0)) = (u14 + (((u11 * f5)) - u17));
            *(int *)((int)stk + 4) = (0x8 + t6);
            t2 = (t1 + 0x4000);
            t18 = math_cos_angle16(t2);
            u19 = (((struct o4_float *)(t4))->v);
            t2 = (t1 + 0x4000);
            u22 = (((struct o8_float *)(t6))->v);
            u23 = ((math_sin_angle16(t2)) * (*(float *)((t4 + 0x0))));
            u24 = (t18 * u19);
            u25 = (u23 * f5);
            u25 = u25 + f5 * u24;
            (((struct o8_float *)(t6))->v) = (u22 + u25);
            (((struct o4_float *)(t6))->v) = (((((struct o4_float *)(t6))->v)) + ((f4 * 16.0f)));
            t6 = (t6 + 0xC);
            t4 = (t4 + 0x8);
            if ((unsigned int)t6 >= (unsigned int)(*(int *)(((int)stk + 20)))) {
                break;
            }
        }
        t3 = 0x8;
        t32 = (*(int *)(((int)stk + 28)));
        *(int *)((int)stk + 4) = t32;
        *(int *)((int)stk + 0) = 0xC202E68;
        t2 = (*(signed char *)(((int)stk + 16)));
        t34 = FUN_0c1502e8(t2, t3, 0x0, (((int)stk + 8) + 0x18), 0xC202E68, t32);
        t2 = t34;
        t35 = t34;
        if (t34 != 0) {
            t3 = 0x41C;
            t3 = (t3 + t2);
            (((struct o10_float *)(t3))->v) = f4;
            *(unsigned short *)((t2 + 0x1E)) = 0x0;
            t35 = 0x0;
            t36 = t3;
        }
        t38 = *(int *)(((int)stk + 8));
        t3 = t36;
        *(unsigned int *)(((int)stk + 8)) = (t38 - 1);
        if ((t38 - 1) == 0) {
            break;
        }
    }
    return t35;
}

int FUN_0c150010(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    int stk[9];
    register int t1;
    register int t3;
    register int t12;

    *(float *)(((int)stk + 20)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(float *)(((int)stk + 12)) = f7;
    FUN_0c187798(a4, a5, a6);
    t1 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = 0x0;
    t3 = FUN_0c1502e8(0x0, 0x1, 0x1, (((int)stk + 0) + 0x18), 0x0, (((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC2030D8));
    t12 = t3;
    if (t3 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 20)));
        (((struct o1C_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 8)));
        (((struct o20_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o4_float *)((0x41C + t3)))->v) = (*(float *)(((int)stk + 12)));
        *(unsigned short *)((t3 + 0x1E)) = 0x0;
        t12 = 0x0;
    }
    return t12;
}

int FUN_0c150160(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    int stk[11];
    register int t4;
    register int t6;
    register int t15;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    *(float *)(((int)stk + 20)) = f4;
    *(float *)(((int)stk + 16)) = f5;
    *(float *)(((int)stk + 12)) = f6;
    *(float *)(((int)stk + 8)) = f7;
    *(volatile int *)0xC542260;
    FUN_0c187798(a4, a5, a6);
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x18);
    t4 = (*(int *)(((int)stk + 28)));
    *(int *)((int)stk + 0) = t4;
    t6 = FUN_0c1502e8(0x0, 0x1, 0x1, (*(int *)(((int)stk + 24))), t4, (((int)stk + 8) + 0x18));
    t15 = t6;
    if (t6 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t6))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t6))->v))))->v) = (*(float *)(((int)stk + 20)));
        (((struct o1C_float *)(((((struct oC4_int *)(t6))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o20_float *)(((((struct oC4_int *)(t6))->v))))->v) = (*(float *)(((int)stk + 12)));
        (((struct o4_float *)((0x41C + t6)))->v) = (*(float *)(((int)stk + 8)));
        *(unsigned short *)((t6 + 0x1E)) = 0x0;
        t15 = 0x0;
    }
    return t15;
}

int FUN_0c1501f2(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    int stk[10];
    register int t1;
    register int t3;
    register int t13;

    *(float *)(((int)stk + 24)) = f4;
    *(float *)(((int)stk + 20)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(float *)(((int)stk + 12)) = f7;
    *(unsigned int *)(((int)stk + 8)) = a5;
    FUN_0c187798(a4, a5, a6);
    t1 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = 0x0;
    t3 = FUN_0c1502e8(0x0, 0x1, 0x1, (((int)stk + 0) + 0x1C), 0x0, (((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC2030D8));
    t13 = t3;
    if (t3 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 24)));
        (((struct o1C_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 20)));
        (((struct o20_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o4_float *)((0x41C + t3)))->v) = (*(float *)(((int)stk + 12)));
        t13 = *(int *)(((int)stk + 8));
        *(unsigned short *)((t3 + 0x1E)) = t13;
    }
    return t13;
}

int FUN_0c150684(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        (((struct o41C_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x1;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    FUN_0c17c130((0x90 + t0), (0x90 + t0), (0x9C + t0));
    FUN_0c17c130((t0 + 0x6C), (t0 + 0x6C), (0x90 + t0));
    t1 = *(signed char *)(((0x41C + a4) + 0x1));
    *(unsigned char *)(((0x41C + a4) + 0x1)) = (t1 - 1);
    if ((signed char)(t1 - 1) == 0) {
        *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x4;
        FUN_0c037498(t0, (*(signed char *)(((0x41C + a4) + 0x0))), 0x7, (*(int *)0xC4B40CC));
        t1 = *(signed char *)(((0x41C + a4) + 0x0));
        (((struct o41C_uchar *)(a4))->v) = (t1 + 0x1);
        if ((int)(signed char)(t1 + 0x1) >= (int)0xA) {
            *(unsigned char *)((t0 + 0x0)) = 0x0;
        }
    }
    if ((int)(*(signed char *)(((0x41C + a4) + 0x0))) >= (int)0x5) {
        u0 = (float)(*(signed char *)(((0x41C + a4) + 0x1)));
        u0 = u0 + 4.0f * (((-(float)(*(signed char *)(((0x41C + a4) + 0x0)))) + 15.0f));
        (((struct o14_float *)(t0))->v) = (u0 / 32.0f);
    }
    t1 = *(signed char *)(((0x41C + a4) + 0x1));
    u0 = ((float)(*(signed char *)(((0x41C + a4) + 0x0))) * 4.0f);
    u1 = (((struct o4_float *)((0x41C + a4)))->v);
    (((struct o8C_float *)(t0))->v) = ((u1 + (((u0 - (float)t1) + 4.0f) / 64.0f)) * 0.800000012f);
    (((struct o88_float *)(t0))->v) = ((u1 + (((u0 - (float)t1) + 4.0f) / 64.0f)) * 0.800000012f);
    (((struct o84_float *)(t0))->v) = ((u1 + (((u0 - (float)t1) + 4.0f) / 64.0f)) * 0.800000012f);
    if ((*(signed char *)((t0 + 0x0))) != 0) {
        t0 = *(short *)((a4 + 0x1E));
        t1 = t0;
        if (t0 != 0) {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c1507f4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t1 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t1;
        }
        t1 = a4;
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t4 = t3;
            t4 = (t4 << 2);
            t4 = (t4 + (0xC4 + a4));
            t4 = (*(int *)((t4 + 0x0)));
            t5 = (*(signed char *)((t4 + 0x0)));
            if (t5 != 0) {
                t2 = (t2 + 0x1);
                t1 = 0x90;
                t1 = (t1 + t4);
                FUN_0c17c130(t1, (0x90 + t4), (0x9C + t4));
                t1 = t4;
                t1 = (t1 + 0x6C);
                FUN_0c17c130(t1, (t4 + 0x6C), (0x90 + t4));
                t5 = (*(signed char *)(((((0x41C + a4) + 0x8) + t3) + 0x0)));
                t5 = (t5 - 1);
                *(unsigned char *)(((((0x41C + a4) + 0x8) + t3) + 0x0)) = t5;
                t5 = (signed char)t5;
                if (t5 == 0) {
                    t6 = (0x41C + a4);
                    t6 = (t6 + 0x8);
                    t5 = 0xC4B40CC;
                    t6 = (t6 + t3);
                    *(unsigned char *)((t6 + 0x0)) = 0x4;
                    t1 = t4;
                    FUN_0c037498(t1, (*(signed char *)((((0x41C + a4) + t3) + 0x0))), 0x7, (*(int *)((t5 + 0x0))));
                    t5 = (0x41C + a4);
                    t5 = (t5 + t3);
                    t7 = *(signed char *)((t5 + 0x0));
                    *(unsigned char *)((t5 + 0x0)) = (t7 + 0x1);
                    t5 = 0xA;
                    if ((int)(signed char)(t7 + 0x1) >= (int)t5) {
                        *(unsigned char *)((t4 + 0x0)) = 0x0;
                    }
                }
                t5 = (0x41C + a4);
                t5 = (t5 + t3);
                t7 = *(signed char *)((t5 + 0x0));
                t5 = 0x5;
                if ((int)t7 >= (int)t5) {
                    t6 = (0x41C + a4);
                    t6 = (t6 + t3);
                    u0 = (float)(*(signed char *)((t6 + 0x0)));
                    u1 = (float)(*(signed char *)(((((0x41C + a4) + 0x8) + t3) + 0x0)));
                    u0 = (-u0);
                    u0 = (u0 + 15.0f);
                    u2 = u1;
                    u2 = u2 + 4.0f * u0;
                    u1 = u2;
                    u0 = (*(float *)0xC150A4C);
                    u1 = (u1 / u0);
                    (((struct o14_float *)(t4))->v) = u1;
                    t5 = t6;
                    u2 = u1;
                    u3 = u0;
                }
                u1 = u2;
                u0 = u3;
                t6 = t5;
                u2 = ((((struct o10_float *)((0x41C + a4)))->v));
                u0 = (float)(*(signed char *)((((0x41C + a4) + t3) + 0x0)));
                u1 = (float)(*(signed char *)(((((0x41C + a4) + 0x8) + t3) + 0x0)));
                u0 = (u0 * 4.0f);
                u0 = (u0 - u1);
                u0 = (u0 + 4.0f);
                u0 = (u0 / 64.0f);
                u2 = (u2 + u0);
                u2 = (u2 * 0.800000012f);
                (((struct o8C_float *)(t4))->v) = u2;
                (((struct o88_float *)(t4))->v) = u2;
                (((struct o84_float *)(t4))->v) = u2;
            } else {
                t4 = t1;
            }
            t3 = (t3 + 0x1);
            t1 = t4;
        }
        t1 = 0xC0;
        if (t2 == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)0xC542237;
    *(volatile signed char *)((((((((t1 << 1) + t1) << 2) << 1) + 0xC203288) + (((*(signed char *)0xC54223C) << 2) << 1)) + (*(short *)((a4 + 0x1C)))));
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        *(unsigned char *)((((0x41C + a4) + t1) + 0x0)) = 0x1;
        *(unsigned char *)(((((0x41C + a4) + 0x8) + t1) + 0x0)) = 0x1;
        t2 = *(int *)((((t1 << 2) + (0xC4 + a4)) + 0x0));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        (((struct o14_float *)(t2))->v) = 1.0f;
        FUN_0c187798(0x1, t1, t2);
        t1 = (t0 + 0x1);
    }
    return 0xC0;
}

int FUN_0c150a2c(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC2A2784 + ((*(signed char *)((a4 + 0x2))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int obj_step_pos_vel_acc(int a4)
{
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o60_float *)(a4))->v)));
    return 0x54;
}

int FUN_0c150aae(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            obj_step_pos_vel_acc(a4);
            if (!(((((struct o4C_float *)(a4))->v)) > 0.0f)) {
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
            }
            if (!(((((struct o54_float *)(a4))->v)) > 0.0f)) {
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
            }
            if (!(((((struct o44_float *)(a4))->v)) > 0.0f)) {
                (((struct o44_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
            }
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + -0.0357142873f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oB0_float *)(a4))->v) = 0.0f;
                t1 = 0xB0;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 0.5f;
        (((struct o50_float *)(a4))->v) = 0.5f;
        (((struct o4C_float *)(a4))->v) = 0.5f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
    }
    obj_step_pos_vel_acc(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 28) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o4C_float *)(a4))->v) = 0.150000006f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.150000006f;
        (((struct o58_float *)(a4))->v) = -0.0199999996f;
        (((struct o5C_float *)(a4))->v) = -0.00400000019f;
        (((struct o60_float *)(a4))->v) = -0.0199999996f;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 1.0f;
        t1 = 0xB0;
    }
    return t1;
}

int FUN_0c150c68(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;
    register float u1;

    u0 = (((struct o0_float *)0xC150D94)->v);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
        u1 = (((struct o4_float *)0xC150D94)->v);
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - u1);
        (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - u1);
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - u1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        t0 = *(signed char *)((a4 + 0x2));
        (((struct o48_float *)(a4))->v) = ((float)(t0 + 0x1) * u0);
        (((struct o44_float *)(a4))->v) = ((float)(t0 + 0x1) * u0);
        (((struct o40_float *)(a4))->v) = ((float)(t0 + 0x1) * u0);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
        u0 = (((struct o4_float *)0xC150D94)->v);
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - u0);
        (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - u0);
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - u0);
    }
    t0 = 0xB4;
    if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oB4_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        t0 = 0xBC;
    }
    return t0;
}

int FUN_0c150d74(int a4, int a5, int a6, int a7)
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
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        (((struct o5C_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (1.0f + 1.0f));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    if (!(((((struct o2C_float *)(a4))->v)) > ((((struct o5C_float *)(a4))->v)))) {
        (((struct o2C_float *)(a4))->v) = ((((struct o5C_float *)(a4))->v));
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c150d1e(0x0, (a4 + 0x28));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c150ed4(int a4)
{
    register int t0;

    (((struct o20_ushort *)(a4))->v) = 0x0;
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (*(signed char *)((((t0 << 1) + t0) + 0xC2A2790)));
    t0 = (((struct o20_short *)(a4))->v);
    return FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(signed char *)((((t0 << 1) + t0) + 0xC2A2791))), 0x1A, (*(int *)0xC4B40CC));
}

int FUN_0c150f3c(int a4)
{
    register int t0;

    t0 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = (((struct o20_short *)(a4))->v);
        if ((unsigned char)(*(signed char *)(((((t0 << 1) + t0) + 0xC2A2790) + 0x2))) != 0xFF) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        }
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (*(signed char *)(((((t0 << 1) + t0) + 0xC2A2790) + 0x0)));
        t0 = (((struct o20_short *)(a4))->v);
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(signed char *)(((((t0 << 1) + t0) + 0xC2A2790) + 0x1))), 0x1A, (*(int *)0xC4B40CC));
    }
    return 0x22;
}

int FUN_0c150faa(int a4)
{
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o60_float *)(a4))->v)));
    return 0x54;
}
