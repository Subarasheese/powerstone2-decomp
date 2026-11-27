/* Straight-line functions with calls and guards (batch gen_aan): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0db380(int);
int FUN_0c0dbb38(int a4, int a5, int a6, int a7);

int FUN_0c0dbb38(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t3;
    register int t9;
    register int t14;
    register int t17;
    register int t20;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x28)); }
            FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 4)));
            t9 = 0x132;
            if ((*(signed char *)((a4 + 0x132))) != 0) {
                FUN_0c0db380(a4);
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t9 = 0x14;
            }
            return t9;
        }
    } else {
        t14 = 0x1;
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            t14 = 0x168;
        }
        *(unsigned short *)((a4 + 0x1C)) = t14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t17 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t17 - 1);
    t20 = (short)(t17 - 1);
    if ((short)(t17 - 1) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(int *)((int)stk + 12) = 0xFFFFFFEF;
        *(int *)((int)stk + 8) = 0xFFFFFFFF;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x10;
        FUN_0c064d24(a4, 0x2, 0xB, 0x1, 0x10, 0x0, 0xFFFFFFFF, 0xFFFFFFEF);
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t20 = 0x14;
    }
    return t20;
}
