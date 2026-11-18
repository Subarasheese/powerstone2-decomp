/* game/player: functions 0C0D558C-0C0D5830, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0bbf58(int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d5c10(int, int);
float math_cos_angle16(int);
extern int FUN_0c187798();
int FUN_0c0d558c(int a4);
int FUN_0c0d55a2(int a4);
int FUN_0c0d55b4(int a4, int a5, int a6);

int FUN_0c0d558c(int a4)
{
    (((struct o132_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0xFFFFFF0F;
    return 0x12C;
}

int FUN_0c0d55a2(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        return 0x1;
    }
    return 0x0;
}

