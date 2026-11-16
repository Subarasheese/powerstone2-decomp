/* Straight-line functions with calls and guards (batch gen_pi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c01e9e4(void);
int FUN_0c02ae40(int);
int FUN_0c036de8(int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c010460(int a4, int a5, int a6);

int FUN_0c010460(int a4, int a5, int a6)
{
    int stk[1];
    register int t4;

    FUN_0c036de8(0x1F, a5, a6);
    FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c02ae40(0x2);
    FUN_0c01e9e4();
    (((struct o1_uchar *)0xC30EF65)->v) = 0x0;
    t4 = *(signed char *)0xC30EF65;
    (((struct o0_uchar *)0xC30EF65)->v) = (t4 + 0x1);
    return (t4 + 0x1);
}
