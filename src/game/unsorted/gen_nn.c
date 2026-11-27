/* Straight-line functions with calls and guards (batch gen_nn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c0657d4(int, int);
int FUN_0c0659d6(int, int, int);
int FUN_0c12cb8c(int, int);
int FUN_0c12d748(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
void FUN_0c12c8d0(int a4, int a5, int a6, int a7);

#define I(o) (*(int *)(p + (o)))
#define S(o) (*(short *)(p + (o)))
#define F(o) (*(float *)(p + (o)))
#define ANG(o) (0x14000 - I(o))
/* manual: object task (state p[0x14] 0/1, sub p[0x15]): fly along the angles at +0x34/+0x38 and spawn pieces; 234 cases, 304 of 304 instructions */
void FUN_0c12c8d0(int a4, int a5, int a6, int a7)
{
    char *p = (char *)a4;
    int s = p[0x14];
    int obj = I(0x10);
    int kind, i;
    float u;
    if (s != 0 && s != 1) {
        FUN_0c03f346(a4, a5, a6, a7);
        return;
    }
    if (p[0x15] == 1) {
        FUN_0c059e60(obj, 0x22);
        p[0x14] = 10;
        return;
    }
    if (p[0x15] != 0)
        return;
    if (s == 0)
        I(0x34) = (unsigned short)(I(0x34) + 0xB6);
    u = math_cos_angle16(ANG(0x38));
    u *= math_sin_angle16(ANG(0x34));
    F(0x4C) = u * 40.0f;
    u = math_sin_angle16(ANG(0x38));
    u *= math_sin_angle16(ANG(0x34));
    F(0x54) = u * 40.0f;
    F(0x50) = -(math_cos_angle16(ANG(0x34)) * 40.0f);
    if (s == 0) {
        F(0x28) += F(0x4C);
        F(0x30) += F(0x54);
        F(0x2C) += F(0x50);
    } else {
        math_vec3_accumulate(a4 + 0x28, a4 + 0x4C);
    }
    if ((S(0x1C) & 3) == 0)
        FUN_0c12d748(a4, 0);
    if (S(0x1E) != 0)
        S(0x1E)--;
    else
        S(0x12E) = 0xF0;
    kind = 0;
    if ((short)--S(0x1C) != 0 && !FUN_0c0657d4(a4, 0x30)) {
        if (!FUN_0c0659d6(a4, 0, 0x63))
            return;
        kind = 2;
    }
    for (i = 10; i != 0; i--)
        FUN_0c12cb8c(a4, kind);
    p[0x15]++;
}
