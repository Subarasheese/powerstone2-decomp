/* game/network: functions 0C023B60-0C023C58, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
int FUN_0c013f2e(void);
int FUN_0c0185b4(void);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c023b60(void);

int FUN_0c023b60(void)
{
    int stk[36];
    register int t1;
    register int t6;
    register int t10;
    register int t44;
    register int t15;

    FUN_0c013f2e();
    t1 = FUN_0c022050();
    if (t1 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    }
    t6 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t6 + 0x1);
    if ((short)(t6 + 0x1) == 16) {
        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    }
    t10 = *(short *)0xC30EF6C;
    t44 = t10;
    if ((int)t10 >= (int)0x24) {
        FUN_0c01e9e4();
        (((struct o1_uchar *)0xC30541F)->v) = 0x0;
        *(unsigned int *)(((int)stk + 12)) = 0xC305414;
        (((struct o0_uchar *)0xC30541F)->v) = (*(signed char *)0xC305414);
        *(unsigned short *)0xC30EF6C = 0x0;
        FUN_0c0185b4();
        t15 = *(signed char *)(((*(int *)(((int)stk + 12))) + 0x0));
        if (t15 != 1) {
            switch (t15) {
            case 0:
                (((struct o1_uchar *)0xC309859)->v) = 0x7;
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
                break;
            case 2:
                (((struct o1_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985A) + 0x1);
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
                break;
            case 3:
                (((struct o1_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985A) + 0x2);
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
                break;
            case 4:
                (((struct o0_uchar *)0xC309859)->v) = 0x8;
                (((struct o1_uchar *)0xC309859)->v) = 0x0;
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
                break;
            }
            t44 = t15;
        } else {
            (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x70;
            *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
            *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x4;
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x5;
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = ((*(signed char *)0xC305414) + 0x1);
            t44 = FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
            (((struct o1_uchar *)0xC309859)->v) = 0x6;
            (((struct o2_uchar *)0xC309859)->v) = 0x0;
        }
    }
    return t44;
}
