/* game/stage: functions 0C09A458-0C09B052, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
extern int FUN_0c085d0c();
int FUN_0c09a9f0(int a4, int a5, int a6, int a7);

int FUN_0c09a9f0(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    register int t9;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t25;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
    }
    t2 = ((int (*)(int, int, int))(FUN_0c037bf6))(((((struct o3770_int *)(a4))->v)), a5, a6);
    if ((unsigned char)t2 != 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        FUN_0c073566(a4, 0x31);
        FUN_0c07363a(a4, 0x31);
    }
    FUN_0c038362(((((struct o3770_int *)(a4))->v)));
    t9 = ((int (*)(int))(FUN_0c037bf6))(a4);
    if ((unsigned char)t9 != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        t11 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c085d0c))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t12 = *(int *)(((0x118 + a4) + 0x4));
        t13 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t12))->v) = 1.0f;
        (((struct o9C_float *)(t12))->v) = 1.0f;
        (((struct oA0_float *)(t13))->v) = 1.0f;
        (((struct o9C_float *)(t13))->v) = 1.0f;
        t14 = *(int *)(((0x118 + a4) + 0x4));
        t15 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t14))->v) = 1.0f;
        (((struct o98_float *)(t15))->v) = 1.0f;
        (((struct o94_float *)(t14))->v) = 1.0f;
        (((struct o94_float *)(t15))->v) = 1.0f;
    }
    FUN_0c038362(a4);
    t25 = 0x3770;
    if (((((struct o3770_int *)(a4))->v)) != 0) {
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t25 = 0x374B;
    }
    return t25;
}
