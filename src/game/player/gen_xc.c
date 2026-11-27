/* Straight-line functions with calls and guards (batch gen_xc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c056e44(int, int);
int FUN_0c05f22c(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c10527c(int, int, int);
int FUN_0c10b6e4(int);
int FUN_0c10c112(int, int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c118412(int);
int FUN_0c119ba4(int, int);
int FUN_0c10c280(int a4, int a5, int a6, int a7, float f4);

int FUN_0c10c280(int a4, int a5, int a6, int a7, float f4)
{
    int stk[7];
    register int t0;
    register int t6;
    register int t23;
    register int t14;
    register int t20;
    register int t30;
    register int t32;
    register int t49;
    register int t50;
    register int t57;
    register int t68;
    register int t74;
    register int t69;
    register int t78;
    register int t62;
    register int R1004;

    R1004 = *(int *)((int)stk + 0);

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t6 = *(signed char *)((a4 + 0x16));
                if (t6 != 0) {
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    R1004 = 0x76;
                    FUN_0c117944(0x76);
                }
                t23 = t6;
                if ((t6 == 0) || (t6 == 1)) {
                    *(unsigned int *)0xC474404 = (FUN_0c10527c((*(int *)0xC474404), 0x0, ((*(int *)0xC474714) - 1)));
                    t14 = FUN_0c104d70();
                    if (t14 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        *(unsigned short *)((a4 + 0x1E)) = (*(int *)0xC474404);
                    }
                    t20 = FUN_0c104db8();
                    t23 = t20;
                    if (t20 != 0) {
                        (((struct o15_uchar *)(a4))->v) = 0x63;
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t23 = 0x16;
                    }
                }
                return t23;
            }
            if (t0 == 3) {
                return FUN_0c10c112(a4, (*(short *)((a4 + 0x1E))));
            }
            if (t0 == 99) {
                (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x4));
                (((struct o14_uchar *)(((((struct o18_int *)0xC474B8C)->v))))->v) = 0x63;
                (((struct o18_uint *)0xC474B8C)->v) = 0x0;
                FUN_0c056e44(0x23, 0x5);
                return FUN_0c10b6e4(a4);
            }
            return t0;
        }
        t30 = *(signed char *)((a4 + 0x16));
        if (t30 != 0) {
            if (t30 != 1) {
                t62 = t30;
                if (t30 != 2) {
                } else {
                    t32 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t32 + 0x1);
                    t62 = 0x20;
                    if ((int)(short)(t32 + 0x1) > (int)0x3C) {
                        (((struct o18_uint *)0xC474B8C)->v) = (FUN_0c119ba4(0x40, 0x0));
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t62 = 0x16;
                    }
                }
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x0;
                (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
                (((struct o0_uint *)0xC474B8C)->v) = 0x0;
                FUN_0c056e44(0x23, 0x4);
                FUN_0c115120(0x7, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                t49 = (((struct o0_int *)0xC5325B0)->v);
                (((struct o98_float *)(t49))->v) = 8.0f;
                (((struct o94_float *)(t49))->v) = 8.0f;
                t50 = (((struct o4_int *)0xC5325B0)->v);
                (((struct o98_float *)(t50))->v) = 8.0f;
                (((struct o94_float *)(t50))->v) = 8.0f;
                t62 = 0x94;
            }
        } else {
            t57 = *(signed char *)0xC535BAD;
            t62 = t57;
            if (t57 != 1) {
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t62 = 0x16;
            }
        }
        return t62;
    }
    t68 = *(signed char *)((a4 + 0x16));
    if (t68 != 0) {
        if (t68 != 1) {
            if (t68 != 2) {
                t74 = t68;
                if (t68 != 3) {
                } else {
                    t69 = FUN_0c05f22c(0x3FCF);
                    t74 = t69;
                    if (t69 == 0) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t74 = 0x16;
                    }
                }
                return t74;
            }
            t78 = FUN_0c117d54();
            if ((int)t78 >= 0) {
                return t78;
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return FUN_0c117e76();
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        R1004 = 0x76;
        return (FUN_0c117944(0x76));
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}
