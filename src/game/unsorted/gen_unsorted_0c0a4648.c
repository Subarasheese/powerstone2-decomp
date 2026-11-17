/* game/unsorted: functions 0C0A4648-0C0A46BA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
int FUN_0c07e2f4(int, int);
int FUN_0c0a3058(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0a4648(int a4);

int FUN_0c0a4648(int a4)
{
    int t0;
    register float u0;

    if (((*(signed char *)((a4 + 0x3716))) == 7) && (t0 = *(signed char *)((a4 + 0x3733)), t0 == 2)) {
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + 80.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        (((struct o28_float *)(a4))->v) = u0;
        u0 = ((((struct o30_float *)(a4))->v));
        u0 = u0 + 80.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        (((struct o30_float *)(a4))->v) = u0;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    FUN_0c07e2f4(a4, 0x5);
    return FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x6);
}
