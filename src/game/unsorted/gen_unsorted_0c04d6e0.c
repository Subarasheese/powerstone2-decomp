/* @unit 0C04D6E0-0C04D6F4 */
/* game/unsorted: functions 0C04D6E0-0C04D6F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). C written by hand, byte-matching. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { char pad[0x14]; char count; } Counter;

void FUN_0c04d6e0(Counter *p);

void FUN_0c04d6e0(Counter *p)
{
    switch (p->count) {
    case 0:
        p->count++;
    }
}
