/* Straight-line functions with calls and guards (batch gen_pb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059dae(int, int);
int FUN_0c073566(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c0a083a(int a4, float f4);

int FUN_0c0a083a(int a4, float f4)
{
    int stk[9];
    register float u1;
    register int t30;
    register int t31;
    register int t32;
    register int t35;

    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if ((int)u1 != 29) {
        if ((int)u1 != 59) {
        } else {
            FUN_0c073566(a4, 0x17, f4);
            FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x6);
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532594))) + 0x28), (((int)stk + 12) + 0x4));
            FUN_0c14f238((((int)stk + 12) + 0x4), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
        }
    } else {
        FUN_0c073566(a4, 0x11, f4);
        FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x6);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532594))) + 0x28), (((int)stk + 12) + 0x4));
        FUN_0c14f238((((int)stk + 12) + 0x4), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
    }
    t30 = FUN_0c037bf6(a4);
    if ((unsigned char)t30 != 0) {
        *(int *)((int)stk + 8) = 0x12;
        *(int *)((int)stk + 4) = 0x2;
        t31 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t31;
        t32 = t31;
        *(int *)((int)stk + 0) = t32;
        FUN_0c07e79c(a4, t31, 0x2, 0x12, t32, 0x2, 0x12);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o37A4_float *)(a4))->v) = 0.0f;
        t35 = (((struct o3770_int *)(a4))->v);
        (((struct o15_uchar *)(t35))->v) = ((*(signed char *)((t35 + 0x15))) + 0x1);
        return 0x15;
    }
    FUN_0c038362(a4);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    return 0x374B;
}
