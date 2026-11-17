/* game/player: functions 0C0A5C50-0C0A5FFA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c070320(int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a5c50(int);
int FUN_0c0a5d88(int);
int FUN_0c0a5e0a(int);
int FUN_0c0a5e2e(int a4, int a5, int a6, int a7);

int FUN_0c0a5e2e(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t5;
    register int t6;
    register int t7;
    int t1;

    if (((int)(*(signed char *)((a4 + 0x15))) < (int)0x2) && (t1 = (((struct o3770_int *)(a4))->v), t1 == 0)) {
        FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t5 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t5))->v) = 5.0f;
        (((struct o94_float *)(t5))->v) = 5.0f;
        t6 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t6))->v) = 5.0f;
        (((struct o94_float *)(t6))->v) = 5.0f;
        return 0x94;
    }
    t7 = *(signed char *)((a4 + 0x15));
    switch (t7) {
    case 0:
        FUN_0c0a5c50(a4);
        break;
    case 1:
        FUN_0c0a5d88(a4);
        break;
    case 2:
        FUN_0c0a5e0a(a4);
        break;
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return FUN_0c070320(a4);
}
