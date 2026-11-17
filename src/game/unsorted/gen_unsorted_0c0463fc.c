/* game/unsorted: functions 0C0463FC-0C046420, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c03d358(int);
int FUN_0c0463fc(void);

int FUN_0c0463fc(void)
{
    (((struct o0_uchar *)0xC40F824)->v) = 0x0;
    (((struct o1_uchar *)0xC40F824)->v) = 0x0;
    FUN_0c03d358(0x0);
    FUN_0c03d358(0x1);
    FUN_0c03d358(0x2);
    return (FUN_0c03d358(0x3));
}
