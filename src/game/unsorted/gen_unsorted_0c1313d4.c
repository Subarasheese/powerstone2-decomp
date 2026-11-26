/* game/unsorted: functions 0C1313D4-0C13161A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int nlRand(void);
extern int FUN_0c187798();
int FUN_0c1313d4(int a4, int a5, int a6, int a7);
int FUN_0c131556(int a4, int a5);

int FUN_0c1313d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x38E);
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
            t0 = (t0 + 0x4);
            (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) * 1.10000002f);
            (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) - 0.5f);
            (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) * 1.10000002f);
            (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) + 0xAAB);
            (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x1555);
            if ((unsigned int)t0 >= (unsigned int)0x28) {
                break;
            }
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x1E) {
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0333333351f);
            if (!(((((struct oB0_float *)(a4))->v)) > 0.0f)) {
                (((struct oB0_float *)(a4))->v) = 0.0f;
            }
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x3C) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    t0 = 0x0;
    for (;;) {
        (((struct o6C_float *)((*(int *)((((0xC4 + a4) + t0) + 0x0)))))->v) = ((float)((int)((int)(nlRand()) % (int)0x32)) + -25.0f);
        (((struct o70_float *)((*(int *)((((0xC4 + a4) + t0) + 0x0)))))->v) = ((float)((int)((int)(nlRand()) % (int)0x32)) + -25.0f);
        t2 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t1 = (int)((int)(nlRand()) % (int)0x32);
        t0 = (t0 + 0x4);
        (((struct o74_float *)(t2))->v) = ((float)t1 + -25.0f);
        if ((unsigned int)t0 >= (unsigned int)0x28) {
            break;
        }
    }
    return t1;
}

