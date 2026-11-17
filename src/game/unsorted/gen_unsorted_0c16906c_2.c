/* game/unsorted: functions 0C16906C-0C16950A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c187798(void);
int FUN_0c16944a(int a4, int a5, int a6);

int FUN_0c16944a(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)0x4) {
            break;
        }
        if (t0 == 0) {
            t1 = (FUN_0c03f444(0x1, 0x0, 0x1));
            t2 = t1;
            if (t1 != 0) {
                t1 = a4;
                *(unsigned char *)((t2 + 0x1)) = t1;
                *(unsigned int *)((t2 + 0x4)) = 0xC16906C;
                t1 = t0;
                t3 = 0xC07E3AE;
                *(unsigned char *)((t2 + 0x2)) = t1;
                t1 = (FUN_0c07e3ae(t2, 0x55));
                t5 = 0x100;
                t3 = t5;
                t3 = (t3 - 16);
                t1 = (FUN_0c064d24(t2, 0x3, 0x55, 0x2, (t5), (~((int)0x1 << (int)a4)), 0x0, (t3)));
                t1 = 0xC;
                t1 = (FUN_0c187798());
                t1 = 0xC;
                t1 = (FUN_0c187798());
                t5 = t3;
            } else {
                t5 = 0xC03F444;
            }
        } else {
            t3 = 0xC03F444;
            t1 = (FUN_0c03f444(0x5, 0x0, 0x1));
            t2 = t1;
            if (t1 != 0) {
                t1 = a4;
                *(unsigned char *)((t2 + 0x1)) = t1;
                *(unsigned int *)((t2 + 0x4)) = 0xC16906C;
                t1 = t0;
                *(unsigned char *)((t2 + 0x2)) = t1;
                t1 = 0xC;
                t1 = (FUN_0c187798());
                t1 = 0xC;
                t1 = (FUN_0c187798());
            }
            t5 = 0xC03F444;
        }
        t3 = t5;
        t0 = (t0 + 0x1);
    }
    return t1;
}
