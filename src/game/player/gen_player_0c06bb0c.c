/* game/player: functions 0C06BB0C-0C06BFB4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3752_uchar { char p[0x3752]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o37F4_float { char p[0x37F4]; float v; };
struct o37FC_float { char p[0x37FC]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o381C_short { char p[0x381C]; short v; };
struct o382C_short { char p[0x382C]; short v; };
struct o382E_short { char p[0x382E]; short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_short { char p[0x3830]; short v; };
struct o3834_short { char p[0x3834]; short v; };
struct o3834_ushort { char p[0x3834]; unsigned short v; };
struct o3836_ushort { char p[0x3836]; unsigned short v; };
struct o383A_ushort { char p[0x383A]; unsigned short v; };
struct o383C_ushort { char p[0x383C]; unsigned short v; };
struct o383E_short { char p[0x383E]; short v; };
struct o38E5_uchar { char p[0x38E5]; unsigned char v; };
struct o430_short { char p[0x430]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c042fe0(void);
int FUN_0c064ee4(int, int);
int FUN_0c074862(int, int, int, int);
int FUN_0c07bac8(int);
int FUN_0c07bb0c(int, int, int, int);
int FUN_0c07c858(int);
int FUN_0c07cf5c(int);
int thunk_FUN_0c0385e0(int, int);
int FUN_0c07d38a(int);
int FUN_0c07e2c4(int);
int FUN_0c07ebd0(int);
int FUN_0c0b2c18(int);
int FUN_0c0b551e(int);
int FUN_0c14e040(int);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c06bb0c(int a4, int a5, int a6);
int FUN_0c06bf38(int a4, int a5, int a6, int a7);


int FUN_0c06bf38(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    t2 = *(signed char *)((a4 + 0x3715));
    if ((t2 != 7) && (t2 != 26)) {
        t2 = FUN_0c07e2c4(a4);
        if (t2 == 0) {
            if ((((((struct o383E_short *)(a4))->v)) != 0) && (t0 = *(signed char *)((a4 + 0x3715)), t0 != 26)) {
                t0 = FUN_0c042fe0();
                if (t0 != 0) {
                    t0 = FUN_0c07d38a(a4);
                    if (t0 != 0) {
                        t0 = *(signed char *)((a4 + 0x3715));
                        if (t0 == 38) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 1.0f);
                            return 0x2C;
                        }
                        return t0;
                    }
                } else {
                    (((struct o3752_uchar *)(a4))->v) = 0x0;
                }
            } else {
                (((struct o3752_uchar *)(a4))->v) = 0x0;
            }
            t0 = *(int *)((((*(signed char *)((a4 + 0x3715))) << 2) + 0xC259094));
            return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
        }
        return t2;
    }
    if ((((((struct o383E_short *)(a4))->v)) != 0) && (t1 = *(signed char *)((a4 + 0x3715)), t1 != 26)) {
        t0 = FUN_0c042fe0();
        if (t0 != 0) {
            t0 = FUN_0c07d38a(a4);
            if (t0 != 0) {
                t0 = *(signed char *)((a4 + 0x3715));
                if (t0 == 38) {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 1.0f);
                    return 0x2C;
                }
                return t0;
            }
        } else {
            (((struct o3752_uchar *)(a4))->v) = 0x0;
        }
    } else {
        (((struct o3752_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(int *)((((*(signed char *)((a4 + 0x3715))) << 2) + 0xC259094));
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
}
