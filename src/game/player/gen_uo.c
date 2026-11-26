/* Straight-line functions with calls and guards (batch gen_uo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c059ef6(int, int);
int FUN_0c059f04(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c17c450(int);
int math_atan_angle16(float);
int nlRand(void);
int FUN_0c085650(int a4);

int FUN_0c085650(int a4)
{
    int stk[7];
    register int t0;
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t11;
    register int t12;
    register int t19;
    register int t20;
    register int t22;
    register int t23;
    register int t29;
    register int t30;
    register int t31;
    register int t32;
    register int t52;
    register int t53;
    register int t57;
    register int R1004;
    register int R1008;
    register int R1012;
    register int R1016;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);

    (((struct o3715_uchar *)(a4))->v) = 0x25;
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 8) {
        if (t0 != 10) {
            R1012 = 0x10;
            R1008 = 0x0;
            t4 = *(signed char *)((a4 + 0x1));
            R1016 = t4;
            t5 = t4;
            R1004 = t5;
            FUN_0c07e79c(a4, t4, 0x0, 0x10, t5, 0x0, 0x10);
        } else {
            if ((*(signed char *)((a4 + 0x371C))) != 0) {
                R1012 = 0x24;
                R1008 = 0x0;
                t8 = *(signed char *)((a4 + 0x1));
                R1016 = t8;
                t9 = t8;
                R1004 = t9;
                FUN_0c07e79c(a4, t8, 0x0, 0x24, t9, 0x0, 0x24);
            } else {
                R1012 = 0x10;
                R1008 = 0x0;
                t11 = *(signed char *)((a4 + 0x1));
                R1016 = t11;
                t12 = t11;
                R1004 = t12;
                FUN_0c07e79c(a4, t11, 0x0, 0x10, t12, 0x0, 0x10);
            }
        }
    } else {
        if ((*(signed char *)((a4 + 0x371C))) != 0) {
            R1012 = 0x2A;
            R1008 = 0x0;
            t19 = *(signed char *)((a4 + 0x1));
            R1016 = t19;
            t20 = t19;
            R1004 = t20;
            FUN_0c07e79c(a4, t19, 0x0, 0x2A, t20, 0x0, 0x2A);
        } else {
            R1012 = 0x10;
            R1008 = 0x0;
            t22 = *(signed char *)((a4 + 0x1));
            R1016 = t22;
            t23 = t22;
            R1004 = t23;
            FUN_0c07e79c(a4, t22, 0x0, 0x10, t23, 0x0, 0x10);
        }
    }
    t29 = *(int *)(((0x118 + a4) + 0x4));
    t30 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t29))->v) = 1.0f;
    (((struct o9C_float *)(t29))->v) = 1.0f;
    (((struct oA0_float *)(t30))->v) = 1.0f;
    (((struct o9C_float *)(t30))->v) = 1.0f;
    t31 = *(int *)(((0x118 + a4) + 0x4));
    t32 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t31))->v) = 1.0f;
    (((struct o98_float *)(t32))->v) = 1.0f;
    (((struct o94_float *)(t31))->v) = 1.0f;
    (((struct o94_float *)(t32))->v) = 1.0f;
    *(float *)(((int)stk + 16)) = ((((struct o4C_float *)(a4))->v));
    *(float *)(((int)stk + 24)) = ((((struct o54_float *)(a4))->v));
    *(float *)(((int)stk + 20)) = 0.0f;
    FUN_0c17c450((((int)stk + 12) + 0x4));
    (((struct o4C_float *)(a4))->v) = (*(float *)(((int)stk + 16)));
    (((struct o54_float *)(a4))->v) = (*(float *)(((int)stk + 24)));
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    if ((*(float *)(((int)stk + 16))) == 0.0f) {
        *(float *)(((int)stk + 16)) = 9.99999997e-07f;
    }
    *(unsigned int *)((a4 + 0x38)) = (math_atan_angle16(((-(*(float *)(((int)stk + 24)))) / (*(float *)(((int)stk + 16))))));
    if (0.0f > (*(float *)(((int)stk + 16)))) {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x8000);
    }
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x4000);
    FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x1);
    t52 = nlRand();
    t53 = (t52 % 0x2);
    t57 = t53;
    if (t53 != 0) {
        t57 = (FUN_0c059f04((*(signed char *)((a4 + 0x1)))));
    }
    return t57;
}
