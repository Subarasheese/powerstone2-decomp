/* game/player: functions 0C07AC90-0C07BB64, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3770_int { char p[0x3770]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c085d0c(int);
int FUN_0c07b798(int a4, int a5, int a6, int a7);

int FUN_0c07b798(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t18;
    int t1;
    int t16;

    if ((((((struct o22_short *)(a4))->v)) == 0) && (t1 = (((struct o3770_int *)(a4))->v), t1 == 0)) {
        return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
    }
    t2 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t2 != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        t8 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c085d0c))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t9 = *(int *)(((0x118 + a4) + 0x4));
        t10 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t9))->v) = 1.0f;
        (((struct o9C_float *)(t9))->v) = 1.0f;
        (((struct oA0_float *)(t10))->v) = 1.0f;
        (((struct o9C_float *)(t10))->v) = 1.0f;
        t11 = *(int *)(((0x118 + a4) + 0x4));
        t12 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t11))->v) = 1.0f;
        (((struct o98_float *)(t12))->v) = 1.0f;
        (((struct o94_float *)(t11))->v) = 1.0f;
        (((struct o94_float *)(t12))->v) = 1.0f;
        return FUN_0c037bf6(a4, t12, t11);
    }
    if (!((*(float *)0xC07B898) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t16 = (((struct o22_short *)(a4))->v), t16 == 0)) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        t18 = (((struct o3770_int *)(a4))->v);
        (((struct o15_uchar *)(t18))->v) = ((*(signed char *)((t18 + 0x15))) + 0x1);
    }
    return FUN_0c038362(a4);
}
