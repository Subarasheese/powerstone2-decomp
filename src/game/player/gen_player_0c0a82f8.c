/* game/player: functions 0C0A82F8-0C0A8772, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c085d0c(int);
int FUN_0c098558(int, int, float, float, float);
int FUN_0c0a82f8(int a4, int a5, float f4, float f5, float f6);
int FUN_0c0a873a(int a4);

int FUN_0c0a82f8(int a4, int a5, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    if (16.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
        if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 11.0f) {
            t0 = *(signed char *)((a4 + 0x371A));
            t1 = 0x4;
            if ((signed char)t0 == 0) {
                t1 = 0x0;
            }
            *(unsigned short *)((((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2)) + 0x6)) = 0x1F;
            t0 = *(signed char *)((a4 + 0x371A));
            t1 = 0x4;
            if ((signed char)t0 == 0) {
                t1 = 0x0;
            }
            t2 = 0x4;
            if ((signed char)t0 == 0) {
                t2 = 0x0;
            }
            t3 = 0x4;
            if ((signed char)t0 == 0) {
                t3 = 0x0;
            }
            (((struct o8C_float *)(((((((t3 << 2) << 1) + t3) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = 3.0f;
            (((struct o88_float *)(((((((t2 << 2) << 1) + t2) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = 3.0f;
            (((struct o84_float *)(((((((t1 << 2) << 1) + t1) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = 3.0f;
        } else {
            if (6.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
                if (6.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
                    t0 = *(signed char *)((a4 + 0x371A));
                    t1 = 0x4;
                    if ((signed char)t0 == 0) {
                        t1 = 0x0;
                    }
                    *(unsigned short *)((((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2)) + 0x6)) = 0x1F;
                    t0 = *(signed char *)((a4 + 0x371A));
                    t1 = 0x4;
                    if ((signed char)t0 == 0) {
                        t1 = 0x0;
                    }
                    t2 = 0x4;
                    if ((signed char)t0 == 0) {
                        t2 = 0x0;
                    }
                    t3 = 0x4;
                    if ((signed char)t0 == 0) {
                        t3 = 0x0;
                    }
                    (((struct o8C_float *)(((((((t3 << 2) << 1) + t3) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = 1.0f;
                    (((struct o88_float *)(((((((t2 << 2) << 1) + t2) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = 1.0f;
                    (((struct o84_float *)(((((((t1 << 2) << 1) + t1) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = 1.0f;
                }
            } else {
                t0 = *(signed char *)((a4 + 0x371A));
                t1 = 0x4;
                if ((signed char)t0 == 0) {
                    t1 = 0x0;
                }
                *(unsigned short *)((((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2)) + 0x6)) = 0x1F;
                t0 = *(signed char *)((a4 + 0x371A));
                t1 = 0x4;
                if ((signed char)t0 == 0) {
                    t1 = 0x0;
                }
                u0 = (((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v);
                (((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v) = (u0 + 0.200000003f);
                t0 = *(signed char *)((a4 + 0x371A));
                t1 = 0x4;
                if ((signed char)t0 == 0) {
                    t1 = 0x0;
                }
                if (((((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v)) > 3.0f) {
                    t0 = *(signed char *)((a4 + 0x371A));
                    t1 = 0x4;
                    if ((signed char)t0 == 0) {
                        t1 = 0x0;
                    }
                    (((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v) = 3.0f;
                }
                t0 = *(signed char *)((a4 + 0x371A));
                t1 = 0x4;
                if ((signed char)t0 == 0) {
                    t1 = 0x0;
                }
                t2 = 0x4;
                if ((signed char)t0 == 0) {
                    t2 = 0x0;
                }
                t3 = 0x4;
                if ((signed char)t0 == 0) {
                    t3 = 0x0;
                }
                u0 = (((struct o8C_float *)(((((((t3 << 2) << 1) + t3) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v);
                (((struct o88_float *)(((((((t2 << 2) << 1) + t2) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = u0;
                (((struct o84_float *)(((((((t1 << 2) << 1) + t1) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = u0;
            }
        }
    } else {
        t0 = *(signed char *)((a4 + 0x371A));
        t1 = 0x4;
        if ((signed char)t0 == 0) {
            t1 = 0x0;
        }
        *(unsigned short *)((((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2)) + 0x6)) = 0x1F;
        t0 = *(signed char *)((a4 + 0x371A));
        t1 = 0x4;
        if ((signed char)t0 == 0) {
            t1 = 0x0;
        }
        u0 = (((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v);
        (((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v) = (u0 - 0.5f);
        t0 = *(signed char *)((a4 + 0x371A));
        t1 = 0x4;
        if ((signed char)t0 == 0) {
            t1 = 0x0;
        }
        if (1.0f > ((((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v))) {
            t0 = *(signed char *)((a4 + 0x371A));
            t1 = 0x4;
            if ((signed char)t0 == 0) {
                t1 = 0x0;
            }
            (((struct o8C_float *)(((((short)t0 * (short)0x10E0) + (0x468 + a4)) + (((((t1 << 2) << 1) + t1) << 2) << 2))))->v) = 1.0f;
        }
        t0 = *(signed char *)((a4 + 0x371A));
        t1 = 0x4;
        if ((signed char)t0 == 0) {
            t1 = 0x0;
        }
        t2 = 0x4;
        if ((signed char)t0 == 0) {
            t2 = 0x0;
        }
        t3 = 0x4;
        if ((signed char)t0 == 0) {
            t3 = 0x0;
        }
        u0 = (((struct o8C_float *)(((((((t3 << 2) << 1) + t3) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v);
        (((struct o88_float *)(((((((t2 << 2) << 1) + t2) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = u0;
        (((struct o84_float *)(((((((t1 << 2) << 1) + t1) << 2) << 2) + (((short)t0 * (short)0x10E0) + (0x468 + a4)))))->v) = u0;
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0a873a(int a4)
{
    register int t1;

    FUN_0c098558(a4, 0xE, 10.0f, 12.0f, 1.39999998f);
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}
