/* game/unsorted: functions 0C123F20-0C124BEE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int, int, int, int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c12409c(int a4, int a5, int a6, int a7);
int FUN_0c124286(int a4, int a5, float f4);
int FUN_0c124580(int a4, int a5, int a6, int a7);

int FUN_0c12409c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u0;

    t8 = (((struct oC4_int *)(a4))->v);
    t9 = *(signed char *)((a4 + 0x15));
    if (t9 != 0) {
        if (t9 == 1) {
            (((struct o70_float *)(t8))->v) = (((((struct o70_float *)(t8))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o7C_uint *)(t8))->v) = (((((struct o7C_int *)(t8))->v)) + (*(int *)((a4 + 0x38))));
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((float)((int)((int)(nlRand()) % (int)0x3)) + 5.0f));
            (((struct o6C_float *)(t8))->v) = ((math_cos_angle16(((-((((struct o7C_int *)(t8))->v))) + 0x10000))) * ((((struct o4C_float *)(a4))->v)));
            (((struct o74_float *)(t8))->v) = ((math_sin_angle16(((-((((struct o7C_int *)(t8))->v))) + 0x10000))) * ((((struct o4C_float *)(a4))->v)));
            if (((((struct o18_float *)(t8))->v)) > 0.0f) {
                u0 = (((struct o18_float *)(t8))->v);
                (((struct o18_float *)(t8))->v) = (u0 - 0.0399999991f);
                if (0.0f > (u0 - 0.0399999991f)) {
                    (((struct o18_float *)(t8))->v) = 0.0f;
                }
                u0 = (((struct o18_float *)(t8))->v);
                (((struct o20_float *)(t8))->v) = u0;
                (((struct o1C_float *)(t8))->v) = u0;
            }
            t10 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t10 - 1);
            t11 = (short)(t10 - 1);
            if ((short)(t10 - 1) == 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t11 = 0x15;
            }
            return t11;
        }
        if (t9 == 2) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t9;
    }
    (((struct o70_float *)(t8))->v) = (((((struct o70_float *)(t8))->v)) + ((((struct o50_float *)(a4))->v)));
    t9 = (((struct o7C_int *)(t8))->v);
    t10 = *(int *)((a4 + 0x38));
    (((struct o7C_uint *)(t8))->v) = (t9 + t10);
    (((struct o6C_float *)(t8))->v) = ((math_cos_angle16(((-(t9 + t10)) + 0x10000))) * ((((struct o4C_float *)(a4))->v)));
    (((struct o74_float *)(t8))->v) = ((math_sin_angle16(((-((((struct o7C_int *)(t8))->v))) + 0x10000))) * ((((struct o4C_float *)(a4))->v)));
    if (((((struct o4C_float *)(a4))->v)) > ((((struct o54_float *)(a4))->v))) {
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 5.0f);
    }
    if (1.0f > ((((struct o18_float *)(t8))->v))) {
        (((struct o18_float *)(t8))->v) = (((((struct o18_float *)(t8))->v)) + (((float)((int)((int)(nlRand()) % (int)0xA)) + 1.0f) / 30.0f));
        if (((((struct o18_float *)(t8))->v)) > 1.0f) {
            (((struct o18_float *)(t8))->v) = 1.0f;
        }
        u0 = (((struct o18_float *)(t8))->v);
        (((struct o20_float *)(t8))->v) = u0;
        (((struct o1C_float *)(t8))->v) = u0;
    }
    t8 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
    t9 = 0x15;
    if (((short)(t8 - 1) != 0) && ((t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((0x3715 + t0)), t1 == 26) && (((t2 = *(int *)((a4 + 0x10)), t3 = *(signed char *)((0x375A + t2)), t3 == 1) || (t4 = *(int *)((a4 + 0x10)), t5 = *(signed char *)((0x375A + t4)), t5 == 4)) && (t6 = *(int *)((a4 + 0x10)), t7 = *(signed char *)((t6 + 0x15)), (int)t7 <= (int)0x2)))) {
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x19;
        t9 = 0x19;
    }
    return t9;
}


