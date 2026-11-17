/* game/unsorted: functions 0C028370-0C02845A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c0573cc(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c028370(void);

int FUN_0c028370(void)
{
    int stk[37];
    register int t0;
    register int t49;
    register int t2;
    register int t3;
    register int t9;
    int t18;

    t0 = FUN_0c022050();
    t49 = t0;
    if (t0 != 0) {
        FUN_0c0220c4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        t2 = *(signed char *)(((int)stk + 8));
        t3 = *(int *)0xC309994;
        if (t2 == 101) {
            if ((*(signed char *)(((int)stk + 4))) == 2) {
                FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                t9 = *(signed char *)(((int)stk + 0));
                t49 = t9;
                if (t9 == 1) {
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x76;
                    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                    *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
                    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x1;
                    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                    (((struct o0_uchar *)0xC30985A)->v) = 0x2;
                    (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                    *(unsigned short *)0xC30EF6C = 0x0;
                    t49 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
                }
            } else {
                if ((t2 == 101) && (t18 = *(signed char *)(((int)stk + 4)), t18 == 4)) {
                    FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                    t49 = *(signed char *)(((int)stk + 0));
                    if (t49 == 1) {
                        (((struct o0_uchar *)0xC30985A)->v) = 0x7;
                        *(unsigned short *)0xC30EF6C = 0x0;
                    } else {
                        (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) - 1);
                    }
                } else {
                    if ((*(signed char *)0xC30AF9A) != 0) {
                        t49 = (FUN_0c02aa9e());
                    } else {
                        t49 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
                    }
                }
            }
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t49 = (FUN_0c02aa9e());
            } else {
                t49 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t49;
}
