/* Straight-line functions with calls and guards (batch gen_ki): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int FUN_0c033276(void);
int FUN_0c0573d8(void);
int FUN_0c059c54(int);
int FUN_0c05aaf6(int);
int FUN_0c05af8a(void);
int FUN_0c05b00c(void);
int FUN_0c0b7fc0(int, int, int);
int FUN_0c0b8028(int);
int FUN_0c0b811a(int);
int FUN_0c0b817c(int);
int FUN_0c05bdf4(void);
int FUN_0c0b819e(int a4, int a5, int a6);
int FUN_0c05beec(void);
int FUN_0c05bd74(void);
int FUN_0c05be26(void);

int FUN_0c05bdf4(void)
{
    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
    (((struct oC_ushort *)0xC541F42)->v) = 0x12C;
    FUN_0c0573d8();
    FUN_0c05b00c();
    FUN_0c05af8a();
    FUN_0c059c54(0x4);
    FUN_0c05aaf6(0x8B);
    return FUN_0c033276();
}

int FUN_0c0b819e(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0b817c(a4);
            }
            return FUN_0c0b811a(a4);
        }
        return FUN_0c0b8028(a4);
    }
    return FUN_0c0b7fc0(a4, a5, a6);
}

int FUN_0c05beec(void)
{
    (((struct o0_uchar *)0xC541F40)->v) = 0x63;
    (((struct o1_uchar *)0xC541F40)->v) = 0x0;
    return 0x0;
}

/* manual: the generator reads the pool words inside this function (0C05BE7C-0C05BEDB, shared with its neighbours) as code and
   refuses it ("branch past the listed size"); written from the disassembly. A timer at g_game_work+18 counts down; when it has
   run out and no player record holds more than 1 at +124 (or the mode byte at 0C5429B4 is neither 0 nor 4), the step byte at
   g_game_work+6 goes up; then FUN_0c05bd74 (tail jump). */
int FUN_0c05be26(void)
{
    int m;

    if (*(short *)0xC541F4E != 0) {
        *(short *)0xC541F4E = *(short *)0xC541F4E - 1;
    }
    m = *(signed char *)0xC5429B4;
    if (m == 0 || m == 4) {
        if (*(short *)0xC541F4E > 0 || *(int *)0xC541D58 > 1 || *(int *)0xC541DF0 > 1 || *(int *)0xC541E88 > 1 || *(int *)0xC541F20 > 1) {
            return FUN_0c05bd74();
        }
    } else if (*(short *)0xC541F4E > 0) {
        return FUN_0c05bd74();
    }
    *(signed char *)0xC541F42 = *(signed char *)0xC541F42 + 1;
    return FUN_0c05bd74();
}
