/* Straight-line functions with calls and guards (batch gen_az): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c18dfd6(void);
int FUN_0c18dfe6(void);
int FUN_0c1a2184(void);
int FUN_0c2d8152(int);
int FUN_0c2d815a(int, int);
int FUN_0c2d8590(int, int);
int FUN_0c2d80f8(int a4, int a5);
int FUN_0c2d817c(int a4, int a5);
int FUN_0c184000(int a4, int a5, int a6, int a7);



int FUN_0c184000(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t3;

    *(unsigned short *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    FUN_0c18dfd6();
    if (((unsigned short)(*(short *)(((int)stk + 0))) & 0xFF00) == 0x4100) {
        t3 = *(signed char *)(((int)stk + 0));
        if ((int)(unsigned short)(unsigned char)t3 >= (int)0x40) {
            FUN_0c18dfe6();
            return 0xFFFFFFFF;
        }
        *(unsigned short *)(((int)stk + 0)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((unsigned short)(unsigned char)t3 << 2) + 0xC206094)))))((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        FUN_0c18dfe6();
        return (*(short *)(((int)stk + 0)));
    }
    FUN_0c18dfe6();
    return 0xFFFFFFFF;
}
