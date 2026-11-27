/* game/player: functions 0C0B141C-0C0B1C4E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
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
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07d086(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c091448(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0b18d8(int a4, int a5, int a6, int a7);
struct o11C_int { char p[0x11C]; int v; };
struct o38_int { char p[0x38]; int v; };


int FUN_0c0b18d8(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    if (((int)(*(signed char *)(a4 + 0x15)) < (int)0x2) && (t0 = (((struct o3770_int *)(a4))->v), t0 == 0)) {
        return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)(a4 + 0x15);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
                    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    if (t1 != 0) {
                        t1 = *(signed char *)(a4 + 0x1);
                        FUN_0c07e79c(a4, t1, 0x2, 0x7, (t1), 0x2, 0x7);
                        (((struct o5C_float *)(a4))->v) = 0.0f;
                        (((struct o60_float *)(a4))->v) = 0.0f;
                        (((struct o58_float *)(a4))->v) = 0.0f;
                        (((struct o50_float *)(a4))->v) = 0.0f;
                        (((struct o54_float *)(a4))->v) = 0.0f;
                        (((struct o4C_float *)(a4))->v) = 0.0f;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                        return 0x15;
                    }
                }
                FUN_0c038362(a4);
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            if (t0 == 3) {
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if ((unsigned char)t1 != 0) {
                    return ((int (*)(int))(FUN_0c085d0c))(a4);
                }
                return FUN_0c038362(a4);
            }
            return t0;
        }
        t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
    } else {
        t0 = *(signed char *)(a4 + 0x1);
        FUN_0c07e79c(a4, t0, 0x2, 0xC, (t0), 0x2, 0xC);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x30, 0xFFFFFFFF, 0x5, 0x30);
        t0 = (((struct o3770_int *)(a4))->v);
        t1 = (((struct o11C_int *)(t0))->v);
        t2 = (((struct o118_int *)(t0))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = (((struct o3770_int *)(a4))->v);
        t1 = (((struct o11C_int *)(t0))->v);
        t2 = (((struct o118_int *)(t0))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o446_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        (((struct o447_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        FUN_0c07d086(a4, 0x0, 100.0f);
        FUN_0c091448(a4, ((((struct o3770_int *)(a4))->v)));
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
        t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
    }
    if (50.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
        return FUN_0c038362(a4);
    }
    t0 = *(signed char *)(a4 + 0x1);
    FUN_0c07e79c(a4, t0, 0x0, 0x8, (t0), 0x0, 0x8);
    (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(((((struct o38_int *)(a4))->v)))) * 5.0f));
    (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(((((struct o38_int *)(a4))->v)))) * 5.0f));
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 30.0f;
    (((struct o5C_float *)(a4))->v) = -2.0f;
    FUN_0c073566(a4, 0x33);
    FUN_0c07363a(a4, 0x34);
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
    return 0x15;
}
