/* game/player: functions 0C07DB58-0C07DBAE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o37B4_float { char p[0x37B4]; float v; };
int FUN_0c059f20(int, int);
int FUN_0c14fc70(int, int, int);
int FUN_0c1512a0(int, int);
int FUN_0c07db58(int a4, int a5, int a6);

int FUN_0c07db58(int a4, int a5, int a6)
{
    int stk[3];

    if ((*(signed char *)((a4 + 0x371D))) != 2) {
        FUN_0c14fc70((*(signed char *)((a4 + 0x1))), (a4 + 0x28), a6);
    } else {
        *(float *)(((int)stk + 0)) = ((((struct o28_float *)(a4))->v));
        *(float *)(((int)stk + 8)) = ((((struct o30_float *)(a4))->v));
        *(float *)(((int)stk + 4)) = ((((struct o37B4_float *)(a4))->v));
        FUN_0c1512a0((*(signed char *)((0xC2594A4 + (*(signed char *)((a4 + 0x2)))))), ((int)stk + 0));
    }
    return (FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135)))));
}
