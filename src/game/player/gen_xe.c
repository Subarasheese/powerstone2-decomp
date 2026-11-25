/* Straight-line functions with calls and guards (batch gen_xe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o1200_uchar { char p[0x1200]; unsigned char v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o430_short { char p[0x430]; short v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07d030(int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0905b4(int);
int FUN_0c1277c4(int);
int FUN_0c14f9d6(int, int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c090650(int a4);

int FUN_0c090650(int a4)
{
    int stk[5];
    register int t8;
    register int t17;
    register int t28;
    register int t70;
    register int t83;
    register int t41;
    register int t42;
    int t43;
    float u71;
    register int R1004;
    register int R1008;
    register int R1012;
    register int R1016;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);

    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    if ((*(short *)((a4 + 0x1C))) == 1) {
        (((struct o1200_uchar *)((0x468 + a4)))->v) = 0x0;
        (((struct o447_uchar *)(a4))->v) = 0x3;
    } else {
        t8 = *(short *)((a4 + 0x1C));
        if (t8 == 9) {
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                R1016 = 0xC1C5FD4;
                R1012 = 0xC1C5FC8;
                R1008 = 0x42;
                R1004 = 0x12;
                FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0xC, 0x1, 0x12, 0x42, 0xC1C5FC8, 0xC1C5FD4);
            } else {
                R1016 = 0xC1C5FEC;
                R1012 = 0xC1C5FE0;
                R1008 = 0x42;
                R1004 = 0x12;
                t17 = *(signed char *)((a4 + 0x1));
                (((struct o10_uchar *)(((int)stk + 0)))->v) = t17;
                FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0xB, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t17 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x12, 0x42, 0xC1C5FE0, 0xC1C5FEC);
            }
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                R1016 = 0xC1C5F74;
                R1012 = 0xC1C5F68;
                R1008 = 0x52;
                R1004 = 0x12;
                FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, 0x12, 0x52, 0xC1C5F68, 0xC1C5F74);
            } else {
                R1016 = 0xC1C5F8C;
                R1012 = 0xC1C5F80;
                R1008 = 0x52;
                R1004 = 0x12;
                t28 = *(signed char *)((a4 + 0x1));
                (((struct o10_uchar *)(((int)stk + 0)))->v) = t28;
                FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t28 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x12, 0x52, 0xC1C5F80, 0xC1C5F8C);
            }
        } else {
            if (t8 == 56) {
                (((struct o1200_uchar *)((0x468 + a4)))->v) = 0x1;
                (((struct o447_uchar *)(a4))->v) = 0x0;
            } else {
                if (((*(short *)((a4 + 0x1C))) != 40) && ((t41 = *(short *)((a4 + 0x1C)), (int)t41 > (int)0x1E) && ((t42 = (((struct o430_short *)(a4))->v), ((unsigned short)t42 & 0x200) != 0) && (t43 = *(short *)((a4 + 0x1E)), (int)t43 < (int)0x4)))) {
                    FUN_0c0905b4(a4);
                    FUN_0c07d030(a4, 0x0);
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                }
            }
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c038362(a4);
    t70 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t70 != 0) && (u71 = (((struct o50_float *)(a4))->v), 0.0f > u71)) {
        FUN_0c14f9d6((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    if ((*(short *)((a4 + 0x1C))) == 15) {
        FUN_0c1277c4(a4);
        (((struct o50_float *)(a4))->v) = (*(float *)0xC0908A8);
        (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
    }
    t83 = FUN_0c037bf6(a4);
    if ((unsigned char)t83 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t83;
}
