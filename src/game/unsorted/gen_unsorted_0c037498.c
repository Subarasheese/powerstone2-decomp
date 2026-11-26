/* @unit 0C037498-0C0374BC */
/* game/unsorted: functions 0C037498-0C0374BC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037498(int a4, int a5, int a6, int a7);

struct o37498_entry { char p[0x1C]; int v; };       /* 32 bytes */
struct o37498_set { char p[0x10]; struct o37498_entry e[1]; };

int FUN_0c037498(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a4 + 0x8)) = (*(int *)((((struct o37498_set *)a7)->e[a6].v + (a5 * 0x3C))));
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    return 0x0;
}
