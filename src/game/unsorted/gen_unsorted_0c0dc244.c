/* game/unsorted: functions 0C0DC244-0C0DC2BE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0dc244(void);

int FUN_0c0dc244(void)
{
    register int t0;
    register int t2;

    t0 = FUN_0c03f444(0x2, 0x0, 0x0);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0DC240;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct o30_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c064d24(t0, 0x2, 0xE, 0x1, 0x10, 0x0, 0x0, 0x0);
        (((struct o12E_ushort *)(t0))->v) = 0xFFFFFFFF;
        (((struct o12C_ushort *)(t0))->v) = 0x0;
        (((struct o12A_ushort *)(t0))->v) = 0x0;
        t2 = 0x12A;
    }
    return t2;
}
