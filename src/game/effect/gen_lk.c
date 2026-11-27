/* Straight-line functions with calls and guards (batch gen_lk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c1363a4(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c13648e(int a4, int a5, int a6, int a7);
struct o10_int { char p[0x10]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };


int FUN_0c13648e(int a4, int a5, int a6, int a7)
{
    int t2;
    int t0;
    int t3;
    int t1;
    float u0;

    t1 = (((struct o10_int *)(a4))->v);
    (((struct oA8_uchar *)(a4))->v) = (*(signed char *)(t1 + 0xA8));
    t2 = *(signed char *)(a4 + 0x14);
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        t2 = *(signed char *)(a4 + 0x2);
        if ((t2 != 0) && (t2 != 1)) {
            if (t2 != 2) {
                if ((t2 != 3) && (t2 != 4)) {
                } else {
                    (((struct o1C_ushort *)(a4))->v) = 0x258;
                }
            } else {
                (((struct o1C_ushort *)(a4))->v) = 0x46;
            }
        } else {
            (((struct o1C_ushort *)(a4))->v) = 0x0;
        }
    }
    FUN_0c1363a4(a4);
    t2 = *(signed char *)(a4 + 0x2);
    if ((t2 != 0) && (t2 != 1)) {
        if (t2 != 2) {
            t3 = 0;
            if (t2 != 3) {
                if (t2 == 4) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x34) = *(struct mv3 *)(t1 + 0x34); }
                    thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)(t1 + 0x1)) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                    u0 = 10.0f;
                    t3 = 1;
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x34) = *(struct mv3 *)(t1 + 0x34); }
                thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)(t1 + 0x1)) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                u0 = 35.0f;
                t3 = 1;
            }
            if (t3) {
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - u0);
                t3 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t3 - 1);
                if (((short)(t3 - 1) != 0) && (t0 = *(signed char *)(t1 + 0x3715), t0 == 20)) {
                    t3 = t0;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    t3 = 0x14;
                }
                t0 = t3;
            } else {
                t0 = t2;
            }
            t2 = t0;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x34) = *(struct mv3 *)(t1 + 0x34); }
            thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)(t1 + 0x1)) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 28.0f);
            u0 = ((((struct o28_float *)(a4))->v)) + 30.0f * (math_sin_angle16((((((struct o38_int *)(a4))->v)) + 0x4000)));
            (((struct o28_float *)(a4))->v) = u0;
            u0 = ((((struct o30_float *)(a4))->v)) + 30.0f * (math_cos_angle16((((((struct o38_int *)(a4))->v)) + 0x4000)));
            (((struct o30_float *)(a4))->v) = u0;
            t0 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = *(signed char *)(t1 + 0x3715);
                t3 = t0;
                if (t0 != 19) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    t3 = 0x14;
                }
                t0 = t3;
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                t0 = 0x14;
            }
            t2 = t0;
        }
        t0 = t2;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x34) = *(struct mv3 *)(t1 + 0x34); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)(t1 + 0x28); }
        (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1);
        if ((*(signed char *)(t1 + 0x3715)) != 26) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            t2 = 0x14;
        } else {
            t3 = 0x16;
            if ((int)(*(signed char *)(t1 + 0x16)) < (int)0x2) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                t3 = 0x14;
            }
            t2 = t3;
        }
        t0 = t2;
    }
    return t0;
}
