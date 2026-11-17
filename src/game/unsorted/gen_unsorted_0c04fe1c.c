/* game/unsorted: functions 0C04FE1C-0C0506E2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_float { char p[0x88]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c04fe1c(void);
int FUN_0c0502ca(int a4);

int FUN_0c04fe1c(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x8, 0x0, 0xC);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04F8C4;
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 64.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 64.0f);
        (((struct o30_float *)(t0))->v) = -10.0f;
        (((struct o44_float *)(t0))->v) = 0.015625f;
        (((struct o40_float *)(t0))->v) = 0.015625f;
        (((struct o48_float *)(t0))->v) = 1.56249996e-07f;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 2.34375f);
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o0_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o4_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o2C_int *)0xC2413D8)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o0_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o4_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o30_int *)0xC2413D8)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct oC_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o10_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o34_int *)0xC2413D8)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oD0_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct oC_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o10_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o38_int *)0xC2413D8)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oD4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o18_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o1C_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o3C_int *)0xC2413D8)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oD8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o18_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o1C_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o0_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oDC_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o24_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o28_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o4_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oE0_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o30_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o34_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o8_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oE4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o3C_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o0_float *)0xC2413D8)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct oC_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oE8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o3C_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o0_float *)0xC2413D8)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o10_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oEC_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o8_float *)0xC2413D8)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct oC_float *)0xC2413D8)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o14_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oF0_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o14_float *)0xC2413D8)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o18_float *)0xC2413D8)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o18_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t1 = 0x80;
    }
    return t1;
}

int FUN_0c0502ca(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)0xC542366;
            t2 = *(signed char *)0xC542236;
            if (t2 != 0) {
                if (t2 != 1) {
                    if (t2 != 2) {
                        if (t2 != 3) {
                            t3 = 0xC241434;
                            if (t2 == 4) {
                                if ((t1 & 0x8) == 0) {
                                    t2 = ((((struct oEC_int *)(a4))->v));
                                    u0 = ((((((struct o28_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                                } else {
                                    t2 = ((((struct oF0_int *)(a4))->v));
                                    u0 = ((((((struct o2C_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                                }
                                (((struct o88_float *)(t2))->v) = u0;
                                t3 = t2;
                            }
                            t2 = t3;
                        } else {
                            if ((t1 & 0x8) == 0) {
                                t3 = ((((struct oE4_int *)(a4))->v));
                                u0 = ((((((struct o20_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                            } else {
                                t3 = ((((struct oE8_int *)(a4))->v));
                                u0 = ((((((struct o24_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                            }
                            (((struct o88_float *)(t3))->v) = u0;
                            t2 = t3;
                        }
                        t3 = t2;
                    } else {
                        if ((t1 & 0x2) == 0) {
                            t2 = ((((struct oDC_int *)(a4))->v));
                            u0 = ((((((struct o18_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        } else {
                            t2 = ((((struct oE0_int *)(a4))->v));
                            u0 = ((((((struct o1C_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        }
                        (((struct o88_float *)(t2))->v) = u0;
                        t3 = t2;
                    }
                    t2 = t3;
                } else {
                    if ((t1 & 0x1) == 0) {
                        if ((t1 & 0x2) == 0) {
                            t3 = ((((struct oCC_int *)(a4))->v));
                            u0 = ((((((struct o8_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        } else {
                            t3 = ((((struct oD0_int *)(a4))->v));
                            u0 = ((((((struct oC_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        }
                        (((struct o88_float *)(t3))->v) = u0;
                        t4 = t3;
                    } else {
                        if ((t1 & 0x2) == 0) {
                            t3 = ((((struct oD4_int *)(a4))->v));
                            u0 = ((((((struct o10_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        } else {
                            t3 = ((((struct oD8_int *)(a4))->v));
                            u0 = ((((((struct o14_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        }
                        (((struct o88_float *)(t3))->v) = u0;
                        t4 = t3;
                    }
                    t2 = t4;
                }
                t3 = t2;
            } else {
                if ((t1 & 0x1) == 0) {
                    t1 = ((((struct oC4_int *)(a4))->v));
                    u0 = ((((struct o0_float *)0xC241434)->v));
                    u1 = (float)(*(short *)((a4 + 0x1C)));
                } else {
                    t1 = ((((struct oC8_int *)(a4))->v));
                    u0 = ((((struct o4_float *)0xC241434)->v));
                    u1 = (float)(*(short *)((a4 + 0x1C)));
                }
                (((struct o88_float *)(t1))->v) = ((u0 * u1) / 100.0f);
                t3 = t1;
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((short)((t1 + 0x1) - 1) == 100) {
                (((struct o14_uchar *)(a4))->v) = 0x0;
            }
            t1 = t3;
            t2 = 0xC5421F8;
            t3 = 0x2;
        } else {
            if (t0 == 2) {
                t0 = 0xC241434;
                t4 = 0xC5421F8;
                t5 = 0x2;
            } else {
                FUN_0c03f346(a4, 0xC241434, 0xC5421F8, 0x2);
            }
            t1 = t0;
            t2 = t4;
            t3 = t5;
        }
        t0 = t1;
        t1 = t2;
        t2 = t3;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t3 = 0xA8;
        t4 = 0x0;
        for (;;) {
            if ((unsigned int)t4 >= (unsigned int)0x30) {
                break;
            }
            t5 = 0xC4;
            t3 = 0x88;
            t5 = (t5 + a4);
            t5 = (t5 + t4);
            t5 = (*(int *)((t5 + 0x0)));
            t4 = (t4 + 0x4);
            *(float *)((t5 + t3)) = 0.0f;
        }
        t3 = *(signed char *)0xC542236;
        switch (t3) {
        case 4:
            if (((*(signed char *)0xC542366) & 0x8) != 0) {
                t3 = ((((struct oE8_int *)(a4))->v));
                u0 = ((((((struct o24_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
            } else {
                t3 = ((((struct oE4_int *)(a4))->v));
                u0 = ((((((struct o20_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
            }
            (((struct o88_float *)(t3))->v) = u0;
            if (((*(signed char *)0xC542366) & 0x2) != 0) {
                t3 = ((((struct oE0_int *)(a4))->v));
                u0 = ((((((struct o1C_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
            } else {
                t3 = ((((struct oDC_int *)(a4))->v));
                u0 = ((((((struct o18_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
            }
            (((struct o88_float *)(t3))->v) = u0;
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t3 = ((((struct oD8_int *)(a4))->v));
                    u0 = ((((((struct o14_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                } else {
                    t3 = ((((struct oD4_int *)(a4))->v));
                    u0 = ((((((struct o10_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                }
                (((struct o88_float *)(t3))->v) = u0;
            } else {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t3 = ((((struct oD0_int *)(a4))->v));
                    u0 = ((((((struct oC_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                } else {
                    t3 = ((((struct oCC_int *)(a4))->v));
                    u0 = ((((((struct o8_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                }
                (((struct o88_float *)(t3))->v) = u0;
            }
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                t3 = ((((struct oC8_int *)(a4))->v));
                u0 = ((((struct o4_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            } else {
                t3 = ((((struct oC4_int *)(a4))->v));
                u0 = ((((struct o0_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            }
            (((struct o88_float *)(t3))->v) = ((u0 * u1) / 100.0f);
            break;
        case 3:
            if (((*(signed char *)0xC542366) & 0x2) != 0) {
                t3 = ((((struct oE0_int *)(a4))->v));
                u0 = ((((((struct o1C_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
            } else {
                t3 = ((((struct oDC_int *)(a4))->v));
                u0 = ((((((struct o18_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
            }
            (((struct o88_float *)(t3))->v) = u0;
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t3 = ((((struct oD8_int *)(a4))->v));
                    u0 = ((((((struct o14_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                } else {
                    t3 = ((((struct oD4_int *)(a4))->v));
                    u0 = ((((((struct o10_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                }
                (((struct o88_float *)(t3))->v) = u0;
            } else {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t3 = ((((struct oD0_int *)(a4))->v));
                    u0 = ((((((struct oC_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                } else {
                    t3 = ((((struct oCC_int *)(a4))->v));
                    u0 = ((((((struct o8_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                }
                (((struct o88_float *)(t3))->v) = u0;
            }
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                t3 = ((((struct oC8_int *)(a4))->v));
                u0 = ((((struct o4_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            } else {
                t3 = ((((struct oC4_int *)(a4))->v));
                u0 = ((((struct o0_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            }
            (((struct o88_float *)(t3))->v) = ((u0 * u1) / 100.0f);
            break;
        case 2:
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t3 = ((((struct oD8_int *)(a4))->v));
                    u0 = ((((((struct o14_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                } else {
                    t3 = ((((struct oD4_int *)(a4))->v));
                    u0 = ((((((struct o10_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                }
                (((struct o88_float *)(t3))->v) = u0;
            } else {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t3 = ((((struct oD0_int *)(a4))->v));
                    u0 = ((((((struct oC_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                } else {
                    t3 = ((((struct oCC_int *)(a4))->v));
                    u0 = ((((((struct o8_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                }
                (((struct o88_float *)(t3))->v) = u0;
            }
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                t3 = ((((struct oC8_int *)(a4))->v));
                u0 = ((((struct o4_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            } else {
                t3 = ((((struct oC4_int *)(a4))->v));
                u0 = ((((struct o0_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            }
            (((struct o88_float *)(t3))->v) = ((u0 * u1) / 100.0f);
            break;
        case 1:
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                t3 = ((((struct oC8_int *)(a4))->v));
                u0 = ((((struct o4_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            } else {
                t3 = ((((struct oC4_int *)(a4))->v));
                u0 = ((((struct o0_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            }
            (((struct o88_float *)(t3))->v) = ((u0 * u1) / 100.0f);
            break;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t3 = *(signed char *)0xC542366;
        t4 = *(signed char *)0xC542236;
        if (t4 != 0) {
            if (t4 != 1) {
                if (t4 != 2) {
                    if (t4 != 3) {
                        t5 = 0xC241434;
                        if (t4 == 4) {
                            if ((t3 & 0x8) == 0) {
                                t4 = ((((struct oEC_int *)(a4))->v));
                                u0 = ((((((struct o28_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                            } else {
                                t4 = ((((struct oF0_int *)(a4))->v));
                                u0 = ((((((struct o2C_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                            }
                            (((struct o88_float *)(t4))->v) = u0;
                            t5 = t4;
                        }
                        t4 = t5;
                    } else {
                        if ((t3 & 0x8) == 0) {
                            t5 = ((((struct oE4_int *)(a4))->v));
                            u0 = ((((((struct o20_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        } else {
                            t5 = ((((struct oE8_int *)(a4))->v));
                            u0 = ((((((struct o24_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        }
                        (((struct o88_float *)(t5))->v) = u0;
                        t4 = t5;
                    }
                    t5 = t4;
                } else {
                    if ((t3 & 0x2) == 0) {
                        t4 = ((((struct oDC_int *)(a4))->v));
                        u0 = ((((((struct o18_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                    } else {
                        t4 = ((((struct oE0_int *)(a4))->v));
                        u0 = ((((((struct o1C_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                    }
                    (((struct o88_float *)(t4))->v) = u0;
                    t5 = t4;
                }
                t4 = t5;
            } else {
                if ((t3 & 0x1) == 0) {
                    if ((t3 & 0x2) == 0) {
                        t5 = ((((struct oCC_int *)(a4))->v));
                        u0 = ((((((struct o8_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                    } else {
                        t5 = ((((struct oD0_int *)(a4))->v));
                        u0 = ((((((struct oC_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                    }
                    (((struct o88_float *)(t5))->v) = u0;
                    t4 = t5;
                } else {
                    if ((t3 & 0x2) == 0) {
                        t5 = ((((struct oD4_int *)(a4))->v));
                        u0 = ((((((struct o10_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                    } else {
                        t5 = ((((struct oD8_int *)(a4))->v));
                        u0 = ((((((struct o14_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                    }
                    (((struct o88_float *)(t5))->v) = u0;
                    t4 = t5;
                }
            }
            t5 = t4;
        } else {
            if ((t3 & 0x1) == 0) {
                t3 = ((((struct oC4_int *)(a4))->v));
                u0 = ((((struct o0_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            } else {
                t3 = ((((struct oC8_int *)(a4))->v));
                u0 = ((((struct o4_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            }
            (((struct o88_float *)(t3))->v) = ((u0 * u1) / 100.0f);
            t5 = t3;
        }
        t3 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t3 + 0x1);
        if ((short)((t3 + 0x1) - 1) == 100) {
            (((struct o14_uchar *)(a4))->v) = 0x0;
        }
        t0 = t5;
        t1 = 0xC5421F8;
        t2 = 0x2;
    }
    t3 = *(signed char *)((a4 + 0x15));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 != 3) {
                    if (t3 != 4) {
                        return FUN_0c03f346(a4, t0, t1, t2);
                    }
                    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0500000007f);
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    }
                    return t1;
                }
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1E)) = 0x14;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                return t1;
            }
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.0500000007f);
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x78;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oB0_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1E)) = 0xB4;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0x14;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
