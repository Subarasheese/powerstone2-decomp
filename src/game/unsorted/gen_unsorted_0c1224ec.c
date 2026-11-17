/* game/unsorted: functions 0C1224EC-0C1226F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c1224ec(int a4, int a5);

int FUN_0c1224ec(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t18;
    register int t19;
    register int t21;
    register int t23;
    register int t25;
    register int t28;
    register int t31;
    register int t20;
    register int t22;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    if (t2 == 0) {
        return t2;
    }
    t3 = FUN_0c03f444(0x1, 0x0, 0x2);
    if (t3 == 0) {
        return t3;
    }
    FUN_0c03744a(((((struct oC4_int *)(t3))->v)), 0x0, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    FUN_0c03744a(((((struct oC8_int *)(t3))->v)), 0x1, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    *(unsigned int *)((t3 + 0x4)) = 0xC12212C;
    FUN_0c187798();
    FUN_0c187798();
    (((struct o48_float *)(t3))->v) = 1.0f;
    (((struct o44_float *)(t3))->v) = 1.0f;
    (((struct o40_float *)(t3))->v) = 1.0f;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (t3 + 0x28));
    (((struct oA8_uchar *)(t3))->v) = 0x1;
    (((struct oAC_ushort *)(t3))->v) = 0xF;
    (((struct oA9_uchar *)(t3))->v) = 0x21;
    t18 = 0x21;
    t19 = 0x0;
    t21 = t20;
    t23 = t22;
    for (;;) {
        if ((int)t19 >= (int)((((struct oC0_int *)(t3))->v))) {
            break;
        }
        t18 = 0xC4;
        t21 = t19;
        t21 = (t21 << 2);
        t18 = (t18 + t3);
        t18 = (t18 + t21);
        t25 = *(int *)((t18 + 0x0));
        t18 = 0xC4;
        *(unsigned char *)((t25 + 0x0)) = 0x1;
        t18 = (t18 + t3);
        t18 = (t18 + t21);
        t23 = 0xC4;
        t19 = (t19 + 0x1);
        *(unsigned short *)(((*(int *)((t18 + 0x0))) + 0x6)) = 0x1F;
        t23 = (t23 + t3);
        t23 = (t23 + t21);
        t23 = (*(int *)((t23 + 0x0)));
        (((struct o8C_float *)(t23))->v) = 1.0f;
        (((struct o88_float *)(t23))->v) = 1.0f;
        (((struct o84_float *)(t23))->v) = 1.0f;
    }
    (((struct o41C_uchar *)(t3))->v) = 0x5;
    *(unsigned char *)(((0x41C + t3) + 0x1)) = 0x0;
    *(unsigned int *)((t3 + 0x10)) = a4;
    *(unsigned short *)((t3 + 0x1C)) = 0xB4;
    *(int *)((int)stk + 12) = 0xF0;
    *(int *)((int)stk + 8) = 0x0;
    t28 = *(signed char *)((t3 + 0x1));
    *(int *)((int)stk + 4) = (~((int)0x1 << (int)t28));
    *(int *)((int)stk + 0) = 0x100;
    FUN_0c064d24(t3, 0x1, 0x3A, 0x0, 0x100, (~((int)0x1 << (int)t28)), 0x0, 0xF0);
    (((struct o14_uchar *)(t3))->v) = (*(signed char *)(((int)stk + 16)));
    t31 = *(signed char *)(((int)stk + 16));
    if (t31 != 0) {
        if (t31 != 1) {
            if (t31 != 2) {
                if (t31 != 3) {
                    return t31;
                }
                *(unsigned int *)((t3 + 0x34)) = (unsigned short)((*(int *)((t3 + 0x34))) + 0x2000);
                (((struct o4C_float *)(t3))->v) = ((math_sin_angle16((*(int *)((t3 + 0x38))))) * 30.0f);
                (((struct o54_float *)(t3))->v) = ((math_cos_angle16((*(int *)((t3 + 0x38))))) * 30.0f);
                (((struct o50_float *)(t3))->v) = (-((math_sin_angle16((*(int *)((t3 + 0x34))))) * 30.0f));
                return FUN_0c07e2f4(t3, 0x60);
            }
            (((struct o4C_float *)(t3))->v) = ((math_sin_angle16((*(int *)((t3 + 0x38))))) * 30.0f);
            (((struct o50_float *)(t3))->v) = 0.0f;
            (((struct o54_float *)(t3))->v) = ((math_cos_angle16((*(int *)((t3 + 0x38))))) * 30.0f);
            return FUN_0c07e2f4(t3, 0x60);
        }
        *(unsigned int *)((t3 + 0x34)) = (unsigned short)((*(int *)((t3 + 0x34))) + 0x2000);
    }
    *(unsigned short *)((t3 + 0x1E)) = 0x1;
    (((struct o20_ushort *)(t3))->v) = 0x0;
    return FUN_0c07e2f4(t3, 0x60);
}
