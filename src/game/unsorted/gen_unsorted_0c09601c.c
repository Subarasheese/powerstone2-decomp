/* game/unsorted: functions 0C09601C-0C096082, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c037bf6(int);
int FUN_0c085d0c(int);
int math_vec3_accumulate(int, int);
int FUN_0c09601c(int a4);

int FUN_0c09601c(int a4)
{
    register int t6;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / 10.0f));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / 10.0f));
    t6 = FUN_0c037bf6(a4);
    if ((unsigned char)t6 != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t6;
}
