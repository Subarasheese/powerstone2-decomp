/* game/unsorted: functions 0C12AE74-0C12AFE4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c12ae74(int a4, int a5);

int FUN_0c12ae74(int a4, int a5)
{
    int stk[8];
    register int t2;
    register int t3;
    register int t34;
    register int t12;
    register int t13;
    register float u14;
    register float t16;
    register float u18;
    register float u22;
    register float t23;
    register float u25;
    register int t31;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t34 = t3;
    if (t3 == 0) {
    } else {
        *(unsigned int *)((t3 + 0x4)) = 0xC12B034;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c187798();
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (t3 + 0x28));
        *(int *)((int)stk + 12) = (t3 + 0x28);
        t12 = *(signed char *)(((((int)stk + 12) + 0x4) + 0x0));
        *(unsigned int *)(((int)stk + 28)) = ((unsigned char)t12 << 2);
        *(unsigned int *)(((int)stk + 24)) = (((unsigned char)t12 << 2) + 0xC2A1014);
        t13 = *(int *)(((int)stk + 28));
        u14 = *(float *)(((((unsigned char)t12 << 2) + 0xC2A1014) + 0x0));
        *(unsigned int *)(((int)stk + 20)) = (t13 + 0xC2A1054);
        t16 = math_cos_angle16(((int)(((*(float *)(((t13 + 0xC2A1054) + 0x0))) * 65536.0f) / 360.0f) + 0x4000));
        u18 = ((((struct o28_float *)(t3))->v));
        u18 = u18 + t16 * u14;
        (((struct o28_float *)(t3))->v) = u18;
        *(int *)((int)stk + 12) = (t3 + 0x30);
        u22 = *(float *)(((*(int *)(((int)stk + 24))) + 0x0));
        t23 = math_sin_angle16(((int)(((*(float *)(((*(int *)(((int)stk + 20))) + 0x0))) * 65536.0f) / 360.0f) + 0x4000));
        u25 = ((((struct o30_float *)(t3))->v));
        u25 = u25 + t23 * u22;
        (((struct o30_float *)(t3))->v) = u25;
        (((struct o22_ushort *)(t3))->v) = (unsigned char)(*(signed char *)(((int)stk + 16)));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0xF;
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t31 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t31));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t31)), 0x0, 0xF0);
        FUN_0c07e2f4(t3, 0x66);
        (((struct o126_uchar *)(t3))->v) = 0x2;
        t34 = 0x126;
    }
    return t34;
}
