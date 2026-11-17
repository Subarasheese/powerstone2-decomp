/* game/unsorted: functions 0C1606F4-0C160784, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c1606f4(int a4, int a5);

int FUN_0c1606f4(int a4, int a5)
{
    register int t0;
    register int t5;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = a5;
        *(unsigned int *)((t0 + 0x4)) = 0xC1605F4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t0))->v) = 0xF;
        t3 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t3, 0x0, 0x12, (*(int *)0xC4B40CC));
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned short *)((t3 + 0x6)) = 0x3F;
        (((struct o8C_float *)(t3))->v) = 0.0f;
        (((struct o88_float *)(t3))->v) = 0.0f;
        (((struct o84_float *)(t3))->v) = 0.0f;
        (((struct o6C_float *)(t3))->v) = 0.0f;
        (((struct o70_float *)(t3))->v) = 200.0f;
        (((struct o74_float *)(t3))->v) = 0.0f;
        (((struct o68_uint *)(t3))->v) = (a4 + 0x64);
        t5 = 0x68;
    }
    return t5;
}
