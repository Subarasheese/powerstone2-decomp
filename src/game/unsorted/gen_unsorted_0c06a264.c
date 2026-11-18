/* game/unsorted: functions 0C06A264-0C06AD74, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o375D_uchar { char p[0x375D]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int thunk_FUN_0c05abb2(int, int);
int FUN_0c059df2(int, int);
int FUN_0c07c5dc(int, int, int);
int math_angle_between_points_xz(int, int);
int FUN_0c07d6cc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c083384(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c160f66(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c06a264(int a4);
int FUN_0c06a406(int a4);
int FUN_0c06a444(int a4);
int FUN_0c06ab78(int a4, int a5, int a6, int a7);
void FUN_0c06abcc(void);
void FUN_0c06abd0(void);
int FUN_0c06abd4(int a4);
int FUN_0c06abf8(int a4, int a5, int a6, int a7);

int FUN_0c06a264(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c083384(a4, (0x37C4 + a4));
    if (!(0.0f > ((((struct o50_float *)(a4))->v)))) {
        t0 = math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4));
        (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t0)) * ((((struct o3790_float *)(a4))->v))));
        (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t0)) * ((((struct o3790_float *)(a4))->v))));
        if ((*(signed char *)((((((struct o376C_int *)(a4))->v)) + 0x3))) == 4) {
            t0 = ((*(int *)((a4 + 0x38))) - (*(int *)((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC5324D0))));
        } else {
            t0 = ((*(int *)((a4 + 0x38))) - (*(int *)((((((struct o376C_int *)(a4))->v)) + 0x38))));
        }
        t1 = *(short *)((a4 + 0x1C));
        t2 = (unsigned short)t0;
        if ((0x8000 & (unsigned short)t0) != 0) {
            t2 = ((unsigned short)t0 | 0xFFFF0000);
        }
        t0 = (int)((int)t2 / (int)t1);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t0);
        t1 = t0;
    } else {
        if (!(((((struct o2C_float *)(a4))->v)) > (((((struct o37C8_float *)(a4))->v)) + 50.0f))) {
            FUN_0c083384(a4, (0x37C4 + a4));
            if ((*(signed char *)((((((struct o376C_int *)(a4))->v)) + 0x3))) == 4) {
                (((struct o28_float *)(a4))->v) = (((((struct o37C4_float *)(a4))->v)) - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * 100.0f)));
                (((struct o30_float *)(a4))->v) = (((((struct o37CC_float *)(a4))->v)) - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * 100.0f)));
                (((struct o2C_float *)(a4))->v) = ((((struct o37C8_float *)(a4))->v));
            } else {
                (((struct o28_float *)(a4))->v) = ((((struct o37C4_float *)(a4))->v));
                (((struct o30_float *)(a4))->v) = ((((struct o37CC_float *)(a4))->v));
                (((struct o2C_float *)(a4))->v) = (((((struct o37C8_float *)(a4))->v)) + 50.0f);
            }
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((struct o376C_int *)(a4))->v)) + 0x38)));
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x23, 0xFFFFFFFF, 0x2, 0x23);
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x5, (*(signed char *)((a4 + 0x1))));
            (((struct o3830_ushort *)(a4))->v) = 0xF0;
            (((struct o374B_uchar *)(a4))->v) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t0 = 0x15;
        } else {
            t2 = math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4));
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t2)) * ((((struct o3790_float *)(a4))->v))));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t2)) * ((((struct o3790_float *)(a4))->v))));
            if ((*(signed char *)((((((struct o376C_int *)(a4))->v)) + 0x3))) == 4) {
                t2 = ((*(int *)((a4 + 0x38))) - (*(int *)((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC5324D0))));
            } else {
                t2 = ((*(int *)((a4 + 0x38))) - (*(int *)((((((struct o376C_int *)(a4))->v)) + 0x38))));
            }
            t3 = *(short *)((a4 + 0x1C));
            t4 = (unsigned short)t2;
            if ((0x8000 & (unsigned short)t2) != 0) {
                t4 = ((unsigned short)t2 | 0xFFFF0000);
            }
            t2 = (int)((int)t4 / (int)t3);
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t2);
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c06a406(int a4)
{
    register int t0;
    register int t1;

    t0 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0xE);
    t1 = t0;
    if (t0 == 0) {
        t0 = 0x4D;
        if ((*(signed char *)0xC542237) == 0) {
            t0 = 0x51;
        }
        thunk_FUN_0c05abb2(t0, (a4 + 0x28));
        (((struct o1B_uchar *)(a4))->v) = 0x1;
        t1 = 0x1B;
    }
    return t1;
}

int FUN_0c06a444(int a4)
{
    register int t3;

    if ((*(signed char *)((a4 + 0x1B))) != 0) {
        t3 = 0x4E;
        if ((*(signed char *)0xC542237) == 0) {
            t3 = 0x52;
        }
        thunk_FUN_0c05abb2(t3, (a4 + 0x28));
        (((struct o1B_uchar *)(a4))->v) = 0x0;
    }
    return 0x1B;
}

int FUN_0c06ab78(int a4, int a5, int a6, int a7)
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
                return ((int (*)(int, int, int, int))(0xC06AAFA))(a4, t3, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06A4B4))(a4, t3, a6, a7);
        }
        return FUN_0c06a264(a4);
    }
    (((struct o3717_uchar *)(a4))->v) = 0x40;
    (((struct o3718_uchar *)(a4))->v) = 0x0;
    return FUN_0c085cac(a4, 0x40, 0x0, a7);
}

void FUN_0c06abcc(void)
{
    
}

void FUN_0c06abd0(void)
{
    
}

int FUN_0c06abd4(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        
        t1 = t0;
    } else {
        t0 = FUN_0c07d6cc(a4);
        *(unsigned int *)((a4 + 0x38)) = t0;
        t1 = t0;
    }
    return t1;
}

