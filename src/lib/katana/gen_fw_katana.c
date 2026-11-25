/* Straight-line functions with calls and guards (batch gen_fw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3818_short { char p[0x3818]; short v; };
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
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c060e70(int, int);
int FUN_0c060ee6(int, int);
int FUN_0c0641ca(int, int);
int FUN_0c06485a(void);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e328(int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0cff2e(int, int);
int FUN_0c1171f0(int);
int FUN_0c136098(int);
int FUN_0c144924(int, int);
int FUN_0c149560(int, int);
int FUN_0c1495c0(int, int, int);
int FUN_0c187a88(int, int, int, int);
int FUN_0c2c6728(void);
int FUN_0c2c6740(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c13b818(int a4, int a5);
float FUN_0c0c5c60(int a4, int a5, int a6, int a7);
int FUN_0c0d7488(int a4, int a5, int a6, int a7);
int FUN_0c131678(int a4, int a5);
int FUN_0c13d748(int a4, int a5);
void FUN_0c13e518(int a4, int a5, int a6, int a7);
int FUN_0c149762(int a4);
int FUN_0c039df8(int a4);
int FUN_0c1173dc(int a4, int a5, int a6, int a7);
int FUN_0c136108(int a4, int a5, int a6, int a7, float f4);
int FUN_0c1125d4(int a4, int a5, int a6, int a7);
int FUN_0c141358(int a4, int a5);
void FUN_0c06494c(void);
int FUN_0c0d7714(int a4, int a5, int a6, int a7);
int FUN_0c144a68(int a4, int a5);
int FUN_0c129ec4(int a4, int a5);
int FUN_0c129b94(int a4, int a5);
void SJUNI_UngetChunk(int a4, int a5, int a6, int a7);


void SJUNI_UngetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        if (((int)(*(int *)((a6 + 0x4))) > 0) && (t0 = *(int *)((a6 + 0x0)), t0 != 0)) {
            t0 = FUN_0c2c6728();
            t4 = *(int *)((((a5 << 2) + (a4 + 0x18)) + 0x0));
            if (((*(signed char *)((a4 + 0x5))) == 1) && ((t4 != 0) && (t1 = *(int *)((a6 + 0x0)), t2 = *(int *)((a6 + 0x4)), t3 = *(int *)((t4 + 0x8)), (t1 + t2) == t3))) {
                *(unsigned int *)((t4 + 0x8)) = (*(int *)((a6 + 0x0)));
                *(unsigned int *)((t4 + 0xC)) = ((*(int *)((t4 + 0xC))) + (*(int *)((a6 + 0x4))));
            } else {
                t1 = *(int *)((a4 + 0x14));
                if (t1 == 0) {
                    if ((*(int *)((a4 + 0x28))) != 0) {
                        t2 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
                    }
                } else {
                    *(unsigned int *)((a4 + 0x14)) = (*(int *)((t1 + 0x0)));
                    *(unsigned int *)((t1 + 0x0)) = 0x0;
                    { struct mv2 { int w[2]; }; *(struct mv2 *)((t1 + 0x8)) = *(struct mv2 *)(a6); }
                    *(unsigned int *)((t1 + 0x0)) = (*(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0)));
                    *(unsigned int *)((((a4 + 0x18) + (a5 << 2)) + 0x0)) = t1;
                }
            }
            FUN_0c2c6740(a4, t0);
    return;
        }
        return;
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
    return;
    }
}
