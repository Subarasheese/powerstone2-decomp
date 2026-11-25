/* Straight-line functions with calls and guards (batch gen_jf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[12]; } Stk12;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
int ADXB_Create(int, int, int, int);
int ADXB_EntryAddWrFunc(int, int, int);
int ADX_DecodeInfoWav(int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c056e44(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05f22c(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c104cc8(int);
int FUN_0c104db8(void);
int FUN_0c10527c(int, int, int);
int FUN_0c106744(int);
int FUN_0c108568(int, int);
int FUN_0c1086d8(int);
int FUN_0c109c58(int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c119ba4(int, int);
int FUN_0c12ebe4(int, int);
extern int FUN_0c187a88();
int FUN_0c1a0254(int);
int FUN_0c1a02a6(int);
int FUN_0c1a0ec4(int, int, int);
int FUN_0c1a0ff0(int, int);
int FUN_0c1a11d0(int, int, int);
int FUN_0c1a1354(int, int);
int FUN_0c1a3600(int, int, int, int);
int FUN_0c1a3678(int, int, int);
int FUN_0c2c671e(int);
int FUN_0c2d6c38(int, int, int, int, int, int, int, int, int);
int FUN_0c2e8574(int, int);
int SJRBF_GetBufPtr(int);
int SJRBF_GetXtrSize(int);
int adxsjd_clear(int);
int kmyGetDisplayParametersInfo(int, int, int);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int memset(int, int, int);
int rsfts(int, int, int);
int syRtcMakeAgeOfMoon(int);
extern int syRtcMakeDayOfWeek();
int thunk_FUN_0c058310(int, int);
int syRtcCountToDate(int a4, int a5);
int FUN_0c109cb6(int a4, int a5, int a6, int a7);
int FUN_0c09e5a0(int a4, int a5, int a6);
int its(int a4, int a5, int a6, int a7);
int FUN_0c06b484(int a4);
int FUN_0c1067fa(int a4);
int FUN_0c2e83ae(void);
int ADXB_DecodeHeaderWav(int a4, int a5, int a6);
int kmiSetFBSurfaceDesc(int a4);
int ADXSJD_Create(int a4, int a5, int a6);
float FUN_0c134118(int a4);
int FUN_0c1a019a(int a4, int a5, int a6, int a7);
int FUN_0c0c8030(int a4);
int FUN_0c0c81fe(int a4);


int ADXSJD_Create(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((a6 + 0x0));
    t1 = 0x0;
    for (;;) {
        if ((*(signed char *)((((t1 * 0x98) + 0xC8CAC04) + 0x0))) != 0) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    t2 = 0x0;
    if (t1 != 8) {
        t3 = SJRBF_GetBufPtr(t0);
        t4 = FUN_0c2c671e(t0);
        t5 = SJRBF_GetXtrSize(t0);
        t0 = ADXB_Create(a5, t3, ((unsigned int)t4 >> 1), (((unsigned int)t4 >> 1) + ((unsigned int)t5 >> 1)));
        *(unsigned int *)((((t1 * 0x98) + 0xC8CAC04) + 0x4)) = t0;
        ADXB_EntryAddWrFunc(t0, 0xC2C34C0, ((t1 * 0x98) + 0xC8CAC04));
        if ((*(int *)((((t1 * 0x98) + 0xC8CAC04) + 0x4))) == 0) {
            t0 = 0x0;
        } else {
            *(unsigned int *)((((t1 * 0x98) + 0xC8CAC04) + 0x8)) = a4;
            *(unsigned char *)((((t1 * 0x98) + 0xC8CAC04) + 0x2)) = a5;
            if ((int)a5 > 0) {
                t3 = 0x0;
                t4 = 0x0;
                for (;;) {
                    t4 = (t4 + 0x1);
                    *(unsigned int *)((((((t1 * 0x98) + 0xC8CAC04) + 0xC) + t3) + 0x0)) = (*(int *)((a6 + t3)));
                    t3 = (t3 + 0x4);
                    if ((int)t4 >= (int)a5) {
                        break;
                    }
                }
            }
            *(unsigned char *)((((t1 * 0x98) + 0xC8CAC04) + 0x1)) = 0x0;
            adxsjd_clear(((t1 * 0x98) + 0xC8CAC04));
            (((struct o48_uint *)(((t1 * 0x98) + 0xC8CAC04)))->v) = 0x0;
            (((struct o4C_uint *)(((t1 * 0x98) + 0xC8CAC04)))->v) = 0x0;
            (((struct o50_uint *)(((t1 * 0x98) + 0xC8CAC04)))->v) = 0x0;
            (((struct o54_uint *)(((t1 * 0x98) + 0xC8CAC04)))->v) = 0x0;
            *(unsigned char *)((((t1 * 0x98) + 0xC8CAC04) + 0x0)) = 0x1;
            t0 = ((t1 * 0x98) + 0xC8CAC04);
        }
        t2 = t0;
    }
    return t2;
}


