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

int FUN_0c0efb30(int a4, int a5)
{
    register int t2;
    register int t3;

    t2 = FUN_0c037320((*(int *)(((a5 << 2) + 0xC1CD264))), (*(int *)0xC4B410C));
    t3 = FUN_0c03f444(0x2, 0x0, t2);
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((a5 << 2) + 0xC1CD264))), (*(int *)0xC4B410C));
        *(unsigned int *)((t3 + 0x4)) = 0xC0EFAD4;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned char *)((t3 + 0x2)) = a5;
        FUN_0c07e420(t3, 0x2);
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        FUN_0c064d24(t3, 0x2, 0x12, 0x0, 0x40, 0x0, 0x0, 0xF0);
        FUN_0c187798();
        (((struct oAA_uchar *)(t3))->v) = 0x1;
        (((struct oAB_uchar *)(t3))->v) = 0x1;
    }
    return t3;
}

int FUN_0c0efc04(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        (((struct o5C_float *)(a4))->v) = -0.5f;
        (((struct o50_float *)(a4))->v) = -2.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xF0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        thunk_FUN_0c05abb2(0x52, (a4 + 0x28));
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x10);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x38)) = 0x4000;
    }
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
            t2 = t1;
            if (t1 == 2) {
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.5f);
                t1 = 0x88;
                if (!(((((struct o88_float *)(t0))->v)) > 0.0f)) {
                    (((struct o88_float *)(t0))->v) = 0.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                t2 = t1;
            }
            t1 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t2 + 0x1);
            if ((int)(short)(t2 + 0x1) >= (int)0x3C) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o12E_ushort *)(a4))->v) = 0x0;
            }
            (((struct o41C_uint *)(a4))->v) = (((((struct o41C_int *)(a4))->v)) + 0x2000);
            u0 = ((((struct o8C_float *)(t0))->v));
            u0 = u0 + (*(float *)0xC0EFE7C) * (math_sin_angle16(((((struct o41C_int *)(a4))->v))));
            (((struct o8C_float *)(t0))->v) = u0;
            (((struct o84_float *)(t0))->v) = ((((struct o8C_float *)(t0))->v));
            t1 = 0x84;
        }
        return t1;
    }
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0500000007f);
    if (!(1.5f > ((((struct o8C_float *)(t0))->v)))) {
        (((struct o8C_float *)(t0))->v) = 1.5f;
    }
    (((struct o84_float *)(t0))->v) = ((((struct o8C_float *)(t0))->v));
    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.150000006f);
    if (!(((((struct o2C_float *)(a4))->v)) > 8000.0f)) {
        (((struct o2C_float *)(a4))->v) = 8000.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        FUN_0c0f0ad8((a4 + 0x28));
        FUN_0c0f0c5e((a4 + 0x28));
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0efdda(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0xE0, (*(int *)0xC4B410C));
        *(unsigned int *)((t0 + 0x4)) = 0xC0EFC04;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x2)) = a5;
        FUN_0c07e420(t0, 0x6);
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c064d24(t0, 0x2, 0x10, 0x0, 0x100, 0xFFFFFFAF, 0x0, 0x0);
        FUN_0c187798();
    }
    return t0;
}
