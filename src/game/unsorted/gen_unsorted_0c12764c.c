/* game/unsorted: functions 0C12764C-0C127914, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
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
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
extern int FUN_0c187798();
int FUN_0c12764c(int a4, int a5);
int FUN_0c127700(int a4, int a5, int a6, int a7);
int FUN_0c1277c4(int a4);


int FUN_0c127700(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    if (((*(short *)((a4 + 0x1E))) & 2) != 0) {
        u0 = (((((struct o40_float *)(a4))->v)) + 0.0199999996f);
    } else {
        u0 = (((((struct o40_float *)(a4))->v)) - 0.0199999996f);
    }
    (((struct o40_float *)(a4))->v) = u0;
    (((struct o48_float *)(a4))->v) = u0;
    t0 = *(signed char *)((a4 + 0x2));
    FUN_0c17c130((a4 + 0x40), (a4 + 0x40), (0xC201C4C + (((t0 << 1) + t0) << 2)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    return (short)(t0 - 1);
}

int FUN_0c1277c4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t2 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t2 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        t4 = 0x0;
        t5 = t0;
        t0 = t1;
        for (;;) {
            if ((int)t4 >= (int)((((struct oC0_int *)(t3))->v))) {
                break;
            }
            t0 = t4;
            t0 = (t0 << 2);
            t5 = 0xC4;
            t4 = (t4 + 0x1);
            *(unsigned short *)((((*(int *)((((0xC4 + t3) + t0) + 0x0)))) + 0x6)) = 0x3F;
            t5 = (t5 + t3);
            t5 = (t5 + t0);
            t5 = (*(int *)((t5 + 0x0)));
            (((struct o8C_float *)(t5))->v) = 1.0f;
            (((struct o88_float *)(t5))->v) = 1.0f;
            (((struct o84_float *)(t5))->v) = 1.0f;
        }
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned int *)((t3 + 0x10)) = a4;
        *(unsigned int *)((t3 + 0x4)) = 0xC127954;
        *(unsigned int *)((t3 + 0x34)) = 0x0;
        *(unsigned int *)((t3 + 0x38)) = (*(int *)((a4 + 0x38)));
        *(unsigned int *)((t3 + 0x3C)) = 0x0;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (t3 + 0x28));
        u0 = ((((struct o4C_float *)(t3))->v));
        u0 = u0 + 8.0f * (math_cos_angle16(((-(*(int *)((t3 + 0x38)))) + 0x14000)));
        (((struct o4C_float *)(t3))->v) = u0;
        u0 = ((((struct o54_float *)(t3))->v));
        u0 = u0 + 8.0f * (math_sin_angle16(((-(*(int *)((t3 + 0x38)))) + 0x14000)));
        (((struct o54_float *)(t3))->v) = u0;
        (((struct o50_float *)(t3))->v) = 0.0f;
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        FUN_0c07e2f4(t3, 0x64);
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        t2 = (FUN_0c064d24(t3, 0x1, 0x41, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t3 + 0x1))))), 0x0, 0xFFFFFFF0));
    }
    return t2;
}
