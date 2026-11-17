/* game/player: functions 0C085998-0C085A56, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
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
int FUN_0c037bf6(int);
int FUN_0c059f04(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0c28f6(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c085998(int a4);

int FUN_0c085998(int a4)
{
    int stk[4];
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t12;
    register int t14;

    (((struct o3715_uchar *)(a4))->v) = 0x27;
    (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * 8.0f));
    (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * 8.0f));
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 40.0f;
    (((struct o5C_float *)(a4))->v) = -2.0f;
    FUN_0c059f04((*(signed char *)((a4 + 0x1))));
    *(int *)((int)stk + 8) = 0x7;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x7, 0xFFFFFFFF, 0x2, 0x7);
    t7 = *(int *)(((0x118 + a4) + 0x4));
    t8 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t7))->v) = 1.0f;
    (((struct o9C_float *)(t7))->v) = 1.0f;
    (((struct oA0_float *)(t8))->v) = 1.0f;
    (((struct o9C_float *)(t8))->v) = 1.0f;
    t9 = *(int *)(((0x118 + a4) + 0x4));
    t10 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t9))->v) = 1.0f;
    (((struct o98_float *)(t10))->v) = 1.0f;
    (((struct o94_float *)(t9))->v) = 1.0f;
    (((struct o94_float *)(t10))->v) = 1.0f;
    FUN_0c037bf6(a4);
    t12 = FUN_0c0c28f6(a4, ((int)stk + 12));
    t14 = t12;
    if (t12 != 0) {
        (((struct o2C_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
        t14 = 0x2C;
    }
    return t14;
}
