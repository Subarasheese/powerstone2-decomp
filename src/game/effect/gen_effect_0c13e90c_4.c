/* game/effect: functions 0C13E90C-0C140EE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int);
int FUN_0c187798(void);
int FUN_0c13f98c(int a4, int a5, int a6);

int FUN_0c13f98c(int a4, int a5, int a6)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;

    *(volatile int *)((a4 + 0x10));
    t3 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    *(volatile int *)((t0 + 0x10));
    t3 = ((int (*)(int))(FUN_0c187798))(t0);
    t0 = *(int *)((t2 + 0x10));
    if (((*(signed char *)((t0 + 0x3715))) == 26) && (t1 = *(signed char *)((t0 + 0x17)), t1 == 2)) {
        t1 = *(signed char *)((t2 + 0x14));
        if (t1 != 0) {
            if (t1 != 1) {
                return FUN_0c03f346(t2, t0);
            }
        } else {
            *(unsigned short *)((((((struct oC4_int *)(t2))->v)) + 0x6)) = 0x1F;
            t1 = (((struct oC4_int *)(t2))->v);
            (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 100.0f);
            t1 = (((struct oC4_int *)(t2))->v);
            (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) + 150.0f);
            (((struct o84_float *)(((((struct oC4_int *)(t2))->v))))->v) = 1.0f;
            (((struct o88_float *)(((((struct oC4_int *)(t2))->v))))->v) = 1.0f;
            (((struct o8C_float *)(((((struct oC4_int *)(t2))->v))))->v) = 0.100000001f;
            *(unsigned short *)((t2 + 0x1C)) = 0x1E;
            (((struct o14_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x14))) + 0x1);
        }
        t1 = (((struct oC4_int *)(t2))->v);
        (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.100000001f);
        t1 = *(short *)((t2 + 0x1C));
        *(unsigned short *)((t2 + 0x1C)) = (t1 - 1);
        t3 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            (((struct o14_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x14))) + 0x1);
            t3 = 0x14;
        }
        return t3;
    }
    return FUN_0c03f346(t2, t0);
}
