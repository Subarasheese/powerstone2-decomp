/* game/hit: functions 0C065CB0-0C065E5A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oC_float { char p[0xC]; float v; };
int FUN_0c05ffa4(int, int, int);
int FUN_0c060180(int, int, int, int, int, int, int, int);
int FUN_0c0601da(int, int);
float FUN_0c0e2240(int, int);
int FUN_0c18778c(void);
int FUN_0c065cb0(int a4);
int FUN_0c065e1e(int a4, int a5);


int FUN_0c065e1e(int a4, int a5)
{
    register float u0;
    register float u1;
    register float t2;
    register int t3;

    u0 = (((struct oC_float *)((a5 + 0x8)))->v);
    u1 = (((struct oC_float *)((a4 + 0x8)))->v);
    t2 = FUN_0c0e2240((a4 + 0x8), (a5 + 0x8));
    t3 = 0x0;
    if (!(0.0f > ((u1 + u0) - t2))) {
        t3 = 0x1;
    }
    return t3;
}


