/* @unit 0C058270-0C0582AC */
/* game/math: functions 0C058270-0C0582AC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). C written by hand, byte-matching. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { float x, y, z; } Vec3;

void FUN_0c058270(Vec3 *r, Vec3 *a, Vec3 *b);

void FUN_0c058270(Vec3 *r, Vec3 *a, Vec3 *b)
{
    r->x = a->y * b->z - a->z * b->y;
    r->y = a->z * b->x - a->x * b->z;
    r->z = a->x * b->y - a->y * b->x;
}
