/* Straight-line functions with calls and guards (batch gen_ahj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c0373ee(int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cf440(int, int, int);
int FUN_0c15aed8(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0d4d24(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c0d4d24(int a4, int a5, int a6, int a7)
{
    int stk[4];
    int t0;
    int t14;
    int t80;
    int t93;
    int t5;
    int t49;
    int t53;
    float u65;
    int t64;
    int t28;
    int t22;
    int t16;
    int t4;
    int R1004;
    int t60;
    int t57;
    int t55;

    R1004 = *(int *)((int)stk + 0);

    t0 = *(signed char *)(a4 + 0x15);
    t14 = 0;
    if (t0 != 0) {
        if (t0 == 1) {
            t14 = 1;
        }
    } else {
        (((struct oAA_uchar *)(a4))->v) = 0x1;
        (((struct oAB_uchar *)(a4))->v) = 0x5;
        FUN_0c0c2ab6(a4, 0x38);
        (((struct o126_uchar *)(a4))->v) = 0x3;
        (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) | 0xFF);
        thunk_FUN_0c05abb2(0x4C, 0x0);
        (((struct o1C_ushort *)(a4))->v) = 0x3C;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        t4 = nlRand();
        t5 = (t4 % 0x10);
        (((struct o1E_ushort *)(a4))->v) = 0x14;
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((((t5 << 8) << 2) << 2))) * 5.0f);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((((t5 << 8) << 2) << 2))) * 5.0f);
        (((struct o50_float *)(a4))->v) = (float)((((struct o1E_short *)(a4))->v));
        (((struct o1E_ushort *)(a4))->v) = (int)((float)((((struct o1E_short *)(a4))->v)) * 0.75f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
        t14 = 1;
    }
    if (t14) {
        if ((((((struct o1C_short *)(a4))->v)) & 7) == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(a4 + 0x28); }
            t16 = nlRand();
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 4.0f * ((float)((t16 % 0x20) - 16)));
            t22 = nlRand();
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + 4.0f * ((float)((t22 % 0x20) - 16)));
            t28 = nlRand();
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + ((-100.0f) + 1.0f * ((float)((t28 % 0x20) - 16))));
            FUN_0c15aed8((((int)stk + 0) + 0x4));
        }
        if (((((struct o1C_short *)(a4))->v)) == 10) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
        }
        if (((((struct o1C_short *)(a4))->v)) == 60) {
            thunk_FUN_0c05abb2(0x50, (a4 + 0x28));
        }
        if ((int)((((struct o1C_short *)(a4))->v)) < (int)0x3C) {
            t49 = (((struct oC8_int *)(a4))->v);
            (((struct o70_float *)(t49))->v) = (((((struct o70_float *)(t49))->v)) - (math_sin_angle16((((((struct o1C_short *)(a4))->v)) << 13))));
            t53 = (((struct oC8_int *)(a4))->v);
            (((struct o78_uint *)(t53))->v) = (((((struct o78_int *)(t53))->v)) - 91);
            t55 = (((struct oC8_int *)(a4))->v);
            (((struct o7C_uint *)(t55))->v) = (((((struct o7C_int *)(t55))->v)) + 0x16C);
            t57 = (((struct oCC_int *)(a4))->v);
            (((struct o78_uint *)(t57))->v) = (((((struct o78_int *)(t57))->v)) + 0x16C);
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 1.0f);
            t60 = (((struct oC8_int *)(a4))->v);
            R1004 = t60;
            nlAddVector3op(((R1004) + 0x6C), (t60 + 0x6C), (a4 + 0x4C));
            if ((0.0f > ((((struct o50_float *)(a4))->v))) && (t64 = (((struct oC8_int *)(a4))->v), u65 = (((struct o70_float *)(t64))->v), !(u65 > 0.0f))) {
                (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = (float)((((struct o1E_short *)(a4))->v));
                (((struct o1E_ushort *)(a4))->v) = (int)((float)((((struct o1E_short *)(a4))->v)) * 0.75f);
            }
        }
        t80 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t80 - 1);
        t93 = (short)(t80 - 1);
        if ((int)(short)(t80 - 1) <= 0) {
            FUN_0c15aed8(a4 + 0x28);
            FUN_0c0373ee(a4, 0x51, (*(int *)0xC4B410C));
            FUN_0c0c2d56(a4, 0x0, (*(signed char *)(a4 + 0x1)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)(0xC1C8004); }
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            (((struct o126_uchar *)(a4))->v) = 0x1;
            t93 = 0x126;
        }
    } else {
        t93 = t0;
    }
    return t93;
}
