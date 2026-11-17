/* game/unsorted: functions 0C0C43C0-0C0C4442, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c43c0(int a4, int a5);

int FUN_0c0c43c0(int a4, int a5)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if ((unsigned int)t0 < (unsigned int)0x10) {
        switch ((t0 << 1)) {
            case 0:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0x0)));
            }
            case 2:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0x1)));
            }
            case 4:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0x2)));
            }
            case 6:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0x3)));
            }
            case 8:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0x4)));
            }
            case 10:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0x5)));
            }
            case 12:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0x6)));
            }
            case 14:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0x7)));
            }
            case 16:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0x8)));
            }
            case 18:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0x9)));
            }
            case 20:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0xA)));
            }
            case 22:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0xB)));
            }
            case 24:
            case 26:
            {
                return 0x0;
            }
            case 28:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0xE)));
            }
            default:
            {
                return (*(signed char *)((((a5 * 0x1C) + 0xC2762F8) + 0xF)));
            }
        }
    }
    return 0x0;
}
