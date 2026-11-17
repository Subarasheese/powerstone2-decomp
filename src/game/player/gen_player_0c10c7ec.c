/* game/player: functions 0C10C7EC-0C10CAAC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c104de4(int, int);
int FUN_0c105384(int, int);
int FUN_0c106510(void);
int FUN_0c10b6f2(int);
int FUN_0c10b70e(int);
int FUN_0c1173a0(void);
int FUN_0c11791c(void);
int FUN_0c117944(int, ...);
int FUN_0c117d14(void);
int FUN_0c118412(int);
int FUN_0c118584(int);
int FUN_0c10c7ec(int a4);
int FUN_0c10c84a(int a4);
int thunk_FUN_0c10ca7e(void);
int FUN_0c10c950(int a4, int a5, int a6, int a7);
int FUN_0c10c9a6(void);
int FUN_0c10c9ce(void);
int FUN_0c10ca3e(void);
int FUN_0c10ca7e(void);

int FUN_0c10c7ec(int a4)
{
    FUN_0c10ca3e();
    return FUN_0c10b6f2(a4);
}

int FUN_0c10c84a(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    t1 = *(int *)0xC474740;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        FUN_0c118584(t1);
        return FUN_0c10b70e(a4);
    }
    *(unsigned int *)0xC474740 = (FUN_0c105384(t1, 0x4));
    t0 = FUN_0c104cc8(0x3000);
    if (t0 != 0) {
        FUN_0c117944(((*(int *)((((*(int *)0xC474740) << 2) + 0xC290D5C)))), ((*(int *)0xC4743DC)));
    }
    t0 = FUN_0c104d70();
    if (t0 == 0) {
        t0 = FUN_0c104de4((*(int *)0xC474740), 0x4);
        t1 = t0;
        if (t0 != 0) {
            if ((*(int *)0xC474740) == 4) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            } else {
                *(unsigned int *)0xC474740 = 0x4;
                t0 = (FUN_0c117944(((*(int *)0xC290D6C))));
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int thunk_FUN_0c10ca7e(void)
{
    return FUN_0c10ca7e();
}

int FUN_0c10c950(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 99) {
                        return t0;
                    }
                    thunk_FUN_0c10ca7e();
                    return FUN_0c03f346(a4);
                }
                return ((int (*)(int, int, int, int))(0xC10C8E0))(a4, a5, a6, a7);
            }
            return FUN_0c10c84a(a4);
        }
        return ((int (*)(int, int, int, int))(0xC10C820))(a4, a5, a6, a7);
    }
    return FUN_0c10c7ec(a4);
}

int FUN_0c10c9a6(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10C950;
        return t0;
    }
    return 0x0;
}

int FUN_0c10c9ce(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return (unsigned char)t0;
            }
            return FUN_0c106510();
        }
        t0 = *(signed char *)0xC541F46;
        if ((unsigned char)t0 != 0) {
            t1 = (unsigned char)t0;
            if ((unsigned char)t0 != 1) {
            } else {
                t0 = *(signed char *)((0x14 + (*(int *)0xC474C0C)));
                if (t0 == 99) {
                    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
            t1 = FUN_0c10c9a6();
            *(unsigned int *)0xC474C0C = t1;
            t0 = t1;
        }
        return t0;
    }
    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
    (((struct o1_uchar *)0xC541F45)->v) = 0x0;
    return 0x0;
}

int FUN_0c10ca3e(void)
{
    register int t3;

    (((struct o0_uint *)0xC474404)->v) = 0x0;
    (((struct o4_uint *)0xC474404)->v) = 0x0;
    (((struct o8_uint *)0xC474404)->v) = 0x0;
    (((struct o28_uint *)0xC474718)->v) = 0x0;
    (((struct o0_uint *)0xC474718)->v) = 0x3;
    (((struct oC_uint *)0xC474B8C)->v) = (FUN_0c117d14());
    (((struct o8_uint *)0xC474B8C)->v) = (FUN_0c11791c());
    (((struct o4_uint *)0xC474B8C)->v) = (FUN_0c1173a0());
    t3 = FUN_0c118412(0x4);
    (((struct o0_uint *)0xC474B8C)->v) = t3;
    return t3;
}

int FUN_0c10ca7e(void)
{
    (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o0_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct oC_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct oC_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o8_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o8_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o4_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o4_uint *)0xC474B8C)->v) = 0x0;
    return 0x14;
}
