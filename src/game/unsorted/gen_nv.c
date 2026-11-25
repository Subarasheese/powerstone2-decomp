/* Straight-line functions with calls and guards (batch gen_nv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c05ab12(int, int);
int FUN_0c0e4f8c(int, int, int);
int FUN_0c15aed8(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int nlRand();
int FUN_0c0e5372(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c0e5372(int a4)
{
    int stk[3];
    int t39;
    int t0;
    int t11;
    int t43;
    int t50;
    int t2;
    int t1;
    int t25;
    int t19;
    int t13;

    t0 = *(signed char *)(a4 + 0x15);
    t11 = 0;
    if (t0 != 0) {
        if (t0 == 1) {
            t11 = 1;
        }
    } else {
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o1C_ushort *)(a4))->v) = 0x3C;
        t1 = ((int (*)(void))(nlRand))();
        t2 = (t1 % 0x10);
        (((struct o1E_ushort *)(a4))->v) = 0x14;
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((((t2 << 8) << 2) << 2))) * 5.0f);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((((t2 << 8) << 2) << 2))) * 5.0f);
        (((struct o50_float *)(a4))->v) = (float)((((struct o1E_short *)(a4))->v));
        (((struct o1E_ushort *)(a4))->v) = (int)((float)((((struct o1E_short *)(a4))->v)) * 0.75f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
        t11 = 1;
    }
    if (t11) {
        if ((((((struct o1C_short *)(a4))->v)) & 7) == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(a4 + 0x28); }
            t13 = ((int (*)(void))(nlRand))();
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + 4.0f * ((float)((t13 % 0x20) - 16)));
            t19 = ((int (*)(void))(nlRand))();
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 4.0f * ((float)((t19 % 0x20) - 16)));
            t25 = ((int (*)(void))(nlRand))();
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((*(float *)0xC0E553C) + 1.0f * ((float)((t25 % 0x20) - 16))));
            FUN_0c15aed8(((int)stk + 0));
        }
        if (((((struct o1C_short *)(a4))->v)) == 10) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        t39 = (((struct o1C_short *)(a4))->v);
        if ((t39 != 10) && ((t39 != 20) && ((t39 != 50) && (t39 != 60)))) {
        } else {
            FUN_0c05ab12(0xD0, (a4 + 0x28));
        }
        t43 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t43 - 1);
        t50 = (short)(t43 - 1);
        if ((int)(short)(t43 - 1) <= 0) {
            FUN_0c15aed8(a4 + 0x28);
            t50 = (FUN_0c0e4f8c(a4, 0xB, (*(signed char *)(a4 + 0x1))));
        }
    } else {
        t50 = t0;
    }
    return t50;
}
