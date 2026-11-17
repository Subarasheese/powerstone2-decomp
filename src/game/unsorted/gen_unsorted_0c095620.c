/* game/unsorted: functions 0C095620-0C095686, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c085d0c(int);
int FUN_0c095620(int a4);

int FUN_0c095620(int a4)
{
    register int t8;

    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / 20.0f));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / 20.0f));
    t8 = FUN_0c037bf6(a4);
    if ((unsigned char)t8 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}
