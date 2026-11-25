/* Straight-line functions with calls and guards (batch gen_ge): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o3F_uchar { char p[0x3F]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c030412(int);
int FUN_0c030436(void);
int FUN_0c030442(int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
extern int FUN_0c03b05a();
int FUN_0c03cbfa(int);
int FUN_0c03df6a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c05ffa4(int, int, int);
int FUN_0c060180(int, int, int);
int FUN_0c0601da(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c150160(int, int, float, float, float, float);
int FUN_0c169524(int, int, int);
int FUN_0c176b90(int);
int FUN_0c17e260(int);
int FUN_0c187a88(int, int, int);
int FUN_0c191554(void);
int FUN_0c191d9e(void);
int FUN_0c191dae(void);
int FUN_0c191f7c(void);
int FUN_0c192f54(int, int);
int FUN_0c193be4(void);
int FUN_0c193c1e(int);
int FUN_0c1a21f4(void);
int FUN_0c1a3438(int, int);
int FUN_0c1a357c(int, int, int);
int FUN_0c1a3890(void);
int FUN_0c2c14a8(void);
int FUN_0c2d8590(int, int);
int FUN_0c2d868a(int, int);
int FUN_0c2db8f4(int, int, int);
int _div64(int, int, int, int);
int _power(int, int, int);
int direntry(int, int);
int direntry_dirty(int, int);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int fmcalccrc(int, int);
int get_vmstime(int, int);
int math_mat_get_translate(int, int);
int mult64(int, int, int, int);
int rsfts(int, int, int);
int search_dir(int, int, int);
int set_vmstime(int, int);
int strlen(int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c2c067e(int);
int thunk_FUN_0c2c2156(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int FUN_0c2d7df8(int a4, int a5);
int vmsfs_fsettime(int a4, int a5, int a6);
int vmsfs_frename(int a4, int a5, int a6);
int vmsfs_fsetattr(int a4, int a5, int a6, int a7);
int FUN_0c0304e8(int a4, int a5);
int calcnpw(int a4, int a5, int a6, int a7);
int fmMngAddData(int a4);
int FUN_0c103d56(int a4, int a5, int a6);
int FUN_0c1848e8(void);
int FUN_0c0f5264(int a4);
int FUN_0c13f734(int a4, int a5);
int FUN_0c0de650(int a4, int a5);
int FUN_0c035ca4(int a4, int a5);
int FUN_0c0efb30(int a4, int a5);
int FUN_0c13e620(int a4, int a5);
void FUN_0c0313e0(int a4, int a5, int a6);
void FUN_0c0497d8(int a4, int a5, int a6, int a7);
void FUN_0c0de442(int a4, int a5, int a6);
int FUN_0c11c80c(int a4, int a5, int a6, int a7);
int FUN_0c2d85e4(int a4, int a5);
int FUN_0c03dd5c(int a4);
void FUN_0c11dbdc(int a4, int a5, int a6, int a7);
int FUN_0c065cb0(int a4);
int vmsfs_fgetsize(int a4, int a5);
int FUN_0c03db62(int a4, int a5, int a6, int a7);
int FUN_0c129260(int a4);
int FUN_0c169922(int a4, int a5);


int calcnpw(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t10;
    register int t12;
    register int t16;
    register int t14;
    register int t19;
    register int t20;

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(unsigned short *)(((int)stk + 16)) = 0x8;
    if ((int)a6 > 0) {
        _power(a6, ((int)stk + 0), (((int)stk + 0) + 0x14));
        _div64(((int)stk + 0), (((int)stk + 0) + 0x14), (*(short *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    } else {
        _power((-a6), ((int)stk + 0), (((int)stk + 0) + 0x14));
        mult64(((int)stk + 0), (((int)stk + 0) + 0x14), (*(short *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    }
    t10 = *(short *)(((int)stk + 0));
    *(volatile short *)(((int)stk + 16));
    t12 = FUN_0c1a3890();
    FUN_0c1a357c((((int)stk + 0) + 0x14), 0x9, (0x42 - (short)(0x3F - t10)));
    t16 = 0x8;
    if ((int)0x8 >= (int)(short)t12) {
        t14 = 0x8;
        for (;;) {
            t14 = (short)t14;
            *(unsigned char *)(((((int)stk + 0) + 0x14) + t14)) = (*(signed char *)(((((short)t14 - (short)t12) + (((int)stk + 0) + 0x14)) + 0x0)));
            t14 = (t14 - 1);
            if ((int)(short)t14 < (int)(short)t12) {
                break;
            }
        }
        t16 = t14;
    }
    if ((int)(short)t16 >= 0) {
        t19 = t16;
        t20 = (((short)t16 + (((int)stk + 0) + 0x14)) + 0x1);
        for (;;) {
            t19 = (t19 - 1);
            *(unsigned char *)(((t20 - 0x1) + 0x0)) = 0x0;
            t20 = (t20 - 0x1);
            if ((int)(short)t19 < 0) {
                break;
            }
        }
    }
    rsfts((((int)stk + 0) + 0x14), 0x9, ((0x3F - t10) - ((t12 << 2) << 1)));
    *(unsigned short *)(((int)stk + 0)) = 0x3F;
    FUN_0c1a3438((((int)stk + 0) + 0x14), 0x40);
    return (FUN_0c187a88((*(int *)(((int)stk + 12))), (((int)stk + 0) + 0x14), 0x8));
}


int FUN_0c1848e8(void)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t23;

    (((struct o8_uint *)0xC2A62B8)->v) = 0x0;
    (((struct o0_uint *)0xC2A62B8)->v) = 0x7;
    t0 = 0x3;
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)(((0xC8B1620 + t0) + 0x0));
        t0 = (t0 - 1);
        t1 = (t1 << 8);
        t1 = (t1 | (unsigned char)t2);
        if ((int)t0 < 0) {
            break;
        }
    }
    t4 = 0x3;
    t5 = 0x0;
    for (;;) {
        t6 = *(signed char *)(((0xC8B161C + t4) + 0x0));
        t4 = (t4 - 1);
        t5 = (t5 << 8);
        t5 = (t5 | (unsigned char)t6);
        if ((int)t4 < 0) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 0)) = 0xFFFFFF;
    if (((((struct o1C_int *)0xC2A62B8)->v)) != 0) {
        (((struct o1C_uint *)0xC2A62B8)->v) = 0x0;
        FUN_0c191dae();
        FUN_0c193c1e(t1);
        *(volatile int *)(((int)stk + 0));
        FUN_0c193be4();
        FUN_0c191d9e();
    }
    FUN_0c191554();
    t23 = strlen(0xC89BC38);
    if (t23 != 0) {
        FUN_0c192f54(0xC89BC38, 0xC89B60C);
    }
    if (((((struct o14_int *)0xC2A62B8)->v)) != 0) {
        FUN_0c191f7c();
        (((struct o14_uint *)0xC2A62B8)->v) = 0x0;
    }
    (((struct oC_uint *)0xC2A62B8)->v) = 0x0;
    (((struct o4_uint *)0xC2A62B8)->v) = 0x0;
    (((struct o8_uint *)0xC2A62B8)->v) = 0x0;
    (((struct o0_uint *)0xC2A62B8)->v) = 0x0;
    return 0x0;
}


