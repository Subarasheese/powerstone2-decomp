/* game/player: functions 0C097D50-0C098118, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c097fde(int a4, int a5, int a6, int a7);

int FUN_0c097fde(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t3;
    register int t8;
    register int t11;
    register int t14;
    register float u20;
    register int t49;

    if (((((struct o3770_int *)(a4))->v)) != 0) {
        if ((*(short *)((a4 + 0x1C))) != 0) {
            t3 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t3 == 0) {
                t49 = (FUN_0c038362(a4));
            } else {
                t49 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            }
        } else {
            t8 = (((struct o3770_int *)(a4))->v);
            (((struct o3830_ushort *)(t8))->v) = (((((struct o12E_short *)(t8))->v)) ^ 0xF);
            (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
            t11 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t11 != 0) {
                t49 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            } else {
                FUN_0c038362(a4);
                t14 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t14 - 1);
                if ((short)(t14 - 1) == 0) {
                    (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
                }
                u20 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
                t49 = (int)u20;
                if ((int)u20 == 97) {
                    FUN_0c059e60(a4, 0x2);
                    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), ((int)stk + 0));
                    FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
                    FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x3);
                    FUN_0c073566(a4, 0x31);
                    FUN_0c07363a(a4, 0x31);
                    *(unsigned short *)((a4 + 0x1C)) = 0x1;
                    t49 = 0x1;
                }
            }
        }
    } else {
        t49 = (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    return t49;
}
