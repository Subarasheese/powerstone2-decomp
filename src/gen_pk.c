/* Straight-line functions with calls and guards (batch gen_pk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3820_ushort { char p[0x3820]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c06420e(int, float, float);
int FUN_0c064262(int, float, float);
int FUN_0c0b4b20(void);
int FUN_0c0b507a(int, int, int);
float FUN_0c0e2220(int, int);
int FUN_0c0f2edc(int);
int FUN_0c14b9c0(int, int);
int FUN_0c14bc74(int);
int FUN_0c14c8fc(int);
int FUN_0c17c130(int, int, int);
float FUN_0c17c450(int);
int FUN_0c187798(int, int);
int FUN_0c16d1ec(int a4, int a5, int a6);
int FUN_0c048fc6(int a4, int a5);
int FUN_0c0645d0(int a4, int a5);
int FUN_0c064696(int a4, int a5);
int FUN_0c0b4fb4(int a4);

int FUN_0c16d1ec(int a4, int a5, int a6)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_4 = *(signed char *)((v0_3 + 0x14));
    v0_5 = (v0_4);
    v0_2 = (v0_3);
    if ((v0_4 == 0)) goto L_C16D208;
    if ((v0_5 == 1)) goto L_C16D216;
    if ((v0_5 == 2)) goto L_C16D2AC;
    L_C16D2AC:;
    return v0_5;
    L_C16D216:;
    if (((*(signed char *)((v0_2 + 0x131))) != 0)) goto L_C16D28E;
    if (((*(signed char *)((v0_2 + 0x132))) != 0)) goto L_C16D28E;
    if ((((((struct o404_int *)(v0_2))->v)) == 0)) goto L_C16D282;
    v0_4 = ((int (*)(int, int, int))(FUN_0c187798))(v0_3, v0_0, v0_1);
    v0_4 = (FUN_0c17c450((((int)stk + 0) + 0xC))) == 0.0f;
    if (v0_4) goto L_C16D282;
    v0_3 = ((int (*)(int, int, int))(FUN_0c187798))(v0_3, v0_0, v0_1);
    v0_3 = (FUN_0c17c450(((int)stk + 0))) == 0.0f;
    if (v0_3) goto L_C16D282;
    v0_3 = !((*(float *)0xC16D2E8) > (FUN_0c0e2220((((int)stk + 0) + 0xC), ((int)stk + 0))));
    if (v0_3) goto L_C16D282;
    FUN_0c059df2((*(signed char *)((v0_2 + 0x1))), 0x4B);
    L_C16D28E:;
    return (((int (*)(int, int, int))(FUN_0c03f346))(v0_2, v0_0, v0_1));
    L_C16D282:;
    v0_3 = *(short *)((v0_2 + 0x1C));
    *(unsigned short *)((v0_2 + 0x1C)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C16D29C;
    goto L_C16D28E;
    L_C16D29C:;
    v0_5 = ((FUN_0c17c130((v0_2 + 0x28), (v0_2 + 0x28), (v0_2 + 0x4C))));
    goto L_C16D2AC;
    L_C16D208:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_2))->v) = 0x1;
    goto L_C16D216;
}

int FUN_0c048fc6(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t2 = FUN_0c03f444(0x8, 0x0, 0x1);
    t3 = t2;
    if (t2 != 0) {
        t4 = (((struct oC4_int *)(t2))->v);
        FUN_0c037498(t4, 0x0, (a5 + 0x11), (*(int *)0xC4B410C));
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned short *)((t4 + 0x6)) = 0x1F;
        FUN_0c187798(0x1, 0x1F);
        (((struct o6C_float *)(t4))->v) = 0.0f;
        (((struct o70_float *)(t4))->v) = (((((struct o70_float *)(t4))->v)) - 20.0f);
        (((struct o8C_float *)(t4))->v) = 1.0f;
        (((struct o84_float *)(t4))->v) = 1.0f;
        (((struct o88_float *)(t4))->v) = 0.0f;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = t0;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct oA8_uchar *)(t2))->v) = t1;
        *(unsigned int *)((t2 + 0x4)) = 0xC048B0A;
        u0 = (((struct o0_float *)0xC0490A0)->v);
        (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) / u0);
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) / u0);
        (((struct o30_float *)(t2))->v) = ((((struct o2C_float *)0xC0490A0)->v));
        u0 = (((struct o8_float *)0xC0490A0)->v);
        (((struct o44_float *)(t2))->v) = u0;
        (((struct o40_float *)(t2))->v) = u0;
        (((struct o48_float *)(t2))->v) = ((((struct oC_float *)0xC0490A0)->v));
        t3 = 0x48;
    }
    return t3;
}

int FUN_0c0645d0(int a4, int a5)
{
    int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a5 + 0x1));
    if ((t0 != 0) && (t0 != 2)) {
        if (t0 != 1) {
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) + u0), (((((struct o8_float *)((a5 + 0x8)))->v)) + u0));
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) - u0), (((((struct o8_float *)((a5 + 0x8)))->v)) + u0));
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) + u0), (((((struct o8_float *)((a5 + 0x8)))->v)) - u0));
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            u1 = (((((struct o8_float *)(a5))->v)) - u0);
            u2 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u0);
        } else {
            FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v))));
            u1 = (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v)));
            u2 = (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v)));
        }
        u0 = u1;
        u1 = u2;
    } else {
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) + u2), (((((struct o8_float *)((a5 + 0x8)))->v)) + u2));
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) - u2), (((((struct o8_float *)((a5 + 0x8)))->v)) + u2));
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c06420e(a4, (((((struct o8_float *)(a5))->v)) + u2), (((((struct o8_float *)((a5 + 0x8)))->v)) - u2));
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        u0 = (((((struct o8_float *)(a5))->v)) - u2);
        u1 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u2);
    }
    return FUN_0c06420e(a4, u0, u1);
}

int FUN_0c064696(int a4, int a5)
{
    int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a5 + 0x1));
    if ((t0 != 0) && (t0 != 2)) {
        if (t0 != 1) {
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) + u0), (((((struct o8_float *)((a5 + 0x8)))->v)) + u0));
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) - u0), (((((struct o8_float *)((a5 + 0x8)))->v)) + u0));
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) + u0), (((((struct o8_float *)((a5 + 0x8)))->v)) - u0));
            u0 = (((struct oC_float *)((a5 + 0x8)))->v);
            u1 = (((((struct o8_float *)(a5))->v)) - u0);
            u2 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u0);
        } else {
            FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) + ((((struct o14_float *)((a5 + 0x8)))->v))));
            FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) + ((((struct oC_float *)((a5 + 0x8)))->v))), (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v))));
            u1 = (((((struct o8_float *)(a5))->v)) - ((((struct oC_float *)((a5 + 0x8)))->v)));
            u2 = (((((struct o8_float *)((a5 + 0x8)))->v)) - ((((struct o14_float *)((a5 + 0x8)))->v)));
        }
        u0 = u1;
        u1 = u2;
    } else {
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) + u2), (((((struct o8_float *)((a5 + 0x8)))->v)) + u2));
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) - u2), (((((struct o8_float *)((a5 + 0x8)))->v)) + u2));
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        FUN_0c064262(a4, (((((struct o8_float *)(a5))->v)) + u2), (((((struct o8_float *)((a5 + 0x8)))->v)) - u2));
        u2 = (((struct oC_float *)((a5 + 0x8)))->v);
        u0 = (((((struct o8_float *)(a5))->v)) - u2);
        u1 = (((((struct o8_float *)((a5 + 0x8)))->v)) - u2);
    }
    return FUN_0c064262(a4, u0, u1);
}

int FUN_0c0b4fb4(int a4)
{
    register int t6;
    register int t7;
    register int t11;

    (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct o126_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oBC_float *)(a4))->v) = 1.0f;
    (((struct oB8_float *)(a4))->v) = 1.0f;
    (((struct oB4_float *)(a4))->v) = 1.0f;
    (((struct o26_uchar *)(a4))->v) = 0x1;
    (((struct o3820_ushort *)(a4))->v) = 0x1;
    FUN_0c14b9c0(a4, 0x8);
    FUN_0c14b9c0(a4, 0xC);
    FUN_0c14bc74(a4);
    FUN_0c14c8fc(a4);
    *(unsigned int *)(((0x38F8 + a4) + 0x2C)) = (FUN_0c0f2edc((*(signed char *)((a4 + 0x1)))));
    t6 = 0x0;
    t7 = 0x0;
    for (;;) {
        *(float *)((((0x38F8 + a4) + t7) + 0x0)) = ((((struct o8_float *)(((*(int *)((0xC25D654 + ((FUN_0c0b4b20()) << 2)))) + t6)))->v));
        t11 = (((0x38F8 + a4) + 0xC) + t7);
        t7 = (t7 + 0x4);
        *(float *)((t11 + 0x0)) = 0.0f;
        t6 = (t6 + 0x10);
        if ((unsigned int)t7 >= (unsigned int)0xC) {
            break;
        }
    }
    (((struct o446_uchar *)(a4))->v) = 0x0;
    (((struct o447_uchar *)(a4))->v) = 0x0;
    (((struct o445_uchar *)(a4))->v) = 0x0;
    (((struct o445_uchar *)(a4))->v) = 0x0;
    (((struct o14_uchar *)(a4))->v) = 0x0;
    return FUN_0c0b507a(a4, 0x20, 0x4);
}
