/* game/player: functions 0C06F664-0C06F774, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o168_float { char p[0x168]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c07c9c0(int);
int FUN_0c07ebe6(int);
int FUN_0c07f18c(int);
int FUN_0c085cac(int, int, int);
int FUN_0c06f664(int a4, int a5, int a6, int a7);

int FUN_0c06f664(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(signed char *)((a4 + 0x3716))) != 32) {
        t0 = FUN_0c07c9c0(a4);
        if (t0 != 1) {
            return (FUN_0c085cac(a4, 0x27, 0x0));
        }
    }
    t0 = FUN_0c07ebe6(a4);
    if (t0 == 0) {
        t0 = FUN_0c07c9c0(a4);
        if (t0 == 0) {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            FUN_0c085cac(a4, 0x5, 0x7);
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 0.00999999978f);
            (((struct o37C0_float *)(a4))->v) = ((((struct o168_float *)(a4))->v));
            return 0x37C0;
        }
        u0 = 1.0f;
        if ((*(signed char *)0xC542237) == 5) {
            u0 = 5.0f;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u0);
        t0 = FUN_0c07f18c(a4);
        if (t0 != 0) {
            return (FUN_0c085cac(a4, 0x7, 0xE));
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC06F4E8))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06F448))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06F410))(a4, a5, a6, a7);
    }
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    FUN_0c085cac(a4, 0x5, 0x7);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 0.00999999978f);
    (((struct o37C0_float *)(a4))->v) = ((((struct o168_float *)(a4))->v));
    return 0x37C0;
}
