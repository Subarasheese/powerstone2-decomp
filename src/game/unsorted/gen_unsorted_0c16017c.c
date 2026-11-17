/* game/unsorted: functions 0C16017C-0C1605D8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c16017c(int a4);
int FUN_0c1603c2(int a4);

int FUN_0c16017c(int a4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register float u0;
    register float u1;
    register float u2;

    t5 = *(int *)((a4 + 0x10));
    if ((*(short *)((a4 + 0x1E))) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
    }
    t6 = 0x0;
    for (;;) {
        t7 = *(int *)((((t6 << 2) + (0xC4 + a4)) + 0x0));
        if ((t6 != 0) && ((t6 != 1) && (t6 != 2))) {
            if (t6 != 3) {
                if ((t6 != 4) && ((t6 != 5) && ((t6 != 6) && (t6 != 7)))) {
                } else {
                    t8 = (t6 - 4);
                    if ((int)(*(short *)((a4 + 0x1C))) > (int)((((t6 - 4) << 2) + t8) + 0x14)) {
                        u1 = ((((struct o70_float *)(t7))->v));
                        u1 = (u1 - 15.0f);
                        (((struct o70_float *)(t7))->v) = u1;
                        u2 = ((((struct o84_float *)(t7))->v));
                        if (0.300000012f > u2) {
                            u1 = ((((struct o84_float *)(t7))->v));
                            u1 = (u1 + 0.0799999982f);
                            (((struct o84_float *)(t7))->v) = u1;
                        }
                        u2 = ((((struct o84_float *)(t7))->v));
                        (((struct o88_float *)(t7))->v) = u2;
                        u1 = ((((struct o18_float *)(t7))->v));
                        if (1.0f > u1) {
                            u1 = ((((struct o18_float *)(t7))->v));
                            u1 = (u1 + 0.200000003f);
                            (((struct o18_float *)(t7))->v) = u1;
                            u2 = u1;
                            (((struct o20_float *)(t7))->v) = u2;
                            (((struct o1C_float *)(t7))->v) = u2;
                        }
                        u1 = ((((struct o378C_float *)(t5))->v));
                        u2 = ((((struct o70_float *)(t7))->v));
                        u1 = (u1 * 210.0f);
                        u1 = (-u1);
                        if ((u1 > u2) && (t0 = (u1 > u2), u1 = 0.0f, u0 = (((struct o18_float *)(t7))->v), u2 = u0, u2 > u1)) {
                            u2 = ((((struct o18_float *)(t7))->v));
                            u2 = (u2 - 0.300000012f);
                            (((struct o18_float *)(t7))->v) = u2;
                            if (u1 > (u2)) {
                                (((struct o18_float *)(t7))->v) = 0.0f;
                            }
                            u1 = ((((struct o18_float *)(t7))->v));
                            (((struct o20_float *)(t7))->v) = u1;
                            (((struct o1C_float *)(t7))->v) = u1;
                        }
                        u1 = ((((struct o378C_float *)(t5))->v));
                        u2 = ((((struct o70_float *)(t7))->v));
                        u1 = (u1 * 280.0f);
                        u1 = (-u1);
                        if (u1 > u2) {
                            (((struct o70_float *)(t7))->v) = 0.0f;
                            (((struct o88_float *)(t7))->v) = 0.0f;
                            (((struct o84_float *)(t7))->v) = 0.0f;
                            (((struct o20_float *)(t7))->v) = 0.0f;
                            (((struct o1C_float *)(t7))->v) = 0.0f;
                            (((struct o18_float *)(t7))->v) = 0.0f;
                        }
                    }
                }
            } else {
                if (((int)(*(short *)((a4 + 0x1C))) < (int)0x32) && (t1 = *(short *)((a4 + 0x1C)), (int)t1 > (int)0x14)) {
                    u1 = ((((struct o88_float *)(t7))->v));
                    u1 = (u1 + 0.100000001f);
                    (((struct o88_float *)(t7))->v) = u1;
                    u2 = ((((struct o88_float *)(t7))->v));
                    if (!(1.0f > u2)) {
                        (((struct o88_float *)(t7))->v) = 1.0f;
                    }
                }
            }
        } else {
            t8 = (*(signed char *)((t7 + 0x0)));
            t9 = t6;
            t9 = (t9 << 2);
            t9 = (t9 << 1);
            if (t8 == 0) {
            } else {
                if ((int)(*(short *)((a4 + 0x1C))) <= (int)t9) {
                } else {
                    u1 = ((((struct o84_float *)(t7))->v));
                    u1 = (u1 + 0.075000003f);
                    (((struct o84_float *)(t7))->v) = u1;
                    u2 = ((((struct o84_float *)(t7))->v));
                    (((struct o8C_float *)(t7))->v) = u2;
                    (((struct o88_float *)(t7))->v) = u2;
                    u1 = ((((struct o84_float *)(t7))->v));
                    if (1.0f > u1) {
                    } else {
                        u1 = ((((struct o18_float *)(t7))->v));
                        u1 = (u1 * 0.699999988f);
                        (((struct o18_float *)(t7))->v) = u1;
                        u2 = u1;
                        (((struct o20_float *)(t7))->v) = u2;
                        (((struct o1C_float *)(t7))->v) = u2;
                        u1 = ((((struct o18_float *)(t7))->v));
                        if (0.100000001f > u1) {
                            *(unsigned char *)((t7 + 0x0)) = 0x0;
                        }
                    }
                }
            }
        }
        t6 = (t6 + 0x1);
        if ((int)t6 < (int)0x8) continue;
        break;
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    if (((int)(*(short *)((a4 + 0x1C))) <= (int)0xB4) && ((t2 = *(signed char *)((t5 + 0x14)), t2 == 0) && ((t3 = *(signed char *)((t5 + 0x3715)), t3 != 23) && (t4 = *(signed char *)0xC540F98, t4 == 0)))) {
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(t5))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(t5))->v));
        u0 = ((((struct o2C_float *)(t5))->v));
        u0 = u0 + 280.0f * ((((struct o378C_float *)(t5))->v));
        (((struct o2C_float *)(a4))->v) = u0;
        return 0x2C;
    }
    return FUN_0c03f346(a4, t7, t6, t5);
}

int FUN_0c1603c2(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t1 = FUN_0c03f444(0x5, 0x0, 0x8);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x4)) = 0xC16017C;
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct oA8_uchar *)(t1))->v) = 0x0;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        (((struct o28_float *)(t1))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o30_float *)(t1))->v) = ((((struct o30_float *)(a4))->v));
        u0 = (((struct o378C_float *)(a4))->v);
        u1 = ((((struct o2C_float *)(a4))->v));
        u1 = u1 + 280.0f * u0;
        (((struct o2C_float *)(t1))->v) = u1;
        *(unsigned short *)((t1 + 0x1C)) = 0x0;
        *(unsigned short *)((t1 + 0x1E)) = 0x6;
        t3 = 0x21;
        t4 = 0x0;
        t5 = 0x0;
        u2 = u0;
        u0 = u1;
        for (;;) {
            t7 = *(int *)((((t5 << 2) + (0xC4 + t1)) + 0x0));
            if ((t5 != 0) && ((t5 != 1) && (t5 != 2))) {
                if (t5 != 3) {
                    if (t5 == 4) {
                        t4 = t7;
                        FUN_0c03744a(t4, (*(int *)((((*(signed char *)(((((short)(*(signed char *)((t1 + 0x1))) * (short)0x3938) + 0xC532498) + 0x3719))) << 2) + 0xC2A2C80))), 0x12, (*(int *)0xC4B40CC));
                        *(unsigned char *)((t7 + 0x0)) = 0x1;
                        *(unsigned short *)((t7 + 0x6)) = 0x21F;
                        (((struct o70_float *)(t7))->v) = 0.0f;
                        (((struct o74_float *)(t7))->v) = 0.0f;
                        (((struct o6C_float *)(t7))->v) = 0.0f;
                        (((struct o78_uint *)(t7))->v) = 0x4000;
                        (((struct o88_float *)(t7))->v) = 0.0f;
                        (((struct o84_float *)(t7))->v) = 0.0f;
                        (((struct o8C_float *)(t7))->v) = 1.0f;
                        (((struct o20_float *)(t7))->v) = 0.0f;
                        (((struct o1C_float *)(t7))->v) = 0.0f;
                        (((struct o18_float *)(t7))->v) = 0.0f;
                        t8 = 0x18;
                    } else {
                        t9 = t5;
                        if ((t5 != 5) && ((t5 != 6) && (t5 != 7))) {
                            t10 = t0;
                            t6 = t4;
                            u1 = u2;
                            u3 = u0;
                        } else {
                            t4 = t7;
                            FUN_0c03744a(t4, (*(int *)((((*(signed char *)(((((short)(*(signed char *)((t1 + 0x1))) * (short)0x3938) + 0xC532498) + 0x3719))) << 2) + 0xC2A2C80))), 0x12, (*(int *)0xC4B40CC));
                            *(unsigned char *)((t7 + 0x0)) = 0x1;
                            *(unsigned short *)((t7 + 0x6)) = 0x21F;
                            (((struct o70_float *)(t7))->v) = 0.0f;
                            (((struct o74_float *)(t7))->v) = 0.0f;
                            (((struct o6C_float *)(t7))->v) = 0.0f;
                            (((struct o78_uint *)(t7))->v) = 0x4000;
                            (((struct o88_float *)(t7))->v) = 0.0f;
                            (((struct o84_float *)(t7))->v) = 0.0f;
                            (((struct o8C_float *)(t7))->v) = 1.0f;
                            (((struct o20_float *)(t7))->v) = 0.0f;
                            (((struct o1C_float *)(t7))->v) = 0.0f;
                            (((struct o18_float *)(t7))->v) = 0.0f;
                            t9 = 0x18;
                        }
                        t8 = t9;
                        t9 = t10;
                        t10 = t6;
                        u4 = u1;
                        u1 = u3;
                    }
                    t6 = t8;
                    t8 = t9;
                    t9 = t10;
                    u3 = u4;
                    u4 = u1;
                } else {
                    t3 = 0xC4B40CC;
                    t4 = t7;
                    FUN_0c03744a(t4, 0x0, 0x58, (*(int *)((t3 + 0x0))));
                    *(unsigned char *)((t7 + 0x0)) = 0x1;
                    *(unsigned short *)((t7 + 0x6)) = 0x21F;
                    (((struct o70_float *)(t7))->v) = 0.0f;
                    (((struct o74_float *)(t7))->v) = 0.0f;
                    (((struct o6C_float *)(t7))->v) = 0.0f;
                    (((struct o8C_float *)(t7))->v) = 1.0f;
                    (((struct o84_float *)(t7))->v) = 1.0f;
                    (((struct o88_float *)(t7))->v) = 0.0f;
                    t0 = 0x3719;
                    t3 = (*(signed char *)((t0 + (((short)(*(signed char *)((t1 + 0x1))) * (short)0x3938) + 0xC532498))));
                    t10 = t3;
                    t3 = (t3 << 1);
                    t3 = (t3 + t10);
                    t3 = (t3 << 2);
                    u0 = (*(float *)((t3 + 0xC2A2C50)));
                    t3 = t0;
                    (((struct o18_float *)(t7))->v) = u0;
                    t3 = (*(signed char *)((t3 + (((short)(*(signed char *)((t1 + 0x1))) * (short)0x3938) + 0xC532498))));
                    t10 = t3;
                    t3 = (t3 << 1);
                    t3 = (t3 + t10);
                    t3 = (t3 << 2);
                    u0 = (*(float *)((t3 + 0xC2A2C54)));
                    t3 = t0;
                    (((struct o1C_float *)(t7))->v) = u0;
                    t3 = (*(signed char *)((t3 + (((short)(*(signed char *)((t1 + 0x1))) * (short)0x3938) + 0xC532498))));
                    t10 = t3;
                    t3 = (t3 << 1);
                    t3 = (t3 + t10);
                    t3 = (t3 << 2);
                    u0 = (*(float *)((t3 + 0xC2A2C58)));
                    (((struct o20_float *)(t7))->v) = u0;
                    t6 = 0x20;
                    t8 = t0;
                    u4 = u0;
                }
                t10 = t8;
                t8 = t9;
                u1 = u3;
                u3 = u4;
            } else {
                t3 = 0xC4B40CC;
                t4 = t7;
                FUN_0c03744a(t4, t5, 0x4B, (*(int *)((t3 + 0x0))));
                *(unsigned char *)((t7 + 0x0)) = 0x1;
                *(unsigned short *)((t7 + 0x6)) = 0x21F;
                (((struct o70_float *)(t7))->v) = 0.0f;
                (((struct o74_float *)(t7))->v) = 0.0f;
                (((struct o6C_float *)(t7))->v) = 0.0f;
                (((struct o8C_float *)(t7))->v) = 0.0f;
                (((struct o88_float *)(t7))->v) = 0.0f;
                (((struct o84_float *)(t7))->v) = 0.0f;
                (((struct o20_float *)(t7))->v) = 1.0f;
                (((struct o1C_float *)(t7))->v) = 1.0f;
                (((struct o18_float *)(t7))->v) = 1.0f;
                t6 = 0x18;
            }
            u2 = u1;
            u0 = u3;
            t0 = t10;
            t3 = 0x8;
            t4 = t8;
            t5 = (t5 + 0x1);
            if ((int)t5 < (int)t3) continue;
            break;
        }
        t2 = t6;
    }
    return t2;
}
