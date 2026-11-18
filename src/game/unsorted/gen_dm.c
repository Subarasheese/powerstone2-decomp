/* Straight-line functions with calls and guards (batch gen_dm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o375A_uchar { char p[0x375A]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c07daea(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c09d6a2(int a4, int a5, int a6);
int FUN_0c0a63d4(int a4, int a5, int a6, int a7);
int FUN_0c0a614c(int a4, int a5, int a6, int a7);
int FUN_0c09c95a(int a4, int a5, int a6, int a7);
int FUN_0c09d34c(int a4, int a5, int a6, int a7);
int FUN_0c09da88(int a4, int a5, int a6, int a7);
int FUN_0c09cf94(int a4, int a5, int a6, int a7);
int FUN_0c09d744(int a4, int a5, int a6, int a7);
int FUN_0c09495a(int a4, int a5, int a6, int a7);
int FUN_0c096f94(int a4, int a5, int a6, int a7);
int FUN_0c097960(int a4, int a5, int a6, int a7);
int FUN_0c097b52(int a4, int a5, int a6, int a7);
int FUN_0c097d0e(int a4, int a5, int a6, int a7);

int FUN_0c09d6a2(int a4, int a5, int a6)
{
    int t3;

    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t3 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((0.0f > ((((struct o50_float *)(a4))->v))) && (t3 != 0)) {
        if (t3 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        FUN_0c07daea(a4);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        return 0x17;
    }
    return 0x50;
}

int FUN_0c0a63d4(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))))) != 2) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    FUN_0c037bf6(a4, a5, a6);
    FUN_0c038362(a4);
    (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
    *(unsigned short *)((a4 + 0x1E)) = (*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1)));
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}

int FUN_0c0a614c(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))))) != 2) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    FUN_0c037bf6(a4, a5, a6);
    FUN_0c038362(a4);
    (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
    return 0x3770;
}

int FUN_0c09c95a(int a4, int a5, int a6, int a7)
{
    (((struct o375A_uchar *)(a4))->v) = 0x0;
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c09d34c(int a4, int a5, int a6, int a7)
{
    (((struct o375A_uchar *)(a4))->v) = 0x0;
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c09da88(int a4, int a5, int a6, int a7)
{
    (((struct o375A_uchar *)(a4))->v) = 0x0;
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c09cf94(int a4, int a5, int a6, int a7)
{
    (((struct o375A_uchar *)(a4))->v) = 0x0;
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c09d744(int a4, int a5, int a6, int a7)
{
    (((struct o375A_uchar *)(a4))->v) = 0x0;
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c09495a(int a4, int a5, int a6, int a7)
{
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c096f94(int a4, int a5, int a6, int a7)
{
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c097960(int a4, int a5, int a6, int a7)
{
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c097b52(int a4, int a5, int a6, int a7)
{
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c097d0e(int a4, int a5, int a6, int a7)
{
    return FUN_0c085d0c(a4, a5, a6, a7);
}
