/* game/unsorted: functions 0C0AB2C4-0C0AB344, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0ab2c4(int a4);
int FUN_0c0ab2ee(int a4);

int FUN_0c0ab2c4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x3, (t0), 0x1, 0x3));
}

int FUN_0c0ab2ee(int a4)
{
    register float u1;
    register int t5;

    u1 = *(float *)0xC0AB47C;
    (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u1);
    (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u1);
    t5 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t5, 0x1, 0x9, (t5), 0x1, 0x9));
}
