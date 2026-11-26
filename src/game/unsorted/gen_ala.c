/* Straight-line functions with calls and guards (batch gen_ala): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o160_float { char p[0x160]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o372B_uchar { char p[0x372B]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3759_uchar { char p[0x3759]; unsigned char v; };
struct o375D_uchar { char p[0x375D]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37A8_float { char p[0x37A8]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o37BC_float { char p[0x37BC]; float v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o381E_short { char p[0x381E]; short v; };
struct o381E_ushort { char p[0x381E]; unsigned short v; };
struct o3820_short { char p[0x3820]; short v; };
struct o3820_ushort { char p[0x3820]; unsigned short v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o3832_ushort { char p[0x3832]; unsigned short v; };
struct o3838_short { char p[0x3838]; short v; };
struct o3838_ushort { char p[0x3838]; unsigned short v; };
struct o383E_short { char p[0x383E]; short v; };
struct o383E_ushort { char p[0x383E]; unsigned short v; };
struct o3840_short { char p[0x3840]; short v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o3842_ushort { char p[0x3842]; unsigned short v; };
struct o3844_ushort { char p[0x3844]; unsigned short v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c042fe0(void);
int FUN_0c043064(void);
int FUN_0c059df2(int, int);
int FUN_0c064f80(int);
void FUN_0c068170(void);
void FUN_0c068174(void);
void FUN_0c068178(void);
int FUN_0c06817c(int);
int FUN_0c07ca6a(int);
int FUN_0c07d4b4(int);
int FUN_0c07d536(int);
int FUN_0c07dd18(int);
int FUN_0c07e44c(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0c32ec(int);
int FUN_0c15e078(int);

#define C(o)    (*(signed char *)(a4 + (o)))
#define U(o)    (*(unsigned char *)(a4 + (o)))
#define S(o)    (*(short *)(a4 + (o)))
#define I(o)    (*(int *)(a4 + (o)))
#define F(o)    (*(float *)(a4 + (o)))
#define P(o)    (*(char **)(a4 + (o)))
#define G8(a)   (*(signed char *)(a))
/* manual: one fighter's per-frame update; 900 cases, 641 of 641 instructions */
void FUN_0c068230(char *a4)
{
    char *p, *end;
    int n, k;
    struct mv3 { int w[3]; };

    n = C(2);
    if (n == 12 || n == 13)
        return;
    U(0x3717) = 99;
    if (C(0x3756)) {
        C(0x3756)--;
        U(0xA8) = (C(0x3756) & 3) != 0;
    } else
        U(0xA8) = 1;
    if (FUN_0c042fe0() && S(0x3840) != 9999 && G8(0x0C542A0D) && G8(0x0C542235) >= 2 && C(0x371D) != 4 && C(0x3715) != 23) {
        if (--S(0x3840) <= 0) {
            S(0x3840) = 0;
            if (C(0x3715) != 41) {
                n = 41;
                goto request;
            }
        }
    }
    if (FUN_0c07d4b4((int)a4)) {
        n = 22;
        goto request;
    }
    FUN_0c07e44c((int)a4);
    FUN_0c0c32ec((int)a4);
    if (C(0x14) == 0 && C(0x3715) != 22 && (FUN_0c042fe0() || FUN_0c043064())) {
        if ((FUN_0c07dd18((int)a4) || !C(0x371C)) && !C(0x371C) && C(0x374D) >= 3 && C(0x3715) != 25 && C(0x3715) != 23 && F(0x160) != 0.0f) {
            n = 25;
        request:
            FUN_0c085cac((int)a4, n, 0);
            return;
        }
    }
    C(0x3721) = 0;
    S(0x3832) = 0;
    p = P(0x376C);
    if (p && (n = (signed char)p[0x41D], n == 4 || n == 5 || n == 7)) {
        C(0x3721) = P(0x376C)[0x41C];
        S(0x3832) = *(short *)(P(0x376C) + 36);
    }
    if (C(0x14) != 3) {
        p = P(0x3770);
        if (p && p[0x14] == 3) {
            if (C(0x371D) == 1) {
                P(0x376C) = P(0x3770);
                C(0x3721) = 0xC0;
            }
        } else if (C(0x371D) == 1) {
            C(0x371D) = 0;
            if (C(0x14) != 1)
                FUN_0c085d0c((int)a4);
        }
    }
    if (S(0x381E))
        S(0x381E)--;
    if (S(0x3820))
        S(0x3820)--;
    if (C(0x14) != 1) {
        if (S(0x3838) == 0) {
            F(0x37BC) += 0.416666657f;
            if (F(0x37BC) > ((float *)0x0C25AFA8)[C(2)])
                F(0x37BC) = ((float *)0x0C25AFA8)[C(2)];
        } else
            S(0x3838)--;
    }
    if (S(0x383E)) {
        C(0x3743) = C(0x3757);
        S(0x382A) = 2;
        if (--S(0x383E) == 0) {
            C(0x3743) = 0;
            S(0x382A) = 0;
        }
    } else
        C(0x3757) = 0;
    FUN_0c07d536((int)a4);
    if (C(0x371C)) {
        if (FUN_0c042fe0() && C(0x371D) != 4) {
            if ((F(0x37B8) > 0.0f && C(0x374D) >= 3) || C(0x14) || (n = C(0x3715), n == 7 || n == 26 || n == 23 || n == 25)) {
                if (F(0x37B8) > 0.0f && G8(0x0C542235) >= 2 && (G8(0x0C542A0A) || G8(0x0C5429B4) == 2)) {
                    F(0x37B8) -= 0.055555556f;
                    if (0.0f > F(0x37B8))
                        F(0x37B8) = 0.0f;
                }
            } else {
                FUN_0c06817c((int)a4);
                FUN_0c059df2(C(1), 19);
                return;
            }
        }
    } else if (C(0x374D) < 2)
        goto entries;
    if (C(0xA8) && FUN_0c042fe0() && (*(unsigned int *)0x0C542260 + C(1)) % 20 == 0)
        FUN_0c15e078(C(1));
entries:
    end = a4 + 0x389C + 0x30;
    for (p = a4 + 0x389C; p < end; p += 8) {
        if (p[0] && --*(short *)(p + 4) <= 0) {
            p[0] = 0;
            *(short *)(p + 6) = 0;
            *(short *)(p + 4) = 0;
            *(short *)(p + 2) = 0;
        }
    }
    p = a4 + 0x389C + 8;
    F(0x37A8) = 1.0f;
    if ((unsigned char)p[0] == 36 && *(short *)(p + 4))
        F(0x37A8) = 2.0f;
    if (!FUN_0c064f80((int)a4) && FUN_0c07ca6a((int)a4) && !(F(0x37C0) > F(0x2C))) {
        F(0x37C0) = F(0x2C);
        S(0x3842) = (int)F(0x28);
        S(0x3844) = (int)F(0x30);
    }
    *(struct mv3 *)(a4 + 0x3800) = *(struct mv3 *)(a4 + 0x28);
    S(0x12A) = -1;
    S(0x12C) = -1;
    S(0x12E) = -1;
    C(0x372B) = 0;
    I(0xA4) = 0;
    C(0x3759) = 0;
    S(0xAC) &= 0xFBFF;
    C(0x375D) = 0;
    ((void (*)(char *))*(int *)(0x0C258F9C + C(2) * 4))(a4);
    k = C(0x14);
    if (k == 0) {
        if (C(0x3752) && C(0x3715) != 26 && FUN_0c042fe0())
            return;
        ((void (*)(char *))*(int *)(0x0C258FDC + C(0x3715) * 4))(a4);
    } else if (k == 1)
        FUN_0c068170();
    else if (k == 2)
        FUN_0c068174();
    else if (k == 3)
        FUN_0c068178();
}
