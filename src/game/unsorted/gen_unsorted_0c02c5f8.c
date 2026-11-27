/* game/unsorted: functions 0C02C5F8-0C02CA8E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5A_uchar { char p[0x5A]; unsigned char v; };
struct o5B_uchar { char p[0x5B]; unsigned char v; };
struct o5C_uchar { char p[0x5C]; unsigned char v; };
struct o5D_uchar { char p[0x5D]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c012c34(int);
int FUN_0c01c62a(int);
int FUN_0c0206d6(void);
int FUN_0c020950(void);
int FUN_0c0209c6(int);
int FUN_0c020be4(int);
int FUN_0c02c8c2(void);
int FUN_0c02cb10(void);
int FUN_0c03eff6(void);
int FUN_0c040034(int, int, int, int);
int FUN_0c04309a(int);
int FUN_0c0527e6(void);
int FUN_0c0573d8(void);
int game_reset_objects(void);
int FUN_0c05b1d4(void);
int FUN_0c05c774(void);
int FUN_0c05f7a0(int);
int FUN_0c07c23e(void);
int FUN_0c0bb47e(void);
int FUN_0c0d05f2(void);
int FUN_0c101f04(void);
int FUN_0c102350(void);
int FUN_0c179b00(int);
int FUN_0c1837cc(int, int);
int FUN_0c02c5f8(int a4);
int FUN_0c02c7dc(void);
int FUN_0c02c828(void);
int FUN_0c02c89c(int a4, int a5, int a6, int a7);
int FUN_0c02c95e(void);
int FUN_0c02c96a(void);
int FUN_0c02c9e8(void);
int FUN_0c02ca6a(void);


int FUN_0c02c7dc(void)
{
    *(unsigned char *)0xC541F40 = ((*(signed char *)0xC541F40) + 0x1);
    (((struct o8_uint *)0xC542440)->v) = 0x0;
    (((struct o4_uint *)0xC542440)->v) = 0x0;
    (((struct o0_uint *)0xC542440)->v) = 0x0;
    FUN_0c03eff6();
    game_reset_objects();
    FUN_0c0573d8();
    (((struct o0_uchar *)0xC542236)->v) = 0x0;
    (((struct o2E_uchar *)0xC542236)->v) = 0x0;
    (((struct o1F_uchar *)0xC542236)->v) = 0x0;
    *(unsigned char *)0xC542365 = 0x0;
    FUN_0c0527e6();
    FUN_0c05b1d4();
    FUN_0c020950();
    return FUN_0c02ca6a();
}

int FUN_0c02c828(void)
{
    register int t0;

    (((struct o0_uchar *)0xC541F41)->v) = 0x1;
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        (((struct o5A_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5B_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5C_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5D_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        *(unsigned int *)((((t0 * 0x98) + 0xC541CDC) + 0x20)) = 0x0;
        FUN_0c04309a(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    *(unsigned int *)0xC542390 = 0x0;
    FUN_0c0bb47e();
    FUN_0c0d05f2();
    return FUN_0c07c23e();
}

int FUN_0c02c89c(int a4, int a5, int a6, int a7)
{
    register int t4;

    t4 = 0xC541F42;
    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o1_uchar *)0xC541F42)->v) = 0x0;
        *(unsigned char *)0xC5421F8 = 0x0;
        t4 = 0x0;
    }
    return FUN_0c040034(t4, 0xC541F3C, a6, a7);
}

int FUN_0c02c95e(void)
{
    (((struct o0_uchar *)0xC541F40)->v) = 0x0;
    (((struct o1_uchar *)0xC541F40)->v) = 0x0;
    (((struct o2_uchar *)0xC541F40)->v) = 0x0;
    return 0x0;
}


int FUN_0c02c9e8(void)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o4_uchar *)0xC5429B0)->v) = 0x1;
    (((struct o0_uchar *)0xC541F70)->v) = 0x0;
    (((struct o1_uchar *)0xC5429B0)->v) = 0x0;
    (((struct o1_uchar *)0xC541F70)->v) = 0x0;
    (((struct o0_uchar *)0xC5429B0)->v) = 0x0;
    FUN_0c102350();
    (((struct o0_uchar *)0xC83C554)->v) = (*(signed char *)0xC30541F);
    t0 = *(signed char *)0xC305420;
    if ((*(signed char *)0xC309993) == 0) {
        (((struct o1_uchar *)0xC83C554)->v) = t0;
        (((struct o2_uchar *)0xC83C554)->v) = (*(signed char *)0xC309E07);
    } else {
        (((struct o2_uchar *)0xC83C554)->v) = t0;
        (((struct o1_uchar *)0xC83C554)->v) = (*(signed char *)0xC309E07);
    }
    FUN_0c05c774();
    FUN_0c101f04();
    t0 = FUN_0c05f7a0(0x7);
    *(unsigned int *)0xC30EFAC = 0x0;
    t1 = 0xC3099B8;
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        *(unsigned int *)0xC30EFAC = ((*(int *)0xC30EFAC) + t2);
        if ((unsigned int)t1 >= (unsigned int)0xC3099C6) {
            break;
        }
    }
    return t0;
}

int FUN_0c02ca6a(void)
{
    register int t0;

    t0 = *(int *)0xC30EFAC;
    *(unsigned int *)0xC30EFAC = (t0 + 0x1);
    FUN_0c179b00(((t0 + 0x1) - 1));
    *(unsigned int *)0xC542260 = 0x0;
    *(unsigned int *)0xC542098 = 0x0;
    *(unsigned short *)0xC5426C0 = 0x8;
    return 0xC5426C0;
}
