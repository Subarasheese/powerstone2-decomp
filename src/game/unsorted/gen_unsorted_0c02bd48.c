/* game/unsorted: functions 0C02BD48-0C02C13C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c012c34(int);
int FUN_0c01c62a(int);
int FUN_0c01e9e4(void);
int FUN_0c02b3ba(int a4, float f4, float f5, float f6);
int FUN_0c02b502(int);
int FUN_0c0573cc(int, int, int);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c02bd48(void);
void FUN_0c02bda4(void);
int FUN_0c02bda8(int a4);
int FUN_0c02bdbc(int a4);
int FUN_0c02be9c(int a4, float f4);
int FUN_0c02bff0(int a4);

int FUN_0c02bd48(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC30EF15;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        t1 = (((struct o4_short *)0xC30EF14)->v);
        (((struct o4_ushort *)0xC30EF14)->v) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o3_uchar *)0xC30EF14)->v) = 0x0;
            (((struct o2_uchar *)0xC30EF14)->v) = 0x0;
            (((struct o1_uchar *)0xC30EF14)->v) = 0x0;
            (((struct o0_uchar *)0xC30EF14)->v) = 0x0;
            return FUN_0c01e9e4();
        }
        return (unsigned char)t0;
    }
    (((struct o1_uchar *)0xC30EF14)->v) = ((*(signed char *)0xC30EF15) + 0x1);
    t0 = FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    (((struct o4_ushort *)0xC30EF14)->v) = 0x14;
    t1 = (((struct o4_short *)0xC30EF14)->v);
    (((struct o4_ushort *)0xC30EF14)->v) = (t1 - 1);
    if ((int)(short)(t1 - 1) <= 0) {
        (((struct o3_uchar *)0xC30EF14)->v) = 0x0;
        (((struct o2_uchar *)0xC30EF14)->v) = 0x0;
        (((struct o1_uchar *)0xC30EF14)->v) = 0x0;
        (((struct o0_uchar *)0xC30EF14)->v) = 0x0;
        return FUN_0c01e9e4();
    }
    return t0;
}

void FUN_0c02bda4(void)
{
    
}

int FUN_0c02bda8(int a4)
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

int FUN_0c02bdbc(int a4)
{
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o1B_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o28_float *)(a4))->v) = ((((struct o0_float *)0xC20E8C4)->v));
        (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)0xC20E8C4)->v));
    }
    if (((*(signed char *)((((short)(*(signed char *)0xC305416) * (short)0x86) + 0xC309E0C))) != 0) && (t1 = *(signed char *)0xC30985A, t1 == 4)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c012c34(a4);
    t1 = 0xC30EF22;
    if ((*(signed char *)0xC30EF20) != (*(signed char *)0xC30EF22)) {
        (((struct o28_float *)(a4))->v) = ((((struct o0_float *)0xC20E8C4)->v));
        (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)0xC20E8C4)->v));
        t1 = 0x2C;
    }
    if ((*(signed char *)0xC30EF24) != 0) {
        (((struct o1B_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        t1 = 0x44;
    }
    return t1;
}

int FUN_0c02be9c(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t3;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o1B_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o40_float *)(a4))->v) = 1.5f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        t0 = *(signed char *)0xC305416;
        (((struct o28_float *)(a4))->v) = (*(float *)((((((t0 << 1) + t0) << 2) + 0xC20E900) + 0x0)));
        t0 = *(signed char *)0xC305416;
        (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)(((((t0 << 1) + t0) << 2) + 0xC20E900)))->v));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o30_float *)(a4))->v) = 3.0f;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        FUN_0c012c34(a4);
        t0 = *(signed char *)0xC30985A;
        if (((int)t0 >= (int)0x4) && ((int)t0 <= (int)0x6)) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        t0 = 0xC30EF23;
        if ((*(signed char *)0xC30EF21) != (*(signed char *)0xC30EF23)) {
            t1 = *(signed char *)0xC305416;
            (((struct o28_float *)(a4))->v) = (*(float *)((((((t1 << 1) + t1) << 2) + 0xC20E900) + 0x0)));
            t1 = *(signed char *)0xC305416;
            (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)(((((t1 << 1) + t1) << 2) + 0xC20E900)))->v));
            t0 = 0x2C;
        }
        t1 = t0;
        if ((*(signed char *)0xC30EF24) != 0) {
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x1;
            t1 = 0x15;
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 == 1) {
            t0 = FUN_0c01c62a(a4);
            t3 = (signed char)t0;
            if ((signed char)t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = 0x2;
                t3 = 0x15;
            }
            t0 = t3;
        } else {
            t3 = t1;
            if ((*(signed char *)0xC30EF24) == 0) {
                (((struct o14_uchar *)(a4))->v) = 0x0;
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t3 = 0x15;
            }
            t0 = t3;
        }
    }
    return t0;
}

int FUN_0c02bff0(int a4)
{
    int stk[8];
    register int t4;
    register int t5;
    register int t36;
    register int t7;
    register float u10;
    register float u31;
    register int t32;
    register int t29;

    (((struct oA8_uchar *)(a4))->v) = 0x0;
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t4 = *(signed char *)0xC30A349;
    t5 = t4;
    if ((int)(signed char)t4 >= (int)0xA) {
        t5 = 0xA;
    }
    *(unsigned int *)(((int)stk + 12)) = 0xC20E9EC;
    *(unsigned int *)(((int)stk + 8)) = (signed char)t5;
    t36 = 0xC02C158;
    if ((int)(signed char)t5 > 0) {
        t7 = 0x0;
        for (;;) {
            FUN_0c02b502(0x7);
            u10 = 96.0f;
            u10 = u10 + 31.5f * (float)(unsigned char)t7;
            FUN_0c02b3ba(((((*(signed char *)0xC30EF46) + (unsigned char)t7) * 0x86) + 0xC309E10), 40.0f, u10, 638.0f);
            *(int *)((int)stk + 4) = ((*(short *)(((((*(signed char *)0xC30EF46) + (unsigned char)t7) * 0x86) + 0xC309E0E))));
            *(int *)((int)stk + 0) = 0xC1A8DE0;
            FUN_0c187cac((((int)stk + 0) + 0x10), 0x0, 0x0, 0x0, 0xC1A8DE0);
            FUN_0c02b502(0xB);
            FUN_0c02b3ba((((int)stk + 8) + 0x8), 244.0f, u10, 638.0f);
            FUN_0c02b502(0x7);
            FUN_0c02b3ba(((((struct o0_int *)0xC20E9E4)->v)), 292.0f, u10, 638.0f);
            if ((*(signed char *)((0xC309E0C + (((*(signed char *)0xC30EF46) + (unsigned char)t7) * 0x86)))) == 1) {
                FUN_0c02b502(0xA);
                t29 = ((((struct o4_int *)0xC20E9E4)->v));
            } else {
                FUN_0c02b502(0x8);
                t29 = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
            }
            u31 = 96.0f;
            u31 = u31 + 31.5f * (float)(unsigned char)t7;
            t32 = FUN_0c02b3ba(t29, 330.0f, u31, 638.0f);
            t7 = (t7 + 0x1);
            if ((int)(unsigned char)t7 >= (int)(*(int *)(((int)stk + 8)))) {
                break;
            }
        }
        t36 = t32;
    }
    return t36;
}
