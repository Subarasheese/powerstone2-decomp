/* game/save: functions 0C015B58-0C017EF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o4F_uchar { char p[0x4F]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c015c38(int);
int FUN_0c01623a(void);
int FUN_0c016244(void);
int FUN_0c016288(void);
int FUN_0c016334(int, int);
int FUN_0c01643e(int);
int FUN_0c0164ec(int, int);
int thunk_FUN_0c0167cc(void);
int FUN_0c0167da(void);
int FUN_0c016898(void);
int FUN_0c0168fe(void);
int FUN_0c016930(void);
int FUN_0c016978(void);
int FUN_0c0169c2(void);
int FUN_0c016a88(int, int, int, int);
int FUN_0c016c42(int, int, int, int);
int FUN_0c016d00(void);
int FUN_0c017098(void);
int FUN_0c017160(int);
int FUN_0c01746e(void);
int FUN_0c017538(void);
int FUN_0c01760a(void);
int FUN_0c017622(void);
int FUN_0c017a2e(void);
int FUN_0c017be8(int);
int FUN_0c017c1a(void);
int FUN_0c017c70(void);
int FUN_0c017d4c(void);
int FUN_0c017e48(void);
int FUN_0c017e68(void);
int FUN_0c017ed8(void);
int thunk_FUN_0c03f346(int);
int FUN_0c05aab6(int, int);
float math_sin_angle16(int);
int FUN_0c187d24(int, int);
int strlen(int);
int strncpy(int, int, int);
int FUN_0c015cb6(void);
void FUN_0c0167cc(int a4, int a5, int a6, int a7);
int FUN_0c0169cc(int a4, int a5, int a6);
int FUN_0c016b0a(void);
int FUN_0c016b40(void);
int FUN_0c016b98(void);
int FUN_0c016bca(void);
int FUN_0c01718c(void);
int FUN_0c0171cc(void);
void FUN_0c0173bc(int a4, int a5);
int FUN_0c0173e6(void);
int FUN_0c017dc8(int a4);
int FUN_0c017e58(void);


void FUN_0c0167cc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x0));
    if ((unsigned char)t0 == 0) {
        *(unsigned char *)((a5 + 0x0)) = 0x0;
        return;
    }
    ((int (*)(int, int, int, int))(0xC01678E))((a4 + 0x1), a5, t0, a7);
}


int FUN_0c016b0a(void)
{
    register int t2;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t2 = FUN_0c016244();
        if ((int)t2 <= (int)0x1) {
            if ((*(signed char *)(((*(int *)0xC304BA0) + 0x51))) == 0) {
                return FUN_0c017c1a();
            }
            return FUN_0c017c70();
        }
        return t2;
    }
    return 0x4C;
}

int FUN_0c016b40(void)
{
    register int t0;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t0 = FUN_0c016244();
        if ((int)t0 <= (int)0x1) {
            t0 = FUN_0c01643e((*(int *)0xC20BE14));
            if (t0 == 0) {
                return FUN_0c016d00();
            }
            return FUN_0c017c70();
        }
        return FUN_0c016d00();
    }
    return 0x4C;
}

int FUN_0c016b98(void)
{
    register int t0;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t0 = FUN_0c016244();
        if ((int)t0 <= (int)0x1) {
            t0 = FUN_0c01643e((*(int *)0xC20BE18));
            if (t0 == 0) {
                return FUN_0c016d00();
            }
            return FUN_0c017c70();
        }
        return FUN_0c016d00();
    }
    return 0x4C;
}

int FUN_0c016bca(void)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)0xC304BA0;
    if ((*(signed char *)((t0 + 0x4C))) == 0) {
        if ((*(signed char *)0xC304C24) != 0) {
            t1 = 0x2;
            t2 = 0xC304C24;
            t3 = (unsigned char)(*(signed char *)((t0 + 0x4D)));
        } else {
            t4 = *(signed char *)((t0 + 0x50));
            t1 = (FUN_0c016334(0xC304BA4, (unsigned char)t4));
            t2 = 0xC304BA4;
            t3 = (unsigned char)t4;
        }
        t0 = strlen(t2);
        if (((int)t0 > (int)t3) && (t1 != 0)) {
            *(unsigned char *)(((t3 + t2) + 0x0)) = 0x0;
            FUN_0c187d24((t3 + t2), ((t3 + t1) + t2));
            (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
            return FUN_0c017c70();
        }
        return t0;
    }
    return 0x4C;
}

int FUN_0c01718c(void)
{
    register int t2;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t2 = FUN_0c016288();
        if (t2 != 0) {
            return FUN_0c016b40();
        }
        return FUN_0c016d00();
    }
    return 0x4C;
}

int FUN_0c0171cc(void)
{
    register int t2;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t2 = FUN_0c016288();
        if (t2 != 0) {
            return FUN_0c016b98();
        }
        return FUN_0c016d00();
    }
    return 0x4C;
}

void FUN_0c0173bc(int a4, int a5)
{
    register int t0;
    int t2;

    t0 = *(int *)0xC304BA0;
    if (((*(signed char *)((t0 + 0x4C))) == 0) && (t2 = *(signed char *)0xC304C24, t2 == 0)) {
        if ((*(signed char *)((t0 + 0x50))) != 0) {
            (((struct o50_uchar *)(t0))->v) = 0x0;
            (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
        }
    }
}

int FUN_0c0173e6(void)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t0 = FUN_0c01623a();
        if (t0 == 0) {
            return FUN_0c016bca();
        }
        t0 = *(int *)0xC304BA0;
        if ((*(signed char *)0xC304C24) != 0) {
            t1 = 0xC304C24;
            t2 = (unsigned char)(*(signed char *)((t0 + 0x4D)));
        } else {
            t1 = 0xC304BA4;
            t2 = (unsigned char)(*(signed char *)((t0 + 0x50)));
        }
        return FUN_0c0164ec(t1, t2);
    }
    return 0x4C;
}

int FUN_0c017dc8(int a4)
{
    register int t0;
    register float u9;
    register float u13;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
    u9 = *(float *)0xC017E9C;
    u13 = u9;
    u13 = u13 + u9 * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)));
    (((struct oB0_float *)(a4))->v) = u13;
    if ((*(int *)(((*(int *)0xC304BA0) + 0x4))) != 0) {
        return thunk_FUN_0c03f346(a4);
    }
    return 0xB0;
}

int FUN_0c017e58(void)
{
    register int t0;

    t0 = *(int *)0xCA0001C;
    return ((int (*)(void))(t0))();
}
