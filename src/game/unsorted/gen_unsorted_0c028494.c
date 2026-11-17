/* game/unsorted: functions 0C028494-0C028558, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
int FUN_0c01e992(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c05b05c(int, int);
int FUN_0c186740(int, int, int);
int FUN_0c028494(void);

int FUN_0c028494(void)
{
    int stk[36];
    register int t0;
    register int t5;
    register int t16;
    register int t14;

    t0 = FUN_0c022050();
    t16 = t0;
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t16 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    t5 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t5 - 1);
    if ((int)(short)(t5 - 1) < 0) {
        if ((*(int *)0xC30A3F8) != 0) {
            *(unsigned int *)0xC30A3F8 = 0x0;
        }
        FUN_0c05b05c(0x1E, 0x0);
        *(unsigned char *)0xC30EFA5 = 0x0;
        (((struct o0_uchar *)0xC309858)->v) = 0x4;
        (((struct o3_uchar *)0xC309858)->v) = 0x0;
        (((struct o2_uchar *)0xC309858)->v) = 0x0;
        (((struct o1_uchar *)0xC309858)->v) = 0x0;
        (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x7F;
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x3;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x1;
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
        (((struct o6_ushort *)0xC309BCA)->v) = 0x0;
        (((struct o4_ushort *)0xC309BCA)->v) = 0x0;
        (((struct o2_ushort *)0xC309BCA)->v) = 0x0;
        (((struct o0_ushort *)0xC309BCA)->v) = 0x0;
        *(unsigned int *)0xC30A50C = 0x0;
        t14 = 0xC30A510;
        for (;;) {
            *(unsigned char *)((t14 + 0x0)) = 0x0;
            t14 = (t14 + 0x1);
            if ((unsigned int)t14 >= (unsigned int)0xC30A51A) {
                break;
            }
        }
        t16 = (FUN_0c01e992());
    }
    return t16;
}
