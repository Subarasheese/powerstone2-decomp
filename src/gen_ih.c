/* Straight-line functions with calls and guards (batch gen_ih): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3724_uchar { char p[0x3724]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o373B_uchar { char p[0x373B]; unsigned char v; };
struct o3788_float { char p[0x3788]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o418_int { char p[0x418]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o70_float { char p[0x70]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c011974(int);
int FUN_0c015944(void);
int FUN_0c018968(void);
int FUN_0c018fd2(int);
int FUN_0c01a024(int);
int FUN_0c01a9c0(void);
int FUN_0c01c392(int);
int FUN_0c01cd2c(int);
int FUN_0c01cd54(int);
int FUN_0c01cda2(int, int, int, int, int, int, int);
int FUN_0c01e9e4(void);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0221b0(void);
int FUN_0c0222a4(int, int, int);
extern int FUN_0c02568a();
int FUN_0c02a94e(void);
int FUN_0c02aa9e(void);
int FUN_0c02b692(int, int, int);
int FUN_0c02b7fc(float);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c05950c(void);
int FUN_0c059536(int);
int FUN_0c0595a4(int);
int FUN_0c059946(int);
int FUN_0c059e60(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05f7a0(int);
int FUN_0c064ee4(int, int);
int FUN_0c064f02(int);
int FUN_0c067734(int);
int FUN_0c06817c(int);
int FUN_0c074602(void);
int FUN_0c0752a8(int);
int FUN_0c075328(int);
int FUN_0c07a65c(int, int, int, int);
int FUN_0c07a6aa(int, int, int, int);
int FUN_0c07daea(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0ae748(int);
int FUN_0c0b11ba(void);
int FUN_0c0b11cc(int);
extern int FUN_0c0b124a();
int FUN_0c0b1250(void);
int FUN_0c0b1254(void);
int FUN_0c0b1258(void);
int FUN_0c0b21ac(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0cb6a4(int);
int FUN_0c0cb776(int);
int FUN_0c0d01f2(int);
int FUN_0c0d04c4(int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c104c7a(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c105014(int, int);
int FUN_0c1053d8(int, int);
int FUN_0c113800(int, int);
int FUN_0c1171f0(int);
int FUN_0c118412(int);
int FUN_0c1213d8(int);
int FUN_0c1353a4(int, int, int, int);
int FUN_0c1358c2(int);
int FUN_0c136d54(int, int, int, int);
int FUN_0c136f78(int, int, int);
int FUN_0c143ff0(int, int);
int FUN_0c1441a6(int, int);
int FUN_0c144234(int);
int FUN_0c144a68(int, int, int, int, int, int, int);
int FUN_0c14a104(int, int);
int FUN_0c14fe04(int, int, int, float);
int FUN_0c161128(int);
int FUN_0c179ac0(void);
int FUN_0c17a4c0(int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c1864e0(int, int);
int FUN_0c186740(int, int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int dbg_printf(int, ...);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
float FUN_0c1351ca(int a4, int a5, int a6, int a7);
int FUN_0c0817bc(int a4, int a5);
int FUN_0c16f454(int a4, int a5, int a6);
int FUN_0c075500(int a4);
int FUN_0c0b125c(int a4, int a5, int a6, int a7);
int FUN_0c0cbdbc(int a4, int a5, int a6, int a7, int a8);
int FUN_0c158824(int a4);
int FUN_0c15e960(int a4, int a5);
int FUN_0c025f5c(float f4);
int FUN_0c0756b4(int a4);
int FUN_0c114044(int a4);
int FUN_0c144494(int a4);
int FUN_0c0117c4(void);
int FUN_0c059a28(int a4);
int FUN_0c0d352c(int a4, int a5, int a6, int a7);
int FUN_0c136ff4(int a4, int a5, int a6, int a7);
int FUN_0c025c46(int a4, int a5, int a6);

float FUN_0c1351ca(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F12;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    (((struct oA8_uchar *)(v0_1))->v) = (*(signed char *)(((*(int *)((v0_1 + 0x10))) + 0xA8)));
    v0_0 = (((struct oC4_int *)(v0_1))->v);
    (((struct o78_uint *)(v0_0))->v) = (((((struct o78_int *)(v0_0))->v)) + 0x1555);
    v0_0 = (((struct oC4_int *)(v0_1))->v);
    (((struct o78_uint *)(v0_0))->v) = (((((struct o78_int *)(v0_0))->v)) & 0xFFFF);
    v0_0 = (((struct oC4_int *)(v0_1))->v);
    (((struct o7C_uint *)(v0_0))->v) = (((((struct o7C_int *)(v0_0))->v)) + 0x71C);
    v0_0 = (((struct oC4_int *)(v0_1))->v);
    (((struct o7C_uint *)(v0_0))->v) = (((((struct o7C_int *)(v0_0))->v)) & 0xFFFF);
    v0_7 = *(signed char *)((v0_1 + 0x14));
    v0_6 = (v0_7);
    v0_5 = (0x0);
    v0_0 = (v0_1);
    v0_1 = (0xFFFF);
    if ((v0_7 == 0)) goto L_C13526C;
    if ((v0_6 == 1)) goto L_C1352BC;
    if ((v0_6 != 2)) goto L_C13522E;
    L_C13536E:;
    v0_6 = ((FUN_0c03f346(v0_0, v0_2, v0_3, v0_4)));
    L_C135374:;
    return F0;
    L_C13522E:;
    goto L_C13536E;
    L_C1352BC:;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    if (((int)(*(short *)((v0_0 + 0x1E))) > (int)0x5)) goto L_C1352D0;
    (((struct o12E_ushort *)(v0_0))->v) = v0_5;
    L_C1352DA:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    v0_6 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C1352E4;
    v0_6 = ((v0_6 & 0x3));
    L_C1352EE:;
    if ((v0_6 != 0)) goto L_C13530C;
    *(float *)(((int)stk + 8)) = 0.200000003f;
    *(float *)(((int)stk + 4)) = 0.200000003f;
    *(float *)(((int)stk + 0)) = 0.200000003f;
    FUN_0c1353a4(v0_0, 0x0, (v0_0 + 0x28), ((int)stk + 0));
    L_C13530C:;
    if (((*(signed char *)((v0_0 + 0x131))) != 0)) goto L_C13531E;
    v0_1 = (FUN_0c064f02(v0_0)) == 0;
    if (!(v0_1)) goto L_C13531E;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C135342;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C135342;
    L_C13531E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    FUN_0c1358c2(v0_0);
    L_C135342:;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    v0_6 = (0x2C);
    goto L_C135374;
    L_C1352E4:;
    v0_6 = (((~(((~v0_6) + 0x1) & 0x3)) + 0x1));
    goto L_C1352EE;
    L_C1352D0:;
    (((struct o12E_ushort *)(v0_0))->v) = 0xF0;
    goto L_C1352DA;
    L_C13526C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_5;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x258;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_5;
    w0_0 = math_sin_angle16((*(int *)((v0_0 + 0x38))));
    w0_0 = (w0_0 * (math_cos_angle16((*(int *)((v0_0 + 0x34))))));
    (((struct o4C_float *)(v0_0))->v) = (w0_0 * 50.0f);
    w0_0 = math_cos_angle16((*(int *)((v0_0 + 0x38))));
    w0_0 = (w0_0 * (math_cos_angle16((*(int *)((v0_0 + 0x34))))));
    (((struct o54_float *)(v0_0))->v) = (w0_0 * 50.0f);
    (((struct o50_float *)(v0_0))->v) = (-((math_sin_angle16((*(int *)((v0_0 + 0x34))))) * 50.0f));
    goto L_C1352BC;
}

int FUN_0c0817bc(int a4, int a5)
{
    int stk[8];
    register int t6;
    register int t32;
    register int t36;
    register int t37;
    register int t38;
    register int t39;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x6;
    (((struct o37C0_float *)(a4))->v) = ((((struct o168_float *)(a4))->v));
    (((struct o3788_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
    FUN_0c067734(a4);
    if ((*(signed char *)(((int)stk + 12))) == 2) {
        FUN_0c07daea(a4);
        return FUN_0c085d0c(a4);
    }
    t6 = *(signed char *)((a4 + 0x371D));
    switch (t6) {
    case 2:
        break;
    case 3:
        *(int *)((int)stk + 8) = 0xA0;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xA0, 0xFFFFFFFF, 0x3, 0xA0);
        break;
    case 5:
        *(int *)((int)stk + 8) = 0xBC;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xBC, 0xFFFFFFFF, 0x3, 0xBC);
        break;
    case 6:
        *(int *)((int)stk + 8) = 0xD9;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD9, 0xFFFFFFFF, 0x3, 0xD9);
        break;
    default:
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x4;
        (((struct o3724_uchar *)(a4))->v) = 0x0;
        if (((((struct o160_float *)(a4))->v)) == 0.0f) {
            if ((*(signed char *)((a4 + 0x372C))) == 0) {
                *(int *)((int)stk + 8) = 0x2A;
                *(int *)((int)stk + 4) = 0x4;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2A, 0xFFFFFFFF, 0x4, 0x2A);
            } else {
                *(int *)((int)stk + 8) = 0x34;
                *(int *)((int)stk + 4) = 0x4;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x34, 0xFFFFFFFF, 0x4, 0x34);
            }
        } else {
            FUN_0c07e868(a4, 0x8, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
        }
        break;
    }
    t32 = FUN_0c064ee4(a4, 0x2);
    if (t32 != 0) {
        FUN_0c07daea(a4);
        return FUN_0c085d0c(a4);
    }
    (((struct o37A4_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 5.0f);
    t36 = *(int *)(((0x118 + a4) + 0x4));
    t37 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t36))->v) = 1.0f;
    (((struct o9C_float *)(t36))->v) = 1.0f;
    (((struct oA0_float *)(t37))->v) = 1.0f;
    (((struct o9C_float *)(t37))->v) = 1.0f;
    t38 = *(int *)(((0x118 + a4) + 0x4));
    t39 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t38))->v) = 1.0f;
    (((struct o98_float *)(t39))->v) = 1.0f;
    (((struct o94_float *)(t38))->v) = 1.0f;
    (((struct o94_float *)(t39))->v) = 1.0f;
    FUN_0c037bf6(a4);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return FUN_0c07daea(a4);
}

int FUN_0c16f454(int a4, int a5, int a6)
{
    int stk[4];
    register int t1;
    register int t31;
    register int t2;
    register int t5;
    register int t29;
    register int t13;
    register int t15;
    register float t16;
    register int t24;
    register int t25;
    register int t3;
    register float u4;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t1 = FUN_0c037320(0x1D, (*(int *)0xC4B40D8));
    t31 = t1;
    if ((int)t1 < 0) {
    } else {
        t2 = 0x4;
        for (;;) {
            t5 = FUN_0c03f444(0x1, 0x0, 0x1);
            t29 = t5;
            if (t5 == 0) {
            } else {
                *(unsigned char *)((t5 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x1)));
                *(unsigned char *)((t5 + 0x2)) = (*(signed char *)(((int)stk + 8)));
                *(unsigned int *)((t5 + 0x4)) = 0xC16F354;
                (((struct oA8_uchar *)(t5))->v) = 0x1;
                (((struct oAC_ushort *)(t5))->v) = 0x1F;
                (((struct oA9_uchar *)(t5))->v) = 0x21;
                (((struct o48_float *)(t5))->v) = 1.0f;
                (((struct o44_float *)(t5))->v) = 1.0f;
                (((struct o40_float *)(t5))->v) = 1.0f;
                *(volatile int *)(((int)stk + 12));
                FUN_0c187798();
                t13 = (*(int *)(((*(int *)(((int)stk + 4))) + 0x38)));
                *(int *)((int)stk + 0) = t13;
                t15 = (int)((int)(FUN_0c179ac0()) % (int)0x41);
                *(unsigned int *)((t5 + 0x38)) = ((int)(((float)t15 * 65536.0f) / 360.0f) + t13);
                u4 = 4.4000001f;
                t16 = math_sin_angle16(((int)(((float)t15 * 65536.0f) / 360.0f) + t13));
                (((struct o4C_float *)(t5))->v) = (t16 * u4);
                (((struct o54_float *)(t5))->v) = ((math_cos_angle16((*(int *)((t5 + 0x38))))) * u4);
                (((struct o60_float *)(t5))->v) = 0.0f;
                (((struct o58_float *)(t5))->v) = 0.0f;
                (((struct o50_float *)(t5))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xF)) + 10.0f);
                (((struct o5C_float *)(t5))->v) = -1.0f;
                *(unsigned short *)((t5 + 0x1C)) = 0x0;
                t3 = ((((struct oC4_int *)(t5))->v));
                FUN_0c03744a(t3, 0x1, 0x1D, (*(int *)0xC4B40D8));
                *(unsigned char *)((t3 + 0x0)) = 0x1;
                *(unsigned short *)((t3 + 0x6)) = 0x1F;
                t24 = FUN_0c179ac0();
                t25 = ((~(((~t24) + 0x1) & 0x3)) + 0x1);
                if ((int)t24 >= 0) {
                    t25 = (t24 & 0x3);
                }
                (((struct o8C_float *)(t3))->v) = (((float)t25 / 10.0f) + 0.699999988f);
                (((struct o88_float *)(t3))->v) = (((float)t25 / 10.0f) + 0.699999988f);
                (((struct o84_float *)(t3))->v) = (((float)t25 / 10.0f) + 0.699999988f);
                FUN_0c07e3ae(t5, 0xA7);
                t29 = (FUN_0c0c2ab6(t5, 0x3E));
            }
            t2 = (t2 - 0x1);
            if (t2 != 0) continue;
            break;
        }
        t31 = t29;
    }
    return t31;
}


int FUN_0c0b125c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)((a4 + 0x18));
            switch (t1) {
            case 0:
                FUN_0c0b11ba();
                break;
            case 1:
                FUN_0c0b11cc(a4);
                break;
            case 2:
                t1 = ((int (*)(int, int, int, int))(FUN_0c0b124a))(a4, a5, a6, a7);
                break;
            case 3:
                FUN_0c0b1250();
                break;
            case 4:
                FUN_0c0b1254();
                break;
            case 5:
                FUN_0c0b1258();
                break;
            }
            return FUN_0c037bf6(a4);
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct o18_uchar *)(a4))->v) = 0x5;
                t0 = *(signed char *)((a4 + 0x1));
                t1 = 0x5;
                t2 = (t0);
                t3 = t0;
                t0 = 0x5;
            } else {
                (((struct o18_uchar *)(a4))->v) = 0x4;
                t4 = *(signed char *)((a4 + 0x1));
                t1 = 0x4;
                t2 = (t4);
                t3 = t4;
                t0 = 0x4;
            }
            FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
        } else {
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                (((struct o18_uchar *)(a4))->v) = 0x2;
                t0 = *(signed char *)((a4 + 0x1));
                t1 = 0x3;
                t2 = (t0);
                t3 = t0;
                t0 = 0x3;
            } else {
                (((struct o18_uchar *)(a4))->v) = 0x1;
                t4 = *(signed char *)((a4 + 0x1));
                t1 = 0xD;
                t2 = (t4);
                t3 = t4;
                t0 = 0xD;
            }
            FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
        }
    } else {
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            (((struct o18_uchar *)(a4))->v) = 0x0;
            t0 = *(signed char *)((a4 + 0x1));
            t1 = 0x2;
            t2 = (t0);
            t3 = t0;
            t0 = 0x2;
        } else {
            (((struct o18_uchar *)(a4))->v) = 0x1;
            t4 = *(signed char *)((a4 + 0x1));
            t1 = 0xD;
            t2 = (t4);
            t3 = t4;
            t0 = 0xD;
        }
        FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
    }
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
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    (((struct o19_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    FUN_0c0ae748(a4);
    t0 = *(signed char *)((a4 + 0x18));
    switch (t0) {
    case 0:
        FUN_0c0b11ba();
        break;
    case 1:
        FUN_0c0b11cc(a4);
        break;
    case 2:
        t0 = ((int (*)(int))(FUN_0c0b124a))(a4);
        break;
    case 3:
        FUN_0c0b1250();
        break;
    case 4:
        FUN_0c0b1254();
        break;
    case 5:
        FUN_0c0b1258();
        break;
    }
    return FUN_0c037bf6(a4);
}

int FUN_0c0cbdbc(int a4, int a5, int a6, int a7, int a8)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t7;
    register int t9;
    register int t11;
    register int t61;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 16)) = (t0 * 0x34);
    (((struct o14_uchar *)(((int)stk + 0)))->v) = (*(signed char *)((((t0 * 0x34) + 0xC2738B8) + 0x1)));
    t2 = *(signed char *)(((int)stk + 20));
    t3 = *(int *)0xC4B40CC;
    *(unsigned int *)(((int)stk + 12)) = t2;
    t4 = FUN_0c037320(t2, t3);
    if ((int)t4 <= 0) {
        FUN_0c0d01f2(a5);
        t61 = 0x0;
    } else {
        t7 = FUN_0c037320(0x1C, (*(int *)0xC4B40CC));
        if ((int)t7 <= 0) {
            FUN_0c0d01f2(a5);
            t61 = 0x0;
        } else {
            t9 = a5;
            if ((int)a5 >= (int)0x7) {
                t9 = 0x0;
            }
            t11 = FUN_0c03f444(0x9, 0x0, 0x4);
            if (t11 == 0) {
                FUN_0c0d01f2(t9);
                t61 = 0x0;
            } else {
                FUN_0c03744a(((((struct oC4_int *)(t11))->v)), t9, (*(int *)(((int)stk + 12))), (*(int *)0xC4B40CC));
                FUN_0c03744a(((((struct oC8_int *)(t11))->v)), 0x0, 0x1C, (*(int *)0xC4B40CC));
                FUN_0c03744a(((((struct oCC_int *)(t11))->v)), 0x1, 0x1C, (*(int *)0xC4B40CC));
                FUN_0c03744a(((((struct oD0_int *)(t11))->v)), 0x2, 0x1C, (*(int *)0xC4B40CC));
                *(unsigned int *)((t11 + 0x4)) = 0xC0CBCB0;
                (((struct oAC_ushort *)(t11))->v) = 0x1F;
                (((struct oA9_uchar *)(t11))->v) = 0x40;
                FUN_0c0cb776(t11);
                (((struct o41D_uchar *)(t11))->v) = 0x0;
                (((struct o41C_uchar *)(t11))->v) = (*(int *)(((int)stk + 0)));
                (((struct o424_uchar *)(t11))->v) = t9;
                (((struct o1B_uchar *)(t11))->v) = (*(int *)(((int)stk + 4)));
                FUN_0c0c212c(t11);
                FUN_0c0c2ab6(t11, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t11 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
                FUN_0c0cb6a4(t11);
                (((struct o420_ushort *)(t11))->v) = (*(short *)(((0xC2738B8 + (*(int *)(((int)stk + 16)))) + 0x1A)));
                *(volatile int *)(((int)stk + 8));
                FUN_0c187798();
                *(unsigned short *)((((((struct oC4_int *)(t11))->v)) + 0x6)) = 0x15;
                *(unsigned short *)((((((struct oC8_int *)(t11))->v)) + 0x6)) = 0x7;
                *(unsigned short *)((((((struct oCC_int *)(t11))->v)) + 0x6)) = 0x20;
                *(unsigned short *)((((((struct oD0_int *)(t11))->v)) + 0x6)) = 0x11;
                (((struct o70_float *)(((((struct oD0_int *)(t11))->v))))->v) = -50.0f;
                *(unsigned char *)((((((struct oC4_int *)(t11))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(t11))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oCC_int *)(t11))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oD0_int *)(t11))->v)) + 0x0)) = 0x0;
                FUN_0c0c2aa2(t11, a8);
                t61 = t11;
            }
        }
    }
    return t61;
}

int FUN_0c158824(int a4)
{
    int stk[15];
    register int t1;
    register int t2;
    register int t46;
    register int t6;
    register int t7;
    register int t9;
    register int t10;
    register int t12;
    register int t13;
    register float u15;
    register float u19;
    register float u23;
    register float u27;
    register float u28;
    register float u32;
    register float u36;
    register float u40;
    register float u43;

    t1 = FUN_0c037320(0x23, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t46 = t2;
    if (t2 == 0) {
    } else {
        FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x2, 0x23, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC1587C4;
        (((struct oAC_ushort *)(t2))->v) = 0x3F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct o48_float *)(t2))->v) = 0.600000024f;
        (((struct o44_float *)(t2))->v) = 0.600000024f;
        (((struct o40_float *)(t2))->v) = 0.600000024f;
        t6 = FUN_0c179ac0();
        t7 = ((~(((~t6) + 0x1) & 0xF)) + 0x1);
        if ((int)t6 >= 0) {
            t7 = (t6 & 0xF);
        }
        *(unsigned int *)((((int)stk + 0) + 0x0)) = (((t7 << 8) << 2) << 2);
        t9 = FUN_0c179ac0();
        t10 = ((~(((~t9) + 0x1) & 0xF)) + 0x1);
        if ((int)t9 >= 0) {
            t10 = (t9 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (((t10 << 8) << 2) << 2);
        t12 = FUN_0c179ac0();
        t13 = ((~(((~t12) + 0x1) & 0xF)) + 0x1);
        if ((int)t12 >= 0) {
            t13 = (t12 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = (((t13 << 8) << 2) << 2);
        u15 = (((struct o0_float *)0xC158A30)->v);
        u19 = ((((struct o28_float *)(a4))->v));
        u19 = u19 + u15 * (math_cos_angle16((*(int *)((((int)stk + 0) + 0x0)))));
        (((struct o28_float *)(t2))->v) = u19;
        u23 = ((((struct o2C_float *)(a4))->v));
        u23 = u23 + u15 * (math_sin_angle16((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))));
        (((struct o2C_float *)(t2))->v) = u23;
        u27 = ((((struct o30_float *)(a4))->v));
        u27 = u27 + u15 * (math_sin_angle16((*(int *)(((((int)stk + 0) + 0x8) + 0x0)))));
        (((struct o30_float *)(t2))->v) = u27;
        u28 = (((struct oC_float *)0xC158A30)->v);
        u32 = ((((struct o28_float *)(a4))->v));
        u32 = u32 + u28 * (math_cos_angle16((*(int *)((((int)stk + 0) + 0x0)))));
        (((struct o18_float *)(((int)stk + 0)))->v) = u32;
        u36 = ((((struct o2C_float *)(a4))->v));
        u36 = u36 + u28 * (math_sin_angle16((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))));
        (((struct o4_float *)((((int)stk + 0) + 0x18)))->v) = u36;
        u40 = ((((struct o30_float *)(a4))->v));
        u40 = u40 + u28 * (math_sin_angle16((*(int *)(((((int)stk + 0) + 0x8) + 0x0)))));
        (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = u40;
        FUN_0c0e2390((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x18), (t2 + 0x28));
        u43 = (((struct o14_float *)0xC158A30)->v);
        (((struct o4C_float *)(t2))->v) = (((((struct o24_float *)(((int)stk + 0)))->v)) / u43);
        (((struct o50_float *)(t2))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x24)))->v)) / u43);
        (((struct o54_float *)(t2))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x24)))->v)) / u43);
        t46 = 0x54;
    }
    return t46;
}

int FUN_0c15e960(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    if (a5 != 0) {
        if (a5 != 3) {
            if ((a5 != 1) && (a5 != 4)) {
                if ((a5 != 2) && (a5 != 5)) {
                    t0 = a5;
                    if (a5 == 6) {
                        t1 = FUN_0c03f444(0x5, 0x0, 0x1);
                        t2 = t1;
                        if (t1 != 0) {
                            *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
                            *(unsigned int *)((t1 + 0x4)) = 0xC15E918;
                            (((struct oAC_ushort *)(t1))->v) = 0xF;
                            (((struct oA9_uchar *)(t1))->v) = 0x21;
                            *(unsigned char *)((t1 + 0x2)) = a5;
                            *(unsigned int *)((t1 + 0x10)) = a4;
                            (((struct oA4_uint *)(t1))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
                            t2 = (FUN_0c037498(((((struct oC4_int *)(t1))->v)), 0x0, 0x57, (*(int *)0xC4B40CC)));
                        }
                        t0 = t2;
                    }
                    t1 = t0;
                } else {
                    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t2 = t0;
                    if (t0 != 0) {
                        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
                        *(unsigned int *)((t0 + 0x4)) = 0xC15E918;
                        (((struct oAC_ushort *)(t0))->v) = 0xF;
                        (((struct oA9_uchar *)(t0))->v) = 0x21;
                        *(unsigned char *)((t0 + 0x2)) = a5;
                        *(unsigned int *)((t0 + 0x10)) = a4;
                        (((struct oA4_uint *)(t0))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
                        t2 = (FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x3A, (*(int *)0xC4B40CC)));
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                t1 = FUN_0c03f444(0x5, 0x0, 0x0);
                t2 = t1;
                if (t1 != 0) {
                    *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
                    *(unsigned int *)((t1 + 0x4)) = 0xC15E918;
                    (((struct oAC_ushort *)(t1))->v) = 0xF;
                    (((struct oA9_uchar *)(t1))->v) = 0x21;
                    *(unsigned char *)((t1 + 0x2)) = a5;
                    *(unsigned int *)((t1 + 0x10)) = a4;
                    (((struct oA4_uint *)(t1))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
                    (((struct o2C_float *)(t1))->v) = 100.0f;
                    t2 = 0x2C;
                }
                t0 = t2;
            }
            return t0;
        }
        t0 = FUN_0c03f444(0x5, 0x0, 0x2);
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t0 + 0x4)) = 0xC15E918;
            (((struct oAC_ushort *)(t0))->v) = 0xF;
            (((struct oA9_uchar *)(t0))->v) = 0x21;
            *(unsigned char *)((t0 + 0x2)) = a5;
            *(unsigned int *)((t0 + 0x10)) = a4;
            (((struct oA4_uint *)(t0))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
            return FUN_0c03733c(t0, 0x56, (*(int *)0xC4B40CC));
        }
        return t0;
    }
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15E918;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x2)) = a5;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t2, 0x0, 0x56, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        t1 = 0xF;
    }
    return t1;
}


int FUN_0c0756b4(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R12;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_2 = a4;
    v0_1 = (0x20);
    v0_0 = (v0_2);
    if ((((((struct o20_short *)(v0_2))->v)) != 0)) goto L_C0756D6;
    v0_2 = FUN_0c075328(v0_0);
    v0_1 = ((signed char)v0_2);
    if (((signed char)v0_2 == 0)) goto L_C0756D2;
    return v0_1;
    L_C0756D2:;
    L_C0756DC:;
    v0_2 = (v0_0);
    if (((*(short *)((v0_0 + 0x1E))) == 0)) goto L_C0756EA;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) - 1);
    L_C0756EA:;
    FUN_0c037bf6(v0_2);
    v0_2 = (((struct o22_short *)(v0_0))->v);
    v0_1 = (v0_2);
    if ((v0_2 == 39)) goto L_C075708;
    if ((v0_1 == 49)) goto L_C075708;
    if (!((v0_1 != 45))) goto L_C075816;
    goto L_C075816;
    L_C075816:;
    v0_2 = FUN_0c0752a8(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == 1)) goto L_C075826;
    if ((v0_1 == 2)) goto L_C075832;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    return math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    L_C075832:;
    return FUN_0c07a6aa(v0_0, R5, R6, R7);
    L_C075826:;
    return FUN_0c07a65c(v0_0, R5, R6, R7);
    L_C075708:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C07573C;
    if ((v0_1 == 1)) goto L_C07578A;
    goto L_C075816;
    L_C07578A:;
    if ((!(0.0f > ((((struct o50_float *)(v0_0))->v))))) goto L_C075816;
    v0_1 = (((struct o22_short *)(v0_0))->v);
    FUN_0c07e79c(v0_0, 0xFFFFFFFF, 0x4, (v0_1 + 0x2), 0xFFFFFFFF, 0x4, (v0_1 + 0x2));
    w0_0 = (((struct o2C_float *)(v0_0))->v);
    w0_1 = (((struct o5C_float *)(v0_0))->v);
    *(unsigned short *)((v0_0 + 0x1E)) = (int)((w0_0 * (1.0f + 1.0f)) / w0_1);
    FPUL_ = ((int)((w0_0 * (1.0f + 1.0f)) / w0_1));
    if (((int)(*(short *)((v0_0 + 0x1E))) >= 0)) goto L_C0757D6;
    *(unsigned short *)((v0_0 + 0x1E)) = (-(*(short *)((v0_0 + 0x1E))));
    L_C0757D6:;
    *(unsigned short *)((v0_0 + 0x1E)) = (int)(math_signed_sqrt((float)(*(short *)((v0_0 + 0x1E)))));
    v0_1 = (((struct o118_int *)(v0_0))->v);
    v0_2 = *(short *)((v0_0 + 0x1E));
    (((struct o98_float *)(v0_1))->v) = (float)(signed char)v0_2;
    (((struct o94_float *)(v0_1))->v) = (float)(signed char)v0_2;
    v0_2 = (((((struct o11C_int *)(v0_0))->v)));
    FPUL_ = ((signed char)(*(short *)((v0_0 + 0x1E))));
    L_C075806:;
    (((struct o98_float *)(v0_2))->v) = (float)FPUL_;
    (((struct o94_float *)(v0_2))->v) = (float)FPUL_;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) + 0x1);
    goto L_C075816;
    L_C07573C:;
    if (((unsigned char)(*(signed char *)((0x84 + ((((struct o118_int *)(v0_0))->v))))) != 64)) goto L_C075816;
    v0_1 = (((struct o22_short *)(v0_0))->v);
    FUN_0c07e79c(v0_0, 0xFFFFFFFF, 0x4, (v0_1 + 0x1), 0xFFFFFFFF, 0x4, (v0_1 + 0x1));
    v0_1 = (((struct o118_int *)(v0_0))->v);
    v0_2 = *(short *)((v0_0 + 0x1E));
    (((struct o98_float *)(v0_1))->v) = (float)(signed char)v0_2;
    (((struct o94_float *)(v0_1))->v) = (float)(signed char)v0_2;
    v0_2 = (((((struct o11C_int *)(v0_0))->v)));
    FPUL_ = ((signed char)(*(short *)((v0_0 + 0x1E))));
    goto L_C075806;
    L_C0756D6:;
    *(unsigned short *)((v0_0 + v0_1)) = ((*(short *)((v0_0 + v0_1))) - 1);
    goto L_C0756DC;
}

int FUN_0c114044(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t1 + 0x1);
            t2 = 0x20;
            if ((int)(short)(t1 + 0x1) <= (int)0xA) {
            } else {
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t2 = 0x16;
            }
            t1 = t2;
        } else {
            t2 = t0;
            if (t0 == 2) {
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                t2 = 0x20;
                if ((int)(short)(t0 + 0x1) > (int)0x10) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t2 = 0x16;
                }
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c1053d8(((((struct o0_int *)0xC474774)->v)), 0x3);
        (((struct o0_uint *)0xC474774)->v) = t1;
        *(unsigned int *)((((t1 << 2) + 0xC47477C) + 0x0)) = (FUN_0c105014((*(int *)((((t1 << 2) + 0xC47477C) + 0x0))), (*(int *)((((*(int *)(((t1 << 2) + 0xC2918B8))) << 2) + 0xC473A2C)))));
        t1 = FUN_0c104c7a(0x800);
        if (t1 != 0) {
            FUN_0c113800(((((struct o0_int *)0xC474774)->v)), 0x0);
        }
        t1 = FUN_0c104c7a(0x400);
        if (t1 != 0) {
            FUN_0c113800(((((struct o0_int *)0xC474774)->v)), 0x1);
        }
        if (((((struct o8_int *)0xC474774)->v)) == 0) {
            (((struct o0_uchar *)0xC53CF74)->v) = 0x0;
        } else {
            (((struct o0_uchar *)0xC53CF74)->v) = (*(int *)(((((((((struct o8_int *)0xC474774)->v)) - 1) << 2) + 0xC4739AC) + 0x0)));
        }
        if (((((struct oC_int *)0xC474774)->v)) == 0) {
            (((struct o10_uchar *)0xC53CF74)->v) = 0x0;
        } else {
            (((struct o10_uchar *)0xC53CF74)->v) = ((((struct o40_int *)((((((((struct oC_int *)0xC474774)->v)) - 1) << 2) + 0xC4739AC)))->v));
        }
        if (((((struct o10_int *)0xC474774)->v)) == 0) {
            (((struct o8_uchar *)0xC53CF74)->v) = 0x0;
        } else {
            (((struct o8_uchar *)0xC53CF74)->v) = (*(int *)(((((((((struct o10_int *)0xC474774)->v)) - 1) << 2) + 0xC4739AC) + 0x20)));
        }
        if (((((struct o14_int *)0xC474774)->v)) == 0) {
            (((struct o18_uchar *)0xC53CF74)->v) = 0x0;
        } else {
            (((struct o18_uchar *)0xC53CF74)->v) = ((((struct o60_int *)((((((((struct o14_int *)0xC474774)->v)) - 1) << 2) + 0xC4739AC)))->v));
        }
        t1 = FUN_0c104d70();
        if (t1 != 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x0;
        }
        t1 = FUN_0c104db8();
        t2 = t1;
        if (t1 != 0) {
            (((struct o16_uchar *)(a4))->v) = 0x2;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o14_uchar *)((*(int *)0xC474C14)))->v) = 0x63;
            *(unsigned int *)0xC474C14 = 0x0;
            t1 = FUN_0c118412(0x3);
            *(unsigned int *)0xC474B8C = t1;
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c144494(int a4)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_3 = a4;
    *(unsigned int *)(((int)stk + 4)) = (0x41C + v0_3);
    v0_4 = *(signed char *)((v0_3 + 0x14));
    v0_1 = (v0_4);
    v0_2 = (0x0);
    v0_0 = (v0_3);
    if ((v0_4 == 0)) goto L_C1444BE;
    if ((v0_1 == 1)) goto L_C144512;
    if ((v0_1 == 2)) goto L_C144512;
    L_C144636:;
    return v0_1;
    L_C144512:;
    (((struct oA8_uchar *)(v0_0))->v) = (*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0xA8)));
    FUN_0c144234(v0_0);
    v0_1 = *(signed char *)((v0_0 + 0x1B));
    math_mat_get_translate((v0_0 + 0x64), (v0_0 + 0x28));
    v0_3 = (v0_2);
    v0_4 = ((v0_1 << 2));
    if (((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x125))) == ((*(signed char *)((v0_0 + 0x2))) + 0x1))) goto L_C144582;
    if (((*(signed char *)((0x125 + (*(int *)((v0_0 + 0x10)))))) != 5)) goto L_C14454E;
    v0_4 = ((v0_4 + 0x2));
    L_C144586:;
    if ((v0_4 == 0)) goto L_C144592;
    if ((v0_4 != 4)) goto L_C144622;
    L_C144592:;
    if (((*(short *)((v0_0 + 0x1C))) != (v0_4 + 0x1))) goto L_C144622;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = ((((struct o0_float *)0xC1446A4)->v));
    FUN_0c0582de((((int)stk + 4) + 0x4), (((((struct oC8_int *)(v0_0))->v)) + 0x28));
    *(float *)(((int)stk + 12)) = (((((struct o168_float *)((*(int *)((v0_0 + 0x10)))))->v)) + ((((struct o8_float *)0xC1446A4)->v)));
    if (((*(signed char *)((0x3715 + (*(int *)((v0_0 + 0x10)))))) == 5)) goto L_C14460A;
    FUN_0c14fe04((((int)stk + 4) + 0x4), R5, R6, ((((struct oC_float *)0xC1446A4)->v)));
    FUN_0c059e9a((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532498), 0x20, (((int)stk + 4) + 0x4));
    v0_1 = v0_2;
    *(int *)((int)stk + 0) = v0_1;
    FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, v0_1);
    L_C144622:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if ((v0_2 == v0_4)) goto L_C144636;
    FUN_0c07e2f4(v0_0, v0_3);
    v0_1 = ((FUN_0c1441a6(v0_0, v0_4)));
    goto L_C144636;
    L_C14460A:;
    FUN_0c14fe04((((int)stk + 4) + 0x4), R5, R6, ((((struct o20_float *)0xC1446A4)->v)));
    FUN_0c14a104((*(signed char *)((v0_0 + 0x1))), (((int)stk + 4) + 0x4));
    goto L_C144622;
    L_C14454E:;
    if (((*(signed char *)((0x125 + (*(int *)((v0_0 + 0x10)))))) != 6)) goto L_C144578;
    v0_3 = (0x2);
    v0_4 = ((v0_4 + 0x3));
    goto L_C144586;
    L_C144578:;
    if (((*(signed char *)((0x125 + (*(int *)((v0_0 + 0x10)))))) != 7)) goto L_C144586;
    L_C144582:;
    v0_3 = (0x1);
    v0_4 = ((v0_4 + 0x1));
    goto L_C144586;
    L_C1444BE:;
    FUN_0c0b21ac(v0_0, 0x1);
    (((struct o160_float *)(v0_0))->v) = (((((struct o160_float *)(v0_0))->v)) + 1000.0f);
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = ((((struct o160_float *)(v0_0))->v));
    (((struct o1B_uchar *)(v0_0))->v) = v0_2;
    (((struct o26_uchar *)(v0_0))->v) = 0x1;
    v0_1 = (0x3714);
    v0_3 = (0x1);
    FPUL_ = (0x447A0000);
    if (((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x3714))) != 0)) goto L_C1444F4;
    goto L_C144636;
    L_C1444F4:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    FUN_0c144a68(v0_0, (*(signed char *)((v0_0 + 0x2))), R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    FUN_0c143ff0(v0_0, (*(signed char *)((v0_0 + 0x2))));
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C144512;
}


int FUN_0c059a28(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = -4.0f;
        FUN_0c1171f0(a4);
        t0 = *(signed char *)((a4 + 0x2));
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((0xC242280 + (((t0 << 2) + t0) << 2)))), (*(int *)0xC4B4110));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)(*(int *)((0xC2421CC + ((*(signed char *)((a4 + 0x2))) << 2))))) {
                break;
            }
            t1 = *(signed char *)((a4 + 0x2));
            t2 = t0;
            t2 = (t2 << 2);
            FUN_0c03744a((*(int *)((((0xC4 + a4) + t2) + 0x8))), 0x0, (*(int *)((((0xC242280 + (((t1 << 2) + t1) << 2)) + t2) + 0x4))), (*(int *)0xC4B4110));
            t1 = 0x70;
            t0 = (t0 + 0x1);
            t1 = (t1 + (*(int *)((((0xC4 + a4) + t2) + 0x8))));
            *(float *)((t1 + 0x0)) = ((*(float *)((t2 + 0xC2421BC))));
        }
        (((struct o70_float *)(((((struct oD4_int *)(a4))->v))))->v) = (*(float *)0xC2421C4);
        FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x0, 0x1D, (*(int *)0xC4B4110));
        *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
        FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0x0, 0x1B, (*(int *)0xC4B4110));
        *(unsigned short *)((((((struct oE0_int *)(a4))->v)) + 0x6)) = 0x40F;
        *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
        FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0x0, 0x11, (*(int *)0xC4B4110));
        *(unsigned short *)((((((struct oE4_int *)(a4))->v)) + 0x6)) = 0x21F;
        *(volatile int *)((a4 + 0xE4));
        FUN_0c18778c();
        *(unsigned int *)((a4 + 0x10)) = (FUN_0c05950c());
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c059946(a4);
        }
        return FUN_0c0595a4(a4);
    }
    return FUN_0c059536(a4);
}

int FUN_0c0d352c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return t0;
            }
            if (!(-10.0f > ((((struct o50_float *)(a4))->v)))) {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.0250000004f);
            }
            if (!(-10.0f > ((((struct o54_float *)(a4))->v)))) {
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.100000001f);
            }
            FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            if (-1500.0f > ((((struct o2C_float *)(a4))->v))) {
                (((struct oB0_float *)(a4))->v) = ((((((struct o2C_float *)(a4))->v)) + 2300.0f) / 800.0f);
                if (0.0f > ((((struct oB0_float *)(a4))->v))) {
                    (((struct oB0_float *)(a4))->v) = 0.0f;
                }
            }
            if ((*(signed char *)((a4 + 0x2))) == 1) {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xB6);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x3;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) + 0x64);
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t1 = t0;
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
            t0 = (t0 + 0x1);
        }
    }
    t0 = *(signed char *)((0x14 + (*(int *)((0xC540D94 + ((*(signed char *)((a4 + 0x1B))) << 2))))));
    t1 = t0;
    if (t0 == 2) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
        math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x402);
        (((struct oB0_float *)(a4))->v) = 1.0f;
        (((struct oA4_uint *)(a4))->v) = 0x0;
        (((struct o50_float *)(a4))->v) = -1.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x384;
        t1 = 0x384;
    }
    return t1;
}

int FUN_0c136ff4(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t4;
    register int t6;
    register int t10;
    register int t11;
    register int t35;
    register int t41;
    register int t52;
    register int t54;
    register int t59;
    register int t60;
    register int t67;
    register int t53;

    if ((*(signed char *)((0x3715 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))) != 26) {
        return (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
    }
    *(volatile signed char *)((a4 + 0x1));
    t4 = ((int (*)(int, int, int))(FUN_0c187798))(0xC532498, a5, a6);
    *(volatile int *)((a4 + 0xC8));
    t6 = ((int (*)(void))(FUN_0c187798))();
    (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o168_float *)(a4))->v));
    *(unsigned int *)(((int)stk + 0)) = (0xC4 + a4);
    t10 = *(int *)(((0xC4 + a4) + 0x8));
    t11 = *(int *)(((*(int *)(((int)stk + 0))) + 0x4));
    *(unsigned int *)(((int)stk + 4)) = t11;
    FUN_0c17c130(((*(int *)(((int)stk + 4))) + 0x6C), (t11 + 0x6C), (t10 + 0x6C));
    if ((((((struct o2C_float *)(a4))->v)) + -1000.0f) > ((((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
        (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((((struct o2C_float *)(a4))->v)) + -1000.0f);
    } else {
        if (((((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v)) > (((((struct o2C_float *)(a4))->v)) + 1000.0f)) {
            (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((((struct o2C_float *)(a4))->v)) + 1000.0f);
        }
    }
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (((((struct oCC_int *)(a4))->v)) + 0x6C));
    t35 = *(signed char *)((a4 + 0x15));
    if (t35 != 0) {
        if (t35 != 1) {
            if (t35 != 2) {
                t67 = (((int (*)(int))(FUN_0c03f346))(a4));
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t67 = 0x15;
            }
        } else {
            t41 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t41 + 0x1);
            t67 = (short)(t41 + 0x1);
            if ((short)(t41 + 0x1) == (*(int *)0xC2A182C)) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t67 = 0x15;
            }
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t52 = ((int (*)(int))(FUN_0c187798))(0xC2A172C);
        t54 = ((int (*)(int))(FUN_0c187798))(t53);
        FUN_0c136d54((*(signed char *)((a4 + 0x1))), (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8), a4);
        FUN_0c136f78((*(signed char *)((a4 + 0x1))), 0xC2A172C, a4);
        t59 = FUN_0c179ac0();
        t60 = ((~(((~t59) + 0x1) & 0x3)) + 0x1);
        if ((int)t59 >= 0) {
            t60 = (t59 & 0x3);
        }
        t67 = t60;
        if (t60 == 0) {
            t67 = (FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x23));
        }
    }
    return t67;
}

