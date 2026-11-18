/* Straight-line functions with calls and guards (batch gen_fv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f444(int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c16e9cc(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int FUN_0c16eb2c(int a4, int a5, int a6, int a7);

int FUN_0c16eb2c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;
    register float u5;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC16EA1E;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = a5;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        t4 = (int)((int)((int)((int)(nlRand()) % (int)0x3C)) / (int)0x64);
        u5 = (((struct o0_float *)0xC16EC58)->v);
        (((struct o4C_float *)(t0))->v) = ((math_sin_angle16((*(int *)((t0 + 0x38))))) * ((float)t4 + u5));
        (((struct o54_float *)(t0))->v) = ((math_cos_angle16((*(int *)((t0 + 0x38))))) * ((float)t4 + u5));
        (((struct o5C_float *)(t0))->v) = ((((struct oC_float *)0xC16EC58)->v));
        *(unsigned short *)((t0 + 0x1C)) = ((int)((int)((int)((int)(nlRand()) % (int)0x64)) % (int)0x7));
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t0))->v) = 0x64;
        FUN_0c16e9cc(t0);
        FUN_0c0c2ab6(t0, 0x47);
        FUN_0c07e3ae(t0, 0xA5);
        return FUN_0c059df2((*(signed char *)((t0 + 0x1))), 0x4A);
    }
    return t0;
}
