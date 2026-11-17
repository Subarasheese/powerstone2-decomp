/* game/flow: functions 0C120E24-0C120EF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
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
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c120e24(int a4, int a5, float f4);
int FUN_0c120e9e(int a4, int a5);

int FUN_0c120e24(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00999999978f);
            if (!(1.0f > ((((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v)))) {
                (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o20_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = u0;
            (((struct o18_float *)(t0))->v) = u0;
            t1 = 0x18;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o20_float *)(t1))->v) = 0.0f;
        (((struct o1C_float *)(t1))->v) = 0.0f;
        (((struct o18_float *)(t1))->v) = 0.0f;
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + 0.00999999978f);
        if (!(1.0f > ((((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v)))) {
            (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t1 = (((struct oC4_int *)(a4))->v);
        u0 = (((struct o20_float *)(t1))->v);
        (((struct o1C_float *)(t1))->v) = u0;
        (((struct o18_float *)(t1))->v) = u0;
        t0 = 0x18;
    }
    return t0;
}

int FUN_0c120e9e(int a4, int a5)
{
    register int t0;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t5 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0xA0, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC120E24;
        t5 = (FUN_0c187798());
    }
    return t5;
}
