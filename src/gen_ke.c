/* Straight-line functions with calls and guards (batch gen_ke): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c058542(int, int, float);
int FUN_0c058716(int, int);
int FUN_0c064f80(int);
int FUN_0c16328c(int, int, int, float);
int FUN_0c1636ae(int, int, int);
int FUN_0c169568(int, int, int);
int FUN_0c187798(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c1697b8(int a4, int a5, int a6, int a7);

int FUN_0c1697b8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register float u16;
    register int t17;
    register int t24;
    register int t35;
    register int t36;
    register int t38;
    register float u47;
    register int t48;
    register int t55;
    register int t59;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                FUN_0c16328c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x2, 0.100000001f);
                t59 = (FUN_0c1636ae((a4 + 0x28), 0x0, (*(signed char *)((a4 + 0x1)))));
            } else {
                t59 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            FUN_0c169568(a4, 0x0, 0x71C);
            FUN_0c169568(a4, 0x1, 0xFFFFF1C8);
            FUN_0c169568(a4, 0x2, 0xFFFFF556);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            if (((((struct o48_float *)(a4))->v)) > 1.20000005f) {
                (((struct o48_float *)(a4))->v) = 1.20000005f;
            }
            u16 = (((struct o48_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = u16;
            (((struct o40_float *)(a4))->v) = u16;
            t17 = FUN_0c064f80(a4);
            if (t17 != 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            } else {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            t24 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t24 - 1);
            t59 = (short)(t24 - 1);
            if ((int)(short)(t24 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t59 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        FUN_0c187798((((short)t0 * (short)0x3938) + 0xC532498), a5, a6);
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
        t35 = FUN_0c058716(a4, ((int)stk + 0));
        t36 = t35;
        if ((int)t35 > (int)0x2E38) {
            t36 = 0x2E38;
        }
        t38 = t36;
        if ((int)t36 < (int)0x11C7) {
            t38 = 0x11C7;
        }
        *(unsigned int *)((a4 + 0x34)) = t38;
        FUN_0c058542(a4, 0x11C7, 20.0f);
        FUN_0c169568(a4, 0x0, 0x71C);
        FUN_0c169568(a4, 0x1, 0xFFFFF1C8);
        FUN_0c169568(a4, 0x2, 0xFFFFF556);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
        if (((((struct o48_float *)(a4))->v)) > 1.20000005f) {
            (((struct o48_float *)(a4))->v) = 1.20000005f;
        }
        u47 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u47;
        (((struct o40_float *)(a4))->v) = u47;
        t48 = FUN_0c064f80(a4);
        if (t48 != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        t55 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t55 - 1);
        t59 = (short)(t55 - 1);
        if ((int)(short)(t55 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t59 = 0x14;
        }
    }
    return t59;
}
