/* game/unsorted: functions 0C081A3C-0C082922, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o372F_uchar { char p[0x372F]; unsigned char v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ec9a(int);
int FUN_0c080364(int, int);
int FUN_0c081dfc(int a4, int a5, int a6, int a7);
int FUN_0c082874(int a4, int a5, int a6, int a7);

int FUN_0c082874(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o3715_uchar *)(a4))->v) = 0xD;
    (((struct o371D_uchar *)(a4))->v) = 0x2;
    FUN_0c081dfc(a4, a5, a6, a7);
    FUN_0c07ec9a(a4);
    *(unsigned short *)((a4 + 0x1C)) = 0x7;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o372F_uchar *)(a4))->v) = 0x63;
    (((struct o3850_uint *)(a4))->v) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
    FUN_0c080364(a4, ((((struct o3850_int *)(a4))->v)));
    (((struct o37B0_float *)(a4))->v) = 1.0f;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0x1, 0xFFFFFFFF, 0x0, 0x1);
    FUN_0c037bf6(a4);
    t0 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 10.0f;
    (((struct o94_float *)(t0))->v) = 10.0f;
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 10.0f;
    (((struct o94_float *)(t0))->v) = 10.0f;
    return 0x94;
}
