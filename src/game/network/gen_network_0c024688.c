/* game/network: functions 0C024688-0C024764, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
int FUN_0c013f2e(void);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int a4, int a5, int a6);
int FUN_0c0222a4(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c024688(void);
int FUN_0c024726(void);

int FUN_0c024688(void)
{
    int stk[36];
    register int t1;
    register int t6;
    register int t13;

    FUN_0c013f2e();
    t1 = FUN_0c022050();
    t13 = t1;
    if (t1 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t13 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    t6 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t6 + 0x1);
    if ((int)(short)(t6 + 0x1) >= (int)0x14) {
        (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x70;
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x4;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x6;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = ((*(signed char *)0xC305414) + 0x1);
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
        (((struct o0_uchar *)0xC309859)->v) = 0xD;
        (((struct o1_uchar *)0xC309859)->v) = 0x6;
        (((struct o2_uchar *)0xC309859)->v) = 0x0;
        (((struct o9_uchar *)0xC305415)->v) = 0x0;
        (((struct o8_uchar *)0xC305415)->v) = 0x0;
        (((struct o0_uchar *)0xC305415)->v) = 0x0;
        t13 = (FUN_0c01e9e4());
    }
    return t13;
}

int FUN_0c024726(void)
{
    int stk[3];
    register int t2;
    register int t5;

    FUN_0c013f2e();
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    t2 = FUN_0c022050();
    t5 = t2;
    if (t2 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t5 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    return t5;
}
