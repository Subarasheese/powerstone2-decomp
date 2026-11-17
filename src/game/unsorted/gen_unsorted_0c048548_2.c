/* game/unsorted: functions 0C048548-0C0497B8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int, int);
int FUN_0c048b7a(int a4, int a5, int a6);
int FUN_0c048fc6(int a4, int a5);

int FUN_0c048b7a(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t2 = FUN_0c03f444(0x8, 0x0, 0x1);
    t3 = t2;
    if (t2 != 0) {
        t4 = (((struct oC4_int *)(t2))->v);
        t5 = 0xC1B7BA0;
        if ((*(signed char *)0xC5429A8) != 0) {
            t5 = 0xC1B7BE0;
        }
        FUN_0c037498(t4, 0x0, (*(int *)(((a6 << 2) + t5))), (*(int *)0xC4B410C));
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned short *)((t4 + 0x6)) = 0x1F;
        FUN_0c187798(0x1, 0x1F);
        (((struct o6C_float *)(t4))->v) = 0.0f;
        (((struct o70_float *)(t4))->v) = (((((struct o70_float *)(t4))->v)) - 20.0f);
        (((struct o8C_float *)(t4))->v) = 1.0f;
        (((struct o84_float *)(t4))->v) = 1.0f;
        (((struct o88_float *)(t4))->v) = 0.0f;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = t0;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct oA8_uchar *)(t2))->v) = t1;
        *(unsigned int *)((t2 + 0x4)) = 0xC048B0A;
        u0 = (((struct o0_float *)0xC048CAC)->v);
        (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) / u0);
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) / u0);
        (((struct o30_float *)(t2))->v) = ((((struct o4_float *)0xC048CAC)->v));
        u0 = (((struct o8_float *)0xC048CAC)->v);
        (((struct o44_float *)(t2))->v) = u0;
        (((struct o40_float *)(t2))->v) = u0;
        (((struct o48_float *)(t2))->v) = ((((struct oC_float *)0xC048CAC)->v));
        t3 = 0x48;
    }
    return t3;
}

int FUN_0c048fc6(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t2 = FUN_0c03f444(0x8, 0x0, 0x1);
    t3 = t2;
    if (t2 != 0) {
        t4 = (((struct oC4_int *)(t2))->v);
        FUN_0c037498(t4, 0x0, (a5 + 0x11), (*(int *)0xC4B410C));
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned short *)((t4 + 0x6)) = 0x1F;
        FUN_0c187798(0x1, 0x1F);
        (((struct o6C_float *)(t4))->v) = 0.0f;
        (((struct o70_float *)(t4))->v) = (((((struct o70_float *)(t4))->v)) - 20.0f);
        (((struct o8C_float *)(t4))->v) = 1.0f;
        (((struct o84_float *)(t4))->v) = 1.0f;
        (((struct o88_float *)(t4))->v) = 0.0f;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = t0;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct oA8_uchar *)(t2))->v) = t1;
        *(unsigned int *)((t2 + 0x4)) = 0xC048B0A;
        u0 = (((struct o0_float *)0xC0490A0)->v);
        (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) / u0);
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) / u0);
        (((struct o30_float *)(t2))->v) = ((((struct o2C_float *)0xC0490A0)->v));
        u0 = (((struct o8_float *)0xC0490A0)->v);
        (((struct o44_float *)(t2))->v) = u0;
        (((struct o40_float *)(t2))->v) = u0;
        (((struct o48_float *)(t2))->v) = ((((struct oC_float *)0xC0490A0)->v));
        t3 = 0x48;
    }
    return t3;
}
