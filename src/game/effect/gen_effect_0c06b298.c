/* game/effect: functions 0C06B298-0C06B44C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
int math_angle_between_points_xz(int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081ee8(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c11f9c8(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c06b298(int a4, int a5, int a6, int a7);
void FUN_0c06b2ca(void);
void FUN_0c06b2ce(void);
int FUN_0c06b2d2(int a4, int a5, int a6);

int FUN_0c06b298(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o3749_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC06B1DE))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06B028))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06AF1A))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06AEE4))(a4, a5, a6, a7);
}

void FUN_0c06b2ca(void)
{
    
}

void FUN_0c06b2ce(void)
{
    
}

int FUN_0c06b2d2(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t11;
    register int t12;
    register int t23;
    register int t28;
    register int t30;
    register int t31;
    register int t33;
    register int t44;
    register int t49;
    register int t51;
    register int t52;
    register int t54;
    register int t66;
    register int t1;
    register int t2;
    register int t80;
    register int t70;

    t0 = (((struct o3768_int *)(a4))->v);
    if ((t0 != 0) && ((t1 = *(signed char *)((t0 + 0x41C)), (unsigned char)t1 == 72) || (t2 = *(signed char *)((t0 + 0x41C)), (unsigned char)t2 == 70))) {
        *(volatile int *)((a4 + 0x3768));
        FUN_0c187798(t0, a5, a6);
        if (0.0f > ((((struct o50_float *)(a4))->v))) {
            if (!(((((struct o2C_float *)(a4))->v)) > (((((struct o37C8_float *)(a4))->v)) + 50.0f))) {
                t11 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x0, a4);
                if (t11 != 0) {
                    t12 = (((struct o3768_int *)(a4))->v);
                    *(unsigned int *)(((int)stk + 4)) = t12;
                    FUN_0c11f9c8((*(signed char *)((a4 + 0x1))), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x41C))), ((((struct o24_short *)(t12))->v)));
                    FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
                }
                (((struct o3717_uchar *)(a4))->v) = 0x40;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                t80 = (FUN_0c085cac(a4, 0x40, 0x0));
            } else {
                t23 = math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4));
                (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t23)) * ((((struct o3790_float *)(a4))->v))));
                (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t23)) * ((((struct o3790_float *)(a4))->v))));
                t28 = *(int *)((a4 + 0x38));
                t30 = *(int *)((((((struct o3768_int *)(a4))->v)) + 0x38));
                t31 = *(short *)((a4 + 0x1C));
                t33 = (unsigned short)(t28 - t30);
                if ((0x8000 & (unsigned short)(t28 - t30)) != 0) {
                    t33 = ((unsigned short)(t28 - t30) | 0xFFFF0000);
                }
                t80 = (int)((int)t33 / (int)t31);
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t80);
            }
        } else {
            t44 = math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4));
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t44)) * ((((struct o3790_float *)(a4))->v))));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t44)) * ((((struct o3790_float *)(a4))->v))));
            t49 = *(int *)((a4 + 0x38));
            t51 = *(int *)((((((struct o3768_int *)(a4))->v)) + 0x38));
            t52 = *(short *)((a4 + 0x1C));
            t54 = (unsigned short)(t49 - t51);
            if ((0x8000 & (unsigned short)(t49 - t51)) != 0) {
                t54 = ((unsigned short)(t49 - t51) | 0xFFFF0000);
            }
            t80 = (int)((int)t54 / (int)t52);
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t80);
        }
    } else {
        t80 = 0x50;
        if (!(0.0f > ((((struct o50_float *)(a4))->v)))) {
        } else {
            t66 = FUN_0c07ecc6(a4, 0x0, 0x0);
            *(unsigned int *)(((int)stk + 0)) = t66;
            t80 = t66;
            if (t66 == 0) {
            } else {
                if ((*(int *)(((int)stk + 0))) == 2) {
                    (((struct o3717_uchar *)(a4))->v) = 0x6;
                    (((struct o3718_uchar *)(a4))->v) = 0x1;
                    t70 = 0x1;
                } else {
                    (((struct o3717_uchar *)(a4))->v) = 0x6;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t70 = 0x0;
                }
                t80 = (FUN_0c085cac(a4, 0x6, t70));
            }
        }
    }
    return t80;
}
