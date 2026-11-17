/* game/player: functions 0C0A87D4-0C0A99C6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1650_uint { char p[0x1650]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c059ef6(int, int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c13f14c(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0a9454(int a4, int a5, int a6);
int FUN_0c0a954c(int a4, int a5, int a6);

int FUN_0c0a9454(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c037bf6(a4, a5, a6);
    t2 = (unsigned char)t1;
    if ((unsigned char)t1 != 0) {
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x2, 0x16, (t1), 0x2, 0x16);
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t3))->v) = 1.0f;
        (((struct o9C_float *)(t3))->v) = 1.0f;
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t3))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t3))->v) = 1.0f;
        FUN_0c037bf6(a4, t3, t1);
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x0);
        t1 = FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x18));
        if ((t1 != 0) && (t0 = *(signed char *)((a4 + 0x1)), (t0 + 0x1) != t1)) {
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        }
        FUN_0c07043c(a4, 35.0f, -2.79999995f, 500.0f, 1.0f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c0a954c(int a4, int a5, int a6)
{
    int stk[6];
    register int t12;
    register int t13;
    register int t14;
    register int t16;
    register int t17;
    register int t18;
    register int t19;

    FUN_0c037bf6(a4, a5, a6);
    if (!((*(float *)0xC0A9678) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        (((struct o1650_uint *)(a4))->v) = 0x1555;
        FUN_0c13f14c(a4, ((*(int *)0xC542260) & 0x1));
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t12 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t12 != 0) {
            *(int *)((int)stk + 8) = 0x14;
            *(int *)((int)stk + 4) = 0x2;
            t13 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t13;
            t14 = t13;
            *(int *)((int)stk + 0) = t14;
            FUN_0c07e79c(a4, t13, 0x2, 0x14, t14, 0x2, 0x14);
            (((struct o1650_uint *)(a4))->v) = 0x0;
            t16 = *(int *)(((0x118 + a4) + 0x4));
            t17 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t16))->v) = 1.0f;
            (((struct o9C_float *)(t16))->v) = 1.0f;
            (((struct oA0_float *)(t17))->v) = 1.0f;
            (((struct o9C_float *)(t17))->v) = 1.0f;
            t18 = *(int *)(((0x118 + a4) + 0x4));
            t19 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t18))->v) = 1.0f;
            (((struct o98_float *)(t19))->v) = 1.0f;
            (((struct o94_float *)(t18))->v) = 1.0f;
            (((struct o94_float *)(t19))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
