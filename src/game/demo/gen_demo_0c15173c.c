/* game/demo: functions 0C15173C-0C1518F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c15173c(int a4, int a5);
int FUN_0c1517ac(int a4);
int FUN_0c151802(int a4, int a5, int a6, int a7);

int FUN_0c15173c(int a4, int a5)
{
    register int t0;
    register int t7;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC151802;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        FUN_0c187798();
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = a5;
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0xB, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        t7 = 0xF;
    }
    return t7;
}

int FUN_0c1517ac(int a4)
{
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o60_float *)(a4))->v)));
    return 0x54;
}

int FUN_0c151802(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 0.300000012f;
        (((struct o4C_float *)(a4))->v) = 0.300000012f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -0.0199999996f;
        (((struct o58_float *)(a4))->v) = -0.0199999996f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
    }
    FUN_0c1517ac(a4);
    if (!(((((struct o4C_float *)(a4))->v)) > 0.0f)) {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
    }
    if (!(((((struct o54_float *)(a4))->v)) > 0.0f)) {
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) + -0.0666666701f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        t1 = 0x14;
    }
    return t1;
}
