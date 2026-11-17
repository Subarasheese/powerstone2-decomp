/* game/unsorted: functions 0C142E70-0C143FE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c0582de(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c17c450(int);
extern int FUN_0c187798();
int FUN_0c14349c(int a4, int a5, int a6, int a7);

int FUN_0c14349c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = FUN_0c037320(0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t2 = 0x5;
    if ((int)a6 >= 0) {
        t2 = 0x1;
    }
    t3 = FUN_0c03f444(t2, 0x0, t1);
    t1 = t3;
    if (t3 == 0) {
    } else {
        FUN_0c03733c(t3, 0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        t2 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(t3))->v))) {
                break;
            }
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + t3));
            t2 = (*(int *)((t2 + 0x0)));
            *(unsigned short *)((t2 + 0x6)) = 0x1F;
            t0 = (t0 + 0x1);
            (((struct o88_float *)(t2))->v) = 1.0f;
            (((struct o84_float *)(t2))->v) = 1.0f;
            (((struct o8C_float *)(t2))->v) = 1.0f;
        }
        *(unsigned int *)((t3 + 0x4)) = 0xC143608;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned int *)((t3 + 0x10)) = a4;
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(t2, ((*(int *)(((((*(int *)((((a5 & 0x1) << 2) + 0xC20259C))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28), 0x1F);
        FUN_0c0582de((t3 + 0x28));
        t0 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c17c450((t3 + 0x4C));
        u0 = *(float *)0xC143654;
        math_vec3_mul_xyz((t3 + 0x4C), u0, u0, u0);
        if ((int)a6 >= 0) {
            FUN_0c07e2f4(t3, a6);
            (((struct o48_float *)(t3))->v) = 1.0f;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 1.0f;
            FUN_0c064d24(t3, 0x1, 0x40, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t3 + 0x1))))), 0x0, 0xF0);
        }
        *(unsigned short *)((t3 + 0x1C)) = 0x3C;
        t1 = 0x3C;
    }
    return t1;
}
