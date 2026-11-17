/* game/unsorted: functions 0C141090-0C141358, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c141090(int a4, int a5, int a6, int a7);

int FUN_0c141090(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    u0 = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
                    u0 = u0 + (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x8000))) * (float)(*(short *)((a4 + 0x1E)));
                    (((struct o28_float *)(a4))->v) = u0;
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v)) + 100.0f);
                    u0 = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
                    u0 = u0 + (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x8000))) * (float)(*(short *)((a4 + 0x1E)));
                    (((struct o30_float *)(a4))->v) = u0;
                    *(unsigned int *)((a4 + 0x34)) = 0x0;
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + ((((struct o20_short *)(a4))->v)));
                    *(unsigned int *)((a4 + 0x3C)) = 0x0;
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                    if ((int)((((struct o20_short *)(a4))->v)) > (int)0x400) {
                        (((struct o20_ushort *)(a4))->v) = 0x400;
                    }
                    if (((((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v)) > 0.0f) {
                        t0 = *(int *)(((0xC4 + a4) + 0x8));
                        t1 = (((struct oC4_int *)(a4))->v);
                        u0 = (((struct o20_float *)(t0))->v);
                        t2 = *(int *)(((0xC4 + a4) + 0x4));
                        (((struct o20_float *)(t0))->v) = (u0 - 0.0333333351f);
                        (((struct o1C_float *)(t0))->v) = (u0 - 0.0333333351f);
                        (((struct o18_float *)(t0))->v) = (u0 - 0.0333333351f);
                        (((struct o14_float *)(t2))->v) = (u0 - 0.0333333351f);
                        (((struct o14_float *)(t1))->v) = (u0 - 0.0333333351f);
                    }
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            u0 = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
            u0 = u0 + (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x8000))) * (float)(*(short *)((a4 + 0x1E)));
            (((struct o28_float *)(a4))->v) = u0;
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v)) + 100.0f);
            u0 = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
            u0 = u0 + (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x8000))) * (float)(*(short *)((a4 + 0x1E)));
            (((struct o30_float *)(a4))->v) = u0;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + ((((struct o20_short *)(a4))->v)));
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            if ((int)((((struct o20_short *)(a4))->v)) > (int)0x400) {
                (((struct o20_ushort *)(a4))->v) = 0x400;
            }
            if (1.0f > ((((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                t0 = *(int *)(((0xC4 + a4) + 0x8));
                t1 = *(int *)(((0xC4 + a4) + 0x4));
                u0 = (((struct o20_float *)(t0))->v);
                (((struct o20_float *)(t0))->v) = (u0 + 0.0333333351f);
                (((struct o1C_float *)(t0))->v) = (u0 + 0.0333333351f);
                (((struct o18_float *)(t0))->v) = (u0 + 0.0333333351f);
                (((struct o14_float *)(t1))->v) = (u0 + 0.0333333351f);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x41F;
                (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        *(unsigned int *)((a4 + 0x38)) = ((short)(*(signed char *)((a4 + 0x2))) * (short)0x2AAA);
        *(unsigned short *)((a4 + 0x1C)) = 0x64;
        *(unsigned short *)((a4 + 0x1E)) = 0x28;
        (((struct o20_ushort *)(a4))->v) = 0x200;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    u0 = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
    u0 = u0 + (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x8000))) * (float)(*(short *)((a4 + 0x1E)));
    (((struct o28_float *)(a4))->v) = u0;
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v)) + 100.0f);
    u0 = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
    u0 = u0 + (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x8000))) * (float)(*(short *)((a4 + 0x1E)));
    (((struct o30_float *)(a4))->v) = u0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + ((((struct o20_short *)(a4))->v)));
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    if ((int)((((struct o20_short *)(a4))->v)) > (int)0x400) {
        (((struct o20_ushort *)(a4))->v) = 0x400;
    }
    if ((int)(*(short *)((a4 + 0x1E))) < (int)0xF0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x5);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x6E;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
