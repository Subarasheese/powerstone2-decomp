/* Straight-line functions with calls and guards (batch gen_rv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c132a60(int a4, int a5, int a6, int a7);

int FUN_0c132a60(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x4;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    if ((t1 == 0) || (t1 == 1)) {
        if (1.0f > ((((struct o48_float *)(a4))->v))) {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
        }
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u0;
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o40_float *)(a4))->v));
        (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o44_float *)(a4))->v));
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o48_float *)(a4))->v));
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) < 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x4;
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0x7) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
            }
            FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x3F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
        }
        t1 = *(int *)((a4 + 0x10));
        t2 = 0x16;
        if (((*(signed char *)((t1 + 0x375A))) != 0) && (t0 = *(signed char *)((t1 + 0x16)), (int)t0 <= (int)0x1)) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    } else {
        return FUN_0c03f346(a4, 0x0, a6, a7);
    }
}
