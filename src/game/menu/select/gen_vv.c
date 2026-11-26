/* Straight-line functions with calls and guards (batch gen_vv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03744a(int, int, int, int);
void FUN_0c0fc9b8(int a4, int a5, int a6);

void FUN_0c0fc9b8(int a4, int a5, int a6)
{
    int stk[2];
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t11;
    register int t12;
    register int t26;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register int t34;
    register int t35;
    register int t0;
    register int t1;
    register int t2;
    register int t23;
    register int t24;
    register int t25;
    register int R1004;
    register int R1008;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);

    if (a6 == 0) {
        t3 = 0x2;
        t5 = 0x2;
        t6 = 0xA;
        t7 = a5;
        for (;;) {
            if ((int)t5 <= 0) {
                break;
            }
            t0 = t7;
            t2 = 0xC1874B0;
            t8 = (int)((int)t0 / (int)t6);
            t0 = t7;
            R1004 = t8;
            t2 = 0xC18760C;
            t7 = ((int)((int)t0 % (int)t6));
            t1 = 0xC1874B0;
            t0 = t6;
            t6 = (int)((int)t0 / (int)0xA);
            t3 = t5;
            t3 = (t3 - 1);
            t1 = 0xC4;
            t3 = (t3 << 2);
            t2 = 0xC4B410C;
            t11 = R1004;
            t1 = (t1 + a4);
            t0 = 0xC03744A;
            t12 = *(int *)((t2 + 0x0));
            R1008 = t3;
            t3 = (t3 + t1);
            t3 = (*(int *)((t3 + 0x0)));
            FUN_0c03744a(t3, 0x0, (t11 + 0x28), t12);
            t3 = 0xC4;
            t1 = t5;
            t2 = (R1008);
            t1 = (t1 - 1);
            t3 = (t3 + a4);
            t3 = (t3 + t2);
            t2 = t1;
            t1 = (t1 << 1);
            t3 = (*(int *)((t3 + 0x0)));
            t1 = (t1 + t2);
            t2 = 0xC187798;
            t1 = (t1 << 2);
            t0 = t3;
            t0 = (t0 + 0x6C);
            t1 = (t1 + 0xC28EB48);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
            t0 = (R1004);
            
            t5 = (t5 - 1);
            *(unsigned char *)((t3 + 0x0)) = 0x1;
        }
    } else {
        t26 = 0x2;
        t28 = 0x2;
        t29 = 0xA;
        t30 = a5;
        for (;;) {
            if ((int)t28 <= 0) {
                break;
            }
            t23 = t30;
            t25 = 0xC1874B0;
            t31 = (int)((int)t23 / (int)t29);
            t23 = t30;
            R1004 = t31;
            t25 = 0xC18760C;
            t30 = ((int)((int)t23 % (int)t29));
            t23 = t29;
            t26 = t28;
            t26 = (t26 - 1);
            t24 = 0xC4;
            t26 = (t26 << 2);
            t25 = 0xC4B410C;
            t34 = R1004;
            t24 = (t24 + a4);
            t29 = ((int)((int)t23 / (int)0xA));
            t35 = *(int *)((t25 + 0x0));
            R1008 = t26;
            t26 = (t26 + t24);
            t26 = (*(int *)((t26 + 0x8)));
            FUN_0c03744a(t26, 0x0, (t34 + 0x28), t35);
            t26 = 0xC4;
            t24 = t28;
            t25 = (R1008);
            t24 = (t24 - 1);
            t26 = (t26 + a4);
            t26 = (t26 + t25);
            t25 = t24;
            t24 = (t24 << 1);
            t26 = (*(int *)((t26 + 0x8)));
            t24 = (t24 + t25);
            t25 = 0xC187798;
            t24 = (t24 << 2);
            t23 = t26;
            t23 = (t23 + 0x6C);
            t24 = (t24 + 0xC28EB60);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t23) = *(struct mv3 *)(t24); }
            t23 = (R1004);
            
            t28 = (t28 - 1);
            *(unsigned char *)((t26 + 0x0)) = 0x1;
        }
    }
}
