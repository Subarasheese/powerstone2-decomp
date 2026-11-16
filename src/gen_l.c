/* Straight-line functions with calls and guards (batch gen_l): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f444(int, int, int);
int FUN_0c07043c(int, int, int, float, float, float, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c187798(void);
int FUN_0c0f70cc(void);
int FUN_0c0f98ce(void);
int FUN_0c09f494(int a4);

int FUN_0c0f70cc(void)
{
    register int t0;
    register int t10;
    register int t2;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x3);
    t10 = t0;
    if (t0 != 0) {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t1 = t2;
            t1 = (t1 << 2);
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t1) + 0x0))), 0x0, t2, (*(int *)0xC4B410C));
            *(volatile int *)((((0xC4 + t0) + t1) + 0x0));
            FUN_0c187798();
            t2 = (t2 + 0x1);
        }
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0F6D16;
        (((struct o28_float *)(t0))->v) = 0.1875f;
        (((struct o2C_float *)(t0))->v) = 0.3046875f;
        (((struct o30_float *)(t0))->v) = -5.0f;
        (((struct o44_float *)(t0))->v) = 0.125f;
        (((struct o40_float *)(t0))->v) = 0.125f;
        (((struct o48_float *)(t0))->v) = 0.00156250002f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t10 = 0xA9;
    }
    return t10;
}

int FUN_0c0f98ce(void)
{
    register int t0;
    register int t10;
    register int t2;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x3);
    t10 = t0;
    if (t0 != 0) {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t1 = t2;
            t1 = (t1 << 2);
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t1) + 0x0))), 0x0, t2, (*(int *)0xC4B410C));
            *(volatile int *)((((0xC4 + t0) + t1) + 0x0));
            FUN_0c187798();
            t2 = (t2 + 0x1);
        }
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0F94CC;
        (((struct o28_float *)(t0))->v) = 0.1875f;
        (((struct o2C_float *)(t0))->v) = 0.3046875f;
        (((struct o30_float *)(t0))->v) = -5.0f;
        (((struct o44_float *)(t0))->v) = 0.125f;
        (((struct o40_float *)(t0))->v) = 0.125f;
        (((struct o48_float *)(t0))->v) = 0.00156250002f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t10 = 0xA9;
    }
    return t10;
}

int FUN_0c09f494(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c037bf6(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        FUN_0c07ce58(a4, (((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xC, (t0), 0x2, 0xC);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        FUN_0c07043c(a4, t2, t0, 35.0f, -3.5f, 600.0f, 1.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
