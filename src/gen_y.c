/* Straight-line functions with calls and guards (batch gen_y): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c169524(int, int, int);
int FUN_0c187798(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c1254e8(int a4);
int FUN_0c169922(int a4, int a5);
int FUN_0c0db188(int a4, int a5);

int FUN_0c1254e8(int a4)
{
    register int t0;
    register int t9;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t9 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t1 << 2) + (0xC4 + t0)) + 0x0))), t1, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t1 = (t1 + 0x1);
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC125582;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0x21F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC125582;
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(t0))->v) = (1.0f + 1.0f);
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct oBC_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 1.0f;
        (((struct oB4_float *)(t0))->v) = 1.0f;
        t9 = 0xB4;
    }
    return t9;
}

int FUN_0c169922(int a4, int a5)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x39, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x1, 0x0, t1);
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x39, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x4)) = 0xC1697B8;
        *(unsigned char *)((t2 + 0x2)) = a5;
        thunk_FUN_0c058310((((((struct oCC_int *)(a4))->v)) + 0x28), (t2 + 0x28));
        FUN_0c187798();
        (((struct o48_float *)(t2))->v) = 0.0f;
        (((struct o44_float *)(t2))->v) = 0.0f;
        (((struct o40_float *)(t2))->v) = 0.0f;
        *(unsigned int *)((t2 + 0x10)) = a4;
        return FUN_0c169524(t2, 0x29, 0x61);
    }
    return t2;
}

int FUN_0c0db188(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t11;
    register int t6;
    register int t8;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0DB21C;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        t6 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t6, 0x6, 0x81, (*(int *)0xC4B410C));
        *(unsigned char *)((t6 + 0x0)) = 0x1;
        *(unsigned short *)((t6 + 0x6)) = 0xF;
        t8 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t8, 0x7, 0x81, (*(int *)0xC4B410C));
        *(unsigned char *)((t8 + 0x0)) = 0x1;
        *(unsigned short *)((t8 + 0x6)) = 0xF;
        t11 = 0xF;
    }
    return t11;
}
