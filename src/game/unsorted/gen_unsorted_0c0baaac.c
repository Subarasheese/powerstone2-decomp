/* game/unsorted: functions 0C0BAAAC-0C0BAB0E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c085d0c(int);
int FUN_0c123010(int, int);
int FUN_0c0baaac(int a4);

int FUN_0c0baaac(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    t0 = 0x8C;
    if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 32.0f) {
        t1 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1000);
        if ((*(signed char *)((a4 + 0x375A))) == 2) {
            t0 = (FUN_0c123010(a4, 0x1));
        } else {
            t0 = (FUN_0c123010(a4, 0x2));
        }
        *(unsigned int *)((a4 + 0x38)) = t1;
    }
    return t0;
}
