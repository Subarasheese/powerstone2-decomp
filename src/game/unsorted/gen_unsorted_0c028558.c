/* game/unsorted: functions 0C028558-0C02859E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
int FUN_0c0573cc(int, int, int);
int FUN_0c028558(void);

int FUN_0c028558(void)
{
    register int t0;
    register int t1;

    t0 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t0 + 0x1);
    if ((short)(t0 + 0x1) == 16) {
        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    }
    t0 = *(short *)0xC30EF6C;
    t1 = t0;
    if ((int)t0 >= (int)0x24) {
        (((struct o0_uchar *)0xC309859)->v) = 0x1;
        (((struct o1_uchar *)0xC309859)->v) = 0x0;
        (((struct o2_uchar *)0xC309859)->v) = 0x0;
        *(unsigned short *)0xC30EF6C = 0x0;
        t1 = 0x0;
    }
    return t1;
}
