/* game/unsorted: functions 0C169524-0C16AC2C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c0585a8(int, int, int, float);
int FUN_0c064d24(int, int, int, int);
int FUN_0c07d774(int);
int FUN_0c07e3ae(int, int);
int nlRand(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
float nlLength(int, int);
int FUN_0c187798(void);
int FUN_0c169524(int a4, int a5, int a6);
int FUN_0c169568(int a4, int a5, int a6);
int FUN_0c16957c(int a4, int a5, int a6);
int FUN_0c16958a(int a4, int a5, int a6, int a7);
int FUN_0c1695ba(int a4, int a5, int a6, int a7);
int FUN_0c169706(int a4, int a5);
int FUN_0c169922(int a4, int a5);
int FUN_0c169b38(int a4, int a5);
int FUN_0c169bda(int a4, int a5, int a6, int a7);
int FUN_0c169dbc(int a4, int a5);
int FUN_0c169e98(int a4, int a5, int a6, int a7);
int FUN_0c169f4a(int a4, int a5, int a6);
int FUN_0c16a064(int a4, int a5, int a6, int a7);
int FUN_0c16a112(int a4, int a5, int a6, int a7);
int FUN_0c16a360(int a4, int a5);
int FUN_0c16a40c(int a4);
int FUN_0c16a464(int a4, int a5);
int FUN_0c16a53e(int a4, int a5, int a6);
int FUN_0c16a582(int a4);
int FUN_0c16a6e0(int a4);
int FUN_0c16aa54(int a4);

int FUN_0c169524(int a4, int a5, int a6)
{
    int stk[6];

    *(unsigned char *)(((int)stk + 20)) = a5;
    *(unsigned char *)(((int)stk + 16)) = a6;
    *(int *)((int)stk + 12) = 0xF0;
    *(int *)((int)stk + 8) = 0x0;
    *(int *)((int)stk + 4) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
    *(int *)((int)stk + 0) = 0x100;
    FUN_0c064d24(a4, 0x3, (*(signed char *)(((int)stk + 20))), 0x0);
    return FUN_0c07e3ae(a4, (*(signed char *)(((int)stk + 16))));
}

int FUN_0c169568(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)((((a5 << 2) + (0xC4 + a4)) + 0x0));
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + a6);
    return 0x80;
}

int FUN_0c16957c(int a4, int a5, int a6)
{
    (((struct o41C_uchar *)(a4))->v) = a5;
    *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
    return a6;
}

int FUN_0c16958a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)(((a4 + 0x41C) + 0x0));
    (((struct o41C_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) <= 0) {
        (((struct o41C_uchar *)(a4))->v) = a5;
        t0 = *(signed char *)(((a4 + 0x41C) + 0x1));
        *(unsigned char *)(((a4 + 0x41C) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)(signed char)a7) {
            *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
        }
        return 0x1;
    }
    return 0x0;
}


int FUN_0c169706(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t12;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC1695BA;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(int *)((((*(signed char *)((t0 + 0x2))) << 2) + 0xC203B84))), 0x4B, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        *(unsigned int *)((t0 + 0x38)) = 0x8000;
        t12 = 0xF;
    }
    return t12;
}





int FUN_0c169e98(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x1E;
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            t0 = 0xB4;
        }
        *(unsigned short *)((a4 + 0x1C)) = t0;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = FUN_0c16958a(a4, 0x4, 0x3, 0x6);
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x43, (*(int *)0xC4B40CC));
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}


int FUN_0c16a064(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = FUN_0c16958a(a4, 0x1, 0x0, 0x2);
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x3A, (*(int *)0xC4B40CC));
    }
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = (u0 + 0.0500000007f);
    if (!(1.0f > (u0 + 0.0500000007f))) {
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o40_float *)(a4))->v) = ((((struct o48_float *)(a4))->v));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}



int FUN_0c16a40c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c07d774((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498));
    t1 = t0;
    if ((int)(t0 - (*(int *)((a4 + 0x38)))) > (int)0x8000) {
        t1 = (t0 - 0x10000);
    }
    t2 = t1;
    if ((int)(t1 - (*(int *)((a4 + 0x38)))) < (int)0xFFFF8000) {
        t2 = (t1 + 0x10000);
    }
    t1 = *(int *)((a4 + 0x38));
    t3 = 0xFFFFFD28;
    if ((int)(t2 - (*(int *)((a4 + 0x38)))) >= 0) {
        t3 = 0x2D8;
    }
    *(unsigned int *)((a4 + 0x38)) = ((t1 + t3) & 0xFFFF);
    return t0;
}

int FUN_0c16a464(int a4, int a5)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 1)) {
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0x1555;
        }
        (((struct o78_uint *)(t0))->v) = t1;
        t0 = (((struct oC8_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0xFFFFEAAB;
        }
        (((struct o78_uint *)(t0))->v) = t1;
        t0 = (((struct oCC_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0xFFFFEAAB;
        }
        (((struct o78_uint *)(t0))->v) = t1;
        t0 = (((struct oD0_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0xFFFFEAAB;
        }
        (((struct o78_uint *)(t0))->v) = t1;
        t0 = (((struct oD4_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0xFFFFEAAB;
        }
        (((struct o78_uint *)(t0))->v) = t1;
    } else {
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0x1555;
        }
        (((struct o78_uint *)(t0))->v) = t1;
        t0 = (((struct oC8_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0xFFFFEAAB;
        }
        (((struct o78_uint *)(t0))->v) = t1;
        t0 = (((struct oCC_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0xFFFFEAAB;
        }
        (((struct o78_uint *)(t0))->v) = t1;
    }
    return 0x78;
}

int FUN_0c16a53e(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 1)) {
        t0 = *(int *)(((0xC4 + a4) + 0x8));
        t1 = *(int *)(((0xC4 + a4) + 0x10));
        t2 = 0x0;
        if (a5 != 0) {
            t2 = 0x1555;
        }
        (((struct o78_uint *)(t1))->v) = t2;
        (((struct o78_uint *)(t0))->v) = t2;
    } else {
        t0 = (((struct oCC_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0x1555;
        }
        (((struct o78_uint *)(t0))->v) = t1;
    }
    return 0x78;
}

int FUN_0c16a582(int a4)
{
    register int t0;
    int t2;
    register float u3;

    t0 = (((struct o41C_int *)(a4))->v);
    (((struct o41C_uint *)(a4))->v) = (t0 + 0x1555);
    t2 = *(signed char *)((a4 + 0x2));
    u3 = (float)(int)((math_sin_angle16((t0 + 0x1555))) * 30.0f);
    if ((t2 != 0) && (t2 != 1)) {
        (((struct o7C_uint *)(((((struct oD8_int *)(a4))->v))))->v) = (int)((u3 * 65536.0f) / 360.0f);
        (((struct o7C_uint *)(((((struct oDC_int *)(a4))->v))))->v) = (-(int)((u3 * 65536.0f) / 360.0f));
    } else {
        (((struct o7C_uint *)(((((struct oD0_int *)(a4))->v))))->v) = (int)((u3 * 65536.0f) / 360.0f);
        (((struct o7C_uint *)(((((struct oD4_int *)(a4))->v))))->v) = (-(int)((u3 * 65536.0f) / 360.0f));
    }
    return 0x7C;
}


int FUN_0c16aa54(int a4)
{
    register int t0;
    register int t1;
    int t5;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) > 0) {
        if ((((((struct o160_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) > 0.0f) && (t5 = *(signed char *)0xC540F98, t5 == 0)) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}




