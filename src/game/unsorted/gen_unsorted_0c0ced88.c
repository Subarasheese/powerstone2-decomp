/* game/unsorted: functions 0C0CED88-0C0CEE16, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f444(int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c187798(void);
int FUN_0c0ced88(int a4, int a5);

int FUN_0c0ced88(int a4, int a5)
{
    register int t0;
    register int t4;

    t0 = FUN_0c03f444(0x9, 0x0, 0x0);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0CED40;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x40;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct o41C_uchar *)(t0))->v) = 0xCB;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1C)) = ((((struct o24_short *)(a4))->v));
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct o41D_uchar *)(t0))->v) = 0x2;
        (((struct o422_uchar *)(t0))->v) = 0x0;
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x2)) = a5;
        (((struct o48_float *)(t0))->v) = 0.5f;
        (((struct o44_float *)(t0))->v) = 0.5f;
        (((struct o40_float *)(t0))->v) = 0.5f;
        FUN_0c064d5a(t0, 0xC278A84);
        (((struct o12E_ushort *)(t0))->v) = 0x0;
        (((struct o12C_ushort *)(t0))->v) = 0x0;
        t4 = 0x12C;
    }
    return t4;
}
