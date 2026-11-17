/* game/player: functions 0C069A04-0C06A230, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c07d838(int, int, int, int, int, int);
int FUN_0c07d9dc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
extern int FUN_0c085cac();
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c069a04(int a4, int a5, int a6, int a7);
void FUN_0c069b5c(void);
void FUN_0c069bbc(void);
void FUN_0c069bc0(void);
void FUN_0c069bc4(void);
int FUN_0c069da2(int a4);
int FUN_0c06a0f0(int a4, int a5, int a6, int a7);

int FUN_0c069a04(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t2 = FUN_0c07ebe6(a4);
        if (t2 != 0) {
            (((struct o3717_uchar *)(a4))->v) = 0x5;
            (((struct o3718_uchar *)(a4))->v) = 0x6;
            return ((int (*)(int, int, int))(FUN_0c085cac))(a4, 0x5, 0x6);
        }
        return t2;
    }
    if ((*(signed char *)((a4 + 0x371D))) == 2) {
        (((struct o3717_uchar *)(a4))->v) = 0x0;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return ((int (*)(int, int, int, int))(FUN_0c085cac))(a4, 0x0, 0x0, a7);
    }
    t4 = FUN_0c07f18c(a4);
    if (t4 != 0) {
        t5 = FUN_0c07fea4(a4, 0x0);
        if (t5 == 0) {
            t6 = FUN_0c07d838(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            if (t6 != 0) {
                return FUN_0c07d9dc(a4);
            }
            return t6;
        }
        return t5;
    }
    t7 = FUN_0c07d838(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    if (t7 != 0) {
        return FUN_0c07d9dc(a4);
    }
    return t7;
}

void FUN_0c069b5c(void)
{
    
}

void FUN_0c069bbc(void)
{
    
}

void FUN_0c069bc0(void)
{
    
}

void FUN_0c069bc4(void)
{
    
}

int FUN_0c069da2(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t1 = FUN_0c07ebd0(a4);
    if ((t1 == 0) && (t0 = *(short *)((a4 + 0x1E)), t0 == 0)) {
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3E, 0xFFFFFFFF, 0x4, 0x3E);
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
            (((struct o17_uchar *)(a4))->v) = 0x2;
            t0 = 0x1;
        } else {
            if ((*(short *)((a4 + 0x1E))) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            }
            t0 = 0x0;
        }
        t1 = t0;
    } else {
        if ((*(short *)((a4 + 0x1E))) == 0) {
            t0 = *(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)));
            t2 = FUN_0c07eaf4(a4);
            t3 = *(int *)((a4 + 0x38));
            t4 = (unsigned short)((unsigned short)(t0 + t2) - t3);
            if ((0x8000 & (unsigned short)((unsigned short)(t0 + t2) - t3)) != 0) {
                t4 = ((unsigned short)((unsigned short)(t0 + t2) - t3) | 0xFFFF0000);
            }
            if ((int)t4 <= (int)0xFFFFFA50) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x5B0);
            } else {
                if ((int)t4 >= (int)0x5B0) {
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x5B0);
                } else {
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)t4 + (unsigned int)0x0)) + ((((int)0x0 > (int)t4)) ? 1u : 0u))) >> 1));
                }
            }
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) & 0xFFFF);
        }
        t0 = *(int *)((a4 + 0x38));
        u0 = 8.0f;
        if ((*(signed char *)((a4 + 0x17))) == 0) {
            u0 = 12.0f;
        }
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(t0)) * u0);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
        (((struct o20_ushort *)(a4))->v) = 0x4;
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        }
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c06a0f0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC06A0D0))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC069EEC))(a4, a5, a6, a7);
}
