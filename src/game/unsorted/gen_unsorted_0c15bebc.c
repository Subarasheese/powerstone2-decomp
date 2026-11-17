/* game/unsorted: functions 0C15BEBC-0C15BFD4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_short { char p[0x22]; short v; };
struct o24_short { char p[0x24]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c15bebc(int a4, int a5, int a6, int a7);
int FUN_0c15bf56(int a4, int a5, int a6, int a7);

int FUN_0c15bebc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    if (((((struct o24_short *)((*(int *)((a4 + 0x10)))))->v)) != ((((struct o22_short *)(a4))->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    } else {
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x1E)) * ((((struct o0_float *)0xC15BFE4)->v))) / ((((struct o4_float *)0xC15BFE4)->v))));
        (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.25f);
        if (!(1.0f > ((((struct o84_float *)(t1))->v)))) {
            (((struct o84_float *)(t1))->v) = ((((struct oC_float *)0xC15BFE4)->v));
        }
        u0 = (((struct o84_float *)(t1))->v);
        (((struct o88_float *)(t1))->v) = u0;
        (((struct o8C_float *)(t1))->v) = u0;
        t0 = 0x8C;
    }
    return t0;
}

int FUN_0c15bf56(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o18_float *)(t1))->v)));
        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + ((((struct o1C_float *)(t1))->v)));
        (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) + ((((struct o20_float *)(t1))->v)));
        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x1800);
        if ((unsigned int)t0 >= (unsigned int)0xC) {
            break;
        }
    }
    return 0x7C;
}
