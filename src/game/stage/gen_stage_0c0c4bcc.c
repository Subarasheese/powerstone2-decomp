/* game/stage: functions 0C0C4BCC-0C0C4C1C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
float FUN_0c064d9c(int);
int FUN_0c064ee4(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c1512a0(int, int);
int FUN_0c0c4bcc(int a4, int a5, int a6);

int FUN_0c0c4bcc(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t11;
    register int t1;

    t0 = FUN_0c0c3e3a(a4, a5, a6);
    t11 = t0;
    if (t0 == 0) {
        t1 = FUN_0c064ee4(a4, 0x2);
        if (t1 != 0) {
            *(float *)(((int)stk + 0)) = ((((struct o28_float *)(a4))->v));
            *(float *)(((int)stk + 8)) = ((((struct o30_float *)(a4))->v));
            *(float *)(((int)stk + 4)) = (FUN_0c064d9c(t1));
            FUN_0c1512a0(0x2, ((int)stk + 0));
        }
        t11 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
    }
    return t11;
}
