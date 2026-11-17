/* game/unsorted: functions 0C0F7A38-0C0F7B42, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0f7a38(void);
int FUN_0c0f7aae(int a4, int a5, int a6, int a7);

int FUN_0c0f7a38(void)
{
    register int t0;
    register int t7;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t7 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t2) + 0x0))), 0x0, (*(int *)((0xC1FB2C0 + t2))), (*(int *)0xC4B410C));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x2) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0F79AC;
        t7 = 0xFFFFFFFF;
    }
    return t7;
}

int FUN_0c0f7aae(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
        } else {
            (((struct o20_float *)(t0))->v) = 0.0f;
            (((struct o1C_float *)(t0))->v) = 0.0f;
            (((struct o18_float *)(t0))->v) = 0.0f;
        }
    }
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - (1.0f / (float)(*(short *)((a4 + 0x1C)))));
        if (((((struct o20_float *)(t0))->v)) > 0.0f) {
            u0 = (((struct o20_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = u0;
            (((struct o18_float *)(t0))->v) = u0;
            return 0x18;
        }
        return FUN_0c03f346(a4, t0, a6, a7);
    }
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + (1.0f / (float)(*(short *)((a4 + 0x1C)))));
    if (!(1.0f > ((((struct o20_float *)(t0))->v)))) {
        return FUN_0c03f346(a4, t0, a6, a7);
    }
    u0 = (((struct o20_float *)(t0))->v);
    (((struct o1C_float *)(t0))->v) = u0;
    (((struct o18_float *)(t0))->v) = u0;
    return 0x18;
}
