/* Straight-line functions with calls and guards (batch gen_pi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c064ee4(int, int);
int FUN_0c06a406(int);
int FUN_0c06a444(int);
int FUN_0c07bdd0(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c07ebd0(int);
int FUN_0c07f118(int);
int FUN_0c083384(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c0c3010(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c05abb2(int, int);

#define B(o) (*(signed char *)(a4 + (o)))
#define H(o) (*(short *)(a4 + (o)))
#define I(o) (*(int *)(a4 + (o)))
#define F(o) (*(float *)(a4 + (o)))
#define P (*(char **)(a4 + 0x376C))
#define LEFT (*(short *)(P + 0x420))

/* manual: a player's leap/attack state: end it, start the jump (velocities from the angle), or steer, fire shots on timers and orbit the target point; CASECOUNT */
void FUN_0c06a4b4(int a4)
{
    float v[3];
    float r, c;
    int s, d, f;

    B(0x374B) = 1;
    if (FUN_0c07f118(a4)) {
        B(0x3717) = 26;
        B(0x3718) = 0;
        FUN_0c085cac(a4, 26, 0, 0);
        return;
    }
    f = H(0x430);
    if (f & 0x180) goto end_check;
    if (FUN_0c064ee4(a4, 2)) goto end_check;
    if (!H(0x1E) && !LEFT) goto end_check;
    if (P[3] != 4) goto steer;
    if (H(0x20) >= 3) goto end_check;
    if (P[3] != 4) goto steer;
    if (H(0x22) < 300 || H(0x1C)) goto steer;
end_check:
    if (!*(char *)0xC542237 && !*(char *)0xC54223C && P[3] == 1)
        I(0x38) = F(0x28) > 0.0f ? 0x4000 : 0xC000;
    if (P[3] != 4) {
        F(0x50) = 30.0f;
        F(0x5C) = -2.5f;
        r = 5.0f;
    } else {
        F(0x50) = 34.0f;
        F(0x5C) = -2.0f;
        r = 15.0f;
    }
    F(0x4C) = -(math_sin_angle16(I(0x38)) * r);
    F(0x54) = -(math_cos_angle16(I(0x38)) * r);
    F(0x60) = 0.0f;
    F(0x58) = 0.0f;
    B(0x374B) = 1;
    F(0x2C) += 50.0f;
    FUN_0c07e79c(a4, B(1), 0, 8, B(1), 0, 8);
    FUN_0c06a444(a4);
    B(0x3721) = 0;
    B(0x15)++;
    return;

steer:
    s = (signed char)P[3];
    if (s >= 0 && s <= 3) {
        if (FUN_0c07ebd0(a4)) {
            d = *(short *)(0xC5413E8 + B(1) * 0x2F8);
            I(0x3850) = (unsigned short)(FUN_0c07eaf4(a4, 0, 0) + d);
            d = H(0x3850) - I(0x38);
            d = (short)d;
            if (d <= -364) {
                I(0x38) -= 364;
                FUN_0c06a406(a4);
            } else if (d >= 364) {
                I(0x38) += 364;
                FUN_0c06a406(a4);
            } else
                I(0x38) += d / 2;
            if (*(unsigned int *)0xC542260 % 20 == 0) FUN_0c07bdd0(a4, 32);
        } else
            FUN_0c06a444(a4);
    } else if (s == 4)
        I(0x38) = *(int *)(0xC5324D0 + *(signed char *)0xC542363 * 0x3938);

    s = (signed char)P[3];
    if (H(0x1C) && --H(0x1C) == 0) {
        FUN_0c07e79c(a4, -1, 2, 35, -1, 2, 35);
        *(float *)(*(char **)(a4 + 0x118) + 0x98) = 10.0f;
        *(float *)(*(char **)(a4 + 0x118) + 0x94) = 10.0f;
        *(float *)(*(char **)(a4 + 0x11C) + 0x98) = 10.0f;
        *(float *)(*(char **)(a4 + 0x11C) + 0x94) = 10.0f;
    }
    if (H(0x1E))
        H(0x1E)--;
    else if (s == 2 && H(0x20)) {
        if (LEFT) {
            FUN_0c0c3010((int)P, B(1), 0);
            FUN_0c07e79c(a4, -1, 2, 36, -1, 2, 36);
            H(0x1C) = 8;
            H(0x1E) = 5;
            H(0x20)--;
            LEFT--;
        } else
            H(0x20) = 0;
    } else if ((H(0x430) & 0x200) && LEFT) {
        FUN_0c0c3010((int)P, B(1), 0);
        FUN_0c07bdd0(a4, 33);
        FUN_0c07e79c(a4, -1, 2, 36, -1, 2, 36);
        if (s == 4 || s == 2) {
            H(0x1C) = s == 4 ? 80 : 8;
            H(0x1E) = s == 4 ? 120 : 5;
            if (s == 4) H(0x20)++;
            else H(0x20) = 2;
            LEFT--;
            thunk_FUN_0c05abb2(70, a4 + 0x28);
        } else {
            H(0x1C) = 8;
            H(0x1E) = ++H(0x20) >= 3 ? 45 : 10;
            H(0x22) = 30;
        }
    }
    if (s == 4)
        H(0x22)++;
    else if (s != 2 && H(0x22)-- == 0) {
        H(0x20) = 0;
        H(0x22) = 0;
    }
    FUN_0c083384(a4, (int)v);
    r = s == 4 ? 100.0f : 30.0f;
    F(0x28) = v[0] - math_sin_angle16(I(0x38)) * r;
    F(0x30) = v[2] - math_cos_angle16(I(0x38)) * r;
    c = v[1];
    if (s != 4) c += 50.0f;
    F(0x2C) = c;
}
