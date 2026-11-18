/* game/stage: functions 0C09A458-0C09B052, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c07db58(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c09a5ac(int, int, int, int, int, int, int, int, int, int);
int FUN_0c09a738(int, int, int, int, int, int, int, int, int, int);
int FUN_0c09a9f0(int, int, int, int);
int FUN_0c09ab14(int, int, int, int, int, int, int, int, int, int);
int FUN_0c09acb8(int, int, int, int);
int FUN_0c14f238(int, int, int, int);
extern int FUN_0c187798();
int FUN_0c09a87c(int a4, int a5, int a6, int a7);
int FUN_0c09aace(int a4, int a5, int a6, int a7);
int FUN_0c09ae00(int a4, int a5, int a6, int a7);


int FUN_0c09aace(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        FUN_0c09a5ac(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
        break;
    case 1:
        FUN_0c09a738(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
        break;
    case 2:
        FUN_0c09a87c(a4, a5, a6, a7);
        break;
    case 3:
        FUN_0c09a9f0(a4, a5, a6, a7);
        break;
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c09ae00(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c09acb8(a4, a5, a6, a7);
        }
    } else {
        FUN_0c09ab14(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}
