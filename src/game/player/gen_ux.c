/* Straight-line functions with calls and guards (batch gen_ux): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059f20(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c1366b0(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0a7278(int a4, int a5, int a6);

int FUN_0c0a7278(int a4, int a5, int a6)
{
    int stk[2];
    register int t2;
    register int t10;
    register int t5;
    register int t8;
    register int t19;
    register int t24;
    register int t25;
    register int t21;

    FUN_0c037bf6(a4, a5, a6);
    if (((((struct o50_float *)(a4))->v)) > 0.0f) {
    } else {
        t2 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t2 == 0) {
        } else {
            *(int *)((int)stk + 0) = 0x0;
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            t10 = 0;
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                t5 = FUN_0c07d1fc(a4);
                *(unsigned int *)(((int)stk + 4)) = t5;
                if (t5 != 0) {
                    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x18);
                    t8 = *(int *)(((0x118 + a4) + 0x4));
                    t21 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t8))->v) = 1.0f;
                    (((struct o9C_float *)(t8))->v) = 1.0f;
                } else {
                    t10 = 1;
                }
            } else {
                t10 = 1;
            }
            if (t10) {
                FUN_0c1366b0((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x1);
                if ((*(int *)(((int)stk + 4))) == 2) {
                    return FUN_0c085cac(a4, 0x6, 0x0);
                }
                FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
                FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x18);
                t19 = *(int *)(((0x118 + a4) + 0x4));
                t21 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t19))->v) = 1.0f;
                (((struct o9C_float *)(t19))->v) = 1.0f;
            }
            (((struct oA0_float *)(t21))->v) = 1.0f;
            (((struct o9C_float *)(t21))->v) = 1.0f;
            t24 = *(int *)(((0x118 + a4) + 0x4));
            t25 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t24))->v) = 1.0f;
            (((struct o98_float *)(t25))->v) = 1.0f;
            (((struct o94_float *)(t24))->v) = 1.0f;
            (((struct o94_float *)(t25))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
