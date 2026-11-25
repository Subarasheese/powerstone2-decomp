/* game/player: functions 0C0B1C5C-0C0B4AFC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o3868_int { char p[0x3868]; int v; };
struct o3868_uint { char p[0x3868]; unsigned int v; };
struct o38F8_int { char p[0x38F8]; int v; };
struct o3928_float { char p[0x3928]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c04307c(void);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c0737e8(int);
int FUN_0c07c1f8(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0b1c5c(void);
int FUN_0c0b1cf2(void);
float FUN_0c0b1d64(int);
int FUN_0c0b1edc(int);
int FUN_0c0b2064(int);
int FUN_0c0b281e(int);
int FUN_0c0b2888(int, int, int);
int FUN_0c0b2ac2(int);
int FUN_0c0b3aac(int, int, int, int);
int FUN_0c0b3f2e(int);
int FUN_0c0b3fe6(int);
int FUN_0c0b4074(int);
extern int FUN_0c144644();
int math_atan2_angle16(float, float);
int nlRand(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
int FUN_0c17c450(int);
void FUN_0c0b2d30(int a4, int a5, int a6, int a7);

/* FUN_0c0b2d30, written by hand from the original (3,336 bytes; the generated C was 10,680).
   Not one routine: the splitter joined a dispatcher and its handlers. The byte at +0x3715 picks the handler (3, 5, 7, 14, 16, 19, 20,
   else the default one); each handler is a state machine on the byte at +22 (the state), the words at +28 / +30 (counters) and +32. */

#define SB(o) (*(signed char *)(a4 + (o)))
#define SW(o) (*(short *)(a4 + (o)))
#define SI(o) (*(int *)(a4 + (o)))
#define FL(o) (*(float *)(a4 + (o)))
#define ANIM(x, y) FUN_0c07e79c(a4, SB(1), (x), (y), SB(1), (x), (y))
#define SYNC { f = FL(0x3928); FL(0x37B0) = f; *(float *)(SI(280) + 144) = f; *(float *)(SI(284) + 144) = f; }

/* manual: written by hand, 2026-11-23/24 (build/manual/notes.txt) */
void FUN_0c0b2d30(int a4, int a5, int a6, int a7)
{
    float v[4];
    float f;
    float g;
    int x;
    int y;
    int p;
    int i;
    int n;

    switch (SB(0x3715)) {
    case 19:
        switch (SB(22)) {
        case 0:
            FL(0x37B0) = 1.0f;
            ANIM(6, 0);
            FUN_0c059e60(a4, 0);
            SW(28) = 80;
            SB(22) = SB(22) + 1;
        case 1:
            if ((unsigned char)FUN_0c037bf6(a4) != 0) {
                FUN_0c0b2888(a4, 0, 0);
                return;
            }
            FUN_0c038362(a4);
            SW(28) = SW(28) - 1;
            if (SW(28) > 0) {
                return;
            }
            FUN_0c059e60(a4, 1);
            SW(28) = 60;
            SB(22) = SB(22) + 1;
            return;
        case 2:
            if ((unsigned char)FUN_0c037bf6(a4) != 0) {
                FUN_0c0b2888(a4, 0, 0);
                return;
            }
            FUN_0c038362(a4);
            SW(28) = SW(28) - 1;
            if (SW(28) > 0) {
                return;
            }
            FUN_0c059e60(a4, 2);
            SW(28) = 9999;
            return;
        }
        return;
    case 20:
        p = a4 + 0x38F8;
        switch (SB(22)) {
        case 0:
            *(unsigned short *)(a4 + 172) = 15;
            FL(72) = FL(0x378C);
            FL(68) = FL(0x378C);
            FL(64) = FL(0x378C);
            *(unsigned short *)(a4 + 302) = 16;
            *(unsigned char *)(a4 + 294) = 0;
            *(unsigned char *)(a4 + 1093) = 0;
            FL(0x37B0) = 1.0f;
            ANIM(0, 0);
            FUN_0c059e60(a4, 17);
            FUN_0c059e60(a4, 4);
            n = 0;
            for (i = 0; i < 4; i++) {
                if (*(signed char *)(*(int *)(p + i * 4) + 27) == 2) {
                    n++;
                }
            }
            if (n >= 2) {
                FUN_0c144644(*(int *)p);
                FUN_0c144644(*(int *)(p + 4));
                FUN_0c144644(*(int *)(p + 8));
                FUN_0c144644(*(int *)(p + 12));
            }
            SB(22) = SB(22) + 1;
        case 1:
            if ((unsigned char)FUN_0c037bf6(a4) != 0) {
                FUN_0c0b2888(a4, 0, 0);
                return;
            }
            FUN_0c038362(a4);
            return;
        }
        return;
    case 3:
        switch (SB(22)) {
        case 0:
            FL(0x37B0) = 1.0f;
            ANIM(0, 1);
            SYNC;
            SB(22) = SB(22) + 1;
        case 1:
            if ((unsigned char)FUN_0c037bf6(a4) == 0) {
                FUN_0c038362(a4);
                return;
            }
            SB(22) = SB(22) + 1;
            FL(0x37B0) = 1.0f;
            ANIM(0, 2);
            SYNC;
            return;
        case 2:
            if ((unsigned char)FUN_0c037bf6(a4) == 0) {
                FUN_0c038362(a4);
                return;
            }
            FUN_0c0b2888(a4, 0, 0);
            return;
        }
        return;
    case 5:
        switch (SB(22)) {
        case 0:
            FL(0x37B0) = 1.0f;
            ANIM(0, 7);
            SYNC;
            FL(0x37A0) = 0.0f;
            SB(22) = SB(22) + 1;
        case 1:
            FUN_0c0b2ac2(a4);
            if ((unsigned char)FUN_0c037bf6(a4) == 0) {
                FUN_0c038362(a4);
                return;
            }
            SB(22) = SB(22) + 1;
            FL(0x37B0) = 1.0f;
            ANIM(0, 8);
            FL(92) = -0.200000003f;
            FL(80) = -(FL(92) * 70.0f);
            FL(96) = 0.0f;
            FL(88) = 0.0f;
            FL(84) = 0.0f;
            FL(76) = 0.0f;
            SW(28) = 30;
            return;
        case 2:
            FUN_0c0b2ac2(a4);
            FUN_0c037bf6(a4);
            FUN_0c038362(a4);
            math_vec3_accumulate(a4 + 40, a4 + 76);
            math_vec3_accumulate(a4 + 76, a4 + 88);
            SW(28) = SW(28) - 1;
            if (SW(28) > 0) {
                return;
            }
            SW(28) = 40;
            FUN_0c0e2390((int)&v[1], SI(16) + 40, a4 + 40);
            f = FUN_0c0e2340((int)&v[1]);
            if (f == 0.0f) {
                v[1] = 0.707000017f;
                v[3] = 0.707000017f;
                v[2] = 0.0f;
            } else {
                FUN_0c17c450((int)&v[1]);
            }
            SI(0x3850) = math_atan2_angle16(v[1], v[3]);
            SI(0x3850) = SI(0x3850) & 0xFFFF;
            SI(56) = SI(56) & 0xFFFF;
            SI(0x3868) = SI(0x3850) - SI(56);
            if (SI(0x3868) >= 0x8000) {
                SI(0x3868) = SI(0x3868) - 0x10000;
            }
            if (SI(0x3868) <= -0x8000) {
                SI(0x3868) = SI(0x3868) + 0x10000;
            }
            SI(0x3868) = SI(0x3868) / (int)SW(28);
            SB(22) = SB(22) + 1;
            return;
        case 3:
            FUN_0c037bf6(a4);
            FUN_0c038362(a4);
            math_vec3_accumulate(a4 + 40, a4 + 76);
            math_vec3_accumulate(a4 + 76, a4 + 88);
            SI(56) = SI(56) + SI(0x3868);
            SW(28) = SW(28) - 1;
            if (SW(28) > 0) {
                return;
            }
            SB(22) = SB(22) + 1;
            return;
        case 4:
            FUN_0c037bf6(a4);
            FUN_0c038362(a4);
            if (!(FL(80) > 0.0f) && FUN_0c07ecc6(a4, 0, 0) != 0) {
                SB(22) = SB(22) + 1;
                FUN_0c05258e(2, 40, 256, 60, 0);
                FUN_0c059e60(a4, 33);
                FL(0x37B0) = 1.0f;
                ANIM(0, 9);
                SYNC;
                FUN_0c0737e8(a4);
                FUN_0c07c1f8(18);
                return;
            }
            math_vec3_accumulate(a4 + 40, a4 + 76);
            math_vec3_accumulate(a4 + 76, a4 + 88);
            return;
        default:
            if ((unsigned char)FUN_0c037bf6(a4) == 0) {
                FUN_0c038362(a4);
                return;
            }
            FUN_0c0b2888(a4, 0, 0);
            return;
        }
        return;
    case 14:
        p = a4 + 0x38F8;
        switch (SB(22)) {
        case 0:
            FUN_0c0b281e(a4);
            x = FUN_0c0b1c5c();
            y = FUN_0c0b1cf2();
            if (x >= 2) {
                SW(32) = *(int *)(0xC1C6B2C + (y << 3));
            } else {
                SW(32) = *(int *)(0xC1C6B28 + (y << 3));
            }
            SB(22) = SB(22) + 1;
        case 1:
            if (FL(352) > 0.0f) {
                SW(32) = SW(32) - 1;
                if (SW(32) < 0) {
                    FUN_0c144644(*(int *)p);
                    FUN_0c144644(*(int *)(p + 4));
                    FUN_0c144644(*(int *)(p + 8));
                    FUN_0c144644(*(int *)(p + 12));
                    FUN_0c0b2888(a4, 16, 0);
                    return;
                }
            }
            return;
        }
        return;
    case 16:
        x = SB(0x3739);
        if (x == 0) {
            *(unsigned char *)(a4 + 1093) = 0;
            FUN_0c0b2888(a4, 0, 0);
            return;
        }
        if (x != 1 && x != 2) {
            return;
        }
        switch (SB(22)) {
        case 0:
            FL(0x37B0) = 1.0f;
            if (SB(0x3739) == 1) {
                ANIM(4, 2);
            } else {
                ANIM(4, 3);
            }
            SYNC;
            FUN_0c059e60(a4, 34);
            *(unsigned char *)(a4 + 1093) = 0;
            SB(22) = SB(22) + 1;
        case 1:
            if ((unsigned char)FUN_0c037bf6(a4) == 0) {
                FUN_0c038362(a4);
                return;
            }
            FUN_0c0b2888(a4, 0, 0);
            return;
        }
        return;
    case 7:
        switch (SB(0x3732)) {
        case 1:
            FUN_0c0b3aac(a4, a5, a6, a7);
            return;
        case 2:
            FUN_0c0b3f2e(a4);
            return;
        case 3:
            FUN_0c0b3fe6(a4);
            return;
        case 4:
            FUN_0c0b4074(a4);
            return;
        case 0:
            break;
        default:
            return;
        }
        switch (SB(22)) {
        case 0:
            FL(0x37B0) = 1.0f;
            ANIM(1, 2);
            SYNC;
            FUN_0c059e60(a4, 34);
            FUN_0c059e60(a4, 7);
            SW(30) = 40;
            SB(22) = SB(22) + 1;
        case 1:
            if (SW(30) > 0) {
                SW(30) = SW(30) - 1;
                if (SW(30) == 0) {
                    FUN_0c059e60(a4, 34);
                }
            }
            FUN_0c037bf6(a4);
            if (120.0f > *(float *)(SI(280) + 140)) {
                FUN_0c038362(a4);
                return;
            }
            SB(22) = SB(22) + 1;
            y = FUN_0c0b1cf2();
            SW(28) = *(short *)(0xC1C6B88 + y * 2);
            SW(32) = SW(28);
            FUN_0c038362(a4);
            return;
        case 2:
            x = SW(32);
            y = SW(28);
            f = (float)(x - y) / (float)x;
            f = f * math_sin_angle16(y << 14);
            f = f * 364.0f;
            SI(56) = (int)((float)SI(56) + f);
            SW(28) = SW(28) - 1;
            if (SW(28) <= 0) {
                SB(22) = SB(22) + 1;
            }
            return;
        case 3:
            if ((unsigned char)FUN_0c037bf6(a4) == 0) {
                FUN_0c038362(a4);
                return;
            }
            SB(22) = SB(22) + 1;
            SW(28) = 60;
            SW(30) = 20;
            FL(0x37B0) = 1.0f;
            ANIM(1, 3);
            SYNC;
            FUN_0c059e60(a4, 41);
            return;
        case 4:
            SI(56) = SI(56) + 1820;
            SW(30) = SW(30) - 1;
            if (SW(30) <= 0) {
                FUN_0c059e60(a4, 41);
                SW(30) = 20;
            }
            FUN_0c037bf6(a4);
            SW(28) = SW(28) - 1;
            if (SW(28) > 0) {
                FUN_0c038362(a4);
                return;
            }
            FL(0x37B0) = 1.0f;
            ANIM(1, 4);
            SYNC;
            FUN_0c059e60(a4, 34);
            SW(30) = 40;
            SB(22) = SB(22) + 1;
            return;
        default:
            if (SW(30) > 0) {
                SW(30) = SW(30) - 1;
                if (SW(30) == 0) {
                    FUN_0c059e60(a4, 34);
                }
            }
            if ((unsigned char)FUN_0c037bf6(a4) == 0) {
                FUN_0c038362(a4);
                return;
            }
            FUN_0c0b2888(a4, 0, 0);
            return;
        }
        return;
    default:
        switch (SB(22)) {
        case 0:
            SW(28) = 30;
            FL(0x37B0) = 1.0f;
            ANIM(0, 0);
            SYNC;
            SB(22) = SB(22) + 1;
        case 1:
            FUN_0c0b2ac2(a4);
            FUN_0c037bf6(a4);
            if (*(signed char *)0xC542235 < 2) {
                FUN_0c038362(a4);
                return;
            }
            if (FUN_0c04307c() != 0) {
                FUN_0c0b2888(a4, 7, 4);
                FUN_0c038362(a4);
                return;
            }
            SW(28) = SW(28) - 1;
            if (SW(28) > 0) {
                FUN_0c038362(a4);
                return;
            }
            if (FUN_0c0b2064(a4) >= 0) {
                if (nlRand() % 16 < 14) {
                    if (nlRand() % 16 < 12) {
                        FUN_0c0b2888(a4, 7, 1);
                        return;
                    }
                    SW(28) = 60;
                    return;
                }
            }
            f = FUN_0c0b1d64(a4);
            if (f > 0.866000000f) {
                if (nlRand() % 16 < 12) {
                    FUN_0c0b2888(a4, 3, 0);
                    return;
                }
                SW(28) = 60;
                return;
            }
            if (nlRand() % 16 < 8) {
                n = 0;
                if (FUN_0c0b1edc(a4) >= 0 && nlRand() % 16 < 12) {
                    n = 3;
                } else {
                    p = SI(16);
                    if (*(signed char *)p == 0 && *(float *)(p + 44) > FL(44) + 800.0f && nlRand() % 16 < 8) {
                        n = 2;
                    }
                }
                FUN_0c0b2888(a4, 7, n);
                return;
            }
            if (nlRand() % 16 < 8) {
                FUN_0c0b2888(a4, 5, 0);
                return;
            }
            SW(28) = 60;
            FUN_0c038362(a4);
            return;
        }
        return;
    }
}
#undef SB
#undef SW
#undef SI
#undef FL
#undef ANIM
#undef SYNC

