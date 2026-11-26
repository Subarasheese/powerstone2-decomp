/* game/unsorted: functions 0C0EFB30-0C0EFE6A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c0f0ad8(int);
int FUN_0c0f0c5e(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c0efb30(int a4, int a5);
int FUN_0c0efc04(int a4, int a5, int a6, int a7);
int FUN_0c0efdda(int a4, int a5);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };



int FUN_0c0efc04(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)(a4 + 0x14);
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        (((struct o5C_float *)(a4))->v) = -0.5f;
        (((struct o50_float *)(a4))->v) = -2.0f;
        (((struct o1C_ushort *)(a4))->v) = 0xF0;
        (((struct o1E_ushort *)(a4))->v) = 0x0;
        thunk_FUN_0c05abb2(0x52, (a4 + 0x28));
        (((struct o6_ushort *)(t0))->v) = (((((struct o6_short *)(t0))->v)) | 0x10);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        (((struct o38_uint *)(a4))->v) = 0x4000;
    }
    t1 = *(signed char *)(a4 + 0x15);
    if (t1 != 0) {
        if (t1 != 1) {
            t2 = t1;
            if (t1 == 2) {
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.5f);
                t1 = 0x88;
                if (!(((((struct o88_float *)(t0))->v)) > 0.0f)) {
                    (((struct o88_float *)(t0))->v) = 0.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    t1 = 0x14;
                }
                t2 = t1;
            }
            t1 = t2;
        } else {
            t2 = (((struct o1E_short *)(a4))->v);
            (((struct o1E_ushort *)(a4))->v) = (t2 + 0x1);
            if ((int)(short)(t2 + 0x1) >= (int)0x3C) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                (((struct o12E_ushort *)(a4))->v) = 0x0;
            }
            (((struct o41C_uint *)(a4))->v) = (((((struct o41C_int *)(a4))->v)) + 0x2000);
            u0 = ((((struct o8C_float *)(t0))->v)) + (*(float *)0xC0EFE7C) * (math_sin_angle16(((((struct o41C_int *)(a4))->v))));
            (((struct o8C_float *)(t0))->v) = u0;
            (((struct o84_float *)(t0))->v) = ((((struct o8C_float *)(t0))->v));
            t1 = 0x84;
        }
        return t1;
    }
    t1 = (((struct o1C_short *)(a4))->v);
    (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
    if ((int)(short)(t1 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) + 0x1);
    (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0500000007f);
    if (!(1.5f > ((((struct o8C_float *)(t0))->v)))) {
        (((struct o8C_float *)(t0))->v) = 1.5f;
    }
    (((struct o84_float *)(t0))->v) = ((((struct o8C_float *)(t0))->v));
    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.150000006f);
    if (!(((((struct o2C_float *)(a4))->v)) > 8000.0f)) {
        (((struct o2C_float *)(a4))->v) = 8000.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0x3C;
        FUN_0c0f0ad8(a4 + 0x28);
        FUN_0c0f0c5e(a4 + 0x28);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}



