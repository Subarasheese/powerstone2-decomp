/* game/unsorted: functions 0C02F874-0C02FD38, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlInvertMatrix(int);
extern int FUN_0c17b1a0();
int FUN_0c17c450(int);
extern int FUN_0c187798();
int FUN_0c02f874(int a4, int a5, int a6);
int FUN_0c02fa8a(int a4, int a5, int a6, int a7);
int FUN_0c02fb24(int a4, int a5, int a6);


int FUN_0c02fa8a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a6 != 0) {
        t0 = ((((a5 * 0x10E0) + ((0x444 + a4) + 0x24)) + (((((a7 << 2) << 1) + a7) << 2) << 2)) + 0x28);
        if (a6 != 1) {
            t1 = ((((0x21E4 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2)) + 0x28);
            if (a6 != 2) {
                t1 = ((((0x2784 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2)) + 0x28);
                if (a6 != 3) {
                    t1 = ((((0x2D24 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2)) + 0x28);
                    if (a6 != 4) {
                        t1 = 0x0;
                    }
                }
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t1 = ((*(int *)((((a7 << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
    }
    return t1;
}

