/* game/ai: functions 0C0BBBD8-0C0BD4AC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o168_float { char p[0x168]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_short { char p[0x34]; short v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o36_short { char p[0x36]; short v; };
struct o36_ushort { char p[0x36]; unsigned short v; };
struct o38_short { char p[0x38]; short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3E_short { char p[0x3E]; short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o40_short { char p[0x40]; short v; };
struct o40_ushort { char p[0x40]; unsigned short v; };
struct o42_short { char p[0x42]; short v; };
struct o42_ushort { char p[0x42]; unsigned short v; };
struct o44_short { char p[0x44]; short v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o46_short { char p[0x46]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_short { char p[0x7E]; short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o80_short { char p[0x80]; short v; };
struct o80_ushort { char p[0x80]; unsigned short v; };
int FUN_0c07341c(int);
int FUN_0c0bbad0(int);
int FUN_0c0bbb16(int);
int FUN_0c0bbbd8(int);
int FUN_0c0bbc72(int);
int FUN_0c0bbcbe(int);
int FUN_0c0bbcc4(int);
int FUN_0c0bbcf6(int, int, int);
int FUN_0c0bbe96(int);
int FUN_0c0bbee6(int);
int FUN_0c0bc15c(void);
int FUN_0c0bc25a(void);
int ai_clear_op_state(void);
int FUN_0c0bc2c0(int, int, int);
int nlRand(void);
void FUN_0c0bc420(int a4);

#define H(o) (*(unsigned short *)(p + (o)))
#define B(o) (*(unsigned char *)(p + (o)))
#define I(o) (*(int *)(p + (o)))
#define F(o) (*(float *)(p + (o)))
#define G(o) (*(signed char *)(0xC5421F8 + (o)))
#define A(o) (*(signed char *)(a4 + (o)))
#define AF(o) (*(float *)(a4 + (o)))
#define TAB(t) ((int)(unsigned short)*(short *)((t) + ((unsigned char)G(0x4A) << 1)))
#define RESET() (H(0x10) = 0x258, H(0x34) = 0, H(0x80) = 1)
#define IN0(t) ((t) == 0 || (t) == 3 || (t) == 1 || (t) == 5 || (t) == 13)

/* manual: the AI state machine of one slot (struct of 0x264 bytes at 0C471ACC + slot * 0x264): resets its timer when an input changed, counts, then starts the first of nine
   events whose bit is set in the slot's mask word and not yet reached (one shared tail: stop, store, clear, FUN_0c0bc2c0 (k, flag)), else the default one; returns nothing
   (the lift returned leftovers of r0, its one caller drops them); 99 hand cases (every branch of every event, the slot index), 1988 of 1988 instructions */
void FUN_0c0bc420(int a4)
{
    char *p = (char *)0xC471ACC + (unsigned short)(unsigned char)*(signed char *)0xC472462 * (unsigned short)0x264;
    int g = G(0x3D);
    int r = 0, k, fl = 0, x;
    unsigned short m, s;
    unsigned char code;
    float f;

    if (H(0x46) != (signed char)g) { H(0x46) = g; RESET(); }
    if (*(signed char *)(p + 5) != G(0x44)) { B(5) = G(0x44); RESET(); }
    if (H(0x40) != A(0x371A)) { H(0x40) = A(0x371A); RESET(); }
    if (H(0x42) != FUN_0c0bbe96(a4)) { H(0x42) = FUN_0c0bbe96(a4); RESET(); }
    if (H(0x44) != A(0x3715)) { H(0x44) = A(0x3715); if (A(0x3715) == 32) RESET(); }
    s = H(0x10) - 1;
    H(0x10) = s;
    if (s == 0) RESET();
    if (5.0f > (float)(unsigned short)FUN_0c0bbc72(a4) && (A(0x3715) == 3 || A(0x3715) == 1 || A(0x3715) == 5 || A(0x3715) == 13)) H(0x64) = H(0x64) + 1;
    else H(0x64) = 0;
    F(0x58) = F(0x4C);
    F(0x60) = F(0x54);
    F(0x4C) = AF(0x28);
    F(0x54) = AF(0x30);

    if ((H(0x80) & 0x1000) && H(0x7E) < 0x1000) {
        if (A(0x3715) == 35 || A(0x3715) == 38 || A(0x3715) == 40) { m = 0x1000; code = 0x30; k = 0xD; goto trig; }
        H(0x3A) = 0;
    }
    if ((H(0x80) & 0x800) && H(0x7E) < 0x800) {
        if ((signed char)FUN_0c07341c(a4) == 0) H(0x36) = 0;
        else if (H(0x36) != 0) H(0x36) = 1;
        else if (nlRand() % 100 < TAB(0xC25E094)) goto t800;
        else H(0x36) = 1;
        if (A(0x3715) != 34) H(0x38) = 0;
        else if (H(0x38) != 0) H(0x38) = 1;
        else if (nlRand() % 100 >= TAB(0xC25E0D4)) H(0x38) = 1;
        else {
t800:       m = 0x800; code = 0x10; k = 0xB; goto trig;
        }
    }
    if ((H(0x80) & 0x400) && H(0x7E) < 0x400) {
        if (IN0(A(0x3715))) {
            f = AF(0x2C);
            if (FUN_0c0bbcf6(a4, (int)&f, 0x10) != 0 && f > AF(0x2C) && AF(0x2C) + 500.0f > f) goto t400;
        }
        if (IN0(A(0x3715)) && A(0x375E) != 0) goto t400;
        if (IN0(A(0x3715)) && G(0x3F) == 2 && G(0x44) == 1 && AF(0x2C) > AF(0x168) + 500.0f) {
t400:       m = 0x400; code = 0; k = 0xA; goto trig;
        }
    }
    if ((H(0x80) & 0x200) && H(0x7E) < 0x200) {
        if (A(0x3715) == 14 || A(0x3715) == 15) { m = 0x200; code = 0x90; k = 0xC; goto trig; }
        if (A(0x3715) == 17) { m = 0x200; code = 0x91; k = 0xC; fl = 1; goto trig; }
    }
    if ((H(0x80) & 0x40) && H(0x7E) < 0x40 && H(0x64) > 0x3C && IN0(A(0x3715))) { m = 0x40; code = 0x60; k = 6; goto trig; }
    if ((H(0x80) & 0x20) && H(0x7E) < 0x20) {
        r = FUN_0c0bbee6(a4);
        if (r != 0) { m = 0x20; code = 0x40; k = 0xE; goto trig; }
    }
    if ((H(0x80) & 0x10) && H(0x7E) < 0x10) {
        r = FUN_0c0bbad0(a4);
        if (r != 0 && H(0x3E) != *(signed char *)(r + 0x125)) {
            H(0x3E) = *(signed char *)(r + 0x125);
            if (nlRand() % 100 < TAB(0xC25E054)) { m = 0x10; code = 0x50; k = 5; goto trig; }
        }
    }
    if ((H(0x80) & 8) && H(0x7E) < 8) {
        if ((unsigned short)FUN_0c0bbbd8(a4) < 0xC8) {
            if (nlRand() % 100 < TAB(0xC25E014)) {
                r = FUN_0c0bbb16(a4);
                if (I(0x68) != r) {
                    I(0x68) = r;
                    if (r != 0 && (I(0x78) == r || *(signed char *)(r + 0x3720) == 0)) { m = 8; code = 0x40; k = 4; goto trig; }
                }
            }
        } else I(0x68) = 0;
    }
    if ((H(0x80) & 2) && H(0x7E) < 2) {
        fl = FUN_0c0bbcbe(a4) != 0;
        r = FUN_0c0bbcc4(a4);
        if (I(0x2C) != r) {
            I(0x2C) = r;
            if (r != 0) { m = 2; code = 0x31; k = 3; goto trig; }
        }
    }
    if (H(0x34) == 0) {
        for (x = 2; x >= -1; x--) {
            if (x < 0 ? H(0x34) == 0 : (G(0x3F) == x && G(0x44) == 1)) {
                if (x >= 0) FUN_0c0bc15c();
                H(0x34) = 1; H(0x7E) = 1; H(0x80) = 0xFFFE; B(4) = x >= 0 ? 0x20 : 0x10; H(0x10) = 0x258; H(0x7C) = 0;
                ai_clear_op_state();
                if (x >= 0) FUN_0c0bc2c0(a4, 2, 2 - x); else FUN_0c0bc2c0(a4, 1, 0);
                if (A(0x3721) == 0) H(0x80) = H(0x80) | 2; else H(0x80) = H(0x80) & 0xFFFD;
                H(0x14) = 0;
            }
        }
    }
    return;
trig:
    FUN_0c0bc15c();
    if (m == 0x40) H(0x64) = 0;
    H(0x34) = 1; H(0x7E) = m; B(4) = code;
    if (r != 0) {
        I(0x78) = r; F(0x6C) = *(float *)(r + 0x28); F(0x70) = *(float *)(r + 0x2C); F(0x74) = *(float *)(r + 0x30);
    }
    if (m == 2) H(0x22) = *(unsigned char *)(r + 0x41C);
    if (m & 0x1C00) FUN_0c0bc25a();
    ai_clear_op_state();
    if (m == 0x10) fl = *(signed char *)((unsigned char)*(signed char *)(r + 0x125) + *(int *)(0xC25DB7C + (*(signed char *)(r + 2) << 2)));
    FUN_0c0bc2c0(a4, k, fl);
}
