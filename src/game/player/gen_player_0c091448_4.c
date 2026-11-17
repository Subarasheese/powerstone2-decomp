/* game/player: functions 0C091448-0C091EB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o168_float { char p[0x168]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3770_int { char p[0x3770]; int v; };
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
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07db58(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
extern int FUN_0c085cac();
extern int FUN_0c085d0c();
int math_vec3_accumulate(int, int);
int FUN_0c091bd0(int a4, int a5, int a6, int a7);

int FUN_0c091bd0(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t1 = *(signed char *)((a4 + 0x18));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 == 4) {
                        t2 = FUN_0c037bf6(a4);
                        if ((unsigned char)t2 != 0) {
                            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                        }
                        FUN_0c038362(a4);
                        t2 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
                        if (t2 != 2) {
                            return ((int (*)(int, int, int))(FUN_0c085cac))(a4, 0xE, 0x1);
                        }
                        return t2;
                    }
                    if (t1 == 5) {
                        t1 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
                        if (t1 != 2) {
                            return ((int (*)(int, int, int, int))(FUN_0c085cac))(a4, 0xE, 0x1, a7);
                        }
                        return t1;
                    }
                    t1 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
                    if (t1 != 2) {
                        return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
                    }
                    return t1;
                }
                FUN_0c037bf6(a4);
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
                if ((t1 == 0) && (t0 = (((struct o3770_int *)(a4))->v), u0 = (((struct o168_float *)(t0))->v), u1 = (((struct o2C_float *)(a4))->v), !(u0 > u1))) {
                } else {
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x34, 0xFFFFFFFF, 0x4, 0x34);
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
                    FUN_0c07db58(a4, t1, t0);
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                }
                t0 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
                if (t0 != 2) {
                    return ((int (*)(int))(FUN_0c085d0c))(a4);
                }
                return t0;
            }
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            if (((((struct o20_short *)(a4))->v)) == 0) {
                (((struct o50_float *)(a4))->v) = -30.0f;
                (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            }
            t0 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
            if (t0 != 2) {
                return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
            }
            return t0;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        FUN_0c037bf6(a4);
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) < (int)0x1A) {
        } else {
            (((struct o50_float *)(a4))->v) = -30.0f;
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x2;
        }
        t0 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
        if (t0 != 2) {
            return ((int (*)(int))(FUN_0c085d0c))(a4);
        }
        return t0;
    }
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 14.0f;
    (((struct o5C_float *)(a4))->v) = -1.0f;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
    t0 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
    if (t0 != 2) {
        return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
    }
    return t0;
}
