/* game/player: functions 0C0720B4-0C072C34, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
int FUN_0c037bf6(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c070320(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c14f824(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c072a7c(int a4);

int FUN_0c072a7c(int a4)
{
    int stk[9];
    int t10;
    register int t22;
    int t23;
    register int t29;
    register int t30;
    int t1;

    if (((*(signed char *)((a4 + 0x2))) != 2) && (t1 = *(int *)0xC542260, (t1 & 3) == 0)) {
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), (((int)stk + 12) + 0x4));
        *(float *)(((int)stk + 20)) = ((((struct o168_float *)(a4))->v));
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (((int)stk + 12) + 0x4));
    }
    t10 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t10 != 0) && (t10 != 1)) {
        return (FUN_0c085cac(a4, 0x6, 0x0));
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    FUN_0c070320(a4);
    t22 = FUN_0c037bf6(a4);
    if ((unsigned char)t22 != 0) {
        t23 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if ((t23 != 0) && (t23 != 1)) {
            return (FUN_0c085cac(a4, 0x6, 0x0));
        }
        if ((*(signed char *)((a4 + 0x2))) == 7) {
            return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28)));
        }
        *(int *)((int)stk + 8) = 0xA;
        *(int *)((int)stk + 4) = 0x2;
        t29 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t29;
        t30 = t29;
        *(int *)((int)stk + 0) = t30;
        FUN_0c07e79c(a4, t29, 0x2, 0xA, t30, 0x2, 0xA);
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return 0x16;
    }
    return (unsigned char)t22;
}
