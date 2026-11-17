/* game/effect: functions 0C06B908-0C06BA68, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
int FUN_0c06a444(int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07f18c(int);
int FUN_0c085cac(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c06b908(int a4, int a5, int a6, int a7);
int FUN_0c06b97c(int a4);

int FUN_0c06b908(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t3 = (((struct o376C_int *)(a4))->v);
    if (((t3 != 0) && (t0 = *(signed char *)((t3 + 0x41C)), t1 = *(signed char *)((a4 + 0x3721)), t0 == t1)) || (t2 = *(signed char *)((a4 + 0x15)), t2 == 2)) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC06B8BC))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06B5C0))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06B484))(a4, a5, a6, a7);
    }
    FUN_0c06a444(a4);
    (((struct o3717_uchar *)(a4))->v) = 0x40;
    (((struct o3718_uchar *)(a4))->v) = 0x0;
    return FUN_0c085cac(a4, 0x40, 0x0);
}

int FUN_0c06b97c(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    t0 = FUN_0c07ebe6(a4);
    if (t0 != 0) {
        t0 = FUN_0c07ebd0(a4);
        if (t0 != 0) {
            (((struct o3850_uint *)(a4))->v) = (unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
        } else {
            (((struct o3850_uint *)(a4))->v) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        }
        u0 = *(float *)0xC06BAF0;
        u1 = ((((struct o28_float *)(a4))->v));
        u1 = u1 + u0 * (math_sin_angle16(((((struct o3850_int *)(a4))->v))));
        (((struct o28_float *)(a4))->v) = u1;
        u1 = ((((struct o30_float *)(a4))->v));
        u1 = u1 + u0 * (math_cos_angle16(((((struct o3850_int *)(a4))->v))));
        (((struct o30_float *)(a4))->v) = u1;
        (((struct o3717_uchar *)(a4))->v) = 0x5;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0x5, 0x0);
    }
    t0 = FUN_0c07f18c(a4);
    if (t0 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x7;
        (((struct o3718_uchar *)(a4))->v) = 0xC;
        return FUN_0c085cac(a4, 0x7, 0xC);
    }
    return t0;
}
