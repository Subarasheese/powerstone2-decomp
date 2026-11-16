/* Straight-line functions with calls and guards (batch gen_an): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c041b58(int, int);
int FUN_0c067784(void);
int FUN_0c085cac(int, int, int, int);
int FUN_0c187798(void);
int FUN_0c0e5874(int a4);
int FUN_0c129534(int a4);
int FUN_0c140130(int a4);
int FUN_0c042b68(int a4, int a5, int a6, int a7);

int FUN_0c0e5874(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((*(signed char *)((((*(signed char *)((a4 + 0x2))) - 1) + 0xC288110))), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(signed char *)((((*(signed char *)((a4 + 0x2))) - 1) + 0xC288110))), (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c187798();
        (((struct o2C_float *)(t1))->v) = 0.0f;
        *(unsigned int *)((t1 + 0x4)) = 0xC0E5754;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        t0 = 0x44;
    }
    return t0;
}

int FUN_0c129534(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x10, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC1295AE;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x10, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        FUN_0c187798();
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 200.0f);
        t0 = 0x2C;
    }
    return t0;
}

int FUN_0c140130(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC1401AA;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        FUN_0c187798();
        t0 = (FUN_0c187798());
    }
    return t0;
}

int FUN_0c042b68(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((((~(*(signed char *)0xC542239)) & (*(int *)0xC40DC50)) & ((int)0x1 << (int)t1)) != 0) {
            (((struct o3714_uchar *)(((t1 * 0x3938) + 0xC532498)))->v) = 0x1;
            FUN_0c085cac(((t1 * 0x3938) + 0xC532498), 0x14, 0x2, a7);
            t0 = (t0 + 0x1);
        } else {
            (((struct o3756_uchar *)(((t1 * 0x3938) + 0xC532498)))->v) = 0x1;
            (((struct o3714_uchar *)(((t1 * 0x3938) + 0xC532498)))->v) = 0x0;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    FUN_0c067784();
    return FUN_0c041b58(t0, (*(int *)0xC40DC50));
}
