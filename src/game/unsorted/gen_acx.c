/* Straight-line functions with calls and guards (batch gen_acx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c06ae50(int);
int FUN_0c07e3fc(int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c084858(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c06af1a(int a4);

int FUN_0c06af1a(int a4)
{
    register int t0;
    register int t23;
    register int t15;
    register int t16;
    int t25;
    register int t26;
    register int t28;
    register int t30;
    register int t37;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
    }
    if (((((struct o3790_float *)(a4))->v)) > 0.0f) {
        (((struct o3790_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) - 0.111111112f);
    } else {
        (((struct o3790_float *)(a4))->v) = 0.0f;
    }
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
    t23 = 0;
    if (((((struct o160_float *)(a4))->v)) != 0.0f) {
        t15 = FUN_0c06ae50(a4);
        if (t15 == 0) {
            t16 = FUN_0c07ebd0(a4);
            if (t16 != 0) {
                FUN_0c084858(a4);
                if (8.0f > ((((struct o3790_float *)(a4))->v))) {
                    (((struct o3790_float *)(a4))->v) = 8.0f;
                }
                FUN_0c07e3fc(a4, 0x1);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t23 = 1;
            } else {
                t23 = 1;
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xB6);
        t23 = 1;
    }
    if (t23) {
        t25 = *(int *)((((((struct o11C_int *)(a4))->v)) + 0x10));
        if (t25 != 0) {
            t26 = t25;
            if ((0x8000 & t25) != 0) {
                t26 = (t25 | 0xFFFF0000);
            }
            if ((int)t26 > 0) {
                t28 = (((struct o11C_int *)(a4))->v);
                *(unsigned int *)((t28 + 0x10)) = ((*(int *)((t28 + 0x10))) - 109);
            } else {
                t30 = (((struct o11C_int *)(a4))->v);
                *(unsigned int *)((t30 + 0x10)) = ((*(int *)((t30 + 0x10))) + 0x6D);
            }
        }
        t37 = 0x11C;
    } else {
        t37 = t15;
    }
    return t37;
}
