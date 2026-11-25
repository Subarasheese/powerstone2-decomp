/* Straight-line functions with calls and guards (batch gen_us): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c0ef24a(int);
int FUN_0c0ef368(int);
int FUN_0c0ef4aa(int, int, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0ef560(int a4, float f4);

int FUN_0c0ef560(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        (((struct o12A_ushort *)(a4))->v) = 0xF;
        (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFEF;
        FUN_0c0ef4aa(a4, 0x0, f4);
        FUN_0c0ef368(a4);
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        } else {
            u0 = math_sin_angle16((*(int *)((a4 + 0x38))));
            u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
            (((struct o4C_float *)(a4))->v) = (u1 * 10.0f);
            u0 = math_cos_angle16((*(int *)((a4 + 0x38))));
            u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
            (((struct o54_float *)(a4))->v) = (u1 * 10.0f);
            (((struct o50_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x34))))) * 10.0f));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        }
    } else {
        if (t0 != 2) {
            if (t0 != 3) {
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
        } else {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) - 1);
                (((struct o17_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x3C;
            } else {
                FUN_0c0ef368(a4);
                u0 = math_sin_angle16((*(int *)((a4 + 0x38))));
                u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
                (((struct o4C_float *)(a4))->v) = (u1 * 10.0f);
                u0 = math_cos_angle16((*(int *)((a4 + 0x38))));
                u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
                (((struct o54_float *)(a4))->v) = (u1 * 10.0f);
                (((struct o50_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x34))))) * 10.0f));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            }
        }
    }
    return FUN_0c0ef24a(a4);
}
