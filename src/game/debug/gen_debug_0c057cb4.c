/* game/debug: functions 0C057CB4-0C057CC8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int memset(int, int, int);
int ui_sprite_queue_reset(void);

int ui_sprite_queue_reset(void)
{
    (((struct o4_uint *)0xC40FAB0)->v) = 0x0;
    (((struct o0_uint *)0xC40FAB0)->v) = 0x0;
    return memset(0xC40FAB8, 0x0, 0x4200);
}
