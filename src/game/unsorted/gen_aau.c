/* Straight-line functions with calls and guards (batch gen_aau): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c1312e2(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c09f772(int a4);

int FUN_0c09f772(int a4)
{
    int stk[3];
    register int t1;
    register int t3;
    int t9;

    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t1 != 0) {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    t3 = FUN_0c037bf6(a4);
    if ((unsigned char)t3 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
    }
    if (!(5.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t9 = *(short *)((a4 + 0x1C)), t9 == 0)) {
        FUN_0c1312e2(a4);
        (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.5f));
        (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.5f));
        (((struct o58_float *)(a4))->v) = ((-((((struct o4C_float *)(a4))->v))) / 20.0f);
        (((struct o60_float *)(a4))->v) = ((-((((struct o54_float *)(a4))->v))) / 20.0f);
        (((struct o50_float *)(a4))->v) = 12.0f;
        (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
