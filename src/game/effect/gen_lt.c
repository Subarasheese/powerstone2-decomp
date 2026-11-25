/* Straight-line functions with calls and guards (batch gen_lt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int memset(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c153710(int a4, int a5, int a6, int a7);
struct o10_int { char p[0x10]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c153710(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    float u0;
    float u1;
    int t1;
    int t4;
    float u2;
    float u3;
    float u4;

    t1 = *(signed char *)(a4 + 0x14);
    if (t1 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        memset((0x41C + a4), 0x0, 0x14);
        (((struct o41C_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x4;
        (((struct o1C_ushort *)(a4))->v) = 0x4;
        (((struct o1E_ushort *)(a4))->v) = 0x3;
    }
    if ((t1 == 0) || (t1 == 1)) {
        t2 = (((struct oC4_int *)(a4))->v);
        t3 = 0x0;
        if ((*(signed char *)(t2)) != 0) {
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532568))) + 0x28), (t2 + 0x6C));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t2 + 0x78) = *(struct mv3 *)((((((struct o10_int *)(a4))->v)) + 0x34)); }
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
                *(unsigned char *)(t2) = 0x0;
                *(unsigned char *)(((0x41C + a4) + 0x5)) = 0x1;
            }
            t3 = 0x1;
            u1 = u0;
            u0 = 0.0f;
        }
        t2 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t2 - 1);
        u2 = u1;
        u3 = u0;
        if (((short)(t2 - 1) == 0) && (t0 = (((struct o1E_short *)(a4))->v), t0 != 0)) {
            (((struct o1C_ushort *)(a4))->v) = 0x1;
            t0 = *(int *)(((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) + (0xC4 + a4)) + 0x4));
            if ((*(signed char *)(t0)) == 0) {
                (((struct o1C_ushort *)(a4))->v) = 0x4;
                (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) - 1);
                *(unsigned char *)(t0) = 0x1;
                FUN_0c037498(t0, ((*(signed char *)(((0x41C + a4) + 0x2))) << 1), 0x14, (*(int *)0xC4B40CC));
                (((struct o8C_float *)(t0))->v) = 0.125f;
                (((struct o88_float *)(t0))->v) = 0.125f;
                (((struct o84_float *)(t0))->v) = 0.125f;
                (((struct o20_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = 1.0f;
                (((struct o18_float *)(t0))->v) = 1.0f;
                thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532564))) + 0x28), (t0 + 0x6C));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t0 + 0x78) = *(struct mv3 *)((((((struct o10_int *)(a4))->v)) + 0x34)); }
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
            if ((*(signed char *)(t3)) != 0) {
                (((struct o84_float *)(t3))->v) = (((((struct o84_float *)(t3))->v)) + 0.0500000007f);
                t0 = (0x84 + 0x4);
                *(float *)((t3 + t0)) = ((*(float *)((t3 + t0))) + 0.0500000007f);
                t0 = (t0 + 0x4);
                *(float *)((t3 + t0)) = ((*(float *)((t3 + t0))) + 0.0500000007f);
                (((struct o18_float *)(t3))->v) = (((((struct o18_float *)(t3))->v)) - 0.100000001f);
                (((struct o1C_float *)(t3))->v) = (((((struct o1C_float *)(t3))->v)) - 0.100000001f);
                u1 = 0.0f;
                (((struct o20_float *)(t3))->v) = (((((struct o20_float *)(t3))->v)) - 0.100000001f);
                t0 = 0x18;
                u0 = (*(float *)((t3 + 0x18)));
                t4 = (t4 + 0x1);
                if (!(u0 > u1)) {
                    *(unsigned char *)(t3) = 0x0;
                }
            }
            t2 = (t2 + 0x4);
            if ((unsigned int)t2 >= (unsigned int)0x10) {
                break;
            }
        }
        t2 = t0;
        if (t4 == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            t2 = 0x14;
        }
        return t2;
    } else {
        if (t1 == 2) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            return 0x14;
        }
        if (t1 == 3) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t1;
    }
}
