/* game/player: functions 0C08E980-0C08FA98, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
extern int FUN_0c037bf6();
int FUN_0c059df2(int, int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07075c(int);
int FUN_0c070980(int);
int FUN_0c071774(int);
int FUN_0c071ae4(int);
int FUN_0c07262e(int);
int FUN_0c072c34(int);
int FUN_0c07309e(int);
int FUN_0c07ce58(int, int, float);
int math_angle_between_points_xz(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c085204(int, float);
int FUN_0c08e1c4(int);
int FUN_0c08e226(int);
int FUN_0c08e560(int);
int FUN_0c08e590(int);
int FUN_0c08e634(int);
int FUN_0c08e6f6(int);
int FUN_0c08e756(int);
int FUN_0c08e930(int);
int FUN_0c08e94c(int);
int FUN_0c08eb60(int);
int FUN_0c08f780(int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c08e980(int a4, int a5, int a6);
int FUN_0c08eba8(int a4);
int FUN_0c08efd2(int a4);
int FUN_0c08f36c(int a4);
int FUN_0c08f74a(int a4);
int FUN_0c08f920(int a4);
int FUN_0c08fa24(int a4, int a5, int a6, int a7);

int FUN_0c08e980(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x10, (t0), 0x2, 0x10);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x18), 1.0f);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c0819c2(a4, 0x4000);
        FUN_0c07043c(a4, 35.0f, -3.5f, 500.0f, 100.0f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c08eba8(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x3, (t0), 0x2, 0x3);
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
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC08ECE4)->v));
    (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC08ECE4)->v));
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c08efd2(int a4)
{
    register int t1;

    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x40);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t1, 0x2, 0x9, (t1), 0x2, 0x9);
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    return FUN_0c085204(a4, 0.100000001f);
}

int FUN_0c08f36c(int a4)
{
    register int t4;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        return FUN_0c07262e(a4);
    }
    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t4 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if (t4 != 0) {
            *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28)));
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v));
        }
    }
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x40);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    (((struct o3850_uint *)(a4))->v) = (FUN_0c07d774(a4));
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x1E, 0xFFFFFFFF, 0x2, 0x1E);
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    return 0x0;
}

int FUN_0c08f74a(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x1F, (t0), 0x1, 0x1F);
    (((struct o447_uchar *)(a4))->v) = 0x2;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}

int FUN_0c08f920(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3732));
    if ((unsigned int)t0 < (unsigned int)0xF) {
        switch ((t0 << 1)) {
            case 0:
            case 2:
            case 20:
            case 22:
            {
                FUN_0c08e1c4(a4);
            }
                break;
            case 4:
            {
                FUN_0c08e634(a4);
            }
                break;
            case 6:
            {
                FUN_0c08e560(a4);
            }
                break;
            case 8:
            {
                FUN_0c07075c(a4);
            }
                break;
            case 10:
            {
                FUN_0c08eba8(a4);
            }
                break;
            case 12:
            {
                FUN_0c08f74a(a4);
            }
                break;
            case 14:
            {
                FUN_0c08e756(a4);
            }
                break;
            case 16:
            {
                FUN_0c08e94c(a4);
            }
                break;
            case 18:
            {
                FUN_0c071774(a4);
            }
                break;
            case 24:
            {
                FUN_0c08efd2(a4);
            }
                break;
            case 26:
            {
                FUN_0c08f36c(a4);
            }
                break;
            default:
            {
                FUN_0c072c34(a4);
            }
                break;
        }
    } else {
        FUN_0c08e1c4(a4);
    }
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
    return 0x94;
}

int FUN_0c08fa24(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3732));
    if ((unsigned int)t0 < (unsigned int)0xF) {
        switch ((t0 << 1)) {
            case 0:
            case 2:
            case 20:
            case 22:
            {
                return FUN_0c08e226(a4);
            }
            case 4:
            {
                return FUN_0c08e6f6(a4);
            }
            case 6:
            {
                return FUN_0c08e590(a4);
            }
            case 8:
            {
                return FUN_0c070980(a4);
            }
            case 10:
            {
                return ((int (*)(int, int, int, int))(0xC08EFA6))(a4, a5, a6, a7);
            }
            case 12:
            {
                return FUN_0c08f780(a4);
            }
            case 14:
            {
                return FUN_0c08e930(a4);
            }
            case 16:
            {
                return FUN_0c08eb60(a4);
            }
            case 18:
            {
                return FUN_0c071ae4(a4);
            }
            case 24:
            {
                return ((int (*)(int, int, int, int))(0xC08F31C))(a4, a5, a6, a7);
            }
            case 26:
            {
                return ((int (*)(int, int, int, int))(0xC08F718))(a4, a5, a6, a7);
            }
            default:
            {
                return FUN_0c07309e(a4);
            }
        }
    }
    return FUN_0c08e226(a4);
}
