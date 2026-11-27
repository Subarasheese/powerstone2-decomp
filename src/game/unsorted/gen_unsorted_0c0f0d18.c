/* game/unsorted: functions 0C0F0D18-0C0F102C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c47b2(int);
int FUN_0c0c480c(int, int, int);
extern int FUN_0c0c4b76();
extern int FUN_0c0c4bcc();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
int FUN_0c0cf440(int, int, int);
int FUN_0c0d409c(int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c0f0d7a(int);
int FUN_0c0f0d18(int a4);
int FUN_0c0f0e08(int a4, int a5, int a6, int a7);

int FUN_0c0f0d18(int a4)
{
    register int t3;
    int t4;
    int t5;

    FUN_0c0e2700((a4 + 0x28), 0x7, (*(signed char *)0xC54223C), 0x1);
    FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
    t3 = *(signed char *)((a4 + 0x2));
    if ((((int)t3 <= (int)0x7) && (t4 = *(signed char *)0xC54223C, (int)t4 > 0)) || (((int)t3 >= (int)0x8) && (((int)t3 <= (int)0x12) && (t5 = *(signed char *)0xC54223C, (int)t5 > (int)0x1)))) {
        return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    }
    return FUN_0c0c47b2(a4);
}

