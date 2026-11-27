/* game/unsorted: functions 0C123F20-0C124BEE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c123f20(int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c124386(int a4, int a5, int a6, int a7);
int FUN_0c124794(int a4, int a5);
struct o10_int { char p[0x10]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };


int FUN_0c124386(int a4, int a5, int a6, int a7)
{
    int t8;
    int t9;
    int t11;
    float u2;
    int t10;
    int t12;
    int t0;
    int t1;
    float u0;
    int t7;
    int t6;
    int t5;
    int t4;
    int t3;
    int t2;

    t8 = *(signed char *)(a4 + 0x15);
    if (t8 != 0) {
        if (t8 != 1) {
            if (t8 == 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t8;
        }
        u0 = *(float *)0xC1245A4;
        t8 = 0xC1245A4;
        t9 = a4;
        t10 = 0x0;
        for (;;) {
            t11 = *(int *)((((0xC4 + a4) + t10) + 0x0));
            if ((*(signed char *)(t11)) != 0) {
                t8 = (nlRand());
                t12 = ((int)((int)t8 % (int)0xA)) == 0;
                t8 = 0x7C;
                if (t12) {
                    *(unsigned char *)(t11) = 0x0;
                }
                *(unsigned int *)((t11 + t8)) = ((*(int *)((t11 + t8))) + (int)((((((struct o1C_float *)(t11))->v)) * 65536.0f) / 360.0f));
                (((struct o70_float *)(t11))->v) = (((((struct o70_float *)(t11))->v)) + ((((struct o20_float *)(t11))->v)));
                t12 = (0x18 + t11);
                t8 = (nlRand());
                *(float *)(t12) = ((*(float *)(t12)) + (((float)((int)((int)t8 % (int)0x3))) + u0));
                u2 = (math_sin_angle16(((((struct o7C_int *)(t11))->v))));
                (((struct o6C_float *)(t11))->v) = (u2 * ((((struct o18_float *)(t11))->v)));
                t9 = ((((struct o7C_int *)(t11))->v));
                u2 = (math_cos_angle16(t9));
                t8 = 0x74;
                u2 = (u2 * ((((struct o18_float *)(t11))->v)));
                *(float *)((t11 + 0x74)) = u2;
            } else {
                t11 = t9;
            }
            t10 = (t10 + 0x4);
            t9 = t11;
            if ((unsigned int)t10 >= (unsigned int)0x28) {
                break;
            }
        }
        t8 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t8 - 1);
        t9 = (short)(t8 - 1);
        if ((short)(t8 - 1) == 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            t9 = 0x15;
        }
        return t9;
    }
    t8 = 0x0;
    for (;;) {
        t9 = *(int *)((((0xC4 + a4) + t8) + 0x0));
        (((struct o7C_uint *)(t9))->v) = (((((struct o7C_int *)(t9))->v)) + (int)((((((struct o1C_float *)(t9))->v)) * 65536.0f) / 360.0f));
        (((struct o70_float *)(t9))->v) = (((((struct o70_float *)(t9))->v)) + ((((struct o20_float *)(t9))->v)));
        (((struct o6C_float *)(t9))->v) = ((math_sin_angle16(((((struct o7C_int *)(t9))->v)))) * ((((struct o18_float *)(t9))->v)));
        (((struct o74_float *)(t9))->v) = ((math_cos_angle16(((((struct o7C_int *)(t9))->v)))) * ((((struct o18_float *)(t9))->v)));
        t8 = (t8 + 0x4);
        if (((((struct o70_float *)(t9))->v)) > (((((struct o2C_float *)(a4))->v)) + 400.0f)) {
            (((struct o70_float *)(t9))->v) = ((((struct o2C_float *)(a4))->v));
        }
        if ((unsigned int)t8 >= (unsigned int)0x28) {
            break;
        }
    }
    t8 = (((struct o1C_short *)(a4))->v);
    (((struct o1C_ushort *)(a4))->v) = (t8 - 1);
    t9 = 0x15;
    if (((short)(t8 - 1) != 0) && ((t0 = (((struct o10_int *)(a4))->v), t1 = *(signed char *)((0x3715 + t0)), t1 == 26) && (((t2 = (((struct o10_int *)(a4))->v), t3 = *(signed char *)((0x375A + t2)), t3 == 1) || (t4 = (((struct o10_int *)(a4))->v), t5 = *(signed char *)((0x375A + t4)), t5 == 4)) && (t6 = (((struct o10_int *)(a4))->v), t7 = *(signed char *)(t6 + 0x15), (int)t7 <= (int)0x2)))) {
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0x3C;
        t9 = 0x3C;
    }
    return t9;
}

