/* game/player: functions 0C10B6E4-0C10C7FA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
extern int FUN_0c056e44();
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
int FUN_0c10c280(int a4, int a5, int a6, float f4);

int FUN_0c10c280(int a4, int a5, int a6, float f4)
{
    int stk[7];
    register int t0;
    register int t6;
    register int t10;
    register int t16;
    register int t28;
    register int t34;
    register int t44;
    register int t45;
    register int t47;
    register int t62;
    register int t64;
    register int t65;
    register int t72;
    register int t83;
    register int t89;
    register int t84;
    register int t93;
    register int t37;
    register int t77;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t6 = *(signed char *)((a4 + 0x16));
                if (t6 != 0) {
                    t37 = t6;
                    if (t6 != 1) {
                    } else {
                        *(unsigned int *)0xC474404 = (FUN_0c10527c((*(int *)0xC474404), 0x0, ((*(int *)0xC474714) - 1)));
                        t10 = FUN_0c104d70();
                        if (t10 != 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct o16_uchar *)(a4))->v) = 0x0;
                            *(unsigned short *)((a4 + 0x1E)) = (*(int *)0xC474404);
                        }
                        t16 = FUN_0c104db8();
                        t37 = t16;
                        if (t16 != 0) {
                            (((struct o15_uchar *)(a4))->v) = 0x63;
                            (((struct o16_uchar *)(a4))->v) = 0x0;
                            t37 = 0x16;
                        }
                    }
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    *(int *)((int)stk + 0) = 0x76;
                    FUN_0c117944(0x76);
                    *(unsigned int *)0xC474404 = (FUN_0c10527c((*(int *)0xC474404), 0x0, ((*(int *)0xC474714) - 1)));
                    t28 = FUN_0c104d70();
                    if (t28 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        *(unsigned short *)((a4 + 0x1E)) = (*(int *)0xC474404);
                    }
                    t34 = FUN_0c104db8();
                    t37 = t34;
                    if (t34 != 0) {
                        (((struct o15_uchar *)(a4))->v) = 0x63;
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t37 = 0x16;
                    }
                }
                return t37;
            }
            if (t0 == 3) {
                return FUN_0c10c112(a4, (*(short *)((a4 + 0x1E))));
            }
            if (t0 == 99) {
                (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x4));
                (((struct o14_uchar *)(((((struct o18_int *)0xC474B8C)->v))))->v) = 0x63;
                (((struct o18_uint *)0xC474B8C)->v) = 0x0;
                t44 = ((int (*)(int, int))(FUN_0c056e44))(0x23, 0x5);
                return FUN_0c10b6e4(a4);
            }
            return t0;
        }
        t45 = *(signed char *)((a4 + 0x16));
        if (t45 != 0) {
            if (t45 != 1) {
                t77 = t45;
                if (t45 != 2) {
                } else {
                    t47 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t47 + 0x1);
                    t77 = 0x20;
                    if ((int)(short)(t47 + 0x1) > (int)0x3C) {
                        (((struct o18_uint *)0xC474B8C)->v) = (FUN_0c119ba4(0x40, 0x0));
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t77 = 0x16;
                    }
                }
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x0;
                (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
                (((struct o0_uint *)0xC474B8C)->v) = 0x0;
                t62 = ((int (*)(int, int, int))(FUN_0c056e44))(0x23, 0x4, a6);
                FUN_0c115120(0x7, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                t64 = (((struct o0_int *)0xC5325B0)->v);
                (((struct o98_float *)(t64))->v) = 8.0f;
                (((struct o94_float *)(t64))->v) = 8.0f;
                t65 = (((struct o4_int *)0xC5325B0)->v);
                (((struct o98_float *)(t65))->v) = 8.0f;
                (((struct o94_float *)(t65))->v) = 8.0f;
                t77 = 0x94;
            }
        } else {
            t72 = *(signed char *)0xC535BAD;
            t77 = t72;
            if (t72 != 1) {
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t77 = 0x16;
            }
        }
        return t77;
    }
    t83 = *(signed char *)((a4 + 0x16));
    if (t83 != 0) {
        if (t83 != 1) {
            if (t83 != 2) {
                t89 = t83;
                if (t83 != 3) {
                } else {
                    t84 = FUN_0c05f22c(0x3FCF);
                    t89 = t84;
                    if (t84 == 0) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t89 = 0x16;
                    }
                }
                return t89;
            }
            t93 = FUN_0c117d54();
            if ((int)t93 >= 0) {
                return t93;
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return FUN_0c117e76();
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        *(int *)((int)stk + 0) = 0x76;
        return (FUN_0c117944(0x76));
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}
