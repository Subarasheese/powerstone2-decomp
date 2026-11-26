/* Straight-line functions with calls and guards (batch gen_yj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059f20(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c14f9d6(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0a7c10(int a4);

int FUN_0c0a7c10(int a4)
{
    int stk[1];
    register int t11;
    register int t15;
    register int t14;
    register int t25;
    register int t26;
    register int t27;
    register int t28;

    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 34) {
        FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
    }
    FUN_0c037bf6(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t11 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t11 != 0) {
            t15 = 0;
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                t14 = FUN_0c07d1fc(a4);
                *(unsigned int *)(((int)stk + 0)) = t14;
                if (t14 == 0) {
                    t15 = 1;
                }
            } else {
                t15 = 1;
            }
            if (t15) {
                if ((*(int *)(((int)stk + 0))) == 2) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
                    FUN_0c14f9d6((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
                    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0xD);
                    t25 = *(int *)(((0x118 + a4) + 0x4));
                    t26 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t25))->v) = 1.0f;
                    (((struct o9C_float *)(t25))->v) = 1.0f;
                    (((struct oA0_float *)(t26))->v) = 1.0f;
                    (((struct o9C_float *)(t26))->v) = 1.0f;
                    t27 = *(int *)(((0x118 + a4) + 0x4));
                    t28 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t27))->v) = 1.0f;
                    (((struct o98_float *)(t28))->v) = 1.0f;
                    (((struct o94_float *)(t27))->v) = 1.0f;
                    (((struct o94_float *)(t28))->v) = 1.0f;
                    return 0x94;
                }
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
