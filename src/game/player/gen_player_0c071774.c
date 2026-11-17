/* game/player: functions 0C071774-0C07193A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037bf6(int);
int FUN_0c059ef6(int, int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c071774(int a4);

int FUN_0c071774(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 15)) {
        switch (t0) {
        case 1:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x10, (t0), 0x2, 0x10);
            FUN_0c037bf6(a4);
            FUN_0c07e2f4(a4, 0x18);
            break;
        case 2:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x18, (t0), 0x2, 0x18);
            FUN_0c037bf6(a4);
            break;
        case 3:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x12, (t0), 0x2, 0x12);
            FUN_0c037bf6(a4);
            break;
        case 5:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x12, (t0), 0x2, 0x12);
            FUN_0c037bf6(a4);
            break;
        case 4:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x1, 0x11, (t0), 0x1, 0x11);
            FUN_0c037bf6(a4);
            break;
        case 6:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0xC, (t0), 0x2, 0xC);
            FUN_0c037bf6(a4);
            FUN_0c07e2f4(a4, 0x1A);
            break;
        case 7:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0xE, (t0), 0x2, 0xE);
            FUN_0c037bf6(a4);
            break;
        default:
            if ((t0 != 10) && (t0 != 14)) {
                if (t0 != 9) {
                    if (t0 != 11) {
                        t0 = *(signed char *)((a4 + 0x1));
                        FUN_0c07e79c(a4, t0, 0x2, 0xD, (t0), 0x2, 0xD);
                        FUN_0c037bf6(a4);
                        FUN_0c07e2f4(a4, 0x18);
                    } else {
                        t0 = *(signed char *)((a4 + 0x1));
                        FUN_0c07e79c(a4, t0, 0x2, 0xF, (t0), 0x2, 0xF);
                        FUN_0c037bf6(a4);
                    }
                } else {
                    t0 = *(signed char *)((a4 + 0x1));
                    FUN_0c07e79c(a4, t0, 0x2, 0xF, (t0), 0x2, 0xF);
                    FUN_0c037bf6(a4);
                }
            } else {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x2, 0x1B, (t0), 0x2, 0x1B);
                FUN_0c037bf6(a4);
            }
            break;
        }
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x11, (t0), 0x2, 0x11);
        FUN_0c037bf6(a4);
    }
    FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x48));
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    FUN_0c07043c(a4, 35.0f, -2.0f, 800.0f, 100.0f);
    return FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x0);
}
