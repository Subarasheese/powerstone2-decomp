/* game/player: functions 0C08BE40-0C08BEC2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int, int, int, int, int, int, int);
int FUN_0c08be40(int a4);

int FUN_0c08be40(int a4)
{
    int stk[5];
    register int t9;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0xE2;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE2, 0xFFFFFFFF, 0x3, 0xE2);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x6);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t9 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0xE5;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE5, 0xFFFFFFFF, 0x3, 0xE5);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x6);
        (((struct o16_uchar *)(a4))->v) = 0x1;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t9 = 0x17;
    }
    return t9;
}
