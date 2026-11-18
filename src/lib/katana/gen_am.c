/* Straight-line functions with calls and guards (batch gen_am): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c2d6a70(int, int, int, int);
int FUN_0c2d6bb8(void);
int FUN_0c2d72b8(int);
int FUN_0c2d7302(int);
int FUN_0c2ec67a(int);
int FUN_0c2ee770(int, int);
int FUN_0c2ee948(void);
int FUN_0c2eeb4a(int);
int FUN_0c2eec74(int, int);
int FUN_0c2f3d48(int a4, int a5, int a6, int a7);
int FUN_0c2e76c8(int a4, int a5, int a6, int a7);
int FUN_0c2ec5da(void);

int FUN_0c2f3d48(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t6;
    register int t7;
    register int t10;
    register int t12;
    register int t22;
    register int t40;
    register int t23;
    register int t24;
    register int t38;
    register int t27;
    register int t28;
    register int t31;
    register int t33;

    FUN_0c2d6a70((((int)stk + 0) + 0x8), ((int)stk + 0), a6, a7);
    if ((*(short *)(((int)stk + 0))) != 0) {
        t2 = FUN_0c2eeb4a((((int)stk + 0) + 0x4));
        t3 = *(short *)(((int)stk + 0));
        if ((int)(unsigned short)t2 >= (int)(unsigned short)t3) {
            t6 = (unsigned short)t3;
            t7 = (*(short *)(((int)stk + 0)));
            for (;;) {
                t10 = (unsigned short)t7 == 0;
                t7 = (t7 - 1);
                if (t10) {
                    break;
                }
                t6 = (*(int *)(((int)stk + 4)));
                t6 = (t6 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t6;
                t12 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t12 + 0x1);
                *(unsigned char *)(((t6 - 0x1) + 0x0)) = ((*(signed char *)((((t12 + 0x1) - 1) + 0x0))));
                t6 = (t6 - 0x1);
            }
            FUN_0c2eec74((*(short *)(((int)stk + 0))), 0x1);
            FUN_0c2d6bb8();
        }
    }
    t22 = *(short *)(((int)stk + 0));
    t40 = (FUN_0c2ee770((((int)stk + 0) + 0x8), ((int)stk + 0)));
    if (t22 != 0) {
        t23 = FUN_0c2d72b8((((int)stk + 0) + 0x4));
        t24 = *(short *)(((int)stk + 0));
        t38 = (unsigned short)t23;
        if ((int)(unsigned short)t23 >= (int)(unsigned short)t24) {
            t27 = (unsigned short)t24;
            t28 = (*(short *)(((int)stk + 0)));
            for (;;) {
                t31 = (unsigned short)t28 == 0;
                t28 = (t28 - 1);
                if (t31) {
                    break;
                }
                t27 = (*(int *)(((int)stk + 4)));
                t27 = (t27 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t27;
                t33 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t33 + 0x1);
                *(unsigned char *)(((t27 - 0x1) + 0x0)) = ((*(signed char *)((((t33 + 0x1) - 1) + 0x0))));
                t27 = (t27 - 0x1);
            }
            FUN_0c2d7302((*(short *)(((int)stk + 0))));
            t38 = (FUN_0c2ee948());
        }
        t40 = t38;
    }
    return t40;
}

int FUN_0c2e76c8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t13;
    register int t15;
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = 0x1;
    t1 = 0x1;
    for (;;) {
        if ((unsigned int)((int)((unsigned int)a4 / (unsigned int)t1)) <= (unsigned int)((unsigned char)a5 - 1)) {
            break;
        }
        t0 = (*(signed char *)(((int)stk + 0)));
        t0 = (t0 + 0x1);
        *(unsigned char *)(((int)stk + 0)) = t0;
        t1 = ((unsigned char)a5 * t1);
    }
    t5 = a7;
    for (;;) {
        t6 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)(((int)stk + 0)) = (t6 + 0x1);
        if ((int)(unsigned char)((t6 + 0x1) - 1) >= (int)(unsigned char)a6) {
            break;
        }
        *(unsigned char *)((t5 + 0x0)) = 0x30;
        t5 = (t5 + 0x1);
    }
    *(unsigned char *)(((int)stk + 0)) = 0x1;
    t7 = a4;
    t8 = t5;
    t9 = t1;
    for (;;) {
        t10 = (int)((unsigned int)t7 / (unsigned int)t9);
        t7 = (t7 - ((signed char)t10 * t9));
        t11 = (int)((unsigned int)t9 / (unsigned int)(unsigned char)a5);
        t9 = t11;
        t13 = (t10 + 0x30);
        if ((int)(signed char)t10 >= (int)0xA) {
            t13 = (t10 + 0x37);
        }
        *(unsigned char *)((t8 + 0x0)) = t13;
        t8 = (t8 + 0x1);
        if ((unsigned int)t9 > (unsigned int)0x0) {
            t15 = *(signed char *)(((int)stk + 0));
            *(unsigned char *)(((int)stk + 0)) = (t15 + 0x1);
            if ((int)(unsigned char)((t15 + 0x1) - 1) > (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    *(unsigned char *)((t8 + 0x0)) = 0x0;
    return t11;
}

int FUN_0c2ec5da(void)
{
    register int t0;

    if (((unsigned char)(*(signed char *)0xC8D6793) & 0x80) != 0) {
        if ((*(signed char *)0xC8DFFEF) != 0) {
            return FUN_0c2ec67a(0x9);
        }
        return FUN_0c2ec67a(0x8);
    }
    if (((unsigned char)(*(signed char *)0xC8D6795) & 32) != 0) {
        t0 = 0x65;
        if ((*(signed char *)0xC8E0095) != 0) {
            t0 = 0x8;
        }
        return FUN_0c2ec67a(t0);
    }
    if (((unsigned char)(*(signed char *)0xC8D6794) & 64) != 0) {
        return FUN_0c2ec67a(0x3);
    }
    if (((unsigned char)(*(signed char *)0xC8D6794) & 0x80) != 0) {
        t0 = 0x1;
        if (((unsigned char)(*(signed char *)0xC8D679F) & 0x80) != 0) {
            t0 = 0x2;
        }
        return FUN_0c2ec67a(t0);
    }
    return FUN_0c2ec67a(0x0);
}
