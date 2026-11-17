/* game/player: functions 0C06D0BC-0C06D0FA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
int FUN_0c037bf6(int);
int math_vec3_accumulate(int, int);
int FUN_0c06d0bc(int a4);

int FUN_0c06d0bc(int a4)
{
    register int t4;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t4 = 0x160;
    if (((((struct o160_float *)(a4))->v)) != 0.0f) {
        (((struct o382E_ushort *)(a4))->v) = 0x0;
        (((struct o374A_uchar *)(a4))->v) = 0x2;
        t4 = 0x374A;
    }
    return t4;
}
