/* game/unsorted: functions 0C091F80-0C09203C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c091f80(int a4);
int FUN_0c091fd6(int a4);

int FUN_0c091f80(int a4)
{
    register float u1;
    register int t5;

    u1 = *(float *)0xC092078;
    (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u1);
    (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u1);
    t5 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t5, 0x1, 0x21, (t5), 0x1, 0x21));
}

