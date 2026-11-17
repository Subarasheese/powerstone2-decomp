/* game/network: functions 0C0247A0-0C024BF0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c01a9c0(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0221b0(void);
int FUN_0c0222a4(int, int, int);
int FUN_0c1864e0(int, int, int);
int strcpy(int, int, int);
int FUN_0c024ab2(void);

int FUN_0c024ab2(void)
{
    int stk[35];
    register int t0;
    register int t34;
    register int t2;
    register int t14;
    int t3;
    int t26;

    t0 = FUN_0c022050();
    t34 = t0;
    if (t0 != 0) {
        FUN_0c0220c4((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8), ((int)stk + 0));
        t2 = *(signed char *)(((int)stk + 4));
        if ((t2 == 96) && (t3 = *(signed char *)(((int)stk + 0)), t3 == 4)) {
            FUN_0c1864e0((*(int *)0xC309994), 0xC309BC6, 0x1);
            FUN_0c1864e0((*(int *)0xC309994), 0xC309BC7, 0x1);
            FUN_0c1864e0((*(int *)0xC309994), 0xC30A3F4, 0x1);
            FUN_0c1864e0((*(int *)0xC309994), 0xC30A3F5, 0x1);
            t14 = (((struct o0_short *)0xC30A3F4)->v);
            if ((int)(*(signed char *)0xC30A348) > (int)(t14 - 9)) {
                (((struct o2_uchar *)0xC30A346)->v) = (((*(signed char *)0xC30A3F4) - ((int)((int)t14 % (int)0xA))) + 0x1);
            }
            (((struct o0_uchar *)0xC30A346)->v) = ((int)((int)(((((struct o0_short *)0xC30A3F4)->v)) - 1) / (int)0xA));
            *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
            t34 = (strcpy(0xC3053B8, 0xC1A8C0C, 0xA));
        } else {
            if ((t2 == 101) && (t26 = *(signed char *)(((int)stk + 0)), t26 == 6)) {
                FUN_0c0221b0();
                (((struct o4_uint *)0xC30A3F4)->v) = 0x1;
                t34 = (FUN_0c01a9c0());
            } else {
                t34 = (FUN_0c0222a4((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8), ((int)stk + 0)));
            }
        }
    }
    return t34;
}
