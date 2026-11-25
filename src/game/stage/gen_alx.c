/* Straight-line functions with calls and guards (batch gen_alx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05261c(int);
int FUN_0c059df2(int, int);
int FUN_0c059f20(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07db58(int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c09acb8(int a4, int a5, int a6, int a7);

int FUN_0c09acb8(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t20;
    register int t3;
    register int t5;
    register int t6;
    register int t29;
    register int t61;
    register int t68;
    register int R1004;

    R1004 = *(int *)((int)stk + 0);

    t20 = 0;
    if ((*(short *)((a4 + 0x1C))) == 0) {
        if (((((struct o3770_int *)(a4))->v)) == 0) {
            t3 = FUN_0c085d0c(a4, a5, a6, a7);
        } else {
            t5 = FUN_0c037bf6(((((struct o3770_int *)(a4))->v)));
            if ((unsigned char)t5 != 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                t6 = (((struct o3770_int *)(a4))->v);
                R1004 = t6;
                FUN_0c059f20((*(signed char *)(((R1004) + 0x1))), (*(signed char *)((t6 + 0x135))));
                FUN_0c073566(a4, 0x31);
                FUN_0c07363a(a4, 0x31);
            } else {
                FUN_0c038362(((((struct o3770_int *)(a4))->v)));
            }
            if (((((struct o3770_int *)(a4))->v)) != 0) {
                (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
                t20 = 1;
            } else {
                t20 = 1;
            }
        }
    } else {
        t20 = 1;
    }
    if (t20) {
        if ((*(short *)((a4 + 0x1E))) != 0) {
            if ((int)(*(short *)((a4 + 0x1E))) <= (int)0x3) {
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - (1.0f + 1.0f));
            }
            t29 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t29 - 1);
            if ((short)(t29 - 1) == 0) {
                FUN_0c05261c((*(int *)0xC241C20));
                if (((((struct o3770_int *)(a4))->v)) != 0) {
                    (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
                }
                FUN_0c07db58(a4);
                thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (((int)stk + 0) + 0x4));
                FUN_0c14f238((((int)stk + 0) + 0x4), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x3);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x10);
                if (((((struct o3770_int *)(a4))->v)) != 0) {
                    FUN_0c073566(a4, 0x30);
                }
            }
        }
        t61 = FUN_0c037bf6(a4);
        if ((unsigned char)t61 != 0) {
            FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
            t68 = (FUN_0c037bf6(a4));
        } else {
            t68 = (FUN_0c038362(a4));
        }
    } else {
        t68 = t3;
    }
    return t68;
}
