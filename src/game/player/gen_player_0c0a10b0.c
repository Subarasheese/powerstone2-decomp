/* game/player: functions 0C0A10B0-0C0A12AE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0a10b0(int a4);
int FUN_0c0a10da(int a4);
int FUN_0c0a1112(int a4);
float FUN_0c0a114c(int a4);

int FUN_0c0a10b0(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x5, (t0), 0x1, 0x5));
}

int FUN_0c0a10da(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x3, (t0), 0x1, 0x3);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}

int FUN_0c0a1112(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x6, (t0), 0x1, 0x6);
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}

float FUN_0c0a114c(int a4)
{
    register int t0;
    register float t6;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0xA, (t0), 0x1, 0xA);
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 15.0f);
    (((struct o50_float *)(a4))->v) = -10.0f;
    t6 = math_cos_angle16((*(int *)((a4 + 0x38))));
    (((struct o54_float *)(a4))->v) = (t6 * 15.0f);
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = -1.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    return (t6 * 15.0f);
}
