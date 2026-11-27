/* game/unsorted: functions 0C142E70-0C143FE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int a4, int a5, int a6, int a7);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int math_mat_transform_vector(int, int);
int FUN_0c0582de(int, int);
int FUN_0c059e0e(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
extern int FUN_0c150010();
int FUN_0c15aed8(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
float FUN_0c0e2220(int, int);
int FUN_0c0e2390(int, int, int);
float FUN_0c17c450(int);
extern int FUN_0c187798();
int FUN_0c142e70(int a4, int a5);
int FUN_0c14304a(int a4);
int FUN_0c143074(int a4, int a5);
int FUN_0c143608(int a4, int a5, int a6);
int FUN_0c143814(int a4, int a5, int a6);
int FUN_0c143932(int a4);
int FUN_0c143b12(int a4, int a5, int a6, int a7);
int FUN_0c143b36(int a4, float f4);
int FUN_0c143b4a(int a4, float f4);


int FUN_0c14304a(int a4)
{
    register int t0;

    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t0 = 0x15;
    } else {
        (((struct o15_uchar *)(a4))->v) = 0x2;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x2D;
        t0 = 0x2D;
    }
    return t0;
}




int FUN_0c143932(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + -1.0f);
    nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x2D8);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x222);
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x38E);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        t0 = *(short *)((a4 + 0x1C));
        if ((int)t0 <= 0) {
            return FUN_0c03f346(a4);
        }
        return t0;
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 <= 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x28;
        t1 = 0x28;
    }
    return t1;
}

int FUN_0c143b12(int a4, int a5, int a6, int a7)
{
    return FUN_0c037498(a5, (a6 + a7), 0x8, (*(int *)((((a4 << 2) << 1) + 0xC4B40E0))));
}

int FUN_0c143b36(int a4, float f4)
{
    register float u1;

    (((struct o84_float *)(a4))->v) = (((((struct o84_float *)(a4))->v)) + f4);
    u1 = (((struct o84_float *)(a4))->v);
    (((struct o8C_float *)(a4))->v) = u1;
    (((struct o88_float *)(a4))->v) = u1;
    return 0x88;
}

int FUN_0c143b4a(int a4, float f4)
{
    register float u0;

    u0 = (((struct o18_float *)(a4))->v);
    (((struct o18_float *)(a4))->v) = (u0 - f4);
    if (0.0f > (u0 - f4)) {
        (((struct o18_float *)(a4))->v) = 0.0f;
    }
    u0 = (((struct o18_float *)(a4))->v);
    (((struct o20_float *)(a4))->v) = u0;
    (((struct o1C_float *)(a4))->v) = u0;
    return 0x1C;
}
