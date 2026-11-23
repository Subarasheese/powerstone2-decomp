/* game/draw: functions 0C037944-0C037984, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
int mdl_vtx_get_uv(int a4, int a5);

int mdl_vtx_get_uv(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = ((((struct o18_float *)((*(int *)0xC3BD860)))->v));
    *(float *)((a5 + 0x0)) = ((((struct o1C_float *)((*(int *)0xC3BD860)))->v));
    return 0x0;
}
