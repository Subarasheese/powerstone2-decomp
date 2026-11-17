/* game/unsorted: functions 0C0E6754-0C0E6934, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f258(int a4, int a5);
int FUN_0c03f346(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0e9122(void);
int FUN_0c0e6754(int a4);
int FUN_0c0e68dc(void);

int FUN_0c0e6754(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        t0 = *(signed char *)((a4 + 0x2));
        if (t0 == 0) {
            (((struct o30_float *)(a4))->v) = ((((struct o0_float *)0xC1CBDDC)->v));
            (((struct o28_float *)(a4))->v) = ((((struct o10_float *)0xC1CBDDC)->v));
            (((struct o2C_float *)(a4))->v) = 0.0f;
        } else {
            if (t0 == 1) {
                (((struct o30_float *)(a4))->v) = ((((struct o4_float *)0xC1CBDDC)->v));
                (((struct o28_float *)(a4))->v) = ((((struct o14_float *)0xC1CBDDC)->v));
                (((struct o2C_float *)(a4))->v) = 0.0f;
            } else {
                (((struct o30_float *)(a4))->v) = ((((struct o0_float *)0xC1CBDDC)->v));
                (((struct o28_float *)(a4))->v) = ((((struct o10_float *)0xC1CBDDC)->v));
                (((struct o2C_float *)(a4))->v) = 0.0f;
                (((struct o15_uchar *)(a4))->v) = 0x63;
            }
        }
        (((struct o12E_ushort *)(a4))->v) = 0xC0F;
        (((struct oAC_ushort *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    t1 = *(signed char *)0xC54098D;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                t2 = FUN_0c0e68dc();
                if (t2 != 0) {
                    return FUN_0c03f346(a4);
                }
                return t2;
            }
            t2 = t0;
            if ((int)t1 >= (int)0x14) {
                t3 = FUN_0c0e9122();
                t2 = t3;
                if (t3 != 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
            }
            return t2;
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t2 = *(short *)((a4 + 0x1C));
        t3 = t2;
        if ((int)t2 <= 0) {
            if ((*(signed char *)((a4 + 0x2))) != 0) {
                (((struct o15_uchar *)(a4))->v) = 0x63;
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            t3 = 0x15;
        }
        return t3;
    }
    t2 = t0;
    if ((int)t1 >= (int)0x12) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        t0 = *(signed char *)(((0x2 + a4) + 0x0));
        (((struct o4C_float *)(a4))->v) = (((*(float *)(((t0 << 2) + 0xC1CBDF4))) - (*(float *)((0xC1CBDEC + (t0 << 2))))) / (float)(*(short *)(((0x1C + a4) + 0x0))));
        t0 = *(signed char *)(((0x2 + a4) + 0x0));
        (((struct o54_float *)(a4))->v) = (((*(float *)(((t0 << 2) + 0xC1CBDE4))) - (*(float *)(((t0 << 2) + 0xC1CBDDC)))) / (float)(*(short *)(((0x1C + a4) + 0x0))));
        t2 = 0xC1CBDDC;
    }
    return t2;
}

int FUN_0c0e68dc(void)
{
    register int t0;

    t0 = FUN_0c03f258(0x2, 0x0);
    if (t0 != 0) {
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0E6754;
        *(unsigned char *)((t0 + 0x2)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c064d24(t0, 0x2, 0x17, 0x1, 0x10, 0x0, 0x0, 0xFFFFFFEF);
    }
    return t0;
}
