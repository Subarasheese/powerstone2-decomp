/* Straight-line functions with calls and guards (batch gen_zl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
int FUN_0c0c216e(int);
extern int FUN_0c0e4f8c();
int FUN_0c0e4ffc(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e524e(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0e524e(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;

    t1 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3721))) == (*(signed char *)((a4 + 0x41C)))) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 42)) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
        } else {
            t2 = ((int (*)(int, int, int))(FUN_0c0e4f8c))(a4, 0x5, (*(signed char *)((a4 + 0x1))));
            (((struct o128_ushort *)(a4))->v) = ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))));
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~(((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))) | 0xF0)));
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        if ((t0 == 0) || (t0 == 1)) {
            FUN_0c0e4ffc(a4);
            t0 = *(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38));
            *(unsigned int *)((a4 + 0x38)) = t0;
            u0 = ((((struct o28_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
            u0 = u0 + 79.0f * (math_sin_angle16(t0));
            (((struct o28_float *)(a4))->v) = u0;
            u0 = ((((struct o30_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
            u0 = u0 + 79.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
            (((struct o30_float *)(a4))->v) = u0;
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v)) + -10.0f);
        }
        t0 = FUN_0c0c216e(a4);
        if (t0 != 0) {
            t0 = *(signed char *)((a4 + 0x1));
            return ((int (*)(int, int, int))(FUN_0c0e4f8c))(a4, 0xA, t0);
        }
        (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    t0 = *(signed char *)((a4 + 0x1));
    return ((int (*)(int, int, int))(FUN_0c0e4f8c))(a4, 0x2, t0);
}
