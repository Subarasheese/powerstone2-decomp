/* game/flow: functions 0C1213C4-0C122102, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c0102c4(void);
int FUN_0c036de8(int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03b05a(int);
int FUN_0c03dfe4(void);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c059c54(int);
int FUN_0c05aab6(int, int);
int game_reset_objects(void);
int FUN_0c05b048(int, int);
int FUN_0c05f22c(int);
int FUN_0c05f7a0(int);
int FUN_0c05f7e2(int);
int FUN_0c0fb8f0(void);
int FUN_0c0fb90e(void);
int FUN_0c0fe4ec(int);
int FUN_0c0fe530(void);
float math_sin_angle16(int);
int FUN_0c182b52(void);
int memset(int, int, int);
int FUN_0c2aeb0a(void);
int FUN_0c1213c4(int a4);
int FUN_0c1213d8(int a4);
int FUN_0c121412(int a4, int a5, int a6, int a7);
int FUN_0c121958(int a4);
int FUN_0c12196c(void);
int FUN_0c1219b6(int a4, int a5);
int FUN_0c121b30(int a4, int a5, int a6);
int FUN_0c121ba8(int a4, int a5);
int FUN_0c121d90(int a4, int a5);
int FUN_0c121e64(int a4, int a5);
int FUN_0c122058(int a4, int a5);

int FUN_0c1213c4(int a4)
{
    (((struct o0_uchar *)0xC4759E4)->v) = 0x1;
    (((struct o1_uchar *)0xC4759E4)->v) = 0x0;
    (((struct o2_uchar *)0xC4759E4)->v) = 0x0;
    (((struct o4_uchar *)0xC4759E4)->v) = a4;
    return a4;
}

int FUN_0c1213d8(int a4)
{
    memset(0xC4759E4, 0x0, 0x10);
    if (a4 != 1) {
        if (a4 != 2) {
            return a4;
        }
    } else {
        (((struct oF_uchar *)0xC4759E4)->v) = 0x1;
    }
    (((struct o0_uchar *)0xC4759E4)->v) = 0x1;
    return FUN_0c0fb90e();
}


int FUN_0c121958(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t2 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c12196c(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x0, (*(int *)0xC4B411C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x0, (*(int *)0xC4B411C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC121958;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}


int FUN_0c121b30(int a4, int a5, int a6)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t9 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x80;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        t9 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t3 + 0x3)) = t9;
        *(unsigned int *)((t3 + 0x4)) = 0xC1219B6;
    }
    return t9;
}


int FUN_0c121d90(int a4, int a5)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t20;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    *(unsigned int *)(((int)stk + 8)) = t2;
    t3 = FUN_0c03f444(0x5, 0x0, (t2 + 0x3));
    t20 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 3) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x13, (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 2) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x17, (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 1) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x15, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x80;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        t20 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t3 + 0x3)) = t20;
        *(unsigned int *)((t3 + 0x4)) = 0xC121BA8;
    }
    return t20;
}


int FUN_0c122058(int a4, int a5)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t20;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    *(unsigned int *)(((int)stk + 8)) = t2;
    t3 = FUN_0c03f444(0x5, 0x0, (t2 + 0x3));
    t20 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 3) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x4, (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 2) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0xD, (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 1) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x7, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x80;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        t20 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t3 + 0x3)) = t20;
        *(unsigned int *)((t3 + 0x4)) = 0xC121E64;
    }
    return t20;
}
