/* Straight-line functions with calls and guards (batch gen_ajd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03744a(int, int, int, int);
void FUN_0c10ff04(int a4, int a5, int a6);

void FUN_0c10ff04(int a4, int a5, int a6)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t10;
    register int t15;
    register int t0;
    register int t1;
    register int t8;
    register int t9;
    register int t33;
    register int R1004;
    register int R1008;
    register int R1012;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);

    R1008 = a6;
    R1012 = 0x0;
    t2 = 0x0;
    t3 = a4;
    t4 = a5;
    t6 = 0x64;
    t7 = a5;
    t10 = 0x3;
    for (;;) {
        if ((int)t10 <= 0) {
            break;
        }
        t0 = t7;
        t1 = 0xC1874B0;
        t8 = (int)((int)t0 / (int)t6);
        t0 = t7;
        t2 = 0xC18760C;
        t7 = ((int)((int)t0 % (int)t6));
        t0 = t6;
        t2 = t10;
        t2 = (t2 - 1);
        t1 = t2;
        t2 = (t2 << 1);
        t3 = 0xC4B410C;
        t2 = (t2 + t1);
        t2 = (t2 << 2);
        t9 = t10;
        t15 = *(int *)((t3 + 0x0));
        t6 = ((int)((int)t0 / (int)0xA));
        t9 = (t9 - 1);
        R1004 = t2;
        t1 = (R1008);
        t9 = (t9 << 2);
        if (t1 != 0) {
            t3 = 0xC4;
            t4 = t8;
            t3 = (t3 + a4);
            t3 = (t3 + t9);
            t3 = (*(int *)((t3 + 0x0)));
            FUN_0c03744a(t3, t4, 0x6, t15);
            t3 = 0xC4;
            t2 = 0xC2910BC;
            t3 = (t3 + a4);
            t1 = (R1004);
            t3 = (t3 + t9);
            t3 = (*(int *)((t3 + 0x0)));
            t1 = (t1 + t2);
            t2 = 0xC187798;
            t0 = t3;
            t0 = (t0 + 0x6C);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
        } else {
            t3 = 0xC4;
            t4 = t8;
            t3 = (t3 + a4);
            t3 = (t3 + t9);
            t3 = (*(int *)((t3 + 0xC)));
            FUN_0c03744a(t3, t4, 0x6, t15);
            t3 = 0xC4;
            t2 = 0xC2910BC;
            t3 = (t3 + a4);
            t1 = (R1004);
            t3 = (t3 + t9);
            t3 = (*(int *)((t3 + 0xC)));
            t1 = (t1 + t2);
            t1 = (t1 + 0x24);
            t0 = t3;
            t0 = (t0 + 0x6C);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
        }
        t4 = 0x1;
        if (t8 == 0) {
            if ((R1012) != 1) {
                if (t10 != 1) {
                    t2 = 0x0;
                    *(unsigned char *)((t3 + 0x0)) = t2;
                    t33 = t2;
                } else {
                    *(unsigned char *)((t3 + 0x0)) = t4;
                    t33 = 0xC187798;
                }
            } else {
                *(unsigned char *)((t3 + 0x0)) = t4;
                t33 = 0xC187798;
            }
        } else {
            R1012 = t4;
            *(unsigned char *)((t3 + 0x0)) = t4;
            t33 = 0xC187798;
        }
        t10 = (t10 - 1);
        t2 = t33;
    }
}
