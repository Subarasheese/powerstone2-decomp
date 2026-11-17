/* game/sound: functions 0C05A174-0C05A2DE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c035bf0(int);
int FUN_0c05a40c(int);
int FUN_0c05a412(void);
int FUN_0c05a4a6(int, int);
int FUN_0c05ab78(int);
int FUN_0c05af8a(void);
int FUN_0c05b15c(void);
int FUN_0c1803fc(int, int);
int FUN_0c18098e(int);
int FUN_0c05a174(void);
int FUN_0c05a1c2(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c05a292(int a4, int a5, int a6, int a7, int a8);
int FUN_0c05a2b8(int a4, int a5, int a6, int a7, int a8);

int FUN_0c05a174(void)
{
    register int t5;

    FUN_0c18098e(0x7);
    FUN_0c18098e(0x6);
    FUN_0c18098e(0x5);
    FUN_0c18098e(0x4);
    FUN_0c18098e(0x3);
    t5 = FUN_0c05a412();
    if (t5 == 0) {
        FUN_0c035bf0(0x51);
        FUN_0c1803fc(0xCB00000, 0x2);
        FUN_0c05a40c(0x1);
        FUN_0c05a4a6(0x2, 0x7F);
        return FUN_0c05b15c();
    }
    return t5;
}

int FUN_0c05a1c2(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[7];
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t44;
    register int t6;
    register int t8;
    register int t30;
    register int t32;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    FUN_0c05af8a();
    FUN_0c05a174();
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x4)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x8)) = a8;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0xC)) = a9;
    t4 = 0x40;
    t5 = a9;
    t7 = t6;
    t9 = 0x0;
    for (;;) {
        if ((int)t9 >= (int)0x4) {
            break;
        }
        t7 = t9;
        t7 = (t7 << 2);
        t7 = (t7 + (((int)stk + 0) + 0xC));
        if ((int)(*(int *)((t7 + 0x0))) >= 0) {
            t8 = (*(int *)((t7 + 0x0)));
            t4 = (*(int *)(((int)stk + 0)));
            t8 = (t8 << 2);
            t8 = (*(int *)((t8 + t4)));
            t4 = 0xC1C316C;
            t5 = (*(signed char *)(((*(int *)((t7 + 0x0))) + t4)));
            if (t5 != 0) {
                t8 = (t8 + t9);
            }
            t7 = t8;
            t4 = (FUN_0c035bf0(t7));
            t7 = 0xCB00000;
            t4 = (FUN_0c1803fc(t7, (t9 + 0x3)));
        } else {
            t30 = t5;
            t32 = t7;
        }
        t9 = (t9 + 0x1);
        t5 = t30;
        t7 = t32;
    }
    if ((int)a5 >= 0) {
        FUN_0c05ab78(a5);
        FUN_0c035bf0((*(int *)((((a5 << 2) << 1) + 0xC1C31FC))));
        FUN_0c1803fc(0xCB00000, 0x7);
    }
    t44 = 0x3;
    for (;;) {
        FUN_0c05a4a6(t44, 0x7C);
        t44 = (t44 + 0x1);
        if ((int)t44 >= (int)0x7) {
            break;
        }
    }
    if ((int)a5 >= 0) {
        FUN_0c05a4a6(0x7, (*(int *)((((a5 << 2) << 1) + 0xC1C3200))));
    }
    return (FUN_0c05b15c());
}

int FUN_0c05a292(int a4, int a5, int a6, int a7, int a8)
{
    return (FUN_0c05a1c2(0xC1C317C, a4, a5, a6, a7, a8));
}

int FUN_0c05a2b8(int a4, int a5, int a6, int a7, int a8)
{
    return (FUN_0c05a1c2(0xC1C31BC, a4, a5, a6, a7, a8));
}
