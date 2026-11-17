/* game/unsorted: functions 0C128954-0C128B50, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c128954(int a4);
int FUN_0c128a18(int a4, int a5, int a6, int a7);

int FUN_0c128954(int a4)
{
    register int t2;
    register int t3;

    t2 = FUN_0c037320(0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC128A18;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)0xC2A0F88) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        (((struct o2C_float *)(t3))->v) = ((((struct o2C_float *)(a4))->v));
        (((struct o48_float *)(t3))->v) = 0.0f;
        (((struct o44_float *)(t3))->v) = 0.0f;
        (((struct o40_float *)(t3))->v) = 0.0f;
        FUN_0c064d24(t3, 0x1, 0x32, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t3 + 0x1))))), 0x0, 0xF0);
        return FUN_0c07e2f4(t3, 0x66);
    }
    return t3;
}

int FUN_0c128a18(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                u0 = (((struct o48_float *)(a4))->v);
                (((struct o48_float *)(a4))->v) = (u0 + 0.0500000007f);
                (((struct o44_float *)(a4))->v) = (u0 + 0.0500000007f);
                (((struct o40_float *)(a4))->v) = (u0 + 0.0500000007f);
                t0 = (((struct oC4_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t0))->v);
                (((struct o8C_float *)(t0))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t0))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t0))->v) = (u0 + 0.0500000007f);
                t0 = (((struct oC4_int *)(a4))->v);
                u0 = (((struct o20_float *)(t0))->v);
                (((struct o20_float *)(t0))->v) = (u0 - 0.100000001f);
                (((struct o1C_float *)(t0))->v) = (u0 - 0.100000001f);
                (((struct o18_float *)(t0))->v) = (u0 - 0.100000001f);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                return t1;
            }
            u0 = (((struct o48_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = (u0 + 0.0500000007f);
            (((struct o44_float *)(a4))->v) = (u0 + 0.0500000007f);
            (((struct o40_float *)(a4))->v) = (u0 + 0.0500000007f);
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o8C_float *)(t0))->v);
            (((struct o8C_float *)(t0))->v) = (u0 + 0.0500000007f);
            (((struct o88_float *)(t0))->v) = (u0 + 0.0500000007f);
            (((struct o84_float *)(t0))->v) = (u0 + 0.0500000007f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = 1.0f;
        (((struct o1C_float *)(t0))->v) = 1.0f;
        (((struct o18_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
