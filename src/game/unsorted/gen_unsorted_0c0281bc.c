/* game/unsorted: functions 0C0281BC-0C028356, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c01cd2c(int);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c0281bc(void);

int FUN_0c0281bc(void)
{
    int stk[37];
    register int t0;
    register int t8;
    register int t23;
    register int t26;
    register int t29;
    register int t32;
    register int t44;
    int t3;
    int t24;
    int t27;
    int t30;
    int t33;

    t0 = FUN_0c022050();
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        if (((*(signed char *)(((int)stk + 0))) == 101) && (t3 = *(signed char *)(((int)stk + 4)), t3 == 2)) {
            FUN_0c1864e0((*(int *)0xC309994), (((int)stk + 0) + 0x8), 0x1);
            t8 = *(signed char *)(((int)stk + 8));
            t44 = t8;
            if (t8 != 1) {
            } else {
                (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x76;
                *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
                *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x1;
                FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                (((struct o0_uchar *)0xC30985A)->v) = 0x2;
                (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                *(unsigned short *)0xC30EF6C = 0x0;
                t44 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
            }
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t44 = (FUN_0c02aa9e());
            } else {
                t44 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
            }
        }
    } else {
        t23 = FUN_0c01cd2c(0x800);
        if (((short)t23 != 0) && (t24 = *(signed char *)0xC305416, t24 != 0)) {
            *(unsigned char *)0xC305416 = 0x0;
            t44 = (FUN_0c05aab6(0x0, 0x5));
        } else {
            t26 = FUN_0c01cd2c(0x400);
            if (((short)t26 != 0) && (t27 = *(signed char *)0xC305416, t27 == 0)) {
                *(unsigned char *)0xC305416 = 0x1;
                t44 = (FUN_0c05aab6(0x0, 0x5));
            } else {
                t29 = FUN_0c021ee2();
                if ((t29 != 0) && (t30 = *(signed char *)0xC305416, t30 == 0)) {
                    *(unsigned char *)0xC305416 = 0x1;
                    t44 = (FUN_0c05aab6(0x0, 0x5));
                } else {
                    t32 = FUN_0c01cd2c(0x101);
                    t44 = (short)t32;
                    if (((short)t32 != 0) && (t33 = *(signed char *)0xC305416, t33 != 0)) {
                        (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x75;
                        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                        *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
                        *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x4;
                        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                        (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
                        *(unsigned short *)0xC30EF6C = 0x0;
                        t44 = (FUN_0c05aab6(0x0, 0x3));
                    }
                }
            }
        }
    }
    return t44;
}
