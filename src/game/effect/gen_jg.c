/* Straight-line functions with calls and guards (batch gen_jg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o38F8_int { char p[0x38F8]; int v; };
struct o38F8_uint { char p[0x38F8]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c1366b0(int, int, int);
int FUN_0c13ad68(int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0a52a6(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0a52a6(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];
    register int t0;
    register int t5;
    register float u2;
    register int t3;
    register int t4;
    register int t19;
    register int t22;
    register int t24;
    register int t31;
    register int t38;
    register int t39;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t5 = t0;
            if (t0 == 2) {
                FUN_0c085d0c(a4, a5, a6, a7);
                u2 = *(float *)0xC0A54F4;
                t3 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t3))->v) = u2;
                (((struct o94_float *)(t3))->v) = u2;
                t4 = (((struct o11C_int *)(a4))->v);
                (((struct o98_float *)(t4))->v) = u2;
                (((struct o94_float *)(t4))->v) = u2;
                t5 = 0x94;
            }
            return t5;
        }
        if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 5) {
            FUN_0c059e60(a4, 0x20);
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
            t19 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t19 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                return FUN_0c1366b0((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x1);
            }
        }
        t22 = FUN_0c037bf6(a4);
        t24 = (unsigned char)t22;
        if ((unsigned char)t22 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t24 = 0x15;
        }
        return t24;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    FUN_0c13ad68((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), a7);
    FUN_0c07d030(a4, 0x0);
    t31 = (((struct o38F8_int *)(a4))->v);
    (((struct o38F8_uint *)(a4))->v) = (t31 + 0x1);
    if ((t31 + 0x1) == 1) {
        FUN_0c059e60(a4, 0xA);
    }
    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x15);
    t38 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t38))->v) = 5.0f;
    (((struct o94_float *)(t38))->v) = 5.0f;
    t39 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t39))->v) = 5.0f;
    (((struct o94_float *)(t39))->v) = 5.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(0xC25D238); }
    (((struct o50_float *)(a4))->v) = 15.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)(0xC25D238); }
    (((struct o5C_float *)(a4))->v) = -2.0f;
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
}
