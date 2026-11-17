/* game/unsorted: functions 0C1458E8-0C145C2C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int nlCalcPoint(int, int);
int FUN_0c0e09f0(int, int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c1458e8(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c145932(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c14598e(int a4, int a5, int a6);

int FUN_0c1458e8(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register float u0;

    u0 = *(float *)((a6 + 0x0));
    *(float *)((a4 + 0x0)) = (u0 + (((((*(float *)((a5 + 0x0))) - u0) * (float)(a7 - a9)) / (float)(a8 - a9))));
    u0 = (((struct o4_float *)(a6))->v);
    (((struct o4_float *)(a4))->v) = (u0 + ((((((((struct o4_float *)(a5))->v)) - u0) * (float)(a7 - a9)) / (float)(a8 - a9))));
    u0 = (((struct o8_float *)(a6))->v);
    (((struct o8_float *)(a4))->v) = (u0 + ((((((((struct o8_float *)(a5))->v)) - u0) * (float)(a7 - a9)) / (float)(a8 - a9))));
    return 0x8;
}

int FUN_0c145932(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register float u0;

    u0 = *(float *)((a6 + 0x0));
    *(float *)((a4 + 0x0)) = (u0 + (((((*(float *)((a5 + 0x0))) - u0) * (float)(a7 - a9)) / (float)(a8 - a9))));
    u0 = (((struct o4_float *)(a6))->v);
    (((struct o4_float *)(a4))->v) = (u0 + ((((((((struct o4_float *)(a5))->v)) - u0) * (float)(a7 - a9)) / (float)(a8 - a9))));
    u0 = (((struct o8_float *)(a6))->v);
    (((struct o8_float *)(a4))->v) = (u0 + ((((((((struct o8_float *)(a5))->v)) - u0) * (float)(a7 - a9)) / (float)(a8 - a9))));
    u0 = (((struct oC_float *)(a6))->v);
    (((struct oC_float *)(a4))->v) = (u0 + ((((((((struct oC_float *)(a5))->v)) - u0) * (float)(a7 - a9)) / (float)(a8 - a9))));
    return 0xC;
}

int FUN_0c14598e(int a4, int a5, int a6)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    nlPushMatrix(a6);
    FUN_0c0e09f0(0x0, (*(int *)(((int)stk + 0))), 0x0, 0x0, *(int *)((int)stk + 0));
    nlCalcPoint((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    return nlPopMatrix(0x1);
}
