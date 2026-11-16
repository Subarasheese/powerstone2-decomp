/* Straight-line functions with calls and guards (batch gen_k): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c0ec438(int);
int FUN_0c0ec550(int);
int FUN_0c10d2b4(int, int);
int FUN_0c1171f0(int);
int FUN_0c18778c(void);
int FUN_0c150c68(int a4, int a5, int a6, int a7);
int FUN_0c160c7c(int a4, int a5, int a6, int a7);
int FUN_0c10d37a(int a4, int a5, int a6, int a7);
int FUN_0c0ec5ea(int a4, int a5, int a6, int a7);

int FUN_0c150c68(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;
    register float u1;

    u0 = (((struct o0_float *)0xC150D94)->v);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
        u1 = (((struct o4_float *)0xC150D94)->v);
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - u1);
        (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - u1);
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - u1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        t0 = *(signed char *)((a4 + 0x2));
        (((struct o48_float *)(a4))->v) = ((float)(t0 + 0x1) * u0);
        (((struct o44_float *)(a4))->v) = ((float)(t0 + 0x1) * u0);
        (((struct o40_float *)(a4))->v) = ((float)(t0 + 0x1) * u0);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
        u0 = (((struct o4_float *)0xC150D94)->v);
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - u0);
        (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - u0);
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - u0);
    }
    t0 = 0xB4;
    if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oB4_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        t0 = 0xBC;
    }
    return t0;
}

int FUN_0c160c7c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
            FUN_0c0588bc((a4 + 0x40), 0xC2A2DE4, 0xC2A2DD8, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
        }
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x8) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A2E00, 0xC2A2DF0, (*(short *)((a4 + 0x1C))), 0x18, 0x8);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x18) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0x29, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x21F;
    return (FUN_0c18778c());
}

int FUN_0c10d37a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 5) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
    }
    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)(unsigned char)(*(signed char *)(((0xC473958 + t0) + 0x0))) > (int)0x5) {
            t1 = (t1 + ((unsigned char)(*(signed char *)(((0xC473958 + t2) + 0x0))) - 5));
        }
        t0 = (t0 + 0x3);
        t2 = (t2 + 0x3);
        if ((unsigned int)t0 >= (unsigned int)0x18) {
            break;
        }
    }
    *(unsigned int *)0xC473974 = t1;
    return FUN_0c10d2b4(a4, t1);
}

int FUN_0c0ec5ea(int a4, int a5, int a6, int a7)
{
    int t0;

    if ((int)(*(signed char *)0xC54098D) >= (int)0xE) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) + 0x64);
        }
        *(unsigned int *)((a4 + 0x10)) = (*(int *)0xC540E1C);
        (((struct o128_ushort *)(a4))->v) = 0x40;
        FUN_0c07e420(a4, 0x5);
    }
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 1)) {
        return FUN_0c0ec550(a4);
    }
    return FUN_0c0ec438(a4);
}
