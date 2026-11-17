/* game/unsorted: functions 0C0E90A0-0C0E917E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
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
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f258(int a4, int a5);
int FUN_0c03f346(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0e90a0(int a4, int a5, int a6, int a7);
int FUN_0c0e9122(void);

int FUN_0c0e90a0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 20.0f);
            t0 = 0x2C;
            if (!(0.0f > ((((struct o2C_float *)(a4))->v)))) {
                (((struct o2C_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x5;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            return t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 - 1);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o30_float *)(a4))->v) = ((((struct o0_float *)0xC0E9184)->v));
    (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)0xC0E9184)->v));
    (((struct oAC_ushort *)(a4))->v) = 0x1;
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 20.0f);
        t0 = 0x2C;
        if (!(0.0f > ((((struct o2C_float *)(a4))->v)))) {
            (((struct o2C_float *)(a4))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x5;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t0 = 0x15;
        }
        return t0;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c03f346(a4, 0x0, a6, a7);
    }
    return (short)(t0 - 1);
}

int FUN_0c0e9122(void)
{
    register int t0;

    t0 = FUN_0c03f258(0x2, 0x0);
    if (t0 != 0) {
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0E90A0;
        *(unsigned char *)((t0 + 0x2)) = 0x0;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c064d24(t0, 0x2, 0x15, 0x1, 0x10, 0x0, 0x0, 0xF);
    }
    return t0;
}
