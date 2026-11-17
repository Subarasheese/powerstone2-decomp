/* game/unsorted: functions 0C14ADA0-0C14AF74, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int a4, int a5, int a6, int a7);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c14ada0(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_0c14ae8a(int a4, int a5, int a6, int a7);
int FUN_0c14aeae(int a4, int a5, int a6, int a7);

int FUN_0c14ada0(int a4, int a5, int a6, int a7, int a8, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        t1 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t1, 0x0, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        FUN_0c187798();
        (((struct o20_float *)(t1))->v) = 1.0f;
        (((struct o1C_float *)(t1))->v) = 1.0f;
        (((struct o18_float *)(t1))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x4)) = 0xC14AEAE;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = a7;
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x2)) = a5;
        *(unsigned short *)((t0 + 0x1C)) = a6;
        if ((int)a5 < 0) {
            (((struct o44_float *)(t0))->v) = f4;
            u0 = (((struct o0_float *)0xC14AEEC)->v);
            (((struct o48_float *)(t0))->v) = u0;
            (((struct o40_float *)(t0))->v) = u0;
            t1 = 0x40;
        } else {
            (((struct o48_float *)(t0))->v) = f4;
            (((struct o44_float *)(t0))->v) = f4;
            (((struct o40_float *)(t0))->v) = f4;
            u0 = (((struct o4_float *)0xC14AEEC)->v);
            if (a5 == 0) {
                (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) - u0);
                *(unsigned int *)((t0 + 0x3C)) = 0xFFFFC000;
                t1 = 0x2C;
            } else {
                t1 = a5;
                if (a5 == 1) {
                    (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) - u0);
                    *(unsigned int *)((t0 + 0x3C)) = 0x4000;
                    t1 = 0x2C;
                }
            }
        }
    }
    return t1;
}

int FUN_0c14ae8a(int a4, int a5, int a6, int a7)
{
    return FUN_0c037498(a5, (a6 + a7), 0xA, (*(int *)((((a4 << 2) << 1) + 0xC4B40E0))));
}

int FUN_0c14aeae(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return t4;
        }
        if (((int)(*(signed char *)((a4 + 0x2))) >= 0) && (t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((0x3715 + t0)), t1 != 7)) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, 0x3, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x3;
        if (((int)(*(signed char *)((a4 + 0x2))) >= 0) && (t2 = *(int *)((a4 + 0x10)), t3 = *(signed char *)((0x3715 + t2)), t3 != 7)) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, 0x3, a6, a7);
        }
    }
    t0 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o22_ushort *)(a4))->v) = 0x3;
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        if ((int)((((struct o20_short *)(a4))->v)) > (int)0x3) {
            (((struct o20_ushort *)(a4))->v) = 0x0;
        }
        FUN_0c14ae8a((*(signed char *)((a4 + 0x1))), ((((struct oC4_int *)(a4))->v)), 0x0, ((((struct o20_short *)(a4))->v)));
    } else {
        t0 = 0x3;
    }
    t1 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0xC16);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) <= 0) {
        return ((int (*)(int, int))(FUN_0c03f346))(a4, t0);
    }
    return (short)(t1 - 1);
}
