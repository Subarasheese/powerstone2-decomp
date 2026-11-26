/* Straight-line functions with calls and guards (batch gen_ur): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0659d6(int, int, int);
int nlRand(void);
int FUN_0c0d6dfc(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0d6dfc(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return (short)(t0 - 1);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o40_float *)(a4))->v) = 1.5f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.5f;
        (((struct oAC_ushort *)(a4))->v) = 0x21F;
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.5f;
        (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.5f;
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 100.0f);
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 10.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = FUN_0c0659d6(a4, 0x0, 0x1);
    if (t0 != 0) {
        u0 = (((struct o50_float *)(a4))->v);
        if (((((struct o2C_float *)(a4))->v)) > (u0 + -300.0f)) {
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 0.25f);
        } else {
            (((struct o2C_float *)(a4))->v) = (u0 + -300.0f);
        }
    } else {
        u0 = (((struct o50_float *)(a4))->v);
        u1 = u0;
        if (u0 > ((((struct o2C_float *)(a4))->v))) {
            u1 = (((((struct o2C_float *)(a4))->v)) + 1.0f);
        }
        (((struct o2C_float *)(a4))->v) = u1;
    }
    u0 = (((struct o50_float *)(a4))->v);
    u1 = (((struct o2C_float *)(a4))->v);
    (((struct oBC_float *)(a4))->v) = ((((-u0) + u1) + 300.0f) / 300.0f);
    (((struct oB8_float *)(a4))->v) = ((((-u0) + u1) + 300.0f) / 300.0f);
    (((struct oB4_float *)(a4))->v) = ((((-u0) + u1) + 300.0f) / 300.0f);
    t0 = 0xB4;
    if ((int)(*(signed char *)0xC54223C) > 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)(nlRand()) % (int)0x12C));
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}
