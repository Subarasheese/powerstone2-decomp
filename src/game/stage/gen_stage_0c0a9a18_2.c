/* game/stage: functions 0C0A9A18-0C0AB038, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3770_int { char p[0x3770]; int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07db58(int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c0aab9e(int a4, int a5, int a6, int a7);

int FUN_0c0aab9e(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t2;
    register int t6;
    register int t9;
    register float u16;
    register int t42;
    register int t64;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        t2 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t2 == 0) {
            return (FUN_0c038362(a4));
        }
        return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    if (((((struct o3770_int *)(a4))->v)) != 0) {
        t6 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t6 != 0) {
            return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
        }
        FUN_0c038362(a4);
        t9 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t9 - 1);
        if ((short)(t9 - 1) == 0) {
            (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        }
        u16 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
        if ((int)u16 != 30) {
            if ((int)u16 != 40) {
                if (((int)u16 != 80) && ((int)u16 != 81)) {
                    t64 = (int)u16;
                    if ((int)u16 != 82) {
                    } else {
                        FUN_0c059e60(a4, 0x2);
                        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (((int)stk + 0) + 0x4));
                        FUN_0c14f238((((int)stk + 0) + 0x4), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
                        FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x3);
                        FUN_0c07db58(a4);
                        *(unsigned short *)((a4 + 0x1C)) = 0x1;
                        FUN_0c073566(a4, 0x31);
                        t64 = (FUN_0c07363a(a4, 0x31));
                    }
                } else {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - (1.0f + 1.0f));
                    t64 = 0x2C;
                }
            } else {
                t42 = (((struct o3770_int *)(a4))->v);
                *(unsigned int *)(((int)stk + 0)) = t42;
                t64 = (FUN_0c059f20((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1))), (*(signed char *)((t42 + 0x135)))));
            }
        } else {
            FUN_0c059e60(a4, 0x1);
            FUN_0c073566(a4, 0x30);
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (((int)stk + 0) + 0x4));
            FUN_0c14f238((((int)stk + 0) + 0x4), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
            t64 = (FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x2));
        }
        return t64;
    }
    return (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
}
