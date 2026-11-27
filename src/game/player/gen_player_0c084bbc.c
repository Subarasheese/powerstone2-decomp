/* game/player: functions 0C084BBC-0C08549E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3724_uchar { char p[0x3724]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o404_int { char p[0x404]; int v; };
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
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int math_angle_between_points_xz(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0c30a8(int, int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c084bbc(int a4, int a5, int a6, int a7);
int FUN_0c08515a(int a4, int a5);
int FUN_0c085204(int a4, float f4);
int FUN_0c085256(int a4, int a5);
int FUN_0c085398(int a4, int a5, int a6, int a7);


int FUN_0c08515a(int a4, int a5)
{
    register int t1;
    register int t2;
    int t7;
    register int t8;

    t1 = 0x404;
    t2 = ((((struct o404_int *)(a4))->v));
    for (;;) {
        if (t2 == 0) {
            t1 = 0x0;
            return t1;
        }
        if (((*(int *)((t2 + 0x4))) != 0) && (t7 = *(int *)((t2 + 0x4)), t1 = t7, t8 = *(signed char *)((t1 + 0x0)), t1 = t8, t1 == 9)) {
            t1 = (FUN_0c0c30a8((*(int *)((t2 + 0x4))), a5, a4));
            if (t1 != 0) {
                break;
            }
            t2 = (*(int *)((t2 + 0x0)));
            continue;
        }
        t2 = (*(int *)((t2 + 0x0)));
    }
    return t2;
}

int FUN_0c085204(int a4, float f4)
{
    register int t0;
    register int t11;

    t0 = FUN_0c08515a(a4, 0x3);
    t11 = 0x1;
    if (t0 != 0) {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)((*(int *)((t0 + 0x4)))))->v)) - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * f4)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)((*(int *)((t0 + 0x4)))))->v)) - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * f4)));
        t11 = 0x0;
    }
    return t11;
}


int FUN_0c085398(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t3;
    register int t40;
    register int t41;
    register int t42;
    register int t43;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x23;
    FUN_0c081dfc(a4, a5, a6, a7);
    (((struct o371D_uchar *)(a4))->v) = 0x0;
    (((struct o3724_uchar *)(a4))->v) = 0x0;
    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t3 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if (t3 != 0) {
            if ((*(signed char *)(((int)stk + 0))) == 0) {
                *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28)));
            }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v)) - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * 10.0f)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v)) - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * 10.0f)));
        }
    }
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
        FUN_0c059e60(a4, 0x0);
        FUN_0c085256(a4, 0x0);
        (((struct o16_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
    } else {
        FUN_0c085256(a4, 0x1);
    }
    t40 = *(int *)(((0x118 + a4) + 0x4));
    t41 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t40))->v) = 1.0f;
    (((struct o9C_float *)(t40))->v) = 1.0f;
    (((struct oA0_float *)(t41))->v) = 1.0f;
    (((struct o9C_float *)(t41))->v) = 1.0f;
    t42 = *(int *)(((0x118 + a4) + 0x4));
    t43 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t42))->v) = 1.0f;
    (((struct o98_float *)(t43))->v) = 1.0f;
    (((struct o94_float *)(t42))->v) = 1.0f;
    (((struct o94_float *)(t43))->v) = 1.0f;
    return 0x94;
}
