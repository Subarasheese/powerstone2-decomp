/* Straight-line functions with calls and guards (batch gen_qk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c133384(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
void FUN_0c1333cc(int a4, int a5, int a6, int a7);

void FUN_0c1333cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                FUN_0c133384(a4);
                t0 = *(signed char *)((a4 + 0x15));
                if (t0 == 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x23F;
                    (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
                if ((t0 == 0) || (t0 == 1)) {
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                    if ((short)(t0 + 0x1) == 5) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    }
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
                    if (0.0f > ((((struct o40_float *)(a4))->v))) {
                        (((struct o40_float *)(a4))->v) = 0.0f;
                    }
                    u0 = (((struct o40_float *)(a4))->v);
                    (((struct o48_float *)(a4))->v) = u0;
                    (((struct o44_float *)(a4))->v) = u0;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                }
                return;
            }
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        (((struct o50_float *)(a4))->v) = 20.0f;
        t0 = *(int *)((a4 + 0x38));
        t1 = 0xFFFFC000;
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            t1 = 0x4000;
        }
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((t1 + t0))) * 5.0f);
        t0 = *(int *)((a4 + 0x38));
        t1 = 0xFFFFC000;
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            t1 = 0x4000;
        }
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((t1 + t0))) * 5.0f);
    }
    FUN_0c133384(a4);
    if ((*(signed char *)((a4 + 0x15))) != 0) {
        
    } else {
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o12E_ushort *)(a4))->v) = 0x0;
        } else {
            (((struct o5C_float *)(a4))->v) = -1.0f;
        }
    }
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
    if ((u0 + 0.100000001f) > (1.0f + 1.0f)) {
        (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
    }
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = u0;
    (((struct o44_float *)(a4))->v) = u0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
}
