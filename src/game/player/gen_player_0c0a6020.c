/* game/player: functions 0C0A6020-0C0A608E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c085d0c(int);
int FUN_0c0a6020(int a4);
int FUN_0c0a606a(int a4);

int FUN_0c0a6020(int a4)
{
    register int t0;

    FUN_0c037bf6(a4);
    if (!(((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) > 1.0f)) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = (((struct o3770_int *)(a4))->v);
        (((struct o15_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x15))) + 0x1);
    }
    FUN_0c038362(a4);
    t0 = 0x3770;
    if (((((struct o3770_int *)(a4))->v)) == 0) {
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t0 = 0x374B;
    }
    return t0;
}

int FUN_0c0a606a(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}
