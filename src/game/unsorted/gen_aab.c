/* Straight-line functions with calls and guards (batch gen_aab): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c0185b4(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c027b94(int a4);

int FUN_0c027b94(int a4)
{
    int stk[33];
    register int t0;
    register int t18;
    register int t5;
    register int R1004;

    R1004 = *(int *)((int)stk + 0);

    t0 = *(signed char *)0xC30985B;
    if (t0 == 0) {
        *(unsigned short *)0xC30EF6C = 0x0;
        FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        (((struct o1_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985B) + 0x1);
    }
    t18 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        t5 = *(short *)0xC30EF6C;
        *(unsigned short *)0xC30EF6C = (t5 + 0x1);
        t18 = (short)((t5 + 0x1) - 1);
        if ((int)(short)((t5 + 0x1) - 1) >= (int)0x20) {
            *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x75;
            R1004 = ((((int)stk + 0) + 0x4) + 0x1);
            *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x3;
            *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x2;
            FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((R1004) + 0x0))));
            FUN_0c0185b4();
            (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
            (((struct o1_uchar *)0xC30985A)->v) = 0x0;
            *(unsigned char *)0xC30AF9A = 0x0;
            *(unsigned short *)0xC30EF6C = 0x0;
            t18 = 0x0;
        }
    }
    return t18;
}
