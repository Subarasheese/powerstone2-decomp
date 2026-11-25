/* game/object: functions 0C03EEE0-0C03F40C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o114_int { char p[0x114]; int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o3720_uchar { char p[0x3720]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c039f82(void);
int FUN_0c03f4d4(void);
int FUN_0c03f64c(void);
int FUN_0c03f7ce(void);
int FUN_0c03f950(void);
int FUN_0c03fa1c(int, int);
int FUN_0c03faf8(void);
int FUN_0c03fbcc(int);
int FUN_0c03fc28(void);
int FUN_0c03fca8(int, int);
int FUN_0c067784(void);
int memset(int, int, int);
int FUN_0c03eee0(void);
int FUN_0c03efec(void);
int FUN_0c03eff6(void);
int FUN_0c03f004(void);
int FUN_0c03f06a(int a4);
int FUN_0c03f0aa(void);
int FUN_0c03f136(void);
int FUN_0c03f258(int a4, int a5);
int FUN_0c03f2dc(int a4, int a5, int a6);
int FUN_0c03f346(int a4, int a5, int a6, int a7);

int FUN_0c03eee0(void)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t13;
    register int t14;
    register int t15;

    FUN_0c039f82();
    FUN_0c03f950();
    t3 = FUN_0c03fc28();
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x4);
    t4 = (((int)stk + 0) + 0x4);
    t5 = 0xC532498;
    for (;;) {
        if ((unsigned int)t4 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x8)) {
            break;
        }
        t3 = (*(signed char *)((t5 + 0x2)));
        *(unsigned char *)((t4 + 0x0)) = t3;
        t3 = 0x3720;
        t3 = (*(signed char *)((t5 + t3)));
        t5 = (t5 + 0x3938);
        *(unsigned char *)((t4 + 0x1)) = t3;
        t4 = (t4 + 0x2);
    }
    memset(0xC532498, 0x0, 0x3938);
    memset(0xC535DD0, 0x0, 0x3938);
    memset(0xC539708, 0x0, 0x3938);
    memset(0xC53D040, 0x0, 0x3938);
    *(unsigned int *)0xC532434 = 0xC532498;
    (((struct o8_uint *)0xC532498)->v) = 0x0;
    (((struct oC_uint *)0xC532498)->v) = 0xC535DD0;
    (((struct o8_uint *)0xC535DD0)->v) = 0xC532498;
    (((struct oC_uint *)0xC535DD0)->v) = 0xC539708;
    (((struct o8_uint *)0xC539708)->v) = 0xC535DD0;
    (((struct oC_uint *)0xC539708)->v) = 0xC53D040;
    (((struct o8_uint *)0xC53D040)->v) = 0xC539708;
    (((struct oC_uint *)0xC53D040)->v) = 0x0;
    (((struct o1_uchar *)0xC532498)->v) = 0x0;
    (((struct o1_uchar *)0xC535DD0)->v) = 0x1;
    (((struct o1_uchar *)0xC539708)->v) = 0x2;
    (((struct o1_uchar *)0xC53D040)->v) = 0x3;
    (((struct o10_uint *)0xC532498)->v) = 0xC535DD0;
    (((struct o10_uint *)0xC535DD0)->v) = 0xC532498;
    (((struct o10_uint *)0xC539708)->v) = 0xC53D040;
    (((struct o10_uint *)0xC53D040)->v) = 0xC539708;
    (((struct o0_uchar *)0xC53D040)->v) = 0x0;
    (((struct o0_uchar *)0xC539708)->v) = 0x0;
    (((struct o0_uchar *)0xC535DD0)->v) = 0x0;
    (((struct o0_uchar *)0xC532498)->v) = 0x0;
    (((struct o24_ushort *)0xC532498)->v) = 0x1;
    (((struct o24_ushort *)0xC535DD0)->v) = 0x2;
    (((struct o24_ushort *)0xC539708)->v) = 0x3;
    (((struct o24_ushort *)0xC53D040)->v) = 0x4;
    t13 = 0x24;
    t14 = (*(int *)(((int)stk + 0)));
    t15 = 0xC532498;
    for (;;) {
        if ((unsigned int)t15 >= (unsigned int)0xC540978) {
            break;
        }
        t13 = (*(signed char *)((t14 + 0x0)));
        *(unsigned char *)((t15 + 0x2)) = t13;
        t13 = (*(signed char *)((t14 + 0x1)));
        (((struct o3720_uchar *)(t15))->v) = t13;
        t13 = (FUN_0c03fa1c(t15, 0x13));
        t13 = (FUN_0c03fca8(t15, 0x2));
        t15 = (t15 + 0x3938);
        t14 = (t14 + 0x2);
    }
    return t13;
}

int FUN_0c03efec(void)
{
    return memset(0xC540978, 0x0, 0x784);
}

int FUN_0c03eff6(void)
{
    FUN_0c03f0aa();
    FUN_0c03efec();
    return FUN_0c03eee0();
}

int FUN_0c03f004(void)
{
    register int t0;

    t0 = (((struct o0_int *)0xC532484)->v);
    if (t0 == 0) {
        return 0x0;
    }
    (((struct o0_uint *)0xC532484)->v) = (*(int *)((t0 + 0x8)));
    *(unsigned short *)0xC5426C0 = ((*(short *)0xC5426C0) + 0x8);
    (((struct o24_ushort *)(t0))->v) = (*(short *)0xC5426C0);
    (((struct o4_uint *)0xC532484)->v) = (((((struct o4_int *)0xC532484)->v)) - 1);
    return t0;
}

int FUN_0c03f06a(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0xC));
    memset(a4, 0x0, 0x430);
    *(unsigned int *)((a4 + 0xC)) = t0;
    *(unsigned int *)((a4 + 0x8)) = ((((struct o0_int *)0xC532484)->v));
    (((struct o0_uint *)0xC532484)->v) = a4;
    *(unsigned short *)0xC5426C0 = ((*(short *)0xC5426C0) + 0x8);
    (((struct o24_ushort *)(a4))->v) = (*(short *)0xC5426C0);
    (((struct o4_uint *)0xC532484)->v) = (((((struct o4_int *)0xC532484)->v)) + 0x1);
    return 0x24;
}

int FUN_0c03f0aa(void)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c03f4d4();
    FUN_0c03faf8();
    FUN_0c03f64c();
    FUN_0c03f7ce();
    (((struct o0_uint *)0xC532484)->v) = 0xC4FDEB4;
    t0 = 0x1;
    t1 = 0xC4FDEB4;
    t2 = 0xC4FDEB4;
    for (;;) {
        memset(t1, 0x0, 0x430);
        if (t0 != 0xC8) {
            *(unsigned int *)((t2 + 0x8)) = (t2 + 0x430);
        }
        t1 = (t1 + 0x430);
        t2 = (t2 + 0x430);
        t0 = (t0 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)0xC532434) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC532434 + t0)) = 0x0;
        *(unsigned int *)((0xC53245C + t0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x28) {
            break;
        }
    }
    (((struct o4_uint *)0xC532484)->v) = 0xC8;
    return FUN_0c067784();
}

int FUN_0c03f136(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xC532434;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        t4 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t5 = t4;
        for (;;) {
            if (t5 == 0) {
                break;
            }
            t4 = (*(int *)((t5 + 0xC)));
            t3 = (FUN_0c03f06a(t5));
            t5 = t4;
        }
        t3 = t1;
        *(unsigned int *)((0xC532434 + t3)) = 0x0;
        t2 = (t2 + 0x1);
        t3 = 0xC53245C;
        *(unsigned int *)((t1 + t3)) = 0x0;
        t1 = (t1 + 0x4);
        if ((int)(short)t2 >= (int)0xA) {
            break;
        }
    }
    return t3;
}


int FUN_0c03f2dc(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f004();
    if (t0 == 0) {
        return 0x0;
    }
    *(unsigned char *)((t0 + 0x0)) = a4;
    if (a6 != 0) {
        if (a6 != 1) {
        } else {
            t1 = *(int *)((a5 + 0xC));
            if (t1 == 0) {
                *(unsigned int *)(((a4 << 2) + 0xC53245C)) = t0;
            } else {
                *(unsigned int *)((t1 + 0x8)) = t0;
            }
            *(unsigned int *)((t0 + 0xC)) = t1;
            *(unsigned int *)((t0 + 0x8)) = a5;
            *(unsigned int *)((a5 + 0xC)) = t0;
        }
    } else {
        t1 = *(int *)((a5 + 0x8));
        if (t1 == 0) {
            *(unsigned int *)(((a4 << 2) + 0xC532434)) = t0;
        } else {
            *(unsigned int *)((t1 + 0xC)) = t0;
        }
        *(unsigned int *)((t0 + 0x8)) = t1;
        *(unsigned int *)((t0 + 0xC)) = a5;
        *(unsigned int *)((a5 + 0x8)) = t0;
    }
    return t0;
}

int FUN_0c03f346(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        t1 = (((struct oC0_int *)(a4))->v);
        if ((int)t0 >= (int)t1) {
            break;
        }
        t3 = 0xC4;
        t2 = t0;
        t2 = (t2 << 2);
        t3 = (t3 + a4);
        t3 = (t3 + t2);
        t3 = (*(int *)((t3 + 0x0)));
        t4 = ((int (*)(int, int, int, int))((*(int *)((0xC240284 + ((*(signed char *)((t3 + 0x1))) << 2))))))(t3, a5, a6, a7);
        t3 = 0xC4;
        t0 = (t0 + 0x1);
        t3 = (t3 + a4);
        t2 = (t2 + t3);
        *(unsigned int *)((t2 + 0x0)) = 0x0;
    }
    t0 = t1;
    t1 = t2;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)((((struct o114_int *)(a4))->v))) {
            break;
        }
        t1 = t2;
        t1 = (t1 << 2);
        FUN_0c03fbcc((*(int *)((((0x118 + a4) + t1) + 0x0))));
        t0 = 0x118;
        t2 = (t2 + 0x1);
        t0 = (t0 + a4);
        t1 = (t1 + t0);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
    }
    if ((*(int *)((a4 + 0x8))) == 0) {
        t0 = *(int *)((a4 + 0xC));
        *(unsigned int *)((((*(signed char *)((a4 + 0x0))) << 2) + 0xC532434)) = t0;
        if (t0 == 0) {
            *(unsigned int *)((0xC53245C + ((*(signed char *)((a4 + 0x0))) << 2))) = 0x0;
        } else {
            *(unsigned int *)((t0 + 0x8)) = 0x0;
        }
    } else {
        if ((*(int *)((a4 + 0xC))) == 0) {
            t0 = *(int *)((a4 + 0x8));
            *(unsigned int *)((0xC53245C + ((*(signed char *)((a4 + 0x0))) << 2))) = t0;
            *(unsigned int *)((t0 + 0xC)) = 0x0;
        } else {
            *(unsigned int *)(((*(int *)((a4 + 0x8))) + 0xC)) = (*(int *)((a4 + 0xC)));
            *(unsigned int *)(((*(int *)((a4 + 0xC))) + 0x8)) = (*(int *)((a4 + 0x8)));
        }
    }
    return FUN_0c03f06a(a4);
}
