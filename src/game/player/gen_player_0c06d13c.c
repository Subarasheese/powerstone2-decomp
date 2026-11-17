/* game/player: functions 0C06D13C-0C06E974, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3735_uchar { char p[0x3735]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3794_float { char p[0x3794]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int, int);
int FUN_0c059fae(int, int, int);
int FUN_0c06d540(int);
int FUN_0c06d570(int, int, int, int);
int FUN_0c06d78c(int);
int FUN_0c06d850(int);
int FUN_0c06d950(int);
int FUN_0c06e6f2(int);
int FUN_0c07d6cc(int);
int FUN_0c07e2c4(int a4);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c06d13c(int a4, int a5);
int FUN_0c06d6fe(int a4);
int FUN_0c06d880(int a4);
int FUN_0c06d980(int a4, int a5, int a6, int a7);
int FUN_0c06dab8(int a4, int a5, int a6, int a7);
int FUN_0c06dadc(int a4, int a5, int a6, int a7);
int FUN_0c06daec(int a4, int a5, int a6, int a7);
int FUN_0c06dc28(int a4, int a5, int a6, int a7);
int FUN_0c06e5e4(int a4, int a5, int a6, int a7);
int FUN_0c06e718(int a4);
int FUN_0c06e7e4(int a4);
int FUN_0c06e958(int a4, int a5, int a6, int a7);

int FUN_0c06d13c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = a5;
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x10) {
        t1 = *(int *)((a4 + 0x38));
        t2 = FUN_0c07d6cc(a4);
        t3 = (unsigned short)(t1 - t2);
        if ((0x8000 & (unsigned short)(t1 - t2)) != 0) {
            t3 = ((unsigned short)(t1 - t2) | 0xFFFF0000);
        }
        if (((int)t3 <= (int)0xFFFFF8E4) || ((int)t3 >= (int)0x71C)) {
            if ((int)t3 < 0) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
            } else {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x71C);
            }
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) & 0xFFFF);
            t1 = 0x71C;
        }
        t0 = t1;
    }
    if ((*(short *)((a4 + 0x1E))) == 0) {
        t1 = FUN_0c037bf6(a4, t0);
        t2 = (unsigned char)t1;
        if ((unsigned char)t1 != 0) {
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x0, 0x0, (t1), 0x0, 0x0);
            t1 = (((struct o118_int *)(a4))->v);
            t3 = *(short *)((a4 + 0x1C));
            (((struct o98_float *)(t1))->v) = (float)(signed char)t3;
            (((struct o94_float *)(t1))->v) = (float)(signed char)t3;
            t1 = (((struct o11C_int *)(a4))->v);
            t3 = *(short *)((a4 + 0x1C));
            (((struct o98_float *)(t1))->v) = (float)(signed char)t3;
            (((struct o94_float *)(t1))->v) = (float)(signed char)t3;
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            t2 = 0x1;
        }
        return t2;
    }
    return FUN_0c037bf6(a4, t0);
}

int FUN_0c06d6fe(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if (!(15.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t0 = *(short *)((a4 + 0x1E)), t0 == 0)) {
        *(volatile signed char *)((a4 + 0x135));
        FUN_0c059fae((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))), 0x0);
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    } else {
        t0 = 0x8C;
        if (!(46.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            t2 = *(short *)((a4 + 0x1E));
            t0 = t2;
            if (t2 == 1) {
                *(volatile signed char *)((a4 + 0x135));
                FUN_0c059fae((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))), 0x1);
                t2 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t2 + 0x1);
                t0 = (t2 + 0x1);
            }
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c06d880(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    t0 = FUN_0c07ebd0(a4);
    u0 = (1.0f + 1.0f);
    if (t0 != 0) {
        u0 = 4.0f;
    }
    if (((*(short *)((a4 + 0x1C))) & 2) != 0) {
        u1 = ((((struct o3790_float *)(a4))->v));
        u1 = u1 + u0 * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        (((struct o28_float *)(a4))->v) = u1;
        u1 = ((((struct o3794_float *)(a4))->v));
        u1 = u1 + u0 * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        (((struct o30_float *)(a4))->v) = u1;
    } else {
        (((struct o28_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * u0)));
        (((struct o30_float *)(a4))->v) = (((((struct o3794_float *)(a4))->v)) - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0)));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)((t0 - 1) + 0x1) <= 0) {
        (((struct o382A_ushort *)(a4))->v) = 0x0;
        return FUN_0c085d0c(a4);
    }
    return (short)((t0 - 1) + 0x1);
}

int FUN_0c06d980(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x3741));
    if ((t0 != 0) && (t0 != 4)) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 5)) {
                switch (t0) {
                case 3:
                    FUN_0c06d850(a4);
                    break;
                case 6:
                    FUN_0c06d880(a4);
                    break;
                case 7:
                    FUN_0c06d950(a4);
                    break;
                }
            } else {
                FUN_0c06d78c(a4);
            }
        } else {
            FUN_0c06d570(a4, a5, a6, a7);
        }
    } else {
        FUN_0c06d540(a4);
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 == 2) {
                (((struct o3717_uchar *)(a4))->v) = 0x6;
                (((struct o3718_uchar *)(a4))->v) = 0x1;
                return FUN_0c085cac(a4, 0x6, 0x1);
            }
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = (*(float *)0xC06DB08);
        }
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    return 0x50;
}

int FUN_0c06dab8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC06DA92))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06DA8C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06DA66))(a4, a5, a6, a7);
}

int FUN_0c06dadc(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC25918C + ((*(signed char *)((a4 + 0x2))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c06daec(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC2591CC + ((*(signed char *)((a4 + 0x2))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c06dc28(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o374A_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC06DB90))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06DB1C))(a4, a5, a6, a7);
}

int FUN_0c06e5e4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = FUN_0c07e2c4(a4);
    if (t0 == 0) {
        (((struct o3735_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x3735))) + 0x1);
        t3 = *(int *)((0xC25924C + ((*(signed char *)((a4 + 0x2))) << 2)));
        return ((int (*)(int, int, int, int))(t3))(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c06e718(int a4)
{
    register int t0;
    register int t4;
    register int t5;

    t0 = 0x0;
    for (;;) {
        if ((int)(*(short *)((((((signed char)t0 << 2) << 2) + 0xC1C5B7C) + 0x0))) > (int)(*(short *)((a4 + 0x1C)))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    t4 = *(short *)((a4 + 0x1C));
    t5 = *(short *)((((((signed char)t0 << 2) << 2) + 0xC1C5B7C) + 0x0));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((((((struct o4_float *)(((((signed char)t0 << 2) << 2) + 0xC1C5B7C)))->v)) * ((((struct o378C_float *)(a4))->v)))) - ((((struct o40_float *)(a4))->v))) / (float)(t5 - t4)));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((((((struct o8_float *)(((((signed char)t0 << 2) << 2) + 0xC1C5B7C)))->v)) * ((((struct o378C_float *)(a4))->v)))) - ((((struct o44_float *)(a4))->v))) / (float)(t5 - t4)));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((((((struct oC_float *)(((((signed char)t0 << 2) << 2) + 0xC1C5B7C)))->v)) * ((((struct o378C_float *)(a4))->v)))) - ((((struct o48_float *)(a4))->v))) / (float)(t5 - t4)));
    return 0x48;
}

int FUN_0c06e7e4(int a4)
{
    register int t0;
    register int t1;

    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3F, 0xFFFFFFFF, 0x4, 0x3F);
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
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o40_float *)(a4))->v) = (((((struct o0_float *)0xC1C5B80)->v)) * ((((struct o378C_float *)(a4))->v)));
    (((struct o44_float *)(a4))->v) = (((((struct o4_float *)0xC1C5B80)->v)) * ((((struct o378C_float *)(a4))->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o8_float *)0xC1C5B80)->v)) * ((((struct o378C_float *)(a4))->v)));
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c06e958(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC06E90C))(a4, a5, a6, a7);
    }
    return FUN_0c06e6f2(a4);
}
