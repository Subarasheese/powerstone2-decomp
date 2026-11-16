/* Straight-line functions with calls and guards (batch gen_kh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c052cf8(int, int, int);
int FUN_0c187798(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c055c60(int a4, int a5);

int FUN_0c055c60(int a4, int a5)
{
    int stk[33];
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t8;
    register int t56;
    register int t57;
    register float u58;
    register float u51;
    int t15;
    register int t30;
    register int t37;
    register int t60;
    register int t3;
    register float u6;
    register float u7;
    register float u44;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = a5;
    t1 = 0xC532498;
    t2 = 0xC532498;
    t4 = 0xC532498;
    t5 = 0x0;
    for (;;) {
        t8 = *(int *)(((int)stk + 0));
        t56 = ((t8 * 0x3938) + 0xC532498);
        t57 = t0;
        u58 = u6;
        if ((*(signed char *)((((t8 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            u6 = ((((struct o2C_float *)(((t8 * 0x3938) + 0xC532498)))->v));
            u7 = (*(float *)0xC54109C);
            u7 = (u7 + -400.0f);
            t56 = ((t8 * 0x3938) + 0xC532498);
            t57 = t0;
            u51 = u6;
            if (u6 > u7) {
                t3 = t5;
                t3 = (t3 << 1);
                t15 = *(signed char *)((t1 + 0x2));
                t3 = (t3 + t5);
                t3 = (t3 << 2);
                t3 = (t3 + (((int)stk + 0) + 0xC));
                if ((t15 != 12) && (t15 != 13)) {
                    u7 = ((((struct o28_float *)(t4))->v));
                    t5 = (t5 + 0x1);
                    *(float *)((t3 + 0x0)) = u7;
                    u7 = ((((struct o2C_float *)(t4))->v));
                    u7 = (u7 + -50.0f);
                    t56 = ((((t5 << 1) + t5) << 2) + (((int)stk + 0) + 0xC));
                    t5 = (t5 + 0x1);
                    (((struct o4_float *)(t3))->v) = u7;
                    u7 = ((((struct o30_float *)(t4))->v));
                    (((struct o8_float *)(t3))->v) = u7;
                    u7 = ((((struct o28_float *)(t4))->v));
                    *(float *)((t56 + 0x0)) = u7;
                    u7 = ((((struct o2C_float *)(t4))->v));
                    u7 = (u7 + 250.0f);
                    (((struct o4_float *)(t56))->v) = u7;
                    u7 = ((((struct o30_float *)(t4))->v));
                    (((struct o8_float *)(t56))->v) = u7;
                    t57 = t0;
                    u44 = u6;
                } else {
                    t0 = t3;
                    thunk_FUN_0c058310((((((struct oC4_int *)(t2))->v)) + 0x28), t0);
                    u7 = ((((struct o4_float *)(((((t5 << 1) + t5) << 2) + (((int)stk + 0) + 0xC))))->v));
                    t30 = ((((t5 << 1) + t5) << 2) + (((int)stk + 0) + 0xC));
                    t5 = (t5 + 0x1);
                    t0 = t5;
                    t0 = (t0 << 1);
                    u7 = (u7 - 100.0f);
                    t0 = (t0 + t5);
                    t0 = (t0 << 2);
                    t0 = (t0 + (((int)stk + 0) + 0xC));
                    (((struct o4_float *)(t30))->v) = u7;
                    thunk_FUN_0c058310((((((struct oC4_int *)(t2))->v)) + 0x28), t0);
                    u7 = ((((struct o4_float *)(((((t5 << 1) + t5) << 2) + (((int)stk + 0) + 0xC))))->v));
                    t37 = ((((t5 << 1) + t5) << 2) + (((int)stk + 0) + 0xC));
                    t5 = (t5 + 0x1);
                    u7 = (u7 + 100.0f);
                    (((struct o4_float *)(t37))->v) = u7;
                }
                u51 = u44;
            }
            u58 = u51;
        }
        t60 = *(int *)(((int)stk + 0));
        u6 = u58;
        t0 = t57;
        t2 = (t2 + 0x3938);
        *(unsigned int *)(((int)stk + 0)) = (t60 + 0x1);
        t4 = (t4 + 0x3938);
        t1 = (t1 + 0x3938);
        if ((int)(t60 + 0x1) >= (int)0x4) {
            break;
        }
    }
    *(volatile int *)(((int)stk + 4));
    FUN_0c187798(t56, t0);
    return (FUN_0c052cf8((*(int *)(((int)stk + 8))), (t5 + 0x1), (((int)stk + 0) + 0xC)));
}
