/* game/flow: functions 0C1070C4-0C10739C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c056e44(int, int);
int bgm_stop_slot(int);
int FUN_0c106510(void);
int FUN_0c1070c4(int, int, int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c187798(void);
int FUN_0c10726e(void);
int FUN_0c107310(int a4, int a5, int a6);

int FUN_0c10726e(void)
{
    int stk[2];
    register int t4;
    register int t5;

    bgm_stop_slot(0x0);
    FUN_0c187798();
    FUN_0c187798();
    FUN_0c115120(0x8, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    t4 = (((struct o0_int *)0xC5325B0)->v);
    (((struct o98_float *)(t4))->v) = 8.0f;
    (((struct o94_float *)(t4))->v) = 8.0f;
    t5 = (((struct o4_int *)0xC5325B0)->v);
    (((struct o98_float *)(t5))->v) = 8.0f;
    (((struct o94_float *)(t5))->v) = 8.0f;
    FUN_0c056e44(0x23, 0x7);
    return FUN_0c106510();
}

int FUN_0c107310(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        return (unsigned char)t0;
                    }
                    return FUN_0c10726e();
                }
                return ((int (*)(void))(0xC1071E4))();
            }
            return ((int (*)(void))(0xC107120))();
        }
        return ((int (*)(void))(0xC10711C))();
    }
    return FUN_0c1070c4(a4, a5, a6);
}
