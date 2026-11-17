/* game/unsorted: functions 0C14B39C-0C14B48C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c14b39c(int a4);

int FUN_0c14b39c(int a4)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
    }
    (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = (((-((math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13))) * 0.194999993f))) + 0.805000007f);
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = 1.22500002f;
    u0 = u0 + 0.224999994f * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
    (((struct o88_float *)(t0))->v) = u0;
    t0 = (((struct oC8_int *)(a4))->v);
    u0 = 1.22500002f;
    u0 = u0 + 0.224999994f * (math_cos_angle16(((*(short *)((a4 + 0x1C))) << 13)));
    (((struct o84_float *)(t0))->v) = u0;
    (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((-((math_cos_angle16(((*(short *)((a4 + 0x1C))) << 13))) * 0.194999993f))) + 0.805000007f);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c03f346(a4);
    }
    return (short)(t0 - 1);
}
