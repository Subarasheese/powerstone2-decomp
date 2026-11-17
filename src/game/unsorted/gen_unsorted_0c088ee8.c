/* game/unsorted: functions 0C088EE8-0C088FA2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085eac(int a4, int a5);
int FUN_0c0c224c(int, int, int, int, int, int, int, int);
int FUN_0c088ee8(int a4);

int FUN_0c088ee8(int a4)
{
    int stk[6];
    register int t9;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0xAC;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xAC, 0xFFFFFFFF, 0x3, 0xAC);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x6);
        t9 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0xAD;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xAD, 0xFFFFFFFF, 0x3, 0xAD);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x6);
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t9 = 0x17;
    }
    *(unsigned char *)((a4 + t9)) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}
