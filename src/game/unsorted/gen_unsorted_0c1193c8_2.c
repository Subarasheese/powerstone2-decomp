/* game/unsorted: functions 0C1193C8-0C11A28A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_short { char p[0x41C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
extern int FUN_0c03f346();
int FUN_0c05a080(int, int);
int FUN_0c118810(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c119f90(int a4, int a5, int a6, int a7);

int FUN_0c119f90(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    (((struct o4C_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / (float)((((struct o14_int *)0xC291E68)->v)));
                    (((struct o54_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) / (float)((((struct o14_int *)0xC291E68)->v)));
                    (((struct o50_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) / (float)((((struct o14_int *)0xC291E68)->v)));
                    FUN_0c05a080(0xC, 0x0);
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + ((((struct o24_int *)0xC291E68)->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o30_float *)0xC291E68)->v)));
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o34_float *)0xC291E68)->v)));
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    t2 = (short)(t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)((((struct o14_int *)0xC291E68)->v))) {
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                        t2 = 0x63;
                    }
                    return t2;
                }
                if (t0 == 4) {
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + ((((struct o24_int *)0xC291E68)->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o30_float *)0xC291E68)->v)));
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o34_float *)0xC291E68)->v)));
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    t2 = (short)(t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)((((struct o14_int *)0xC291E68)->v))) {
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                        t2 = 0x63;
                    }
                    return t2;
                }
                if (t0 == 99) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return t0;
            }
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + ((((struct o1C_int *)0xC291E68)->v)));
            t0 = (((struct o41C_short *)(a4))->v);
            u0 = ((*(float *)(((((t0 << 1) + t0) << 2) + 0xC29FA30))) + ((((struct o0_float *)0xC291E68)->v)));
            u0 = u0 + ((((struct o28_float *)0xC291E68)->v)) * (math_sin_angle16(((((struct o20_short *)(a4))->v))));
            (((struct o2C_float *)(a4))->v) = u0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + ((((struct o20_int *)0xC291E68)->v)));
            u0 = (((struct o4C_float *)(a4))->v);
            u1 = (((struct o2C_float *)0xC291E68)->v);
            u2 = ((((-(math_cos_angle16((*(short *)((a4 + 0x1E)))))) + 1.0f) / (1.0f + 1.0f)) * ((((struct o4C_float *)(a4))->v)));
            u3 = u0;
            u3 = u3 + u1 * u2;
            (((struct o40_float *)(a4))->v) = u3;
            u0 = (((struct o50_float *)(a4))->v);
            u1 = (((struct o2C_float *)0xC291E68)->v);
            u2 = ((((-(math_cos_angle16((*(short *)((a4 + 0x1E)))))) + 1.0f) / (1.0f + 1.0f)) * ((((struct o50_float *)(a4))->v)));
            u3 = u0;
            u3 = u3 + u1 * u2;
            (((struct o44_float *)(a4))->v) = u3;
            u0 = (((struct o54_float *)(a4))->v);
            u1 = (((struct o2C_float *)0xC291E68)->v);
            u2 = ((((-(math_cos_angle16((*(short *)((a4 + 0x1E)))))) + 1.0f) / (1.0f + 1.0f)) * ((((struct o54_float *)(a4))->v)));
            u3 = u0;
            u3 = u3 + u1 * u2;
            (((struct o48_float *)(a4))->v) = u3;
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0xC8) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + ((((struct o18_int *)0xC291E68)->v)));
        t0 = (((struct o41C_short *)(a4))->v);
        u0 = ((*(float *)(((((t0 << 1) + t0) << 2) + 0xC29FA30))) + ((((struct o0_float *)0xC291E68)->v)));
        u0 = u0 + ((((struct o24_float *)0xC291E68)->v)) * (math_sin_angle16(((((struct o20_short *)(a4))->v))));
        (((struct o2C_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) <= (int)0x8C) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(0xC291E80, a5, a6);
    *(volatile short *)(((0x41C + a4) + 0x0));
    t0 = ((int (*)(void))(FUN_0c187798))();
    FUN_0c118810(a4, ((((struct o41C_short *)(a4))->v)));
    return (((int (*)(void))(FUN_0c187798))());
}
