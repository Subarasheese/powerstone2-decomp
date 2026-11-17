/* game/demo: functions 0C0D4010-0C0D4080, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o41C_ushort { char p[0x41C]; unsigned short v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0d4010(int a4);

int FUN_0c0d4010(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xB, (*(int *)0xC4B40D8));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0xB, (*(int *)0xC4B40D8));
        *(unsigned int *)((t1 + 0x4)) = 0xC0D3F0C;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct oA4_uint *)(t1))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
        (((struct o2C_float *)(t1))->v) = -70.0f;
        (((struct o41C_ushort *)(t1))->v) = ((((struct o24_short *)(a4))->v));
        t0 = 0x24;
    }
    return t0;
}
