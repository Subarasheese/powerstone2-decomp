/* game/effect: functions 0C1359C4-0C135AEC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c1359c4(int a4, int a5, int a6, int a7);

int FUN_0c1359c4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.100000001f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.100000001f);
            if (0.0f > ((((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            return 0x30;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (1.0f + 1.0f));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (1.0f + 1.0f));
        (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
        t1 = 0x50;
    }
    return t1;
}
