/* game/sound: functions 0C05A418-0C05A43C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c05a418(int a4, int a5);

int FUN_0c05a418(int a4, int a5)
{
    register float u0;

    u0 = *(float *)0xC05A530;
    (((struct o0_float *)0xC46E164)->v) = ((float)a4 / u0);
    (((struct o8_float *)0xC46E164)->v) = ((float)a4 / u0);
    (((struct o4_float *)0xC46E164)->v) = ((float)a5 / u0);
    (((struct oC_float *)0xC46E164)->v) = ((float)a5 / u0);
    return 0x2DC;
}
