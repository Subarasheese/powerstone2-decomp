/* game/unsorted: functions 0C14C008-0C14C1A6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c14a7c0(int);
int FUN_0c14c008(int a4);
int FUN_0c14c0a4(int a4, int a5, int a6, int a7);

int FUN_0c14c008(int a4)
{
    register int t0;
    register int t15;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t15 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x1, 0x9, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = 0xD;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC14C0A4;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o2C_float *)(t0))->v) = ((((struct o0_float *)0xC14C148)->v));
        (((struct o30_float *)(t0))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o4_float *)0xC14C148)->v)));
        FUN_0c07e2f4(t0, 0x6);
        FUN_0c064d5a(t0, 0xC202C00);
        t15 = *(signed char *)((t0 + 0x1));
        (((struct o12A_ushort *)(t0))->v) = ((~((int)0x1 << (int)t15)) & ((((struct o12A_short *)(t0))->v)));
    }
    return t15;
}

int FUN_0c14c0a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0250000004f);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0250000004f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.0500000007f);
        (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0500000007f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 - 1);
    }
    FUN_0c14a7c0(a4);
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
    (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 1.0f;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
