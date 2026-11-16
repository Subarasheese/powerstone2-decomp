/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o19C_uint { char p[0x19C]; unsigned int v; };
struct o1A0_uint { char p[0x1A0]; unsigned int v; };
int FUN_0c0522be(int);
int FUN_0c145dd2(int, int, int, int);
extern int FUN_0c18778c();
int FUN_0c187798(int, int, int);
int FUN_0c145eb2(int a4, int a5, int a6);
int FUN_0c1718d4(int a4, int a5, int a6);
int FUN_0c053ccc(int a4, int a5, int a6, int a7, int a8);

int FUN_0c145eb2(int a4, int a5, int a6)
{
    register float u1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    FUN_0c187798(0x0, a5, a6);
    u1 = *(float *)0xC145F3C;
    t2 = 0xC145F3C;
    t3 = 0x0;
    t4 = 0x0;
    t5 = 0xC2A23CC;
    for (;;) {
        if (!(u1 > (*(float *)((((((t4 << 2) + t4) << 2) + 0xC2A23CC) + 0x0))))) {
            break;
        }
        t2 = (FUN_0c145dd2(a4, a4, a6, t5));
        t5 = (t5 + 0x14);
        t4 = (t4 + 0x1);
        t3 = (t3 | t2);
    }
    return t3;
}

int FUN_0c1718d4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    int t4;
    register int t2;
    register int t3;
    register int t10;
    register int t6;
    register int t8;

    t0 = ((int (*)(int, int, int, int))(FUN_0c18778c))(a4, a5, a6, (((short)(signed char)a5 * (short)0x58) + 0xC475DC8));
    t1 = ((int (*)(void))(FUN_0c18778c))();
    t4 = *(signed char *)((t3 + 0x1));
    if ((t4 != 6) && ((t4 != 7) && (t4 != 8))) {
        t10 = (FUN_0c187798(t6, t2, ((((signed char)t2 << 1) + (signed char)t2) << 2)));
    } else {
        t10 = (FUN_0c187798(t8, t2, ((((signed char)t2 << 1) + (signed char)t2) << 2)));
    }
    return t10;
}

int FUN_0c053ccc(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    FUN_0c0522be(0xC241508);
    t2 = 0xC5410FC;
    for (;;) {
        (((struct o1A0_uint *)(t2))->v) = a4;
        (((struct o19C_uint *)(t2))->v) = a5;
        t3 = (0x1FC + t2);
        t2 = (t2 + 0x2F8);
        *(unsigned int *)((t3 + 0x4)) = a6;
        *(unsigned int *)((t3 + 0x0)) = a6;
        if ((unsigned int)t2 >= (unsigned int)0xC541CDC) {
            break;
        }
    }
    *(unsigned int *)0xC40F834 = a7;
    t2 = 0x19C;
    if ((int)a7 > 0) {
        t4 = a8;
        t5 = 0xC40F838;
        t6 = 0x0;
        for (;;) {
            t4 = (t4 + 0xC);
            t7 = FUN_0c187798(t5, t6, t3);
            t6 = (t0 + 0x1);
            t5 = (t1 + 0xC);
            if ((int)t6 >= (int)a7) {
                break;
            }
        }
        t2 = t7;
    }
    return t2;
}
