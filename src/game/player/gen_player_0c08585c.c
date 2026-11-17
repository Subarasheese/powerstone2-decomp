/* game/player: functions 0C08585C-0C08597C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c08585c(int a4, int a5, int a6, int a7);

int FUN_0c08585c(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register int t30;
    register int t31;
    register int t32;
    register int t33;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x26;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    FUN_0c081dfc(a4, a5, a6, a7);
    t1 = *(signed char *)(((int)stk + 12));
    switch (t1) {
    case 0:
        *(int *)((int)stk + 8) = 0x4;
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x4, 0xFFFFFFFF, 0x2, 0x4);
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
        FUN_0c059e60(a4, 0x0);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 1.0f);
        break;
    case 1:
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
        *(int *)((int)stk + 8) = 0x5;
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x5, 0xFFFFFFFF, 0x2, 0x5);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 1.0f);
        (((struct o15_uchar *)(a4))->v) = 0x1;
        break;
    case 2:
        *(int *)((int)stk + 8) = 0x4;
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x4, 0xFFFFFFFF, 0x2, 0x4);
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
        FUN_0c059e60(a4, 0x0);
        (((struct o2C_float *)(a4))->v) = (((((struct o37C0_float *)(a4))->v)) + 3.0f);
        break;
    }
    t30 = *(int *)(((0x118 + a4) + 0x4));
    t31 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t30))->v) = 1.0f;
    (((struct o9C_float *)(t30))->v) = 1.0f;
    (((struct oA0_float *)(t31))->v) = 1.0f;
    (((struct o9C_float *)(t31))->v) = 1.0f;
    t32 = *(int *)(((0x118 + a4) + 0x4));
    t33 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t32))->v) = 1.0f;
    (((struct o98_float *)(t33))->v) = 1.0f;
    (((struct o94_float *)(t32))->v) = 1.0f;
    (((struct o94_float *)(t33))->v) = 1.0f;
    return 0x94;
}
