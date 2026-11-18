/* Straight-line functions with calls and guards (batch gen_ap): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c1828e0(void);
int FUN_0c1828fe(int);
int FUN_0c1965cc(int, int, int);
int FUN_0c2b16a0(int);
int FUN_0c2b176e(int);
int fmMngWrite(int, int);
int FUN_0c18294e(int a4);

int FUN_0c18294e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = FUN_0c2b16a0(0x2D0);
    t1 = 0xFFFFFFFE;
    if (t0 != 0) {
        FUN_0c1828fe(t0);
        t2 = (0x0 + a4);
        t3 = (0x0 + t0);
        t4 = 0x0;
        t5 = 0xC0;
        for (;;) {
            t7 = FUN_0c1965cc(t3, ((t4 * 0x3C) + a4), 0x3C);
            if (t7 != 0) {
                t6 = 0xC2C2738;
                t6 = (fmMngWrite(t5, t2));
                if (t6 == 0) {
                    t7 = FUN_0c1828e0();
                    t6 = t7;
                    if (t7 == 1) {
                        t4 = (t4 + 0x1);
                        t5 = (t5 + 0x1);
                        t2 = (t2 + 0x3C);
                        t3 = (t3 + 0x3C);
                        if ((int)t4 >= (int)0xC) {
                            break;
                        }
                        continue;
                    }
                    return t6;
                }
                return t6;
            }
            t4 = (t4 + 0x1);
            t5 = (t5 + 0x1);
            t2 = (t2 + 0x3C);
            t3 = (t3 + 0x3C);
            if ((int)t4 >= (int)0xC) {
                break;
            }
        }
        FUN_0c2b176e(t0);
        t1 = t6;
    }
    return t1;
}
