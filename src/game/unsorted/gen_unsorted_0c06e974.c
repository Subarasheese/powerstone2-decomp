/* game/unsorted: functions 0C06E974-0C06E9DC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
int FUN_0c037bf6(int);
int FUN_0c05ab7e(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c06e974(int a4);
int FUN_0c06e9b6(int a4);

int FUN_0c06e974(int a4)
{
    register int t1;

    FUN_0c037bf6(a4);
    t1 = (((struct o22_short *)(a4))->v);
    if (t1 != 0) {
        if (t1 != 18) {
        } else {
            FUN_0c05ab7e(0x3, (a4 + 0x28));
        }
    } else {
        (((struct o22_ushort *)(a4))->v) = 0x24;
        FUN_0c05ab7e(0x2, (a4 + 0x28));
    }
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
    return 0x22;
}

int FUN_0c06e9b6(int a4)
{
    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
