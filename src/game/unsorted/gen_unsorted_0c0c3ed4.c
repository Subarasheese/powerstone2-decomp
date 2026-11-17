/* game/unsorted: functions 0C0C3ED4-0C0C412C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int math_mat_get_translate(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0c3ed4(int a4, int a5, int a6);
int FUN_0c0c3f22(int a4, int a5, int a6);

int FUN_0c0c3ed4(int a4, int a5, int a6)
{
    int stk[3];

    FUN_0c187798(a4, a5, a6);
    if (((((struct oA4_int *)(a4))->v)) != 0) {
        math_mat_get_translate(((((struct oA4_int *)(a4))->v)), ((int)stk + 0));
    }
    if ((*(float *)0xC541098) > (*(float *)(((int)stk + 4)))) {
        FUN_0c0c2d56(a4, 0xB, 0x0);
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0c3f22(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)(((((a6 << 2) << 1) + 0xC27B520) + 0x0));
    if ((t0 != 0) && (t0 != 1)) {
        t1 = t0;
        if ((t0 == 2) || (t0 == 3)) {
            t0 = *(signed char *)((((a5 * 0x3938) + 0xC532498) + 0x2));
            t2 = *(int *)(((((a6 << 2) << 1) + 0xC27B520) + 0x4));
            (((struct o6C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o4_float *)((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1))))->v));
            (((struct o70_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o8_float *)((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1))))->v));
            (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct oC_float *)((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1))))->v));
            (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (*(int *)(((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x1C)));
            (((struct o7C_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (*(int *)(((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x20)));
            (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (*(int *)(((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x24)));
            (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o10_float *)((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1))))->v));
            (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o14_float *)((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1))))->v));
            (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o18_float *)((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1))))->v));
            (((struct o68_uint *)(((((struct oC4_int *)(a4))->v))))->v) = ((*(int *)(((((*(signed char *)(((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x0))) << 2) + (0xC4 + ((a5 * 0x3938) + 0xC532498))) + 0x0))) + 0x28);
            t0 = *(signed char *)((((a5 * 0x3938) + 0xC532498) + 0x2));
            t2 = *(int *)(((((a6 << 2) << 1) + 0xC27B520) + 0x4));
            (((struct o6C_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o4_float *)(((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x28)))->v));
            (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o8_float *)(((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x28)))->v));
            (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct oC_float *)(((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x28)))->v));
            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = (*(int *)((((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x28) + 0x1C)));
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = (*(int *)((((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x28) + 0x20)));
            (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = (*(int *)((((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x28) + 0x24)));
            (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o10_float *)(((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x28)))->v));
            (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o14_float *)(((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x28)))->v));
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o18_float *)(((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x28)))->v));
            (((struct o68_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((*(int *)(((((*(signed char *)((((t2 + (((((t0 << 1) << 2) + (t0 << 1)) << 2) << 1)) + 0x28) + 0x0))) << 2) + (0xC4 + ((a5 * 0x3938) + 0xC532498))) + 0x0))) + 0x28);
            t1 = 0x68;
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((((a5 * 0x3938) + 0xC532498) + 0x2));
        t2 = *(int *)(((((a6 << 2) << 1) + 0xC27B520) + 0x4));
        (((struct o6C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o4_float *)((t2 + ((((t1 << 2) + t1) << 2) << 1))))->v));
        (((struct o70_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o8_float *)((t2 + ((((t1 << 2) + t1) << 2) << 1))))->v));
        (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct oC_float *)((t2 + ((((t1 << 2) + t1) << 2) << 1))))->v));
        (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (*(int *)(((t2 + ((((t1 << 2) + t1) << 2) << 1)) + 0x1C)));
        (((struct o7C_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (*(int *)(((t2 + ((((t1 << 2) + t1) << 2) << 1)) + 0x20)));
        (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (*(int *)(((t2 + ((((t1 << 2) + t1) << 2) << 1)) + 0x24)));
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o10_float *)((t2 + ((((t1 << 2) + t1) << 2) << 1))))->v));
        (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o14_float *)((t2 + ((((t1 << 2) + t1) << 2) << 1))))->v));
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o18_float *)((t2 + ((((t1 << 2) + t1) << 2) << 1))))->v));
        (((struct o68_uint *)(((((struct oC4_int *)(a4))->v))))->v) = ((*(int *)(((((*(signed char *)(((t2 + ((((t1 << 2) + t1) << 2) << 1)) + 0x0))) << 2) + (0xC4 + ((a5 * 0x3938) + 0xC532498))) + 0x0))) + 0x28);
        t0 = 0x68;
    }
    return t0;
}
