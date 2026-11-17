/* game/player: functions 0C06BFD4-0C06C4DC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037bf6(int);
int FUN_0c059df2(int, int);
int FUN_0c06bfd4(int);
int FUN_0c06c096(int);
int FUN_0c06c134(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ebb0(int);
int math_vec3_accumulate(int, int);
int FUN_0c06c258(int a4);

int FUN_0c06c258(int a4)
{
    register int t0;

    FUN_0c07da48(a4);
    t0 = *(signed char *)((a4 + 0x371D));
    switch (t0) {
    case 3:
        if ((*(short *)((a4 + 0x1E))) != 0) {
            t0 = FUN_0c037bf6(a4);
            if ((unsigned char)t0 != 0) {
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x5B);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                t0 = *(short *)((a4 + 0x1E));
                if (t0 != 1) {
                    if (t0 != 0) {
                    } else {
                        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xA2, 0xFFFFFFFF, 0x3, 0xA2);
                    }
                } else {
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x9D, 0xFFFFFFFF, 0x3, 0x9D);
                }
            }
        } else {
            FUN_0c037bf6(a4);
        }
        break;
    case 5:
        if ((*(short *)((a4 + 0x1E))) != 0) {
            t0 = FUN_0c037bf6(a4);
            if ((unsigned char)t0 != 0) {
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xBF, 0xFFFFFFFF, 0x3, 0xBF);
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x64);
                }
            }
        } else {
            FUN_0c037bf6(a4);
        }
        break;
    case 6:
        FUN_0c06c096(a4);
        if ((*(short *)((a4 + 0x1E))) != 0) {
            t0 = FUN_0c037bf6(a4);
            if ((unsigned char)t0 != 0) {
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xB1, 0xFFFFFFFF, 0x3, 0xB1);
                }
            }
        } else {
            FUN_0c037bf6(a4);
        }
        break;
    default:
        FUN_0c06bfd4(a4);
        FUN_0c06c134(a4);
        FUN_0c037bf6(a4);
        break;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return FUN_0c07ebb0(a4);
}
