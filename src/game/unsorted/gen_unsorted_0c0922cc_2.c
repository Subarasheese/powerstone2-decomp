/* game/unsorted: functions 0C0922CC-0C09258C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07d1fc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0922cc(int);
int math_vec3_accumulate(int, int);
int FUN_0c0923a0(int a4);
int FUN_0c0924f4(int a4);
int FUN_0c09253e(int a4);
int FUN_0c092560(int a4);

int FUN_0c0923a0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        (((struct o131_uchar *)(a4))->v) = 0x0;
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x14, (t0), 0x2, 0x14);
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
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) / (1.0f + 1.0f));
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 5.0f;
            (((struct o5C_float *)(a4))->v) = -0.5f;
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) / (1.0f + 1.0f));
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o16_uchar *)(a4))->v) = 0x2;
            t0 = 0x16;
        } else {
            t1 = 0x50;
            if (0.0f > ((((struct o50_float *)(a4))->v))) {
                t2 = FUN_0c07ecc6(a4, 0x0, 0x0);
                t3 = t2;
                if (t2 != 0) {
                    t2 = *(signed char *)((a4 + 0x1));
                    FUN_0c07e79c(a4, t2, 0x2, 0x13, (t2), 0x2, 0x13);
                    t2 = *(int *)(((0x118 + a4) + 0x4));
                    t4 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t2))->v) = 1.0f;
                    (((struct o9C_float *)(t2))->v) = 1.0f;
                    (((struct oA0_float *)(t4))->v) = 1.0f;
                    (((struct o9C_float *)(t4))->v) = 1.0f;
                    t2 = *(int *)(((0x118 + a4) + 0x4));
                    t4 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t2))->v) = 1.0f;
                    (((struct o98_float *)(t4))->v) = 1.0f;
                    (((struct o94_float *)(t2))->v) = 1.0f;
                    (((struct o94_float *)(t4))->v) = 1.0f;
                    (((struct o16_uchar *)(a4))->v) = 0x3;
                    t3 = 0x16;
                }
                t1 = t3;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t0 = 0x50;
        if (0.0f > ((((struct o50_float *)(a4))->v))) {
            t2 = FUN_0c07ecc6(a4, 0x0, 0x0);
            t3 = t2;
            if (t2 != 0) {
                t2 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t2, 0x2, 0x13, (t2), 0x2, 0x13);
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t2))->v) = 1.0f;
                (((struct o9C_float *)(t2))->v) = 1.0f;
                (((struct oA0_float *)(t4))->v) = 1.0f;
                (((struct o9C_float *)(t4))->v) = 1.0f;
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t2))->v) = 1.0f;
                (((struct o98_float *)(t4))->v) = 1.0f;
                (((struct o94_float *)(t2))->v) = 1.0f;
                (((struct o94_float *)(t4))->v) = 1.0f;
                (((struct o16_uchar *)(a4))->v) = 0x3;
                t3 = 0x16;
            }
            t0 = t3;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0924f4(int a4)
{
    register int t4;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t4 != 0) {
            return FUN_0c085d0c(a4);
        }
        return t4;
    }
    return 0x50;
}

int FUN_0c09253e(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c092560(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c09253e(a4);
            }
            return FUN_0c0924f4(a4);
        }
        return FUN_0c0923a0(a4);
    }
    return FUN_0c0922cc(a4);
}
