/* Straight-line functions with calls and guards (batch gen_zv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c15acb0(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int FUN_0c15acfe(int a4, int a5, int a6, int a7);

int FUN_0c15acfe(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t2;
    register int t7;
    register float u24;
    register float u26;
    register float u28;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        *(unsigned int *)(((int)stk + 12)) = 0xC2A2AE4;
        *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0xC);
        t2 = 0x14;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))) {
                break;
            }
            t7 = (*(int *)(((int)stk + 8)));
            *(int *)((int)stk + 0) = t7;
            t2 = (nlRand());
            t2 = (t2 % 0x10);
            t2 = (t2 << 8);
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((t7 + 0x0)) = t2;
            t2 = (nlRand());
            t2 = (t2 % 0x10);
            t2 = (t2 << 8);
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x4) + 0x0)) = t2;
            t2 = (nlRand());
            t2 = (t2 % 0x10);
            t2 = (t2 << 8);
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x8) + 0x0)) = t2;
            t2 = 0x24;
            *(float *)((((int)stk + 4) + t2)) = (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))));
            t2 = 0x28;
            *(float *)((((int)stk + 4) + t2)) = (math_sin_angle16((*(int *)((((((int)stk + 4) + 0xC) + 0x4) + 0x0)))));
            t2 = 0x2C;
            *(float *)((((int)stk + 4) + t2)) = (math_sin_angle16((*(int *)((((((int)stk + 4) + 0xC) + 0x8) + 0x0)))));
            t2 = 0x24;
            u24 = *(float *)((((int)stk + 4) + t2));
            t2 = 0x24;
            *(float *)((((int)stk + 4) + t2)) = (u24 * ((((struct o0_float *)0xC2A2B00)->v)));
            t2 = 0x28;
            u26 = *(float *)((((int)stk + 4) + t2));
            t2 = 0x28;
            *(float *)((((int)stk + 4) + t2)) = (u26 * ((((struct o0_float *)0xC2A2B00)->v)));
            t2 = 0x2C;
            u28 = *(float *)((((int)stk + 4) + t2));
            t2 = 0x2C;
            *(float *)((((int)stk + 4) + t2)) = (u28 * ((((struct o0_float *)0xC2A2B00)->v)));
            t2 = 0x18;
            *(float *)((((int)stk + 4) + t2)) = ((((struct o4_float *)0xC2A2B00)->v));
            t2 = 0x1C;
            *(float *)((((int)stk + 4) + t2)) = ((((struct o4_float *)0xC2A2B00)->v));
            t2 = 0x20;
            *(float *)((((int)stk + 4) + t2)) = ((((struct o4_float *)0xC2A2B00)->v));
            t2 = (FUN_0c15acb0((a4 + 0x28), (((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18)));
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
        }
    }
    return (FUN_0c03f346(a4, a5, a6, a7));
}
