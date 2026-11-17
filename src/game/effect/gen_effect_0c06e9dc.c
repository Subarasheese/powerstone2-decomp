/* game/effect: functions 0C06E9DC-0C06EA52, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037bf6(int);
int math_vec3_accumulate(int, int);
int FUN_0c06e9dc(int a4);
int FUN_0c06ea08(int a4);
int FUN_0c06ea2e(int a4, int a5, int a6, int a7);

int FUN_0c06e9dc(int a4)
{
    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c06ea08(int a4)
{
    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c06ea2e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c06ea08(a4);
        }
        return ((int (*)(int, int, int, int))(0xC06EA02))(a4, a5, a6, a7);
    }
    return FUN_0c06e9dc(a4);
}
