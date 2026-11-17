/* game/hit: functions 0C064D24-0C064D9C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o124_uchar { char p[0x124]; unsigned char v; };
struct o125_uchar { char p[0x125]; unsigned char v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o404_uint { char p[0x404]; unsigned int v; };
int FUN_0c064d24(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_0c064d5a(int a4, int a5);

int FUN_0c064d24(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    (((struct o124_uchar *)(a4))->v) = a5;
    (((struct o125_uchar *)(a4))->v) = a6;
    (((struct o126_uchar *)(a4))->v) = a7;
    (((struct o128_ushort *)(a4))->v) = ((short)(a8 >> 0));
    (((struct o12A_ushort *)(a4))->v) = ((short)(a9 >> 0));
    (((struct o12C_ushort *)(a4))->v) = ((short)(a10 >> 0));
    (((struct o12E_ushort *)(a4))->v) = ((short)(a11 >> 0));
    (((struct o136_uchar *)(a4))->v) = 0x0;
    (((struct o404_uint *)(a4))->v) = 0x0;
    return 0x404;
}

int FUN_0c064d5a(int a4, int a5)
{
    (((struct o124_uchar *)(a4))->v) = (*(signed char *)((a5 + 0x0)));
    (((struct o125_uchar *)(a4))->v) = (*(signed char *)((a5 + 0x1)));
    (((struct o126_uchar *)(a4))->v) = (*(signed char *)((a5 + 0x2)));
    (((struct o128_ushort *)(a4))->v) = (*(short *)((a5 + 0x4)));
    (((struct o12A_ushort *)(a4))->v) = (*(short *)((a5 + 0x6)));
    (((struct o12C_ushort *)(a4))->v) = (*(short *)((a5 + 0x8)));
    (((struct o12E_ushort *)(a4))->v) = (*(short *)((a5 + 0xA)));
    (((struct o136_uchar *)(a4))->v) = 0x0;
    (((struct o404_uint *)(a4))->v) = 0x0;
    return 0x404;
}
