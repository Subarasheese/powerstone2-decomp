/* Straight-line functions with calls and guards (batch gen_agq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c059e60(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0b507a(int, int, int);
int FUN_0c14cd44(int, int);
int nlRand(void);
int FUN_0c0b6862(int a4, int a5, int a6);

int FUN_0c0b6862(int a4, int a5, int a6)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t2;
    register int t8;
    register int t13;
    register int t9;
    register int t10;
    register int t16;
    register int t17;
    register int t19;
    register int t20;
    register int t25;
    register int R1004;
    register int R1008;
    register int R1012;
    register int R1016;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if ((unsigned char)t1 != 0) {
                    return FUN_0c0b507a(a4, 0x0, 0x0);
                }
                return FUN_0c038362(a4);
            }
            (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
            t2 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
            FUN_0c038362(a4);
            if (((*(short *)((a4 + 0x1C))) & 3) == 0) {
                FUN_0c14cd44(a4, 0x0);
            }
            t8 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
            t13 = (short)(t8 - 1);
            if ((int)(short)(t8 - 1) <= 0) {
                R1012 = 0x16;
                R1008 = 0x1;
                t9 = *(signed char *)((a4 + 0x1));
                R1016 = t9;
                t10 = t9;
                R1004 = t10;
                FUN_0c07e79c(a4, t9, 0x1, 0x16, t10, 0x1, 0x16);
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t13 = 0x16;
            }
            return t13;
        }
    } else {
        R1012 = 0x15;
        R1008 = 0x1;
        t16 = *(signed char *)((a4 + 0x1));
        R1016 = t16;
        t17 = t16;
        R1004 = t17;
        FUN_0c07e79c(a4, t16, 0x1, 0x15, t17, 0x1, 0x15);
        t19 = nlRand();
        t20 = (t19 % 0x2);
        (((struct o1B_uchar *)((0x38F8 + a4)))->v) = (*(signed char *)((((0x38F8 + a4) + 0x18) + t20)));
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
    t25 = ((int (*)(int))(FUN_0c037bf6))(a4);
    if ((unsigned char)t25 != 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        FUN_0c059e60(a4, 0x24);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return 0x16;
    }
    return FUN_0c038362(a4);
}
