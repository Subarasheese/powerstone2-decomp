/* game/draw: functions 0C03783C-0C037944, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int mdl_vtx_iter_begin(int a4, int a5);

int mdl_vtx_iter_begin(int a4, int a5)
{
    (((struct o0_uint *)0xC3BD860)->v) = (a4 + 0x18);
    (((struct o8_uint *)0xC3BD860)->v) = (a5 + 0x18);
    (((struct o4_uint *)0xC3BD860)->v) = ((((struct o0_int *)0xC3BD860)->v));
    (((struct oC_uint *)0xC3BD860)->v) = ((((struct o8_int *)0xC3BD860)->v));
    (((struct o10_uint *)0xC3BD860)->v) = 0x0;
    return 0x0;
}
