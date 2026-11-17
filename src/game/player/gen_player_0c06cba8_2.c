/* game/player: functions 0C06CBA8-0C06CEBE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o3768_int { char p[0x3768]; int v; };
int FUN_0c037bf6(int);
int math_angle_between_points_xz(int, int);
int FUN_0c07e868(int, int);
int FUN_0c081ee8(int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c11f9c8(int, int, int);
int FUN_0c06cc18(int a4, int a5, int a6, int a7);

int FUN_0c06cc18(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t9;
    register int t11;
    register int t12;

    t0 = (((struct o3768_int *)(a4))->v);
    if (t0 != 0) {
        t1 = math_angle_between_points_xz((a4 + 0x28), (t0 + 0x28));
        t2 = *(int *)((a4 + 0x38));
        t3 = *(int *)((a4 + 0x38));
        t5 = (unsigned short)(t1 - t2);
        if ((0x8000 & (unsigned short)(t1 - t2)) != 0) {
            t5 = ((unsigned short)(t1 - t2) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t3 + ((int)((int)t5 / (int)(*(short *)((a4 + 0x1C))))));
        t9 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t9 - 1);
        if ((int)(short)(t9 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t11 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x0, a4);
            if (t11 != 0) {
                t12 = (((struct o3768_int *)(a4))->v);
                *(unsigned int *)(((int)stk + 0)) = t12;
                FUN_0c11f9c8((*(signed char *)((a4 + 0x1))), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x41C))), ((((struct o24_short *)(t12))->v)));
                FUN_0c081ee8(a4, t0);
            }
            return FUN_0c07e868(a4, 0xA);
        }
        return FUN_0c037bf6(a4);
    }
    FUN_0c085d0c(a4, a5, a6, a7);
    return FUN_0c037bf6(a4);
}
