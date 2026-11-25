/* game/unsorted: functions 0C142868-0C142E62, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c0582de(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int FUN_0c17c450(int);
int FUN_0c187798(void);
int FUN_0c142868(int a4);
int FUN_0c142960(int a4);
int FUN_0c142a58(int a4, int a5, int a6, int a7, int a8);


int FUN_0c142960(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.125f);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.125f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.0625f);
        if (!(((((struct o44_float *)(a4))->v)) > 0.5f)) {
            return FUN_0c03f346(a4);
        }
        return 0x44;
    }
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.200000003f);
    t0 = 0x44;
    if (!(1.0f > ((((struct o44_float *)(a4))->v)))) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

