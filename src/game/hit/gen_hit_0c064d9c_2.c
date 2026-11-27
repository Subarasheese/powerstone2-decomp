/* game/hit: functions 0C064D9C-0C065C58, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_interval_overlap(float, float, float, float, float, float, float);
float FUN_0c064d9c(int);
int FUN_0c064f8e(int, int);
int FUN_0c064fba(int, int, int);
int FUN_0c064fd4(int, int, int);
int FUN_0c0650b0(int, int, int, float);
int FUN_0c06514e(int, int, int);
int FUN_0c0651f8(int, int, int);
int FUN_0c065396(int, int, int, float);
int FUN_0c06551a(int, int, int, float);
int FUN_0c0655dc(int, int, int, int, int, float);
int FUN_0c0652c4(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c065434(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c06570c(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c06588a(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0652c4(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float t17;
    register int t22;
    float u19;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    u2 = (((struct oC_float *)((a5 + 0x8)))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)((a5 + 0x8)))->v);
    u7 = (((struct o14_float *)((a4 + 0x8)))->v);
    u8 = (((struct o8_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a5 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u11);
    u13 = (((struct o4_float *)((a5 + 0x8)))->v);
    u14 = (((struct o10_float *)((a5 + 0x8)))->v);
    u15 = (((struct o4_float *)((a4 + 0x8)))->v);
    u16 = (((struct o10_float *)((a4 + 0x8)))->v);
    t17 = math_interval_overlap((u15 + u16), (u15 - u16), (u13 + u14), (u13 - u14), f8, f9, f10);
    (((struct o4_float *)(((int)stk + 0)))->v) = t17;
    t22 = 0x4;
    if (!(t17 > (*(float *)((((int)stk + 0) + 0x0)))) && (u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(t17 > u19))) {
    } else {
        *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
        t22 = 0x8;
    }
    *(float *)((a6 + t22)) = ((*(float *)(((a4 + 0x8) + t22))) - (*(float *)(((a5 + 0x8) + t22))));
    return 0x1;
}


int FUN_0c06570c(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = *(signed char *)((a5 + 0x1));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        return t0;
                    }
                    return FUN_0c06551a(a4, a5, a6, f4);
                }
                return FUN_0c065434(a4, a5, a6, f4, f5, f6, f7, f8, f9, f10);
            }
            return FUN_0c065396(a4, a5, a6, f4);
        }
        t0 = *(signed char *)((a5 + 0x1));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return FUN_0c0652c4(a4, a5, a6, f4, f5, f6, f7, f8, f9, f10);
            }
            return FUN_0c0651f8(a4, a5, a6);
        }
        return FUN_0c06514e(a4, a5, a6);
    }
    t0 = *(signed char *)((a5 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0650b0(a4, a5, a6, f4);
        }
        return FUN_0c064fd4(a4, a5, a6);
    }
    return FUN_0c064fba(a4, a5, a6);
}

