/* game/player: functions 0C06F774-0C06F804, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c06f774(int a4);

int FUN_0c06f774(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    FUN_0c037bf6(a4);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    u0 = (((struct o50_float *)(a4))->v);
    u1 = (((struct o5C_float *)(a4))->v);
    (((struct o50_float *)(a4))->v) = (u0 + u1);
    t0 = 0x50;
    if (0.0f > (u0 + u1)) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}
