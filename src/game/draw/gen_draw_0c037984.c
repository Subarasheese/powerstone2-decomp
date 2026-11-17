/* game/draw: functions 0C037984-0C0379D4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
int FUN_0c0379b6(int a4, int a5);

int FUN_0c0379b6(int a4, int a5)
{
    register int t4;

    (((struct o18_float *)((*(int *)0xC3BD868)))->v) = (*(float *)((a4 + 0x0)));
    (((struct o1C_float *)((*(int *)0xC3BD868)))->v) = (*(float *)((a5 + 0x0)));
    t4 = *(int *)0xC3BD868;
    *(unsigned int *)((t4 + 0x1C)) = ((*(int *)((t4 + 0x1C))) | 0x1);
    return 0x0;
}
