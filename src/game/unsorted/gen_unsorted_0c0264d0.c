/* game/unsorted: functions 0C0264D0-0C02654C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int a4, int a5, int a6);
int FUN_0c02aa9e(void);
int FUN_0c1864e0(int, int, int);
int FUN_0c0264d0(void);

int FUN_0c0264d0(void)
{
    int stk[35];
    register int t0;
    register int t20;
    int t3;

    t0 = FUN_0c022050();
    t20 = t0;
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
        if (((*(signed char *)(((int)stk + 0))) == 103) && (t3 = *(signed char *)(((int)stk + 4)), t3 == 1)) {
            t20 = FUN_0c1864e0((*(int *)0xC309994), 0xC309993, 0x1);
            (((struct o0_uchar *)0xC309993)->v) = ((*(signed char *)0xC309993) - 1);
            *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
            (((struct oA_uchar *)0xC305414)->v) = 0x0;
            (((struct o0_uchar *)0xC305414)->v) = 0x0;
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t20 = (FUN_0c02aa9e());
            } else {
                t20 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t20;
}
