/* game/unsorted: functions 0C129EC4-0C12AE50, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c1281a8(int, int);
int FUN_0c128410(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c129ec4(int a4, int a5);
int FUN_0c129fa2(int a4, int a5, int a6, int a7);
int FUN_0c12a264(int a4, int a5);

int FUN_0c129ec4(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register float u14;
    register int t15;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC129FA2;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c187798();
        thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 16))) << 2) + 0xC2A0FD8))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        u14 = *(float *)0xC12A004;
        (((struct o48_float *)(t3))->v) = u14;
        (((struct o44_float *)(t3))->v) = u14;
        (((struct o40_float *)(t3))->v) = u14;
        *(int *)((int)stk + 12) = 0x30;
        *(int *)((int)stk + 8) = 0x0;
        t15 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t15));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t15)), 0x0, 0x30);
        return FUN_0c07e2f4(t3, ((*(signed char *)(((int)stk + 16))) + 0x60));
    }
    return t3;
}

int FUN_0c129fa2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0xC16);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if (((int)((int)(short)(t1 + 0x1) % (int)0x3)) == 0) {
                    FUN_0c128410(a4);
                }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 3) {
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xC16);
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.400000006f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.400000006f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.150000006f);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.100000001f);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.100000001f);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u1 = (u0 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o4C_float *)(a4))->v) = (u1 * 50.0f);
        (((struct o50_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 50.0f);
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u1 * 50.0f);
        FUN_0c1281a8(a4, 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xC16);
    if (((((struct o404_int *)(a4))->v)) == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            (((struct o12C_ushort *)(a4))->v) = 0x0;
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x20F;
            (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
            (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
            (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return 0x14;
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
        t1 = (int)((int)(short)(t0 + 0x1) % (int)0x3);
        if (t1 == 0) {
            return FUN_0c128410(a4);
        }
        return t1;
    }
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct o12E_ushort *)(a4))->v) = 0x0;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x20F;
    (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
    (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
    (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c12a264(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t28;
    register int t25;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x4, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    t3 = FUN_0c03f444(0x1, 0x0, (t2 + 0x1));
    t28 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC12A3B8;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x4, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        (((struct oA8_uchar *)(t3))->v) = 0x0;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t3 + 0x28));
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + 50.0f);
        *(unsigned int *)((t3 + 0x34)) = (*(int *)((a4 + 0x34)));
        *(unsigned int *)((t3 + 0x38)) = (*(int *)((a4 + 0x38)));
        *(unsigned int *)((t3 + 0x3C)) = (*(int *)((a4 + 0x3C)));
        (((struct o40_float *)(t3))->v) = 0.0f;
        (((struct o44_float *)(t3))->v) = 0.0f;
        (((struct o48_float *)(t3))->v) = 0.0f;
        (((struct o22_ushort *)(t3))->v) = (unsigned char)(*(signed char *)(((int)stk + 16)));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        FUN_0c037498(((((struct oC8_int *)(t3))->v)), 0x0, 0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x3F;
        (((struct o7C_uint *)(((((struct oC8_int *)(t3))->v))))->v) = 0x4000;
        *(int *)((int)stk + 12) = 0x30;
        *(int *)((int)stk + 8) = 0x0;
        t25 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t25));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x31, 0x0, 0x100, (~((int)0x1 << (int)t25)), 0x0, 0x30);
        FUN_0c07e2f4(t3, 0x63);
        (((struct o126_uchar *)(t3))->v) = 0x2;
        t28 = 0x126;
    }
    return t28;
}
