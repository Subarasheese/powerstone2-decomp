/* game/unsorted: functions 0C118810-0C118EE4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05f22c(int);
int FUN_0c1171f0(int);
int FUN_0c118d7a(int a4, int a5, int a6, int a7);
int FUN_0c118e94(void);


int FUN_0c118e94(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x14);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC118D7A;
        return t0;
    }
    return 0x0;
}
