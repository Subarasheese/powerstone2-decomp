/* Straight-line functions with calls and guards (batch gen_gn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o178_float { char p[0x178]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o180_float { char p[0x180]; float v; };
struct o180_uint { char p[0x180]; unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C8_int { char p[0x2C8]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c04e052(int, int, int, float);
int FUN_0c052364(int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c0528c6(int);
int FUN_0c052962(int);
int FUN_0c052ba8(int);
int FUN_0c0537ac(int, int, int, int);
int FUN_0c0537d4(int);
int FUN_0c053a94(int);
int FUN_0c053eb2(int, int, int, int);
int FUN_0c053efe(int, int, int);
int FUN_0c053f16(int, int, int, int);
int FUN_0c053f34(int);
int FUN_0c054058(int, int, int, int, float, float);
int FUN_0c0546f4(int);
int FUN_0c0547ee(int, int, int);
int FUN_0c05490a(int, int, int, int);
extern int FUN_0c056b68();
int FUN_0c064f80(int);
int FUN_0c06593a(int, int);
int FUN_0c067438(int);
int FUN_0c067734(int);
int FUN_0c0733b0(int);
int FUN_0c07e420(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c080d2a(int);
int FUN_0c081dfc(int);
int FUN_0c081e68(int);
int FUN_0c085cac(int, int, int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0d04c4(int, int);
extern int FUN_0c0dd728();
int FUN_0c0dd746(int, int, int);
int FUN_0c0dd78a(int);
extern int FUN_0c0dd7d2();
int FUN_0c0e2700(int, int, int, int);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3i_add(int, int, int);
int mdl_vtx_get_pos(int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_set_pos(int);
int nlAddVector3op(int, int, int);
int nlObjPut(int);
int nlObjPutSetFadeColor(int, int, int, float, float, float);
int nlObjPutTrnsl(int, float);
int nlRand(void);
int nlSelectMatrixStack(int);
int nlUnitMatrix(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c083e00(int a4, int a5);
int FUN_0c04e0b0(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c05283e(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0dd80e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c057402(void);
struct o1C_int { char p[0x1C]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };


/* manual: player action start for a5 = 0..17 (state byte +0x3715 = 23): shared prefix calls by bit mask, one velocity-from-angle block, one animation call; 249 cases (126 dev, 123 holdout), 840 of 840 instructions */
#define SB(o) (*(signed char *)(a4 + (o)))
#define UB(o) (*(unsigned char *)(a4 + (o)))
#define H(o) (*(unsigned short *)(a4 + (o)))
#define I(o) (*(int *)(a4 + (o)))
#define F(o) (*(float *)(a4 + (o)))
int FUN_0c083e00(int a4, int a5)
{
    struct mv3 { int w[3]; } v;
    int k, x, y, z, i, n, ang, b;
    float s, up, g, *m;

    v = *(struct mv3 *)0xC1C5DB8;
    UB(0x3743) = 0;
    H(0x382A) = 0;
    UB(0x3757) = 0;
    FUN_0c0733b0(a4);
    if (SB(0x371D) == 1)
        UB(0x371D) = 0;
    FUN_0c067734(a4);
    if ((unsigned int)(signed char)a5 < 18) {
        k = (signed char)a5;
        m = (float *)(a4 + 0x4C); /* +0x4C..+0x60: velocity and acceleration */
        b = 1 << k;
        if ((k == 0 || k == 6) && F(0x160) == 0.0f)
            return FUN_0c085cac(a4, 14, 0);
        UB(0x3715) = 23;
        if (k != 14)
            UB(0x15) = a5;
        if (b & 0x8141)
            FUN_0c081dfc(a4);
        if (b & 0x182C)
            FUN_0c081e68(a4);
        if (b & 0x291FD)
            FUN_0c067438(a4);
        if (b & 0x803C) {
            H(0x3830) = 0;
            UB(0x374B) = 1;
        }
        if (b & 0x8108)
            FUN_0c07e868(a4, 2, 0, 0);
        x = -1;
        y = 0;
        z = 0;
        s = 5.0f;
        up = 0.0f;
        g = -2.0f;
        switch (k) {
        case 0:
            I(0x38) = F(0x28) > 0.0f ? 0x4000 : 0xC000;
            F(0x3790) = *(float *)(0xC259E54 + SB(2) * 192 + SB(0x371C) * 96 + 0x40);
            s = F(0x3790);
            g = 0.0f;
            break;
        case 1:
            UB(0x371D) = 0;
            if (UB(0x3721) == 25) {
                FUN_0c07e868(a4, 9, 0, 0);
                break;
            }
        pick:
            if (F(0x160) == 0.0f) {
                z = 11;
            } else {
                y = 5;
                z = 47;
            }
            break;
        case 2:
            y = 2;
            z = 43;
            break;
        case 3:
            I(0x38) = 0x4000;
            F(0x28) = -700.0f;
            F(0x2C) = 0.0f;
            F(0x30) = 0.0f;
            s = 9.5f;
            g = F(0x37A0);
            break;
        case 4:
            s = 25.0f;
            up = 20.0f;
            break;
        case 5:
            up = 35.0f;
            break;
        case 6:
            ang = math_angle_between_points_xz(a4 + 0x28, (int)&v);
            I(0x38) = ang;
            s = 10.0f;
            up = 40.0f;
            break;
        case 8:
            ang = 0;
            I(0x38) = ang;
            break;
        case 9:
            y = 2;
            z = 34;
            break;
        case 10:
            y = 2;
            z = 20;
            break;
        case 12:
            UB(0x3756) = 1;
            if (F(0x160) > 0.0f)
                x = SB(1);
            FUN_0c07e79c(a4, x, 0, 11, x, 0, 11);
            H(0x3830) = 0;
            UB(0x374B) = 10;
            F(0x28) = 0.0f;
            F(0x2C) = -20000.0f;
            F(0x30) = -750.0f;
        case 11:
            for (i = 0, n = 0; i < SB(1); i++)
                if (*(short *)0xC54099A & (1 << i))
                    n++;
            if (k == 11) {
                *(struct mv3 *)(a4 + 0x28) = ((struct mv3 *)0xC1C98FC)[i - n];
                F(0x2C) = F(0x2C) + 2000.0f;
                UB(0x371D) = 0;
                goto pick;
            }
            *(struct mv3 *)(a4 + 0x37C4) = ((struct mv3 *)0xC1C98FC)[3 - n];
            I(0x38) = math_angle_between_points_xz(a4 + 0x28, a4 + 0x37C4);
            s = F(0x28) - F(0x37C4);
            up = F(0x30) - F(0x37CC);
            F(0x3790) = math_signed_sqrt(up * up + s * s);
            s = F(0x3790) / 30.0f;
            up = 10.0f;
            g = -1.5f;
            break;
        case 13:
            m[4] = 0.0f;
            m[5] = 0.0f;
            m[3] = 0.0f;
            m[1] = 0.0f;
            m[2] = 0.0f;
            m[0] = 0.0f;
            H(0x1C) = 60;
            if (!(F(0x160) > 0.0f)) {
                FUN_0c081dfc(a4);
                z = 11;
            }
            break;
        case 15:
            ang = 0x4000;
            I(0x38) = ang;
            s = 9.5f;
            up = -0.3f;
            g = 0.0f;
            break;
        }
        if (b & 0x9179) {
            if (b & 0x1039)
                ang = I(0x38);
            m[0] = math_sin_angle16(ang) * s;
            m[2] = math_cos_angle16(I(0x38)) * s;
            if (k != 8) {
                m[5] = 0.0f;
                m[3] = 0.0f;
            }
            if (k == 0)
                m[4] = g;
            m[1] = up;
            if (k != 0 && k != 8)
                m[4] = g;
            if (k >= 4 && k <= 6) {
                x = SB(1);
                z = 11;
            }
        }
        if (z)
            FUN_0c07e79c(a4, x, y, z, x, y, z);
        switch (k) {
        case 0:
            FUN_0c07e868(a4, 2, 0, 0);
            H(0x1C) = 30;
            break;
        case 1:
        case 11:
            m[5] = 0.0f;
            m[3] = 0.0f;
            m[2] = 0.0f;
            m[0] = 0.0f;
            m[1] = 0.0f;
            m[4] = -2.0f;
            if (k == 1)
                UB(0x16) = z != 0;
            else
                H(0x1C) = 180;
            break;
        case 2:
            I(0x3850) = 0;
            H(0x1C) = 180;
            H(0x22) = 0;
            break;
        case 3:
            H(0x1C) = 0;
            H(0x22) = 0;
            break;
        case 7:
        case 17:
            H(0x1C) = 40;
            break;
        case 8:
            H(0x1C) = 180;
            break;
        case 12:
            H(0x1C) = 50;
            break;
        case 13:
            if (z) {
                m[4] = -2.0f;
                UB(0x17) = 1;
                return 0x17;
            }
            FUN_0c07e868(a4, 9, 0, 0);
            UB(0x17) = 0;
            break;
        case 15:
            H(0x1C) = 0;
            break;
        case 16:
            FUN_0c07e868(a4, 7, 0, 0);
            FUN_0c080d2a(a4);
            H(0x1C) = 10;
            break;
        }
    }
    UB(0x374A) = 60;
    H(0x382E) = 0;
    return 0x382E;
}
#undef SB
#undef UB
#undef H
#undef I
#undef F

int FUN_0c04e0b0(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t2;
    int t387;
    int t26;
    int stk[5];
    int t27;
    int t117;
    int t273;
    int t200;
    float qe0;
    float qe2;
    float u190;
    float u208;
    int t272;
    int t248;
    int t241;
    float u206;
    int t205;
    int t204;
    int R1004;
    float u179;
    float u174;
    int t369;
    int t357;
    int t346;
    int t344;
    int t332;
    int t321;
    int t319;
    int t317;
    int t305;
    int t303;
    int t293;
    int t291;
    int t286;
    int t261;
    int t260;
    int t257;
    int t255;
    int t240;
    int t201;
    int t138;
    int t116;
    int t23;
    int t18;
    int t5;
    int qe1;
    int R1000;
    int t290;
    int t268;
    int t247;
    int t118;
    int t271;
    int t270;
    int t0;
    int t269;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    t0 = (((struct oC4_int *)(a4))->v);
    t2 = *(int *)((((*(signed char *)(a4 + 0x2)) << 2) + 0xC240DBC));
    if ((*(signed char *)(a4 + 0x14)) == 0) {
        (((struct o1C_ushort *)(a4))->v) = 0x0;
        (((struct o1E_ushort *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x7;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o1A_uchar *)(a4))->v) = 0x0;
        (((struct o18_uchar *)(a4))->v) = 0x0;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        (((struct o6_ushort *)(t0))->v) = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)(t2 + 0x8); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x34) = *(struct mv3 *)(t2 + 0x14); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x34) = *(struct mv3 *)(t2 + 0x14); }
        (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x0;
        t5 = (((struct oF4_int *)(a4))->v);
        (((struct o70_float *)(t5))->v) = (((((struct o70_float *)(t5))->v)) - 20.0f);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)(*(signed char *)(a4 + 0x1B))) {
        t387 = (FUN_0c03f346(a4, a5, a6, a7));
    } else {
        t18 = (((struct o1E_short *)(a4))->v);
        (((struct o1E_ushort *)(a4))->v) = (t18 + 0x1);
        if ((int)(short)(t18 + 0x1) < (int)(*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x0)))) {
        } else {
            (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1);
            t23 = (((struct o1C_short *)(a4))->v);
            t26 = *(int *)((((((((short)t23 - 1) << 2) << 2) << 1) + t2) + 0x0));
            qe1 = (((((short)t23 << 2) << 2) << 1) + t2);
            t27 = *(int *)((qe1 + 0x0));
            if (((*(int *)((qe1 + 0x4))) & 0x2) != 0) {
                (((struct o80_uint *)(t0))->v) = (*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x1C)));
            } else {
                FUN_0c04e052((t0 + 0x78), (*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x14))), ((((struct o34_int *)(a4))->v)), (float)(t27 - t26));
                FUN_0c04e052((t0 + 0x7C), (*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x18))), ((((struct o38_int *)(a4))->v)), (float)(t27 - t26));
                FUN_0c04e052((0x80 + t0), (*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x1C))), ((((struct o3C_int *)(a4))->v)), (float)(t27 - t26));
            }
            if (((*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x4))) & 0x1) != 0) {
                (((struct o4C_float *)(a4))->v) = ((((((struct o8_float *)(((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2)))->v)) - ((((struct o28_float *)(a4))->v))) / (float)(t27 - t26));
                (((struct o50_float *)(a4))->v) = ((((((struct oC_float *)(((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2)))->v)) - ((((struct o2C_float *)(a4))->v))) / (float)(t27 - t26));
                (((struct o54_float *)(a4))->v) = ((((((struct o10_float *)(((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2)))->v)) - ((((struct o30_float *)(a4))->v))) / (float)(t27 - t26));
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
            } else {
                qe0 = ((float)(t27 - t26) * (float)(t27 - t26));
                (((struct o58_float *)(a4))->v) = (((((((struct o8_float *)(((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2)))->v)) - ((((struct o28_float *)(a4))->v))) - (((float)(t27 - t26) * ((((struct o4C_float *)(a4))->v))) * (1.0f + 1.0f))) / qe0);
                (((struct o5C_float *)(a4))->v) = (((((((struct oC_float *)(((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2)))->v)) - ((((struct o2C_float *)(a4))->v))) - (((float)(t27 - t26) * ((((struct o50_float *)(a4))->v))) * (1.0f + 1.0f))) / qe0);
                (((struct o60_float *)(a4))->v) = (((((((struct o10_float *)(((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2)))->v)) - ((((struct o30_float *)(a4))->v))) - (((float)(t27 - t26) * ((((struct o54_float *)(a4))->v))) * (1.0f + 1.0f))) / qe0);
            }
            if (((*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x4))) & 64) != 0) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
            }
            if (((*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x4))) & 128) != 0) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                (((struct oB0_float *)(a4))->v) = 0.0f;
            } else {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
            }
            if (((*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x4))) & 16) != 0) {
                t117 = (((struct oDC_int *)(a4))->v);
                (((struct o6_ushort *)(t117))->v) = (((((struct o6_short *)(t117))->v)) | 0x200);
                (((struct o18_float *)(t117))->v) = 1.0f;
                (((struct o20_float *)(t117))->v) = 1.0f;
                (((struct o1C_float *)(t117))->v) = 1.0f;
                t116 = 0x1C;
                t118 = 0x1C;
                for (;;) {
                    if ((unsigned int)t118 > (unsigned int)0x2C) {
                        break;
                    }
                    t117 = (*(int *)((((0xC4 + a4) + t118) + 0x0)));
                    t118 = (t118 + 0x4);
                    (((struct o6_ushort *)(t117))->v) = (((((struct o6_short *)(t117))->v)) | 0x200);
                    (((struct o20_float *)(t117))->v) = 1.0f;
                    (((struct o1C_float *)(t117))->v) = 1.0f;
                    t116 = 0x18;
                    *(float *)((t117 + 0x18)) = 1.0f;
                }
            }
            if (((*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x4))) & 32) != 0) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                (((struct oB0_float *)(a4))->v) = 1.0f;
                (((struct o1A_uchar *)(a4))->v) = (int)(float)(t27 - t26);
            }
            if ((0x200 & (*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x4)))) != 0) {
                (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x0;
                t138 = (((struct oF4_int *)(a4))->v);
                (((struct o70_float *)(t138))->v) = (((((struct o70_float *)(t138))->v)) - 20.0f);
            }
        }
        R1000 = ((((struct oC4_int *)(a4))->v));
        nlAddVector3op((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
        nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        math_vec3i_add((a4 + 0x34), (a4 + 0x34), ((R1000) + 0x78));
        if (((*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x4))) & 4) != 0) {
            if ((((((struct o1E_short *)(a4))->v)) & 0x2) != 0) {
                u174 = (((((struct o2C_float *)(a4))->v)) + 5.0f);
            } else {
                u174 = (((((struct o2C_float *)(a4))->v)) - 5.0f);
            }
            (((struct o2C_float *)(a4))->v) = u174;
        } else {
            if ((((((struct o1E_short *)(a4))->v)) & 64) != 0) {
                u179 = (((((struct o2C_float *)(a4))->v)) + 0.100000001f);
            } else {
                u179 = (((((struct o2C_float *)(a4))->v)) - 0.100000001f);
            }
            (((struct o2C_float *)(a4))->v) = u179;
        }
        if (((*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x4))) & 8) != 0) {
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.00555555569f);
            if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                (((struct o40_float *)(a4))->v) = 0.0f;
            }
            u190 = (((struct o40_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = u190;
            (((struct o44_float *)(a4))->v) = u190;
        }
        if (((*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x4))) & 16) != 0) {
            t200 = (((struct oDC_int *)(a4))->v);
            t201 = (((struct o1C_short *)(a4))->v);
            t204 = *(int *)((((((((short)t201 - 1) << 2) << 2) << 1) + t2) + 0x0));
            t205 = *(int *)(((((((short)t201 << 2) << 2) << 1) + t2) + 0x0));
            u206 = (((struct o18_float *)(t200))->v);
            qe2 = (u206 - (1.0f / (float)(t205 - t204)));
            (((struct o18_float *)(t200))->v) = qe2;
            if (0.0f > qe2) {
                (((struct o18_float *)(t200))->v) = 0.0f;
            }
            u208 = (((struct o18_float *)(t200))->v);
            (((struct o20_float *)(t200))->v) = u208;
            (((struct o1C_float *)(t200))->v) = u208;
        }
        if (((*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x4))) & 128) != 0) {
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.00833333377f);
            if (((((struct oB0_float *)(a4))->v)) > 1.0f) {
                (((struct oB0_float *)(a4))->v) = 1.0f;
            }
        }
        if (((*(int *)((((((((((struct o1C_short *)(a4))->v)) << 2) << 2) << 1) + t2) + 0x4))) & 32) != 0) {
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - (1.0f / (float)(*(signed char *)(((0x1A + a4) + 0x0)))));
        }
        R1004 = (0xC4 + a4);
        t240 = *(int *)(((0xC4 + a4) + 0xC));
        R1000 = t240;
        t241 = (((struct o1E_short *)(a4))->v);
        mdl_vtx_iter_begin((*(int *)(((*(int *)(((R1004) + 0x10))) + 0x8))), ((((struct o8_int *)(t240))->v)));
        t247 = (((t241 << 8) << 2) << 2);
        for (;;) {
            t248 = mdl_vtx_iter_next();
            if (t248 != 0) {
                break;
            }
            mdl_vtx_get_pos((((int)stk + 0) + 0x8));
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((((math_cos_angle16(t247)) * (*(float *)(((int)stk + 16)))) / 14.0f)));
            mdl_vtx_set_pos((((int)stk + 0) + 0x8));
            t247 = (t247 + 0xE38);
        }
        t255 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t255))->v) = (((((struct o80_int *)(t255))->v)) + 0x222);
        t257 = (((struct oF0_int *)(a4))->v);
        (((struct o7C_uint *)(t257))->v) = (((((struct o7C_int *)(t257))->v)) + 0x2D8);
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        t260 = (((struct o22_short *)(a4))->v);
        t268 = t260;
        t270 = 0x222;
        if ((int)t260 > (int)0x2) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
            t261 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t261 + 0x1);
            if ((int)((((struct o20_short *)(a4))->v)) > (int)0xA) {
                (((struct o20_ushort *)(a4))->v) = 0x7;
            }
            t268 = 0x20;
            t270 = (t261 + 0x1);
        }
        t269 = 0x2D8;
        t271 = 0x7;
        t273 = t272;
        for (;;) {
            if ((int)t271 > (int)0xA) {
                break;
            }
            t268 = 0x20;
            t269 = (*(short *)((a4 + 0x20)));
            t273 = (t271 << 2);
            if (t271 == t269) {
                t269 = (0xC4 + a4);
                t273 = (t273 + t269);
                t270 = (*(int *)(t273));
                *(unsigned char *)(t270) = 0x1;
            } else {
                t270 = (0xC4 + a4);
                t273 = (t273 + t270);
                t269 = (*(int *)(t273));
                *(unsigned char *)(t269) = 0x0;
            }
            t271 = (t271 + 0x1);
        }
        t286 = (((struct o1C_short *)(a4))->v);
        t387 = (((t286 << 2) << 2) << 1);
        if (((*(int *)(((t2 + (((t286 << 2) << 2) << 1)) + 0x4))) & 0x100) == 0) {
        } else {
            t290 = *(signed char *)(a4 + 0x18);
            switch (t290) {
            case 0:
                (((struct o19_uchar *)(a4))->v) = 0x64;
                (((struct o18_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x18)) + 0x1);
                t369 = *(signed char *)(a4 + 0x19);
                (((struct o19_uchar *)(a4))->v) = (t369 - 1);
                t387 = 0x19;
                if ((int)(signed char)(t369 - 1) <= 0) {
                    (((struct o19_uchar *)(a4))->v) = 0x14;
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x18)) + 0x1);
                    t387 = 0x18;
                }
                break;
            case 1:
                t357 = *(signed char *)(a4 + 0x19);
                (((struct o19_uchar *)(a4))->v) = (t357 - 1);
                t387 = 0x19;
                if ((int)(signed char)(t357 - 1) <= 0) {
                    (((struct o19_uchar *)(a4))->v) = 0x14;
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x18)) + 0x1);
                    t387 = 0x18;
                }
                break;
            case 2:
                t344 = (((struct oCC_int *)(a4))->v);
                (((struct o7C_uint *)(t344))->v) = (((((struct o7C_int *)(t344))->v)) + 0x199);
                t346 = *(signed char *)(a4 + 0x19);
                (((struct o19_uchar *)(a4))->v) = (t346 - 1);
                t387 = 0x19;
                if ((int)(signed char)(t346 - 1) <= 0) {
                    (((struct o19_uchar *)(a4))->v) = 0xA;
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x18)) + 0x1);
                    t387 = 0x18;
                }
                break;
            case 3:
                t332 = *(signed char *)(a4 + 0x19);
                (((struct o19_uchar *)(a4))->v) = (t332 - 1);
                t387 = 0x19;
                if ((int)(signed char)(t332 - 1) <= 0) {
                    (((struct o19_uchar *)(a4))->v) = 0x1E;
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x18)) + 0x1);
                    t387 = 0x18;
                }
                break;
            case 4:
                t317 = (((struct oCC_int *)(a4))->v);
                (((struct o7C_uint *)(t317))->v) = (((((struct o7C_int *)(t317))->v)) - 0x111);
                t319 = (((struct oF4_int *)(a4))->v);
                (((struct o70_float *)(t319))->v) = (((((struct o70_float *)(t319))->v)) + 0.666700006f);
                t321 = *(signed char *)(a4 + 0x19);
                (((struct o19_uchar *)(a4))->v) = (t321 - 1);
                t387 = 0x19;
                if ((int)(signed char)(t321 - 1) <= 0) {
                    (((struct o19_uchar *)(a4))->v) = 0xF;
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x18)) + 0x1);
                    t387 = 0x18;
                }
                break;
            case 5:
                t303 = (((struct oF4_int *)(a4))->v);
                (((struct o70_float *)(t303))->v) = (((((struct o70_float *)(t303))->v)) + 0.666700006f);
                t305 = *(signed char *)(a4 + 0x19);
                (((struct o19_uchar *)(a4))->v) = (t305 - 1);
                t387 = 0x19;
                if ((int)(signed char)(t305 - 1) <= 0) {
                    (((struct o19_uchar *)(a4))->v) = 0x5;
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x18)) + 0x1);
                    t387 = 0x18;
                }
                break;
            default:
                t387 = t290;
                if (t290 != 6) {
                } else {
                    t291 = (((struct oF4_int *)(a4))->v);
                    (((struct o70_float *)(t291))->v) = (((((struct o70_float *)(t291))->v)) - (1.0f + 1.0f));
                    t293 = *(signed char *)(a4 + 0x19);
                    (((struct o19_uchar *)(a4))->v) = (t293 - 1);
                    t387 = 0x19;
                    if ((int)(signed char)(t293 - 1) <= 0) {
                        (((struct o18_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x18)) + 0x1);
                        t387 = 0x18;
                    }
                }
                break;
            }
        }
    }
    return t387;
}

/* manual: dispatch on the object type a4[6]; the default type sets its viewer fields, type 28 moves them with the two pads (steps 10 and 100); 296 cases, 380 of 422 instructions (the other 42 are the three functions it calls by bsr) */
int FUN_0c05283e(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t, o, i, k;
    float s;
    unsigned short *pad;

    switch (*(signed char *)(a4 + 0x6)) {
    case 2:
        return FUN_0c05490a(a4, a5, a6, a7);
    case 3:
        return FUN_0c0547ee(a4, a5, a6);
    case 8:
        return FUN_0c053f34(a4);
    case 11:
        return FUN_0c054058(a4, a5, a6, a7, f4, f5);
    case 36:
        return FUN_0c0546f4(a4);
    case 29:
        return FUN_0c0537ac(a4, a5, a6, a7);
    case 31:
        return FUN_0c0537d4(a4);
    case 32:
        return FUN_0c053eb2(a4, a5, a6, a7);
    case 37:
        return FUN_0c053a94(a4);
    case 34:
        return FUN_0c053efe(a4, a5, a6);
    case 35:
        return FUN_0c053f16(a4, a5, a6, a7);
    case 17:
        t = *(signed char *)(a4 + 0xA);
        if (t == 0)
            FUN_0c052ba8(a4);
        else if (t != 1)
            return t;
        return ((int (*)(int, int, int, int))(FUN_0c056b68))(a4, a5, a6, a7);
    case 28:
        t = *(signed char *)(a4 + 0xA);
        if (t == 0)
            FUN_0c052962(a4);
        else if (t != 1)
            return t;
        o = *(int *)(a4 + 0x2C8);
        for (i = 0; i < 2; i++) {
            pad = (unsigned short *)(0xC542864 + i * 0x50);
            if (i == 0) {
                if (*pad & 0x200) {
                    k = *pad;
                    if (k & 0x800) *(int *)(o + 0x20) += 0x100;
                    else if (k & 0x400) *(int *)(o + 0x20) -= 0x100;
                    k = *pad;
                    if (k & 0x2000) *(int *)(o + 0x1C) += 0x100;
                    else if (k & 0x1000) *(int *)(o + 0x1C) -= 0x100;
                }
                s = 10.0f;
            } else
                s = 100.0f;
            if (*pad & 0x100) {
                k = *pad;
                if (k & 0x2000) *(float *)(o + 0x18) += s;
                else if (k & 0x1000) *(float *)(o + 0x18) -= s;
            }
            if (*pad & 0x80) {
                k = *pad;
                if (k & 0x2000) *(float *)(o + 0x38) += s;
                else if (k & 0x1000) *(float *)(o + 0x38) -= s;
            }
            if (*pad & 0x40) {
                k = *pad;
                if (k & 0x800) *(float *)(o + 0x34) -= s;
                else if (k & 0x400) *(float *)(o + 0x34) += s;
                k = *pad;
                if (k & 0x2000) *(float *)(o + 0x3C) -= s;
                else if (k & 0x1000) *(float *)(o + 0x3C) += s;
            }
        }
        return ((int (*)(int, int, int, int))(FUN_0c056b68))(a4, o, 0xC542854, 0x1000);
    default:
        t = *(signed char *)(a4 + 0xA);
        if (t == 0)
            FUN_0c0528c6(a4);
        else if (t != 1)
            return t;
        (*(char *)(a4 + 0xA))++;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0xC8) = *(struct mv3 *)0xC1B8E88; *(struct mv3 *)(a4 + 0xF8) = *(struct mv3 *)0xC1B8E94; }
        *(int *)(a4 + 0x180) = 0;
        *(int *)(a4 + 0x240) = 0xC2414B4;
        *(int *)(a4 + 0x244) = 0xC2414C0;
        return FUN_0c052364(*(signed char *)a4, -1);
    }
}

int FUN_0c0dd80e(int a4, int a5, int a6, int a7, float f4)
{
    int v0_0;

    int v0_2;
    int v0_1;
    int v0_3;
    int v0_4;
    int v0_5;
    int v0_7;
    float w0_0;
    float w0_1;
    float F2;
    float F3;
    int T_;
    int R3;
    int R2;
    int R1;
    int FPUL_;
    int s4;
    int v0_6;
    int v0_8;
    int R1004;
    R1004 = s4;
    v0_7 = a4;
    v0_4 = a5;
    v0_1 = a6;
    v0_2 = a7;
    w0_0 = f4;
    v0_0 = (v0_7);
    if (((*(signed char *)0xC54223C) == 0)) goto L_C0DD878;
    return FUN_0c03f346(v0_0, v0_4, v0_1, v0_2);
    L_C0DD878:;
    v0_7 = *(signed char *)(v0_0 + 0x14);
    v0_2 = (v0_7);
    v0_3 = (0x1);
    v0_6 = (0xFFFFFFFF);
    v0_5 = (0x0);
    if ((v0_7 == 0)) goto L_C0DD88E;
    if ((v0_2 == 1)) goto L_C0DD914;
    L_C0DDDCC:;
    return v0_2;
    L_C0DD914:;
    v0_8 = *(signed char *)(v0_0 + 0x15);
    v0_2 = (v0_8);
    v0_7 = (0xC059CFC);
    v0_7 = (0x3C);
    if ((v0_8 == 0)) goto L_C0DD948;
    if ((v0_2 == 1)) goto L_C0DD9C0;
    if ((v0_2 != 2)) goto L_C0DD92C;
    v0_3 = *(signed char *)(v0_0 + 0x16);
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0DDC68;
    if ((v0_2 == 1)) goto L_C0DDC80;
    goto L_C0DDDCC;
    L_C0DDC80:;
    w0_0 = math_sin_angle16((((((struct o1C_short *)(v0_0))->v)) << 13));
    v0_3 = (((struct o1C_short *)(v0_0))->v);
    w0_1 = ((((struct o60_float *)(v0_0))->v));
    w0_1 = w0_1 + (((float)v0_3 / 5.0f)) * w0_0;
    (((struct o30_float *)(v0_0))->v) = w0_1;
    (((struct o1C_ushort *)(v0_0))->v) = (((((struct o1C_short *)(v0_0))->v)) - 1);
    v0_4 = (((struct o1C_short *)(v0_0))->v);
    v0_2 = (v0_4);
    w0_1 = (((float)v0_3 / 5.0f));
    w0_0 = (w0_0);
    FPUL_ = (v0_3);
    if (((int)v0_4 <= 0)) goto L_C0DDCB8;
    goto L_C0DDDCC;
    L_C0DDCB8:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x1, v0_1);
    (((struct o30_float *)(v0_0))->v) = ((((struct o60_float *)(v0_0))->v));
    v0_2 = (0x30);
    goto L_C0DDDCC;
    L_C0DDC68:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x16)) + 0x1);
    (((struct o1C_ushort *)(v0_0))->v) = 0xA;
    (((struct o60_float *)(v0_0))->v) = ((((struct o30_float *)(v0_0))->v));
    v0_2 = ((int (*)(int, int, int))(FUN_0c0dd7d2))(v0_0, v0_4, v0_1);
    goto L_C0DDC80;
    L_C0DD92C:;
    if ((v0_2 != 3)) goto L_C0DD934;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    *(unsigned short *)(((0x12A + v0_0) + 0x4)) = v0_5;
    *(unsigned short *)(((0x12A + v0_0) + 0x2)) = v0_5;
    (((struct o12A_ushort *)(v0_0))->v) = v0_5;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x4, v0_1);
    thunk_FUN_0c05abb2(0x41, (v0_0 + 0x28));
    FUN_0c0e2700((v0_0 + 0x28), 0x1, 0x0, 0x0);
    return FUN_0c0cf440((v0_0 + 0x28), 0x0, 0x0);
    L_C0DD934:;
    if ((v0_2 != 4)) goto L_C0DD93C;
    v0_3 = *(signed char *)(v0_0 + 0x16);
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0DDD26;
    if ((v0_2 == 1)) goto L_C0DDD32;
    goto L_C0DDDCC;
    L_C0DDD32:;
    (((struct o1C_ushort *)(v0_0))->v) = (((((struct o1C_short *)(v0_0))->v)) - 1);
    v0_3 = (((struct o1C_short *)(v0_0))->v);
    v0_2 = (v0_3);
    if (((int)v0_3 > 0)) goto L_C0DDDCC;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x5, v0_1);
    v0_1 = *(signed char *)(v0_0 + 0x2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0 + 0x28) = *(struct mv3 *)((0xC1CA0C4 + (((v0_1 << 1) + v0_1) << 2))); }
    goto L_C0DDDCC;
    L_C0DDD26:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x16)) + 0x1);
    (((struct o1C_ushort *)(v0_0))->v) = 0xB4;
    goto L_C0DDD32;
    L_C0DD93C:;
    if ((v0_2 != 5)) goto L_C0DD944;
    v0_4 = *(signed char *)(v0_0 + 0x16);
    v0_2 = (v0_4);
    if ((v0_4 == 0)) goto L_C0DDD70;
    if ((v0_2 == 1)) goto L_C0DDD7E;
    goto L_C0DDDCC;
    L_C0DDD7E:;
    (((struct o1C_ushort *)(v0_0))->v) = (((((struct o1C_short *)(v0_0))->v)) - 1);
    if (((((((struct o1C_short *)(v0_0))->v)) & 4) == 0)) goto L_C0DDDB0;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    L_C0DDDB4:;
    v0_4 = (((struct o1C_short *)(v0_0))->v);
    v0_2 = (v0_4);
    if (((int)v0_4 > 0)) goto L_C0DDDCC;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x0, v0_1);
    (((struct o126_uchar *)(v0_0))->v) = v0_3;
    (((struct o12E_ushort *)(v0_0))->v) = v0_6;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    v0_2 = (0xA8);
    goto L_C0DDDCC;
    L_C0DDDB0:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    goto L_C0DDDB4;
    L_C0DDD70:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x16)) + 0x1);
    (((struct o1C_ushort *)(v0_0))->v) = v0_7;
    goto L_C0DDD7E;
    L_C0DD944:;
    goto L_C0DDDCC;
    L_C0DD9C0:;
    v0_2 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_2 + 0x1);
    if (((int)(short)(v0_2 + 0x1) < (int)v0_7)) goto L_C0DD9DE;
    (((struct o136_uchar *)(v0_0))->v) = v0_5;
    (((struct o20_ushort *)(v0_0))->v) = v0_5;
    thunk_FUN_0c05abb2(0x40, (v0_0 + 0x28));
    L_C0DD9DE:;
    v0_7 = *(signed char *)(v0_0 + 0x16);
    v0_2 = (v0_7);
    v0_3 = (0xC1CA120);
    v0_8 = (0xC064F80);
    v0_8 = (0xC0583BC);
    w0_1 = (0.0f);
    w0_0 = (5.5f);
    if ((v0_7 == 0)) goto L_C0DDA0A;
    if ((v0_2 == 1)) goto L_C0DDAB8;
    if ((v0_2 != 2)) goto L_C0DD9FE;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) - w0_0);
    v0_2 = (FUN_0c064f80(v0_0)) == 0;
    if (v0_2) goto L_C0DDB2E;
    FUN_0c0dd746(v0_0, v0_4, v0_1);
    L_C0DDB80:;
    thunk_FUN_0c05abb2(0x54, (v0_0 + 0x28));
    v0_0 = v0_5;
    v0_2 = ((FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, v0_0)));
    goto L_C0DDDCC;
    L_C0DDB2E:;
    nlAddVector3op((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    v0_1 = *(signed char *)(v0_0 + 0x17);
    v0_0 = (((struct oC4_int *)(v0_0))->v);
    R1004 = v0_0;
    v0_2 = ((math_vec3i_add(((R1004) + 0x78), (v0_0 + 0x78), ((((v0_1 << 1) + v0_1) << 2) + v0_3))));
    goto L_C0DDDCC;
    L_C0DD9FE:;
    if ((v0_2 != 3)) goto L_C0DDA06;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) - w0_0);
    v0_2 = (FUN_0c064f80(v0_0)) == 0;
    if (v0_2) goto L_C0DDBAE;
    v0_2 = (0x50);
    if ((!(-27.5f > ((((struct o50_float *)(v0_0))->v))))) goto L_C0DDBAC;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x2, v0_1);
    goto L_C0DDB80;
    L_C0DDBAC:;
    *(float *)((v0_0 + v0_2)) = w0_1;
    L_C0DDBAE:;
    nlAddVector3op((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    v0_2 = *(signed char *)(v0_0 + 0x17);
    v0_5 = (((struct oC4_int *)(v0_0))->v);
    R1004 = v0_5;
    math_vec3i_add(((R1004) + 0x78), (v0_5 + 0x78), ((((v0_2 << 1) + v0_2) << 2) + v0_3));
    FUN_0c0dd78a(v0_0);
    v0_3 = *(signed char *)(v0_0 + 0x17);
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0DDBF6;
    if ((v0_2 == 1)) goto L_C0DDC04;
    if ((v0_2 == 2)) goto L_C0DDC16;
    if ((v0_2 == 3)) goto L_C0DDC28;
    goto L_C0DDDCC;
    L_C0DDC28:;
    v0_2 = (0x180);
    if ((((((struct o180_float *)(v0_0))->v)) > 0.0f)) goto L_C0DDC36;
    goto L_C0DDDCC;
    L_C0DDC36:;
    return FUN_0c0dd746(v0_0, v0_4, v0_1);
    L_C0DDC16:;
    v0_2 = (0x180);
    if ((0.0f > ((((struct o180_float *)(v0_0))->v)))) goto L_C0DDC24;
    goto L_C0DDDCC;
    L_C0DDC24:;
    goto L_C0DDC36;
    L_C0DDC04:;
    v0_2 = (0x178);
    if ((((((struct o178_float *)(v0_0))->v)) > 0.0f)) goto L_C0DDC12;
    goto L_C0DDDCC;
    L_C0DDC12:;
    goto L_C0DDC36;
    L_C0DDBF6:;
    v0_2 = (0x178);
    if ((0.0f > ((((struct o178_float *)(v0_0))->v)))) goto L_C0DDC36;
    goto L_C0DDDCC;
    L_C0DDA06:;
    goto L_C0DDDCC;
    L_C0DDAB8:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) - w0_0);
    v0_2 = (FUN_0c064f80(v0_0)) == 0;
    v0_1 = (v0_0);
    if (v0_2) goto L_C0DDACE;
    (((struct o50_float *)(v0_0))->v) = w0_1;
    L_C0DDACE:;
    nlAddVector3op((v0_0 + 0x28), (v0_0 + 0x28), (v0_1 + 0x4C));
    v0_1 = *(signed char *)(v0_0 + 0x17);
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    R1004 = v0_2;
    v0_4 = (v0_2 + 0x78);
    v0_1 = ((((v0_1 << 1) + v0_1) << 2));
    math_vec3i_add(((R1004) + 0x78), v0_4, (v0_1 + v0_3));
    FUN_0c0dd78a(v0_0);
    v0_1 = (((struct o1C_short *)(v0_0))->v);
    (((struct o1C_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C0DDB0C;
    goto L_C0DDDCC;
    L_C0DDB0C:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x16)) + 0x1);
    v0_2 = (0x16);
    goto L_C0DDDCC;
    L_C0DDA0A:;
    (((struct o126_uchar *)(v0_0))->v) = v0_5;
    (((struct o12E_ushort *)(v0_0))->v) = 0xF0;
    (((struct o12A_ushort *)(v0_0))->v) = v0_6;
    (((struct o136_uchar *)(v0_0))->v) = v0_5;
    (((struct o20_ushort *)(v0_0))->v) = v0_5;
    if (((*(signed char *)(v0_0 + 0x18)) == 0)) goto L_C0DDA52;
    v0_1 = nlRand();
    v0_2 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C0DDA36;
    v0_2 = ((v0_2 & 0x1));
    L_C0DDA40:;
    (((struct o17_uchar *)(v0_0))->v) = (*(signed char *)((0xC1CA0E8 + v0_2)));
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x16)) + 0x1);
    L_C0DDA62:;
    (((struct o1C_ushort *)(v0_0))->v) = 0x1E;
    v0_1 = *(signed char *)(v0_0 + 0x17);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0 + 0x4C) = *(struct mv3 *)(((((v0_1 << 1) + v0_1) << 2) + 0xC1CA0F0)); }
    goto L_C0DDDCC;
    L_C0DDA36:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x1)) + 0x1));
    goto L_C0DDA40;
    L_C0DDA52:;
    (((struct o17_uchar *)(v0_0))->v) = (*(signed char *)((0xC1CA0EA + (*(signed char *)(v0_0 + 0x2)))));
    (((struct o16_uchar *)(v0_0))->v) = 0x3;
    goto L_C0DDA62;
    L_C0DD948:;
    v0_2 = (0x1B);
    if (((int)(*(signed char *)(v0_0 + 0x1B)) < 0)) goto L_C0DD99C;
    v0_4 = *(signed char *)((0x15 + (*(int *)((0xC540D94 + ((*(signed char *)((v0_0 + v0_2))) << 2))))));
    v0_2 = (v0_4);
    if ((v0_4 == 2)) goto L_C0DD964;
    goto L_C0DDDCC;
    L_C0DD964:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x1, v0_1);
    (((struct o17_uchar *)(v0_0))->v) = v0_6;
    (((struct o18_uchar *)(v0_0))->v) = v0_3;
    v0_2 = (0x18);
    goto L_C0DDDCC;
    L_C0DD99C:;
    v0_3 = FUN_0c06593a(v0_0, (*(int *)0xC540DC4));
    v0_2 = (v0_3);
    if ((v0_3 != 0)) goto L_C0DD9AE;
    goto L_C0DDDCC;
    L_C0DD9AE:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x1, v0_1);
    (((struct o17_uchar *)(v0_0))->v) = 0x2;
    (((struct o18_uchar *)(v0_0))->v) = v0_5;
    v0_2 = (0x18);
    goto L_C0DDDCC;
    L_C0DD88E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x14)) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_5;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    (((struct o128_ushort *)(v0_0))->v) = 0x40;
    v0_2 = *(signed char *)(v0_0 + 0x2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0 + 0x28) = *(struct mv3 *)((0xC1CA0C4 + (((v0_2 << 1) + v0_2) << 2))); }
    FUN_0c07e420(v0_0, 0x5);
    (((struct o12E_ushort *)(v0_0))->v) = v0_6;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o70_float *)(v0_2))->v) = (((((struct o70_float *)(v0_2))->v)) - 10.0f);
    (((struct oAA_uchar *)(v0_0))->v) = v0_3;
    (((struct oAB_uchar *)(v0_0))->v) = 0x4;
    FUN_0c0d04c4((0xAC + v0_0), (v0_0 + 0x34));
    v0_7 = (v0_3);
    v0_8 = (0xC0D04C4);
    L_C0DD90C:;
    if (((int)v0_7 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0DD8F4;
    goto L_C0DD914;
    L_C0DD8F4:;
    v0_2 = *(int *)((((v0_7 << 2) + (0xC4 + v0_0)) + 0x0));
    FUN_0c0d04c4((v0_2 + 0x6), (v0_2 + 0x78));
    v0_7 = (v0_7 + 0x1);
    goto L_C0DD90C;
}

