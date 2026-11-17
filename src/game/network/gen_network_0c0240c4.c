/* game/network: functions 0C0240C4-0C0241C6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c1864e0(int, int, int);
int strcpy(int, int);
int FUN_0c0240c4(void);

int FUN_0c0240c4(void)
{
    int stk[36];
    register int t0;
    register int t38;
    register int t2;
    register int t3;
    register int t10;
    register int t20;
    int t17;

    t0 = FUN_0c022050();
    t38 = t0;
    if (t0 != 0) {
        FUN_0c0220c4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        t2 = *(signed char *)(((int)stk + 8));
        t3 = *(int *)0xC309994;
        if (t2 == 96) {
            if ((*(signed char *)(((int)stk + 4))) == 5) {
                FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                t10 = FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
                if ((*(signed char *)(((int)stk + 0))) != 0) {
                    (((struct o0_uchar *)0xC309859)->v) = 0x1;
                    (((struct o1_uchar *)0xC309859)->v) = 0x0;
                    (((struct o2_uchar *)0xC309859)->v) = 0x0;
                    (((struct o3_uchar *)0xC309859)->v) = 0x0;
                    t38 = (strcpy(0xC3053B8, 0xC1A8BDC));
                } else {
                    (((struct o0_uchar *)0xC309859)->v) = 0xD;
                    (((struct o1_uchar *)0xC309859)->v) = 0x0;
                    (((struct o2_uchar *)0xC309859)->v) = 0x0;
                    (((struct o3_uchar *)0xC309859)->v) = 0x0;
                    (((struct o9_uchar *)0xC305414)->v) = 0x0;
                    (((struct o0_uchar *)0xC305414)->v) = 0x0;
                    t38 = t10;
                }
            } else {
                if ((t2 == 96) && (t17 = *(signed char *)(((int)stk + 4)), t17 == 6)) {
                    FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                    t20 = FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
                    if ((*(signed char *)(((int)stk + 0))) != 0) {
                        (((struct o0_uchar *)0xC309859)->v) = 0xD;
                        (((struct o1_uchar *)0xC309859)->v) = 0x0;
                        (((struct o2_uchar *)0xC309859)->v) = 0x0;
                        (((struct o3_uchar *)0xC309859)->v) = 0x0;
                        (((struct o9_uchar *)0xC305414)->v) = 0x0;
                        (((struct o0_uchar *)0xC305414)->v) = 0x0;
                        t38 = (strcpy(0xC3053B8, 0xC1A8BEC));
                    } else {
                        (((struct o0_uchar *)0xC309859)->v) = 0x1;
                        (((struct o1_uchar *)0xC309859)->v) = 0x0;
                        (((struct o2_uchar *)0xC309859)->v) = 0x0;
                        (((struct o3_uchar *)0xC309859)->v) = 0x0;
                        t38 = t20;
                    }
                } else {
                    t38 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
                }
            }
        } else {
            t38 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
        }
    }
    return t38;
}
