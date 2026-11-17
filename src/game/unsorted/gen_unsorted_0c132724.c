/* game/unsorted: functions 0C132724-0C132836, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c132724(int a4, int a5);

int FUN_0c132724(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    FUN_0c037320(0x6, (*(int *)((((signed char)a5 << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, 0x1);
    t2 = t1;
    if (t1 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t1))->v)), 0x0, 0x6, (*(int *)((((signed char)a5 << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = a5;
        (((struct oAC_ushort *)(t1))->v) = 0x1;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct o14_uchar *)(t1))->v) = 0x0;
        (((struct o15_uchar *)(t1))->v) = 0x0;
        *(unsigned short *)((t1 + 0x1C)) = 0x0;
        t3 = ((int (*)(int, int))(FUN_0c187798))(0x1, 0x0);
        t3 = ((int (*)(void))(FUN_0c187798))();
        t3 = ((int (*)(void))(FUN_0c187798))();
        *(unsigned int *)((t1 + 0x4)) = 0xC132698;
        *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = t0;
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x239;
        (((struct o80_uint *)(((((struct oC4_int *)(t1))->v))))->v) = ((int)(((((float)((int)((int)(FUN_0c179ac0()) % (int)0xB4)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        (((struct o84_float *)(((((struct oC4_int *)(t1))->v))))->v) = 0.200000003f;
        (((struct o88_float *)(((((struct oC4_int *)(t1))->v))))->v) = 0.200000003f;
        (((struct o8C_float *)(((((struct oC4_int *)(t1))->v))))->v) = 0.200000003f;
        (((struct o18_float *)(((((struct oC4_int *)(t1))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(t1))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(t1))->v))))->v) = 1.0f;
        t2 = 0x20;
    }
    return t2;
}
