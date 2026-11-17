/* game/player: functions 0C091448-0C091EB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
int FUN_0c085d0c(int, int, int, int);
int FUN_0c091bba(int);
int FUN_0c091bd0(int);
int FUN_0c091d8a(int);
int FUN_0c091e5c(int a4, int a5, int a6, int a7);

int FUN_0c091e5c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = (((struct o3770_int *)(a4))->v);
    if ((t1 != 0) && (t0 = *(signed char *)((t1 + 0x14)), t0 == 2)) {
        t0 = *(signed char *)((a4 + 0x3728));
        if ((t0 != 0) && (t0 != 1)) {
            if (t0 != 2) {
                FUN_0c091d8a(a4);
            } else {
                FUN_0c091bd0(a4);
            }
        } else {
            FUN_0c091bba(a4);
        }
        (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
        return 0x3770;
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}
