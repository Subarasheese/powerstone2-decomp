/* Straight-line functions with calls and guards (batch gen_sk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o428_uint { char p[0x428]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c043064(void);
extern int FUN_0c0c2d56();
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int FUN_0c0ccfde(int a4, int a5, int a6, int a7);

int FUN_0c0ccfde(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0x15));
    t1 = 0;
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = 1;
        } else {
            (((struct o5C_float *)(a4))->v) = -2.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x270F;
            t0 = ((int (*)(int, int, int, int, float))(FUN_0c0c2d56))(a4, 0x2, (*(signed char *)((a4 + 0x1))), a7, -2.0f);
        }
    } else {
        t1 = 1;
    }
    if (t1) {
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o50_float *)(a4))->v) = ((float)((int)((int)(nlRand()) % (int)0xA)) + 35.0f);
        t0 = (int)((int)(nlRand()) % (int)0x168);
        t1 = nlRand();
        t2 = (t1 % 0x2);
        u0 = math_sin_angle16((int)(((float)t0 * 65536.0f) / 360.0f));
        (((struct o4C_float *)(a4))->v) = (((float)t2 + (1.0f + 1.0f)) * u0);
        u0 = math_cos_angle16((int)(((float)t0 * 65536.0f) / 360.0f));
        (((struct o54_float *)(a4))->v) = (((float)t2 + (1.0f + 1.0f)) * u0);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x258;
        *(unsigned short *)((a4 + 0x1E)) = 0x6;
        t0 = FUN_0c043064();
        if (t0 != 0) {
            (((struct o20_ushort *)(a4))->v) = 0x258;
            *(unsigned short *)((a4 + 0x1C)) = 0x4B0;
        } else {
            (((struct o20_ushort *)(a4))->v) = 0x78;
        }
        (((struct o428_uint *)(a4))->v) = 0x1555;
        t0 = ((int (*)(int, int, int))(FUN_0c0c2d56))(a4, 0x2, (*(signed char *)((a4 + 0x1))));
        t0 = 0x0;
    } else {
        t0 = 0x1;
    }
    (((struct o15_uchar *)(a4))->v) = t0;
    return 0x15;
}
