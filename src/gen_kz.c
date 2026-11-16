/* Straight-line functions with calls and guards (batch gen_kz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c09a738(int a4, int a5, int a6, int a7);
int FUN_0c0480fa(int a4, int a5, int a6, int a7);

int FUN_0c09a738(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    FUN_0c037bf6(((((struct o3770_int *)(a4))->v)));
    FUN_0c038362(((((struct o3770_int *)(a4))->v)));
    FUN_0c037bf6(a4);
    FUN_0c038362(a4);
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x5, 0x3, (t0), 0x5, 0x3);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x5, 0xFFFFFFFF, 0x5, 0x5);
        t0 = (((struct o3770_int *)(a4))->v);
        t1 = *(int *)(((t0 + 0x118) + 0x4));
        t2 = (((struct o118_int *)(t0))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = (((struct o3770_int *)(a4))->v);
        t1 = *(int *)(((t0 + 0x118) + 0x4));
        t2 = (((struct o118_int *)(t0))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        *(volatile int *)((a4 + 0x3770));
        FUN_0c187798(t2, t1, (t0 + 0x118));
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    return 0x374B;
}

int FUN_0c0480fa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x1E, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        t0 = *(short *)((a4 + 0x1E));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t0 = *(signed char *)0xC541F62;
                if ((unsigned char)t0 != 0) {
                    if ((unsigned char)t0 != 1) {
                        t0 = ((unsigned char)(*(signed char *)0xC40F820) + 0x32);
                    } else {
                        t0 = ((unsigned char)(*(signed char *)0xC40F820) + 0x2D);
                    }
                    t3 = t0;
                } else {
                    t3 = ((unsigned char)(*(signed char *)0xC40F820) + 0x28);
                }
                t0 = (((struct oDC_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, t3, (*(int *)0xC4B410C));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x1F;
                (((struct o6C_float *)(t0))->v) = -230.0f;
                (((struct o70_float *)(t0))->v) = -210.0f;
                t0 = *(signed char *)0xC541F62;
                if ((unsigned char)t0 != 0) {
                    if ((unsigned char)t0 != 1) {
                        t0 = ((unsigned char)(*(signed char *)0xC40F821) + 0x32);
                    } else {
                        t0 = ((unsigned char)(*(signed char *)0xC40F821) + 0x2D);
                    }
                    t3 = t0;
                } else {
                    t3 = ((unsigned char)(*(signed char *)0xC40F821) + 0x28);
                }
                t0 = (((struct oE0_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, t3, (*(int *)0xC4B410C));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x1F;
                (((struct o6C_float *)(t0))->v) = 230.0f;
                (((struct o70_float *)(t0))->v) = -210.0f;
                t2 = 0x70;
            }
            t0 = t2;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = 0xE0;
        }
        t1 = t0;
    }
    return t1;
}
