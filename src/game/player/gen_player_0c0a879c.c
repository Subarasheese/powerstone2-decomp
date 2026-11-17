/* game/player: functions 0C0A879C-0C0A87D4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c085d0c(int);
int FUN_0c098558(int, int, float, float, float);
int FUN_0c0a879c(int a4);

int FUN_0c0a879c(int a4)
{
    register int t4;

    FUN_0c098558(a4, 0xE, ((((struct o8_float *)0xC0A8828)->v)), ((((struct o4_float *)0xC0A8828)->v)), ((((struct o0_float *)0xC0A8828)->v)));
    t4 = FUN_0c037bf6(a4);
    if ((unsigned char)t4 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}
