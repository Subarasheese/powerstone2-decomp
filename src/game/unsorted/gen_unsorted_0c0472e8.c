/* game/unsorted: functions 0C0472E8-0C047670, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0472e8(void);
int FUN_0c04737a(int a4, int a5, int a6, int a7);
int FUN_0c047476(void);
int FUN_0c047508(int a4, int a5, int a6, int a7);

int FUN_0c0472e8(void)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    FUN_0c037320(0x6, (*(int *)0xC4B410C));
    t0 = FUN_0c03f444(0x8, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0471FC;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        u0 = (((struct o0_float *)0xC047414)->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / u0);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / u0);
        (((struct o30_float *)(t0))->v) = ((((struct o4_float *)0xC047414)->v));
        u0 = (((struct o8_float *)0xC047414)->v);
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        (((struct o48_float *)(t0))->v) = ((((struct oC_float *)0xC047414)->v));
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x74, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x0;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = ((((struct o14_float *)0xC047414)->v));
        (((struct o70_float *)(t2))->v) = ((((struct o18_float *)0xC047414)->v));
        t1 = 0x70;
    }
    return t1;
}

int FUN_0c04737a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x0, 0x1E, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        t0 = *(short *)((a4 + 0x1E));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t0 = *(signed char *)0xC541F62;
                t3 = 0x28;
                if ((unsigned char)t0 != 0) {
                    t3 = 0x2D;
                    if ((unsigned char)t0 != 1) {
                        t3 = 0x32;
                    }
                }
                t0 = (((struct oC4_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, t3, (*(int *)0xC4B410C));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x1F;
                (((struct o6C_float *)(t0))->v) = ((((struct o0_float *)0xC047574)->v));
                (((struct o70_float *)(t0))->v) = ((((struct o4_float *)0xC047574)->v));
                t2 = 0x70;
            }
            t0 = t2;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = 0xC4;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c047476(void)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    FUN_0c037320(0x6, (*(int *)0xC4B410C));
    t0 = FUN_0c03f444(0x8, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC04737A;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        u0 = (((struct o18_float *)0xC047574)->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / u0);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / u0);
        (((struct o30_float *)(t0))->v) = ((((struct o1C_float *)0xC047574)->v));
        u0 = (((struct o20_float *)0xC047574)->v);
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        (((struct o48_float *)(t0))->v) = ((((struct o24_float *)0xC047574)->v));
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x28, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x0;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = ((((struct o0_float *)0xC047574)->v));
        (((struct o70_float *)(t2))->v) = ((((struct o4_float *)0xC047574)->v));
        t1 = 0x70;
    }
    return t1;
}

int FUN_0c047508(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x1E, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        t0 = *(short *)((a4 + 0x1E));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t0 = *(signed char *)0xC541F62;
                if ((unsigned char)t0 != 0) {
                    if ((unsigned char)t0 != 1) {
                        t0 = ((unsigned char)(*(signed char *)0xC40F820) + 0x32);
                    } else {
                        t0 = ((unsigned char)(*(signed char *)0xC40F820) + 0x2D);
                    }
                    t3 = t0;
                } else {
                    t3 = ((unsigned char)(*(signed char *)0xC40F820) + 0x28);
                }
                t0 = (((struct oDC_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, t3, (*(int *)0xC4B410C));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x1F;
                (((struct o6C_float *)(t0))->v) = -220.0f;
                (((struct o70_float *)(t0))->v) = -180.0f;
                t0 = *(signed char *)0xC541F62;
                if ((unsigned char)t0 != 0) {
                    if ((unsigned char)t0 != 1) {
                        t0 = ((unsigned char)(*(signed char *)0xC40F822) + 0x32);
                    } else {
                        t0 = ((unsigned char)(*(signed char *)0xC40F822) + 0x2D);
                    }
                    t3 = t0;
                } else {
                    t3 = ((unsigned char)(*(signed char *)0xC40F822) + 0x28);
                }
                t0 = (((struct oE0_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, t3, (*(int *)0xC4B410C));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x1F;
                (((struct o6C_float *)(t0))->v) = 220.0f;
                (((struct o70_float *)(t0))->v) = -180.0f;
                t2 = 0x70;
            }
            t0 = t2;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = 0xE0;
        }
        t1 = t0;
    }
    return t1;
}
