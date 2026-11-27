/* game/player: functions 0C109C1C-0C10B07E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c056e44(int, int);
int FUN_0c05a080(int, int);
int FUN_0c05f22c(int);
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c10527c(int, int, int);
int FUN_0c105304(int, int, int);
int FUN_0c106510(void);
int FUN_0c10ae02(int, int, int, int);
int FUN_0c10b6a8(int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1173a0(void);
int FUN_0c11791c(void);
int FUN_0c117944(int, ...);
int FUN_0c117a6e(int, ...);
int FUN_0c117d14(void);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c118412(int);
int FUN_0c119ba4(int, int);
int FUN_0c11e28e(int);
int FUN_0c11ea4e(int);
int nlRand(void);
int FUN_0c109c1c(int a4);
int FUN_0c109c2a(int a4);
int FUN_0c109c38(int a4);
int FUN_0c10a46e(int a4, int a5, int a6, int a7);
int FUN_0c10a506(int a4, int a5, int a6, int a7, float f4);
int FUN_0c10ab7c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c10add4(int a4);
int thunk_FUN_0c10b050(void);
int FUN_0c10af02(int a4, int a5, int a6, int a7);
int FUN_0c10af4c(void);
int FUN_0c10af74(void);
int FUN_0c10b01e(void);
int FUN_0c10b050(void);

int FUN_0c109c1c(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c109c2a(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x2;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c109c38(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x63;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c10a46e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 99) {
                                return t0;
                            }
                            return ((int (*)(int, int, int, int))(0xC10A43E))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC10A314))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC10A0C0))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC10A01A))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC109DF4))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC109CB6))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC109CB2))(a4, a5, a6, a7);
}



int FUN_0c10add4(int a4)
{
    FUN_0c10b01e();
    return FUN_0c109c1c(a4);
}

int thunk_FUN_0c10b050(void)
{
    return FUN_0c10b050();
}

int FUN_0c10af02(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 99) {
                    return t0;
                }
                thunk_FUN_0c10b050();
                return FUN_0c03f346(a4);
            }
            return FUN_0c10ae02(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC10ADE4))(a4, a5, a6, a7);
    }
    return FUN_0c10add4(a4);
}

int FUN_0c10af4c(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10AF02;
        return t0;
    }
    return 0x0;
}

int FUN_0c10af74(void)
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
            if ((unsigned char)t0 != 1) {
                if ((unsigned char)t0 != 2) {
                } else {
                    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
                }
                t1 = (unsigned char)t0;
            } else {
                t0 = *(signed char *)((0x14 + (*(int *)0xC474C0C)));
                if (t0 == 99) {
                    (((struct o1_uchar *)0xC541F45)->v) = 0x2;
                    *(unsigned int *)0xC474C0C = 0x0;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
            (((struct o2_uchar *)0xC541F45)->v) = 0x0;
            t1 = FUN_0c10af4c();
            *(unsigned int *)0xC474C0C = t1;
            t0 = t1;
        }
        return t0;
    }
    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
    (((struct o1_uchar *)0xC541F45)->v) = 0x0;
    return 0x0;
}

int FUN_0c10b01e(void)
{
    register int t3;

    (((struct o0_uint *)0xC474718)->v) = 0x2;
    (((struct o24_uint *)0xC474718)->v) = 0x0;
    (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x5));
    (((struct oC_uint *)0xC474B8C)->v) = (FUN_0c117d14());
    (((struct o8_uint *)0xC474B8C)->v) = (FUN_0c11791c());
    t3 = FUN_0c1173a0();
    (((struct o4_uint *)0xC474B8C)->v) = t3;
    return t3;
}

int FUN_0c10b050(void)
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
