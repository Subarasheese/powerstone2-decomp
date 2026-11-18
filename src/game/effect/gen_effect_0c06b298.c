/* game/effect: functions 0C06B298-0C06B44C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
int math_angle_between_points_xz(int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081ee8(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c11f9c8(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c06b298(int a4, int a5, int a6, int a7);
void FUN_0c06b2ca(void);
void FUN_0c06b2ce(void);
int FUN_0c06b2d2(int a4, int a5, int a6);

int FUN_0c06b298(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o3749_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC06B1DE))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06B028))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06AF1A))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06AEE4))(a4, a5, a6, a7);
}

void FUN_0c06b2ca(void)
{
    
}

void FUN_0c06b2ce(void)
{
    
}

