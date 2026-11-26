/* Straight-line functions with calls and guards (batch gen_zo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1D10_int { char p[0x1D10]; int v; };
int FUN_0c02b536(int);
int FUN_0c02b570(void);
extern int strcpy();
int strlen(int);
int FUN_0c02b692(int a4, int a5, int a6);

int FUN_0c02b692(int a4, int a5, int a6)
{
    int stk[13];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t10;
    register int t14;
    register int t40;
    register int t21;
    register int t22;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t31;
    register int t33;
    register int t35;
    register int t36;
    register int t45;
    register int t47;
    register int t18;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)0xC30B70C;
    t3 = ((int (*)(int, int, int))(strcpy))(((t0 + 0x102C) + ((((((struct o1D10_int *)(t0))->v)) << 2) << 1)), a4, a6);
    t4 = *(int *)0xC30B70C;
    t5 = (((struct o1D10_int *)(t4))->v);
    t6 = ((int (*)(int, int))(strcpy))(((t4 + 0x11BC) + (((t5 << 2) << 2) + t5)), a5);
    if ((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
        t10 = (strlen(a5));
        *(int *)((int)stk + 0) = t10;
        *(unsigned int *)(((int)stk + 4)) = (((strlen(a6)) + t10) + 0xD);
        t18 = ((-(strlen(a5))) + 0x33);
    } else {
        t14 = (strlen(a5));
        *(int *)((int)stk + 0) = t14;
        *(unsigned int *)(((int)stk + 4)) = (((strlen(a6)) + t14) + 0x1);
        t18 = ((-(strlen(a5))) + 0x3F);
    }
    t40 = a6;
    if ((int)(*(int *)(((int)stk + 4))) > (int)0x40) {
        t21 = a6;
        t22 = 0x0;
        for (;;) {
            t24 = FUN_0c02b536((*(signed char *)((t21 + 0x0))));
            if (t24 == 0) {
                if ((int)(t22 + 0x1) < (int)t18) {
                    t25 = *(signed char *)((t21 + 0x0));
                    t21 = (t21 + 0x1);
                    t26 = t22;
                    t22 = (t22 + 0x1);
                    *(unsigned char *)(((((int)stk + 4) + 0x4) + t26)) = t25;
                } else {
                    break;
                }
            }
            t27 = *(signed char *)((t21 + 0x0));
            t21 = (t21 + 0x1);
            t28 = t22;
            t22 = (t22 + 0x1);
            *(unsigned char *)(((((int)stk + 4) + 0x4) + t28)) = t27;
            if ((int)t22 >= (int)t18) {
                break;
            }
        }
        *(unsigned char *)(((((int)stk + 4) + 0x4) + t22)) = 0x0;
        t31 = *(int *)0xC30B70C;
        t33 = ((int (*)(int, int))(strcpy))(((t31 + 0x150E) + (((((struct o1D10_int *)(t31))->v)) * 0x29)), (((int)stk + 4) + 0x4));
        FUN_0c02b570();
        t35 = *(int *)0xC30B70C;
        t36 = (((struct o1D10_int *)(t35))->v);
        *(unsigned char *)((((((t36 << 2) << 2) + t36) + (t35 + 0x11BC)) + 0x0)) = 0x0;
        t40 = t21;
    }
    t45 = *(int *)0xC30B70C;
    t47 = ((int (*)(int, int))(strcpy))(((t45 + 0x150E) + (((((struct o1D10_int *)(t45))->v)) * 0x29)), t40);
    return (FUN_0c02b570());
}
