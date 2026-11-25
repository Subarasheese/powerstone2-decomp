/* Straight-line functions with calls and guards (batch gen_vr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c0ef24a(int);
int FUN_0c0ef2e0(int, int);
int FUN_0c0ef4aa(int, int, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0ef70e(int a4, float f4);

int FUN_0c0ef70e(int a4, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c0ef4aa(a4, 0x0, f4);
        (((struct o12A_ushort *)(a4))->v) = 0xF;
        (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFEF;
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    if ((t0 == 0) || (t0 == 1)) {
        FUN_0c0ef2e0(a4, 0x3C);
        t1 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        }
        if ((int)((((struct o20_short *)(a4))->v)) <= (int)0xA) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        }
        (((struct o4C_float *)(a4))->v) = ((float)((((struct o20_short *)(a4))->v)) * (math_sin_angle16((*(int *)((a4 + 0x38))))));
        (((struct o54_float *)(a4))->v) = ((float)((((struct o20_short *)(a4))->v)) * (math_cos_angle16((*(int *)((a4 + 0x38))))));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    } else {
        if (t0 != 2) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        } else {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) - 1);
                (((struct o17_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x3C;
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
            }
            if ((int)((((struct o20_short *)(a4))->v)) <= (int)0xA) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            }
            (((struct o4C_float *)(a4))->v) = ((float)((((struct o20_short *)(a4))->v)) * (math_sin_angle16((*(int *)((a4 + 0x38))))));
            (((struct o54_float *)(a4))->v) = ((float)((((struct o20_short *)(a4))->v)) * (math_cos_angle16((*(int *)((a4 + 0x38))))));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        }
    }
    return FUN_0c0ef24a(a4);
}
