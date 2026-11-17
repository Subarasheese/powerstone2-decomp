/* game/unsorted: functions 0C080364-0C080C6A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o372F_uchar { char p[0x372F]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c07e868(int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c080364(int, int);
int FUN_0c080c0e(int a4, int a5, int a6, int a7);

int FUN_0c080c0e(int a4, int a5, int a6, int a7)
{
    (((struct o3715_uchar *)(a4))->v) = 0x3;
    (((struct o3747_uchar *)(a4))->v) = 0x4;
    (((struct o37A4_float *)(a4))->v) = 0.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x7;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o372F_uchar *)(a4))->v) = 0x63;
    (((struct o3850_uint *)(a4))->v) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4, a5, a6)));
    FUN_0c080364(a4, ((((struct o3850_int *)(a4))->v)));
    return FUN_0c07e868(a4, 0x4);
}
