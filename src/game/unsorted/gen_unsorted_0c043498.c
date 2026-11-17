/* game/unsorted: functions 0C043498-0C0449B6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c043498(int a4, int a5, int a6, int a7);
int FUN_0c0435f4(int a4);

int FUN_0c043498(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0500000007f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                return FUN_0c03f346(a4, 0x1, a6, a7);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct oAC_ushort *)(a4))->v) = 0x41F;
                (((struct oB0_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            t0 = (int)((int)(*(short *)((a4 + 0x1C))) / (int)0x6);
            t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t1 = (t0 & 0x1);
            }
            if (t1 != 0) {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            } else {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            }
            return 0xC8;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)0xC542361;
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = 0.0f;
            (((struct o70_float *)(t0))->v) = 97.8133316f;
            (((struct o74_float *)(t0))->v) = 10000.0f;
            t0 = (((struct oCC_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = -237.813339f;
            (((struct o70_float *)(t0))->v) = 96.7893372f;
            (((struct o74_float *)(t0))->v) = 10000.0f;
        }
    } else {
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o6C_float *)(t0))->v) = 0.0f;
        (((struct o70_float *)(t0))->v) = 142.186661f;
        (((struct o74_float *)(t0))->v) = 10000.0f;
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o6C_float *)(t0))->v) = -237.813339f;
        (((struct o70_float *)(t0))->v) = 143.210663f;
        (((struct o74_float *)(t0))->v) = 10000.0f;
    }
    t0 = *(signed char *)0xC541F41;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 2) {
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 != 9) {
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
    }
    return t1;
}

int FUN_0c0435f4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;

    t0 = FUN_0c037320(0x48, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x8, 0x0, (t0 + 0x1));
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC043498;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t1 + 0x2)) = a4;
        (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) / 320.0f);
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) / 320.0f);
        (((struct o30_float *)(t1))->v) = -2.0f;
        (((struct o44_float *)(t1))->v) = 0.00312500005f;
        (((struct o40_float *)(t1))->v) = 0.00312500005f;
        (((struct o48_float *)(t1))->v) = 1.56250002e-09f;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t2 = (((struct oC4_int *)(t1))->v);
        t3 = *(int *)0xC4B410C;
        t4 = 0x49;
        if ((*(signed char *)0xC541F62) == 0) {
            t4 = 0x48;
        }
        FUN_0c03744a(t2, 0x0, t4, t3);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 0.0f;
        (((struct o70_float *)(t2))->v) = ((((struct o0_float *)0xC0437E4)->v));
        (((struct o74_float *)(t2))->v) = 0.0f;
        u0 = (((struct o4_float *)0xC0437E4)->v);
        (((struct o84_float *)(t2))->v) = u0;
        (((struct o88_float *)(t2))->v) = u0;
        (((struct o8C_float *)(t2))->v) = u0;
        t2 = (((struct oC8_int *)(t1))->v);
        FUN_0c03744a(t2, 0x1, 0x48, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 0.0f;
        u1 = (((struct o8_float *)0xC0437E4)->v);
        (((struct o70_float *)(t2))->v) = u1;
        u2 = (((struct oC_float *)0xC0437E4)->v);
        (((struct o74_float *)(t2))->v) = u2;
        (((struct o84_float *)(t2))->v) = u0;
        (((struct o88_float *)(t2))->v) = u0;
        (((struct o8C_float *)(t2))->v) = u0;
        t3 = 0x0;
        t4 = t2;
        for (;;) {
            if ((((int)0x1 << (int)t3) & (unsigned char)(*(signed char *)0xC3BD446)) != 0) {
                t4 = t3;
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x4) {
                break;
            }
        }
        t2 = (((struct oCC_int *)(t1))->v);
        FUN_0c03744a(t2, 0x0, (t4 + 0x37), (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = ((((struct o14_float *)0xC0437E4)->v));
        (((struct o70_float *)(t2))->v) = u1;
        (((struct o74_float *)(t2))->v) = u2;
        (((struct o84_float *)(t2))->v) = u0;
        (((struct o88_float *)(t2))->v) = u0;
        (((struct o8C_float *)(t2))->v) = u0;
        t0 = 0x8C;
    }
    return t0;
}
