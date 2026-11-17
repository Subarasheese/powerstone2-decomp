/* game/player: functions 0C0A3058-0C0A4DFE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c08076a(int);
int FUN_0c187798(int);
int FUN_0c0a31ca(int a4);

int FUN_0c0a31ca(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c07ebd0(a4);
    if (t1 != 0) {
        (((struct o3850_uint *)(a4))->v) = (unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
        t1 = *(int *)((a4 + 0x38));
        t2 = (((struct o3850_short *)(a4))->v);
        t3 = (unsigned short)(t2 - t1);
        if ((0x8000 & (unsigned short)(t2 - t1)) != 0) {
            t3 = ((unsigned short)(t2 - t1) | 0xFFFF0000);
        }
        if ((int)t3 <= (int)0xFFFFF1C8) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0xE38);
        } else {
            if ((int)t3 >= (int)0xE38) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xE38);
            } else {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u))) >> 1));
            }
        }
        return FUN_0c08076a(a4);
    }
    FUN_0c187798(0xC25D238);
    return (FUN_0c187798(t0));
}
