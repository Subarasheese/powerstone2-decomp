/* game/player: functions 0C07E2F4-0C07E328, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o131_uchar { char p[0x131]; unsigned char v; };
struct o134_uchar { char p[0x134]; unsigned char v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o414_uint { char p[0x414]; unsigned int v; };
int FUN_0c07e2f4(int a4, int a5);

int FUN_0c07e2f4(int a4, int a5)
{
    (((struct o134_uchar *)(a4))->v) = a5;
    (((struct o414_uint *)(a4))->v) = (((((unsigned char)a5 << 2) + (unsigned char)a5) << 2) + (*(int *)((((*(signed char *)((0xC53249A + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) << 2) + 0xC25ACBC))));
    (((struct o136_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    return 0x131;
}
