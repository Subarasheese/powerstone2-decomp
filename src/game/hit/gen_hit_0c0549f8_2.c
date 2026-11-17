/* game/hit: functions 0C0549F8-0C054E90, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C8_uint { char p[0x2C8]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
int FUN_0c054c90(int, int, int);
int FUN_0c054a62(int a4, int a5, int a6);

int FUN_0c054a62(int a4, int a5, int a6)
{
    (((struct o2C8_uint *)(a4))->v) = a5;
    (((struct o2CC_uint *)(a4))->v) = a5;
    return FUN_0c054c90(a4, a5, a6);
}
