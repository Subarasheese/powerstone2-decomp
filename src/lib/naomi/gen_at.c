/* Straight-line functions with calls and guards (batch gen_at): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c19114c(int);
int FUN_0c191d9e(void);
int FUN_0c191dae(void);
int FUN_0c1927c8(void);
int thunk_FUN_0c191de2(void);
int FUN_0c191190(int a4, int a5, int a6, int a7);

int FUN_0c191190(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    FUN_0c191d9e();
    FUN_0c1927c8();
    t3 = thunk_FUN_0c191de2();
    t4 = t3;
    t5 = 0xC8A97DC;
    t6 = (*(int *)0xC8A97DC);
    for (;;) {
        if (t6 == 0) {
            break;
        }
        t4 = 0x18;
        t4 = (*(signed char *)((t6 + t4)));
        t4 = (unsigned char)t4;
        if ((t4 == 1) && (t0 = *(int *)((t6 + 0xC)), t1 = t0, t5 = t3, t2 = *(int *)((t6 + 0x8)), t5 = (t5 - t1), (unsigned int)t5 > (unsigned int)t2)) {
            t4 = (FUN_0c19114c(t6));
            t4 = 0x18;
            *(unsigned char *)((t6 + t4)) = 0x2;
            t1 = (*(int *)((t6 + 0x10)));
            if (t1 != 0) {
                *(unsigned char *)((t6 + t4)) = 0x0;
                t1 = (*(int *)((t6 + 0x10)));
                t4 = (((int (*)(int, int, int, int))(t1))((*(int *)((t6 + 0x14))), a5, a6, a7));
            } else {
                t7 = t1;
            }
            t8 = t7;
        } else {
            t7 = t5;
            t8 = t1;
        }
        t6 = (*(int *)((t6 + 0x0)));
        t5 = t7;
        t1 = t8;
    }
    return (FUN_0c191dae());
}
