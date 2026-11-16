/* Straight-line functions with calls and guards (batch gen_m): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int);
int FUN_0c112d40(int a4, int a5, int a6, int a7);
int FUN_0c118708(int a4, int a5, int a6, int a7);
int FUN_0c162488(int a4, int a5, int a6);

int FUN_0c112d40(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 80) {
                t1 = t0;
                if (t0 != 99) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    t1 = 0x14;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x7, 0x3, (*(int *)0xC4B410C));
        FUN_0c187798(((((struct oC4_int *)(a4))->v)));
    }
    t0 = (((struct oC4_int *)(a4))->v);
    t1 = 0xC291520;
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t1 = 0xC29152C;
    }
    return FUN_0c17c130((t0 + 0x6C), (0x90 + t0), t1);
}

int FUN_0c118708(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 80) {
                t1 = t0;
                if (t0 != 99) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    t1 = 0x14;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xB, 0xD, (*(int *)0xC4B410C));
        FUN_0c187798(((((struct oC4_int *)(a4))->v)));
    }
    t0 = (((struct oC4_int *)(a4))->v);
    t1 = 0xC291D58;
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t1 = 0xC291D64;
    }
    return FUN_0c17c130((t0 + 0x6C), (0x90 + t0), t1);
}

int FUN_0c162488(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t11;
    register int t9;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC162348;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798(t0);
        *(unsigned int *)((t7 + 0x34)) = 0x0;
        *(unsigned int *)((t7 + 0x38)) = 0x0;
        *(unsigned int *)((t7 + 0x3C)) = 0x0;
        *(unsigned short *)((t7 + 0x1C)) = 0x46;
        *(unsigned short *)((t7 + 0x1E)) = 0x0;
        t9 = (((struct oC4_int *)(t7))->v);
        FUN_0c03744a(t9, 0x0, 0x29, (*(int *)0xC4B40D0));
        *(unsigned char *)((t9 + 0x0)) = 0x1;
        *(unsigned short *)((t9 + 0x6)) = 0x23F;
        (((struct o8C_float *)(t9))->v) = 4.0f;
        (((struct o88_float *)(t9))->v) = 4.0f;
        (((struct o84_float *)(t9))->v) = 4.0f;
        (((struct o18_float *)(t9))->v) = 1.0f;
        (((struct o20_float *)(t9))->v) = 0.200000003f;
        (((struct o1C_float *)(t9))->v) = 0.200000003f;
        t11 = 0x1C;
    }
    return t11;
}
