/* Straight-line functions with calls and guards (batch gen_jh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03744a(int, int, int, int);
int FUN_0c187798(int);
int FUN_0c0fd112(int a4, int a5, int a6);

int FUN_0c0fd112(int a4, int a5, int a6)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t10;
    register int t11;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register int t35;
    register int t36;
    register int t50;
    register int t1;
    register int t26;

    if (a6 == 0) {
        t2 = 0x2;
        t3 = 0x0;
        t4 = 0x2;
        t5 = 0xA;
        t6 = a5;
        for (;;) {
            if ((int)t4 <= 0) {
                break;
            }
            t1 = t6;
            t50 = t5;
            t50 = ((int)((int)t1 / (int)t50));
            t1 = t6;
            *(unsigned int *)(((int)stk + 0)) = t50;
            t50 = t5;
            t50 = ((int)((int)t1 % (int)t50));
            t6 = t50;
            t50 = 0xA;
            t1 = t5;
            t50 = ((int)((int)t1 / (int)t50));
            t2 = t4;
            t2 = (t2 - 1);
            t2 = (t2 << 2);
            t10 = *(int *)(((int)stk + 0));
            t1 = 0xC03744A;
            t5 = t50;
            t11 = *(int *)0xC4B410C;
            *(unsigned int *)(((int)stk + 4)) = t2;
            t2 = (t2 + (0xC4 + a4));
            t2 = (*(int *)((t2 + 0x0)));
            t50 = (FUN_0c03744a(t2, 0x0, (t10 + 0x28), t11));
            t2 = 0xC4;
            t2 = (t2 + a4);
            t50 = 0xC28EB78;
            t2 = (t2 + (*(int *)(((int)stk + 4))));
            t2 = (*(int *)((t2 + 0x0)));
            t1 = t2;
            t1 = (t1 + 0x6C);
            t50 = 0xC;
            t50 = (FUN_0c187798(t2));
            t1 = (*(int *)(((int)stk + 0)));
            if (t1 == 0) {
                t50 = t3;
                if (t50 != 1) {
                    t50 = t4;
                    
                }
            } else {
                t3 = 0x1;
            }
            t4 = (t4 - 1);
            *(unsigned char *)((t2 + 0x0)) = 0x1;
        }
    } else {
        t27 = 0x2;
        t28 = 0x0;
        t29 = 0x2;
        t30 = 0xA;
        t31 = a5;
        for (;;) {
            if ((int)t29 <= 0) {
                break;
            }
            t26 = t31;
            t50 = t30;
            t50 = ((int)((int)t26 / (int)t50));
            t26 = t31;
            *(unsigned int *)(((int)stk + 0)) = t50;
            t50 = t30;
            t50 = ((int)((int)t26 % (int)t50));
            t31 = t50;
            t50 = 0xA;
            t26 = t30;
            t50 = ((int)((int)t26 / (int)t50));
            t27 = t29;
            t27 = (t27 - 1);
            t27 = (t27 << 2);
            t35 = *(int *)(((int)stk + 0));
            t30 = t50;
            t36 = *(int *)0xC4B410C;
            *(unsigned int *)(((int)stk + 4)) = t27;
            t27 = (t27 + (0xC4 + a4));
            t27 = (*(int *)((t27 + 0x8)));
            t50 = (FUN_0c03744a(t27, 0x0, (t35 + 0x28), t36));
            t27 = 0xC4;
            t27 = (t27 + a4);
            t50 = 0xC28EB90;
            t27 = (t27 + (*(int *)(((int)stk + 4))));
            t27 = (*(int *)((t27 + 0x8)));
            t26 = t27;
            t26 = (t26 + 0x6C);
            t50 = 0xC;
            t50 = (FUN_0c187798(t27));
            t26 = (*(int *)(((int)stk + 0)));
            if (t26 == 0) {
                t50 = t28;
                if (t50 != 1) {
                    t50 = t29;
                    
                }
            } else {
                t28 = 0x1;
            }
            t29 = (t29 - 1);
            *(unsigned char *)((t27 + 0x0)) = 0x1;
        }
    }
    return t50;
}
