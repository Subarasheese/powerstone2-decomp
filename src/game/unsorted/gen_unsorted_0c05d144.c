/* game/unsorted: functions 0C05D144-0C05D192, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
int FUN_0c05d144(void);
int FUN_0c05d16a(void);

int FUN_0c05d144(void)
{
    register int t0;

    if ((unsigned int)0xC542854 < (unsigned int)0xC5428F4) {
        t0 = 0xC542854;
        for (;;) {
            if (((unsigned short)(*(short *)((t0 + 0x14))) & 0x8000) != 0) {
                break;
            }
            t0 = (t0 + 0x28);
            if ((unsigned int)t0 >= (unsigned int)0xC5428F4) {
                return 0x0;
            }
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c05d16a(void)
{
    register int t0;

    t0 = FUN_0c05d144();
    if (t0 != 0) {
        (((struct o0_uchar *)0xC541F40)->v) = 0x2;
        (((struct o2_uchar *)0xC541F40)->v) = 0x0;
        (((struct o1_uchar *)0xC541F40)->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}
