/* game/player: functions 0C091448-0C091EB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o50_float { char p[0x50]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07ec9a(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085d0c(int);
int math_vec3_accumulate(int, int);
int FUN_0c091ad0(int a4);

int FUN_0c091ad0(int a4)
{
    register int t0;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
        if (t0 == 2) {
            FUN_0c07ec9a(a4);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}
