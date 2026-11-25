/* Straight-line functions with calls and guards (batch gen_eo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o375C_uchar { char p[0x375C]; unsigned char v; };
struct o375D_uchar { char p[0x375D]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3760_uint { char p[0x3760]; unsigned int v; };
struct o3764_uint { char p[0x3764]; unsigned int v; };
struct o377C_int { char p[0x377C]; int v; };
struct o377C_uint { char p[0x377C]; unsigned int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o3784_float { char p[0x3784]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o383A_short { char p[0x383A]; short v; };
struct o383C_short { char p[0x383C]; short v; };
struct o3840_short { char p[0x3840]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o622_uchar { char p[0x622]; unsigned char v; };
struct o62A_ushort { char p[0x62A]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6EC_ushort { char p[0x6EC]; unsigned short v; };
struct o6EE_ushort { char p[0x6EE]; unsigned short v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o774_int { char p[0x774]; int v; };
struct o774_uint { char p[0x774]; unsigned int v; };
struct o778_int { char p[0x778]; int v; };
struct o778_uint { char p[0x778]; unsigned int v; };
struct o77C_uint { char p[0x77C]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o780_uint { char p[0x780]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c042ff8(void);
int FUN_0c043064(void);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c05aaf6(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c067438(int);
int FUN_0c073eb8(int, int, int);
int FUN_0c07c1ca(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e420(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c0b2478(int, int, int, float);
int FUN_0c0b4df6(int, int, int, int, float);
int FUN_0c0b507a(int, int, int);
int FUN_0c0b5b8e(int, int);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3ae8(int, int);
int FUN_0c0c4770(int, int, int);
int FUN_0c0c47a4(int, int, int);
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c52c4(int, int, int);
int FUN_0c0c8c08(int, int, int, int);
int FUN_0c0c8c36(int, int, int, int);
int FUN_0c0cbfe8(int);
int FUN_0c0d0258(int);
int FUN_0c0d0378(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d06cc(void);
int FUN_0c0d14d4(void);
int FUN_0c0d6d7a(void);
int FUN_0c0d7818(int);
int FUN_0c0d7898(int, int, int);
int FUN_0c0d7c04(int);
int FUN_0c0d7c84(int);
int FUN_0c0da95c(int);
int FUN_0c0da9dc(int, int, int);
int FUN_0c0dad48(int, int, int, int);
int FUN_0c0dbc28(int, int);
int FUN_0c0dd0c0(void);
int FUN_0c0e33ae(void);
int FUN_0c0e34e0(int);
int FUN_0c0e360c(int);
int FUN_0c0e369a(int);
int FUN_0c0e36a8(int);
int FUN_0c0e36b6(int);
int FUN_0c0e37e6(int);
int FUN_0c0e3940(int);
int FUN_0c0e3992(int);
int FUN_0c0e39de(int);
int FUN_0c0e5874(int);
int FUN_0c0e6aa2(int);
int FUN_0c0e99c8(void);
int FUN_0c0f1548(void);
int FUN_0c0f25c2(void);
int FUN_0c0f4f28(int);
int FUN_0c0f5984(void);
int FUN_0c0f6078(void);
int FUN_0c0f6348(void);
int FUN_0c14ada0(int, int, int, int, int);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c1603c2(int);
int FUN_0c17b1a0(int);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlCalcPoint(int, int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c083a40(int a4, int a5, int a6, int a7);
int FUN_0c120018(int a4, int a5, int a6, int a7, int a8, int a9);
void FUN_0c120906(int a4, int a5, int a6, int a7, int a8);
void FUN_0c136ab4(int a4, int a5, int a6, int a7);
void FUN_0c07e44c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0cf944(int a4);
int FUN_0c0e3a30(int a4);
int FUN_0c0f4fb8(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0c4d6e(int a4, int a5, float f4, float f5, float f6, float f7);
int FUN_0c0b5c58(int a4, int a5, int a6);
int FUN_0c0d7950(int a4, int a5, int a6, int a7);
int FUN_0c0da6a0(int a4, int a5, int a6, int a7);
int FUN_0c0daa94(int a4, int a5, int a6, int a7);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_ushort { char p[0x6]; unsigned short v; };



int FUN_0c120018(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t9;
    int stk[5];
    int t17;
    int qa0;
    int t34;
    int t40;
    int t46;
    int t58;
    float u25;
    float u37;
    int t6;
    int t64;
    int t8;
    int t30;
    int t4;
    int t1;
    int t0;
    int t52;
    int t88;
    int t71;

    qa0 = 0xC4B410C;
    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    t0 = *(signed char *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 0)) = t0;
    t1 = 0x2;
    if ((0x80 & t0) != 0) {
        t1 = 0x5;
    }
    t4 = 0x0;
    if (((*(int *)(((int)stk + 0))) & 2) != 0) {
        t4 = 0x1;
    }
    t8 = ((0x0 + t1) + t4);
    if (((0x80 & t0) == 0) && (t6 = *(int *)(((int)stk + 0)), (t6 & 1) == 0)) {
        t8 = (((0x0 + t1) + t4) + 0x1);
    }
    t9 = FUN_0c03f444(0x8, 0x0, t8, a7);
    t88 = t9;
    if (t9 == 0) {
    } else {
        (((struct o1_uchar *)(t9))->v) = 0xFFFFFFFF;
        (((struct o2_uchar *)(t9))->v) = (*(signed char *)(((int)stk + 12)));
        (((struct oAC_ushort *)(t9))->v) = 0x1F;
        (((struct oA9_uchar *)(t9))->v) = 0x21;
        (((struct o4_uint *)(t9))->v) = 0xC11FF8A;
        (((struct o1B_uchar *)(t9))->v) = ((signed char)(a9 >> 0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t9 + 0x28) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
        (((struct o28_float *)(t9))->v) = (((((struct o28_float *)(t9))->v)) / 128.0f);
        (((struct o2C_float *)(t9))->v) = (((((struct o2C_float *)(t9))->v)) / 128.0f);
        (((struct o30_float *)(t9))->v) = -5.05000019f;
        (((struct o40_float *)(t9))->v) = ((*(float *)(a8)) * 0.0078125f);
        (((struct o44_float *)(t9))->v) = (((((struct o4_float *)(a8))->v)) * 0.0078125f);
        (((struct o48_float *)(t9))->v) = (((((struct o8_float *)(a8))->v)) * 0.00156250002f);
        t17 = *(int *)(((0x0 + (0xC4 + t9)) + 0x0));
        *(unsigned char *)(t17) = 0x1;
        if ((int)(*(int *)(((int)stk + 4))) < (int)0x81) {
            FUN_0c037498(t17, 0x0, ((*(int *)(((int)stk + 4))) + 0x1F), (*(int *)qa0));
            (((struct o6_ushort *)(t17))->v) = 0xF;
        } else {
            FUN_0c037498(t17, ((*(int *)(((int)stk + 4))) - 129), 0x51, (*(int *)0xC4B40CC));
            (((struct o6_ushort *)(t17))->v) = 0x1F;
            u25 = (((struct o0_float *)0xC1202D0)->v);
            (((struct o8C_float *)(t17))->v) = u25;
            (((struct o88_float *)(t17))->v) = u25;
            (((struct o84_float *)(t17))->v) = u25;
        }
        t30 = *(int *)(((0x4 + (0xC4 + t9)) + 0x0));
        FUN_0c037498(t30, 0x0, 0x1F, (*(int *)qa0));
        *(unsigned char *)(t30) = 0x1;
        (((struct o6_ushort *)(t30))->v) = 0xF;
        t52 = 0x2;
        if (((*(int *)(((int)stk + 0))) & 128) != 0) {
            t34 = *(int *)(((0x8 + (0xC4 + t9)) + 0x0));
            FUN_0c037498(t34, 0x0, 0x1A, (*(int *)qa0));
            *(unsigned char *)(t34) = 0x1;
            (((struct o6_ushort *)(t34))->v) = 0xF;
            (((struct o6C_float *)(t34))->v) = ((((struct o4_float *)0xC1202D0)->v));
            u37 = (((struct o8_float *)0xC1202D0)->v);
            (((struct o70_float *)(t34))->v) = u37;
            t40 = *(int *)(((0xC + (0xC4 + t9)) + 0x0));
            FUN_0c037498(t40, ((int)((int)(*(int *)(((int)stk + 8))) / (int)0xA)), 0x10, (*(int *)qa0));
            *(unsigned char *)(t40) = 0x1;
            (((struct o6_ushort *)(t40))->v) = 0xF;
            (((struct o6C_float *)(t40))->v) = ((((struct o10_float *)0xC1202D0)->v));
            (((struct o70_float *)(t40))->v) = u37;
            t46 = *(int *)(((0x10 + (0xC4 + t9)) + 0x0));
            FUN_0c037498(t46, ((int)((int)(*(int *)(((int)stk + 8))) % (int)0xA)), 0x10, (*(int *)qa0));
            *(unsigned char *)(t46) = 0x1;
            (((struct o6_ushort *)(t46))->v) = 0xF;
            (((struct o6C_float *)(t46))->v) = ((((struct o18_float *)0xC1202D0)->v));
            (((struct o70_float *)(t46))->v) = u37;
            t52 = 0x5;
        }
        t64 = t52;
        if (((*(int *)(((int)stk + 0))) & 2) != 0) {
            t58 = *(int *)((((t52 << 2) + (0xC4 + t9)) + 0x0));
            FUN_0c037498(t58, 0x0, 0x9C, (*(int *)qa0));
            *(unsigned char *)(t58) = 0x1;
            (((struct o6_ushort *)(t58))->v) = 0xF;
            (((struct o6C_float *)(t58))->v) = ((((struct o1C_float *)0xC1202D0)->v));
            (((struct o70_float *)(t58))->v) = ((((struct o20_float *)0xC1202D0)->v));
            t64 = (t52 + 0x1);
        }
        t88 = (*(int *)(((int)stk + 0)));
        if (((*(int *)(((int)stk + 0))) & 128) == 0) {
            t88 = (*(int *)(((int)stk + 0)));
            if (((*(int *)(((int)stk + 0))) & 1) == 0) {
                t71 = *(int *)((((t64 << 2) + (0xC4 + t9)) + 0x0));
                FUN_0c037498(t71, 0x0, 0x9B, (*(int *)qa0));
                *(unsigned char *)(t71) = 0x1;
                (((struct o6_ushort *)(t71))->v) = 0xF;
                (((struct o74_float *)(t71))->v) = (((((struct o74_float *)(t71))->v)) + 9.99999975e-06f);
                t88 = 0x74;
            }
        }
    }
    return t88;
}


void FUN_0c136ab4(int a4, int a5, int a6, int a7)
{
    int stk[9];
    float u72;
    float u71;
    int t8;
    int t30;
    int t59;
    float u75;
    float u77;
    int t84;
    int t13;
    int t34;
    int t36;
    int t32;
    int t126;
    int t58;
    int t57;
    int t45;
    int t42;
    float u80;
    float u78;

    if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938)))) != 26) {
        FUN_0c03f346(a4, a5, a6, a7);
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)((((((struct oC8_int *)(((((struct o10_int *)(a4))->v))))->v)) + 0x6C)); }
        switch ((*(signed char *)(a4 + 0x14))) {
        case 0:
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            FUN_0c07e2f4(a4, 0x31);
            t126 = *(signed char *)(a4 + 0x1);
            FUN_0c064d24(a4, 0x1, 0x3A, 0x0, 0x100, (~((int)0x1 << (int)t126)), 0x0, 0xF0);
            break;
        case 1:
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0xF, (*(int *)((((*(signed char *)(a4 + 0x1)) << 2) + 0xC4B40FC))));
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct oAC_ushort *)(a4))->v) = 0xF;
            (((struct oA9_uchar *)(a4))->v) = 0x21;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x40) = *(struct mv3 *)(0xC2A1738); }
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x121F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A1778); }
            { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A17B4); }
            break;
        case 2:
            t8 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t8))->v) = (((((struct o7C_int *)(t8))->v)) + ((((struct o4_int *)0xC2A1764)->v)));
            if ((int)((((struct o1C_short *)(a4))->v)) <= (int)((((struct o8_int *)0xC2A1764)->v))) {
                t13 = ((((struct o8_int *)0xC2A1764)->v));
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A1784, 0xC2A1778, ((((struct o1C_short *)(a4))->v)), t13, 0x0);
            }
            if (((((struct o1C_short *)(a4))->v)) == ((((struct o8_int *)0xC2A1764)->v))) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A1790); }
            }
            t30 = (((struct o1C_short *)(a4))->v);
            if (((int)t30 >= (int)((((struct oC_int *)0xC2A1764)->v))) && (t32 = (((struct o10_int *)0xC2A1764)->v), (int)t30 <= (int)t32)) {
                *(unsigned int *)(((int)stk + 20)) = 0xC2A1770;
                t34 = ((((struct oC_int *)0xC2A1764)->v));
                *(unsigned int *)(((int)stk + 16)) = 0xC2A1774;
                t36 = ((((struct o10_int *)0xC2A1764)->v));
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A17A8, 0xC2A179C, ((((struct o1C_short *)(a4))->v)), t36, t34);
                t42 = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
                t45 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A17C4, 0xC2A17B4, ((((struct o1C_short *)(a4))->v)), t45, t42);
            }
            if ((int)((((struct o1C_short *)(a4))->v)) <= (int)((((struct o8_int *)0xC2A1764)->v))) {
                t57 = ((((struct o8_int *)0xC2A1764)->v));
                t58 = (((struct o1C_short *)(a4))->v);
                *(unsigned int *)(((int)stk + 20)) = (0xC4 + a4);
                t59 = *(int *)(((0xC4 + a4) + 0x4));
                *(unsigned int *)(((int)stk + 16)) = t59;
                FUN_0c0588bc(((*(int *)((0x0 + (*(int *)(((int)stk + 20)))))) + 0x6C), ((*(int *)(((int)stk + 16))) + 0x84), (t59 + 0x6C), t58, t57, 0x0);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x8)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)); }
            u71 = (((struct o8_float *)(((int)stk + 16)))->v);
            u72 = (((struct o8_float *)((((int)stk + 16) + 0x8)))->v);
            if (u71 > ((((struct o4_float *)((((int)stk + 16) + 0x8)))->v))) {
                u75 = u72;
                if (u71 > u72) {
                    u75 = u71;
                }
                u80 = u75;
            } else {
                u77 = (((struct o4_float *)((((int)stk + 16) + 0x8)))->v);
                u78 = u72;
                if (u77 > u72) {
                    u78 = u77;
                }
                u80 = u78;
            }
            (((struct o24_float *)(((((struct oC4_int *)(a4))->v))))->v) = u80;
            t84 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t84 + 0x1);
            if ((int)(short)(t84 + 0x1) > (int)((((struct o0_int *)0xC2A1764)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            }
            break;
        default:
            FUN_0c03f346(a4, a5, a6, a7);
            break;
        }
    }
}


int FUN_0c0cf944(int a4)
{
    int v0_7;

    int v0_6;
    int v0_3;
    int v0_8;
    int v0_10;
    int v0_2;
    int v0_1;
    int T_;
    int R3;
    int R2;
    int R1;
    int v0_11;
    int v0_12;
    int v0_0;
    int s0;
    int v0_5;
    int v0_4;
    int v0_9;
    v0_7 = a4;
    (*(unsigned int *)&s0) = v0_7;
    *(unsigned int *)0xC472668 = 0x0;
    v0_7 = s0;
    v0_6 = (v0_7);
    v0_0 = (0x4);
    v0_1 = (0xC5421F8);
    v0_2 = (0x0);
    v0_3 = (0xC540978);
    v0_4 = (0xC532498);
    v0_5 = (0x3938);
    if ((v0_7 == 0)) goto L_C0CF996;
    if ((v0_6 == 1)) goto L_C0CF9A0;
    if ((v0_6 == 2)) goto L_C0CF9AA;
    if ((v0_6 == 3)) goto L_C0CF9B4;
    if ((v0_6 == 4)) goto L_C0CF9BE;
    if ((v0_6 == 5)) goto L_C0CF9C8;
    if ((v0_6 == 6)) goto L_C0CF9D2;
    if ((v0_6 == 7)) goto L_C0CF9DC;
    if ((v0_6 == 8)) goto L_C0CF9E6;
    if ((v0_6 == 9)) goto L_C0CFA28;
    L_C0CFA2E:;
    (((struct o6EC_ushort *)(v0_3))->v) = 0xB4;
    (((struct o6EE_ushort *)(v0_3))->v) = 0x3C;
    FUN_0c0d0258((*(int *)((((s0) << 2) + 0xC286D00))));
    FUN_0c0d06cc();
    v0_8 = (0x7);
    if (((*(signed char *)0xC5429B4) != 2)) goto L_C0CFA5A;
    v0_7 = (v0_8);
    L_C0CFA74:;
    (((struct o622_uchar *)(v0_3))->v) = v0_2;
    v0_8 = (v0_2);
    if (((int)v0_7 <= 0)) goto L_C0CFAA2;
    v0_9 = (0xC1C73E0);
    L_C0CFA80:;
    *(unsigned char *)((((0x623 + v0_3) + v0_8) + 0x0)) = (*(int *)((v0_9 + (((v0_8 - v0_7) + 0x7) << 2))));
    v0_6 = (int)(v0_8 + 0x1) < (int)v0_7;
    (((struct o622_uchar *)(v0_3))->v) = ((*(signed char *)(v0_3 + 0x622)) + 0x1);
    v0_8 = (v0_8 + 0x1);
    if (v0_6) goto L_C0CFA80;
    L_C0CFAA2:;
    (((struct o77C_uint *)(v0_3))->v) = v0_2;
    (((struct o780_uint *)(v0_3))->v) = v0_2;
    (((struct o62A_ushort *)(v0_3))->v) = v0_2;
    v0_8 = *(signed char *)0xC5429B4;
    v0_6 = (v0_8);
    v0_7 = (v0_8);
    if ((v0_8 == 2)) goto L_C0CFAC8;
    v0_6 = (v0_7);
    if ((v0_7 == 2)) goto L_C0CFB1E;
    if (((*(signed char *)0xC542A09) == 0)) goto L_C0CFB1E;
    L_C0CFAC8:;
    v0_10 = (v0_2);
    L_C0CFB1A:;
    if (!(((int)v0_10 < (int)v0_0))) goto L_C0CFB1E;
    v0_6 = (0x3714);
    v0_7 = (((v0_10 * v0_5) + v0_4));
    if (((*(signed char *)((((v0_10 * v0_5) + v0_4) + 0x3714))) == 0)) goto L_C0CFB18;
    if (((*(signed char *)(v0_1 + 0x166)) == 0)) goto L_C0CFB12;
    v0_6 = (0x16B);
    if ((v0_10 == (*(signed char *)(v0_1 + 0x16B)))) goto L_C0CFB18;
    goto L_C0CFB12;
    L_C0CFB1E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x740 + v0_3)) = *(struct mv3 *)(0xC1C73D4); }
    (((struct o774_uint *)(v0_3))->v) = v0_2;
    (((struct o778_uint *)(v0_3))->v) = v0_2;
    v0_7 = *(signed char *)0xC5429B4;
    v0_6 = (v0_7);
    if ((v0_7 == 2)) goto L_C0CFBCC;
    v0_8 = (v0_2);
    v0_11 = (0x1);
    L_C0CFBC8:;
    if (!(((int)v0_8 < (int)v0_0))) goto L_C0CFBCC;
    v0_6 = (0x3714);
    if (((*(signed char *)((((v0_8 * v0_5) + v0_4) + 0x3714))) == 0)) goto L_C0CFBC6;
    v0_10 = (((v0_8 << 2) + v0_8));
    v0_7 = (v0_2);
    v0_9 = (v0_2);
    goto L_C0CFBB4;
    L_C0CFBCC:;
    return v0_6;
    L_C0CFBB4:;
    if (((int)v0_7 < (int)0x5)) goto L_C0CFB5C;
    if ((v0_9 == 0)) goto L_C0CFBC6;
    (((struct o778_uint *)(v0_3))->v) = (((((struct o778_int *)(v0_3))->v)) + 0x1);
    v0_6 = (0x778);
    L_C0CFBC6:;
    v0_8 = (v0_8 + 0x1);
    goto L_C0CFBC8;
    L_C0CFB5C:;
    v0_6 = (((0x152 + v0_1) + v0_10));
    if (((*(signed char *)((v0_7 + ((0x152 + v0_1) + v0_10)))) == 0)) goto L_C0CFBB2;
    v0_12 = *(signed char *)((0xC2738B8 + ((short)(*(signed char *)((v0_7 + ((0x152 + v0_1) + v0_10)))) * (short)0x34)));
    v0_6 = (v0_12);
    if ((v0_12 == 2)) goto L_C0CFBB2;
    *(unsigned char *)((((((((struct o774_int *)(v0_3))->v)) << 1) + (0x74C + v0_3)) + 0x0)) = (*(signed char *)(((((0x152 + v0_1) + v0_10) + v0_7) + 0x0)));
    *(unsigned char *)((((((((struct o774_int *)(v0_3))->v)) << 1) + (0x74C + v0_3)) + 0x1)) = v0_8;
    (((struct o774_uint *)(v0_3))->v) = (((((struct o774_int *)(v0_3))->v)) + 0x1);
    v0_6 = (0x774);
    v0_9 = (v0_11);
    L_C0CFBB2:;
    v0_7 = (v0_7 + 0x1);
    goto L_C0CFBB4;
    L_C0CFB12:;
    v0_6 = ((FUN_0c0cbfe8(v0_7)));
    L_C0CFB18:;
    v0_10 = (v0_10 + 0x1);
    goto L_C0CFB1A;
    L_C0CFA5A:;
    v0_7 = *(signed char *)0xC542A09;
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C0CFA6A;
    if ((v0_6 == 1)) goto L_C0CFA6E;
    v0_7 = (v0_8);
    goto L_C0CFA74;
    L_C0CFA6E:;
    v0_7 = (0x5);
    goto L_C0CFA74;
    L_C0CFA6A:;
    v0_7 = (0x3);
    goto L_C0CFA74;
    L_C0CFA28:;
    FUN_0c0f6348();
    goto L_C0CFA2E;
    L_C0CF9E6:;
    FUN_0c0f6078();
    goto L_C0CFA2E;
    L_C0CF9DC:;
    FUN_0c0f5984();
    goto L_C0CFA2E;
    L_C0CF9D2:;
    FUN_0c0f25c2();
    goto L_C0CFA2E;
    L_C0CF9C8:;
    FUN_0c0f1548();
    goto L_C0CFA2E;
    L_C0CF9BE:;
    FUN_0c0e99c8();
    goto L_C0CFA2E;
    L_C0CF9B4:;
    FUN_0c0e33ae();
    goto L_C0CFA2E;
    L_C0CF9AA:;
    FUN_0c0dd0c0();
    goto L_C0CFA2E;
    L_C0CF9A0:;
    FUN_0c0d6d7a();
    goto L_C0CFA2E;
    L_C0CF996:;
    FUN_0c0d14d4();
    goto L_C0CFA2E;
}



int FUN_0c0c4d6e(int a4, int a5, float f4, float f5, float f6, float f7)
{
    int stk[3];

    int v0_2;
    int v0_1;
    int v0_3;
    int v0_0;
    int v0_6;
    float w0_1;
    int v0_4;
    float w0_0;
    float w0_2;
    int v0_5;
    float F2;
    int T_;
    int R10;
    int R8;
    int R3;
    int R2;
    int R1;
    int v0_7;
    v0_2 = a4;
    v0_0 = a5;
    w0_0 = f4;
    w0_0 = f5;
    w0_0 = f6;
    w0_0 = f7;
    v0_7 = *(signed char *)(v0_2 + 0x41C);
    v0_3 = ((unsigned char)v0_7);
    v0_5 = (0x0);
    v0_6 = (0xC0C3AE8);
    v0_4 = ((((short)(*(signed char *)(v0_2 + 0x1)) * (short)0x3938) + 0xC532498));
    v0_1 = (v0_2);
    v0_2 = (0xC532498);
    w0_0 = (0.699999988f);
    w0_1 = (1.0f);
    if (((unsigned char)v0_7 == 25)) goto L_C0C4DFC;
    if ((v0_3 == 26)) goto L_C0C4DFC;
    if ((v0_3 == 27)) goto L_C0C4DFC;
    if ((v0_3 == 67)) goto L_C0C4E3A;
    if ((v0_3 == 37)) goto L_C0C4E3A;
    if ((v0_3 == 63)) goto L_C0C4E3A;
    if ((v0_3 == 72)) goto L_C0C4E42;
    if ((v0_3 != 41)) goto L_C0C4DC0;
    if (((int)((((struct o383A_short *)(v0_4))->v)) <= (int)((((struct o383C_short *)(v0_4))->v)))) goto L_C0C4F28;
    v0_3 = (0x383A);
    L_C0C4F2A:;
    v0_0 = *(short *)((v0_4 + v0_3));
    v0_6 = (v0_0);
    if ((v0_0 != 0)) goto L_C0C4F40;
    if ((((((struct o1E_short *)(v0_1))->v)) == 0)) goto L_C0C4F40;
    FUN_0c059df2((*(signed char *)(v0_4 + 0x1)), 0x62);
    L_C0C4F40:;
    (((struct o1E_ushort *)(v0_1))->v) = v0_6;
    if (((int)v0_6 <= (int)0x258)) goto L_C0C4F52;
    v0_2 = (0x51E);
    L_C0C4F78:;
    if ((v0_2 == 0)) goto L_C0C4FB6;
    (((struct o1C_ushort *)(v0_1))->v) = (((((struct o1C_short *)(v0_1))->v)) + v0_2);
    v0_0 = !(0.0f > (math_cos_angle16(((((struct o1C_short *)(v0_1))->v)))));
    v0_4 = (0xC179670);
    if (v0_0) goto L_C0C4F9C;
    w0_1 = ((-(math_cos_angle16(((((struct o1C_short *)(v0_1))->v))))));
    L_C0C4FA4:;
    w0_2 = 0.300000012f;
    w0_2 = w0_2 + w0_0 * w0_1;
    (((struct oBC_float *)(v0_1))->v) = w0_2;
    (((struct oB8_float *)(v0_1))->v) = w0_2;
    v0_3 = (0xB8);
    w0_0 = (w0_0);
    L_C0C4FEC:;
    return v0_3;
    L_C0C4F9C:;
    w0_1 = ((math_cos_angle16(((((struct o1C_short *)(v0_1))->v)))));
    goto L_C0C4FA4;
    L_C0C4FB6:;
    (((struct oBC_float *)(v0_1))->v) = w0_1;
    (((struct oB8_float *)(v0_1))->v) = w0_1;
    (((struct oB4_float *)(v0_1))->v) = w0_1;
    v0_3 = (0xB4);
    goto L_C0C4FEC;
    L_C0C4F52:;
    if (((int)v0_6 <= (int)0x168)) goto L_C0C4F5E;
    v0_2 = (0x333);
    goto L_C0C4F78;
    L_C0C4F5E:;
    if (((int)v0_6 <= (int)0x78)) goto L_C0C4F6A;
    v0_2 = (0x28F);
    goto L_C0C4F78;
    L_C0C4F6A:;
    if (((int)v0_6 <= (int)0x3C)) goto L_C0C4F76;
    v0_2 = (0x222);
    goto L_C0C4F78;
    L_C0C4F76:;
    v0_2 = (v0_5);
    goto L_C0C4F78;
    L_C0C4F28:;
    v0_3 = (0x383C);
    goto L_C0C4F2A;
    L_C0C4DC0:;
    if ((v0_3 != 76)) goto L_C0C4DC8;
    v0_0 = (((struct oC4_int *)(v0_1))->v);
    (((struct o7C_uint *)(v0_0))->v) = (((((struct o7C_int *)(v0_0))->v)) + 0x16C);
    v0_3 = (0x7C);
    goto L_C0C4FEC;
    L_C0C4DC8:;
    if ((v0_3 != 71)) goto L_C0C4DD0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_1 + 0x28) = *(struct mv3 *)(((((short)(*(signed char *)(v0_1 + 0x1)) * (short)0x3938) + v0_2) + 0x28)); }
    goto L_C0C4FEC;
    L_C0C4DD0:;
    goto L_C0C4FEC;
    L_C0C4E42:;
    v0_6 = (0x12);
    if (((*(signed char *)(v0_4 + 0x3715)) == 0)) goto L_C0C4E68;
    v0_2 = (((struct oC8_int *)(v0_1))->v);
    (((struct o78_uint *)(v0_2))->v) = (((((struct o78_int *)(v0_2))->v)) + 0xE39);
    v0_2 = (((struct oCC_int *)(v0_1))->v);
    (((struct o78_uint *)(v0_2))->v) = (((((struct o78_int *)(v0_2))->v)) + 0xE39);
    v0_6 = (0x3);
    L_C0C4E68:;
    v0_2 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)v0_6);
    v0_3 = (v0_2);
    if ((v0_2 == 0)) goto L_C0C4E7E;
    goto L_C0C4FEC;
    L_C0C4E7E:;
    v0_2 = (int)((int)((int)((int)(nlRand()) % (int)0xA)) % (int)0x7);
    v0_3 = (v0_2);
    if ((v0_2 != 0)) goto L_C0C4E9C;
    goto L_C0C4FEC;
    L_C0C4E9C:;
    FUN_0c17b1a0(v0_1 + 0x64);
    *(float *)(((int)stk + 0)) = -21.0f;
    *(float *)(((int)stk + 4)) = -56.0f;
    *(float *)(((int)stk + 8)) = -105.0f;
    nlCalcPoint(((int)stk + 0), (v0_1 + 0x4C));
    v0_3 = ((FUN_0c150010((v0_1 + 0x4C), w0_1, w0_1, w0_1, w0_0)));
    goto L_C0C4FEC;
    L_C0C4E3A:;
    v0_3 = ((FUN_0c0c3ae8(v0_1, v0_0)));
    goto L_C0C4FEC;
    L_C0C4DFC:;
    v0_2 = (0x1);
    if (((unsigned short)((((struct o3818_short *)(v0_4))->v)) != 0x30F)) goto L_C0C4E2A;
    if ((!(((((struct o8C_float *)(((((struct o118_int *)(v0_4))->v))))->v)) > 26.0f))) goto L_C0C4E2A;
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = v0_5;
    *(unsigned char *)((((((struct oC8_int *)(v0_1))->v)) + 0x0)) = v0_2;
    v0_3 = (0xC8);
    goto L_C0C4FEC;
    L_C0C4E2A:;
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = v0_2;
    *(unsigned char *)((((((struct oC8_int *)(v0_1))->v)) + 0x0)) = v0_5;
    v0_3 = (0xC8);
    goto L_C0C4FEC;
}

int FUN_0c0b5c58(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = *(signed char *)(a4 + 0x16);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                t1 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
                if ((int)(short)(t1 - 1) > 0) {
                    return FUN_0c038362(a4);
                }
                (((struct o1C_ushort *)(a4))->v) = 0xF;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x38F8 + a4) + 0x1C)) = *(struct mv3 *)(((((short)(*(signed char *)(((0x38F8 + a4) + 0x1B))) * (short)0x3938) + 0xC532498) + 0x28)); }
                (((struct o20_float *)((0x38F8 + a4)))->v) = ((((struct o168_float *)((0xC532498 + ((short)(*(signed char *)(((0x38F8 + a4) + 0x1B))) * (short)0x3938))))->v));
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                return 0x16;
            }
            if (t0 == 3) {
                (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                t1 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    (((struct o1C_ushort *)(a4))->v) = 0x1E;
                    FUN_0c059e60(a4, 0x22);
                    switch (a5) {
                    case 0:
                        FUN_0c0b5b8e(a4, 0x0);
                        break;
                    case 1:
                        FUN_0c0b5b8e(a4, 0x1);
                        break;
                    case 2:
                        FUN_0c0b5b8e(a4, 0x0);
                        FUN_0c0b5b8e(a4, 0x1);
                        break;
                    }
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                    return 0x16;
                }
                return FUN_0c038362(a4);
            }
            if (t0 == 4) {
                (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
                t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                t0 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    t0 = *(int *)((((a5 << 2) << 1) + 0xC1C67FC));
                    t1 = *(signed char *)(a4 + 0x1);
                    FUN_0c07e79c(a4, t1, 0x1, t0, (t1), 0x1, (t0));
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                    return 0x16;
                }
                return FUN_0c038362(a4);
            }
            t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
            if ((unsigned char)t0 != 0) {
                return FUN_0c0b507a(a4, 0x0, 0x0);
            }
            return FUN_0c038362(a4);
        }
        (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
        t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
    } else {
        t0 = *(int *)((((a5 << 2) << 1) + 0xC1C67F8));
        t1 = *(signed char *)(a4 + 0x1);
        FUN_0c07e79c(a4, t1, 0x1, t0, (t1), 0x1, (t0));
        if ((int)a5 < (int)0x2) {
            (((struct o1B_uchar *)((0x38F8 + a4)))->v) = (*(signed char *)(((((0x38F8 + a4) + 0x18) + a5) + 0x0)));
        } else {
            t0 = nlRand();
            t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t1 = (t0 & 0x1);
            }
            (((struct o1B_uchar *)((0x38F8 + a4)))->v) = (*(signed char *)((((0x38F8 + a4) + 0x18) + t1)));
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
        (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
        t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
    }
    if ((unsigned char)t0 == 0) {
        return FUN_0c038362(a4);
    }
    (((struct o1C_ushort *)(a4))->v) = 0xF;
    FUN_0c059e60(a4, 0x21);
    switch (a5) {
    case 0:
        FUN_0c14ada0(a4, 0x0, 0x3C, (((((struct oE4_int *)(a4))->v)) + 0x28), 0xC1C6810);
        break;
    case 1:
        FUN_0c14ada0(a4, 0x1, 0x3C, (((((struct oF4_int *)(a4))->v)) + 0x28), 0xC1C681C);
        break;
    case 2:
        FUN_0c14ada0(a4, 0x0, 0x3C, (((((struct oE4_int *)(a4))->v)) + 0x28), 0xC1C6810);
        FUN_0c14ada0(a4, 0x1, 0x3C, (((((struct oF4_int *)(a4))->v)) + 0x28), 0xC1C681C);
        break;
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
    return 0x16;
}



