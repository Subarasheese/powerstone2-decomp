/* game/player: functions 0C09E190-0C09EAF6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07363a(int, int);
int FUN_0c085d0c(int);
int FUN_0c09e84c(int a4);

int FUN_0c09e84c(int a4)
{
    int t0;
    register float u0;
    register float u1;

    if ((*(short *)((a4 + 0x1E))) == 0) {
        (((struct o374B_uchar *)(a4))->v) = 0x0;
        if (((((struct o3770_int *)(a4))->v)) != 0) {
            (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
        }
    } else {
        (((struct o374B_uchar *)(a4))->v) = 0x2;
        (((struct o374A_uchar *)(a4))->v) = 0x1;
        if (((((struct o3770_int *)(a4))->v)) != 0) {
            (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x2;
        }
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
    }
    if (((*(short *)((a4 + 0x1C))) != 0) && (t0 = (((struct o118_int *)(a4))->v), u0 = *(float *)0xC09E930, u1 = (((struct o8C_float *)(t0))->v), !(u0 > u1))) {
        FUN_0c07363a(a4, 0x33);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}
