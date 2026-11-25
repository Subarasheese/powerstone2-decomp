/* Straight-line functions with calls and guards (batch gen_adt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02568a(void);
int FUN_0c02aa9e(void);
int FUN_0c02b692(int, int, int);
int FUN_0c02b7fc(void);
int FUN_0c0573cc(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c025f5c(float f4);

int FUN_0c025f5c(float f4)
{
    int stk[37];
    register int t2;
    register int t76;
    register int t4;
    register int t12;
    register int t18;
    register int t25;
    int t35;
    int t5;
    int t30;

    FUN_0c02b7fc();
    FUN_0c02568a();
    t2 = FUN_0c022050();
    t76 = t2;
    if (t2 == 0) {
    } else {
        FUN_0c0220c4((((int)stk + 0) + 0x8), ((int)stk + 0), (((int)stk + 0) + 0x4));
        t4 = *(signed char *)(((int)stk + 8));
        if ((t4 == 107) && (t5 = *(signed char *)(((int)stk + 4)), t5 == 1)) {
            t12 = 0x0;
            for (;;) {
                FUN_0c1864e0((*(int *)0xC309994), (t12 + 0xC30AD5C), 0x1);
                t12 = (t12 + 0x1);
                if ((int)t12 >= (int)0x6) {
                    break;
                }
            }
            *(unsigned char *)((t12 + 0xC30AD5C)) = 0x0;
            FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
            t18 = 0x0;
            for (;;) {
                if ((int)t18 >= (int)(unsigned char)(*(signed char *)(((int)stk + 0)))) {
                    break;
                }
                FUN_0c1864e0((*(int *)0xC309994), (t18 + 0xC309C74), 0x1);
                t18 = (t18 + 0x1);
            }
            *(unsigned char *)((t18 + 0xC309C74)) = 0x0;
            FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
            t25 = 0x0;
            for (;;) {
                if ((int)t25 >= (int)(unsigned char)(*(signed char *)(((int)stk + 0)))) {
                    break;
                }
                FUN_0c1864e0((*(int *)0xC309994), (t25 + 0xC309C86), 0x1);
                t25 = (t25 + 0x1);
            }
            *(unsigned char *)((t25 + 0xC309C86)) = 0x0;
            t76 = (FUN_0c02b692(0xC30AD5C, 0xC309C74, 0xC309C86));
        } else {
            if ((t4 == 101) && (t30 = *(signed char *)(((int)stk + 4)), t30 == 1)) {
                FUN_0c1864e0((*(int *)0xC309994), (((int)stk + 0) + 0xC), 0x1);
                t35 = *(signed char *)(((int)stk + 12));
                if ((t35 != 0) && (t35 != 3)) {
                    if (t35 != 1) {
                        t76 = t35;
                        if (t35 != 2) {
                        } else {
                            (((struct o0_uchar *)0xC30985A)->v) = 0x7;
                            (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                            (((struct o1F_uchar *)0xC3053F8)->v) = 0x0;
                            t76 = (FUN_0c02568a());
                        }
                    } else {
                        (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x76;
                        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                        *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
                        *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x1;
                        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                        (((struct o0_uchar *)0xC30985A)->v) = 0x2;
                        (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                        *(unsigned short *)0xC30EF6C = 0x0;
                        t76 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
                    }
                } else {
                    (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
                    (((struct o1_uchar *)0xC30985A)->v) = 0x1;
                    (((struct o0_uint *)0xC3053F8)->v) = 0x3C;
                    t76 = t35;
                }
            } else {
                if ((*(signed char *)0xC30AF9A) != 0) {
                    t76 = (FUN_0c02aa9e());
                } else {
                    t76 = (FUN_0c0222a4((((int)stk + 0) + 0x8), ((int)stk + 0), (((int)stk + 0) + 0x4)));
                }
            }
        }
    }
    return t76;
}
