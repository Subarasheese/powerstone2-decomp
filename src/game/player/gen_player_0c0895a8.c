/* game/player: functions 0C0895A8-0C089644, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int, int, int, int, int, int, int);
int FUN_0c0895a8(int a4);

int FUN_0c0895a8(int a4)
{
    int stk[5];
    register int t10;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x83;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x83, 0xFFFFFFFF, 0x3, 0x83);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x3);
        t10 = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x85;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x85, 0xFFFFFFFF, 0x3, 0x85);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x6);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -0.0799999982f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        t10 = 0x1;
    }
    (((struct o16_uchar *)(a4))->v) = t10;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    return 0x17;
}
