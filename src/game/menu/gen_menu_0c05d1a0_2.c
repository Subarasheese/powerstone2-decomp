/* game/menu: functions 0C05D1A0-0C05E4FA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05cf04(void);
int FUN_0c05d1d4(int);
int FUN_0c0d5c9a(int);
int FUN_0c05d280(int);
int FUN_0c05d2cc(int);
int FUN_0c05d45c(int);
int FUN_0c05d4c8(int);
int FUN_0c0d6098(int);
int FUN_0c05d608(int, int);
int FUN_0c05d648(int);
int FUN_0c05d6a6(int);
int FUN_0c05d908(void);
int FUN_0c0d6212(int);
int FUN_0c05d974(void);
int FUN_0c05dfc2(int);
int FUN_0c05d530(int a4, int a5, int a6, int a7);
int FUN_0c05d800(int a4);
int FUN_0c05d90c(int a4);

int FUN_0c05d530(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c05d4c8(a4);
    if (t0 != 0) {
        t1 = *(signed char *)0xC541F40;
        if ((int)(unsigned char)t1 < (int)0x7) {
            return FUN_0c05d1d4((*(signed char *)((a4 + 0x9))));
        }
        return (unsigned char)t1;
    }
    if ((*(signed char *)0xC542256) == 0) {
        t1 = *(signed char *)((a4 + 0x1));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 != 3) {
                        if (t1 != 4) {
                            if (t1 != 5) {
                                return t1;
                            }
                            return FUN_0c05dfc2(a4);
                        }
                        return ((int (*)(int, int, int, int))(0xC05DFBE))(a4, a5, a6, a7);
                    }
                    FUN_0c05d974();
                    t1 = *(signed char *)0xC541F40;
                    if ((int)(unsigned char)t1 < (int)0x7) {
                        return FUN_0c05d45c(a4);
                    }
                    return (unsigned char)t1;
                }
                FUN_0c0d6212(a4);
                t1 = *(signed char *)0xC541F40;
                if ((int)(unsigned char)t1 < (int)0x7) {
                    return FUN_0c05d2cc(a4);
                }
                return (unsigned char)t1;
            }
            FUN_0c05d908();
            t1 = *(signed char *)0xC541F40;
            if ((int)(unsigned char)t1 < (int)0x7) {
                return FUN_0c05d280(a4);
            }
            return (unsigned char)t1;
        }
        FUN_0c0d6098(a4);
        t1 = *(signed char *)0xC541F40;
        if ((int)(unsigned char)t1 < (int)0x7) {
            return FUN_0c0d5c9a(a4);
        }
        return (unsigned char)t1;
    }
    return t0;
}

int FUN_0c05d800(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC542254) != 0) {
        return 0x5C;
    }
    if ((*(signed char *)0xC542255) == 0) {
        t0 = *(int *)0xC542260;
        if ((t0 & 16) != 0) {
            if ((*(signed char *)0xC541F65) != 0) {
                return FUN_0c05d608(a4, 0x0);
            }
            t1 = *(int *)((0xC5423D0 + (((unsigned char)a4 << 2) << 2)));
            if (t1 != 0) {
                if (t1 != 1) {
                    if (t1 != 2) {
                        return t1;
                    }
                    return FUN_0c05d608(a4, 0x3);
                }
                t1 = FUN_0c05cf04();
                if ((unsigned int)t1 > (unsigned int)0x1) {
                    if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) >= (unsigned int)0x55) {
                        if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) < (unsigned int)0xAA) {
                            return FUN_0c05d648(a4);
                        }
                        return FUN_0c05d6a6(a4);
                    }
                    return FUN_0c05d608(a4, 0x2);
                }
                if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) < (unsigned int)0x7F) {
                    return FUN_0c05d608(a4, 0x2);
                }
                return FUN_0c05d6a6(a4);
            }
            t1 = FUN_0c05cf04();
            if ((unsigned int)t1 > (unsigned int)0x1) {
                if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) >= (unsigned int)0x55) {
                    if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) < (unsigned int)0xAA) {
                        return FUN_0c05d648(a4);
                    }
                    return FUN_0c05d6a6(a4);
                }
                return FUN_0c05d608(a4, 0x1);
            }
            if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) < (unsigned int)0x7F) {
                return FUN_0c05d608(a4, 0x1);
            }
            return FUN_0c05d6a6(a4);
        }
        return t0;
    }
    return 0x5D;
}

int FUN_0c05d90c(int a4)
{
    register int t0;
    register int t10;

    t0 = *(int *)0xC542260;
    if ((t0 & 16) != 0) {
        if ((*(signed char *)0xC542254) == 0) {
            if ((*(signed char *)0xC542255) == 0) {
                t10 = 0x3;
                if ((*(signed char *)0xC541F65) != 0) {
                    t10 = 0x0;
                }
                return FUN_0c05d608(a4, t10);
            }
            return 0x5D;
        }
        return 0x5C;
    }
    return t0;
}
