/* Straight-line functions with calls and guards (batch gen_td): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c059c7a(int, int);
int FUN_0c100780(int);
int FUN_0c104cc8(int);
int FUN_0c105cec(int);
int FUN_0c1066a4(void);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c105d08(int a4);

int FUN_0c105d08(int a4)
{
    int stk[4];
    register int t0;
    register int t12;
    register int t20;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t32;
    register int t33;
    register int t37;
    register int t39;
    register int t43;
    register int t45;
    register int t47;
    register int R1004;

    R1004 = *(int *)((int)stk + 0);

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
    } else {
        FUN_0c100780(0x0);
        FUN_0c1066a4();
        FUN_0c059c7a(0x18, 0x1);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        t12 = *(signed char *)0xC5324AC;
        t20 = t12;
        if (t12 == 99) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            R1004 = 0x2;
            FUN_0c117944(0x2);
            FUN_0c115120(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            t16 = (((struct o4_int *)0xC5325B0)->v);
            t17 = (((struct o0_int *)0xC5325B0)->v);
            (((struct oA0_float *)(t16))->v) = 1.0f;
            (((struct o9C_float *)(t16))->v) = 1.0f;
            (((struct oA0_float *)(t17))->v) = 1.0f;
            (((struct o9C_float *)(t17))->v) = 1.0f;
            t18 = (((struct o4_int *)0xC5325B0)->v);
            t19 = (((struct o0_int *)0xC5325B0)->v);
            (((struct o98_float *)(t18))->v) = 1.0f;
            (((struct o98_float *)(t19))->v) = 1.0f;
            (((struct o94_float *)(t18))->v) = 1.0f;
            (((struct o94_float *)(t19))->v) = 1.0f;
            t20 = 0x94;
        }
        return t20;
    } else {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 == 4) {
                } else {
                    if (t0 != 5) {
                        if (t0 == 6) {
                            return FUN_0c105cec(a4);
                        }
                        return t0;
                    }
                    t32 = *(signed char *)((a4 + 0x17));
                    switch (t32) {
                    case 0:
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        R1004 = 0x3;
                        return (FUN_0c117944(0x3));
                    case 1:
                        t33 = FUN_0c117d54();
                        if ((int)t33 < 0) {
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            return FUN_0c117e76();
                        }
                        return t33;
                    case 2:
                        break;
                    default:
                        return t32;
                    }
                }
                t37 = FUN_0c104cc8(0x3FCF);
                t39 = t37;
                if (t37 != 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    t39 = 0x17;
                }
                return t39;
            }
            t43 = FUN_0c117d54();
            if ((int)t43 < 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return FUN_0c117e76();
            }
            return t43;
        }
        t45 = *(signed char *)0xC535BAD;
        t47 = t45;
        if (t45 == 1) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t47 = 0x16;
        }
        return t47;
    }
}
