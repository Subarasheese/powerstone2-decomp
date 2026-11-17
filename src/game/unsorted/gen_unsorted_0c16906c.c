/* game/unsorted: functions 0C16906C-0C16950A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o3C_int { char p[0x3C]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(int);
int FUN_0c16906c(int a4, int a5, int a6, int a7);

int FUN_0c16906c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            t2 = *(signed char *)((a4 + 0x2));
            t3 = (t2 << 2);
            if ((int)(short)(t1 + 0x1) <= (int)(*(int *)((0xC2A3830 + (t2 << 2))))) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                t3 = 0xA8;
            }
            return t3;
        }
        if (t0 == 2) {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A38F8)->v))) {
                t0 = *(signed char *)((a4 + 0x2));
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), ((0xC2A3840 + (((t0 << 1) + t0) << 2)) + 0xC), 0xC2A3840, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A38F8)->v))), 0x0);
                t0 = *(signed char *)((a4 + 0x2));
                FUN_0c0588bc((a4 + 0x40), ((0xC2A387C + (((t0 << 1) + t0) << 2)) + 0xC), 0xC2A387C, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A38F8)->v))), 0x0);
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * ((((struct o0_float *)0xC2A38B8)->v)));
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * ((((struct o4_float *)0xC2A38B8)->v)));
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * ((((struct o8_float *)0xC2A38B8)->v)));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) * ((((struct o0_float *)0xC2A38B8)->v)));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) * ((((struct o4_float *)0xC2A38B8)->v)));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) * ((((struct o8_float *)0xC2A38B8)->v)));
            }
            if ((int)(*(short *)((a4 + 0x1C))) >= (int)((((struct o0_int *)0xC2A38F8)->v))) {
                t0 = (((struct oC4_int *)(a4))->v);
                t1 = *(signed char *)((a4 + 0x2));
                u0 = ((((struct oC_float *)(((((t1 << 1) + t1) << 2) + 0xC2A3840)))->v));
                u0 = u0 + (math_sin_angle16((unsigned short)((((*(short *)((a4 + 0x1C))) << 8) << 2) << 2))) * ((((struct o8_float *)0xC2A38F8)->v));
                (((struct o84_float *)(t0))->v) = u0;
                t0 = (((struct oC4_int *)(a4))->v);
                t1 = *(signed char *)((a4 + 0x2));
                u0 = ((((struct o10_float *)(((((t1 << 1) + t1) << 2) + 0xC2A3840)))->v));
                u0 = u0 + (math_sin_angle16((unsigned short)((((*(short *)((a4 + 0x1C))) << 8) << 2) << 2))) * ((((struct o8_float *)0xC2A38F8)->v));
                (((struct o88_float *)(t0))->v) = u0;
                t0 = (((struct oC4_int *)(a4))->v);
                t1 = *(signed char *)((a4 + 0x2));
                u0 = ((((struct o14_float *)((0xC2A3840 + (((t1 << 1) + t1) << 2))))->v));
                u0 = u0 + (math_sin_angle16((unsigned short)((((*(short *)((a4 + 0x1C))) << 8) << 2) << 2))) * ((((struct o8_float *)0xC2A38F8)->v));
                (((struct o8C_float *)(t0))->v) = u0;
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) * ((((struct o0_float *)0xC2A38B8)->v)));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) * ((((struct o4_float *)0xC2A38B8)->v)));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) * ((((struct o8_float *)0xC2A38B8)->v)));
            }
            t0 = (a4 + 0x28);
            t1 = (a4 + 0x4C);
            if ((int)(*(short *)((a4 + 0x1C))) < (int)((((struct o4_int *)0xC2A38F8)->v))) {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                t0 = (a4 + 0x4C);
                t1 = (a4 + 0x58);
            }
            math_vec3_accumulate(t0, t1);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o3C_int *)0xC2A38B8)->v))) {
                (((struct o14_uchar *)(a4))->v) = 0x3;
                t1 = 0x14;
            }
            return t1;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * ((((struct o0_float *)0xC2A38B8)->v)));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * ((((struct o4_float *)0xC2A38B8)->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * ((((struct o8_float *)0xC2A38B8)->v)));
    (((struct o4C_float *)(a4))->v) = (((((struct oC_float *)0xC2A38F8)->v)) * (math_sin_angle16((*(int *)((a4 + 0x38))))));
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = (((((struct oC_float *)0xC2A38F8)->v)) * (math_cos_angle16((*(int *)((a4 + 0x38))))));
    (((struct o58_float *)(a4))->v) = (((((((struct o10_float *)0xC2A38F8)->v)) - ((((struct oC_float *)0xC2A38F8)->v))) / (float)((((struct o4_int *)0xC2A38F8)->v))) * (math_sin_angle16((*(int *)((a4 + 0x38))))));
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = (((((((struct o10_float *)0xC2A38F8)->v)) - ((((struct oC_float *)0xC2A38F8)->v))) / (float)((((struct o4_int *)0xC2A38F8)->v))) * (math_cos_angle16((*(int *)((a4 + 0x38))))));
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(int *)((((*(signed char *)((a4 + 0x2))) << 2) + 0xC2A3820))), 0x42, (*(int *)0xC4B40D8));
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x3F;
    *(volatile int *)((a4 + 0xC4));
    t0 = ((int (*)(void))(FUN_0c187798))();
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) * ((((struct o0_float *)0xC2A38B8)->v)));
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) * ((((struct o4_float *)0xC2A38B8)->v)));
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) * ((((struct o8_float *)0xC2A38B8)->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = *(signed char *)((a4 + 0x2));
    t2 = (t1 << 2);
    if ((int)(short)(t0 + 0x1) <= (int)(*(int *)((0xC2A3830 + (t1 << 2))))) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t2 = 0xA8;
    }
    return t2;
}
