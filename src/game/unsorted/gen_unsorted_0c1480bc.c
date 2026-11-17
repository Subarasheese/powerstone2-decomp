/* game/unsorted: functions 0C1480BC-0C148468, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_float { char p[0x41C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f444(int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c07d15c(int);
int FUN_0c07e2f4(int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c0b21d8(void);
int FUN_0c0b2264(int, int, float);
int FUN_0c1480bc(int a4, int a5);
int FUN_0c14811c(int a4, int a5);
int FUN_0c148148(int a4, int a5);
int FUN_0c148196(int a4);
int FUN_0c148248(int a4);
int FUN_0c14828a(int a4);
int FUN_0c1482f2(int a4);

int FUN_0c1480bc(int a4, int a5)
{
    FUN_0c064d5a(a4, ((((a5 << 1) + a5) << 2) + 0xC2029B4));
    (((struct o128_ushort *)(a4))->v) = ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))));
    (((struct o12A_ushort *)(a4))->v) = ((~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) & ((((struct o12A_short *)(a4))->v)));
    *(unsigned short *)((((0x12A + a4) + 0x2) + 0x0)) = ((~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) & (*(short *)((((0x12A + a4) + 0x2) + 0x0))));
    (((struct o12E_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
    return 0x12E;
}

int FUN_0c14811c(int a4, int a5)
{
    register float u1;
    register int t2;
    register int t3;

    if (a5 != 0) {
        *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
        (((struct o18_float *)(a4))->v) = 1.0f;
        u1 = *(float *)0xC14821C;
        (((struct o20_float *)(a4))->v) = u1;
        (((struct o1C_float *)(a4))->v) = u1;
        t3 = 0x1C;
    } else {
        t2 = *(short *)((a4 + 0x6));
        *(unsigned short *)((a4 + 0x6)) = (t2 & 0xFDFF);
        t3 = (t2 & 0xFDFF);
    }
    return t3;
}

int FUN_0c148148(int a4, int a5)
{
    FUN_0c14811c(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x2628), a5);
    FUN_0c14811c((((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x2628) + 0x90), a5);
    return FUN_0c14811c(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x468), a5);
}

int FUN_0c148196(int a4)
{
    register int t1;

    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        t1 = FUN_0c0b21d8();
        if (t1 != 0) {
            (((struct o130_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct o130_uchar *)(a4))->v) = 0xA;
        }
        FUN_0c0b2264(a4, 0x4, (((((struct o41C_float *)(a4))->v)) - ((((struct o160_float *)(a4))->v))));
        FUN_0c0b21ac(a4, 0x4);
        (((struct o41C_float *)(a4))->v) = ((((struct o160_float *)(a4))->v));
    }
    if ((int)(*(signed char *)((a4 + 0x130))) > 0) {
        FUN_0c148148(a4, 0x1);
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        return 0x130;
    }
    return FUN_0c148148(a4, 0x0);
}

int FUN_0c148248(int a4)
{
    register int t0;
    int t4;

    t0 = FUN_0c07d15c(a4);
    if (t0 != 0) {
        if (((*(signed char *)(((((*(signed char *)(((((t0 - 1) * 0x3938) + 0xC532498) + 0x3715))) << 2) << 1) + 0xC25AA85))) != 0) && (t4 = *(signed char *)(((((t0 - 1) * 0x3938) + 0xC532498) + 0x371D)), t4 != 1)) {
            return t0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c14828a(int a4)
{
    register int t0;
    register int t6;

    t0 = FUN_0c03f444(0x2, 0x0, 0x0);
    t6 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC14831C;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c07e2f4(t0, 0x5);
        FUN_0c1480bc(t0, 0x0);
        FUN_0c0b21ac(t0, 0x4);
        (((struct o41C_float *)(t0))->v) = ((((struct o160_float *)(t0))->v));
        t6 = 0x160;
    }
    return t6;
}

int FUN_0c1482f2(int a4)
{
    register int t1;
    register int t2;
    int t3;

    if (((*(signed char *)((a4 + 0x14))) == 0) && ((t1 = *(signed char *)((a4 + 0x3715)), t1 == 7) && ((t2 = *(signed char *)((a4 + 0x3732)), t2 == 1) && (t3 = *(signed char *)((a4 + 0x16)), t3 == 4)))) {
        return 0x1;
    }
    return 0x0;
}
