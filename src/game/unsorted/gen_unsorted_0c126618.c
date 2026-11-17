/* game/unsorted: functions 0C126618-0C1267CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c126618(int a4);
int FUN_0c126708(int a4, int a5, int a6, int a7);

int FUN_0c126618(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = FUN_0c03f444(0x5, 0x1, 0x2);
    t1 = t0;
    if (t0 != 0) {
        u0 = (((struct o0_float *)0xC126750)->v);
        u1 = (((struct o4_float *)0xC126750)->v);
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            t4 = t2;
            t3 = (t3 + (0xC4 + t0));
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t4 = (t4 + 0xC201B00);
            t3 = (*(int *)((t3 + 0x0)));
            FUN_0c03744a(t3, (*(int *)((t4 + 0x0))), (*(int *)((t4 + 0x4))), (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            t4 = t2 == 0;
            t2 = (t2 + 0x1);
            if (t4) {
                t4 = 0x468;
                t4 = (t4 + a4);
                (((struct o68_uint *)(t3))->v) = (((((short)(*(signed char *)((a4 + 0x371A))) * (short)(0x10E0)) + t4) + 0x2D0) + 0x28);
            } else {
                (((struct o74_float *)(t3))->v) = u0;
                (((struct o90_float *)(t3))->v) = 0.0f;
                (((struct o94_float *)(t3))->v) = u1;
                (((struct o98_float *)(t3))->v) = 1.0f;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC126708;
        FUN_0c187798();
        t2 = FUN_0c187798();
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = t2;
    }
    return t1;
}

int FUN_0c126708(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 20) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC8_int *)(a4))->v);
    FUN_0c17c130((t0 + 0x6C), (t0 + 0x6C), (0x90 + t0));
    (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0x2000);
    (((struct o94_float *)(t0))->v) = (((((struct o94_float *)(t0))->v)) - 1.0f);
    t0 = *(signed char *)((a4 + 0x1));
    t1 = ((short)t0 * (short)0x3938);
    if ((*(signed char *)((0xC532540 + ((short)t0 * (short)0x3938)))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
