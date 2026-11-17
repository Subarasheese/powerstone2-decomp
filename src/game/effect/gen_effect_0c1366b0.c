/* game/effect: functions 0C1366B0-0C136784, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c1366b0(int a4, int a5, int a6);

int FUN_0c1366b0(int a4, int a5, int a6)
{
    int stk[29];
    register int t0;
    register int t3;
    register int t6;
    register int t7;
    register int t8;
    register int t12;
    register int t16;
    register int t23;
    register float u21;

    *(unsigned char *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 12)) = a6;
    t0 = *(int *)0xC542260;
    t3 = 0x0;
    if ((*(signed char *)(((int)stk + 12))) != 0) {
        t3 = 0xC;
    }
    t6 = 0x0;
    t7 = ((((((signed char)((t0 & 0x2) << 1) + (signed char)t3) << 1) + ((signed char)((t0 & 0x2) << 1) + (signed char)t3)) << 2) + 0xC201EBC);
    t8 = (((int)stk + 8) + 0xC);
    for (;;) {
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798((signed char)t3, 0x0, a6);
        FUN_0c17c130(t8, t8, t7);
        t6 = (t6 + 0x1);
        t7 = (t7 + 0xC);
        t8 = (t8 + 0xC);
        if ((int)(signed char)t6 >= (int)0x8) {
            break;
        }
    }
    t12 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t12 & 0x7) << 1) + (t12 & 0x7)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = (((((signed char)((t0 & 0x2) << 1) << 1) + (signed char)((t0 & 0x2) << 1)) << 2) + 0xC202E68);
    t16 = FUN_0c1502e8((*(signed char *)(((int)stk + 16))), 0x8, 0x2, (((int)stk + 0) + 0x14), (((((signed char)((t0 & 0x2) << 1) << 1) + (signed char)((t0 & 0x2) << 1)) << 2) + 0xC202E68), (((((t12 & 0x7) << 1) + (t12 & 0x7)) << 2) + 0xC2030D8));
    t23 = t16;
    if (t16 != 0) {
        u21 = 1.0f;
        if ((*(signed char *)(((int)stk + 12))) != 0) {
            u21 = (*(float *)0xC1367D8);
        }
        (((struct o10_float *)((t16 + 0x41C)))->v) = u21;
        t23 = 0x10;
    }
    return t23;
}
