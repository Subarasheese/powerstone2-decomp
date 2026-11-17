/* game/unsorted: functions 0C15FCF8-0C15FDD2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c15fcf8(int a4, int a5);

int FUN_0c15fcf8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15FB90;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798(0x21);
        t2 = 0x0;
        if (((int)(signed char)a4 >= 0) && ((int)(signed char)a4 <= (int)0x7)) {
            t2 = a4;
        }
        *(unsigned char *)((t0 + 0x2)) = t2;
        t3 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t3, ((signed char)t2 << 1), 0x12, (*(int *)0xC4B40CC));
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned short *)((t3 + 0x6)) = 0x1F;
        (((struct o74_float *)(t3))->v) = 50.0f;
        (((struct o8C_float *)(t3))->v) = 0.125f;
        (((struct o88_float *)(t3))->v) = 0.125f;
        (((struct o84_float *)(t3))->v) = 0.125f;
        t3 = (((struct oC8_int *)(t0))->v);
        FUN_0c037498(t3, (((signed char)t2 << 1) + 0x1), 0x12, (*(int *)0xC4B40CC));
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned short *)((t3 + 0x6)) = 0x21F;
        (((struct o74_float *)(t3))->v) = 51.0f;
        (((struct o8C_float *)(t3))->v) = 0.125f;
        (((struct o88_float *)(t3))->v) = 0.125f;
        (((struct o84_float *)(t3))->v) = 0.125f;
        (((struct o20_float *)(t3))->v) = 1.0f;
        (((struct o1C_float *)(t3))->v) = 1.0f;
        (((struct o18_float *)(t3))->v) = 1.0f;
        t1 = 0x18;
    }
    return t1;
}
