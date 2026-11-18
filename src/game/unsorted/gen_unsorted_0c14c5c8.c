/* game/unsorted: functions 0C14C5C8-0C14CE5E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_float { char p[0x41C]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c0b4b4e(int, int);
int FUN_0c14b4b4(int, int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c14c5c8(int a4);
int FUN_0c14c692(int a4, int a5, int a6, int a7);
int FUN_0c14c7cc(int a4, int a5, int a6, int a7);
int FUN_0c14c866(int a4, int a5);
int FUN_0c14c8fc(int a4);
void FUN_0c14c96a(int a4, int a5, int a6, int a7);
float FUN_0c14ca80(int a4);
int FUN_0c14cd44(int a4, int a5);


int FUN_0c14c692(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x5B0);
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - 0x5B0);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.150000006f);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.150000006f);
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.300000012f);
            if (!(((((struct o44_float *)(a4))->v)) > 0.0f)) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return 0x44;
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    FUN_0c14b4b4(a4, (a4 + 0x28));
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.150000006f);
    (((struct o48_float *)(a4))->v) = (u0 + 0.150000006f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.150000006f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c14c7cc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return ((int (*)(int, int, int, int))(0xC14C7A0))(((((short)t0 * (short)0x3938) + 0xC532900) + 0x2D0), a5, a6, a7);
}

int FUN_0c14c866(int a4, int a5)
{
    register int t7;

    FUN_0c064d5a(a4, ((((a5 << 1) + a5) << 2) + 0xC202C48));
    (((struct o128_ushort *)(a4))->v) = ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))));
    (((struct o12A_ushort *)(a4))->v) = ((~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) & ((((struct o12A_short *)(a4))->v)));
    *(unsigned short *)((((0x12A + a4) + 0x2) + 0x0)) = ((~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) & (*(short *)((((0x12A + a4) + 0x2) + 0x0))));
    t7 = *(signed char *)((a4 + 0x1));
    *(unsigned short *)((((0x12A + a4) + 0x4) + 0x0)) = ((~((int)0x1 << (int)t7)) & (*(short *)((((0x12A + a4) + 0x4) + 0x0))));
    return t7;
}

int FUN_0c14c8fc(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x2, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC14C96A;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c14c866(t0, 0x1);
        FUN_0c0b4b4e(t0, 0x2);
        (((struct o41C_float *)(t0))->v) = ((((struct o160_float *)(t0))->v));
        return FUN_0c07e2f4(t0, 0x8);
    }
    return t0;
}


float FUN_0c14ca80(int a4)
{
    register int t0;
    register int t3;
    register float u4;
    register float u5;
    register float u6;

    t0 = (((struct o41C_int *)(a4))->v);
    (((struct o41C_uint *)(a4))->v) = (t0 + 0x2000);
    t3 = (((struct oC8_int *)(a4))->v);
    u4 = (((struct o4_float *)0xC14CB8C)->v);
    u5 = (((struct o8_float *)0xC14CB8C)->v);
    u6 = (float)(int)((math_sin_angle16((t0 + 0x2000))) * ((((struct o0_float *)0xC14CB8C)->v)));
    (((struct o80_uint *)(t3))->v) = (int)((u6 * u4) / u5);
    (((struct o80_uint *)(((((struct oCC_int *)(a4))->v))))->v) = (-(int)((u6 * u4) / u5));
    return u5;
}

