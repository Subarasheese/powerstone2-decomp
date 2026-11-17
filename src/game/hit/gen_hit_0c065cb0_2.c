/* game/hit: functions 0C065CB0-0C065E5A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05ffa4(int, int, int);
int FUN_0c060180(int, int, int);
int FUN_0c060428(int, int);
int FUN_0c06440e(int, int);
int FUN_0c0644f4(int, int);
int FUN_0c18778c(void);
int FUN_0c065d4a(int a4);

int FUN_0c065d4a(int a4)
{
    int stk[7];
    register int t3;
    register int t8;
    register int t18;
    register int t20;
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    int t14;
    register int t46;
    register int t47;
    register int t48;
    register int t38;
    register int t39;
    register int t31;
    register int t36;

    t3 = a4;
    t8 = a4;
    for (;;) {
        if (t8 == 0) {
            break;
        }
        t3 = 0x12A;
        t3 = (t3 + t8);
        t1 = (*(short *)((t3 + 0x0)));
        if ((t1 == 0) && (t14 = *(short *)((t3 + 0x2)), t0 = t14, t0 == 0)) {
            t46 = t1;
            t47 = t2;
            t48 = t3;
        } else {
            t0 = 0x124;
            t2 = (*(signed char *)((t8 + t0)));
            if (t2 != 0) {
                t0 = 0x125;
                t2 = 0x140;
                t18 = *(signed char *)((t8 + t0));
                t0 = (*(signed char *)((t8 + 0x1)));
                t7 = t2;
                t7 = (t7 + 0x44);
                t1 = 0xC05FFA4;
                t20 = t0;
                t0 = 0x124;
                t7 = (t7 + t8);
                t7 = (t7 + t2);
                t3 = (*(signed char *)((t8 + t0)));
                t0 = (FUN_0c05ffa4(t3, t20, t18));
                t6 = t0;
                t0 = (*(signed char *)((t6 + 0x3)));
                t4 = t0;
                t5 = 0x0;
                if ((int)t4 > 0) {
                    for (;;) {
                        t1 = (*(signed char *)((t6 + 0x0)));
                        if ((t1 & 0x3) != 0) {
                            t2 = 0xC18778C;
                            t1 = t6;
                            t0 = 0x20;
                            t0 = (FUN_0c18778c());
                            t0 = (*(signed char *)((t7 + 0x2)));
                            t2 = 0xC060180;
                            t3 = t8;
                            t0 = (FUN_0c060180(t3, (t7 + 0x8), t0));
                            t1 = 0xC060428;
                            t3 = t8;
                            t0 = (FUN_0c060428(t3, t7));
                            t2 = (*(signed char *)((t6 + 0x0)));
                            if ((t2 & 0x1) != 0) {
                                t2 = 0xC06440E;
                                t3 = t8;
                                t0 = (FUN_0c06440e(t3, t7));
                            } else {
                                t31 = t2;
                            }
                            t0 = (*(signed char *)((t6 + 0x0)));
                            t2 = t31;
                            if ((t0 & 2) != 0) {
                                t1 = 0xC0644F4;
                                t3 = t8;
                                t0 = (FUN_0c0644f4(t3, t7));
                            } else {
                                t36 = t2;
                            }
                            t7 = (t7 + 0x20);
                            t2 = t36;
                            t39 = t2;
                        } else {
                            t38 = t1;
                        }
                        t5 = (t5 + 0x1);
                        t1 = t38;
                        t2 = t39;
                        t6 = (t6 + 0x20);
                        if ((int)t5 >= (int)t4) {
                            break;
                        }
                    }
                    t46 = t1;
                    t47 = t2;
                }
            } else {
                t46 = t1;
                t47 = t2;
                t48 = t3;
            }
        }
        t8 = (*(int *)((t8 + 0xC)));
        t1 = t46;
        t2 = t47;
        t3 = t48;
    }
    return t0;
}
