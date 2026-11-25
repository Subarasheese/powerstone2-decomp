/* game/unsorted: functions 0C0BB534-0C0BB702, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int nlRand(void);
int FUN_0c0bb534(void);
int FUN_0c0bb5a6(int a4);
int vmsfs_c_fiber4(void);
int FUN_0c0bb67c(int a4);
int FUN_0c0bb68c(int a4);
int FUN_0c0bb69c(int a4);
int FUN_0c0bb6ac(int a4);
int FUN_0c0bb6bc(int a4);
int FUN_0c0bb6cc(int a4);
int FUN_0c0bb6dc(void);
int FUN_0c0bb6e0(void);

int FUN_0c0bb534(void)
{
    register int t0;
    register int t1;

    FUN_0c0bb6dc();
    t0 = *(signed char *)0xC5429AD;
    if ((int)(unsigned char)(*(signed char *)0xC542242) > (int)(unsigned char)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0xC25D98C) + (*(signed char *)0xC542236))))) {
        (((struct o0_uchar *)0xC542242)->v) = (*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0xC25D98C) + (*(signed char *)0xC542236))));
    }
    t0 = *(signed char *)0xC5429AD;
    t1 = *(signed char *)0xC542236;
    if ((int)(unsigned char)(*(signed char *)0xC542242) < (int)(unsigned char)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0xC25D9BC) + t1)))) {
        (((struct o0_uchar *)0xC542242)->v) = (*(signed char *)((((((t0 << 1) + (t0 << 2)) + 0xC25D9BC) + t1) + 0x0)));
    }
    t0 = *(signed char *)0xC542242;
    (((struct o1_uchar *)0xC542242)->v) = ((t0 << 2) << 1);
    return ((t0 << 2) << 1);
}

int FUN_0c0bb5a6(int a4)
{
    register int t0;
    register int t1;

    t0 = a4;
    if ((int)(unsigned char)(*(signed char *)0xC542243) < (int)(-(signed char)a4)) {
        (((struct o1_uchar *)0xC542242)->v) = 0x0;
        t0 = 0x0;
    }
    t1 = t0;
    if ((int)((-(unsigned char)(*(signed char *)0xC542243)) + 0xFF) < (int)(signed char)t0) {
        (((struct o1_uchar *)0xC542242)->v) = 0xFF;
        t1 = 0x0;
    }
    (((struct o1_uchar *)0xC542242)->v) = (t1 + (*(signed char *)0xC542243));
    t0 = *(signed char *)0xC5429AD;
    if ((int)(unsigned char)(*(signed char *)0xC542243) > (int)(((unsigned char)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0xC25D95C) + (*(signed char *)0xC542236)))) << 2) << 1)) {
        (((struct o1_uchar *)0xC542242)->v) = (((*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0xC25D95C) + (*(signed char *)0xC542236)))) << 2) << 1);
    }
    t0 = *(signed char *)0xC5429AD;
    t1 = *(signed char *)0xC542236;
    if ((int)(unsigned char)(*(signed char *)0xC542243) < (int)(((unsigned char)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0xC25D9BC) + t1))) << 2) << 1)) {
        (((struct o1_uchar *)0xC542242)->v) = (((*(signed char *)((((((t0 << 1) + (t0 << 2)) + 0xC25D9BC) + t1) + 0x0))) << 2) << 1);
    }
    t0 = *(signed char *)0xC542243;
    t1 = (unsigned char)t0;
    if ((int)(unsigned char)t0 < 0) {
        t1 = ((unsigned char)t0 + 0x7);
    }
    (((struct o0_uchar *)0xC542242)->v) = (((t1 >> 1) >> 1) >> 1);
    return (((t1 >> 1) >> 1) >> 1);
}

int vmsfs_c_fiber4(void)
{
    return FUN_0c0bb5a6(0x4);
}

int FUN_0c0bb67c(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        return FUN_0c0bb5a6(0x8);
    }
    return 0x3720;
}

int FUN_0c0bb68c(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        return FUN_0c0bb5a6(0x2);
    }
    return 0x3720;
}

int FUN_0c0bb69c(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        return FUN_0c0bb5a6(0x1);
    }
    return 0x3720;
}

int FUN_0c0bb6ac(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        return FUN_0c0bb5a6(0x1);
    }
    return 0x3720;
}

int FUN_0c0bb6bc(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        return FUN_0c0bb5a6(0x1);
    }
    return 0x3720;
}

int FUN_0c0bb6cc(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        return FUN_0c0bb5a6(0xFFFFFFF8);
    }
    return 0x3720;
}

int FUN_0c0bb6dc(void)
{
    return FUN_0c0bb5a6(0xFFFFFFC0);
}

int FUN_0c0bb6e0(void)
{
    register int t0;
    register int t1;

    t0 = nlRand();
    t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0xF);
    }
    return FUN_0c0bb5a6((*(signed char *)((0xC25D9EC + t1))));
}
