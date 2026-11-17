/* game/player: functions 0C07147C-0C07196E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059ef6(int, int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c0715ba(int);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c07147c(int a4);
int FUN_0c0714a2(int a4);
int FUN_0c071688(int a4);
int FUN_0c0716d8(int a4);
int FUN_0c071736(int a4);

int FUN_0c07147c(int a4)
{
    int stk[4];

    *(int *)((int)stk + 12) = a4;
    *(int *)((int)stk + 8) = 0x3;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x3, 0xFFFFFFFF, 0x2, 0x3);
    return FUN_0c037bf6((*(int *)(((int)stk + 12))));
}

int FUN_0c0714a2(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t1 = FUN_0c037bf6(a4);
    t2 = (unsigned char)t1;
    if ((unsigned char)t1 != 0) {
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x2, 0xD, (t1), 0x2, 0xD);
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t3))->v) = 1.0f;
        (((struct o9C_float *)(t3))->v) = 1.0f;
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t3))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t3))->v) = 1.0f;
        FUN_0c037bf6(a4);
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x0);
        t1 = FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x18));
        if ((t1 != 0) && (t0 = *(signed char *)((a4 + 0x1)), (t0 + 0x1) != t1)) {
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        }
        u0 = 40.0f;
        u1 = -2.5999999f;
        if ((*(signed char *)((a4 + 0x2))) == 5) {
        } else {
            u0 = ((((struct o4_float *)0xC0716B0)->v));
            u1 = ((((struct o0_float *)0xC0716B0)->v));
        }
        FUN_0c07043c(a4, u0, u1, 500.0f, 100.0f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c071688(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0716d8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o372C_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c085cac(a4, 0xF, 0x0);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        t1 = 0x94;
    }
    return t1;
}

int FUN_0c071736(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0716d8(a4);
            }
            return FUN_0c071688(a4);
        }
        return FUN_0c0715ba(a4);
    }
    return FUN_0c0714a2(a4);
}
