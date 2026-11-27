/* game/menu/option: functions 0C0FA908-0C0FB8F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f0aa(void);
extern int FUN_0c03f40c();
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c058bd4(void);
int FUN_0c058c32(void);
int FUN_0c05b122(int);
int FUN_0c05f222(void);
int FUN_0c0fb54c(void);
int FUN_0c0fb56c(void);
int FUN_0c0fb592(void);
int FUN_0c0fb5ca(void);
int FUN_0c0fb608(void);
int FUN_0c0fb66a(void);
int FUN_0c0fe4ec(int);
int FUN_0c0fe530(void);
int FUN_0c16f7ba(void);
int syCfgSetSoundMode(int);
int FUN_0c0fb712(void);
int FUN_0c0fb8b0(int a4);


int FUN_0c0fb8b0(int a4)
{
    syCfgSetSoundMode((((a4 == 0)) ? 1 : 0));
    return FUN_0c05b122(a4);
}
