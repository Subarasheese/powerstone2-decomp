/* game/hit: functions 0C0733B0-0C076C3C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c037bf6();
int FUN_0c08e382(int);
int FUN_0c0752a8(int);
int FUN_0c07a6aa(int);
int FUN_0c07db58(int);
int FUN_0c085cac(int, int, int);
int FUN_0c150be8(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c076314(int a4, int a5, int a6);

int FUN_0c076314(int a4, int a5, int a6)
{
    register int t0;

    FUN_0c037bf6(a4, a5, a6);
    t0 = FUN_0c0752a8(a4);
    if (t0 != 1) {
        if (t0 != 2) {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        return FUN_0c07a6aa(a4);
    }
    FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
    FUN_0c07db58(a4);
    FUN_0c08e382(a4);
    t0 = *(signed char *)((a4 + 0x135));
    if (t0 != 2) {
        return FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
    }
    return t0;
}
