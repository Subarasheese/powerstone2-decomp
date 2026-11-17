/* game/unsorted: functions 0C0E46FC-0C0E47FA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c0cff96(int, int);
int FUN_0c0d04c4(int, int);
float math_cos_angle16(int);
int FUN_0c0e46fc(int a4);

int FUN_0c0e46fc(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o126_uchar *)(a4))->v) = 0x2;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t0 = t1;
            t0 = (t0 << 2);
            t0 = (t0 + (0xC4 + a4));
            t0 = (*(int *)((t0 + 0x0)));
            FUN_0c0d04c4((t0 + 0x6), (t0 + 0x78));
            t1 = (t1 + 0x1);
        }
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = 0.299999982f;
    u0 = u0 + 0.699999988f * (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 1)));
    (((struct o88_float *)(t0))->v) = u0;
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        t0 = *(signed char *)0xC54098D;
        t1 = (FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1CBD20));
        if ((int)t0 >= (int)0x14) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        return t1;
    }
    return FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1CBD38);
}
