/* game/stage: functions 0C0B8C84-0C0B930C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_short { char p[0x12E]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07d086(int, int, float);
extern int FUN_0c085d0c();
int FUN_0c14f238(int, int, int, int);
int FUN_0c0b8fe4(int a4, int a5, int a6, int a7);

int FUN_0c0b8fe4(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t7;
    register int t10;
    register int t13;

    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    if (((((struct o3770_int *)(a4))->v)) != 0) {
        if ((*(short *)((a4 + 0x1C))) != 0) {
            t7 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t7 == 0) {
                return (FUN_0c038362(a4));
            }
            return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
        }
        t10 = (((struct o3770_int *)(a4))->v);
        (((struct o3830_ushort *)(t10))->v) = (((((struct o12E_short *)(t10))->v)) ^ 0xF);
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t13 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t13 != 0) {
            FUN_0c059e60(a4, 0x2);
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), ((int)stk + 0));
            FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
            FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x3);
            FUN_0c073566(a4, 0x31);
            FUN_0c07363a(a4, 0x31);
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
        }
        FUN_0c038362(a4);
        return (FUN_0c07d086(a4, 0x0, 0.0f));
    }
    return (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
}
