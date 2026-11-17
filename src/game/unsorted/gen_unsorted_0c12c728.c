/* game/unsorted: functions 0C12C728-0C12CB7A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
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
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0657d4(int, int);
int FUN_0c0659d6(int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c12cb8c(int, int);
int FUN_0c12d748(int);
float math_signed_sqrt(float);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c12c728(int a4, int a5);
int FUN_0c12c8d0(int a4, int a5, int a6, int a7);

int FUN_0c12c728(int a4, int a5)
{
    int stk[9];
    register int t0;
    register int t46;
    register int t7;
    register int t10;
    register int t18;
    register float u24;
    register float u25;
    register float u26;
    register float u27;
    register float t28;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t46 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12C8D0;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (t0 + 0x28));
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t7 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t7));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x32, 0x2, 0x100, (~((int)0x1 << (int)t7)), 0x0, 0x0);
        FUN_0c07e2f4(t0, 0x60);
        t10 = *(signed char *)((t0 + 0x1));
        *(unsigned char *)(((int)stk + 20)) = t10;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 20))), 0x0, (*(int *)((((signed char)t10 << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1C)) = 0xB4;
        *(unsigned short *)((t0 + 0x1E)) = 0x5;
        (((struct o14_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 16)));
        (((struct o15_uchar *)(t0))->v) = 0x0;
        t18 = *(signed char *)(((int)stk + 16));
        if (t18 != 0) {
            t46 = t18;
            if (t18 != 1) {
            } else {
                FUN_0c187798();
                (((struct o4_float *)((((int)stk + 16) + 0x8)))->v) = (((((struct o4_float *)((((int)stk + 16) + 0x8)))->v)) - ((((struct o2C_float *)(t0))->v)));
                (((struct o8_float *)(((int)stk + 16)))->v) = (((((struct o8_float *)(((int)stk + 16)))->v)) - ((((struct o28_float *)(t0))->v)));
                u24 = (((struct o30_float *)(t0))->v);
                u25 = (((struct o8_float *)((((int)stk + 16) + 0x8)))->v);
                (((struct o8_float *)((((int)stk + 16) + 0x8)))->v) = (u25 - u24);
                u26 = (((struct o8_float *)(((int)stk + 16)))->v);
                u27 = ((u25 - u24) * (u25 - u24));
                u27 = u27 + u26 * u26;
                t28 = math_signed_sqrt(u27);
                t46 = math_atan2_angle16(t28, ((((struct o4_float *)((((int)stk + 16) + 0x8)))->v)));
                *(unsigned int *)((t0 + 0x34)) = (t46 - 0x4000);
            }
        } else {
            *(unsigned int *)((t0 + 0x34)) = (unsigned short)((*(int *)((t0 + 0x34))) + 0xF8E4);
            t46 = t18;
        }
    }
    return t46;
}

int FUN_0c12c8d0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x15));
            if (t0 != 0) {
                t2 = t0;
                if (t0 != 1) {
                } else {
                    FUN_0c059e60(t1, 0x22);
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                    t2 = 0x14;
                }
                t0 = t2;
            } else {
                u0 = math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
                u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                (((struct o4C_float *)(a4))->v) = (u1 * 40.0f);
                u0 = math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
                u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                (((struct o54_float *)(a4))->v) = (u1 * 40.0f);
                (((struct o50_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 40.0f));
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                if (((*(short *)((a4 + 0x1C))) & 0x3) == 0) {
                    FUN_0c12d748(a4);
                }
                if ((*(short *)((a4 + 0x1E))) != 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                } else {
                    (((struct o12E_ushort *)(a4))->v) = 0xF0;
                }
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                if ((short)(t2 - 1) != 0) {
                    t2 = FUN_0c0657d4(a4, 0x30);
                    if (t2 != 0) {
                        t2 = 0xA;
                        for (;;) {
                            if (t2 == 0) {
                                break;
                            }
                            FUN_0c12cb8c(a4, 0x0);
                            t2 = (t2 - 1);
                        }
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    } else {
                        t3 = FUN_0c0659d6(a4, 0x0, 0x63);
                        t4 = t3;
                        if (t3 != 0) {
                            t3 = 0xA;
                            for (;;) {
                                if (t3 == 0) {
                                    break;
                                }
                                FUN_0c12cb8c(a4, 0x2);
                                t3 = (t3 - 1);
                            }
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t2 = t4;
                    }
                    t3 = t2;
                } else {
                    t2 = 0xA;
                    for (;;) {
                        if (t2 == 0) {
                            break;
                        }
                        FUN_0c12cb8c(a4, 0x0);
                        t2 = (t2 - 1);
                    }
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t0 = t3;
            }
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t2 = t0;
        if (t0 == 1) {
            FUN_0c059e60(t1, 0x22);
            (((struct o14_uchar *)(a4))->v) = 0xA;
            t2 = 0x14;
        }
        t0 = t2;
    } else {
        *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + 0xB6);
        u0 = math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        (((struct o4C_float *)(a4))->v) = (u1 * 40.0f);
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u1 * 40.0f);
        (((struct o50_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 40.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        if (((*(short *)((a4 + 0x1C))) & 0x3) == 0) {
            FUN_0c12d748(a4);
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        } else {
            (((struct o12E_ushort *)(a4))->v) = 0xF0;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) != 0) {
            t1 = FUN_0c0657d4(a4, 0x30);
            if (t1 != 0) {
                t1 = 0xA;
                for (;;) {
                    if (t1 == 0) {
                        break;
                    }
                    FUN_0c12cb8c(a4, 0x0);
                    t1 = (t1 - 1);
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            } else {
                t2 = FUN_0c0659d6(a4, 0x0, 0x63);
                t3 = t2;
                if (t2 != 0) {
                    t2 = 0xA;
                    for (;;) {
                        if (t2 == 0) {
                            break;
                        }
                        FUN_0c12cb8c(a4, 0x2);
                        t2 = (t2 - 1);
                    }
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t1 = t3;
            }
            t2 = t1;
        } else {
            t1 = 0xA;
            for (;;) {
                if (t1 == 0) {
                    break;
                }
                FUN_0c12cb8c(a4, 0x0);
                t1 = (t1 - 1);
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}
