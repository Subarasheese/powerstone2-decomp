/* game/player: functions 0C0B111C-0C0B140E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0ae6dc(int, int, int);
int FUN_0c0ae750(int, int, int, int);
int FUN_0c142430(int, int);
int FUN_0c142a58(int, int, int, int, int);
int FUN_0c0b111c(int a4);
int FUN_0c0b117c(int a4);
int FUN_0c0b119e(int a4);
void FUN_0c0b11ba(void);
int FUN_0c0b11cc(int a4);
int FUN_0c0b124a(int a4, int a5, int a6, int a7);
void FUN_0c0b1250(void);
void FUN_0c0b1254(void);
void FUN_0c0b1258(void);

int FUN_0c0b111c(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x6, 0xE, (t0), 0x6, 0xE);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c0b117c(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t2 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c0b119e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0b117c(a4);
    }
    return FUN_0c0b111c(a4);
}

void FUN_0c0b11ba(void)
{
    
}

int FUN_0c0b11cc(int a4)
{
    int stk[5];
    register int t1;
    register int t12;

    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t1 = *(short *)((a4 + 0x1C));
    t12 = t1;
    if ((int)t1 > (int)0x6) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
            *(unsigned short *)((a4 + 0x1E)) = 0x5;
        }
        FUN_0c0ae6dc(a4, 0x0, ((int)stk + 8));
        *(int *)((int)stk + 4) = 0x1;
        FUN_0c142a58(a4, 0x2, 0xFFFFFFFF, (((int)stk + 4) + 0x4), 0x1);
        FUN_0c142430(a4, 0x0);
        FUN_0c0ae6dc(a4, 0x1, (((int)stk + 4) + 0x4));
        *(int *)((int)stk + 0) = 0x2;
        FUN_0c142a58(a4, 0x3, 0xFFFFFFFF, (((int)stk + 0) + 0x8), 0x2);
        t12 = (FUN_0c142430(a4, 0x1));
    }
    return t12;
}

int FUN_0c0b124a(int a4, int a5, int a6, int a7)
{
    return FUN_0c0ae750(a4, 0x5, a6, a7);
}

void FUN_0c0b1250(void)
{
    
}

void FUN_0c0b1254(void)
{
    
}

void FUN_0c0b1258(void)
{
    
}
