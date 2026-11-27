/* Straight-line functions with calls and guards (batch gen_qx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c16d304(int);
int FUN_0c16d330(int);
int FUN_0c16d3d6(int);
int FUN_0c16d404(int, int, float);
int FUN_0c16d468(int, int);
int FUN_0c16d4ec(int);
float FUN_0c16d538(int, float);
int math_vec3_accumulate(int, int);
int FUN_0c16d606(int a4);

int FUN_0c16d606(int a4)
{
    int stk[4];
    register int t0;
    register float t17;
    register int t36;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        *(int *)((int)stk + 0) = 0x5;
        FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x7, 0x5);
    }
    if ((t0 == 0) || (t0 == 1)) {
        FUN_0c037bf6(a4);
        FUN_0c038362(a4);
        FUN_0c16d330(a4);
        FUN_0c16d3d6(a4);
        FUN_0c16d304(a4);
        FUN_0c16d468(a4, (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5324C0));
        FUN_0c16d404(a4, ((int)stk + 4), 10.0f);
        (((struct o4C_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
        (((struct o54_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        t17 = FUN_0c16d538(a4, 60.0f);
        if (t17 != -1.0f) {
            if (20.0f > (t17 - ((((struct o2C_float *)(a4))->v)))) {
                (((struct o2C_float *)(a4))->v) = t17;
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x3;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
                (((struct o50_float *)(a4))->v) = (t17 - ((((struct o2C_float *)(a4))->v)));
                FUN_0c16d404(a4, ((int)stk + 4), (1.0f + 1.0f));
                (((struct o4C_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
                (((struct o54_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
            }
        }
        t36 = (FUN_0c16d4ec(a4));
    } else {
        (((struct o15_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t36 = 0x16;
    }
    return t36;
}
