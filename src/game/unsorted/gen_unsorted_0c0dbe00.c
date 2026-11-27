/* game/unsorted: functions 0C0DBE00-0C0DC168, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0d60a8(int);
int FUN_0c0d60bc(int);
int nlRand(void);
int FUN_0c0dbe00(int a4);
int FUN_0c0dbfd0(int a4);
int FUN_0c0dc000(int a4);
int FUN_0c0dc03a(int a4, int a5, int a6, int a7);


int FUN_0c0dbfd0(int a4)
{
    register int t1;
    register int t2;

    t1 = FUN_0c0d60a8((*(signed char *)((a4 + 0x2))));
    t2 = t1;
    if (t1 != 0) {
        (((struct o41D_uchar *)(a4))->v) = 0x2;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t2 = 0x16;
    }
    return t2;
}

int FUN_0c0dc000(int a4)
{
    FUN_0c0d60bc((*(signed char *)((a4 + 0x2))));
    (((struct o12E_ushort *)(a4))->v) = 0x0;
    (((struct o41D_uchar *)(a4))->v) = 0x5;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

