/* Straight-line functions with calls and guards (batch gen_dz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o254_uint { char p[0x254]; unsigned int v; };
struct o260_float { char p[0x260]; float v; };
struct o264_uint { char p[0x264]; unsigned int v; };
struct o268_uint { char p[0x268]; unsigned int v; };
struct o27C_float { char p[0x27C]; float v; };
struct o280_float { char p[0x280]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
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
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c036606(void);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c037bf6();
int FUN_0c038566(void);
int FUN_0c03ea04(int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c054a62(int, int);
int FUN_0c056b68(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c0676ce(int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c07e3ae(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c213c(int);
int FUN_0c0c241a(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c104c7a(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c11296c(int, int);
int FUN_0c113ba4(int);
int FUN_0c118412(int);
int FUN_0c11e1e0(int, int, int, int);
int FUN_0c123f20(int);
int FUN_0c15c344(int, int, int, int);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c15fa0c(int, int, int, int, float);
int FUN_0c1614c8(int, int);
int FUN_0c162f8a(int, int, int, int);
int FUN_0c166772(int, int, int, int);
int FUN_0c16e8f0(int);
int math_atan2_angle16(int, int, int, int, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int res_cockpit_faces_release_all(void);
float FUN_0c054058(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0c9884(int a4, int a5, int a6, int a7, int a8);
int FUN_0c166b08(int a4, int a5, int a6, int a7);
int FUN_0c1141f4(int a4, int a5, int a6);
float FUN_0c124794(int a4, int a5, int a6, int a7);
int FUN_0c0c7188(int a4);

float FUN_0c054058(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[8];
    register int t52;
    register int t97;
    register int t138;

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register float F12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_7 = a4;
    v0_2 = a5;
    v0_0 = a6;
    v0_1 = a7;
    w0_0 = f4;
    w0_0 = f5;
    v0_4 = *(signed char *)0xC542237;
    v0_5 = *(signed char *)0xC54223C;
    v0_3 = (v0_7);
    v0_7 = ((((((((v0_4 << 2) << 2) << 1) + v0_4) << 2) + 0xC2580CC) + ((short)v0_5 * (short)0x2C)));
    if (((*(signed char *)(((((((((v0_4 << 2) << 2) << 1) + v0_4) << 2) + 0xC2580CC) + ((short)v0_5 * (short)0x2C)) + 0x0))) == 0)) goto L_C054118;
    (((struct o10_float *)(((int)stk + 4)))->v) = (((((struct o10_float *)(v0_7))->v)) - ((((struct o4_float *)(v0_7))->v)));
    w0_0 = (((struct oC_float *)(v0_7))->v);
    w0_1 = (((struct o18_float *)(v0_7))->v);
    (((struct o8_float *)((((int)stk + 4) + 0x10)))->v) = (w0_1 - w0_0);
    v0_4 = ((((int)stk + 4) + 0x10));
    if (((w0_1 - w0_0) != 0.0f)) goto L_C0540C0;
    (((struct o8_float *)(v0_4))->v) = 9.99999997e-07f;
    L_C0540C0:;
    *(unsigned int *)(((int)stk + 4)) = (math_atan2_angle16(v0_7, v0_2, v0_0, v0_1, (*(float *)((v0_4 + 0x0))), ((((struct o8_float *)(v0_4))->v))));
    L_C05411C:;
    v0_10 = *(signed char *)((v0_3 + 0xA));
    v0_8 = (v0_10);
    v0_4 = (0xC179AC0);
    v0_5 = (0x0);
    v0_6 = (0xC532498);
    v0_4 = ((((int)stk + 4) + 0x4));
    v0_7 = (0x1E);
    v0_9 = (0xC179670);
    v0_9 = (0x3938);
    if ((v0_10 == 0)) goto L_C054146;
    if ((v0_8 != 1)) goto L_C05413A;
    if (((*(signed char *)((v0_3 + 0xB))) == 0)) goto L_C0542D0;
    v0_7 = *(signed char *)((v0_3 + 0xB));
    *(unsigned char *)((v0_3 + 0xB)) = (v0_7 - 1);
    if (((int)(signed char)(v0_7 - 1) > 0)) goto L_C0542CA;
    v0_7 = v0_5;
    *(int *)((int)stk + 0) = v0_7;
    FUN_0c05258e(0x1, 0x14, 0x4000, 0x1E, v0_7);
    L_C0542CA:;
    FUN_0c056b68(v0_3, v0_2, v0_0, v0_1);
    L_C0542D0:;
    v0_2 = *(signed char *)((v0_3 + 0xC));
    v0_8 = (v0_2);
    v0_7 = (0xC542252);
    if (!((v0_2 != (*(signed char *)0xC542252)))) goto L_C054564;
    *(unsigned char *)((v0_3 + 0xC)) = (*(signed char *)((v0_7 + 0x0)));
    *(unsigned char *)((v0_3 + 0xA)) = ((*(signed char *)((v0_3 + 0xA))) + 0x1);
    v0_7 = ((*(signed char *)((v0_3 + 0xE))));
    v0_2 = (0x3);
    goto L_C0542EE;
    L_C054564:;
    return F0;
    L_C0542EE:;
    v0_8 = (int)(v0_7 + 0x1) <= (int)v0_2;
    v0_7 = ((v0_7 + 0x1));
    if (v0_8) goto L_C0542F6;
    v0_7 = (v0_5);
    L_C0542F6:;
    if (((*(signed char *)((((v0_7 * v0_9) + v0_6) + 0x3714))) == 0)) goto L_C0542EE;
    *(unsigned char *)((v0_3 + 0xE)) = v0_7;
    v0_7 = 0xC1B90D0;
    v0_8 = (0x248 + v0_3);
    for (;;) { t52 = *(int *)v0_7; v0_7 = (v0_7 + 4); if ((unsigned int)((0xC1B90D0 + 128)) < (unsigned int)v0_7) break; *(unsigned int *)v0_8 = t52; v0_8 = (v0_8 + 4); }
    v0_7 = nlRand();
    v0_8 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C054360;
    v0_8 = ((v0_8 & 0x3));
    L_C05436A:;
    (((struct o264_uint *)(v0_3))->v) = (*(int *)((0xC1B91D0 + (v0_8 << 2))));
    v0_7 = (*(int *)(((int)stk + 4)));
    *(int *)((int)stk + 0) = v0_7;
    (((struct o268_uint *)(v0_3))->v) = (unsigned short)((*(int *)((0xC1B91E0 + (((int)((int)(nlRand()) % (int)0x5)) << 2)))) + v0_7);
    v0_7 = nlRand();
    v0_8 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C05439C;
    v0_8 = ((v0_8 & 0x1));
    L_C0543A6:;
    *(unsigned char *)((v0_3 + 0xD)) = v0_8;
    (((struct o260_float *)(v0_3))->v) = (*(float *)((0xC24151C + ((*(signed char *)((v0_3 + 0xD))) << 2))));
    v0_8 = *(signed char *)((v0_3 + 0xE));
    v0_7 = *(signed char *)(((((short)v0_8 * (short)0x3938) + v0_6) + 0x2));
    v0_6 = *(int *)(((((short)v0_8 * (short)0x3938) + v0_6) + 0x38));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_4) = *(struct mv3 *)((0xC258E8C + (((v0_7 << 1) + v0_7) << 2))); }
    (((struct o280_float *)(v0_3))->v) = ((((struct o4_float *)(v0_4))->v));
    w0_0 = math_cos_angle16(v0_6);
    w0_1 = *(float *)((v0_4 + 0x0));
    w0_2 = ((math_sin_angle16(v0_6)) * ((((struct o8_float *)(v0_4))->v)));
    w0_2 = w0_2 + w0_1 * w0_0;
    (((struct o27C_float *)(v0_3))->v) = w0_2;
    w0_0 = (-((math_sin_angle16(v0_6)) * (*(float *)((v0_4 + 0x0)))));
    w0_0 = w0_0 + ((((struct o8_float *)(v0_4))->v)) * (math_cos_angle16(v0_6));
    (((struct o284_float *)(v0_3))->v) = w0_0;
    (((struct o254_uint *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0xE))) + 0x5);
    FUN_0c054a62(v0_3, (0x248 + v0_3));
    v0_4 = v0_5;
    *(int *)((int)stk + 0) = v0_4;
    FUN_0c05258e(0x63, 0x14, 0x100, 0xF, v0_4);
    L_C05455E:;
    v0_8 = ((FUN_0c056b68(v0_3, v0_2, v0_0, v0_1)));
    goto L_C054564;
    L_C05439C:;
    v0_8 = (((~(((~v0_8) + 0x1) & 0x1)) + 0x1));
    goto L_C0543A6;
    L_C054360:;
    v0_8 = (((~(((~v0_8) + 0x1) & 0x3)) + 0x1));
    goto L_C05436A;
    L_C05413A:;
    if ((v0_8 != 2)) goto L_C054142;
    *(unsigned char *)((v0_3 + 0xA)) = ((*(signed char *)((v0_3 + 0xA))) - 1);
    *(unsigned char *)((v0_3 + 0xB)) = v0_7;
    v0_5 = 0xC1B9150;
    v0_7 = (0x248 + v0_3);
    for (;;) { t97 = *(int *)v0_5; v0_5 = (v0_5 + 4); if ((unsigned int)((0xC1B9150 + 128)) < (unsigned int)v0_5) break; *(unsigned int *)v0_7 = t97; v0_7 = (v0_7 + 4); }
    v0_5 = nlRand();
    v0_8 = (v0_5);
    if (((int)v0_5 < 0)) goto L_C0544A4;
    v0_8 = ((v0_8 & 0x3));
    L_C0544AE:;
    (((struct o264_uint *)(v0_3))->v) = (*(int *)((0xC1B91D0 + (v0_8 << 2))));
    v0_5 = (*(int *)(((int)stk + 4)));
    *(int *)((int)stk + 0) = v0_5;
    (((struct o268_uint *)(v0_3))->v) = (unsigned short)((*(int *)((0xC1B91E0 + (((int)((int)(nlRand()) % (int)0x5)) << 2)))) + v0_5);
    (((struct o260_float *)(v0_3))->v) = (*(float *)(((((((*(signed char *)((v0_3 + 0xD))) == 0)) ? 1 : 0) << 2) + 0xC24151C)));
    v0_5 = *(signed char *)((v0_3 + 0xE));
    v0_7 = *(signed char *)(((((short)v0_5 * (short)0x3938) + v0_6) + 0x2));
    v0_5 = *(int *)(((((short)v0_5 * (short)0x3938) + v0_6) + 0x38));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_4) = *(struct mv3 *)((0xC258E8C + (((v0_7 << 1) + v0_7) << 2))); }
    (((struct o280_float *)(v0_3))->v) = ((((struct o4_float *)(v0_4))->v));
    w0_0 = math_cos_angle16(v0_5);
    w0_1 = *(float *)((v0_4 + 0x0));
    w0_2 = ((math_sin_angle16(v0_5)) * ((((struct o8_float *)(v0_4))->v)));
    w0_2 = w0_2 + w0_1 * w0_0;
    (((struct o27C_float *)(v0_3))->v) = w0_2;
    w0_0 = (-((math_sin_angle16(v0_5)) * (*(float *)((v0_4 + 0x0)))));
    w0_0 = w0_0 + ((((struct o8_float *)(v0_4))->v)) * (math_cos_angle16(v0_5));
    (((struct o284_float *)(v0_3))->v) = w0_0;
    (((struct o254_uint *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0xE))) + 0x5);
    FUN_0c054a62(v0_3, (0x248 + v0_3));
    goto L_C05455E;
    L_C0544A4:;
    v0_8 = (((~(((~v0_8) + 0x1) & 0x3)) + 0x1));
    goto L_C0544AE;
    L_C054142:;
    goto L_C054564;
    L_C054146:;
    *(unsigned char *)((v0_3 + 0xA)) = ((*(signed char *)((v0_3 + 0xA))) + 0x2);
    *(unsigned char *)((v0_3 + 0xB)) = v0_7;
    *(unsigned char *)((v0_3 + 0xC)) = (*(signed char *)0xC542252);
    v0_7 = (v0_5);
    v0_2 = (0x4);
    L_C05415C:;
    if (((*(signed char *)((((v0_7 * v0_9) + v0_6) + 0x3714))) == 0)) goto L_C05416E;
    v0_2 = (v0_7);
    L_C054174:;
    *(unsigned char *)((v0_3 + 0xE)) = v0_2;
    v0_7 = 0xC1B90D0;
    v0_8 = (0x248 + v0_3);
    for (;;) { t138 = *(int *)v0_7; v0_7 = (v0_7 + 4); if ((unsigned int)((0xC1B90D0 + 128)) < (unsigned int)v0_7) break; *(unsigned int *)v0_8 = t138; v0_8 = (v0_8 + 4); }
    v0_7 = nlRand();
    v0_8 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C054192;
    v0_8 = ((v0_8 & 0x3));
    L_C05419C:;
    (((struct o264_uint *)(v0_3))->v) = (*(int *)((0xC1B91D0 + (v0_8 << 2))));
    v0_7 = (*(int *)(((int)stk + 4)));
    *(int *)((int)stk + 0) = v0_7;
    (((struct o268_uint *)(v0_3))->v) = (unsigned short)((*(int *)((0xC1B91E0 + (((int)((int)(nlRand()) % (int)0x5)) << 2)))) + v0_7);
    v0_7 = nlRand();
    v0_8 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C054200;
    v0_8 = ((v0_8 & 0x1));
    L_C05420A:;
    *(unsigned char *)((v0_3 + 0xD)) = v0_8;
    (((struct o260_float *)(v0_3))->v) = (*(float *)((0xC24151C + ((*(signed char *)((v0_3 + 0xD))) << 2))));
    v0_8 = *(signed char *)((v0_3 + 0xE));
    v0_7 = *(signed char *)(((((short)v0_8 * (short)0x3938) + v0_6) + 0x2));
    v0_6 = *(int *)(((((short)v0_8 * (short)0x3938) + v0_6) + 0x38));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_4) = *(struct mv3 *)((0xC258E8C + (((v0_7 << 1) + v0_7) << 2))); }
    (((struct o280_float *)(v0_3))->v) = ((((struct o4_float *)(v0_4))->v));
    w0_0 = math_cos_angle16(v0_6);
    w0_1 = *(float *)((v0_4 + 0x0));
    w0_2 = ((math_sin_angle16(v0_6)) * ((((struct o8_float *)(v0_4))->v)));
    w0_2 = w0_2 + w0_1 * w0_0;
    (((struct o27C_float *)(v0_3))->v) = w0_2;
    w0_0 = (-((math_sin_angle16(v0_6)) * (*(float *)((v0_4 + 0x0)))));
    w0_0 = w0_0 + ((((struct o8_float *)(v0_4))->v)) * (math_cos_angle16(v0_6));
    (((struct o284_float *)(v0_3))->v) = w0_0;
    (((struct o254_uint *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0xE))) + 0x5);
    FUN_0c054a62(v0_3, (0x248 + v0_3));
    v0_4 = v0_5;
    *(int *)((int)stk + 0) = v0_4;
    FUN_0c05258e(0x63, 0x14, 0x100, 0xF, v0_4);
    *(unsigned char *)((v0_3 + 0xC)) = (*(signed char *)0xC542252);
    goto L_C05455E;
    L_C054200:;
    v0_8 = (((~(((~v0_8) + 0x1) & 0x1)) + 0x1));
    goto L_C05420A;
    L_C054192:;
    v0_8 = (((~(((~v0_8) + 0x1) & 0x3)) + 0x1));
    goto L_C05419C;
    L_C05416E:;
    v0_8 = (int)(v0_7 + 0x1) < (int)v0_2;
    v0_7 = ((v0_7 + 0x1));
    if (v0_8) goto L_C05415C;
    goto L_C054174;
    L_C054118:;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((v0_7 + 0x28)));
    goto L_C05411C;
}

int FUN_0c0c9884(int a4, int a5, int a6, int a7, int a8)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_6 = a4;
    v0_5 = a5;
    v0_7 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(unsigned int *)(((int)stk + 8)) = v0_7;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    v0_8 = *(signed char *)((((v0_6 * 0x34) + 0xC2738B8) + 0x2));
    v0_7 = (v0_8);
    v0_2 = (0xC4B40D8);
    v0_4 = (0x34);
    v0_0 = (0xC2738B8);
    v0_1 = (v0_6);
    v0_5 = (0xC037320);
    v0_5 = (((((struct oC_int *)0xC4B40CC)->v)));
    v0_6 = (0xC03F444);
    v0_6 = (0xC03744A);
    if ((v0_8 == 0)) goto L_C0C9918;
    if ((v0_7 != 1)) goto L_C0C98C0;
    v0_2 = *(signed char *)((((v0_1 * v0_4) + v0_0) + 0x1));
    v0_5 = FUN_0c037320((signed char)v0_2, (*(int *)0xC4B410C));
    v0_2 = (v0_2);
    v0_7 = (v0_5);
    if (((int)v0_5 >= 0)) goto L_C0C9A10;
    L_C0C9D76:;
    v0_7 = (0x0);
    L_C0C9D78:;
    return v0_7;
    L_C0C9A10:;
    v0_3 = FUN_0c03f444(0x9, 0x0, v0_7, v0_3);
    v0_5 = (v0_3);
    if ((v0_3 != 0)) goto L_C0C9A20;
    goto L_C0C9D76;
    L_C0C9A20:;
    FUN_0c03733c(v0_5, (signed char)v0_2, (*(int *)0xC4B410C));
    L_C0C9AA0:;
    *(unsigned int *)((v0_5 + 0x4)) = 0xC0C9810;
    (((struct oAC_ushort *)(v0_5))->v) = 0xF;
    (((struct oA9_uchar *)(v0_5))->v) = 0x40;
    FUN_0c0c25c4(v0_5);
    (((struct o41D_uchar *)(v0_5))->v) = 0x0;
    (((struct o41C_uchar *)(v0_5))->v) = v0_1;
    (((struct o424_uchar *)(v0_5))->v) = (*(int *)(((int)stk + 4)));
    FUN_0c0c2ab6(v0_5, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_5 + 0x41C))) * (unsigned short)0x34) + v0_0) + 0x13))));
    L_C0C9D44:;
    (((struct o420_ushort *)(v0_5))->v) = (*(short *)((((v0_1 * v0_4) + v0_0) + 0x1A)));
    FUN_0c0c212c(v0_5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
    FUN_0c0c2aa2(v0_5, a8);
    FUN_0c0c241a(v0_5);
    L_C0C9D72:;
    v0_7 = (v0_5);
    goto L_C0C9D78;
    L_C0C98C0:;
    if ((v0_7 != 2)) goto L_C0C98C8;
    v0_2 = *(signed char *)((((v0_1 * v0_4) + v0_0) + 0x1));
    v0_5 = FUN_0c037320((signed char)v0_2, ((((struct o0_int *)0xC4B40CC)->v)));
    v0_2 = (v0_2);
    v0_7 = (v0_5);
    if (((int)v0_5 >= 0)) goto L_C0C9A84;
    goto L_C0C9D76;
    L_C0C9A84:;
    v0_3 = FUN_0c03f444(0x9, 0x0, v0_7, v0_3);
    v0_5 = (v0_3);
    if ((v0_3 != 0)) goto L_C0C9A94;
    goto L_C0C9D76;
    L_C0C9A94:;
    FUN_0c03733c(v0_5, (signed char)v0_2, ((((struct o0_int *)0xC4B40CC)->v)));
    goto L_C0C9AA0;
    L_C0C98C8:;
    if ((v0_7 != 3)) goto L_C0C98D0;
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((((v0_1 * v0_4) + v0_0) + 0x1)));
    v0_5 = FUN_0c037320((*(signed char *)(((int)stk + 0))), v0_5);
    v0_6 = (v0_5);
    if (((int)v0_5 >= 0)) goto L_C0C9AFA;
    goto L_C0C9D76;
    L_C0C9AFA:;
    v0_5 = FUN_0c037320(0x27, ((((struct o0_int *)0xC4B40CC)->v)));
    v0_6 = (v0_5);
    if (((int)v0_5 >= 0)) goto L_C0C9B0C;
    goto L_C0C9D76;
    L_C0C9B0C:;
    v0_3 = FUN_0c03f444(0x9, 0x0, 0x6, v0_3);
    v0_5 = (v0_3);
    if ((v0_3 != 0)) goto L_C0C9B1E;
    goto L_C0C9D76;
    L_C0C9B1E:;
    v0_3 = *(signed char *)(((int)stk + 0));
    FUN_0c03733c(v0_5, v0_3, (*(int *)((v0_2 + 0x0))));
    FUN_0c03744a(((((struct oD0_int *)(v0_5))->v)), 0x2, v0_3, (*(int *)((v0_2 + 0x0))));
    (((struct o68_uint *)((*(int *)(((0xC4 + v0_5) + 0xC)))))->v) = (((((struct oC4_int *)(v0_5))->v)) + 0x28);
    *(unsigned short *)((((((struct oD0_int *)(v0_5))->v)) + 0x6)) = 0x29;
    FUN_0c03744a(((((struct oD4_int *)(v0_5))->v)), 0x2, v0_3, (*(int *)((v0_2 + 0x0))));
    (((struct o68_uint *)((*(int *)(((0xC4 + v0_5) + 0x10)))))->v) = (((((struct oC4_int *)(v0_5))->v)) + 0x28);
    *(unsigned short *)((((((struct oD4_int *)(v0_5))->v)) + 0x6)) = 0x29;
    FUN_0c03744a(((((struct oD8_int *)(v0_5))->v)), 0x0, 0x27, ((((struct o0_int *)0xC4B40CC)->v)));
    (((struct o68_uint *)((*(int *)(((0xC4 + v0_5) + 0x14)))))->v) = (((((struct oC4_int *)(v0_5))->v)) + 0x28);
    *(unsigned short *)((((((struct oD8_int *)(v0_5))->v)) + 0x6)) = 0x29;
    (((struct o70_float *)(((((struct oD8_int *)(v0_5))->v))))->v) = 7.0f;
    (((struct o74_float *)(((((struct oD8_int *)(v0_5))->v))))->v) = 93.1719971f;
    v0_6 = ((0xC4 + v0_5));
    L_C0C9D00:;
    *(unsigned int *)((v0_5 + 0x4)) = 0xC0C9810;
    (((struct oAC_ushort *)(v0_5))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_5))->v) = 0x40;
    FUN_0c0c25c4(v0_5);
    (((struct o41D_uchar *)(v0_5))->v) = 0x0;
    (((struct o41C_uchar *)(v0_5))->v) = v0_1;
    (((struct o424_uchar *)(v0_5))->v) = (*(int *)(((int)stk + 4)));
    (((struct o1B_uchar *)(v0_5))->v) = (*(int *)(((int)stk + 8)));
    FUN_0c0c2ab6(v0_5, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_5 + 0x41C))) * (unsigned short)0x34) + v0_0) + 0x12))));
    goto L_C0C9D44;
    L_C0C98D0:;
    if ((v0_7 != 4)) goto L_C0C98D8;
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((((v0_1 * v0_4) + v0_0) + 0x1)));
    v0_4 = FUN_0c037320((*(signed char *)(((int)stk + 0))), v0_5);
    v0_6 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C0C9BF4;
    goto L_C0C9D76;
    L_C0C9BF4:;
    v0_3 = FUN_0c03f444(0x9, 0x0, 0x1, v0_3);
    v0_5 = (v0_3);
    if ((v0_3 != 0)) goto L_C0C9C06;
    goto L_C0C9D76;
    L_C0C9C06:;
    FUN_0c03744a(((((struct oC4_int *)(v0_5))->v)), 0x0, (*(signed char *)(((int)stk + 0))), (*(int *)((v0_2 + 0x0))));
    *(unsigned int *)((v0_5 + 0x4)) = 0xC0C9810;
    (((struct oAC_ushort *)(v0_5))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_5))->v) = 0x40;
    FUN_0c0c25c4(v0_5);
    (((struct o41D_uchar *)(v0_5))->v) = 0x0;
    (((struct o41C_uchar *)(v0_5))->v) = v0_1;
    (((struct o424_uchar *)(v0_5))->v) = (*(int *)(((int)stk + 4)));
    (((struct o1B_uchar *)(v0_5))->v) = (*(int *)(((int)stk + 8)));
    FUN_0c0c2ab6(v0_5, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_5 + 0x41C))) * (unsigned short)0x34) + v0_0) + 0x12))));
    (((struct o420_ushort *)(v0_5))->v) = (*(short *)((((v0_1 * 0x34) + v0_0) + 0x1A)));
    FUN_0c0c212c(v0_5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
    FUN_0c0c2aa2(v0_5, a8);
    FUN_0c0c241a(v0_5);
    if ((v0_1 != 69)) goto L_C0C9D72;
    FUN_0c16e8f0(v0_5);
    goto L_C0C9D72;
    L_C0C98D8:;
    if ((v0_7 != 5)) goto L_C0C98E0;
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((((v0_1 * v0_4) + v0_0) + 0x1)));
    v0_6 = *(signed char *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 16)) = v0_6;
    v0_5 = FUN_0c037320(v0_6, v0_5);
    v0_6 = (v0_5);
    if (((int)v0_5 < 0)) goto L_C0C9D76;
    v0_3 = FUN_0c03f444(0x9, 0x0, 0x2, v0_3);
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C0C9D76;
    FUN_0c03744a(((((struct oC4_int *)(v0_5))->v)), 0x0, (*(int *)(((int)stk + 16))), (*(int *)((v0_2 + 0x0))));
    FUN_0c03744a(((((struct oC8_int *)(v0_5))->v)), 0x0, (*(int *)(((int)stk + 16))), (*(int *)((v0_2 + 0x0))));
    goto L_C0C9D00;
    L_C0C98E0:;
    goto L_C0C9D76;
    L_C0C9918:;
    v0_4 = *(signed char *)((((v0_1 * v0_4) + v0_0) + 0x1));
    v0_5 = FUN_0c037320((signed char)v0_4, v0_5);
    v0_7 = (v0_5);
    v0_6 = (v0_4);
    if (((int)v0_5 >= 0)) goto L_C0C9930;
    goto L_C0C9D76;
    L_C0C9930:;
    v0_4 = FUN_0c03f444(0x9, 0x0, v0_7, v0_3);
    v0_5 = (v0_4);
    if ((v0_4 != 0)) goto L_C0C9940;
    goto L_C0C9D76;
    L_C0C9940:;
    FUN_0c03733c(v0_5, (signed char)v0_6, (*(int *)((v0_2 + 0x0))));
    *(unsigned int *)((v0_5 + 0x4)) = 0xC0C9810;
    (((struct oAC_ushort *)(v0_5))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_5))->v) = 0x40;
    FUN_0c0c25c4(v0_5);
    (((struct o41D_uchar *)(v0_5))->v) = 0x0;
    (((struct o41C_uchar *)(v0_5))->v) = v0_1;
    (((struct o424_uchar *)(v0_5))->v) = (*(int *)(((int)stk + 4)));
    (((struct o1B_uchar *)(v0_5))->v) = (*(int *)(((int)stk + 8)));
    FUN_0c0c2ab6(v0_5, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_5 + 0x41C))) * (unsigned short)0x34) + v0_0) + 0x12))));
    (((struct o420_ushort *)(v0_5))->v) = (*(short *)((((v0_1 * 0x34) + v0_0) + 0x1A)));
    FUN_0c0c212c(v0_5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
    FUN_0c0c2aa2(v0_5, a8);
    FUN_0c0c241a(v0_5);
    v0_0 = *(signed char *)((v0_5 + 0x41C));
    v0_7 = ((unsigned char)v0_0);
    if (((unsigned char)v0_0 == 11)) goto L_C0C99D4;
    if ((v0_7 == 35)) goto L_C0C99D8;
    if ((v0_7 == 73)) goto L_C0C99E8;
    goto L_C0C9D72;
    L_C0C99E8:;
    FUN_0c1614c8(v0_5, 0x1);
    goto L_C0C9D72;
    L_C0C99D8:;
    v0_7 = (0x9);
    L_C0C99DA:;
    FUN_0c15c344(v0_5, (v0_5 + 0x28), v0_7, v0_3);
    goto L_C0C9D72;
    L_C0C99D4:;
    v0_7 = (0x8);
    goto L_C0C99DA;
}

int FUN_0c166b08(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o0_int *)0xC2A3438)->v)));
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) - ((((struct o4_int *)0xC2A3438)->v)));
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o8_int *)0xC2A3438)->v)));
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x1E) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
                FUN_0c0588bc((((((struct oCC_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
            }
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                t1 = *(signed char *)((a4 + 0x2));
                switch (t1) {
                case 0:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7A);
                    }
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    break;
                case 1:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7B);
                    }
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    break;
                case 2:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7C);
                    }
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    break;
                case 3:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7D);
                    }
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    break;
                case 4:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7E);
                    }
                    FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (*(float *)0xC16701C));
                    break;
                }
            } else {
                if (((((struct o404_int *)(a4))->v)) != 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    t1 = *(signed char *)((a4 + 0x2));
                    switch (t1) {
                    case 0:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7A);
                        }
                        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                        break;
                    case 1:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7B);
                        }
                        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                        break;
                    case 2:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7C);
                        }
                        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                        break;
                    case 3:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7D);
                        }
                        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                        break;
                    case 4:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7E);
                        }
                        FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (*(float *)0xC16701C));
                        break;
                    }
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            if (((int)t1 >= (int)0x14) && ((int)t1 < (int)0x1E)) {
                nlAddVector3op((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
            }
            nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t1 = *(signed char *)((a4 + 0x2));
            if (t1 != 0) {
                if ((t1 != 1) && (t1 != 2)) {
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                    t2 = (short)(t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x5A) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t1 = t2;
                } else {
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        t2 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t2 + 0x1);
                        t3 = (short)(t2 + 0x1);
                        if ((int)(short)(t2 + 0x1) > (int)0x5A) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t3 = 0x14;
                        }
                        t2 = t3;
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t1 = t2;
                }
                t2 = t1;
            } else {
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                    t3 = (short)(t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x5A) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t3 = 0x14;
                    }
                    t1 = t3;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                t2 = t1;
            }
            return t2;
        }
        if (t0 == 2) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 4.0f);
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 4.0f);
    FUN_0c166772((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), (*(signed char *)((a4 + 0x2))));
    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)0xC4B40CC;
    if ((t0 != 0) && (t0 != 1)) {
        if ((t0 != 2) && (t0 != 3)) {
            if (t0 != 4) {
            } else {
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0x34, t1);
                FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x4, 0x34, (*(int *)0xC4B40CC));
                FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x6, 0x34, (*(int *)0xC4B40CC));
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A332C); }
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A332C); }
                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0x1F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oCC_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A332C); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A3480); }
            }
        } else {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x34, t1);
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x34, (*(int *)0xC4B40CC));
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A332C); }
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A332C); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A3474); }
        }
    } else {
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x34, t1);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A332C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A3468); }
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o0_int *)0xC2A3438)->v)));
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - ((((struct o4_int *)0xC2A3438)->v)));
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o8_int *)0xC2A3438)->v)));
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x1E) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
        FUN_0c0588bc((((((struct oCC_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        t0 = *(signed char *)((a4 + 0x2));
        switch (t0) {
        case 0:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7A);
            }
            FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            break;
        case 1:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7B);
            }
            FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            break;
        case 2:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7C);
            }
            FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            break;
        case 3:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7D);
            }
            FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            break;
        case 4:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7E);
            }
            FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (*(float *)0xC16701C));
            break;
        }
    } else {
        if (((((struct o404_int *)(a4))->v)) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            t0 = *(signed char *)((a4 + 0x2));
            switch (t0) {
            case 0:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7A);
                }
                FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                break;
            case 1:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7B);
                }
                FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                break;
            case 2:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7C);
                }
                FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                break;
            case 3:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7D);
                }
                FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                break;
            case 4:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7E);
                }
                FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (*(float *)0xC16701C));
                break;
            }
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0x14) && ((int)t0 < (int)0x1E)) {
        nlAddVector3op((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
    }
    nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x5A) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            t0 = t1;
        } else {
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                t2 = (short)(t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x5A) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                t1 = t2;
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t2 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x5A) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c1141f4(int a4, int a5, int a6)
{
    int stk[9];
    register int t0;
    register int t7;
    register int t9;
    register int t11;
    register int t25;
    register int t32;
    register int t41;
    register int t45;
    register int t54;
    register int t73;
    register int t75;
    register int t78;
    register float u81;
    register int t82;
    register int t83;
    register int t86;
    register int t97;
    register int t116;
    register int t118;
    register int t130;
    register int t133;
    int t134;
    register int t139;
    register int t142;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct o0_float *)0xC539748)->v) = (((float)((-((((struct o20_short *)(a4))->v))) + 0xA) / 10.0f) * (*(float *)0xC53CE94));
            (((struct o4_float *)0xC539748)->v) = (((float)((-((((struct o20_short *)(a4))->v))) + 0xA) / 10.0f) * (*(float *)0xC53CE94));
            (((struct o8_float *)0xC539748)->v) = (((float)((-((((struct o20_short *)(a4))->v))) + 0xA) / 10.0f) * (*(float *)0xC53CE94));
            t7 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t7 + 0x1);
            if ((int)(short)(t7 + 0x1) <= (int)0xA) {
                return 0x20;
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o0_uchar *)0xC53CF74)->v) = 0x0;
            (((struct o8_uchar *)0xC53CF74)->v) = 0x0;
            (((struct o10_uchar *)0xC53CF74)->v) = 0x0;
            (((struct o18_uchar *)0xC53CF74)->v) = 0x0;
            return FUN_0c11296c(0xC539708, 0x0);
        }
        if (t0 == 2) {
            t9 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t9 + 0x1);
            t11 = 0x20;
            if ((int)(short)(t9 + 0x1) > (int)0x3) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t11 = 0x16;
            }
            return t11;
        }
        if (t0 == 3) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o0_uchar *)0xC53970A)->v) = (*(int *)((0xC291700 + ((*(int *)0xC474770) << 2))));
            FUN_0c06780e(0x4);
            FUN_0c03ea04(0xB, 0x0);
            FUN_0c036606();
            (((struct o0_float *)0xC539748)->v) = (*(float *)0xC53CE94);
            (((struct o4_float *)0xC539748)->v) = (*(float *)0xC53CE94);
            (((struct o8_float *)0xC539748)->v) = (*(float *)0xC53CE94);
            FUN_0c06785c();
            FUN_0c03ea04(0xB, 0x0);
            t25 = *(signed char *)0xC53970A;
            *(unsigned int *)(((int)stk + 0)) = (((t25 << 2) << 1) + 0xC291838);
            FUN_0c11e1e0(0xC539708, (*(signed char *)0xC539709), (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(int *)(((((t25 << 2) << 1) + 0xC291838) + 0x4))));
            t32 = ((int (*)(int))(FUN_0c037bf6))(0xC539708);
            (((struct o0_float *)0xC539748)->v) = (*(float *)0xC53CE94);
            (((struct o4_float *)0xC539748)->v) = (*(float *)0xC53CE94);
            (((struct o8_float *)0xC539748)->v) = (*(float *)0xC53CE94);
            FUN_0c038566();
            res_cockpit_faces_release_all();
            *(unsigned char *)0xC53CE26 = (*(signed char *)0xC474778);
            FUN_0c0676ce((*(signed char *)0xC539709));
            t41 = *(signed char *)0xC53970A;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC539730) = *(struct mv3 *)((0xC291738 + (((t41 << 1) + t41) << 2))); }
            *(unsigned int *)0xC539740 = (*(int *)((0xC2917F8 + ((*(signed char *)0xC53970A) << 2))));
            return FUN_0c11296c(0xC539708, 0x0);
        }
        if (t0 == 4) {
            t45 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t45 + 0x1);
            t54 = 0x20;
            if ((int)(short)(t45 + 0x1) <= (int)0x4) {
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x1;
                FUN_0c11296c(0xC539708, 0x1);
                (((struct o0_float *)0xC539748)->v) = (((*(float *)0xC53CE94) * (float)((((struct o20_short *)(a4))->v))) / 10.0f);
                (((struct o4_float *)0xC539748)->v) = (((*(float *)0xC53CE94) * (float)((((struct o20_short *)(a4))->v))) / 10.0f);
                (((struct o8_float *)0xC539748)->v) = (((*(float *)0xC53CE94) * (float)((((struct o20_short *)(a4))->v))) / 10.0f);
                t54 = 0x48;
            }
            return t54;
        }
        if (t0 == 5) {
            if ((int)((((struct o20_short *)(a4))->v)) <= (int)0xA) {
                (((struct o0_float *)0xC539748)->v) = (((*(float *)0xC53CE94) * (float)((((struct o20_short *)(a4))->v))) / 10.0f);
                (((struct o4_float *)0xC539748)->v) = (((*(float *)0xC53CE94) * (float)((((struct o20_short *)(a4))->v))) / 10.0f);
                (((struct o8_float *)0xC539748)->v) = (((*(float *)0xC53CE94) * (float)((((struct o20_short *)(a4))->v))) / 10.0f);
            }
            t73 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t73 + 0x1);
            t75 = 0x20;
            if ((int)(short)(t73 + 0x1) > (int)0xA) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t75 = 0x16;
            }
            return t75;
        }
        if (t0 == 6) {
            t78 = ((int (*)(int, int, int))(FUN_0c037bf6))(0xC539708, a5, a6);
            if ((unsigned char)t78 != 0) {
                (((struct o16_uchar *)(a4))->v) = 0x0;
                FUN_0c11e1e0(0xC539708, (*(signed char *)0xC539709), 0x0, 0x0);
                u81 = *(float *)0xC114704;
                t82 = (((struct o0_int *)0xC539820)->v);
                (((struct o98_float *)(t82))->v) = u81;
                (((struct o94_float *)(t82))->v) = u81;
                t83 = (((struct o4_int *)0xC539820)->v);
                (((struct o98_float *)(t83))->v) = u81;
                (((struct o94_float *)(t83))->v) = u81;
                *(unsigned char *)0xC53CE26 = (*(signed char *)0xC474778);
                return FUN_0c0676ce((*(signed char *)0xC539709));
            }
            return (unsigned char)t78;
        }
        return t0;
    }
    t86 = FUN_0c104c7a(0xC00);
    if (t86 != 0) {
        if ((int)(*(int *)0xC474770) > (int)0x6) {
            *(unsigned int *)0xC474770 = ((*(int *)0xC474770) - 7);
        } else {
            *(unsigned int *)0xC474770 = ((*(int *)0xC474770) + 0x7);
        }
        FUN_0c05aab6(0x0, 0x5);
    }
    t97 = FUN_0c104c7a(0x2000);
    if (t97 != 0) {
        FUN_0c05aab6(0x0, 0x6);
        if ((*(int *)0xC474770) == 0) {
            *(unsigned int *)0xC474770 = 0x6;
        } else {
            if ((*(int *)0xC474770) == 7) {
                *(unsigned int *)0xC474770 = 0xD;
            } else {
                *(unsigned int *)0xC474770 = ((*(int *)0xC474770) - 1);
            }
        }
    }
    t116 = FUN_0c104c7a(0x1000);
    if (t116 != 0) {
        FUN_0c05aab6(0x0, 0x6);
        t118 = *(int *)0xC474770;
        if (t118 == 6) {
            *(unsigned int *)0xC474770 = 0x0;
        } else {
            if (t118 == 13) {
                *(unsigned int *)0xC474770 = 0x7;
            } else {
                *(unsigned int *)0xC474770 = ((*(int *)0xC474770) + 0x1);
            }
        }
    }
    t130 = FUN_0c104d70();
    if (t130 != 0) {
        t133 = *(int *)0xC474770;
        t134 = *(signed char *)0xC542B8A;
        if (t133 == 6) {
            if ((int)t134 < (int)0x1) {
                return t133;
            }
        } else {
            if ((t133 == 13) && (t134 != 2)) {
                return t134;
            }
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = 0x0;
        return FUN_0c113ba4((*(int *)0xC474770));
    }
    t139 = FUN_0c104db8();
    t142 = t139;
    if (t139 == 0) {
    } else {
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)((*(int *)0xC474C18)))->v) = 0x63;
        *(unsigned int *)0xC474C18 = 0x0;
        t142 = FUN_0c118412(0x3);
        *(unsigned int *)0xC474B8C = t142;
    }
    return t142;
}

float FUN_0c124794(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_1 = a4;
    v0_4 = a5;
    v0_6 = a7;
    *(unsigned char *)(((int)stk + 8)) = v0_4;
    v0_3 = *(signed char *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    v0_4 = (v0_3);
    v0_0 = (0x1);
    v0_7 = (0xC179AC0);
    v0_1 = (v0_1);
    v0_2 = (0xC4B40FC);
    v0_5 = (0xC03744A);
    w0_1 = (0.0f);
    w0_0 = (1.0f);
    if ((v0_3 == 0)) goto L_C1247F2;
    if ((v0_4 == 1)) goto L_C12489C;
    if ((v0_4 != 2)) goto L_C1247D6;
    v0_5 = FUN_0c03f444(0x5, 0x0, 0xA, v0_6);
    v0_4 = (v0_5);
    v0_3 = (v0_5);
    if ((v0_5 != 0)) goto L_C12496A;
    L_C124BD2:;
    return F0;
    L_C12496A:;
    *(unsigned char *)((v0_3 + 0x1)) = (*(signed char *)((v0_1 + 0x1)));
    *(unsigned int *)((v0_3 + 0x4)) = 0xC124386;
    (((struct oA8_uchar *)(v0_3))->v) = v0_0;
    (((struct oAC_ushort *)(v0_3))->v) = 0xF;
    (((struct oA9_uchar *)(v0_3))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x28)) = *(struct mv3 *)((v0_1 + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x34)) = *(struct mv3 *)((v0_1 + 0x34)); }
    (((struct o48_float *)(v0_3))->v) = w0_0;
    (((struct o44_float *)(v0_3))->v) = w0_0;
    (((struct o40_float *)(v0_3))->v) = w0_0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    w0_2 = (360.0f);
    w0_3 = (65536.0f);
    w0_1 = (50.0f);
    w0_0 = (10.0f);
    L_C124AD6:;
    if (!(((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)0x28))) goto L_C124ADE;
    v0_5 = *(int *)((((0xC4 + v0_3) + (*(int *)(((int)stk + 4)))) + 0x0));
    v0_4 = (*(int *)((v0_2 + ((*(signed char *)((v0_1 + 0x1))) << 2))));
    *(int *)((int)stk + 0) = v0_4;
    v0_6 = (int)((int)(nlRand()) % (int)0x3);
    FUN_0c03744a(v0_5, (v0_6 + 0x1), 0x6, v0_4);
    *(unsigned char *)((v0_5 + 0x0)) = v0_0;
    *(unsigned short *)((v0_5 + 0x6)) = 0x21F;
    w0_4 = w0_1;
    w0_4 = w0_4 + w0_0 * (float)((int)((int)(nlRand()) % (int)0x14));
    (((struct o18_float *)(v0_5))->v) = w0_4;
    v0_4 = (int)((int)(nlRand()) % (int)0x48);
    (((struct o7C_uint *)(v0_5))->v) = (int)(((float)((v0_4 << 2) + v0_4) * w0_3) / w0_2);
    w0_4 = math_sin_angle16((int)(((float)((v0_4 << 2) + v0_4) * w0_3) / w0_2));
    (((struct o6C_float *)(v0_5))->v) = (w0_4 * ((((struct o18_float *)(v0_5))->v)));
    (((struct o74_float *)(v0_5))->v) = ((math_cos_angle16(((((struct o7C_int *)(v0_5))->v)))) * ((((struct o18_float *)(v0_5))->v)));
    (((struct o70_float *)(v0_5))->v) = ((float)((int)((int)(nlRand()) % (int)0x14)) * w0_0);
    (((struct o8C_float *)(v0_5))->v) = (1.0f + 1.0f);
    (((struct o88_float *)(v0_5))->v) = (1.0f + 1.0f);
    (((struct o84_float *)(v0_5))->v) = (1.0f + 1.0f);
    (((struct o1C_float *)(v0_5))->v) = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x5);
    v0_6 = nlRand();
    v0_4 = (v0_6);
    v0_5 = (v0_5);
    if (((int)v0_6 < 0)) goto L_C124AB8;
    v0_4 = ((v0_4 & 0x7));
    goto L_C124AC2;
    L_C124ADE:;
    (((struct o14_uchar *)(v0_3))->v) = (*(signed char *)(((int)stk + 8)));
    *(unsigned int *)((v0_3 + 0x10)) = v0_1;
    *(unsigned short *)((v0_3 + 0x1C)) = 0x12C;
    v0_4 = (0x12C);
    goto L_C124BD2;
    L_C124AC2:;
    (((struct o20_float *)(v0_5))->v) = ((float)v0_4 + 0.5f);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    FPUL_ = (v0_4);
    goto L_C124AD6;
    L_C124AB8:;
    v0_4 = (((~(((~v0_4) + 0x1) & 0x7)) + 0x1));
    goto L_C124AC2;
    L_C1247D6:;
    if (!((v0_4 != 3))) goto L_C124B04;
    if ((v0_4 != 4)) goto L_C1247E6;
    goto L_C124B04;
    L_C124B04:;
    v0_3 = FUN_0c03f444(0x5, 0x0, 0x1, v0_6);
    v0_4 = (v0_3);
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C124BD2;
    *(unsigned char *)((v0_5 + 0x1)) = (*(signed char *)((v0_1 + 0x1)));
    *(unsigned int *)((v0_5 + 0x4)) = 0xC124580;
    (((struct oA8_uchar *)(v0_5))->v) = v0_0;
    (((struct oAC_ushort *)(v0_5))->v) = 0xF;
    (((struct oA9_uchar *)(v0_5))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x28)) = *(struct mv3 *)((v0_1 + 0x28)); }
    (((struct o2C_float *)(v0_5))->v) = (((((struct o2C_float *)(v0_5))->v)) + 250.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x34)) = *(struct mv3 *)((v0_1 + 0x34)); }
    (((struct o48_float *)(v0_5))->v) = w0_0;
    (((struct o44_float *)(v0_5))->v) = w0_0;
    (((struct o40_float *)(v0_5))->v) = w0_0;
    v0_6 = *(int *)(((int)stk + 4));
    v0_4 = (v0_6);
    v0_3 = (((((struct oC4_int *)(v0_5))->v)));
    FPUL_ = (0x437A0000);
    if ((v0_6 == 3)) goto L_C124B78;
    if ((v0_4 == 4)) goto L_C124B88;
    if (!((v0_4 == 5))) goto L_C124BAC;
    *(unsigned char *)((v0_5 + 0x2)) = 0x2;
    v0_4 = (0x2);
    v0_7 = (0x7);
    v0_6 = ((*(int *)((v0_2 + ((*(signed char *)((v0_1 + 0x1))) << 2)))));
    goto L_C124BA8;
    L_C124BAC:;
    *(unsigned char *)((v0_3 + 0x0)) = v0_0;
    *(unsigned short *)((v0_3 + 0x6)) = 0x21F;
    (((struct o18_float *)(v0_3))->v) = w0_0;
    (((struct o20_float *)(v0_3))->v) = w0_0;
    (((struct o1C_float *)(v0_3))->v) = w0_0;
    (((struct o8C_float *)(v0_3))->v) = w0_1;
    (((struct o88_float *)(v0_3))->v) = w0_1;
    (((struct o84_float *)(v0_3))->v) = w0_1;
    *(unsigned short *)((v0_5 + 0x1C)) = 0x0;
    *(unsigned short *)((v0_5 + 0x1E)) = 0x0;
    *(unsigned int *)((v0_5 + 0x10)) = v0_1;
    v0_4 = (0x0);
    goto L_C124BD2;
    L_C124BA8:;
    FUN_0c03744a(v0_3, v0_4, v0_7, v0_6);
    goto L_C124BAC;
    L_C124B88:;
    *(unsigned char *)((v0_5 + 0x2)) = v0_0;
    v0_4 = (0x1);
    v0_7 = (0x7);
    v0_6 = ((*(int *)((v0_2 + ((*(signed char *)((v0_1 + 0x1))) << 2)))));
    goto L_C124BA8;
    L_C124B78:;
    *(unsigned char *)((v0_5 + 0x2)) = 0x0;
    v0_4 = (0x0);
    v0_7 = (0x7);
    v0_6 = ((*(int *)((v0_2 + ((*(signed char *)((v0_1 + 0x1))) << 2)))));
    goto L_C124BA8;
    L_C1247E6:;
    if ((v0_4 != 5)) goto L_C1247EE;
    goto L_C124B04;
    L_C1247EE:;
    goto L_C124BD2;
    L_C12489C:;
    v0_5 = FUN_0c03f444(0x5, 0x0, 0x4, v0_6);
    v0_4 = (v0_5);
    v0_3 = (v0_5);
    if ((v0_5 != 0)) goto L_C1248B0;
    goto L_C124BD2;
    L_C1248B0:;
    *(unsigned char *)((v0_3 + 0x1)) = (*(signed char *)((v0_1 + 0x1)));
    *(unsigned int *)((v0_3 + 0x4)) = 0xC124286;
    (((struct oA8_uchar *)(v0_3))->v) = v0_0;
    (((struct oAC_ushort *)(v0_3))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_3))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x28)) = *(struct mv3 *)((v0_1 + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x34)) = *(struct mv3 *)((v0_1 + 0x34)); }
    (((struct o48_float *)(v0_3))->v) = w0_0;
    (((struct o44_float *)(v0_3))->v) = w0_0;
    (((struct o40_float *)(v0_3))->v) = w0_0;
    v0_7 = (0xC2A0E70);
    v0_4 = (0x0);
    L_C124948:;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    if (((unsigned int)v0_4 < (unsigned int)0x10)) goto L_C1248F6;
    goto L_C124ADE;
    L_C1248F6:;
    v0_4 = *(int *)((((0xC4 + v0_3) + (*(int *)(((int)stk + 4)))) + 0x0));
    FUN_0c03744a(v0_4, 0x0, 0x6, (*(int *)((v0_2 + ((*(signed char *)((v0_1 + 0x1))) << 2)))));
    *(unsigned char *)((v0_4 + 0x0)) = v0_0;
    *(unsigned short *)((v0_4 + 0x6)) = 0x21F;
    (((struct o74_float *)(v0_4))->v) = w0_1;
    (((struct o6C_float *)(v0_4))->v) = w0_1;
    (((struct o70_float *)(v0_4))->v) = ((((struct o10_float *)(v0_7))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_4)) = *(struct mv3 *)(v0_7); }
    (((struct o7C_uint *)(v0_4))->v) = (*(int *)((v0_7 + 0xC)));
    (((struct o18_float *)(v0_4))->v) = w0_0;
    (((struct o20_float *)(v0_4))->v) = w0_0;
    (((struct o1C_float *)(v0_4))->v) = w0_0;
    v0_7 = ((v0_7 + 0x14));
    v0_5 = (v0_4);
    v0_4 = (((*(int *)(((int)stk + 4))) + 0x4));
    goto L_C124948;
    L_C1247F2:;
    v0_3 = (0x8);
    L_C124870:;
    if ((v0_3 != 0)) goto L_C1247F6;
    goto L_C124BD2;
    L_C1247F6:;
    v0_7 = FUN_0c03f444(0x5, 0x0, 0x1, v0_6);
    v0_4 = (v0_7);
    v0_5 = (v0_7);
    if ((v0_7 == 0)) goto L_C12486E;
    v0_4 = (*(int *)((v0_2 + ((*(signed char *)((v0_1 + 0x1))) << 2))));
    *(int *)((int)stk + 0) = v0_4;
    v0_7 = (int)((int)(nlRand()) % (int)0x3);
    FUN_0c03744a(((((struct oC4_int *)(v0_5))->v)), v0_7, 0x5, v0_4);
    *(unsigned char *)((v0_5 + 0x1)) = (*(signed char *)((v0_1 + 0x1)));
    *(unsigned int *)((v0_5 + 0x4)) = 0xC12409C;
    (((struct oA8_uchar *)(v0_5))->v) = v0_0;
    (((struct oAC_ushort *)(v0_5))->v) = 0xF;
    (((struct oA9_uchar *)(v0_5))->v) = 0x21;
    (((struct o40_float *)(v0_5))->v) = w0_0;
    (((struct o44_float *)(v0_5))->v) = w0_0;
    (((struct o48_float *)(v0_5))->v) = w0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x28)) = *(struct mv3 *)((v0_1 + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x34)) = *(struct mv3 *)((v0_1 + 0x34)); }
    FUN_0c123f20(v0_5);
    *(unsigned int *)((v0_5 + 0x10)) = v0_1;
    *(unsigned short *)((v0_5 + 0x1C)) = 0x12C;
    v0_4 = (0x12C);
    L_C12486E:;
    v0_3 = ((v0_3 - 1));
    goto L_C124870;
}

int FUN_0c0c7188(int a4)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t4;
    register int t7;
    register int t8;
    register int t9;
    register int t18;
    register int t21;
    register int t22;
    register int t23;
    register int t26;
    register float u28;
    register float u31;
    register float u34;
    register float u36;
    register float u39;
    register float u41;
    register int t42;
    register float u43;
    register float u46;
    register int t49;
    register int t50;
    register int t51;
    register int t54;
    register float u56;
    register float u59;
    register float u62;
    register float u64;
    register float u67;
    register float u69;
    register int t70;
    register float u72;
    register float u74;
    register int t77;
    register int t78;
    register int t79;
    register int t82;
    register float u84;
    register float u87;
    register float u90;
    register float u92;
    register float u95;
    register float u97;
    register float u100;
    register float u102;
    register float u105;
    register float t107;
    register float t109;
    register float u112;
    register float u113;
    register float u114;
    register float t116;
    register float t118;
    register float u121;
    register float u122;
    register float u123;
    register float u126;
    register float u129;
    register int t132;
    register int t135;
    register int t141;
    register int t144;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = (((struct oC8_int *)(a4))->v);
    (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x2AAB);
    if (((*(int *)0xC542260) & 0x1) != 0) {
        t4 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t4 + 0x1);
        if ((int)(short)(t4 + 0x1) >= (int)0x4) {
            (((struct o20_ushort *)(a4))->v) = 0x0;
        }
        *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x1;
        t7 = (((struct oD8_int *)(a4))->v);
        *(int *)((int)stk + 0) = (0x80 + t7);
        t8 = nlRand();
        t9 = ((~(((~t8) + 0x1) & 0xFFFF)) + 0x1);
        if ((int)t8 >= 0) {
            t9 = (t8 & 0xFFFF);
        }
        (((struct o80_uint *)(t7))->v) = t9;
    } else {
        *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    t18 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t18 + 0x1);
    if ((int)(short)(t18 + 0x1) >= (int)0x14) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    t21 = *(short *)((a4 + 0x1C));
    t22 = (int)((int)t21 / (int)0x4);
    t23 = ((~(((~t21) + 0x1) & 0x3)) + 0x1);
    if ((int)t21 >= 0) {
        t23 = (t21 & 0x3);
    }
    *(unsigned int *)(((int)stk + 4)) = t23;
    t26 = *(int *)(((int)stk + 4));
    u28 = *(float *)((((((t22 << 1) + t22) << 2) + 0xC273394) + 0x0));
    u31 = u28;
    u31 = u31 + (float)t26 * (((((((struct oC_float *)(((((t22 << 1) + t22) << 2) + 0xC273394)))->v)) - u28) / 4.0f));
    (((struct o6C_float *)(((((struct oCC_int *)(a4))->v))))->v) = u31;
    u34 = (((struct o4_float *)(((((t22 << 1) + t22) << 2) + 0xC273394)))->v);
    u36 = u34;
    u36 = u36 + (float)t26 * (((((((struct o4_float *)((((((t22 << 1) + t22) << 2) + 0xC273394) + 0xC)))->v)) - u34) / 4.0f));
    (((struct o70_float *)(((((struct oCC_int *)(a4))->v))))->v) = u36;
    u39 = (((struct o8_float *)(((((t22 << 1) + t22) << 2) + 0xC273394)))->v);
    u41 = u39;
    u41 = u41 + (float)t26 * (((((((struct o8_float *)((((((t22 << 1) + t22) << 2) + 0xC273394) + 0xC)))->v)) - u39) / 4.0f));
    (((struct o74_float *)(((((struct oCC_int *)(a4))->v))))->v) = u41;
    t42 = (((struct oCC_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 4)) = ((t22 << 2) + 0xC2733DC);
    u43 = *(float *)((((t22 << 2) + 0xC2733DC) + 0x0));
    u46 = u43;
    u46 = u46 + (float)t26 * (((((((struct o4_float *)(((t22 << 2) + 0xC2733DC)))->v)) - u43) / 4.0f));
    (((struct o78_uint *)(t42))->v) = ((int)((((u46 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t49 = (int)((int)((*(short *)((a4 + 0x1C))) + 0x7) % (int)0x14);
    t50 = (int)((int)t49 / (int)0x4);
    t51 = ((~(((~t49) + 0x1) & 0x3)) + 0x1);
    if ((int)t49 >= 0) {
        t51 = (t49 & 0x3);
    }
    *(unsigned int *)(((int)stk + 4)) = t51;
    t54 = *(int *)(((int)stk + 4));
    u56 = *(float *)((((((t50 << 1) + t50) << 2) + 0xC273394) + 0x0));
    u59 = u56;
    u59 = u59 + (float)t54 * (((((((struct oC_float *)(((((t50 << 1) + t50) << 2) + 0xC273394)))->v)) - u56) / 4.0f));
    (((struct o6C_float *)(((((struct oD0_int *)(a4))->v))))->v) = u59;
    u62 = (((struct o4_float *)(((((t50 << 1) + t50) << 2) + 0xC273394)))->v);
    u64 = u62;
    u64 = u64 + (float)t54 * (((((((struct o4_float *)((((((t50 << 1) + t50) << 2) + 0xC273394) + 0xC)))->v)) - u62) / 4.0f));
    (((struct o70_float *)(((((struct oD0_int *)(a4))->v))))->v) = u64;
    u67 = (((struct o8_float *)(((((t50 << 1) + t50) << 2) + 0xC273394)))->v);
    u69 = u67;
    u69 = u69 + (float)t54 * (((((((struct o8_float *)((((((t50 << 1) + t50) << 2) + 0xC273394) + 0xC)))->v)) - u67) / 4.0f));
    (((struct o74_float *)(((((struct oD0_int *)(a4))->v))))->v) = u69;
    t70 = (((struct oD0_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 4)) = ((t50 << 2) + 0xC2733DC);
    u72 = *(float *)((((t50 << 2) + 0xC2733DC) + 0x0));
    u74 = u72;
    u74 = u74 + (float)t54 * (((((((struct o4_float *)(((t50 << 2) + 0xC2733DC)))->v)) - u72) / 4.0f));
    (((struct o78_uint *)(t70))->v) = ((int)((((u74 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t77 = (int)((int)((*(short *)((a4 + 0x1C))) + 0xE) % (int)0x14);
    t78 = (int)((int)t77 / (int)0x4);
    t79 = ((~(((~t77) + 0x1) & 0x3)) + 0x1);
    if ((int)t77 >= 0) {
        t79 = (t77 & 0x3);
    }
    *(unsigned int *)(((int)stk + 4)) = t79;
    t82 = *(int *)(((int)stk + 4));
    u84 = *(float *)((((((t78 << 1) + t78) << 2) + 0xC273394) + 0x0));
    u87 = u84;
    u87 = u87 + (float)t82 * (((((((struct oC_float *)(((((t78 << 1) + t78) << 2) + 0xC273394)))->v)) - u84) / 4.0f));
    (((struct o6C_float *)(((((struct oD4_int *)(a4))->v))))->v) = u87;
    u90 = (((struct o4_float *)(((((t78 << 1) + t78) << 2) + 0xC273394)))->v);
    u92 = u90;
    u92 = u92 + (float)t82 * (((((((struct o4_float *)((((((t78 << 1) + t78) << 2) + 0xC273394) + 0xC)))->v)) - u90) / 4.0f));
    (((struct o70_float *)(((((struct oD4_int *)(a4))->v))))->v) = u92;
    u95 = (((struct o8_float *)(((((t78 << 1) + t78) << 2) + 0xC273394)))->v);
    u97 = u95;
    u97 = u97 + (float)t82 * (((((((struct o8_float *)((((((t78 << 1) + t78) << 2) + 0xC273394) + 0xC)))->v)) - u95) / 4.0f));
    (((struct o74_float *)(((((struct oD4_int *)(a4))->v))))->v) = u97;
    u100 = *(float *)((((t78 << 2) + 0xC2733DC) + 0x0));
    u102 = u100;
    u102 = u102 + (float)t82 * (((((((struct o4_float *)(((t78 << 2) + 0xC2733DC)))->v)) - u100) / 4.0f));
    (((struct o78_uint *)(((((struct oD4_int *)(a4))->v))))->v) = ((int)((((u102 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    if ((*(short *)((a4 + 0x1E))) == 0) {
        u105 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
        t107 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        t109 = math_sin_angle16(((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))) + 0x4000));
        u112 = (t109 * 13.0f);
        u113 = (((t107 * 185.0f)) - u112);
        u114 = (*(float *)(((int)stk + 8)));
        u114 = u114 + u105 * u113;
        *(float *)(((int)stk + 8)) = u114;
        t116 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        t118 = math_cos_angle16(((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))) + 0x4000));
        u121 = (t118 * 13.0f);
        u122 = (((t116 * 185.0f)) - u121);
        u123 = (*(float *)(((int)stk + 16)));
        u123 = u123 + u105 * u122;
        *(float *)(((int)stk + 16)) = u123;
        u126 = 92.0f;
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x16))) == 0) {
            u126 = 80.0f;
        }
        u129 = (*(float *)(((int)stk + 12)));
        u129 = u129 + u126 * u105;
        *(float *)(((int)stk + 12)) = u129;
        FUN_0c162f8a((*(signed char *)((a4 + 0x1))), (((int)stk + 4) + 0x4), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x5);
        t132 = FUN_0c0c213c(a4);
        if (t132 != 0) {
            t144 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
        } else {
            t135 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t135 + 0x1);
            t144 = (short)(t135 + 0x1);
            if ((int)(short)(t135 + 0x1) >= (int)0x5) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t144 = 0x0;
            }
        }
    } else {
        t141 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t141 + 0x1);
        t144 = (short)(t141 + 0x1);
        if ((int)(short)(t141 + 0x1) >= (int)0x5) {
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t144 = 0x0;
        }
    }
    return t144;
}
