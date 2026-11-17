/* game/unsorted: functions 0C01BBA8-0C01BD5C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
extern int thunk_FUN_0c03f346();
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c01bba8(int a4, int a5, int a6, int a7);

int FUN_0c01bba8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                u0 = (1.0f + 1.0f);
                u0 = u0 + 0.100000001f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                (((struct o40_float *)(a4))->v) = u0;
                u0 = (1.0f + 1.0f);
                u0 = u0 + 0.100000001f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                (((struct o44_float *)(a4))->v) = u0;
                u0 = -10.0f;
                u0 = u0 + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v));
                (((struct o28_float *)(a4))->v) = u0;
                u0 = -0.0f;
                u0 = u0 + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
                (((struct o2C_float *)(a4))->v) = u0;
                t1 = *(short *)((a4 + 0x1C));
                if (t1 == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    return ((int (*)(int))(thunk_FUN_0c03f346))(a4);
                }
                return t1;
            }
            if (t0 == 3) {
                return ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x10;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o4C_float *)(a4))->v) = (*(float *)((0xC20E1BC + (((*(signed char *)((a4 + 0x2))) << 2) << 1))));
        (((struct o50_float *)(a4))->v) = ((((struct o4_float *)((0xC20E1BC + (((*(signed char *)((a4 + 0x2))) << 2) << 1))))->v));
        u0 = -10.0f;
        u0 = u0 + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v));
        (((struct o28_float *)(a4))->v) = u0;
        u0 = -0.0f;
        u0 = u0 + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
        (((struct o2C_float *)(a4))->v) = u0;
        (((struct o30_float *)(a4))->v) = 5.0f;
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    (((struct o40_float *)(a4))->v) = ((math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2))) * (1.0f + 1.0f));
    (((struct o44_float *)(a4))->v) = ((math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2))) * (1.0f + 1.0f));
    u0 = -10.0f;
    u0 = u0 + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v));
    (((struct o28_float *)(a4))->v) = u0;
    u0 = -0.0f;
    u0 = u0 + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
    (((struct o2C_float *)(a4))->v) = u0;
    t0 = *(short *)((a4 + 0x1C));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o44_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
        u0 = -10.0f;
        u0 = u0 + ((1.0f + 1.0f)) * ((((struct o4C_float *)(a4))->v));
        (((struct o28_float *)(a4))->v) = u0;
        u0 = -0.0f;
        u0 = u0 + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
        (((struct o2C_float *)(a4))->v) = u0;
        *(unsigned short *)((a4 + 0x1C)) = 0x60;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        u0 = (1.0f + 1.0f);
        u0 = u0 + 0.100000001f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
        (((struct o40_float *)(a4))->v) = u0;
        u0 = (1.0f + 1.0f);
        u0 = u0 + 0.100000001f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
        (((struct o44_float *)(a4))->v) = u0;
        u0 = -10.0f;
        u0 = u0 + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v));
        (((struct o28_float *)(a4))->v) = u0;
        u0 = -0.0f;
        u0 = u0 + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
        (((struct o2C_float *)(a4))->v) = u0;
        t1 = *(short *)((a4 + 0x1C));
        if (t1 == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return ((int (*)(int))(thunk_FUN_0c03f346))(a4);
        }
        return t1;
    }
    return t0;
}
