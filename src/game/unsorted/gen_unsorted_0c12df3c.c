/* game/unsorted: functions 0C12DF3C-0C12E026, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c187798(void);
int FUN_0c12df3c(int a4);

int FUN_0c12df3c(int a4)
{
    register int t0;
    register int t13;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t13 = t0;
    if (t0 != 0) {
        t1 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t1, 0x2, 0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned short *)((t1 + 0x6)) = 0x21F;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12E04C;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (t0 + 0x28));
        (((struct o8C_float *)(t1))->v) = 1.0f;
        (((struct o88_float *)(t1))->v) = 1.0f;
        (((struct o84_float *)(t1))->v) = 1.0f;
        (((struct o68_uint *)(t1))->v) = (((((struct oF4_int *)(a4))->v)) + 0x28);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + 0.0f);
        (((struct o20_float *)(t1))->v) = 0.0f;
        (((struct o1C_float *)(t1))->v) = 0.0f;
        (((struct o18_float *)(t1))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o14_uchar *)(t0))->v) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        t13 = 0x0;
    }
    return t13;
}
