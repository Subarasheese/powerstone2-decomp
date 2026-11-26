/* Straight-line functions with calls and guards (batch gen_qa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o42C_short { char p[0x42C]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cb448(int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c08ac24(int a4, int a5, int a6);

int FUN_0c08ac24(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t2;
    register int t10;
    register int t22;
    register int t28;
    register int t42;
    register int t43;
    register int t23;
    register int t24;
    register int R1004;
    register int R1008;
    register int R1012;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);

    t0 = *(signed char *)((a4 + 0x17));
    switch (t0) {
    case 0:
        t28 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t28 != 0) {
            R1012 = 0xE6;
            R1008 = 0x3;
            R1004 = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE6, 0xFFFFFFFF, 0x3, 0xE6);
            *(unsigned short *)((a4 + 0x1C)) = 0x5A;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        }
        if (18.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
        } else {
            if ((*(short *)((a4 + 0x1C))) == 0) {
                FUN_0c0cb448(a4, 0x6, 0x0, 0x0);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            }
        }
        break;
    case 1:
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        t10 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t10 != 0) {
            (((struct o20_ushort *)(a4))->v) = 0x0;
        }
        if (((((struct o20_short *)(a4))->v)) == 12) {
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xB);
        }
        if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x280) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
        t22 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t22 - 1);
        if (((int)(short)(t22 - 1) > 0) && ((t23 = (((struct o20_short *)(a4))->v), t23 != 12) || (t24 = *(short *)((a4 + 0x1E)), t24 == 0))) {
        } else {
            R1012 = 0xE7;
            R1008 = 0x3;
            R1004 = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE7, 0xFFFFFFFF, 0x3, 0xE7);
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        }
        break;
    case 2:
        t1 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t1 != 0) {
            t2 = FUN_0c085f66(a4);
            if (t2 == 0) {
                FUN_0c081dfc(a4);
            } else {
                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            }
            return FUN_0c085d0c(a4);
        }
        break;
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t42 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t42 != 0) {
            t43 = FUN_0c085f66(a4);
            if (t43 == 0) {
                FUN_0c081dfc(a4);
            } else {
                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
