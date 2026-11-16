/* Straight-line functions with calls and guards (batch gen_cj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c01ab62(int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c036de8(int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c9568(int);
int FUN_0c0cf4fe(int);
int FUN_0c0cf594(int);
int FUN_0c187798(void);
int FUN_0c129108(int a4);
int FUN_0c15173c(int a4, int a5);
int FUN_0c01b0fc(int a4, int a5, int a6);
int FUN_0c0cf770(int a4, int a5, int a6);

int FUN_0c129108(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xE, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC129178;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0xF, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x38)) = (*(int *)((a4 + 0x38)));
        t0 = (FUN_0c187798());
    }
    return t0;
}

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

int FUN_0c01b0fc(int a4, int a5, int a6)
{
    register int t5;
    register int t10;
    register int t11;

    FUN_0c036de8(0x21, a5, a6);
    FUN_0c01cb7c();
    FUN_0c01cc56(0xC, 0xC01A9FE);
    FUN_0c01cc56(((*(signed char *)0xC30541F) + 0x4), 0xC01A9FE);
    t5 = 0x0;
    for (;;) {
        t10 = FUN_0c01cc56((*(short *)((((unsigned char)t5 << 1) + ((((*(signed char *)0xC30541F) << 2) << 1) + 0xC20DF80)))), 0xC01AC62);
        t11 = t5;
        t5 = (t5 + 0x1);
        *(unsigned char *)((t10 + 0x3)) = t11;
        if ((int)(unsigned char)t5 >= (int)0x4) {
            break;
        }
    }
    FUN_0c01ab62(0x0);
    FUN_0c01ab62(0x2);
    return (FUN_0c01cc56(0x2E, 0xC01AA02));
}

int FUN_0c0cf770(int a4, int a5, int a6)
{
    register int t1;

    FUN_0c0c3e3a(a4, a5, a6);
    t1 = *(signed char *)((a4 + 0x41D));
    if (t1 != 0) {
        if (t1 != 9) {
            if (t1 != 10) {
                if (t1 != 11) {
                    return t1;
                }
                return FUN_0c03f346(a4);
            }
            return FUN_0c0c9568(a4);
        }
        return FUN_0c0cf594(a4);
    }
    return FUN_0c0cf4fe(a4);
}
