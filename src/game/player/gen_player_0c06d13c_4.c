/* game/player: functions 0C06D13C-0C06E974, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
int FUN_0c037bf6(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059df2(int, int);
int FUN_0c06d6fe(int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c162488(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c06d78c(int a4, int a5, int a6);
int FUN_0c06e4f6(int a4, int a5, int a6, int a7);

int FUN_0c06d78c(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register float u20;
    register float u24;
    register float u28;
    register int t29;
    register int t32;
    int t30;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    FUN_0c06d6fe(a4);
    if ((*(signed char *)((a4 + 0x3741))) == 5) {
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x23)) == 0) {
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), ((int)stk + 4));
            FUN_0c162488(a4, 0x0, ((int)stk + 4));
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x1F);
        }
    }
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x222);
    u20 = *(float *)0xC06D8B8;
    *(int *)((int)stk + 0) = (a4 + 0x28);
    u24 = ((((struct o28_float *)(a4))->v));
    u24 = u24 + u20 * (math_sin_angle16((*(int *)((a4 + 0x38)))));
    (((struct o28_float *)(a4))->v) = u24;
    *(int *)((int)stk + 0) = (a4 + 0x30);
    u28 = ((((struct o30_float *)(a4))->v));
    u28 = u28 + u20 * (math_cos_angle16((*(int *)((a4 + 0x38)))));
    (((struct o30_float *)(a4))->v) = u28;
    t29 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t29 - 1);
    t32 = 0x3744;
    if (((short)(t29 - 1) != 0) && (t30 = *(signed char *)((a4 + 0x3744)), (int)(unsigned char)t30 > 0)) {
    } else {
        t32 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0));
    }
    return t32;
}

int FUN_0c06e4f6(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t0 = *(int *)((0xC25920C + ((*(signed char *)((a4 + 0x2))) << 2)));
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
}
