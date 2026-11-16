/* Straight-line functions with calls and guards (batch gen_bu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
int FUN_0c036de8(int);
int FUN_0c03eff6(void);
int FUN_0c0522be(int);
int FUN_0c054a62(int, int);
int FUN_0c05ae6c(int, int);
int FUN_0c05e53c(void);
int FUN_0c052962(int a4);
int FUN_0c052ba8(int a4);
int FUN_0c059c7a(int a4, int a5);

int FUN_0c05e53c(void)
{
    (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
    (((struct o1_uchar *)0xC541F40)->v) = 0x0;
    (((struct o2_uchar *)0xC541F40)->v) = 0x0;
    FUN_0c0522be((*(int *)0xC241B54));
    FUN_0c03eff6();
    return FUN_0c036de8(0x1);
}

int FUN_0c052962(int a4)
{
    register int t1;
    register int t3;
    register int t4;

    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    t1 = 0xC1B8EA0;
    t3 = (0x248 + a4);
    for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)((0xC1B8EA0 + 128)) < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
    return FUN_0c054a62(a4, (0x248 + a4));
}

int FUN_0c052ba8(int a4)
{
    register int t1;
    register int t3;
    register int t4;

    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    t1 = 0xC1B8F20;
    t3 = (0x248 + a4);
    for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)((0xC1B8F20 + 128)) < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
    return FUN_0c054a62(a4, (0x248 + a4));
}

int FUN_0c059c7a(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(int *)((((((a4 << 2) + a4) << 2) + 0xC1C242C) + 0xC));
    t1 = *(int *)((((((a4 << 2) + a4) << 2) + 0xC1C242C) + 0x4));
    *(volatile int *)((((((a4 << 2) + a4) << 2) + 0xC1C242C) + 0x10));
    return FUN_0c05ae6c(t0, t1);
}
