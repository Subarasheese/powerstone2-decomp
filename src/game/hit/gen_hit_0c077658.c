/* game/hit: functions 0C077658-0C077778, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3744_uchar { char p[0x3744]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3774_int { char p[0x3774]; int v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o384C_int { char p[0x384C]; int v; };
struct o384C_uint { char p[0x384C]; unsigned int v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038980(int);
int FUN_0c07d2c4(int, int);
int math_angle_between_points_xz(int, int);
int FUN_0c0847dc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c077658(int a4);

int FUN_0c077658(int a4)
{
    register int t0;
    register int t1;
    float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        u1 = (((struct o50_float *)(a4))->v);
        u2 = (((struct o2C_float *)(a4))->v);
        (((struct o2C_float *)(a4))->v) = (u2 + u1);
        if ((1000.0f > (u2 + u1)) && (u0 = (((struct o5C_float *)(a4))->v), 0.0f > u0)) {
            u0 = ((((struct o5C_float *)(a4))->v));
            u0 *= -1.0f;
            (((struct o5C_float *)(a4))->v) = u0;
        }
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        FUN_0c037bf6(a4);
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((((struct o3850_short *)(a4))->v)));
        (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) + ((((struct o384C_int *)(a4))->v)));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) != 0) {
            t0 = FUN_0c07d2c4(a4, (0x3744 + a4));
            if (t0 == 0) {
                return FUN_0c085cac(a4, 0x10, 0x5);
            }
            return t0;
        }
        return FUN_0c085cac(a4, 0x10, 0x5);
    }
    t0 = math_angle_between_points_xz((((((struct o3774_int *)(a4))->v)) + 0x28), (a4 + 0x28));
    t1 = *(int *)((((((struct o3774_int *)(a4))->v)) + 0x38));
    (((struct o3850_uint *)(a4))->v) = 0xAAA;
    (((struct o384C_uint *)(a4))->v) = 0xFFFFFFDA;
    if (((unsigned short)(t0 - t1) & 0x8000) != 0) {
        (((struct o3850_uint *)(a4))->v) = (-((((struct o3850_int *)(a4))->v)));
        (((struct o384C_uint *)(a4))->v) = (-((((struct o384C_int *)(a4))->v)));
    }
    FUN_0c0847dc(a4);
    FUN_0c038980(a4);
    (((struct o2C_float *)(a4))->v) = 1000.0f;
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x3C;
    (((struct o3744_uchar *)(a4))->v) = 0x3;
    (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
    (((struct o5C_float *)(a4))->v) = -0.109999999f;
    *(unsigned short *)((a4 + 0x1C)) = 0x46;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}
