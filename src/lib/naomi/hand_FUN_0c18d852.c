/* Hand-fixed generated C: the second argument FUN_0c18d852 passes is the halfword at the caller's stack pointer (r15+28 after its
   two pushes: the low half of its first stack argument) with bit 7 set; the generated C read it from its own copy of the frame,
   at the wrong offset. */

int FUN_0c197e54(int, int, int, int, int, int);

int FUN_0c18d852(int a4, int a5, int a6, int a7, int a8)
{
    int stk[16];
    register int t1;
    register int t3;

    stk[7] = a8;
    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned short *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    if (a7 != 0) {
        t1 = (*(short *)(((int)stk + 24)));
        *(int *)((int)stk + 8) = t1;
        t3 = (*(int *)(((int)stk + 20)));
        *(int *)((int)stk + 4) = t3;
        FUN_0c197e54((*(int *)(((int)stk + 16))), ((short)a8 | 0x80), (*(int *)(((int)stk + 12))), (*(int *)(((*(int *)(((int)stk + 12))) + 0x4))), t3, t1);
    }
    return 0x0;
}

