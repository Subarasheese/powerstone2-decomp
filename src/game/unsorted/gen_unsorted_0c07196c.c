/* game/unsorted: functions 0C07196C-0C071C68, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o131_uchar { char p[0x131]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o3790_float { char p[0x3790]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05aaf6(int);
int FUN_0c064f80(int);
int FUN_0c07d1fc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f56a(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c07196c(int a4);
int FUN_0c071aa8(int a4);
int FUN_0c071ae4(int a4);
float FUN_0c071b00(int a4);

int FUN_0c07196c(int a4)
{
    register int t0;

    FUN_0c037bf6(a4);
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            (((struct o131_uchar *)(a4))->v) = 0x0;
            t0 = FUN_0c07f56a(a4);
            if (t0 != 0) {
                (((struct o372A_uchar *)(a4))->v) = (t0 - 1);
                if ((*(signed char *)((a4 + 0x2))) != 6) {
                    (((struct o3728_uchar *)(a4))->v) = 0x0;
                } else {
                    (((struct o3728_uchar *)(a4))->v) = 0x1;
                }
                FUN_0c085cac(a4, 0x21, 0x0);
                t0 = *(signed char *)((a4 + 0x1));
                if ((*(signed char *)((0xC535BB8 + ((short)t0 * (short)0x3938)))) == 0) {
                    return FUN_0c05aaf6((0xB3 + (*(signed char *)((a4 + 0x1)))));
                }
                return ((short)t0 * (short)0x3938);
            }
        }
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if ((*(signed char *)((a4 + 0x2))) == 5) {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                return 0x15;
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c071aa8(int a4)
{
    register int t2;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t2 = FUN_0c037bf6(a4);
    if ((unsigned char)t2 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c071ae4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c071aa8(a4);
    }
    return FUN_0c07196c(a4);
}

float FUN_0c071b00(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xC3, 0xFFFFFFFF, 0x3, 0xC3);
        t0 = *(signed char *)((a4 + 0x2));
        t1 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o3790_float *)(a4))->v) = ((((struct o40_float *)(((((((t1 << 1) + t1) << 2) << 2) << 1) + (0xC259E54 + (((((t0 << 1) + t0) << 2) << 2) << 2)))))->v));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
        u0 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u1 = (((struct o3790_float *)(a4))->v);
        (((struct o54_float *)(a4))->v) = (u0 * u1);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 30.0f;
        (((struct o5C_float *)(a4))->v) = -1.79999995f;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        u2 = (u0 * u1);
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xC4, 0xFFFFFFFF, 0x3, 0xC4);
        t0 = *(signed char *)((a4 + 0x2));
        t1 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o3790_float *)(a4))->v) = ((((struct o40_float *)(((((((t1 << 1) + t1) << 2) << 2) << 1) + (0xC259E54 + (((((t0 << 1) + t0) << 2) << 2) << 2)))))->v));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
        u0 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u1 = (((struct o3790_float *)(a4))->v);
        (((struct o54_float *)(a4))->v) = (u0 * u1);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 30.0f;
        (((struct o5C_float *)(a4))->v) = -1.79999995f;
        (((struct o15_uchar *)(a4))->v) = 0x1;
        u2 = (u0 * u1);
    }
    (((struct o131_uchar *)(a4))->v) = 0x0;
    return u2;
}
