/* Straight-line functions with calls and guards (batch gen_he): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c1363a4(int);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c13648e(int a4, int a5, int a6, int a7);

int FUN_0c13648e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    int t5;
    register int t6;
    register float u0;

    t4 = *(int *)((a4 + 0x10));
    (((struct oA8_uchar *)(a4))->v) = (*(signed char *)((t4 + 0xA8)));
    t5 = *(signed char *)((a4 + 0x14));
    if (t5 != 0) {
        if (t5 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        FUN_0c1363a4(a4);
        t5 = *(signed char *)((a4 + 0x2));
        if ((t5 != 0) && (t5 != 1)) {
            if (t5 != 2) {
                if (t5 != 3) {
                    t6 = t5;
                    if (t5 == 4) {
                        FUN_0c187798();
                        thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 10.0f);
                        t5 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
                        if (((short)(t5 - 1) != 0) && (t0 = *(signed char *)((t4 + 0x3715)), t0 == 20)) {
                            t5 = t0;
                        } else {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t5 = 0x14;
                        }
                        t6 = t5;
                    }
                    t0 = t6;
                } else {
                    FUN_0c187798();
                    thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 35.0f);
                    t5 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
                    if (((short)(t5 - 1) != 0) && (t1 = *(signed char *)((t4 + 0x3715)), t1 == 20)) {
                        t5 = t1;
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t5 = 0x14;
                    }
                    t0 = t5;
                }
                t1 = t0;
            } else {
                FUN_0c187798();
                thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 28.0f);
                u0 = ((((struct o28_float *)(a4))->v));
                u0 = u0 + 30.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
                (((struct o28_float *)(a4))->v) = u0;
                u0 = ((((struct o30_float *)(a4))->v));
                u0 = u0 + 30.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
                (((struct o30_float *)(a4))->v) = u0;
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                if ((short)(t0 - 1) != 0) {
                    t0 = *(signed char *)((t4 + 0x3715));
                    t5 = t0;
                    if (t0 != 19) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t5 = 0x14;
                    }
                    t0 = t5;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x14;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            FUN_0c187798();
            FUN_0c187798();
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            if ((*(signed char *)((t4 + 0x3715))) != 26) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            } else {
                t5 = 0x16;
                if ((int)(*(signed char *)((t4 + 0x16))) < (int)0x2) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t5 = 0x14;
                }
                t1 = t5;
            }
            t0 = t1;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 1)) {
        if (t0 != 2) {
            if ((t0 == 3) || (t0 == 4)) {
                *(unsigned short *)((a4 + 0x1C)) = 0x258;
            }
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x46;
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    FUN_0c1363a4(a4);
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 1)) {
        if (t0 != 2) {
            if (t0 != 3) {
                t1 = t0;
                if (t0 == 4) {
                    FUN_0c187798();
                    thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 10.0f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    if (((short)(t0 - 1) != 0) && (t2 = *(signed char *)((t4 + 0x3715)), t2 == 20)) {
                        t0 = t2;
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    t1 = t0;
                }
                t0 = t1;
            } else {
                FUN_0c187798();
                thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 35.0f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if (((short)(t1 - 1) != 0) && (t3 = *(signed char *)((t4 + 0x3715)), t3 == 20)) {
                    t1 = t3;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            FUN_0c187798();
            thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 28.0f);
            u0 = ((((struct o28_float *)(a4))->v));
            u0 = u0 + 30.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
            (((struct o28_float *)(a4))->v) = u0;
            u0 = ((((struct o30_float *)(a4))->v));
            u0 = u0 + 30.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
            (((struct o30_float *)(a4))->v) = u0;
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = *(signed char *)((t4 + 0x3715));
                t2 = t0;
                if (t0 != 19) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                t0 = t2;
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        FUN_0c187798();
        FUN_0c187798();
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((*(signed char *)((t4 + 0x3715))) != 26) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        } else {
            t2 = 0x16;
            if ((int)(*(signed char *)((t4 + 0x16))) < (int)0x2) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}
