/* game/player: functions 0C0A06CC-0C0A104A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0a0702(int);
int FUN_0c0a083a(int);
int FUN_0c0a0906(int);
int FUN_0c0a09f0(int);
int FUN_0c0a0b0a(int, int, int, int);
int FUN_0c0a0c04(int);
int FUN_0c0a098c(int a4, int a5, int a6, int a7);
int FUN_0c0a0c64(int a4, int a5, int a6, int a7);
int FUN_0c0a0cfc(int a4, int a5, int a6, int a7);
int FUN_0c0a0d68(int a4, int a5, int a6, int a7);

int FUN_0c0a098c(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x15))) < (int)0x2) && (t0 = (((struct o3770_int *)(a4))->v), t0 == 0)) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        FUN_0c0a0702(a4);
        break;
    case 1:
        FUN_0c0a083a(a4);
        break;
    case 2:
        FUN_0c0a0906(a4);
        break;
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c0a0c64(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x15))) < (int)0x2) && (t0 = (((struct o3770_int *)(a4))->v), t0 == 0)) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        FUN_0c0a09f0(a4);
        break;
    case 1:
        FUN_0c0a0b0a(a4, a5, a6, a7);
        break;
    case 2:
        FUN_0c0a0c04(a4);
        break;
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c0a0cfc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            (((struct o372C_uchar *)(a4))->v) = 0x0;
            return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
        }
        return (unsigned char)t0;
    }
    if ((*(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))))) == 2) {
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 == 0) {
            FUN_0c038362(a4);
            (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
            return 0x3770;
        }
        (((struct o372C_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c0a0d68(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            (((struct o372C_uchar *)(a4))->v) = 0x0;
            return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
        }
        return (unsigned char)t0;
    }
    if ((*(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))))) == 2) {
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 == 0) {
            FUN_0c038362(a4);
            (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
            return 0x3770;
        }
        (((struct o372C_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}
