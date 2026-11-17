/* game/unsorted: functions 0C0948F0-0C09495A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c085cac(int, int, int);
int FUN_0c129534(int);
int FUN_0c0948f0(int a4);

int FUN_0c0948f0(int a4)
{
    register int t13;

    FUN_0c037bf6(a4);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xA)) == 2) {
        FUN_0c129534(a4);
    }
    t13 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t13 - 1);
    if ((short)(t13 - 1) == 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        (((struct o50_float *)(a4))->v) = -1.0f;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        return FUN_0c085cac(a4, 0x5, 0x0);
    }
    return (short)(t13 - 1);
}
