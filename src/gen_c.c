/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3B_uchar { char p[0x3B]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c035646(void);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f444(int, int, int);
int FUN_0c042544(void);
int FUN_0c042574(void);
int FUN_0c0522be(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07035a(int, float, float, float, float);
int FUN_0c07cce0(int, int);
int FUN_0c07d666(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c187798(void);
int FUN_0c16ac5c(int a4);
int FUN_0c0a973c(int a4);
int FUN_0c042740(int a4, int a5, int a6, int a7);

int FUN_0c16ac5c(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t10;

    t0 = 0x0;
    for (;;) {
        t2 = FUN_0c037320(0x44, (*(int *)0xC4B40CC));
        t3 = FUN_0c03f444(0x1, 0x0, t2);
        t10 = t3;
        if (t3 != 0) {
            *(unsigned int *)((t3 + 0x4)) = 0xC16AD22;
            *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t3 + 0x2)) = t0;
            FUN_0c03733c(t3, 0x44, (*(int *)0xC4B40CC));
            (((struct oA8_uchar *)(t3))->v) = 0x1;
            (((struct oAC_ushort *)(t3))->v) = 0x1F;
            (((struct oA9_uchar *)(t3))->v) = 0x21;
            (((struct o48_float *)(t3))->v) = 1.0f;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 1.0f;
            FUN_0c187798();
            FUN_0c07e3ae(t3, (*(signed char *)0xC274836));
            t10 = (FUN_0c064d24(t3, 0x3, 0x11, 0x0, 0x100, 0xF, 0xF, 0xFFFFFFF0));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    return t10;
}

int FUN_0c0a973c(int a4)
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
        t0 = FUN_0c07cce0(a4, 0xC25D45C);
        if (t0 != 0) {
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d666((a4 + 0x28), (((t0 - 1) * 0x3938) + 0xC5324C0)));
        }
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x16, (t0), 0x2, 0x16);
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
        FUN_0c07035a(a4, 45.0f, -2.79999995f, 400.0f, 1.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c042740(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    if ((*(signed char *)0xC5421FB) == 0) {
        t0 = *(signed char *)0xC5421FB;
        (((struct o1_uchar *)0xC5421FA)->v) = (t0 + 0x1);
        t1 = (t0 + 0x1);
        t0 = 0xC532498;
        t2 = 0xC532498;
        t3 = 0xC532498;
        t4 = 0xC532498;
        for (;;) {
            if ((*(signed char *)((t4 + 0x3714))) != 0) {
                t1 = 0xC085CAC;
                t2 = 0x0;
                t0 = t3;
                FUN_0c085cac(t0, t2, 0x0, a7);
            } else {
                t5 = t1;
                t6 = t0;
                t7 = t2;
            }
            t4 = (t4 + 0x3938);
            t1 = t5;
            t0 = t6;
            t2 = t7;
            t3 = (t3 + 0x3938);
            if ((unsigned int)t4 >= (unsigned int)0xC540978) {
                break;
            }
        }
        FUN_0c0522be((*(int *)0xC241BC8));
        (((struct o3B_uchar *)0xC5421FA)->v) = 0x2;
        if ((*(signed char *)0xC542361) != 0) {
            FUN_0c042544();
        } else {
            FUN_0c042574();
        }
        FUN_0c035646();
        *(unsigned char *)0xC40F828 = 0x0;
        t0 = 0x0;
        for (;;) {
            if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
                *(unsigned char *)0xC40F828 = ((*(signed char *)0xC40F828) | ((int)0x1 << (int)t0));
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
        t0 = 0x3714;
    } else {
        (((struct o0_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FA) + 0x1);
        (((struct o1_uchar *)0xC5421FA)->v) = 0x0;
        t0 = 0x0;
    }
    return t0;
}
