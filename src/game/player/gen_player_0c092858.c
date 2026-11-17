/* game/player: functions 0C092858-0C0928EA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_short { char p[0x12E]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
int FUN_0c059df2(int, int);
int FUN_0c07262e(int);
int math_angle_between_points_xz(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c092858(int a4);

int FUN_0c092858(int a4)
{
    register int t4;

    if ((*(signed char *)((a4 + 0x371A))) != 0) {
        return FUN_0c07262e(a4);
    }
    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t4 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if (t4 != 0) {
            *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28)));
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v));
        }
    }
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x40);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x1E, 0xFFFFFFFF, 0x2, 0x1E);
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    return 0x14;
}
