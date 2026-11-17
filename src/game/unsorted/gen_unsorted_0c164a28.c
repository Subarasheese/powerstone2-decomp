/* game/unsorted: functions 0C164A28-0C164D08, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o70_float { char p[0x70]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059df2(int, int);
extern int FUN_0c18778c();
extern int FUN_0c187798();
int FUN_0c164a28(int a4, int a5, int a6, int a7);

int FUN_0c164a28(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    register int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;

    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC540F98, t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((*(short *)((a4 + 0x1C))) == 3) {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o4_int *)0xC2A32F8)->v))) && (t1 = (((struct o8_int *)0xC2A32F8)->v), (int)t0 <= (int)t1)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A32A0, 0xC2A3294, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A32F8)->v))), (((((struct o4_int *)0xC2A32F8)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A32F8)->v))) && (t2 = (((struct o10_int *)0xC2A32F8)->v), (int)t0 <= (int)t2)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A32B8, 0xC2A32AC, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A32F8)->v))), (((((struct oC_int *)0xC2A32F8)->v))));
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((-((((struct o88_float *)(t0))->v))) + 0.699999988f) * 550.0f);
        }
        t0 = *(short *)((a4 + 0x1C));
        if ((int)t0 >= (int)((((struct o24_int *)0xC2A32F8)->v))) {
            if ((int)t0 <= (int)((((struct o28_int *)0xC2A32F8)->v))) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3274, 0xC2A3284, (*(short *)((a4 + 0x1C))), (((((struct o28_int *)0xC2A32F8)->v))), (((((struct o24_int *)0xC2A32F8)->v))));
            }
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC2A32F8)->v))) && (t3 = (((struct o18_int *)0xC2A32F8)->v), (int)t0 <= (int)t3)) {
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A32D0, 0xC2A32C4, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A32F8)->v))), (((((struct o14_int *)0xC2A32F8)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o1C_int *)0xC2A32F8)->v))) && (t4 = (((struct o20_int *)0xC2A32F8)->v), (int)t0 <= (int)t4)) {
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A32E8, 0xC2A32DC, (*(short *)((a4 + 0x1C))), (((((struct o20_int *)0xC2A32F8)->v))), (((((struct o1C_int *)0xC2A32F8)->v))));
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((-((((struct o88_float *)(t0))->v))) + 0.699999988f) * 550.0f);
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o2C_int *)0xC2A32F8)->v))) && (t5 = (((struct o30_int *)0xC2A32F8)->v), (int)t0 <= (int)t5)) {
            FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3274, 0xC2A3284, (*(short *)((a4 + 0x1C))), (((((struct o30_int *)0xC2A32F8)->v))), (((((struct o2C_int *)0xC2A32F8)->v))));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        t0 = ((int (*)(void))(FUN_0c18778c))();
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x33, (*(int *)0xC4B40CC));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x33, (*(int *)0xC4B40CC));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x23F;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x23F;
        *(volatile int *)((a4 + 0xC4));
        t0 = ((int (*)(int))(FUN_0c18778c))(0x23F);
        *(volatile int *)((a4 + 0xC8));
        t0 = ((int (*)(void))(FUN_0c18778c))();
        *(volatile int *)((a4 + 0xC4));
        t0 = ((int (*)(int))(FUN_0c187798))(0xC2A325C);
        *(volatile int *)((a4 + 0xC8));
        t0 = ((int (*)(int))(FUN_0c187798))(t6);
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x5F);
        if ((*(short *)((a4 + 0x1C))) == 3) {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o4_int *)0xC2A32F8)->v))) && (t7 = (((struct o8_int *)0xC2A32F8)->v), (int)t0 <= (int)t7)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A32A0, 0xC2A3294, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A32F8)->v))), (((((struct o4_int *)0xC2A32F8)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A32F8)->v))) && (t8 = (((struct o10_int *)0xC2A32F8)->v), (int)t0 <= (int)t8)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A32B8, 0xC2A32AC, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A32F8)->v))), (((((struct oC_int *)0xC2A32F8)->v))));
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((-((((struct o88_float *)(t0))->v))) + 0.699999988f) * 550.0f);
        }
        t0 = *(short *)((a4 + 0x1C));
        if ((int)t0 >= (int)((((struct o24_int *)0xC2A32F8)->v))) {
            if ((int)t0 <= (int)((((struct o28_int *)0xC2A32F8)->v))) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3274, 0xC2A3284, (*(short *)((a4 + 0x1C))), (((((struct o28_int *)0xC2A32F8)->v))), (((((struct o24_int *)0xC2A32F8)->v))));
            }
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC2A32F8)->v))) && (t9 = (((struct o18_int *)0xC2A32F8)->v), (int)t0 <= (int)t9)) {
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A32D0, 0xC2A32C4, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A32F8)->v))), (((((struct o14_int *)0xC2A32F8)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o1C_int *)0xC2A32F8)->v))) && (t10 = (((struct o20_int *)0xC2A32F8)->v), (int)t0 <= (int)t10)) {
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A32E8, 0xC2A32DC, (*(short *)((a4 + 0x1C))), (((((struct o20_int *)0xC2A32F8)->v))), (((((struct o1C_int *)0xC2A32F8)->v))));
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((-((((struct o88_float *)(t0))->v))) + 0.699999988f) * 550.0f);
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o2C_int *)0xC2A32F8)->v))) && (t11 = (((struct o30_int *)0xC2A32F8)->v), (int)t0 <= (int)t11)) {
            FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3274, 0xC2A3284, (*(short *)((a4 + 0x1C))), (((((struct o30_int *)0xC2A32F8)->v))), (((((struct o2C_int *)0xC2A32F8)->v))));
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A32F8)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
