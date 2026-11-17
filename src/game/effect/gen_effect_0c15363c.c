/* game/effect: functions 0C15363C-0C1539B6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c187798(void);
int memset(int, int, int);
int FUN_0c15363c(int a4);
int FUN_0c153710(int a4, int a5, int a6, int a7);

int FUN_0c15363c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC153710;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        FUN_0c187798();
        FUN_0c187798();
        FUN_0c187798();
        *(unsigned int *)((t0 + 0x10)) = a4;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t2, 0x0, 0x14, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        FUN_0c187798();
        (((struct o88_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        (((struct o8C_float *)(t2))->v) = (*(float *)0xC153780);
        t2 = 0x1;
        t3 = 0x4;
        for (;;) {
            t4 = *(int *)((((0xC4 + t0) + t3) + 0x0));
            FUN_0c037498(t4, 0x0, 0x15, (*(int *)0xC4B40CC));
            t2 = (t2 + 0x1);
            *(unsigned char *)((t4 + 0x0)) = 0x0;
            *(unsigned short *)((t4 + 0x6)) = 0x21F;
            t3 = (t3 + 0x4);
            if ((int)(signed char)t2 >= (int)0x4) {
                break;
            }
        }
        t1 = 0x21F;
    }
    return t1;
}

int FUN_0c153710(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            if (t2 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t2;
        }
        t2 = (((struct oC4_int *)(a4))->v);
        t3 = 0x0;
        if ((*(signed char *)((t2 + 0x0))) != 0) {
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532568))) + 0x28), (t2 + 0x6C));
            *(volatile int *)((a4 + 0x10));
            FUN_0c187798();
            (((struct o78_uint *)(t2))->v) = (((((struct o78_int *)(t2))->v)) - 10922);
            (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) + 0.125f);
            (((struct o84_float *)(t2))->v) = (((((struct o84_float *)(t2))->v)) - 0.100000001f);
            (((struct o88_float *)(t2))->v) = (((((struct o88_float *)(t2))->v)) - 0.100000001f);
            t4 = *(signed char *)(((0x41C + a4) + 0x1));
            *(unsigned char *)(((0x41C + a4) + 0x1)) = (t4 - 1);
            if ((signed char)(t4 - 1) == 0) {
                *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x4;
                (((struct o41C_uchar *)(a4))->v) = ((*(signed char *)(((0x41C + a4) + 0x0))) ^ 0x1);
                FUN_0c037498(t2, (*(signed char *)(((0x41C + a4) + 0x0))), 0x15, (*(int *)0xC4B40CC));
            }
            u0 = (((struct o84_float *)(t2))->v);
            if (!(u0 > 0.0f)) {
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                *(unsigned char *)(((0x41C + a4) + 0x5)) = 0x1;
            }
            t3 = 0x1;
            u1 = u0;
            u0 = 0.0f;
        }
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
        u2 = u1;
        u3 = u0;
        if (((short)(t2 - 1) == 0) && (t0 = *(short *)((a4 + 0x1E)), t0 != 0)) {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            t0 = *(int *)(((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) + (0xC4 + a4)) + 0x4));
            if ((*(signed char *)((t0 + 0x0))) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x4;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                FUN_0c037498(t0, ((*(signed char *)(((0x41C + a4) + 0x2))) << 1), 0x14, (*(int *)0xC4B40CC));
                (((struct o8C_float *)(t0))->v) = 0.125f;
                (((struct o88_float *)(t0))->v) = 0.125f;
                (((struct o84_float *)(t0))->v) = 0.125f;
                (((struct o20_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = 1.0f;
                (((struct o18_float *)(t0))->v) = 1.0f;
                thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (t0 + 0x6C));
                *(volatile int *)((a4 + 0x10));
                FUN_0c187798();
                (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 10922);
                *(unsigned char *)(((0x41C + a4) + 0x2)) = ((int)((int)((*(signed char *)(((0x41C + a4) + 0x2))) + 0x1) % (int)0x3));
            } else {
                u4 = u1;
                u1 = u0;
            }
            u2 = u4;
            u3 = u1;
        }
        t0 = 0xC153918;
        t2 = 0x4;
        t4 = t3;
        u0 = u2;
        u1 = u3;
        for (;;) {
            t3 = *(int *)((((0xC4 + a4) + t2) + 0x0));
            if ((*(signed char *)((t3 + 0x0))) != 0) {
                t0 = 0x84;
                u1 = (*(float *)((t3 + t0)));
                u1 = (u1 + 0.0500000007f);
                *(float *)((t3 + t0)) = u1;
                t0 = (t0 + 0x4);
                u0 = (*(float *)((t3 + t0)));
                u0 = (u0 + 0.0500000007f);
                *(float *)((t3 + t0)) = u0;
                t0 = (t0 + 0x4);
                u1 = (*(float *)((t3 + t0)));
                u1 = (u1 + 0.0500000007f);
                *(float *)((t3 + t0)) = u1;
                t0 = 0x18;
                u0 = (*(float *)((t3 + t0)));
                u0 = (u0 - 0.100000001f);
                *(float *)((t3 + t0)) = u0;
                t0 = 0x1C;
                u1 = (*(float *)((t3 + t0)));
                u1 = (u1 - 0.100000001f);
                *(float *)((t3 + t0)) = u1;
                t0 = 0x20;
                u0 = (*(float *)((t3 + t0)));
                u1 = 0.0f;
                u0 = (u0 - 0.100000001f);
                *(float *)((t3 + t0)) = u0;
                t0 = 0x18;
                u0 = (*(float *)((t3 + t0)));
                t4 = (t4 + 0x1);
                if (!(u0 > u1)) {
                    *(unsigned char *)((t3 + 0x0)) = 0x0;
                }
            }
            t2 = (t2 + 0x4);
            if ((unsigned int)t2 >= (unsigned int)0x10) {
                break;
            }
        }
        t2 = t0;
        if (t4 == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    memset((0x41C + a4), 0x0, 0x14);
    (((struct o41C_uchar *)(a4))->v) = 0x0;
    *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x4;
    *(unsigned short *)((a4 + 0x1C)) = 0x4;
    *(unsigned short *)((a4 + 0x1E)) = 0x3;
    t0 = (((struct oC4_int *)(a4))->v);
    t2 = 0x0;
    if ((*(signed char *)((t0 + 0x0))) != 0) {
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532568))) + 0x28), (t0 + 0x6C));
        *(volatile int *)((a4 + 0x10));
        FUN_0c187798();
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 10922);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.125f);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) - 0.100000001f);
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.100000001f);
        t3 = *(signed char *)(((0x41C + a4) + 0x1));
        *(unsigned char *)(((0x41C + a4) + 0x1)) = (t3 - 1);
        if ((signed char)(t3 - 1) == 0) {
            *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x4;
            (((struct o41C_uchar *)(a4))->v) = ((*(signed char *)(((0x41C + a4) + 0x0))) ^ 0x1);
            FUN_0c037498(t0, (*(signed char *)(((0x41C + a4) + 0x0))), 0x15, (*(int *)0xC4B40CC));
        }
        u0 = (((struct o84_float *)(t0))->v);
        if (!(u0 > 0.0f)) {
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned char *)(((0x41C + a4) + 0x5)) = 0x1;
        }
        t2 = 0x1;
        u1 = u0;
        u0 = 0.0f;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    u2 = u1;
    u3 = u0;
    if (((short)(t0 - 1) == 0) && (t1 = *(short *)((a4 + 0x1E)), t1 != 0)) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        t0 = *(int *)(((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) + (0xC4 + a4)) + 0x4));
        if ((*(signed char *)((t0 + 0x0))) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x4;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            FUN_0c037498(t0, ((*(signed char *)(((0x41C + a4) + 0x2))) << 1), 0x14, (*(int *)0xC4B40CC));
            (((struct o8C_float *)(t0))->v) = 0.125f;
            (((struct o88_float *)(t0))->v) = 0.125f;
            (((struct o84_float *)(t0))->v) = 0.125f;
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (t0 + 0x6C));
            *(volatile int *)((a4 + 0x10));
            FUN_0c187798();
            (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 10922);
            *(unsigned char *)(((0x41C + a4) + 0x2)) = ((int)((int)((*(signed char *)(((0x41C + a4) + 0x2))) + 0x1) % (int)0x3));
        } else {
            u4 = u1;
            u1 = u0;
        }
        u2 = u4;
        u3 = u1;
    }
    t0 = 0xC153918;
    t1 = 0x4;
    t3 = t2;
    u0 = u2;
    u1 = u3;
    for (;;) {
        t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
        if ((*(signed char *)((t2 + 0x0))) != 0) {
            t0 = 0x84;
            u1 = (*(float *)((t2 + t0)));
            u1 = (u1 + 0.0500000007f);
            *(float *)((t2 + t0)) = u1;
            t0 = (t0 + 0x4);
            u0 = (*(float *)((t2 + t0)));
            u0 = (u0 + 0.0500000007f);
            *(float *)((t2 + t0)) = u0;
            t0 = (t0 + 0x4);
            u1 = (*(float *)((t2 + t0)));
            u1 = (u1 + 0.0500000007f);
            *(float *)((t2 + t0)) = u1;
            t0 = 0x18;
            u0 = (*(float *)((t2 + t0)));
            u0 = (u0 - 0.100000001f);
            *(float *)((t2 + t0)) = u0;
            t0 = 0x1C;
            u1 = (*(float *)((t2 + t0)));
            u1 = (u1 - 0.100000001f);
            *(float *)((t2 + t0)) = u1;
            t0 = 0x20;
            u0 = (*(float *)((t2 + t0)));
            u1 = 0.0f;
            u0 = (u0 - 0.100000001f);
            *(float *)((t2 + t0)) = u0;
            t0 = 0x18;
            u0 = (*(float *)((t2 + t0)));
            t3 = (t3 + 0x1);
            if (!(u0 > u1)) {
                *(unsigned char *)((t2 + 0x0)) = 0x0;
            }
        }
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x10) {
            break;
        }
    }
    t1 = t0;
    if (t3 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
