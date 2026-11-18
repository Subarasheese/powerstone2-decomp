/* @unit 0C037320-0C03733C */
/* game/resource: functions 0C037320-0C03733C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). C written by hand, byte-matching. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { char pad[0x18]; int value; char pad2[4]; } Entry;
typedef struct { int pad[3]; int count; Entry entries[1]; } Table;

int FUN_0c037320(int i, Table *t);

int FUN_0c037320(int i, Table *t)
{
    Entry *e;
    if (t->count <= i) return -1;
    e = &t->entries[i];
    return e->value;
}
