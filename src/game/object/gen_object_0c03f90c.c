/* game/object: functions 0C03F90C-0C03F950, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_short { char p[0x4]; short v; };
int FUN_0c187798(int);
int memset(int, int, int);
int FUN_0c03f90c(int a4);

int FUN_0c03f90c(int a4)
{
    register int t1;

    memset(a4, 0x0, 0x83C);
    t1 = *(int *)0xC40927C;
    *(unsigned int *)0xC40927C = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC4091FC)) = a4;
    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)0xC1B7A22);
    *(unsigned short *)((a4 + 0x6)) = ((((struct o4_short *)0xC1B7A1C)->v));
    (((struct o24_float *)(a4))->v) = ((((struct o0_float *)0xC1B7A1C)->v));
    return (FUN_0c187798(0xC40927C));
}
