/* game/unsorted: functions 0C02188C-0C021B52, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
int FUN_0c018e74(int);
int FUN_0c01cb7c(void);
int FUN_0c01cd2c(int);
int FUN_0c01e9e4(void);
int FUN_0c01fce0(int, int, int, int);
int FUN_0c01fd10(void);
int FUN_0c02ae40(int);
int FUN_0c02b182(int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c036de8(int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03ec80(void);
int FUN_0c03f40c(int);
int FUN_0c0524bc(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c54(int);
int FUN_0c05a292(int a4, int a5, int a6, int a7, int a8);
int FUN_0c05aca8(int, int);
int FUN_0c05b048(void);
int FUN_0c05b05c(void);
int FUN_0c05f7a0(int);
int FUN_0c2b0d2c(void);
int FUN_0c02188c(int a4);
int FUN_0c021928(int a4);
int FUN_0c021998(void);
int FUN_0c021a70(void);
int FUN_0c021ab4(void);
void FUN_0c021b1a(int a4, int a5, int a6, int a7);
int FUN_0c021b3e(void);

int FUN_0c02188c(int a4)
{
    int stk[5];

    if (a4 != 0) {
        (((struct o0_uchar *)0xC305408)->v) = 0x4;
        (((struct o1_uchar *)0xC305408)->v) = 0x1;
        (((struct o2_uchar *)0xC305408)->v) = 0x0;
        (((struct o3_uchar *)0xC305408)->v) = 0x0;
    }
    FUN_0c01e9e4();
    FUN_0c036de8(0x20);
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c05a292(0xC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    FUN_0c02ae40(0x2);
    FUN_0c02b3ba(0xC1A89EC, 0.0f, 0.0f, 0.0f);
    FUN_0c01fd10();
    (((struct o0_uchar *)0xC309858)->v) = 0x1;
    (((struct o1_uchar *)0xC309858)->v) = 0x0;
    (((struct o2_uchar *)0xC309858)->v) = 0x0;
    (((struct o3_uchar *)0xC309858)->v) = 0x0;
    (((struct o4_uchar *)0xC309858)->v) = 0x0;
    (((struct o0_uchar *)0xC30EF64)->v) = 0x1;
    (((struct o1_uchar *)0xC30EF64)->v) = 0x3;
    (((struct o2_uchar *)0xC30EF64)->v) = 0x5;
    (((struct o3_uchar *)0xC30EF64)->v) = 0x1;
    (((struct o4_uchar *)0xC30EF64)->v) = 0x1;
    FUN_0c2b0d2c();
    *(unsigned char *)0xC30EFA3 = 0x0;
    *(unsigned char *)0xC30A403 = 0x0;
    return FUN_0c05f7a0(0x6);
}

int FUN_0c021928(int a4)
{
    register int t6;

    if (a4 != 0) {
        (((struct o0_uchar *)0xC305408)->v) = 0x4;
        (((struct o1_uchar *)0xC305408)->v) = 0x1;
        (((struct o2_uchar *)0xC305408)->v) = 0x0;
        (((struct o3_uchar *)0xC305408)->v) = 0x0;
    }
    FUN_0c01e9e4();
    FUN_0c01fd10();
    (((struct o0_uchar *)0xC309858)->v) = 0x1;
    (((struct o1_uchar *)0xC309858)->v) = 0x0;
    (((struct o2_uchar *)0xC309858)->v) = 0x0;
    (((struct o3_uchar *)0xC309858)->v) = 0x0;
    (((struct o4_uchar *)0xC309858)->v) = 0x0;
    (((struct o0_uchar *)0xC30EF64)->v) = 0x1;
    (((struct o1_uchar *)0xC30EF64)->v) = 0x3;
    (((struct o2_uchar *)0xC30EF64)->v) = 0x5;
    (((struct o3_uchar *)0xC30EF64)->v) = 0x1;
    (((struct o4_uchar *)0xC30EF64)->v) = 0x1;
    (((struct o5_uchar *)0xC30EF64)->v) = 0x0;
    (((struct o8_ushort *)0xC30EF64)->v) = 0x0;
    t6 = FUN_0c2b0d2c();
    *(unsigned char *)0xC30EFA3 = 0x0;
    *(unsigned char *)0xC30A403 = 0x0;
    return t6;
}

int FUN_0c021998(void)
{
    register int t2;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t2 = ((int (*)(void))((*(int *)((((*(signed char *)0xC309860) << 2) + 0xC20E5A0)))))();
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    FUN_0c038e88(0x8);
    FUN_0c0524bc();
    FUN_0c03ec80();
    return FUN_0c02b182(0x0);
}



void FUN_0c021b1a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)0xC309860 = ((*(signed char *)0xC309860) + 0x1);
        *(unsigned char *)0xC30EFA5 = 0x0;
        FUN_0c01fce0(0xC309860, a5, a6, a7);
    return;
    }
}

int FUN_0c021b3e(void)
{
    if ((*(signed char *)0xC3052CA) == 0) {
        return FUN_0c02188c(0x1);
    }
    *(unsigned char *)0xC309858 = 0x0;
    return 0xC3052CA;
}
