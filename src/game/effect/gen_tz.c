/* Straight-line functions with calls and guards (batch gen_tz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c1338f6(int);
int fx29_spawn_burst8(int, int);
int FUN_0c133952(int a4, int a5, int a6, int a7);

int FUN_0c133952(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        FUN_0c064d24(a4, 0x1, 0x34, 0x2, 0x100, (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))), 0x0, 0x0);
    }
    if ((t1 == 0) || (t1 == 1)) {
        FUN_0c1338f6(a4);
        u0 = (((struct o44_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
        if ((u0 + 0.100000001f) > 1.0f) {
            (((struct o44_float *)(a4))->v) = 1.0f;
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x5555);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) & 0xFFFF);
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
        t3 = (short)(t2 - 1);
        if ((short)(t2 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            if (((*(signed char *)((a4 + 0x2))) == 0) && (t0 = *(signed char *)(((0x41C + a4) + 0x2)), (int)t0 < (int)0x3)) {
                fx29_spawn_burst8(a4, ((*(signed char *)(((0x41C + a4) + 0x2))) + 0x1));
            }
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
            t3 = 0x18;
        }
        return t3;
    } else {
        if (t1 != 2) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) < 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        *(unsigned int *)((a4 + 0x38)) = (((*(int *)((a4 + 0x38))) + 0x5555) & 0xFFFF);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.0799999982f);
        if (0.0f > ((((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
            (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        u0 = (((struct o18_float *)(t0))->v);
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o1C_float *)(t0))->v) = u0;
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.0500000007f);
        if (9.99999975e-05f > ((((struct o40_float *)(a4))->v))) {
            (((struct o40_float *)(a4))->v) = 9.99999975e-05f;
        }
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u0 - 0.0500000007f);
        if (9.99999975e-05f > (u0 - 0.0500000007f)) {
            (((struct o48_float *)(a4))->v) = 9.99999975e-05f;
        }
        return 0x48;
    }
}
