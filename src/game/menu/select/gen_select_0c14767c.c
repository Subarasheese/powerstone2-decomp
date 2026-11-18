/* game/menu/select: functions 0C14767C-0C147F54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o41C_float { char p[0x41C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c145c74(int, int);
int FUN_0c145d1c(int, int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
int FUN_0c14767c(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_0c147928(int a4, int a5, int a6);
int FUN_0c147c10(int a4, int a5);
int FUN_0c147e78(int a4, int a5);



int FUN_0c147c10(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        t3 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t3;
        *(unsigned int *)((t0 + 0x4)) = 0xC147928;
    }
    return t3;
}

int FUN_0c147e78(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        t3 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t3;
        *(unsigned int *)((t0 + 0x4)) = 0xC147C60;
    }
    return t3;
}
