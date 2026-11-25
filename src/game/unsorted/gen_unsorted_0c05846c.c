/* game/unsorted: functions 0C05846C-0C0584B0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int math_mat_get_translate(int, int);
int nlPuts(int);
int nlLocate(int, int);
int FUN_0c05846c(int a4, float f4, float f5);
int thunk_FUN_0c058310(int a4, int a5);

int FUN_0c05846c(int a4, float f4, float f5)
{
    register int t0;
    register int t5;

    t0 = (int)f5;
    if ((int)(int)f5 < 0) {
        t0 = ((int)f5 + 0x7);
    }
    t5 = (int)f4;
    if ((int)(int)f4 < 0) {
        t5 = ((int)f4 + 0x7);
    }
    nlLocate((((t5 >> 1) >> 1) >> 1), (((t0 >> 1) >> 1) >> 1));
    return nlPuts(a4);
}

int thunk_FUN_0c058310(int a4, int a5)
{
    return math_mat_get_translate(a4, a5);
}
