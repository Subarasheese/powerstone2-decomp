/* game/unsorted: functions 0C0CED40-0C0CED88, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_short { char p[0x24]; short v; };
struct o30_float { char p[0x30]; float v; };
int FUN_0c03f346(int);
int FUN_0c187798(int, int, int);
void FUN_0c0ced40(int a4, int a5, int a6);

void FUN_0c0ced40(int a4, int a5, int a6)
{
    register int t2;

    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(a4, a5, a6);
    if ((*(short *)((t2 + 0x1C))) == (unsigned short)((((struct o24_short *)((*(int *)((t2 + 0x10)))))->v))) {
        if ((*(signed char *)((t2 + 0x2))) == 0) {
            if ((*(signed char *)(((*(int *)((t2 + 0x10))) + 0x1B))) != 0) {
                if (((((struct o30_float *)(t2))->v)) > (*(float *)0xC0CEE28)) {
                    FUN_0c03f346(t2);
    return;
                }
                return;
            }
            return;
        }
        return;
    }
    FUN_0c03f346(t2);
}
