/* game/unsorted: functions 0C07BB70-0C07BC46, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
struct o377C_int { char p[0x377C]; int v; };
int nlUnitMatrix(void);
int FUN_0c181bb0(void);
int FUN_0c181c30(float);
int FUN_0c187798(void);
int FUN_0c07bb70(int a4);

int FUN_0c07bb70(int a4)
{
    int stk[2];
    register int t0;
    register int t301;
    register int t137;
    register int t18;
    register int t26;
    register int t33;
    register int t39;
    register int t53;
    register float u59;
    register int t164;
    register int t172;
    register int t179;
    register int t185;
    register int t199;
    register float u205;

    t0 = *(signed char *)0xC541F3D;
    t301 = (unsigned char)t0;
    if ((unsigned char)t0 != 1) {
        if ((*(signed char *)0xC54235E) != 0) {
            t137 = *(signed char *)((a4 + 0x1));
            t301 = t137;
            if (t137 != (*(signed char *)0xC542363)) {
                if ((*(signed char *)0xC542A0E) != 0) {
                    t18 = *(signed char *)0xC5429B4;
                    t137 = t18;
                    if (t18 != 2) {
                        t26 = *(signed char *)0xC5429B4;
                        t137 = t26;
                        if (t26 != 3) {
                            t33 = *(signed char *)0xC541F41;
                            t137 = (unsigned char)t33;
                            if ((unsigned char)t33 == 5) {
                                t39 = *(signed char *)0xC5421F9;
                                t137 = t39;
                                if (t39 == 3) {
                                    t137 = 0x3714;
                                    if ((*(signed char *)((a4 + 0x3714))) != 0) {
                                        t137 = 0xA8;
                                        if ((*(signed char *)((a4 + 0xA8))) != 0) {
                                            t137 = 0x160;
                                            if (((((struct o160_float *)(a4))->v)) > 0.0f) {
                                                t53 = (((struct o377C_int *)(a4))->v);
                                                t137 = 0x377C;
                                                if ((t53 != 0) && (a4 != t53)) {
                                                    nlUnitMatrix();
                                                    FUN_0c181c30(3.0f);
                                                    FUN_0c187798();
                                                    u59 = 10.0f;
                                                    if ((*(signed char *)((a4 + 0x371D))) != 4) {
                                                        u59 = 100.0f;
                                                    }
                                                    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + u59);
                                                    FUN_0c187798();
                                                    *(volatile int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC2593C4));
                                                    t137 = (FUN_0c181bb0());
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                t301 = t137;
            }
        } else {
            t301 = 0x166;
            if ((*(signed char *)0xC542A0E) != 0) {
                t164 = *(signed char *)0xC5429B4;
                t301 = t164;
                if (t164 != 2) {
                    t172 = *(signed char *)0xC5429B4;
                    t301 = t172;
                    if (t172 != 3) {
                        t179 = *(signed char *)0xC541F41;
                        t301 = (unsigned char)t179;
                        if ((unsigned char)t179 == 5) {
                            t185 = *(signed char *)0xC5421F9;
                            t301 = t185;
                            if (t185 == 3) {
                                t301 = 0x3714;
                                if ((*(signed char *)((a4 + 0x3714))) != 0) {
                                    t301 = 0xA8;
                                    if ((*(signed char *)((a4 + 0xA8))) != 0) {
                                        t301 = 0x160;
                                        if (((((struct o160_float *)(a4))->v)) > 0.0f) {
                                            t199 = (((struct o377C_int *)(a4))->v);
                                            t301 = 0x377C;
                                            if ((t199 != 0) && (a4 != t199)) {
                                                nlUnitMatrix();
                                                FUN_0c181c30(3.0f);
                                                FUN_0c187798();
                                                u205 = 10.0f;
                                                if ((*(signed char *)((a4 + 0x371D))) != 4) {
                                                    u205 = 100.0f;
                                                }
                                                *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + u205);
                                                FUN_0c187798();
                                                *(volatile int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC2593C4));
                                                t301 = (FUN_0c181bb0());
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return t301;
}
