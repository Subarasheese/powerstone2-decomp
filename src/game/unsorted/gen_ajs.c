/* Straight-line functions with calls and guards (batch gen_ajs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c169f4a(int, int, int);
int nlRand(void);
int FUN_0c169bda(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c169bda(int a4, int a5, int a6, int a7)
{
    int stk[3];
    int t115;
    int t0;
    int t19;
    int t40;
    int t61;
    int t73;
    int t4;
    float u20;
    float u41;
    float u62;
    int t51;
    int t30;
    int t9;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0xB4;
        (((struct o1E_ushort *)(a4))->v) = 0x0;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t4 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t4 - 1);
        if ((int)(short)(t4 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        switch ((*(signed char *)(a4 + 0x15))) {
        case 0:
            t51 = (((struct oC4_int *)(a4))->v);
            (((struct o8C_float *)(t51))->v) = (((((struct o8C_float *)(t51))->v)) + 0.100000001f);
            if (!(1.0f > ((((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v)))) {
                (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            }
            t61 = (((struct oC4_int *)(a4))->v);
            u62 = (((struct o8C_float *)(t61))->v);
            (((struct o88_float *)(t61))->v) = u62;
            (((struct o84_float *)(t61))->v) = u62;
            break;
        case 1:
            t30 = (((struct oC8_int *)(a4))->v);
            (((struct o8C_float *)(t30))->v) = (((((struct o8C_float *)(t30))->v)) + 0.100000001f);
            if (!(1.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            }
            t40 = (((struct oC8_int *)(a4))->v);
            u41 = (((struct o8C_float *)(t40))->v);
            (((struct o88_float *)(t40))->v) = u41;
            (((struct o84_float *)(t40))->v) = u41;
            break;
        case 2:
            t9 = (((struct oC4_int *)(a4))->v);
            (((struct o8C_float *)(t9))->v) = (((((struct o8C_float *)(t9))->v)) - 0.0500000007f);
            if (!(((((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v)) > 0.0f)) {
                (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            }
            t19 = (((struct oC4_int *)(a4))->v);
            u20 = (((struct o8C_float *)(t19))->v);
            (((struct o88_float *)(t19))->v) = u20;
            (((struct o84_float *)(t19))->v) = u20;
            break;
        }
        t115 = 0x15;
        if ((int)(*(signed char *)(a4 + 0x15)) >= (int)0x1) {
            t73 = (((struct o1E_short *)(a4))->v);
            (((struct o1E_ushort *)(a4))->v) = (t73 - 1);
            t115 = (short)(t73 - 1);
            if ((int)(short)(t73 - 1) <= 0) {
                (((struct o1E_ushort *)(a4))->v) = 0xB4;
                *(float *)(((int)stk + 0)) = ((((((struct o28_float *)(a4))->v)) + (float)((int)((int)(nlRand()) % (int)0x33))) + -50.0f);
                *(float *)(((int)stk + 4)) = ((((((struct o2C_float *)(a4))->v)) + (float)((int)((int)(nlRand()) % (int)0x33))) + -50.0f);
                *(float *)(((int)stk + 8)) = ((((((struct o30_float *)(a4))->v)) + (float)((int)((int)(nlRand()) % (int)0x33))) + -50.0f);
                t115 = (FUN_0c169f4a(a4, 0x0, ((int)stk + 0)));
            }
        }
    } else {
        t115 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t115;
}
