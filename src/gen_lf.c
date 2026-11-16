/* Straight-line functions with calls and guards (batch gen_lf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int FUN_0c12c23a(int a4, int a5, int a6, int a7, float f4);

int FUN_0c12c23a(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 != 3) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                t2 = (((struct oC4_int *)(a4))->v);
                (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + 0xB6);
                *(volatile int *)((a4 + 0x10));
                FUN_0c187798(0xB6, a5, a6);
                u0 = (((struct o48_float *)(a4))->v);
                (((struct o48_float *)(a4))->v) = (u0 - f4);
                (((struct o44_float *)(a4))->v) = (u0 - f4);
                (((struct o40_float *)(a4))->v) = (u0 - f4);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t3 = (short)(t2 - 1);
                if ((short)(t2 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t3 = 0x14;
                }
                return t3;
            }
            t2 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + 0xB6);
            *(volatile int *)((a4 + 0x10));
            FUN_0c187798(0xB6, a5, a6);
            (((struct o44_float *)(a4))->v) = (((float)((int)((int)(FUN_0c179ac0()) % (int)0x14)) / 20.0f) + 1.0f);
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if (((short)(t2 - 1) != 0) && (t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((0x3715 + t0)), t1 == 26)) {
                t0 = t1;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(0xB6, a5, a6);
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = (u0 + f4);
    (((struct o44_float *)(a4))->v) = (u0 + f4);
    (((struct o40_float *)(a4))->v) = (u0 + f4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x64;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
