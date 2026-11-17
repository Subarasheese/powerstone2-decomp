/* game/unsorted: functions 0C12F828-0C12FA20, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c07e2c4(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c12f828(int a4, int a5, int a6, int a7);

int FUN_0c12f828(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0xFFFFFFFF;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 10) {
        if (t0 != 11) {
            if (t0 != 12) {
                if (t0 == 13) {
                    u0 = math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
                    u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                    (((struct o4C_float *)(a4))->v) = (u1 * 80.0f);
                    u0 = math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
                    u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                    (((struct o54_float *)(a4))->v) = (u1 * 80.0f);
                    (((struct o50_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 80.0f));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t0 = FUN_0c07e2c4((*(int *)((a4 + 0x10))));
            t1 = (signed char)t0;
            if ((signed char)t0 != 0) {
            } else {
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 - 1);
                t1 = 0x20;
                if ((short)(t0 - 1) != 0) {
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    *(unsigned short *)((a4 + 0x1E)) = 0x78;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct oA4_uint *)(a4))->v) = 0x0;
                    *(unsigned int *)((a4 + 0x34)) = (*(int *)(((*(int *)((a4 + 0x10))) + 0x34)));
                    *(unsigned int *)((a4 + 0x38)) = (*(int *)(((*(int *)((a4 + 0x10))) + 0x38)));
                    *(unsigned int *)((a4 + 0x3C)) = (*(int *)(((*(int *)((a4 + 0x10))) + 0x3C)));
                    if ((*(signed char *)((a4 + 0x15))) == 0) {
                        t0 = thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (a4 + 0x28));
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 0x31C7);
                        t1 = t0;
                    } else {
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 0x4000);
                        t1 = 0x15;
                    }
                }
            }
            return t1;
        }
        t0 = FUN_0c07e2c4((*(int *)((a4 + 0x10))));
        t1 = (signed char)t0;
        if ((signed char)t0 != 0) {
        } else {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0666666701f);
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            t1 = 0x20;
        }
        return t1;
    }
    t0 = FUN_0c07e2c4((*(int *)((a4 + 0x10))));
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
    } else {
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0500000007f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0500000007f);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0500000007f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        t1 = 0x20;
    }
    return t1;
}
