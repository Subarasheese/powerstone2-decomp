/* Straight-line functions with calls and guards (batch gen_ae): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c059c16(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c0d04b4(int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c0d0dd8(int a4);
int FUN_0c126194(int a4);
int FUN_0c13eece(int a4, int a5);
int FUN_0c14f0c2(int a4, int a5);
int FUN_0c15af80(int a4, int a5, int a6);
int FUN_0c163a70(int a4, int a5, int a6, int a7);


int FUN_0c126194(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c037320(0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t1))->v) = 0x235;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC126220;
        u0 = *(float *)0xC1262B8;
        (((struct o48_float *)(t1))->v) = u0;
        (((struct o44_float *)(t1))->v) = u0;
        (((struct o40_float *)(t1))->v) = u0;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        (((struct o22_ushort *)(t1))->v) = 0x0;
        t0 = FUN_0c187798();
        *(unsigned int *)((t1 + 0x38)) = 0x8000;
    }
    return t0;
}

int FUN_0c13eece(int a4, int a5)
{
    register int t0;
    register int t11;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c187798();
        *(unsigned int *)((t0 + 0x38)) = a5;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13EDEE;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c187798();
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x31;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        t11 = 0xA8;
    }
    return t11;
}

int FUN_0c14f0c2(int a4, int a5)
{
    register int t0;
    register int t9;
    register int t5;
    register int t6;
    register float u8;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t9 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x3, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC14F04C;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct oAC_ushort *)(t0))->v) = 0x38;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798();
        t5 = FUN_0c179ac0();
        t6 = ((~(((~t5) + 0x1) & 0x3F)) + 0x1);
        if ((int)t5 >= 0) {
            t6 = (t5 & 0x3F);
        }
        *(unsigned int *)((t0 + 0x3C)) = ((t6 << 8) << 2);
        u8 = *(float *)(((a4 << 2) + 0xC202D20));
        (((struct o48_float *)(t0))->v) = u8;
        (((struct o44_float *)(t0))->v) = u8;
        (((struct o40_float *)(t0))->v) = u8;
        t9 = 0x40;
    }
    return t9;
}

int FUN_0c15af80(int a4, int a5, int a6)
{
    register int t0;
    register int t8;
    register float u7;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t8 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15A404;
        (((struct oAC_ushort *)(t0))->v) = 0x23F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798();
        FUN_0c187798();
        FUN_0c187798();
        (((struct oB4_float *)(t0))->v) = 0.0f;
        (((struct oB8_float *)(t0))->v) = 0.0f;
        (((struct oBC_float *)(t0))->v) = 1.0f;
        u7 = *(float *)0xC2A2AE8;
        (((struct o48_float *)(t0))->v) = u7;
        (((struct o44_float *)(t0))->v) = u7;
        (((struct o40_float *)(t0))->v) = u7;
        t8 = 0x40;
    }
    return t8;
}

int FUN_0c163a70(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t13;

    t0 = FUN_0c03f444(0x1, 0x0, 0x4);
    t13 = 0x0;
    if (t0 != 0) {
        switch (a7) {
        case 0:
            FUN_0c07e3ae(t0, 0x4D);
            break;
        case 1:
            FUN_0c07e3ae(t0, 0x4E);
            break;
        case 2:
            FUN_0c07e3ae(t0, 0x4F);
            break;
        }
        FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)a4)), (~((int)0x1 << (int)a4)), 0xFFFFFEF0);
        FUN_0c187798();
        FUN_0c187798();
        t13 = t0;
    }
    return t13;
}
