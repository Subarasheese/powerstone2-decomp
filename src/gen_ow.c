/* Straight-line functions with calls and guards (batch gen_ow): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059dae(int, int);
int FUN_0c073566(int, int, float);
int FUN_0c14f238(int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c0a0b0a(int a4, float f4);

int FUN_0c0a0b0a(int a4, float f4)
{
    int stk[6];
    register float u1;
    register int t3;
    register int t57;
    register int t60;
    register int t64;

    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if ((int)u1 != 42) {
        if ((int)u1 != 70) {
            if ((int)u1 != 99) {
                if ((int)u1 != 110) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = (((struct o3770_int *)(a4))->v);
                    (((struct o15_uchar *)(t3))->v) = ((*(signed char *)((t3 + 0x15))) + 0x1);
                }
            } else {
                FUN_0c073566(a4, 0x32, f4);
                FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x6);
                thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532594))) + 0x28), ((int)stk + 0));
                FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
            }
        } else {
            FUN_0c073566(a4, 0x31, f4);
            FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x6);
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532594))) + 0x28), ((int)stk + 0));
            FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
        }
    } else {
        FUN_0c073566(a4, 0x30, f4);
        FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x6);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532594))) + 0x28), ((int)stk + 0));
        FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
    }
    t57 = FUN_0c037bf6(a4);
    if ((unsigned char)t57 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = (*(float *)0xC0A0CA0);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t60 = (((struct o3770_int *)(a4))->v);
        (((struct o15_uchar *)(t60))->v) = ((*(signed char *)((t60 + 0x15))) + 0x1);
        t64 = 0x15;
    } else {
        FUN_0c038362(a4);
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t64 = 0x374B;
    }
    return t64;
}
