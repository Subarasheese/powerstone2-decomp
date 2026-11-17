/* game/system: functions 0C05B794-0C05C15A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c045392(int, int, int, int);
int FUN_0c045a38(int, int, int, int);
int FUN_0c045fe0(int, int, int, int);
int FUN_0c04a556(int, int, int, int);
int FUN_0c04a99c(void);
int FUN_0c04d76c(void);
int FUN_0c05bc10(void);
int FUN_0c05bd22(void);
int game_mode_handler_6(void);
int FUN_0c05bf24(void);
int FUN_0c11ed26(void);
int FUN_0c11ed80(void);
int FUN_0c05b900(int a4, int a5, int a6, int a7);

int FUN_0c05b900(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC541F41;
    if ((unsigned int)(unsigned char)t0 < (unsigned int)0xC) {
        switch (((unsigned char)t0 << 1)) {
            case 0:
            {
                return FUN_0c05bc10();
            }
            case 2:
            {
                return FUN_0c045392(a4, a5, a6, a7);
            }
            case 4:
            {
                return FUN_0c045a38(a4, a5, a6, a7);
            }
            case 6:
            {
                return FUN_0c045fe0(a4, a5, a6, a7);
            }
            case 8:
            {
                return FUN_0c04a556(a4, a5, a6, a7);
            }
            case 10:
            {
                return FUN_0c05bd22();
            }
            case 12:
            {
                return game_mode_handler_6();
            }
            case 14:
            {
                return FUN_0c04a99c();
            }
            case 16:
            {
                return FUN_0c04d76c();
            }
            case 18:
            {
                return FUN_0c05bf24();
            }
            case 20:
            {
                return FUN_0c11ed26();
            }
            default:
            {
                return FUN_0c11ed80();
            }
        }
    }
    return (unsigned char)t0;
}
