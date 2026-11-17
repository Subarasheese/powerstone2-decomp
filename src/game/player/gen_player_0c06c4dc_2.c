/* game/player: functions 0C06C4DC-0C06CACA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c064f80(int);
int FUN_0c06c580(int);
int FUN_0c06c9c4(int);
int FUN_0c07ebb0(int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c06c9f2(int a4);
int FUN_0c06ca16(int a4, int a5, int a6, int a7);

int FUN_0c06c9f2(int a4)
{
    register int t1;

    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        return FUN_0c06c9c4(a4);
    }
    return FUN_0c06c580(a4);
}

int FUN_0c06ca16(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t6;
    register int t16;
    register int t23;
    register int t29;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = FUN_0c064f80(a4);
            if (t2 != 0) {
                (((struct o37A4_float *)(a4))->v) = 0.0f;
            }
            return FUN_0c07ebb0(a4);
        }
        t6 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t6 != 0) {
            return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0));
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o60_float *)(a4))->v)));
        t16 = FUN_0c064f80(a4);
        if (t16 != 0) {
            (((struct o37A4_float *)(a4))->v) = 0.0f;
        }
        return FUN_0c07ebb0(a4);
    }
    if ((*(signed char *)((a4 + 0x371D))) == 2) {
        FUN_0c085d0c(a4, a5, a6, a7);
    } else {
        FUN_0c037bf6(a4, a5, a6);
        t23 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t23 - 1);
        if ((int)(short)(t23 - 1) <= 0) {
            FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
        }
    }
    t29 = FUN_0c064f80(a4);
    if (t29 != 0) {
        (((struct o37A4_float *)(a4))->v) = 0.0f;
    }
    return FUN_0c07ebb0(a4);
}
