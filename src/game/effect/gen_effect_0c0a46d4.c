/* game/effect: functions 0C0A46D4-0C0A5ABC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0a4884(int);
int FUN_0c0a4b38(int);
int FUN_0c14f824(int, int);
int FUN_0c14f8aa(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c0a46d4(int a4, int a5, int a6, int a7);
int FUN_0c0a4f3a(int a4, int a5, int a6);
int FUN_0c0a5a82(int a4, int a5, int a6, int a7);



int FUN_0c0a5a82(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return FUN_0c0a4b38(a4);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A57F0))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A5564))(a4, a5, a6, a7);
            }
            return FUN_0c0a4884(a4);
        }
        return ((int (*)(int, int, int, int))(0xC0A5588))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A5564))(a4, a5, a6, a7);
}
