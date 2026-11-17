/* game/unsorted: functions 0C14D830-0C14DA1C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o58_float { char p[0x58]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c14d830(int a4, int a5, int a6, int a7);

int FUN_0c14d830(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t1 + 0x3715))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                t2 = *(int *)((a4 + 0x38));
                *(unsigned int *)((a4 + 0x38)) = (t2 + 0x71C);
                u0 = ((((struct o28_float *)(t1))->v));
                u0 = u0 + (math_sin_angle16((t2 + 0x71C))) * ((((struct o58_float *)(a4))->v));
                (((struct o28_float *)(a4))->v) = u0;
                u0 = ((((struct o30_float *)(t1))->v));
                u0 = u0 + (math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o58_float *)(a4))->v));
                (((struct o30_float *)(a4))->v) = u0;
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(t1))->v)) + 100.0f);
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + (((-((((struct o40_float *)(a4))->v))) + 0.100000001f) / (float)(*(short *)((a4 + 0x1C)))));
                (((struct o44_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t3 = (short)(t2 - 1);
                if ((int)(short)(t2 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t3 = 0x14;
                }
                return t3;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t2 = *(short *)((t1 + 0x1E));
        *(unsigned short *)((t1 + 0x1E)) = (t2 - 1);
        if (((int)(short)(t2 - 1) <= 0) && (t0 = *(signed char *)((a4 + 0x1B)), t0 == 0)) {
            FUN_0c07e2f4(a4, 0x62);
            *(unsigned short *)((a4 + 0x1E)) = 0x14;
        }
        t0 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t0 + 0x444);
        u0 = ((((struct o28_float *)(t1))->v));
        u0 = u0 + (math_sin_angle16((t0 + 0x444))) * ((((struct o58_float *)(a4))->v));
        (((struct o28_float *)(a4))->v) = u0;
        u0 = ((((struct o30_float *)(t1))->v));
        u0 = u0 + (math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o58_float *)(a4))->v));
        (((struct o30_float *)(a4))->v) = u0;
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(t1))->v)) + 100.0f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + (((-((((struct o58_float *)(a4))->v))) + 200.0f) / (float)(*(short *)((a4 + 0x1C)))));
    u0 = ((((struct o28_float *)(t1))->v));
    u0 = u0 + (math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o58_float *)(a4))->v));
    (((struct o28_float *)(a4))->v) = u0;
    u0 = ((((struct o30_float *)(t1))->v));
    u0 = u0 + (math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o58_float *)(a4))->v));
    (((struct o30_float *)(a4))->v) = u0;
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(t1))->v)) + 100.0f);
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + (((-((((struct o40_float *)(a4))->v))) + (1.0f + 1.0f)) / (float)(*(short *)((a4 + 0x1C)))));
    (((struct o44_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x28;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
