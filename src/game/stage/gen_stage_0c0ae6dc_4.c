/* game/stage: functions 0C0AE6DC-0C0B0668, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f56a(int);
int FUN_0c085cac(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0af6a8(int a4);
int FUN_0c0af970(int a4);

int FUN_0c0af6a8(int a4)
{
    int t0;
    register int t1;

    if ((int)(*(short *)((a4 + 0x1E))) > 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        if ((*(short *)((a4 + 0x1E))) == 0) {
            FUN_0c059e60(a4, 0x2);
        }
    }
    FUN_0c037bf6(a4);
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            (((struct o131_uchar *)(a4))->v) = 0x0;
            t0 = FUN_0c07f56a(a4);
            if (t0 != 0) {
                (((struct o372A_uchar *)(a4))->v) = (t0 - 1);
                (((struct o3728_uchar *)(a4))->v) = 0x3;
                return FUN_0c085cac(a4, 0x21, 0x0);
            }
        }
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f) && (t0 != 0)) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        FUN_0c07daea(a4, t1, (0x118 + a4));
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0af970(int a4)
{
    int t0;
    register int t1;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
        (((struct o374B_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c037bf6(a4);
    if (0.0f > ((((struct o17C_float *)(a4))->v))) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / (1.0f + 1.0f));
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            (((struct o131_uchar *)(a4))->v) = 0x0;
            t0 = FUN_0c07f56a(a4);
            if (t0 != 0) {
                (((struct o372A_uchar *)(a4))->v) = (t0 - 1);
                (((struct o3728_uchar *)(a4))->v) = 0x3;
                return FUN_0c085cac(a4, 0x21, 0x0);
            }
        }
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f) && (t0 != 0)) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        FUN_0c07daea(a4, t1, (0x118 + a4));
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
