/* Straight-line functions with calls and guards (batch gen_wk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c058542(int, float);
int FUN_0c058716(int, int);
int FUN_0c064f80(int);
int FUN_0c16328c(int, int, int, float);
int FUN_0c1636ae(int, int, int);
int FUN_0c169568(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c1697b8(int a4, int a5, int a6, int a7, float f4);

int FUN_0c1697b8(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t19;
    register int t12;
    register int t13;
    register int t15;
    register float u26;
    register int t27;
    register int t34;
    register int t38;
    register int t8;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    t19 = 0;
    switch (t1) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0x380C + (((short)t0 * (short)0x3938) + 0xC532498))); }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
        t12 = FUN_0c058716(a4, ((int)stk + 0));
        t13 = t12;
        if ((int)t12 > (int)0x2E38) {
            t13 = 0x2E38;
        }
        t15 = t13;
        if ((int)t13 < (int)0x11C7) {
            t15 = 0x11C7;
        }
        *(unsigned int *)((a4 + 0x34)) = t15;
        FUN_0c058542(a4, 20.0f);
        t19 = 1;
        break;
    case 1:
        t19 = 1;
        break;
    case 2:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c16328c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x2, 0.100000001f);
        t8 = (FUN_0c1636ae((a4 + 0x28), 0x0, (*(signed char *)((a4 + 0x1)))));
        break;
    default:
        t8 = (FUN_0c03f346(a4, a5, a6, a7));
        break;
    }
    if (t19) {
        FUN_0c169568(a4, 0x0, 0x71C);
        FUN_0c169568(a4, 0x1, 0xFFFFF1C8);
        FUN_0c169568(a4, 0x2, 0xFFFFF556);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
        if (((((struct o48_float *)(a4))->v)) > 1.20000005f) {
            (((struct o48_float *)(a4))->v) = 1.20000005f;
        }
        u26 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u26;
        (((struct o40_float *)(a4))->v) = u26;
        t27 = FUN_0c064f80(a4);
        if (t27 != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        t34 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t34 - 1);
        t38 = (short)(t34 - 1);
        if ((int)(short)(t34 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t38 = 0x14;
        }
    } else {
        t38 = t8;
    }
    return t38;
}
