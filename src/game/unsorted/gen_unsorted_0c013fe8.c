/* game/unsorted: functions 0C013FE8-0C014040, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
int FUN_0c0185b4(void);
int FUN_0c01c5ac(int, float, float);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c013fe8(void);

int FUN_0c013fe8(void)
{
    FUN_0c01cb7c();
    FUN_0c01cc56(0xC, 0xC014040);
    FUN_0c01cc56(0xE, 0xC014040);
    FUN_0c01cc56(0xF, 0xC014040);
    FUN_0c01cc56(0x1A, 0xC01436C);
    FUN_0c01c5ac((*(signed char *)0xC309BE4), ((((struct o4_float *)0xC014074)->v)), ((((struct o0_float *)0xC014074)->v)));
    FUN_0c01cc56(((*(signed char *)0xC305414) + 0x16), 0xC0144CE);
    FUN_0c01cc56(0x39, 0xC014970);
    FUN_0c01cc56(0x39, 0xC01499C);
    FUN_0c0185b4();
    return 0x0;
}
