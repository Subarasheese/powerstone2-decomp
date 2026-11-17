/* game/player: functions 0C085EAC-0C0866A8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0c2380(int, int);
int FUN_0c0c3054(int, int, int, float);
int math_vec3_accumulate(int, int);
int FUN_0c086140(int a4, float f4);

int FUN_0c086140(int a4, float f4)
{
    int stk[2];
    register int t0;
    register int t9;
    register int t10;
    register int t20;
    register int t23;
    register int t1;
    register float u2;
    int t3;
    register int t4;
    register float u5;
    int t6;

    t0 = *(signed char *)((a4 + 0x16));
    if (((t0 == 0) && ((t1 = (((struct o118_int *)(a4))->v), u2 = (((struct o8C_float *)(t1))->v), !(14.0f > u2)) && (t3 = (((struct o22_short *)(a4))->v), t3 == 0))) || (((signed char)t0 != 0) && ((t4 = (((struct o118_int *)(a4))->v), u5 = (((struct o8C_float *)(t4))->v), !(12.0f > u5)) && (t6 = (((struct o22_short *)(a4))->v), t6 == 0)))) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        t9 = *(signed char *)((a4 + 0x1));
        t10 = 0x1;
        if ((*(signed char *)((a4 + 0x3731))) == 0) {
            t10 = 0x0;
        }
        FUN_0c0c3054(((((struct o376C_int *)(a4))->v)), t9, t10, f4);
        FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
    }
    if ((*(signed char *)((a4 + 0x16))) == 0) {
        t20 = FUN_0c037bf6(a4);
        if ((unsigned char)t20 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t20;
    }
    FUN_0c037bf6(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t23 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t23 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
