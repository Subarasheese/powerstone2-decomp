/* game/effect: functions 0C140EF0-0C14105C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c140ef0(int a4, int a5);

int FUN_0c140ef0(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t40;
    register int t22;
    register int t34;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    t3 = FUN_0c03f444(0x5, 0x0, (t2 + 0x2));
    t40 = t3;
    if (t3 == 0) {
    } else {
        *(unsigned int *)((t3 + 0x4)) = 0xC141090;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c187798();
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + 100.0f);
        FUN_0c187798();
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        FUN_0c03744a(((((struct oC8_int *)(t3))->v)), 0x0, 0xF, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x41F;
        (((struct o68_uint *)((*(int *)(((0xC4 + t3) + 0x4)))))->v) = (((((struct oC4_int *)(t3))->v)) + 0x28);
        t22 = (((struct oC8_int *)(t3))->v);
        (((struct o70_float *)(t22))->v) = (((((struct o70_float *)(t22))->v)) + 220.0f);
        (((struct o88_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.699999988f;
        (((struct o14_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.0f;
        FUN_0c03744a(((((struct oCC_int *)(t3))->v)), 0x1, 0xF, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oCC_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oCC_int *)(t3))->v)) + 0x6)) = 0x21F;
        (((struct o68_uint *)((*(int *)(((0xC4 + t3) + 0x8)))))->v) = (((((struct oC4_int *)(t3))->v)) + 0x28);
        t34 = (((struct oCC_int *)(t3))->v);
        (((struct o70_float *)(t34))->v) = (((((struct o70_float *)(t34))->v)) + 220.0f);
        (((struct o88_float *)(((((struct oCC_int *)(t3))->v))))->v) = 0.699999988f;
        (((struct o18_float *)(((((struct oCC_int *)(t3))->v))))->v) = 0.0f;
        (((struct o1C_float *)(((((struct oCC_int *)(t3))->v))))->v) = 0.0f;
        (((struct o20_float *)(((((struct oCC_int *)(t3))->v))))->v) = 0.0f;
        t40 = 0x20;
    }
    return t40;
}
