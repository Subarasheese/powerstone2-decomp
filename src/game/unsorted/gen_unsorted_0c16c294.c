/* game/unsorted: functions 0C16C294-0C16C44C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c187798(int);
int FUN_0c16c294(int a4, int a5, int a6, int a7);
int FUN_0c16c328(int a4);

int FUN_0c16c294(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    FUN_0c16c328(a4);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0xB4;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c16c328(int a4)
{
    register int t0;
    register int t3;
    register int t24;

    t0 = 0x0;
    for (;;) {
        FUN_0c037320(0x4A, ((((struct oC_int *)0xC4B40CC)->v)));
        t3 = FUN_0c03f444(0x1, 0x0, 0x3);
        t24 = t3;
        if (t3 != 0) {
            *(unsigned int *)((t3 + 0x4)) = 0xC16C484;
            *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t3 + 0x2)) = t0;
            (((struct oA8_uchar *)(t3))->v) = 0x1;
            (((struct oAC_ushort *)(t3))->v) = 0x1F;
            (((struct oA9_uchar *)(t3))->v) = 0x21;
            FUN_0c03744a(((((struct oC4_int *)(t3))->v)), 0x0, 0x4A, ((((struct oC_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
            FUN_0c03744a(((((struct oC8_int *)(t3))->v)), 0x0, 0x54, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x20F;
            (((struct o68_uint *)((*(int *)(((0xC4 + t3) + 0x4)))))->v) = (((((struct oC4_int *)(t3))->v)) + 0x28);
            FUN_0c03744a(((((struct oCC_int *)(t3))->v)), 0x1, 0x54, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oCC_int *)(t3))->v)) + 0x6)) = 0xF;
            (((struct o68_uint *)((*(int *)(((0xC4 + t3) + 0x8)))))->v) = (((((struct oC4_int *)(t3))->v)) + 0x28);
            (((struct o48_float *)(t3))->v) = 0.699999988f;
            (((struct o44_float *)(t3))->v) = 0.699999988f;
            (((struct o40_float *)(t3))->v) = 0.699999988f;
            FUN_0c187798((0xC4 + t3));
            FUN_0c07e3ae(t3, (*(signed char *)0xC274803));
            t24 = (FUN_0c064d24(t3, 0x3, 0x6, 0x0, 0x100, 0xF, 0xF, 0xFFFFFFF0));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t24;
}
