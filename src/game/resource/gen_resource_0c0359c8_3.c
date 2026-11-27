/* game/resource: functions 0C0359C8-0C03731E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c035bc6(int);
int FUN_0c035c1a(int, int, int, int);
int FUN_0c035c44(int, int);
int FUN_0c035d74(int, int, int);
int FUN_0c036518(int, int);
int FUN_0c0365c8(int);
int FUN_0c0377b2(int);
int FUN_0c16fa90(int, int);
int FUN_0c187a88(int, int, int);
void FUN_0c036606(void);
int FUN_0c0367e0(int a4, int a5, int a6, int a7);
void FUN_0c036864(int a4, int a5, int a6, int a7);
int FUN_0c03697c(int a4, int a5, int a6, int a7);
int FUN_0c036a9c(int a4, int a5, int a6, int a7, int a8);

/* manual: rank the four players by stone count (0xFF for an absent one or an unchanged count), report each rank change to
   FUN_0c036518, then, if any player holds 12 or 13, FUN_0c0365c8 for the absent slots; 236 cases, 195 of 195 instructions */
void FUN_0c036606(void)
{
    int val[4], idx[4];
    int i, j, t, prev, any;
    signed char *p;

    for (i = 0; i < 4; i++) {
        idx[i] = i;
        p = (signed char *)0xC532498 + i * 0x3938;
        if (p[0x3714] != 0 && p[2] != ((int *)0xC3BD44C)[i]) val[i] = p[2];
        else val[i] = 0xFF;
    }
    for (j = 0; j < 3; j++)
        for (i = j; i < 4; i++)
            if (val[idx[i]] < val[idx[j]]) {
                t = idx[j];
                idx[j] = idx[i];
                idx[i] = t;
            }
    prev = -1;
    for (i = 0; i < 4; i++) {
        t = val[idx[i]];
        if (t != 0xFF) {
            j = t != prev;
            prev = t;
            FUN_0c036518(idx[i], j);
        }
    }
    any = 0;
    for (p = (signed char *)0xC532498; p < (signed char *)0xC540978; p += 0x3938)
        if (p[0x3714] != 0 && (p[2] == 12 || p[2] == 13)) any = 1;
    if (any != 0)
        for (i = 0; i < 4; i++)
            if (((signed char *)0xC532498)[i * 0x3938 + 0x3714] == 0) FUN_0c0365c8(i);
}

int FUN_0c0367e0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(int *)0xC4B4160) == 0) {
        FUN_0c035c1a(0x18, (*(int *)0xC4B40D8), a6, a7);
        t0 = *(int *)0xC4B40D8;
        FUN_0c0377b2(t0);
        t1 = FUN_0c035bc6(0x19);
        FUN_0c035c44(0xCB00000, t1);
        t1 = FUN_0c035d74(t0, 0x7D, (*(int *)0xC3BD45C));
        *(unsigned int *)0xC4B4160 = 0x1;
        t0 = t1;
    }
    return t0;
}

void FUN_0c036864(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(int *)0xC4B4154) == 0) {
        FUN_0c035c1a((*(int *)(((a4 << 2) + 0xC1AA788))), 0xCB00000, a6, a7);
        t0 = *(int *)0xC4B410C;
        FUN_0c187a88(t0, (((((struct o0_int *)0xCB00000)->v)) + 0xCB00000), ((((struct o4_int *)0xCB00000)->v)));
        FUN_0c0377b2(t0);
        FUN_0c035c44((((((struct o8_int *)0xCB00000)->v)) + 0xCB00000), ((((struct oC_int *)0xCB00000)->v)));
        FUN_0c035d74(t0, 0x96, (*(int *)0xC3BD45C));
        *(unsigned int *)0xC4B4154 = 0x1;
        if ((*(signed char *)0xC478C2C) != 0) {
            FUN_0c16fa90(0x1, a4);
    return;
        }
        t0 = FUN_0c035c44((((((struct o10_int *)0xCB00000)->v)) + 0xCB00000), ((((struct o14_int *)0xCB00000)->v)));
        FUN_0c187a88((*(int *)0xC4F459C), (*(int *)0xC3BD45C), t0);
    return;
    }
}

int FUN_0c03697c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(int *)0xC4B4170) == 0) {
        t0 = *(int *)0xC4B40D4;
        FUN_0c035c1a(0x25, t0, a6, a7);
        FUN_0c0377b2(t0);
        t1 = FUN_0c035bc6(0x26);
        FUN_0c035c44(0xCB00000, t1);
        t1 = FUN_0c035d74(t0, 0x1E, (*(int *)0xC3BD45C));
        *(unsigned int *)0xC4B4170 = 0x1;
        t0 = t1;
    }
    return t0;
}

int FUN_0c036a9c(int a4, int a5, int a6, int a7, int a8)
{
    register int t26;
    register int t17;

    t26 = 0x0;
    if ((*(int *)(((a7 << 2) + 0xC4B4124))) == 0) {
        FUN_0c035c1a(a5, 0xCB00000, a6, a7);
        FUN_0c187a88((*(int *)((a8 + 0x0))), (((((struct o0_int *)0xCB00000)->v)) + 0xCB00000), ((((struct o4_int *)0xCB00000)->v)));
        FUN_0c0377b2((*(int *)((a8 + 0x0))));
        if (a4 != 0) {
            FUN_0c035c44((((((struct o8_int *)0xCB00000)->v)) + 0xCB00000), ((((struct oC_int *)0xCB00000)->v)));
            t17 = (*(int *)0xC3BD45C);
        } else {
            t17 = (((((struct o8_int *)0xCB00000)->v)) + 0xCB00000);
        }
        t26 = FUN_0c035d74((*(int *)((a8 + 0x0))), a6, t17);
        *(unsigned int *)(((a7 << 2) + 0xC4B4124)) = 0x1;
    }
    return t26;
}
