/* Straight-line functions with calls and guards (batch gen_ax): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3794_float { char p[0x3794]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o42C_short { char p[0x42C]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
extern int FUN_0c037bf6();
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c06c134(int);
int FUN_0c073fe2(int, int);
int FUN_0c0752a8(int);
int FUN_0c07a6aa(int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c08515a(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c08e382(int);
int FUN_0c1312e2(int);
int FUN_0c150be8(int, int);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c06f0be(int a4, int a5, int a6);
int FUN_0c079324(int a4);
int FUN_0c09f772(int a4, int a5, int a6);
int FUN_0c0787e4(int a4);


int FUN_0c079324(int a4)
{
    int t0;
    register int t1;
    register float u0;

    t1 = FUN_0c0752a8(a4);
    if (t1 != 1) {
        if (t1 != 2) {
            if ((0.0f > ((((struct o50_float *)(a4))->v))) && (t0 = (((struct o22_short *)(a4))->v), t0 == 0)) {
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x29, 0xFFFFFFFF, 0x4, 0x29);
                u0 = *(float *)0xC0794E0;
                t0 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t0))->v) = u0;
                (((struct o94_float *)(t0))->v) = u0;
                t0 = (((struct o11C_int *)(a4))->v);
                (((struct o98_float *)(t0))->v) = u0;
                (((struct o94_float *)(t0))->v) = u0;
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            }
            FUN_0c037bf6(a4);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        return FUN_0c07a6aa(a4);
    }
    FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
    FUN_0c07db58(a4);
    FUN_0c08e382(a4);
    if ((*(signed char *)((a4 + 0x135))) != 2) {
        FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
    }
    (((struct o372C_uchar *)(a4))->v) = 0x0;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2A, 0xFFFFFFFF, 0x4, 0x2A);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}


int FUN_0c0787e4(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o4_float *)((0x3790 + a4)))->v);
    u2 = (((struct o30_float *)(a4))->v);
    u3 = (((struct o3790_float *)(a4))->v);
    u4 = ((u2 - u1) * (u2 - u1));
    u4 = u4 + ((u0 - u3)) * ((u0 - u3));
    u0 = math_signed_sqrt(u4);
    if (u0 > 10.0f) {
        (((struct o3790_float *)(a4))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o3794_float *)(a4))->v) = ((((struct o30_float *)(a4))->v));
    }
    u0 = (1.0f + 1.0f);
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00) != 0) {
        u0 = 4.0f;
    }
    t0 = *(signed char *)((a4 + 0x1));
    u1 = u0;
    if (((*(short *)((a4 + 0x1C))) & 2) != 0) {
        u2 = u0;
        u2 *= -1.0f;
        u1 = u2;
    }
    u0 = math_sin_angle16(((*(int *)((((short)t0 * (short)0x2F8) + 0xC5413E8))) + 0x4000));
    u2 = ((((struct o3790_float *)(a4))->v));
    u2 = u2 + u1 * u0;
    (((struct o28_float *)(a4))->v) = u2;
    u0 = math_cos_angle16(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8))) + 0x4000));
    u2 = ((((struct o3794_float *)(a4))->v));
    u2 = u2 + u1 * u0;
    (((struct o30_float *)(a4))->v) = u2;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c073fe2((((short)(*(signed char *)((a4 + 0x373F))) * (short)0x3938) + 0xC532498), (*(signed char *)((a4 + 0x1))));
    }
    return (short)(t0 - 1);
}
