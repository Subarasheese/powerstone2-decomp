/* Straight-line functions with calls and guards (batch gen_jc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c092d12(int, int, int);
int FUN_0c092dbc(int, int, int);
int FUN_0c092f80(int, int, int);
int FUN_0c0930e4(int, int, int);
int FUN_0c093166(int, int, int);
int FUN_0c093204(int, int, int);
int FUN_0c0933c8(int, int, int);
int FUN_0c0935bc(int, int, int);
int FUN_0c093606(int);
int FUN_0c095a1c(int, int, int);
int FUN_0c095b88(int);
int FUN_0c095bd2(int);
int FUN_0c095c36(int);
int FUN_0c095c76(int);
int FUN_0c095cf8(int, int, int);
int FUN_0c095d5c(int);
int FUN_0c095d9c(int);
int FUN_0c095e00(int);
int FUN_0c095e60(int);
int FUN_0c095ec4(int);
int FUN_0c095f04(int, int, int);
int FUN_0c095fd0(int);
int FUN_0c09601c(int);
int FUN_0c0967da(int, int, int, int);
int FUN_0c09692e(int, int, int);
int FUN_0c09b45c(int);
int FUN_0c09b534(int, int, int);
int FUN_0c09b6b8(int);
int FUN_0c09b78c(int);
int FUN_0c09b7ec(int, int);
int FUN_0c09b8a2(int);
int FUN_0c09c0b4(int, int, int);
int FUN_0c09c1a4(int, int, int);
int FUN_0c09c21a(int, int, int);
int FUN_0c09c280(int, int, int);
int FUN_0c09c432(int, int, int);
int FUN_0c09c4e0(int, int, int);
int FUN_0c09f272(int);
int FUN_0c09f2e8(int, int, int);
int FUN_0c09f3dc(int);
int FUN_0c0960a0(int a4, int a5, int a6);
int FUN_0c09b8c8(int a4, int a5, int a6);
int FUN_0c093628(int a4, int a5, int a6);
int FUN_0c09f3fe(int a4, int a5, int a6);
int FUN_0c09c510(int a4, int a5, int a6);
int FUN_0c09697c(int a4, int a5, int a6, int a7);

int FUN_0c0960a0(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c095a1c(a4, a5, a6);
            }
            case 2:
            {
                return FUN_0c095b88(a4);
            }
            case 4:
            {
                return FUN_0c095bd2(a4);
            }
            case 6:
            {
                return FUN_0c095c36(a4);
            }
            case 8:
            {
                return FUN_0c095c76(a4);
            }
            case 10:
            {
                return FUN_0c095cf8(a4, a5, a6);
            }
            case 12:
            {
                return FUN_0c095d5c(a4);
            }
            case 14:
            {
                return FUN_0c095d9c(a4);
            }
            case 16:
            {
                return FUN_0c095e00(a4);
            }
            case 18:
            {
                return FUN_0c095e60(a4);
            }
            case 20:
            {
                return FUN_0c095ec4(a4);
            }
            case 22:
            {
                return FUN_0c095f04(a4, a5, a6);
            }
            case 24:
            {
                return FUN_0c095fd0(a4);
            }
            default:
            {
                return FUN_0c09601c(a4);
            }
        }
    }
    return t0;
}

int FUN_0c09b8c8(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return FUN_0c09b8a2(a4);
                    }
                    return FUN_0c09b7ec(a4, a5);
                }
                return FUN_0c09b78c(a4);
            }
            return FUN_0c09b6b8(a4);
        }
        return FUN_0c09b534(a4, a5, a6);
    }
    return FUN_0c09b45c(a4);
}

int FUN_0c093628(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 8) {
                                        return t0;
                                    }
                                    return FUN_0c093606(a4);
                                }
                                return FUN_0c0935bc(a4, a5, a6);
                            }
                            return FUN_0c0933c8(a4, a5, a6);
                        }
                        return FUN_0c093204(a4, a5, a6);
                    }
                    return FUN_0c093166(a4, a5, a6);
                }
                return FUN_0c0930e4(a4, a5, a6);
            }
            return FUN_0c092f80(a4, a5, a6);
        }
        return FUN_0c092dbc(a4, a5, a6);
    }
    return FUN_0c092d12(a4, a5, a6);
}

int FUN_0c09f3fe(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c09f3dc(a4);
        }
        return FUN_0c09f2e8(a4, a5, a6);
    }
    return FUN_0c09f272(a4);
}

int FUN_0c09c510(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return FUN_0c09c4e0(a4, a5, a6);
                    }
                    return FUN_0c09c432(a4, a5, a6);
                }
                return FUN_0c09c280(a4, a5, a6);
            }
            return FUN_0c09c21a(a4, a5, a6);
        }
        return FUN_0c09c1a4(a4, a5, a6);
    }
    return FUN_0c09c0b4(a4, a5, a6);
}

int FUN_0c09697c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c09692e(a4, a5, a6);
    }
    return FUN_0c0967da(a4, a5, a6, a7);
}
