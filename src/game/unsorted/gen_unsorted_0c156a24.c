/* game/unsorted: functions 0C156A24-0C1575BA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c155104(int, int);
int FUN_0c15597a(int, int);
int FUN_0c1564b0(int, int);
int FUN_0c156a24(int a4, int a5);
int FUN_0c156b40(int a4, int a5, int a6, int a7);
int FUN_0c156e04(int a4);
int FUN_0c156f78(int a4);
int FUN_0c15739c(int a4);
int FUN_0c1574d4(int a4);

int FUN_0c156a24(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC156924;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 320.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 320.0f);
        (((struct o30_float *)(t0))->v) = -2.0f;
        (((struct o44_float *)(t0))->v) = 0.00312500005f;
        (((struct o40_float *)(t0))->v) = 0.00312500005f;
        (((struct o48_float *)(t0))->v) = 1.56250002e-09f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x2, 0x16, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        u0 = -302.0f;
        u0 = u0 + 159.0f * (float)a5;
        (((struct o6C_float *)(t2))->v) = u0;
        (((struct o70_float *)(t2))->v) = -156.0f;
        (((struct o74_float *)(t2))->v) = -20000.0f;
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x3, 0x16, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = u0;
        (((struct o70_float *)(t2))->v) = -156.0f;
        (((struct o74_float *)(t2))->v) = -30000.0f;
        t1 = 0x74;
    }
    return t1;
}


int FUN_0c156e04(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x8, 0x0, 0x4);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC156B40;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 320.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 320.0f);
        (((struct o30_float *)(t0))->v) = -2.0f;
        (((struct o44_float *)(t0))->v) = 0.00312500005f;
        (((struct o40_float *)(t0))->v) = 0.00312500005f;
        (((struct o48_float *)(t0))->v) = 1.56250002e-09f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0xC, 0x14, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -192.0f;
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, (*(signed char *)((((a4 * 0x3938) + 0xC532498) + 0x2))), 0x13, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -192.0f;
        (((struct o74_float *)(t2))->v) = 10000.0f;
        t2 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t2, (*(signed char *)((((a4 * 0x3938) + 0xC532498) + 0x2))), 0x12, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -217.0f;
        (((struct o74_float *)(t2))->v) = 10000.0f;
        t2 = (((struct oD0_int *)(t0))->v);
        FUN_0c03744a(t2, 0x6, 0x15, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -192.0f;
        (((struct o74_float *)(t2))->v) = 40000.0f;
        t1 = 0x74;
    }
    return t1;
}


int FUN_0c15739c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x8, 0x0, 0x3);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC156F78;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 320.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 320.0f);
        (((struct o30_float *)(t0))->v) = -2.0f;
        (((struct o44_float *)(t0))->v) = 0.00312500005f;
        (((struct o40_float *)(t0))->v) = 0.00312500005f;
        (((struct o48_float *)(t0))->v) = 1.56250002e-09f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0xD, 0x14, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -181.0f;
        (((struct o74_float *)(t2))->v) = -100000.0f;
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, 0xA, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -181.0f;
        (((struct o74_float *)(t2))->v) = -200000.0f;
        t2 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t2, 0xB, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -181.0f;
        (((struct o74_float *)(t2))->v) = -300000.0f;
        t1 = 0x74;
    }
    return t1;
}

int FUN_0c1574d4(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)0xC54235E) != 0) {
        t0 = a4;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t3 = t0;
            if ((*(signed char *)((((t2 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
                t0 = (t2 * 0x3938);
                t0 = (t0 + 0xC532498);
                t3 = *(signed char *)((t0 + 0x2));
                t0 = t3;
                if ((t3 != 12) && (t0 != 13)) {
                    t0 = t2;
                    FUN_0c155104(t0, t1);
                    t0 = t2;
                    FUN_0c15597a(t0, t1);
                    t0 = t2;
                    FUN_0c1564b0(t0, t1);
                    t0 = t2;
                    FUN_0c156a24(t0, t1);
                    t1 = (t1 + 0x1);
                } else {
                    t3 = t0;
                }
            }
            t2 = (t2 + 0x1);
            t0 = t3;
            if ((int)t2 >= (int)0x4) {
                break;
            }
        }
        t0 = 0x0;
        t2 = t1;
        for (;;) {
            t1 = *(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2));
            if ((t1 == 12) || (t1 == 13)) {
                t2 = t0;
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
        FUN_0c156e04(t2);
        return FUN_0c15739c(t2);
    }
    t0 = 0x0;
    for (;;) {
        t1 = 0x3714;
        if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            FUN_0c155104(t0, t0);
            FUN_0c15597a(t0, t0);
            FUN_0c1564b0(t0, t0);
            t1 = (FUN_0c156a24(t0, t0));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

/* manual: 12-state effect sequence on byte a4[0x14], one shared timer countdown (word a4[0x1C]) and state advance; 199 cases, 313 of 313 instructions */
int FUN_0c156b40(int a4, int a5, int a6, int a7)
{
    int s, next, o, i;
    short t;
    float d0, d1;

    s = *(signed char *)(a4 + 0x14);
    switch (s) {
    case 0:
        if (*(signed char *)0xC542237 == 6 && *(signed char *)0xC54223C == 0) {
            *(unsigned char *)(a4 + 0xA8) = 0;
            return 0xA8;
        }
        *(unsigned char *)(a4 + 0xA8) = 1;
        *(int *)(*(int *)(a4 + 0xC4) + 0x7C) -= 0x4000;
        *(int *)(*(int *)(a4 + 0xC8) + 0x7C) -= 0x4000;
        *(float *)(*(int *)(a4 + 0xCC) + 0x84) = 0.0f;
        *(unsigned char *)*(int *)(a4 + 0xD0) = 0;
        *(float *)(*(int *)(a4 + 0xD0) + 0x84) = 5.0f;
        *(float *)(*(int *)(a4 + 0xD0) + 0x88) = 5.0f;
        *(volatile signed char *)(a4 + 2);
        next = 25;
        goto set;
    case 1: next = 15; break;
    case 2:
        *(int *)(*(int *)(a4 + 0xC4) + 0x7C) += 0x444;
        *(int *)(*(int *)(a4 + 0xC8) + 0x7C) += 0x444;
        next = 21;
        break;
    case 3: next = 20; break;
    case 4:
        d0 = -0.00499999989f;
        d1 = 0.00499999989f;
        next = 50;
        goto both;
    case 5:
        d0 = 0.00600000005f;
        d1 = -0.00200000009f;
        next = 40;
        goto both;
    case 6:
        d0 = -0.00499999989f;
        d1 = 0.0f;
        next = 21;
    both:
        for (i = 0xC4; i <= 0xC8; i += 4) {
            *(float *)(*(int *)(a4 + i) + 0x84) += d0;
            if (s != 6)
                *(float *)(*(int *)(a4 + i) + 0x88) += d1;
        }
        break;
    case 7:
    case 9: next = 10; break;
    case 8:
        *(float *)(*(int *)(a4 + 0xCC) + 0x84) += 0.100000001f;
        next = 40;
        break;
    case 10: next = 0; break;
    case 11:
        if (*(float *)(0xC5325F8 + *(signed char *)(a4 + 2) * 0x3938) > 0.0f) {
            *(unsigned char *)*(int *)(a4 + 0xD0) = 0;
            *(float *)(*(int *)(a4 + 0xD0) + 0x84) = 5.0f;
            *(float *)(*(int *)(a4 + 0xD0) + 0x88) = 5.0f;
            return 0x88;
        }
        *(unsigned char *)*(int *)(a4 + 0xD0) = 1;
        if (*(float *)(*(int *)(a4 + 0xD0) + 0x84) > 1.0f) {
            *(float *)(*(int *)(a4 + 0xD0) + 0x84) -= 0.100000001f;
            *(float *)(*(int *)(a4 + 0xD0) + 0x88) -= 0.100000001f;
            return 0x88;
        }
        return 0x84;
    default:
        return FUN_0c03f346(a4, 1, 0, a7);
    }
    t = *(short *)(a4 + 0x1C) - 1;
    *(short *)(a4 + 0x1C) = t;
    if (t != 0)
        return t;
    if (s == 1)
        *(unsigned char *)(a4 + 0xA8) = 1;
    if (s == 2 || s == 6)
        *(volatile signed char *)(a4 + 2);
    if (next == 0) {
        for (i = 0xC4; i <= 0xCC; i += 4)
            *(unsigned short *)(*(int *)(a4 + i) + 6) = 1;
    } else {
    set:
        *(unsigned short *)(a4 + 0x1C) = next;
    }
    *(unsigned char *)(a4 + 0x14) = *(signed char *)(a4 + 0x14) + 1;
    return 0x14;
}

