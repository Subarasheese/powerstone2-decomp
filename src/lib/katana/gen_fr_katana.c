/* Straight-line functions with calls and guards (batch gen_fr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o100_int { char p[0x100]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o375E_uchar { char p[0x375E]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o377C_uint { char p[0x377C]; unsigned int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c073566(int, int);
int FUN_0c07bdd0(int, int);
float FUN_0c07cd84(int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c216e(int);
int FUN_0c0c224c(int, int);
int FUN_0c0c2870(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c0c9de8(int);
int FUN_0c0c9e1a(void);
int FUN_0c0cff2e(int, int);
int FUN_0c104cc8(int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int);
int FUN_0c12ebe4(int, int);
int FUN_0c144984(int, int, int);
int FUN_0c14c7e8(int);
int FUN_0c14c866(int, int);
int FUN_0c150160(int, int, float, float, float, float);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c15aed8(int);
int FUN_0c16a40c(int);
int FUN_0c17c450(int);
int FUN_0c2b176e(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int bgm_stop_slot(int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlCalcPoint44(int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRand(void);
float nlScalor(int, Stk3);
int nlSelectMatrixStack(int);
int nlSubVector3op(int, int, int);
int nl_sprite_draw(int);
int thunk_FUN_0c058310(int, int);
int draw_project_point_sprite(int a4);
int FUN_0c09e6f0(int a4);
int FUN_0c143814(int a4, int a5, int a6);
int FUN_0c1118ac(int a4);
int FUN_0c117d5a(int a4);
int FUN_0c0c9e1e(int a4);
int FUN_0c14cd44(int a4, int a5);
int FUN_0c13052c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0f29a8(int a4);
int FUN_0c14c96a(int a4);
int FUN_0c14188c(int a4, int a5);
int FUN_0c144d6a(int a4);
int FUN_0c14fed8(int a4, int a5, float f4, float f5);
int FUN_0c0ffdae(int a4);
int FUN_0c2b1830(int a4, int a5);
void FUN_0c06130a(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int FUN_0c08ba8c(int a4);
int FUN_0c13f398(int a4);
void FUN_0c061416(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c07ce58(int a4, int a5, float f4);
int FUN_0c16a6e0(int a4);
int FUN_0c0df30a(int a4);


int FUN_0c2b1830(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
    if ((unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1) <= (unsigned int)(*(int *)(((a4 - 32) + 0x4)))) {
    } else {
        t1 = (*(int *)(((a4 - 32) + 0x4)));
    }
    FUN_0c2b176e();
    t2 = *(int *)0xC8B9DC8;
    t3 = (*(int *)((t2 + 0x0)));
    t4 = t2;
    for (;;) {
        if ((unsigned int)(*(int *)((t3 + 0x4))) >= (unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
            break;
        }
        if (t3 == t2) {
            _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
            return 0x0;
        }
        t4 = t3;
        t3 = (*(int *)((t3 + 0x0)));
    }
    t2 = *(int *)((t3 + 0x4));
    if (t2 == (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
        *(unsigned int *)((t4 + 0x0)) = (*(int *)((t3 + 0x0)));
        t5 = t3;
    } else {
        *(unsigned int *)((t3 + 0x4)) = (t2 - (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1));
        t5 = (t3 + ((((t2 - (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1));
    }
    if (a4 != (t5 + 0x20)) {
        if ((unsigned int)a4 < (unsigned int)(t5 + 0x20)) {
            if ((unsigned int)(((((t1 << 2) << 2) << 1) + t5) + 0x20) > (unsigned int)(t5 + 0x20)) {
                t2 = (((((t1 << 2) << 2) << 1) + t5) + 0x20);
                t3 = a4;
                for (;;) {
                    t6 = t3;
                    t3 = (t3 - 32);
                    t7 = t2;
                    t2 = (t2 - 32);
                    { struct mv8 { int w[8]; }; *(struct mv8 *)(t7) = *(struct mv8 *)(t6); }
                    if ((unsigned int)t2 <= (unsigned int)(t5 + 0x20)) {
                        break;
                    }
                }
            }
        } else {
            if (((unsigned int)a4 > (unsigned int)(t5 + 0x20)) && ((unsigned int)(t5 + 0x20) < (unsigned int)(((((t1 << 2) << 2) << 1) + t5) + 0x20))) {
                t2 = (t5 + 0x20);
                t3 = a4;
                for (;;) {
                    t6 = t3;
                    t3 = (t3 + 0x20);
                    t7 = t2;
                    t2 = (t2 + 0x20);
                    { struct mv8 { int w[8]; }; *(struct mv8 *)(t7) = *(struct mv8 *)(t6); }
                    if ((unsigned int)t2 >= (unsigned int)(((((t1 << 2) << 2) << 1) + t5) + 0x20)) {
                        break;
                    }
                }
            }
        }
    }
    *(unsigned int *)((t5 + 0x4)) = (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
    *(unsigned int *)0xC8B9DC8 = t4;
    _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
    return (t5 + 0x20);
}


