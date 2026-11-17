/* game/effect: functions 0C0A46D4-0C0A5ABC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a3080(int, int, int, int, float);
int FUN_0c136784(int);
int FUN_0c13691a(int);
int FUN_0c1373e2(int);
int FUN_0c14fc70(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(int);
int FUN_0c0a4b38(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c0a4b38(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                t1 = *(short *)((a4 + 0x1E));
                if (t1 == 0) {
                    u0 = (((struct o2C_float *)(a4))->v);
                    u1 = (((struct o168_float *)(a4))->v);
                    if (!((u1 + 60.0f) > u0)) {
                        if (!(u0 > (u1 + -60.0f))) {
                            *(unsigned short *)((a4 + 0x1E)) = 0xA;
                            (((struct o50_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
                            (((struct o5C_float *)(a4))->v) = ((((((struct o168_float *)(a4))->v)) - ((((struct o2C_float *)(a4))->v))) + 300.0f);
                        }
                    }
                } else {
                    *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
                    if ((int)(short)(t1 - 1) > 0) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((((((struct o5C_float *)(a4))->v)) * (float)((-(*(short *)((a4 + 0x1E)))) + 0xA)) / 10.0f)));
                    }
                }
                FUN_0c0a3080(a4, a5, a6, a7, 7.0f);
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                t1 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t1 + 0x1);
                u0 = ((((struct o2C_float *)(a4))->v));
                u0 = u0 + 5.0f * (math_sin_angle16(((((short)(t1 + 0x1) << 8) << 2) << 1)));
                (((struct o2C_float *)(a4))->v) = u0;
                FUN_0c037bf6(a4);
                FUN_0c136784(a4);
                t1 = *(short *)((a4 + 0x1C));
                t2 = t1;
                if ((int)t1 <= (int)(*(int *)0xC25D354)) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x14);
                    t1 = *(int *)(((0x118 + a4) + 0x4));
                    t3 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t1))->v) = 1.0f;
                    (((struct o9C_float *)(t1))->v) = 1.0f;
                    (((struct oA0_float *)(t3))->v) = 1.0f;
                    (((struct o9C_float *)(t3))->v) = 1.0f;
                    t1 = *(int *)(((0x118 + a4) + 0x4));
                    t3 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t1))->v) = 1.0f;
                    (((struct o98_float *)(t3))->v) = 1.0f;
                    (((struct o94_float *)(t1))->v) = 1.0f;
                    (((struct o94_float *)(t3))->v) = 1.0f;
                    t2 = 0x94;
                }
                return t2;
            }
            if (t0 == 3) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x14);
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
                return 0x94;
            }
            if (t0 == 4) {
                FUN_0c037bf6(a4);
                t1 = 0x8C;
                if (!(33.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o50_float *)(a4))->v) = -13.5f;
                    (((struct o5C_float *)(a4))->v) = -2.0f;
                    t1 = 0x5C;
                }
                return t1;
            }
            if (t0 == 5) {
                FUN_0c037bf6(a4);
                if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
                    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    if (t1 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        FUN_0c0a3058(a4, 0xFFFFFFFF, 0x4, 0x2A);
                        FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
                        return FUN_0c14fc70((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
                    }
                }
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            if (t0 == 6) {
                t1 = FUN_0c037bf6(a4);
                if ((unsigned char)t1 != 0) {
                    return FUN_0c085cac(a4, 0xE, 0x0);
                }
                return (unsigned char)t1;
            }
            return t0;
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        u0 = (((struct o2C_float *)(a4))->v);
        (((struct o2C_float *)(a4))->v) = (((((((((struct o50_float *)(a4))->v)) - u0) * ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) / 53.0f)) + u0);
        FUN_0c037bf6(a4);
        if (53.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
            return 0x8C;
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c07d030(a4, 0x1);
        FUN_0c1373e2((*(signed char *)((a4 + 0x1))));
        FUN_0c13691a((*(signed char *)((a4 + 0x1))));
        return FUN_0c059e60(a4, 0xA);
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x13);
    t0 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    t1 = ((int (*)(int))(FUN_0c187798))(t0);
    if ((((((struct o168_float *)(a4))->v)) + 300.0f) > ((((struct o2C_float *)(a4))->v))) {
        u0 = (((((struct o168_float *)(a4))->v)) + 300.0f);
    } else {
        u0 = ((((struct o2C_float *)(a4))->v));
    }
    (((struct o50_float *)(a4))->v) = u0;
    return (((int (*)(void))(FUN_0c187798))());
}
