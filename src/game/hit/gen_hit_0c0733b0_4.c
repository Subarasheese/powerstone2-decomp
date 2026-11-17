/* game/hit: functions 0C0733B0-0C076C3C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c037bf6(int);
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c08e382(int);
int FUN_0c0752a8(int);
int FUN_0c075328(int);
int FUN_0c07a6aa(int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c150be8(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c075952(int a4);
int FUN_0c076248(int a4);

int FUN_0c075952(int a4)
{
    register int t0;
    register int t1;
    register float u4;

    t0 = FUN_0c075328(a4);
    if ((signed char)t0 == 0) {
        t1 = FUN_0c0752a8(a4);
        if (t1 != 1) {
            if (t1 != 2) {
                FUN_0c037bf6(a4);
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            return FUN_0c07a6aa(a4);
        }
        u4 = (((struct o0_float *)0xC075AD4)->v);
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * u4);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * u4);
        (((struct o50_float *)(a4))->v) = ((((struct o4_float *)0xC075AD4)->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o8_float *)0xC075AD4)->v));
        FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2E, 0xFFFFFFFF, 0x4, 0x2E);
        FUN_0c07db58(a4);
        FUN_0c08e382(a4);
        if ((*(signed char *)((a4 + 0x135))) != 2) {
            FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return 0x16;
    }
    return (signed char)t0;
}

int FUN_0c076248(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c075328(a4);
    if ((signed char)t0 == 0) {
        t1 = FUN_0c0752a8(a4);
        if (t1 != 1) {
            if (t1 != 2) {
                FUN_0c037bf6(a4);
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            return FUN_0c07a6aa(a4);
        }
        u0 = (((struct o0_float *)0xC076364)->v);
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * u0);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * u0);
        (((struct o50_float *)(a4))->v) = ((((struct o4_float *)0xC076364)->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o8_float *)0xC076364)->v));
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x34, 0xFFFFFFFF, 0x4, 0x34);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
        FUN_0c07db58(a4);
        FUN_0c08e382(a4);
        t1 = *(signed char *)((a4 + 0x135));
        if (t1 != 2) {
            return FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
        }
        return t1;
    }
    return (signed char)t0;
}
