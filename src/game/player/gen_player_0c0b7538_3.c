/* game/player: functions 0C0B7538-0C0B85DA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
int FUN_0c037bf6(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c07e79c(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c14f824(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0b8370(int a4);

int FUN_0c0b8370(int a4)
{
    int stk[7];
    register int t17;
    register int t22;
    register int t18;
    register int t19;
    int t1;

    if (((*(signed char *)((a4 + 0x2))) != 2) && (t1 = *(int *)0xC542260, (t1 & 3) == 0)) {
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), (((int)stk + 12) + 0x4));
        *(float *)(((int)stk + 20)) = ((((struct o168_float *)(a4))->v));
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (((int)stk + 12) + 0x4));
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t17 = FUN_0c037bf6(a4);
    t22 = (unsigned char)t17;
    if ((unsigned char)t17 != 0) {
        *(int *)((int)stk + 8) = 0xC;
        *(int *)((int)stk + 4) = 0x2;
        t18 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t18;
        t19 = t18;
        *(int *)((int)stk + 0) = t19;
        FUN_0c07e79c(a4, t18, 0x2, 0xC, t19, 0x2, 0xC);
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t22 = 0x16;
    }
    return t22;
}
