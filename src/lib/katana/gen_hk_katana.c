/* Straight-line functions with calls and guards (batch gen_hk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o377C_uint { char p[0x377C]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o404_int { char p[0x404]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6CC_int { char p[0x6CC]; int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c039fbc(void);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c070320(int);
int FUN_0c07da48(int);
int FUN_0c07e2f4(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0c2944(int, int, int, int, int);
extern int FUN_0c0cff96();
int FUN_0c0dade0(int, int);
int FUN_0c1171f0(int);
int FUN_0c118810(int, int);
int FUN_0c14f8aa(int, int, int);
int FUN_0c14fb3c(int, int, int, float, float, float, float, float);
int FUN_0c150010(int, int, int, float, float, float, float);
int FUN_0c15b478(int, int, int, int, int, int, int, int);
int FUN_0c15f394(int, int);
int FUN_0c1679c2(int, int, int);
int FUN_0c167a28(int, int, int, int);
int FUN_0c1717bc(void);
int FUN_0c1717f0(int, int, int);
int FUN_0c173370(void);
int FUN_0c173454(int);
int FUN_0c17c450(int);
int FUN_0c2c6728(void);
int FUN_0c2c6740(int, int);
int SJ_SplitChunk(int, int, int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlRand(void);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int nlVoidUnitVector(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c14349c(int a4, int a5, int a6, int a7);
int FUN_0c173558(void);
int FUN_0c0e2700(int a4, int a5, int a6, int a7);
int FUN_0c0db21c(int a4);
int FUN_0c066a14(int a4, int a5, int a6);
void FUN_0c04b23c(int a4, int a5, int a6, int a7);
int FUN_0c16bf02(int a4, int a5, int a6, int a7, float f4);
int FUN_0c132724(int a4, int a5);
void FUN_0c0b4df6(int a4, float f4);
int FUN_0c1193c8(int a4, int a5, int a6, int a7);
int FUN_0c0a797c(int a4);
int FUN_0c11929c(int a4, int a5, int a6, int a7);
int FUN_0c1194d0(int a4, int a5, int a6, int a7);
int FUN_0c12bbc0(int a4, int a5);
int FUN_0c06c134(int a4);
int FUN_0c13f98c(int a4, int a5, int a6, int a7);
int FUN_0c167e80(int a4, int a5, int a6);
void FUN_0c1116a8(int a4, int a5, int a6);
int SJUNI_GetChunk(int a4, int a5, int a6, int a7);
int FUN_0c11ccd0(int a4, int a5, int a6, int a7, float f4);


int SJUNI_GetChunk(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t3;
    register int t39;

    *(unsigned int *)(((int)stk + 0)) = a6;
    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        *(unsigned int *)(((int)stk + 4)) = (FUN_0c2c6728());
        t3 = *(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0));
        if (t3 != 0) {
            { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 0) + 0x10)) = *(struct mv2 *)((t3 + 0x8)); }
            if ((int)(*(int *)(((int)stk + 20))) <= (int)(*(int *)(((int)stk + 0)))) {
                { struct mv2 { int w[2]; }; *(struct mv2 *)(a7) = *(struct mv2 *)((((int)stk + 0) + 0x10)); }
                *(unsigned int *)((((a5 << 2) + (a4 + 0x18)) + 0x0)) = (*(int *)((t3 + 0x0)));
                *(unsigned int *)((t3 + 0x0)) = (*(int *)((a4 + 0x14)));
                *(unsigned int *)((a4 + 0x14)) = t3;
            } else {
                if ((*(signed char *)((a4 + 0x5))) == 1) {
                    SJ_SplitChunk((((int)stk + 0) + 0x10), (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10));
                    { struct mv2 { int w[2]; }; *(struct mv2 *)(a7) = *(struct mv2 *)((((int)stk + 0) + 0x10)); }
                    { struct mv2 { int w[2]; }; *(struct mv2 *)((t3 + 0x8)) = *(struct mv2 *)((((int)stk + 0) + 0x8)); }
                } else {
                    *(unsigned int *)((a7 + 0x0)) = 0x0;
                    *(unsigned int *)((a7 + 0x4)) = 0x0;
                }
            }
        } else {
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            *(unsigned int *)((a7 + 0x4)) = 0x0;
        }
        t39 = (FUN_0c2c6740(a4, (*(int *)(((int)stk + 4)))));
    } else {
        if ((*(int *)((a4 + 0x28))) != 0) {
            t39 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        }
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a7 + 0x4)) = 0x0;
    }
    return t39;
}

