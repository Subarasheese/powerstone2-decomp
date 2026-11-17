/* game/unsorted: functions 0C02AB74-0C02ABC8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c0573cc(int, int, int);
void FUN_0c02ab74(void);

void FUN_0c02ab74(void)
{
    register int t0;

    t0 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t0 + 0x1);
    if ((int)(short)((t0 + 0x1) - 1) < (int)0x258) {
        if ((int)(*(short *)0xC30540C) >= (int)0x98) {
            t0 = FUN_0c021ed2();
            if (t0 == 0) {
                t0 = FUN_0c021ee2();
                if (t0 != 0) {
                    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
                    *(unsigned short *)0xC30EF6C = 0x14;
                    FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
                }
                return;
            }
            *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
            *(unsigned short *)0xC30EF6C = 0x14;
            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
        }
        return;
    }
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    *(unsigned short *)0xC30EF6C = 0x14;
    FUN_0c0573cc(0xFF000000, 0x0, 0x14);
}
