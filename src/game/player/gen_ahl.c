/* Straight-line functions with calls and guards (batch gen_ahl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
int FUN_0c037bf6(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c14f824(int, int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c0ac2ac(int a4);

int FUN_0c0ac2ac(int a4)
{
    int stk[7];
    register int t17;
    register int t32;
    int t1;
    register int t24;
    register int t25;
    register int t26;
    register int t28;
    register int R1004;
    register int R1008;
    register int R1012;
    register int R1016;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);

    if (((*(signed char *)((a4 + 0x2))) != 2) && (t1 = *(int *)0xC542260, (t1 & 3) == 0)) {
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), (((int)stk + 12) + 0x4));
        *(float *)(((int)stk + 20)) = ((((struct o168_float *)(a4))->v));
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (((int)stk + 12) + 0x4));
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t17 = FUN_0c037bf6(a4);
    t32 = (unsigned char)t17;
    if ((unsigned char)t17 != 0) {
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            R1012 = 0xC;
            R1008 = 0x2;
            t26 = *(signed char *)((a4 + 0x1));
            R1016 = t26;
            t25 = t26;
            R1004 = t25;
            t24 = 0xC;
            t28 = 0xC;
        } else {
            R1012 = 0x1F;
            R1008 = 0x2;
            t26 = *(signed char *)((a4 + 0x1));
            R1016 = t26;
            t25 = t26;
            R1004 = t25;
            t24 = 0x1F;
            t28 = 0x1F;
        }
        FUN_0c07e79c(a4, t26, 0x2, t28, t25, 0x2, t24);
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t32 = 0x16;
    }
    return t32;
}
