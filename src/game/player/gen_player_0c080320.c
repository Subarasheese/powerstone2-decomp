/* game/player: functions 0C080320-0C080346, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o3755_uchar { char p[0x3755]; unsigned char v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o381C_ushort { char p[0x381C]; unsigned short v; };
struct o90_float { char p[0x90]; float v; };
int FUN_0c080320(int a4, float f4);

int FUN_0c080320(int a4, float f4)
{
    register float u0;
    register int t1;

    (((struct o37B0_float *)(a4))->v) = f4;
    u0 = (((struct o37B0_float *)(a4))->v);
    t1 = *(int *)(((0x118 + a4) + 0x4));
    (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u0;
    (((struct o90_float *)(t1))->v) = u0;
    (((struct o3755_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3753)));
    (((struct o381C_ushort *)(a4))->v) = ((((struct o3818_short *)(a4))->v));
    return 0x381C;
}
