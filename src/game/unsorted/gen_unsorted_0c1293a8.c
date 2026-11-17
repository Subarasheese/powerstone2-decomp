/* game/unsorted: functions 0C1293A8-0C12952C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c1293a8(int a4);
int FUN_0c12943a(int a4, int a5, int a6, int a7);

int FUN_0c1293a8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c037320(0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC12943A;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        t2 = FUN_0c179ac0();
        t3 = ((~(((~t2) + 0x1) & 0xF)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0xF);
        }
        *(unsigned int *)((t1 + 0x38)) = (((t3 << 8) << 2) << 2);
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        t0 = (FUN_0c187798());
    }
    return t0;
}

int FUN_0c12943a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    switch (t0) {
    case 0:
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.100000001f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.100000001f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.100000001f);
        break;
    case 1:
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.100000001f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.100000001f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.100000001f);
        break;
    case 2:
        break;
    default:
        if (t0 != 3) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.100000001f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.100000001f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
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
