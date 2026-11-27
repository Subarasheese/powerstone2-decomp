/* game/unsorted: functions 0C16C8E8-0C16D1CC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05aae4(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c16c8e8(int a4, int a5, int a6, int a7);
int FUN_0c16cd3c(int a4);
int FUN_0c16cdc2(int a4, int a5, int a6, int a7);
int FUN_0c16ce4c(int a4);
int FUN_0c16cf42(int a4, int a5, int a6, int a7);



int FUN_0c16cdc2(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC540F98, t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    FUN_0c16ce4c(a4);
    *(unsigned short *)((a4 + 0x1C)) = 0x1E0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}


int FUN_0c16cf42(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC540F98, t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / 10.0f));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / 10.0f));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / 10.0f));
        u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1E))) * 65536.0f) / 360.0f));
        u1 = ((((struct o2C_float *)(a4))->v));
        u1 = u1 + 5.0f * u0;
        (((struct o2C_float *)(a4))->v) = u1;
        u0 = math_sin_angle16((int)(((float)((((struct o20_short *)(a4))->v)) * 65536.0f) / 360.0f));
        u1 = ((((struct o2C_float *)(a4))->v));
        u1 = u1 + 5.0f * u0;
        (((struct o2C_float *)(a4))->v) = u1;
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0xB4);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x4);
        (((struct o20_ushort *)(a4))->v) = ((int)((int)((((struct o20_short *)(a4))->v)) % (int)0x168));
        t0 = (((struct o20_short *)(a4))->v);
        if (((int)t0 > 0) && ((int)t0 < (int)0x5)) {
            FUN_0c07e3ae(a4, (*(signed char *)0xC273FE2));
            FUN_0c064d24(a4, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))), 0x0, 0x0);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    *(unsigned int *)((a4 + 0x34)) = (-(int)(((float)((int)((int)(nlRand()) % (int)0x2D)) * 65536.0f) / 360.0f));
    *(unsigned int *)((a4 + 0x38)) = (0x2AAA * (*(signed char *)((a4 + 0x2))));
    u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
    u1 = (u0 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
    (((struct o4C_float *)(a4))->v) = (u1 * 20.0f);
    (((struct o50_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 20.0f);
    u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
    u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
    (((struct o54_float *)(a4))->v) = (u1 * 20.0f);
    *(unsigned short *)((a4 + 0x1E)) = ((int)((int)(nlRand()) % (int)0xB4));
    (((struct o20_ushort *)(a4))->v) = ((int)((int)(nlRand()) % (int)0xB4));
    *(unsigned short *)((a4 + 0x1C)) = 0x1E0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}


