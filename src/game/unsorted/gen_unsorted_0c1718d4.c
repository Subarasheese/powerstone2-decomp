/* game/unsorted: functions 0C1718D4-0C171EDE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o114_int { char p[0x114]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_float { char p[0x88]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c03f48a(int, int, int, int);
extern int FUN_0c18778c();
int FUN_0c187798(int, int, int);
int FUN_0c1718d4(int a4, int a5, int a6);
int FUN_0c171962(int a4, int a5, int a6, int a7);
int FUN_0c171984(int a4, int a5, int a6, int a7, float f4);
int FUN_0c171ebe(int a4);


int FUN_0c171962(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return FUN_0c037bf6(a4);
    }
    return t0;
}


int FUN_0c171ebe(int a4)
{
    register int t2;

    if ((*(int *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x38))) != 0) {
        *(unsigned char *)(((*(int *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x38))) + 0x2)) = 0x2;
        *(unsigned int *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x38)) = 0x0;
        t2 = 0x2;
    }
    return t2;
}


