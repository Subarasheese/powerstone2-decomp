/* game/player: functions 0C0854C8-0C085834, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3774_int { char p[0x3774]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059df2(int, int);
int FUN_0c059ef6(int, int);
int FUN_0c059f04(int);
int FUN_0c064f80(int);
int FUN_0c07c4b0(int, int);
int math_angle_between_points_xz(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c15c344(int, int, int);
int math_atan_angle16(float);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int FUN_0c17c450(int);
int FUN_0c0854c8(int a4);
int FUN_0c085650(int a4);

int FUN_0c0854c8(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;

    (((struct o3715_uchar *)(a4))->v) = 0x24;
    t1 = FUN_0c064f80(a4);
    if (t1 == 0) {
        if ((unsigned char)(*(signed char *)((a4 + 0x3721))) == 15) {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x45, 0xFFFFFFFF, 0x3, 0x45);
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD2, 0xFFFFFFFF, 0x3, 0xD2);
        }
    } else {
        if ((unsigned char)(*(signed char *)((a4 + 0x3721))) == 15) {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x47, 0xFFFFFFFF, 0x3, 0x47);
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD4, 0xFFFFFFFF, 0x3, 0xD4);
        }
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / (1.0f + 1.0f));
    }
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    FUN_0c037bf6(a4);
    if (((*(signed char *)((a4 + 0x3716))) != 36) && (t0 = (((struct o3774_int *)(a4))->v), t0 != 0)) {
        *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3774_int *)(a4))->v)) + 0x28)));
    }
    FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x1);
    u0 = (((struct o0_float *)0xC085694)->v);
    (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * u0));
    (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0));
    u0 = (((struct oC_float *)0xC085694)->v);
    (((struct o58_float *)(a4))->v) = ((-((((struct o4C_float *)(a4))->v))) / u0);
    (((struct o60_float *)(a4))->v) = ((-((((struct o54_float *)(a4))->v))) / u0);
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0xF;
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x44);
    if (((((struct o376C_int *)(a4))->v)) != 0) {
        return FUN_0c15c344(((((struct o376C_int *)(a4))->v)), (a4 + 0x28), 0x4);
    }
    return 0x376C;
}

