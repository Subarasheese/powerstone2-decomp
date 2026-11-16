/* Straight-line functions with calls and guards (batch gen_az): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int);
int FUN_0c0cff96(int, int);
int FUN_0c187798(void);
int FUN_0c187b48(int, int, int);
int FUN_0c0f79ac(int a4);
int FUN_0c03faf8(void);
int FUN_0c03fc28(void);

int FUN_0c0f79ac(int a4)
{
    register int t8;
    register int t14;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1FB2A8);
    t8 = *(signed char *)((a4 + 0x15));
    if (t8 == 0) {
        t14 = t8;
        if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0xB) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t14 = *(short *)0xC541F4E;
            *(unsigned short *)((a4 + 0x1C)) = t14;
        }
        return t14;
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0xC) {
        return FUN_0c03f346(a4, 0xC541F3C);
    }
    return t8;
}

int FUN_0c03faf8(void)
{
    register int t0;
    register int t1;
    register int t4;

    t0 = 0xC40D644;
    t1 = 0xC40C0C4;
    for (;;) {
        FUN_0c187b48(t1, 0x0, 0xAC);
        FUN_0c187798();
        t4 = t1;
        t1 = (t1 + 0xAC);
        (((struct o64_ushort *)(t4))->v) = (*(short *)0xC1B7A30);
        *(unsigned int *)((t0 + 0x0)) = t4;
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC40D644) {
            break;
        }
    }
    *(unsigned int *)0xC40D6C4 = 0x20;
    return 0x64;
}

int FUN_0c03fc28(void)
{
    register int t0;
    register int t1;
    register int t4;

    t0 = 0xC40DC28;
    t1 = 0xC40D6C8;
    for (;;) {
        FUN_0c187b48(t1, 0x0, 0xAC);
        FUN_0c187798();
        t4 = t1;
        t1 = (t1 + 0xAC);
        (((struct o64_ushort *)(t4))->v) = (*(short *)0xC1B7A30);
        *(unsigned int *)((t0 + 0x0)) = t4;
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC40DC28) {
            break;
        }
    }
    *(unsigned int *)0xC40DC48 = 0x8;
    return 0x64;
}
