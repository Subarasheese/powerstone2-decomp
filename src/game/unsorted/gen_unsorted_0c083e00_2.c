/* game/unsorted: functions 0C083E00-0C084B62, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3764_int { char p[0x3764]; int v; };
struct o44_float { char p[0x44]; float v; };
int FUN_0c059e60(int, int);
int math_angle_between_points_xz(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c084a3a(int a4, int a5, int a6, int a7);

int FUN_0c084a3a(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t1;
    register int t3;
    register int t9;
    register int t10;
    register int t15;
    register float u19;
    register int t20;
    register float u24;

    if (((((struct o3764_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    (((struct o3715_uchar *)(a4))->v) = 0x1C;
    t1 = ((int (*)(int, int, int, int))(FUN_0c081dfc))(a4, a5, a6, a7);
    t3 = ((int (*)(int))(FUN_0c081dfc))(((((struct o3764_int *)(a4))->v)));
    *(int *)((int)stk + 8) = 0x26;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x26, 0xFFFFFFFF, 0x2, 0x26);
    *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3764_int *)(a4))->v)) + 0x28)));
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    FUN_0c059e60(a4, 0xC);
    (((struct o14_uchar *)(((((struct o3764_int *)(a4))->v))))->v) = 0x0;
    t9 = (((struct o3764_int *)(a4))->v);
    (((struct o17_uchar *)(t9))->v) = 0x0;
    (((struct o16_uchar *)(t9))->v) = 0x0;
    t10 = (((struct o3764_int *)(a4))->v);
    (((struct o3716_uchar *)(t10))->v) = (*(signed char *)((t10 + 0x3715)));
    (((struct o3715_uchar *)(((((struct o3764_int *)(a4))->v))))->v) = 0x1C;
    *(unsigned int *)((((((struct o3764_int *)(a4))->v)) + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
    t15 = (((struct o3764_int *)(a4))->v);
    u19 = ((((struct o28_float *)(a4))->v));
    u19 = u19 + 120.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
    (((struct o28_float *)(t15))->v) = u19;
    t20 = (((struct o3764_int *)(a4))->v);
    u24 = ((((struct o30_float *)(a4))->v));
    u24 = u24 + 120.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
    (((struct o30_float *)(t20))->v) = u24;
    FUN_0c07e868(((((struct o3764_int *)(a4))->v)), 0x0, 0x0, 0x0);
    *(unsigned short *)((((((struct o3764_int *)(a4))->v)) + 0x1C)) = 0x0;
    (((struct o44_float *)(((((struct o3764_int *)(a4))->v))))->v) = 0.699999988f;
    (((struct o3717_uchar *)(((((struct o3764_int *)(a4))->v))))->v) = 0x63;
    (((struct o15_uchar *)(((((struct o3764_int *)(a4))->v))))->v) = 0x1;
    (((struct o16_uchar *)(((((struct o3764_int *)(a4))->v))))->v) = 0x0;
    return 0x16;
}
