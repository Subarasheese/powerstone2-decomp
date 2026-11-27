/* Straight-line functions with calls and guards (batch gen_qj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c12f304(int, int, int, int);
int FUN_0c09dfa4(int a4, int a5, int a6, float f4);

int FUN_0c09dfa4(int a4, int a5, int a6, float f4)
{
    int stk[8];
    register int t0;
    register int t4;
    register int t8;
    register int t9;
    register int t15;
    register int t16;
    register int t23;
    register int t24;
    register int t26;
    register int t27;
    register int t37;
    register int t38;
    register int t40;
    register int t41;
    register int t50;
    register int t51;
    register int t59;
    register int t71;
    register int t72;
    register int t56;
    register int t57;
    register int t30;
    register int t44;
    register int R1004;
    register int R1008;
    register int R1012;
    register int R1016;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            t56 = a5;
            t57 = a6;
        } else {
            return t0;
        }
    } else {
        t4 = *(signed char *)((a4 + 0x17));
        switch (t4) {
        case 0:
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                R1012 = 0x2;
                R1008 = 0x6;
                t37 = *(signed char *)((a4 + 0x1));
                R1016 = t37;
                t38 = t37;
                R1004 = t38;
                FUN_0c07e79c(a4, t37, 0x6, 0x2, t38, 0x6, 0x2);
                t44 = 0x0;
            } else {
                R1012 = 0xD;
                R1008 = 0x6;
                t40 = *(signed char *)((a4 + 0x1));
                R1016 = t40;
                t41 = t40;
                R1004 = t41;
                FUN_0c07e79c(a4, t40, 0x6, 0xD, t41, 0x6, 0xD);
                t44 = 0x1;
            }
            (((struct o18_uchar *)(a4))->v) = t44;
            break;
        case 1:
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                R1012 = 0x3;
                R1008 = 0x6;
                t23 = *(signed char *)((a4 + 0x1));
                R1016 = t23;
                t24 = t23;
                R1004 = t24;
                FUN_0c07e79c(a4, t23, 0x6, 0x3, t24, 0x6, 0x3);
                t30 = 0x2;
            } else {
                R1012 = 0xD;
                R1008 = 0x6;
                t26 = *(signed char *)((a4 + 0x1));
                R1016 = t26;
                t27 = t26;
                R1004 = t27;
                FUN_0c07e79c(a4, t26, 0x6, 0xD, t27, 0x6, 0xD);
                t30 = 0x3;
            }
            (((struct o18_uchar *)(a4))->v) = t30;
            break;
        case 2:
            R1012 = 0x4;
            R1008 = 0x6;
            t15 = *(signed char *)((a4 + 0x1));
            R1016 = t15;
            t16 = t15;
            R1004 = t16;
            FUN_0c07e79c(a4, t15, 0x6, 0x4, t16, 0x6, 0x4);
            (((struct o18_uchar *)(a4))->v) = 0x4;
            break;
        case 3:
            R1012 = 0x5;
            R1008 = 0x6;
            t8 = *(signed char *)((a4 + 0x1));
            R1016 = t8;
            t9 = t8;
            R1004 = t9;
            FUN_0c07e79c(a4, t8, 0x6, 0x5, t9, 0x6, 0x5);
            (((struct o18_uchar *)(a4))->v) = 0x5;
            break;
        }
        t50 = *(int *)(((0x118 + a4) + 0x4));
        t51 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t50))->v) = 1.0f;
        (((struct o9C_float *)(t50))->v) = 1.0f;
        (((struct oA0_float *)(t51))->v) = 1.0f;
        (((struct o9C_float *)(t51))->v) = 1.0f;
        t57 = *(int *)(((0x118 + a4) + 0x4));
        t56 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t57))->v) = 1.0f;
        (((struct o98_float *)(t56))->v) = 1.0f;
        (((struct o94_float *)(t57))->v) = 1.0f;
        (((struct o94_float *)(t56))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    t59 = *(signed char *)((a4 + 0x18));
    t71 = t56;
    t72 = t57;
    if ((t59 == 1) || (t59 == 3)) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((*(short *)((a4 + 0x1C))) == 93) {
            FUN_0c12f304(a4, 0x0, t57, 0x0);
            (((struct o1B_uchar *)(a4))->v) = 0x0;
        } else {
            t71 = t56;
            t72 = t57;
        }
    }
    return FUN_0c037bf6(a4, t71, t72);
}
