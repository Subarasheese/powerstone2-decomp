/* game/player: functions 0C056BA4-0C056E06, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
int FUN_0c056be6(int, int);
float FUN_0c0e2340(int);
int FUN_0c17c4d0(int);
extern int FUN_0c187798();
void FUN_0c056d12(int a4, int a5, int a6);

void FUN_0c056d12(int a4, int a5, int a6)
{
    int stk[35];
    register int t0;
    register int t2;
    register int t4;
    register int t6;
    register float t13;
    register float u15;
    register float u18;
    register float u21;
    register float u24;
    register int t3;
    register int t5;

    t0 = 0xC1B96B4;
    t2 = ((int)stk + 0);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC1B96B4 + 128)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = ((int (*)(int, int, int))(FUN_0c187798))(0xC5410FC, ((int)stk + 0), a6);
    t6 = ((int (*)(int))(FUN_0c187798))(t5);
    *(float *)(((int)stk + 128)) = (((((struct o40_float *)(((int)stk + 0)))->v)) - ((((struct o34_float *)(((int)stk + 0)))->v)));
    *(float *)(((int)stk + 132)) = (((((struct o44_float *)(((int)stk + 0)))->v)) - ((((struct o38_float *)(((int)stk + 0)))->v)));
    *(float *)(((int)stk + 136)) = (((((struct o48_float *)(((int)stk + 0)))->v)) - ((((struct o3C_float *)(((int)stk + 0)))->v)));
    t13 = FUN_0c0e2340((0x80 + ((int)stk + 0)));
    if (t13 != 0.0f) {
        FUN_0c17c4d0((0x80 + ((int)stk + 0)));
        u15 = *(float *)0xC056E34;
        u18 = ((((struct o40_float *)(((int)stk + 0)))->v));
        u18 = u18 + u15 * ((((struct o80_float *)(((int)stk + 0)))->v));
        (((struct o40_float *)(((int)stk + 0)))->v) = u18;
        u21 = ((((struct o44_float *)(((int)stk + 0)))->v));
        u21 = u21 + u15 * ((((struct o84_float *)(((int)stk + 0)))->v));
        (((struct o44_float *)(((int)stk + 0)))->v) = u21;
        u24 = ((((struct o48_float *)(((int)stk + 0)))->v));
        u24 = u24 + u15 * ((((struct o88_float *)(((int)stk + 0)))->v));
        (((struct o48_float *)(((int)stk + 0)))->v) = u24;
        FUN_0c056be6(0xC2419B0, ((int)stk + 0));
    }
}
